import numpy as np
import matplotlib.pyplot as plt
from matplotlib.path import Path
from matplotlib.patches import PathPatch
from matplotlib.transforms import Affine2D
import matplotlib.gridspec as gridspec
from osgeo import gdal
from PIL import Image
from matplotlib.widgets import CheckButtons
import os
from tkinter import filedialog

lat = []
long = []
timestamp = []
heading= []
x=[]
y=[]
oculusTimestamp = []
imgData = []
plot = None
partNumber = []
mode = []
selected_index = 0
quitGraph = False
j = 0
highlight_patch = None
image_artists = []
zoomed = False
path = False

def meters_to_degrees(meters):
    """Changes the unit from meters to degrees so it can be plotted on lat and long graph"""

    meters_per_degree_lat = 111320
    meters_per_degree_long = 111320

    degrees_lat = meters / meters_per_degree_lat
    degrees_long = meters / meters_per_degree_long

    return degrees_lat,degrees_long

def create_sector_path(radius_lat, radius_long, thetamin=np.radians(65), thetamax=np.radians(-65), num_points=100):
    """Creates the shape of the sonar outline on the path graph"""

    theta = np.linspace(thetamin, thetamax, num_points)
    x = radius_long * np.cos(theta)
    y = radius_lat * np.sin(theta)
    
    vertices = np.vstack((x, y)).T
    vertices = np.vstack(([[0, 0]], vertices, [[0, 0]]))
    
    codes = [Path.MOVETO] + [Path.LINETO] * (len(vertices) - 2) + [Path.CLOSEPOLY]
    
    return vertices, codes

def read_tfw(tfw_path):
    """Reads the TFW files"""

    with open(tfw_path, 'r') as f:
        lines = f.readlines()
        x_pixel_length = float(lines[0])
        x_rot_angle = float(lines[1])
        y_rot_angle = float(lines[2])
        neg_y_pixel_length = float(lines[3])
        x_coord = float(lines[4])
        y_coord = float(lines[5])
        return x_pixel_length, neg_y_pixel_length, x_coord, y_coord

def read_tiff_image(img_path):
    """Read TIFF image so you can graph the path"""
    try:
        img = Image.open(img_path)
        img.apply_transparency()
        img_data = np.array(img)
        
        return img_data

    except Exception as e:
        print(f"Error reading TIFF image {img_path}: {e}")
        raise

def update_mode(mode, part_num):
    """Updates the mode so that we can get proper range and aperture data"""
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
            horizontal_aperture =ax2
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

def update_highlight():
    """Draws the red sonar outline on the sidescan images"""

    global highlight_patch
    radius_lat, radius_long = meters_to_degrees(range_max)
    vertices, codes = create_sector_path(radius_lat, radius_long)
    rotation_transform = Affine2D().rotate_deg(heading[selected_index])
    rotated_vertices = rotation_transform.transform(vertices)
    path = Path(rotated_vertices, codes)
    if highlight_patch is not None:
        highlight_patch.remove()
    highlight_patch = PathPatch(path, facecolor='none', edgecolor='r', lw=2)
    highlight_patch.set_transform(Affine2D().translate(long[selected_index], lat[selected_index]) + ax2.transData)
    rad_heading = deg2rad(heading[selected_index])
    ax.set_theta_offset(rad_heading)
    ax2.add_patch(highlight_patch)

def deg2rad(deg):
    """Converts degrees to radians"""
    return deg * (np.pi / 180)

def haversine(lon1, lat1, lon2, lat2):
    R = 6371.0
    
    lon1, lat1, lon2, lat2 = map(deg2rad, [lon1, lat1, lon2, lat2])
    
    dlon = lon2 - lon1
    dlat = lat2 - lat1
    
    a = np.sin(dlat / 2)**2 + np.cos(lat1) * np.cos(lat2) * np.sin(dlon / 2)**2
    c = 2 * np.arctan2(np.sqrt(a), np.sqrt(1 - a))
    

    distance = R * c
    return distance

