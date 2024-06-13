import numpy as np
import matplotlib.pyplot as plt
import matplotlib.image as mpimg
from osgeo import gdal
from scipy.ndimage import zoom



selected_index = None
lat = []
long = []
timestamp = []
heading= []
x=[]
y=[]
oculusTimestamp = []
width = []
height = []
imgData = []
plot = None
partNumber = []
mode = []
selected_index =0 
quitGraph = False
j = 0

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
    if selected_index is not None:
        highlight.set_data(long[selected_index], lat[selected_index])
    else:
        print(f"SELECTED{selected_index}")
        highlight.set_data([], [])
    fig.canvas.draw()

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
        quitGraph = True


    update_highlight()

def read_tfw(tfw_path):
    with open(tfw_path, 'r') as f:
        lines = f.readlines()
        x_pixel_length = float(lines[0].strip())
        x_rot_angle = float(lines[1].strip())
        y_rot_angle = float(lines[2].strip())
        neg_y_pixel_length = float(lines[3].strip())
        x_coord = float(lines[4].strip())
        y_coord = float(lines[5].strip())
        print(x_coord, y_coord)
        return x_pixel_length, neg_y_pixel_length, x_coord, y_coord

def read_tiff_image(img_path):
    try:
        ds = gdal.Open(img_path)
        img = ds.ReadAsArray()

        if img.ndim == 3:
            img = img[0]

        return img

    except Exception as e:
        print(f"Error reading TIFF image {img_path}: {e}")
        raise

def scale_extent(extent, scale_factor):
    x_center = (extent[0] + extent[1]) / 2
    y_center = (extent[2] + extent[3]) / 2
    width = (extent[1] - extent[0]) * scale_factor
    height = (extent[3] - extent[2]) * scale_factor
    return [x_center - width / 2, x_center + width / 2, y_center - height / 2, y_center + height / 2]

def main():
    global quitGraph
    global ax2
    global highlight
    global fig

    sidescan_images = ['Sidescan-Data/20240414-010943-UTC_0-2024-04-10_oahu_three-tables-cross-modality-2mDFS-IVER3-3099_WP38-L.Tiff', 'Sidescan-Data/20240414-010943-UTC_0-2024-04-10_oahu_three-tables-cross-modality-2mDFS-IVER3-3099_WP34-L.Tiff']
    tfw_files = ['Sidescan-Data/20240414-010943-UTC_0-2024-04-10_oahu_three-tables-cross-modality-2mDFS-IVER3-3099_WP39-L.TFW', 'Sidescan-Data/20240414-010943-UTC_0-2024-04-10_oahu_three-tables-cross-modality-2mDFS-IVER3-3099_WP34-L.TFW']



    # Load the data into the program and intiliaze
    # it into lists
    courseInfo = np.load('course-info.npy')
    npzfile = np.load("oculus-data.npz")
    index = 1000
    timestamp_npz = npzfile['arr_0'][index]
    data = npzfile['arr_1'][index]
    height = npzfile['arr_3'][index]
    width = npzfile['arr_2'][index]
    partNumber = npzfile['arr_4'][index]
    mode = npzfile['arr_5'][index]
    j = 0
    location = []
    # This is for only getting the timestamps that have graphs accociated.
    # This way we aren't generating thousand of other points on the scatterplot
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

    # The file could have different modes in it, this will update the size of the graph if the mode is different
    update_mode(mode, partNumber)

    # Functions that setup the polar and cartesian graphs
    plt.ion()
    fig = plt.figure()
    ax2 = fig.add_subplot(121)
    ax = fig.add_subplot(122,projection='polar')
    ax.set_thetamin(-horizontal_aperture/2)
    ax.set_thetamax(horizontal_aperture/2)
    theta = np.linspace(-horizontal_aperture/2, horizontal_aperture/2, width)*np.pi/180
    r = np.linspace(range_min, range_max, height)
    T, R = np.meshgrid(theta, r)
    z = np.zeros_like(T)
    plot = ax.pcolormesh(T, R, z, cmap='gray', shading='auto', vmin=0, vmax=100)
    ax.set_theta_zero_location("N")
    ax.set_ylim(range_min, range_max)

    highlight, = ax2.plot([], [], 'o', markersize=12, markerfacecolor='none', markeredgecolor='red', markeredgewidth=2)

    scale_factor = 0.5

    min_long = min(long)
    max_long = max(long)
    min_lat = min(lat)
    max_lat = max(lat)

    for img_path, tfw_path in zip(sidescan_images, tfw_files):
        try:
            x_pixel_length, neg_y_pixel_length, x_coord, y_coord = read_tfw(tfw_path)
            ds = gdal.Open(img_path)

            img = read_tiff_image(img_path)
            
            img_width = ds.RasterXSize * x_pixel_length
            img_height = ds.RasterYSize * abs(neg_y_pixel_length)

            img_extent = [x_coord, x_coord + img_width, y_coord - img_height, y_coord]
            scaled_extent =  scale_extent(img_extent, scale_factor)
            ax2.imshow(img, extent=scaled_extent, origin='upper')
            ax2.set_xlim(min_long,max_long)
            ax2.set_ylim(min_lat,max_lat)
        except Exception as e:
            print(f"Error processing image {img_path} with TFW file {tfw_path}: {e}")
    while not quitGraph:

        index = selected_index

        data = npzfile['arr_1'][index]
                
        fig.canvas.mpl_connect('button_press_event', on_click)
        fig.canvas.mpl_connect('key_press_event', on_key)
        im = plt.imread("image.Tiff")
        plot.set_array(np.asarray(data).reshape(height, width))
        ax2.scatter(long,lat, color='blue')
        fig.canvas.draw_idle()
        fig.canvas.flush_events()
        plt.show()
        if not plt.fignum_exists(1):
            quitGraph = True

main()