import numpy as np
import matplotlib.pyplot as plt
import time
# import math
# import keyboard
from pynput.keyboard import Key, Listener

lat = []
long = []
timestamp = []
heading= []
x=[]
y=[]
oculusTimestamp = []
width = []
height = []
imgData = []
plot = None
partNumber = []
mode = []


j = 0

def update_mode(mode, part_num):

    global frequency
    global range_max
    global range_min
    global range_resolution
    global horizontal_aperture
    global vertical_aperture
    global num_beams
    global angular_resolution
    global beam_separation


    # M750d part number
    if part_num == 1032:
        # Properties of when the sonar is the m750d and set to LF mode
        if mode == 1:
            frequency = 750            # KHz
            range_max = 120            # m
            range_min = 0.1            # m
            range_resolution = 4       # mm
            horizontal_aperture = 130  # degrees
            vertical_aperture = 20     # degrees
            num_beams = 512
            angular_resolution = 1     # degrees
            beam_separation = 0.25     # degrees
        # Properties of when the sonar is the m750d and set to HF mode
        elif mode == 2:
            frequency = 1200           # KHz
            range_max = 40             # m
            range_min = 0.1            # m
            range_resolution = 2.5     # mm
            horizontal_aperture = 70   # degrees
            vertical_aperture = 12     # degrees
            num_beams = 512
            angular_resolution = 0.6   # degrees
            beam_separation = 0.16     # degrees
        # Only LF and HF modes exist, throw error if anything else is reported
        else:
            print("ERROR, INVALID MODE SET")
            print("Received Mode Value Was: ", mode)
            print("Terminating Program")
            exit()
    # M1200d part number
    if part_num == 1042:
        # Properties of when the sonar is the m750d and set to LF mode
        if mode == 1:
            frequency = 1200           # KHz
            range_max = 30             # m
            range_min = 0.1            # m
            range_resolution = 2.5     # mm
            horizontal_aperture = 130  # degrees
            vertical_aperture = 20     # degrees
            num_beams = 512
            angular_resolution = 0.6   # degrees
            beam_separation = 0.25     # degrees
        # Properties of when the sonar is the m750d and set to HF mode
        elif mode == 2:
            frequency = 2100           # KHz
            range_max = 10             # m
            range_min = 0.1            # m
            range_resolution = 2.5     # mm
            horizontal_aperture = 60   # degrees
            vertical_aperture = 12     # degrees
            num_beams = 512
            angular_resolution = 0.4   # degrees
            beam_separation = 0.16     # degrees
        # Only LF and HF modes exist, throw error if anything else is reported
        else:
            print("ERROR, INVALID MODE SET")
            print("Received Mode Value Was: ", mode)
            print("Terminating Program")
            exit()


def on_release(key):
    global switch
    # global quitGraph
    print('{0} release'.format(
        key))
    if key == Key.right:
        switch = 1
        return False
    
    elif key == Key.left:
        switch = 2
        return False
    # elif key == Key.esc:
        # quitGraph = True
def main():
    global switch
    # global quitGraph
    # quitGraph = False
    startUp = 0

    courseInfo = np.load('course-info.npy')
    npzfile = np.load("oculus-data.npz")
    # print(len(npzfile['arr_1']))
    index = 0
    timestamp_npz = npzfile['arr_0'][index]
    data = npzfile['arr_1'][index]
    # print(data[1])
    height = npzfile['arr_3'][index]
    width = npzfile['arr_2'][index]
    partNumber = npzfile['arr_4'][index]
    mode = npzfile['arr_5'][index]
    j = 0

    for i in range(len(npzfile['arr_0'])):
        found = False
        while not found:
            if int(courseInfo[j][2]) >= int(npzfile['arr_0'][i]):
                # print(i,j)
                found = True
                lat.append(courseInfo[j][0])
                long.append(courseInfo[j][1])
                timestamp.append(courseInfo[j][2])
                heading.append(courseInfo[j][3])
            if j < len(courseInfo) - 1:
                j += 1
            else:
                break


    update_mode(mode, partNumber)
    # plt.subplot(2,1,2)
    plt.ion()
    # fig, ax = plt.subplots(122,subplot_kw=dict(projection='polar'), figsize=(9,9))
    # fig, ax = plt.subplots(subplot_kw=dict(projection='polar'), figsize=(9,9))
    fig = plt.figure()
    # fig, (ax,ax2) = plt.subplots(1,2,subplot_kw=dict(projection='polar'))
    ax2 = fig.add_subplot(121)
    ax = fig.add_subplot(122,projection='polar')
    # ax2.projection = 'caresian'
    ax.set_thetamin(-horizontal_aperture/2)
    ax.set_thetamax(horizontal_aperture/2)
    theta = np.linspace(-horizontal_aperture/2, horizontal_aperture/2, width)*np.pi/180
    r = np.linspace(range_min, range_max, height)
    T, R = np.meshgrid(theta, r)
    z = np.zeros_like(T)
    plot = ax.pcolormesh(T, R, z, cmap='gray', shading='auto', vmin=0, vmax=100)
    ax.set_theta_zero_location("N")
    # Sets the y_lim to match the current range of the sonar
    ax.set_ylim(range_min, range_max)
    # plot.set_array((np.asarray(data).reshape(height, width)))
    # fig.canvas.draw()
    # fig.canvas.flush_events()

    sizes = [20]*len(long)
    color = [10]*len(long)
    z_order = [1]*len(long)
    while True:
        if(startUp == 0):
            print("entered")
            z_order[index] = 2
            color[index] = 7
            sizes[index] = 90
            ax2.scatter(long,lat, c = color,s=sizes, cmap=plt.cm.jet)
            plot.set_array(np.asarray(data).reshape(height, width))
            fig.canvas.draw()
            fig.canvas.flush_events()
            plt.show()
            print("graphed")
            startUp += 1

        with Listener(
            # on_press=on_press,
            on_release=on_release) as listener:
                listener.join()
        # if quitGraph:
            # quit
        # ax2.scatter(long,lat,zorder = z_order, c = color,s=sizes, cmap=plt.cm.jet)

        
        # plt.subplot(2,1,2)
        data = npzfile['arr_1'][index]
        # direction = input('L or R : ').lower()    
        # if(direction == 'l'):
        if switch == 2:
            if index != 0:
                z_order[index] = 1
                color[index] = 10
                sizes[index] = 20
                index -= 1
                switch = 0

                

        # elif(direction == 'r'):
        elif switch == 1:
            if index != len(npzfile['arr_1']):
                z_order[index] = 1
                color[index] = 10
                sizes[index] = 20
                index += 1
                switch = 0
        z_order[index] = 2
        color[index] = 7
        sizes[index] = 90
        plot.set_array(np.asarray(data).reshape(height, width))
        ax2.scatter(long,lat, c = color,s=sizes, cmap=plt.cm.jet)
        fig.canvas.draw()
        fig.canvas.flush_events()
        plt.show()

        # plt.subplot(2,1,1)
        # sizes[index] = 90
        # color[index] = 7
        # z_order[index] = 2

        # for i in range(len(z_order)):
        #     if i == index:
        #         z_order[i] = 2
        #         color[i] = 7
        #         sizes[i] = 90
        #         print("entered")
        #     else:
        #         z_order[i] = 1
        #         color[i] = 10
        #         sizes[i] = 20
                

        # time.sleep(.01)



main()