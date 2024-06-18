import matplotlib.pyplot as plt
import numpy as np
from matplotlib.path import Path
from matplotlib.transforms import Affine2D
from matplotlib.patches import PathPatch

# Function to convert meters to degrees of latitude and longitude
def meters_to_degrees(meters, latitude):
    meters_per_degree_lat = 111320  # Approximate meters per degree latitude
    meters_per_degree_lon = 111320 * np.cos(np.radians(latitude))  # Adjust for longitude based on latitude
    degrees_lat = meters / meters_per_degree_lat
    degrees_lon = meters / meters_per_degree_lon
    return degrees_lat, degrees_lon

# Function to create the sector path with given radius in degrees
def create_sector_path(radius_lat, radius_lon, thetamin=np.radians(35), thetamax=np.radians(-35), num_points=100):
    theta = np.linspace(thetamin, thetamax, num_points)
    x = radius_lon * np.cos(theta)
    y = radius_lat * np.sin(theta)
    vertices = np.vstack((x, y)).T
    vertices = np.vstack(([[0, 0]], vertices, [[0, 0]]))
    codes = [Path.MOVETO] + [Path.LINETO] * (len(vertices) - 2) + [Path.CLOSEPOLY]
    return vertices, codes

# Generate some data (latitude and longitude)
np.random.seed(0)
latitudes = 40 + np.random.rand(20) * 0.1  # Around 40 degrees latitude
longitudes = -74 + np.random.rand(20) * 0.1  # Around -74 degrees longitude

# Define the radius in meters
radius_meters = 30

# Initialize the figure and axis
fig, ax = plt.subplots()
scatter = ax.scatter(longitudes, latitudes)

# To keep track of the currently highlighted point
highlight_patch = None

def onpick(event):
    global highlight_patch
    if event.artist != scatter:
        return

    # Remove the previous highlight
    if highlight_patch:
        highlight_patch.remove()
        highlight_patch = None

    ind = event.ind[0]
    lat = latitudes[ind]
    lon = longitudes[ind]

    # Convert the radius to degrees based on the latitude of the point
    radius_lat, radius_lon = meters_to_degrees(radius_meters, lat)

    # Create the sector path with the converted radius
    vertices, codes = create_sector_path(radius_lat, radius_lon)

    # Rotate the path if needed (set rotation angle here)
    rotation_angle = 0  # Set desired rotation angle
    rotation_transform = Affine2D().rotate_deg(rotation_angle)
    rotated_vertices = rotation_transform.transform(vertices)

    # Translate the path to the current point
    translated_vertices = rotated_vertices + np.array([lon, lat])
    path = Path(translated_vertices, codes)

    # Create a patch and add it to the axis
    highlight_patch = PathPatch(path, facecolor='none', edgecolor='r', lw=2)
    ax.add_patch(highlight_patch)

    fig.canvas.draw()

# Connect the pick event
fig.canvas.mpl_connect('pick_event', onpick)

# Enable picking on the scatter plot
scatter.set_picker(True)

# Set the same aspect ratio
ax.set_aspect('equal')

plt.xlabel('Longitude')
plt.ylabel('Latitude')
plt.title('Interactive Highlighting of Points')
plt.show()
