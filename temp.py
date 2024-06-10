import matplotlib.pyplot as plt

x = [1,2,3]
y = [1,2,3]
a = [2,3,4]
b = [5,7,5]

fig = plt.figure()
ax1 = plt.subplot(121)
ax2 = plt.subplot(122, projection='polar')
ax2.set_thetamin(-20/2)
ax2.set_thetamax(70/2)
ax1.scatter(x,y)
ax2.scatter(a,b)
plt.show()