def on_click(event):
    """Gets called when you click on the sidescan data graph
    Changes the selected index and updates the highlight so that
    the proper area is highlighted on the graph"""

    global selected_index
    global data
    global npzfile

    if event.inaxes == ax2:

        click_x, click_y = event.xdata, event.ydata


        print(f"Click coordinates: longitude={click_x}, latitude={click_y}")

        if click_x is None or click_y is None:
            print("Click coordinates are None, skipping...")
            return


        distances = np.array([haversine(click_x, click_y, lon, lati) for lon, lati in zip(long, lat)])


        print(f"Distances: {distances}")

        if distances.size == 0:
            print("Distances array is empty, skipping...")
            return

        if distances.ndim != 1:
            print(f"Distances array has unexpected shape: {distances.shape}, skipping...")
            return

        selected_index = np.argmin(distances)
        

        selected_index = int(selected_index)
        
        print(f"Closest index: {selected_index}")
        closest_x = long[selected_index]
        closest_y = lat[selected_index]

        print(f"Clicked on point: (longitude={closest_x}, latitude={closest_y})")
        update_highlight()

        data = npzfile['arr_1'][selected_index]
        plot.set_array(np.asarray(data).reshape(height, width))
        fig.canvas.draw_idle()
        fig.canvas.flush_events()

def on_key(event):
    """Gets called when you use the arrow keys,
    Changes the selected index and updates the highlight so that
    the proper area is highlighted on the graph"""

    global zoomed
    global quitGraph
    global selected_index
    global path
    global scatter
    if selected_index is None:
        return

    if event.key == 'z':
        zoomed = not zoomed
        if not zoomed:
            ax2.set_xlim(xax_min, xax_max + img_width)
            ax2.set_ylim(yax_min - img_height, yax_max)
        else:
            range = meters_to_degrees(range_max)
            range_x = range[0]
            range_y = range[1]
            ax2.set_xlim(long[selected_index] - range_x, long[selected_index] + range_x)
            ax2.set_ylim(lat[selected_index] - range_y, lat[selected_index] + range_y)

    if event.key == "p":
        path = not path
        scatter.set_visible(path)

    if event.key == 'right':
        selected_index = (selected_index + 1) % len(long)
    elif event.key == 'left':
        selected_index = (selected_index - 1) % len(long)
    elif event.key == 'up':
        if(selected_index + 5 > len(long)):
            selected_index = len(long)
        else:
            selected_index = (selected_index + 5) % len(long)
    elif event.key == 'down':
        if(selected_index - 5 < 0):
            selected_index = 0
        else:
            selected_index = (selected_index - 5) % len(long)
    elif event.key == 'escape':
        plt.close()
        quitGraph = True


    update_highlight()
    data = npzfile['arr_1'][selected_index]
    plot.set_array(np.asarray(data).reshape(height, width))
    fig.canvas.draw_idle()
    fig.canvas.flush_events()

def update_images(label):
    index = int(label.split(' ')[-1]) - 1
    image_artists[index].set_visible(not image_artists[index].get_visible())
    # plt.draw()
    fig.canvas.draw_idle()
    fig.canvas.flush_events()

