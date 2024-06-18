import numpy as np
import matplotlib.pyplot as plt
import matplotlib.image as mpimg
from matplotlib.path import Path
from matplotlib.patches import PathPatch
from matplotlib.transforms import Affine2D
from osgeo import gdal
import cv2
from PIL import Image
from matplotlib.widgets import CheckButtons

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

def meters_to_degrees(meters):
    meters_per_degree_lat = 111320
    meters_per_degree_long = 111320

    degrees_lat = meters / meters_per_degree_lat
    degrees_long = meters / meters_per_degree_long

    return degrees_lat, degrees_long

def create_sector_path(radius_lat, radius_long, thetamin=np.radians(65), thetamax=np.radians(-65), num_points=100):
    theta = np.linspace(thetamin, thetamax, num_points)
    x = radius_long * np.cos(theta)
    y = radius_lat * np.sin(theta)
    
    vertices = np.vstack((x, y)).T
    vertices = np.vstack(([[0, 0]], vertices, [[0, 0]]))
    codes = [Path.MOVETO] + [Path.LINETO] * (len(vertices) - 2) + [Path.CLOSEPOLY]
    
    return vertices, codes

def read_tfw(tfw_path):
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
    try:
        img = Image.open(img_path)
        img_data = np.array(img)
        return img_data
    except Exception as e:
        print(f"Error reading TIFF image {img_path}: {e}")
        raise

def update_mode(mode, part_num):
    global frequency
    global range_max
    global range_min
    global range_resolution
    global horizontal_aperture
    global vertical_aperture
    global num_beams
    global angular_resolution
    global beam_separation

    if part_num == 1032:
        if mode == 1:
            frequency = 750
            range_max = 120
            range_min = 0.1
            range_resolution = 4
            horizontal_aperture = 70
            angular_resolution = 1
            beam_separation = 0.25
        elif mode == 2:
            frequency = 1200
            range_max = 40
            range_min = 0.1
            range_resolution = 2.5
            horizontal_aperture = 70
            vertical_aperture = 12
            num_beams = 512
            angular_resolution = 0.6
            beam_separation = 0.16
        else:
            print("ERROR, INVALID MODE SET")
            print("Received Mode Value Was: ", mode)
            print("Terminating Program")
            exit()
    if part_num == 1042:
        if mode == 1:
            frequency = 1200
            range_max = 30
            range_min = 0.1
            range_resolution = 2.5
            horizontal_aperture = 130
            vertical_aperture = 20
            num_beams = 512
            angular_resolution = 0.6
            beam_separation = 0.25
        elif mode == 2:
            frequency = 2100
            range_max = 10
            range_min = 0.1
            range_resolution = 2.5
            horizontal_aperture = 60
            vertical_aperture = 12
            num_beams = 512
            angular_resolution = 0.4
            beam_separation = 0.16
        else:
            print("ERROR, INVALID MODE SET")
            print("Received Mode Value Was: ", mode)
            print("Terminating Program")
            exit()

def update_highlight():
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
    global quitGraph
    global selected_index
    if selected_index is None:
        return
    if event.key == 'right' or event.key == 'up':
        selected_index = (selected_index + 1) % len(long)
    elif event.key == 'left' or event.key == 'down':
        selected_index = (selected_index - 1) % len(long)
    elif event.key == 'escape':
        plt.close()
        quitGraph = True
    update_highlight()
    data = npzfile['arr_1'][selected_index]
    plot.set_array(np.asarray(data).reshape(height, width))
    fig.canvas.draw_idle()
    fig.canvas.flush_events()

def update_images(label):
    index = int(label.split(' ')[-1])
    image_artists[index].set_visible(not image_artists[index].get_visible())
    plt.draw()

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

    sidescan_images = []
    tfw_files = []
    highlighted_index = []

    for i in range(33, 37):
        sidescan_images.append('Sidescan-Data/20240414-010943-UTC_0-2024-04-10_oahu_three-tables-cross-modality-2mDFS-IVER3-3099_WP'+ str(i) + '-L.Tiff')
        tfw_files.append('Sidescan-Data/20240414-010943-UTC_0-2024-04-10_oahu_three-tables-cross-modality-2mDFS-IVER3-3099_WP' + str(i) + '-L.TFW')

    courseInfo = np.load('course-info.npy')
    npzfile = np.load("oculus-data.npz")
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
    fig = plt.figure()
    ax2 = fig.add_subplot(121)
    ax = fig.add_subplot(122, projection='polar')
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
            # img_artist = ax2.imshow(img, extent=img_extent, origin='upper', alpha=0.7)
            ax2.set_xlim(-158.067880292173, -158.06637171583 + img_width)
            ax2.set_ylim(21.647407458227 - img_height, 21.6491011838888)

            image_artists.append(img_artist)
            img_artist.set_visible(False)
            check_labels.append(f'Image {i}')
        except Exception as e:
            print(f"Error processing image {img_path} with TFW file {tfw_path}: {e}")

    rax = plt.axes([0.05, 0.4, 0.15, 0.15])
    check = CheckButtons(rax, check_labels, [False] * len(check_labels))
    check.on_clicked(update_images)

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
