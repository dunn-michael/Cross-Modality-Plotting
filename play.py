# import matplotlib.pyplot as plt
# import numpy as np; np.random.seed(10)

# x,y,z = np.random.randn(3,10)
# xs, ys, zs = [x[4]], [y[5]], [z[5]]
# # print xs, ys, zs
# y[1] = np.nan

# sc = plt.scatter(x,y,c=z,s=36, cmap=plt.cm.jet)
# climx, climy = sc.get_clim()
# plt.scatter(xs,ys,c=zs,s=121, marker="s", cmap=plt.cm.jet, vmin=climx, vmax=climy  )  

# plt.colorbar()

# plt.show()

import matplotlib.pyplot as plt

class custom_objects_to_plot:
    def __init__(self, x, y, name):
        self.x = x
        self.y = y
        self.name = name

a = custom_objects_to_plot(10, 20, "a")
b = custom_objects_to_plot(30, 5, "b")
c = custom_objects_to_plot(40, 30, "c")
d = custom_objects_to_plot(120, 10, "d")

def on_pick(event):
    print(event.artist.obj.name)

fig, ax = plt.subplots()
for obj in [a, b, c, d]:
    artist = ax.plot(obj.x, obj.y, 'ro', picker=5)[0]
    artist.obj = obj

fig.canvas.callbacks.connect('pick_event', on_pick)

plt.show()