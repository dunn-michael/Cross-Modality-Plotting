import matplotlib.pyplot as plt
import numpy as np
from matplotlib.path import Path
from matplotlib.patches import PathPatch
from matplotlib.transforms import Affine2D

# Function to create the sector path with rotation
def create_sector_path(radius=1.0, thetamin=np.radians(35), thetamax=np.radians(-35), num_points=100):
    theta = np.linspace(thetamin, thetamax, num_points)
    x = radius * np.cos(theta)
    y = radius * np.sin(theta)
    
    # Vertices for the sector
    vertices = np.vstack((x, y)).T
    # Add the center point and the starting point to close the sector
    vertices = np.vstack(([[0, 0]], vertices, [[0, 0]]))
    
    # Codes for the path
    codes = [Path.MOVETO] + [Path.LINETO] * (len(vertices) - 2) + [Path.CLOSEPOLY]
    
    return vertices, codes

# Generate some data
np.random.seed(0)
x = np.random.rand(20)
y = np.random.rand(20)

# Create the base sector vertices and codes
vertices, codes = create_sector_path()

# Highlight specific points with different rotation angles
highlighted_indices = [2, 5, 8]  # Example indices to highlight
rotation_angles = [45, 90, 135]  # Example rotation angles for each point in degrees

# Create a scatter plot
fig, ax = plt.subplots()
ax.scatter(x, y)

# Loop through each highlighted point and plot it with the respective rotation
for index, angle in zip(highlighted_indices, rotation_angles):
    rotation_transform = Affine2D().rotate_deg(angle)
    rotated_vertices = rotation_transform.transform(vertices)
    path = Path(rotated_vertices, codes)
    patch = PathPatch(path, facecolor='none', edgecolor='r', lw=2)
    ax.scatter(x[index], y[index], s=500, facecolor='none', edgecolor='r', marker=path)

# Set the same aspect ratio
ax.set_aspect('equal')

plt.show()
