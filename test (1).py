import numpy as np
import matplotlib.pyplot as plt
import time
# import math
# import keyboard
# from pynput.keyboard import Key, Listener

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

# def on_release(key):
#     global index
#     print('{0} release'.format(
#         key))
#     if key == Key.right:
#         # Stop listener
#         print("pressed")
#         # pritn(index)
#         index += 1
#         return False
    
#     elif key == Key.left:
#         print("left")
#         index -= 1
#         print(index)
#         return False

def setup_graph():
    pass

def update_graph():
    pass
def main():
    global index
    # courseInfo = np.load('course-info.npy')
    npzfile = np.load("oculus-data.npz")
    print(len(npzfile['arr_1']))
    index = 0
    timestamp = npzfile['arr_0'][index]
    data = npzfile['arr_1'][index]
    print(data[1])
    height = npzfile['arr_2'][index]
    width = npzfile['arr_3'][index]
    partNumber = npzfile['arr_4'][index]
    mode = npzfile['arr_5'][index]

    height = npzfile['arr_3'][index]
    width = npzfile['arr_2'][index]
    update_mode(mode, partNumber)
    plt.ion()
    fig, ax = plt.subplots(subplot_kw=dict(projection='polar'), figsize=(9,9))
    plt.ion()
    ax.set_thetamin(-horizontal_aperture/2)
    ax.set_thetamax(horizontal_aperture/2)
    theta = np.linspace(-horizontal_aperture/2, horizontal_aperture/2, width)*np.pi/180
    r = np.linspace(range_min, range_max, height)
    T, R = np.meshgrid(theta, r)
    z = np.zeros_like(T)
    plot = ax.pcolormesh(T, R, z, cmap='gray', shading='auto', vmin=0, vmax=100)
    ax.set_theta_zero_location("N")
    ax.set_ylim(range_min, range_max)
    plot.set_array((data.reshape(height, width)))
    fig.canvas.draw()
    fig.canvas.flush_events()
    while True:
        index +=1
        print(index)
        plt.ion()
        # direction = input('L or R : ').lower()    
        # if(direction == 'l'):
        #     if index != 0:
        #         index -= 1
        # elif(direction == 'r'):
        #     if index != len(npzfile['arr_1']):
        #         index += 1
        # with Listener(
        #     # on_press=on_press,
        #     on_release=on_release) as listener:
        #     listener.join()
        data = npzfile['arr_1'][index]
        plot.set_array((data.reshape(height, width)))
        fig.canvas.draw()
        fig.canvas.flush_events()
        # plt.show()
        # time.sleep(.01)



main()
