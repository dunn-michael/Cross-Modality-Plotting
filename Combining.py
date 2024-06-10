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



def on_press(key):
    '''This Function looks for any keypresses
        Only reacts to the keystrokes that have
        been
        
        These are Escape, right arrow, left arrow'''
    global switch
    global quitGraph
    # print('{0} release'.format(
        # key))
    if key == Key.esc:
        quitGraph = True
        return False
    elif key == Key.right:
        switch = 1
        return False
    
    elif key == Key.left:
        switch = 2
        return False
    
# def on_pick(event):
#     artist = event.artist
#     xmouse, ymouse = event.mouseevent.xdata, event.mouseevent.ydata
#     x, y = artist.get_xdata(), artist.get_ydata()
#     ind = event.ind
#     print 'Artist picked:', event.artist
#     print '{} vertices picked'.format(len(ind))
#     print 'Pick between vertices {} and {}'.format(min(ind), max(ind)+1)
#     print 'x, y of mouse: {:.2f},{:.2f}'.format(xmouse, ymouse)
#     print 'Data point:', x[ind[0]], y[ind[0]]

def on_pick(event):
    print(event.artist.obj.name)



def main():
    global switch
    global quitGraph
    quitGraph = False
    startUp = 0

    # Load the data into the program and intiliaze
    # it into lists
    courseInfo = np.load('course-info.npy')
    npzfile = np.load("oculus-data.npz")
    index = 1000
    timestamp_npz = npzfile['arr_0'][index]
    data = npzfile['arr_1'][index]
    height = npzfile['arr_3'][index]
    width = npzfile['arr_2'][index]
    partNumber = npzfile['arr_4'][index]
    mode = npzfile['arr_5'][index]
    j = 0
    location = []
    # This is for only getting the timestamps that have graphs accociated.
    # This way we aren't generating thousand of other points on the scatterplot
    for i in range(len(npzfile['arr_0'])):
        found = False
        while not found:
            if int(courseInfo[j][2]) >= int(npzfile['arr_0'][i]):
                # print(i,j)
                found = True
                lat.append(courseInfo[j][0])
                long.append(courseInfo[j][1])
                # location.append([courseInfo[j][1], courseInfo[j][0]])
                timestamp.append(courseInfo[j][2])
                heading.append(courseInfo[j][3])
            if j < len(courseInfo) - 1:
                j += 1
            else:
                break

    # The file could have different modes in it, this will update the size of the graph if the mode is different
    update_mode(mode, partNumber)

    # Functions that setup the polar and cartesian graphs
    plt.ion()
    fig = plt.figure()
    ax2 = fig.add_subplot(121)
    ax = fig.add_subplot(122,projection='polar')
    ax.set_thetamin(-horizontal_aperture/2)
    ax.set_thetamax(horizontal_aperture/2)
    theta = np.linspace(-horizontal_aperture/2, horizontal_aperture/2, width)*np.pi/180
    r = np.linspace(range_min, range_max, height)
    T, R = np.meshgrid(theta, r)
    z = np.zeros_like(T)
    plot = ax.pcolormesh(T, R, z, cmap='gray', shading='auto', vmin=0, vmax=100)
    ax.set_theta_zero_location("N")
    ax.set_ylim(range_min, range_max)

    # Initializes the color, size and z order of the scatterpoint plot
    sizes = [20]*len(long)
    color = [10]*len(long)
    z_order = [1]*len(long)

    while True:
        # If esc is pressed
        if quitGraph:
            break

        # Without this the graph wouldn't initialize properly
        # NOTE: It hasn't properly initiliazed since I added in the keystroke detection
        # Without this the graph works great
        if(startUp == 0):
            z_order[index] = 2
            color[index] = 7
            sizes[index] = 90
            ax2.scatter(long,lat, c = color,s=sizes, cmap=plt.cm.jet)
            # ax2.scatter(location, c = color,s=sizes, cmap=plt.cm.jet)
            plot.set_array(np.asarray(data).reshape(height, width))
            fig.canvas.draw()
            fig.canvas.flush_events()
            plt.show()
            startUp += 1

        # artist = ax.plot(long, lat, 'ro', picker=5)[0]

        # fig.canvas.callbacks.connect('pick_event', on_pick)

        # Function for keystrokes
        with Listener(
            on_press=on_press
            # on_release=on_release
            ) as listener:
                listener.join()
        
        data = npzfile['arr_1'][index]

        # NOTE: Remnant from when the code was terminal driven, if you would like this back comment out the
        # with listener code and uncomment the direction based if statements. Also comment out the if
        # statements that have switch included
        # direction = input('L or R : ').lower()    
        # if(direction == 'l'):
        if switch == 2:
            if index != 0:
                # Supposed to reset the points that are no longer selected. This semi resets them
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
        # ax2.scatter(location, c = color,s=sizes, cmap=plt.cm.jet)
        fig.canvas.draw()
        fig.canvas.flush_events()
        plt.show()
                
        # time.sleep(.01)



main()








# tolerance = 10 # points
# ax.plot(range(10), 'ro-', picker=tolerance)

# fig.canvas.callbacks.connect('pick_event', on_pick)

# plt.show()