"""
make a scatter plot with varying color and size arguments
code mostly from:
http://matplotlib.sourceforge.net/mpl_examples/pylab_examples/scatter_demo2.py
"""
import matplotlib
import numpy as np
import matplotlib.pyplot as plt
import matplotlib.mlab as mlab
import matplotlib.cbook as cbook

# load a numpy record array from yahoo csv data with fields date,
# open, close, volume, adj_close from the mpl-data/example directory.
# The record array stores python datetime.date as an object array in
# the date column
datafile = cbook.get_sample_data('/usr/share/matplotlib/sampledata/goog.npy')
#datafile = /usr/share/matplotlib/sampledata
r = np.load(datafile).view(np.recarray)
r = r[-250:] # get the most recent 250 trading days

delta1 = np.diff(r.adj_close)/r.adj_close[:-1]

# size in points ^2
volume = (15*r.volume[:-2]/r.volume[0])**2
close = 0.003*r.close[:-2]/0.003*r.open[:-2]

fig = plt.figure()
ax = fig.add_subplot(111)
## store the scatter in abc object
abc=ax.scatter(delta1[:-1], delta1[1:], c=close, s=volume, alpha=0.75)
### if you comment that line of set False to True, you'll see what happens.
abc.set_visible(False)
#ticks = arange(-0.06, 0.061, 0.02)
#xticks(ticks)
#yticks(ticks)

ax.set_xlabel(r'$\Delta_i$', fontsize=20)
ax.set_ylabel(r'$\Delta_{i+1}$', fontsize=20)
ax.set_title('Volume and percent change')
ax.grid(True)

plt.show()