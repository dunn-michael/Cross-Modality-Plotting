import matplotlib.pyplot as plt
from matplotlib.widgets import CheckButtons

# Create a sample plot
fig, ax = plt.subplots()
plt.subplots_adjust(left=0.3)

# Sample data
t = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
s1 = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
s2 = [9, 8, 7, 6, 5, 4, 3, 2, 1, 0]
l1, = ax.plot(t, s1, visible=False, lw=2)
l2, = ax.plot(t, s2, lw=2)

# Check buttons
rax = plt.axes([0.05, 0.4, 0.2, 0.2], frameon=False)
labels = ['Line 1', 'Line 2']
visibility = [l.get_visible() for l in [l1, l2]]
check = CheckButtons(rax, labels, visibility)

# Remove the cross in the active checkbox
for rect in check.rectangles:
    rect.set_edgecolor('black')  # Set the edge color
    rect.set_linewidth(1)        # Set the edge line width

for line in check.lines:
    for l in line:
        l.set_visible(False)     # Hide the cross

# Toggle visibility of lines
def func(label):
    index = labels.index(label)
    lines = [l1, l2]
    lines[index].set_visible(not lines[index].get_visible())
    plt.draw()

check.on_clicked(func)

# Initial state
checkbox_visible = True
line_visibility = [l.get_visible() for l in [l1, l2]]

# Key event handler
def on_key(event):
    global checkbox_visible, line_visibility
    if event.key == 'h':
        checkbox_visible = not checkbox_visible
        rax.set_visible(checkbox_visible)
        for rect in check.rectangles:
            rect.set_visible(checkbox_visible)
        for label in check.labels:
            label.set_visible(checkbox_visible)
        for line in check.lines:
            for l in line:
                l.set_visible(checkbox_visible)
        if checkbox_visible:
            for i, line in enumerate([l1, l2]):
                line.set_visible(line_visibility[i])
        else:
            line_visibility = [l.get_visible() for l in [l1, l2]]
            for line in [l1, l2]:
                line.set_visible(False)
        plt.draw()

# Connect key event
fig.canvas.mpl_connect('key_press_event', on_key)

plt.show()
