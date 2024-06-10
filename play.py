import matplotlib.pyplot as plt
import numpy as np; np.random.seed(10)

x,y,z = np.random.randn(3,10)
xs, ys, zs = [x[4]], [y[5]], [z[5]]
# print xs, ys, zs
y[1] = np.nan

sc = plt.scatter(x,y,c=z,s=36, cmap=plt.cm.jet)
climx, climy = sc.get_clim()
plt.scatter(xs,ys,c=zs,s=121, marker="s", cmap=plt.cm.jet, vmin=climx, vmax=climy  )  

plt.colorbar()

plt.show()