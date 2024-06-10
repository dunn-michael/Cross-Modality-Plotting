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

# import matplotlib.pyplot as plt

# class custom_objects_to_plot:
#     def __init__(self, x, y, name):
#         self.x = x
#         self.y = y
#         self.name = name

# a = custom_objects_to_plot(10, 20, "a")
# b = custom_objects_to_plot(30, 5, "b")
# c = custom_objects_to_plot(40, 30, "c")
# d = custom_objects_to_plot(120, 10, "d")

# def on_pick(event):
#     print(event.artist.obj.name)

# fig, ax = plt.subplots()
# for obj in [a, b, c, d]:
#     artist = ax.plot(obj.x, obj.y, 'ro', picker=5)[0]
#     artist.obj = obj

# fig.canvas.callbacks.connect('pick_event', on_pick)

# plt.show()

import matplotlib.pyplot as plt
import numpy as np

# Sample data (longitude, latitude)
x = np.array([-74.006, -118.2437, -0.1276, 151.2093, 139.6917])  # Example longitudes
y = np.array([40.7128, 34.0522, 51.5074, -33.8688, 35.6895])  # Example latitudes
labels = ['New York', 'Los Angeles', 'London', 'Sydney', 'Tokyo']  # Example labels for each point

# Convert degrees to radians
def deg2rad(deg):
    return deg * (np.pi / 180)

# Haversine formula to calculate distance between two points on the Earth
def haversine(lon1, lat1, lon2, lat2):
    # Radius of the Earth in kilometers
    R = 6371.0
    
    # Convert coordinates from degrees to radians
    lon1, lat1, lon2, lat2 = map(deg2rad, [lon1, lat1, lon2, lat2])
    
    # Differences
    dlon = lon2 - lon1
    dlat = lat2 - lat1
    
    # Haversine formula
    a = np.sin(dlat / 2)**2 + np.cos(lat1) * np.cos(lat2) * np.sin(dlon / 2)**2
    c = 2 * np.arctan2(np.sqrt(a), np.sqrt(1 - a))
    
    # Distance
    distance = R * c
    return distance

# Create a scatter plot
fig, ax = plt.subplots()
scatter = ax.scatter(x, y, color='blue')  # Set a fixed color for the points
highlight, = ax.plot([], [], 'o', markersize=12, markerfacecolor='none', markeredgecolor='red', markeredgewidth=2)

# Initialize the index of the selected point
selected_index = None

# Function to update the highlight
def update_highlight():
    if selected_index is not None:
        highlight.set_data(x[selected_index], y[selected_index])
    else:
        highlight.set_data([], [])
    fig.canvas.draw()

# Function to be called when a point is clicked
def on_click(event):
    global selected_index
    if event.inaxes == ax:
        click_x, click_y = event.xdata, event.ydata

        print(f"Click coordinates: longitude={click_x}, latitude={click_y}")

        if click_x is None or click_y is None:
            print("Click coordinates are None, skipping...")
            return

        distances = np.array([haversine(click_x, click_y, lon, lat) for lon, lat in zip(x, y)])

        print(f"Distances: {distances}")

        if distances.size == 0:
            print("Distances array is empty, skipping...")
            return

        selected_index = np.argmin(distances)
        print(f"Closest index: {selected_index}")

        print(f"Clicked on point: (longitude={x[selected_index]}, latitude={y[selected_index]}, label={labels[selected_index]})")

        update_highlight()

# Function to be called when a key is pressed
def on_key(event):
    global selected_index
    if selected_index is None:
        return

    if event.key == 'right':
        selected_index = (selected_index + 1) % len(x)
    elif event.key == 'left':
        selected_index = (selected_index - 1) % len(x)
    elif event.key == 'up':
        # Sort by latitude and navigate
        sorted_indices = np.argsort(y)
        current_position = np.where(sorted_indices == selected_index)[0][0]
        next_position = (current_position + 1) % len(y)
        selected_index = sorted_indices[next_position]
    elif event.key == 'down':
        # Sort by latitude and navigate
        sorted_indices = np.argsort(y)
        current_position = np.where(sorted_indices == selected_index)[0][0]
        next_position = (current_position - 1) % len(y)
        selected_index = sorted_indices[next_position]

    print(f"Selected index: {selected_index}")
    print(f"Navigated to point: (longitude={x[selected_index]}, latitude={y[selected_index]}, label={labels[selected_index]})")

    update_highlight()

# Connect the click event to the handler function
fig.canvas.mpl_connect('button_press_event', on_click)
# Connect the key press event to the handler function
fig.canvas.mpl_connect('key_press_event', on_key)

plt.xlabel('Longitude')
plt.ylabel('Latitude')
plt.title('Interactive Scatter Plot')
plt.show()