def main():
    global quitGraph
    global ax
    global ax2
    global highlight
    global fig
    global plt
    global npzfile
    global plot
    global height
    global width
    global image_artists
    global xax_min
    global xax_max
    global yax_min
    global yax_max
    global img_height
    global img_width
    global scatter

    file_long = []
    file_lat  = []

    sidescan_images = []
    tfw_files = []
    highlighted_index = []

    choice = ''
    while choice != 'type' and choice != 'choose':
        choice = input("Would you like to type your file directory or choose it? (type / choose) : ").lower()

    if choice == 'choose':
        # Tk().withdraw() # prevents an empty tkinter window from appearing
        # tkin
        directory = filedialog.askdirectory()
    elif choice == 'type':
        directory = input("Enter the directory with your TIFF and TFW files : ")

    for filename in os.listdir(directory):
        if filename.endswith('.TFW'):
            tfw_files.append(directory + '/' + filename)
            filename_notype = filename.split('.TFW')[0]
            sidescan_images.append(directory + '/' + filename_notype + '.Tiff')

    sidescan_images = sorted(sidescan_images)
    tfw_files = sorted(tfw_files)

    courseInfo = np.load('Plotting/course-info.npy')
    npzfile = np.load("Plotting/oculus-data.npz")
    index = 0
    timestamp_npz = npzfile['arr_0'][index]
    data = npzfile['arr_1'][index]
    height = npzfile['arr_3'][index]
    width = npzfile['arr_2'][index]
    partNumber = npzfile['arr_4'][index]
    mode = npzfile['arr_5'][index]
    j = 0
    for i in range(len(npzfile['arr_0'])):
        found = False
        while not found:
            if int(courseInfo[j][2]) >= int(npzfile['arr_0'][i]):
                found = True
                lat.append(courseInfo[j][0])
                long.append(courseInfo[j][1])
                timestamp.append(courseInfo[j][2])
                heading.append(courseInfo[j][3])
            if j < len(courseInfo) - 1:
                j += 1
            else:
                break

    update_mode(mode, partNumber)
    fig = plt.figure(figsize=(15,8))
    # ax2 = fig.add_subplot(121)
    # ax = fig.add_subplot(122, projection='polar')

    gs = gridspec.GridSpec(2,3, width_ratios=[1,4,3])

    check_ax = fig.add_subplot(gs[:,0])
    ax2 = fig.add_subplot(gs[:,1])
    ax = fig.add_subplot(gs[:,2], projection='polar')

    check_ax.axis('off')

    ax.set_thetamin(-horizontal_aperture / 2)
    ax.set_thetamax(horizontal_aperture / 2)
    theta = np.linspace(-horizontal_aperture / 2, horizontal_aperture / 2, width) * np.pi / 180
    r = np.linspace(range_min, range_max, height)
    T, R = np.meshgrid(theta, r)
    z = np.zeros_like(T)
    plot = ax.pcolormesh(T, R, z, cmap='gray', shading='auto', vmin=0, vmax=100)
    ax.set_ylim(range_min, range_max)
    highlight, = ax2.plot([], [], 'o', markersize=12, markerfacecolor='none', markeredgecolor='red', markeredgewidth=2)

    check_labels = []
    for i, (img_path, tfw_path) in enumerate(zip(sidescan_images, tfw_files)):
        try:
            x_pixel_length, neg_y_pixel_length, x_coord, y_coord = read_tfw(tfw_path)
            ds = gdal.Open(img_path)
            img = read_tiff_image(img_path)
            img_width = ds.RasterXSize * x_pixel_length
            img_height = ds.RasterYSize * abs(neg_y_pixel_length)
            img_extent = [x_coord, x_coord + img_width, y_coord - img_height, y_coord]
            img_artist = ax2.imshow(img, extent=img_extent, origin='upper')

            image_artists.append(img_artist)
            img_artist.set_visible(False)
            check_labels.append(f'Image {i + 1}')
            file_long.append(x_coord)
            file_lat.append(y_coord)
            
        except Exception as e:
            print(f"Error processing image {img_path} with TFW file {tfw_path}: {e}")

    xax_min = min(file_long)
    xax_max = max(file_long)
    yax_min = min(file_lat)
    yax_max = max(file_lat)

    ax2.set_xlim(xax_min, xax_max + img_width)
    ax2.set_ylim(yax_min - img_height, yax_max)
    # rax = plt.axes([0.1, 0.8, 0.20, 0.20,])
    # check = CheckButtons(rax, check_labels, [False] * len(check_labels))
    check = CheckButtons(check_ax, check_labels, [False] * len(check_labels))
    check.on_clicked(update_images)

    scatter = ax2.scatter(long,lat, marker='o', zorder = 0)
    scatter.set_visible(False)
    index = selected_index
    data = npzfile['arr_1'][index]
    for i in range(len(long)):
        highlighted_index.append(i)
    
    fig.canvas.mpl_connect('button_press_event', on_click)
    fig.canvas.mpl_connect('key_press_event', on_key)
    plot.set_array(np.asarray(data).reshape(height, width))
    update_highlight()
    plt.show()

if __name__ == "__main__":
    main()