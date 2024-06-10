import numpy as np
import matplotlib.pyplot as plt
# import math

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


j = 0
courseInfo = np.load('course-info.npy')
npzfile = np.load("oculus-data.npz")
print(npzfile)
timestamp_npz = npzfile['arr_0'][0]
data = npzfile['arr_1'][0]
height = npzfile['arr_2'][0]
width = npzfile['arr_3'][0]
# array = np.reshape(np.array(data), width, height)
# fig, ax = plt.subplots(subplot_kw=dict(projection='polar'), figsize=(9,9))
# plot.set_array(np.asarray(data))
# fig.canvas.draw()
# fig.canvas.flush_events()
# array = data
# plt.imshow(array)



# print(oculusInfo[1]* 10 **-18)
# print(courseInfo[1][2] * 10 ** -18)
# print(round(courseInfo[1][2] * 10 **-18, 15))
# TODO:
# Iterate through courseInfo list and nest a for loop to iterate through
# the oculusInfo list until a value bigger than the value foudn in the
# course info list then when you get to the next course info value,
# start the index of the nested for list three values before the last
# index value in case they share the same point
# TODO 2:
# make a graph with blank cones that follow the path of the WAMV
# Use the arrow keys to go from one cone to another, then in a graph next to
# that one show the graph of the WAMV data. Then overlay the graph of the blank
# cones over a graph of the sidescan data combined so that we can see the data
# in both the WAMV data and the sidescan data
found = False
j = 0
# print(oculusInfo)
# print(int(oculusInfo[0]))
# # print(int(courseInfo[150][2]))
# if(int(courseInfo[160][2]) >= int(oculusInfo[0])):
#     print(True)
# print(len(courseInfo))
# print(len(oculusInfo))
# print(oculusInfo)

for i in range(len(npzfile['arr_0'])):
    found = False
    while not found:
        if int(courseInfo[j][2]) >= int(npzfile['arr_0'][i]):
            print(i,j)
            found = True
            lat.append(courseInfo[j][0])
            long.append(courseInfo[j][1])
            timestamp.append(courseInfo[j][2])
            heading.append(courseInfo[j][3])
        if j < len(courseInfo) - 1:
            j += 1
        else:
            break

            

# for i in range(len(courseInfo)):
#     found = False
#     while not found:
#         if int(courseInfo[i][2]) >= int(oculusInfo[j]):
#             found = True
#             lat.append(courseInfo[i][0])
#             long.append(courseInfo[i][1])
#             timestamp.append(courseInfo[i][2])
#             heading.append(courseInfo[i][3])
#             if j>3:
#                 j = j-3
#             print("Appended")
#             print(int(courseInfo[i][2]))
#             print(int(oculusInfo[j]))                

#         elif j < len(oculusInfo) -1:
#             j += 1
#             # print("added")
#         else:
#             # print("break")
#             j = 0
#             break
    # for val in oculusInfo:
        # courseInfo[i][2] = round(courseInfo[i][2] * 10 ** -18, 16) 
        # val = val * 10 ** -18
        # print(courseInfo)
        # print(val)
        # if(round(courseInfo[i][2] * 10 ** -18, 15) == val * 10 ** -18):
        # hyp = math.sqrt(long[-1]**2 + lat[-1]**2)
        # x.append(np.cos(np.radians(heading[-1])))
        # y.append(np.sin(np.radians(heading[-1])))
        # j = 0
            # print("appended")
# for i in range(len(heading:

#     x = np.cos(np.radians(val))
#     y = np.sin(np.radians(val))
sizes = [20]*len(long)
color = [10]*len(long)
sizes[5] = 90
color[5] = 7
plt.scatter(long,lat, c = color,s=sizes, cmap=plt.cm.jet)
plt.colorbar()
# plt.scatter(long,lat)
# x = 1
# y = 2
# plt.quiver(long,lat, 10, 20)
plt.draw()
plt.show()