import numpy as np
import matplotlib.pyplot as plt
import matplotlib.image as mpimg
from matplotlib.path import Path
from matplotlib.patches import PathPatch
from matplotlib.transforms import Affine2D
from osgeo import gdal
import cv2
from PIL import Image



selected_index = None
lat = []
long = []
timestamp = []
heading= []
x=[]
y=[]
oculusTimestamp = []
# width = []
# height = []
imgData = []
plot = None
partNumber = []
mode = []
selected_index =0 
quitGraph = False
j = 0

# NOTE: EVERYTHING BELOW THIS IS TESTING

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

# NOTE: EVERYTHING ABOVE THIS IS TESTING

def read_tfw(tfw_path):
    with open(tfw_path, 'r') as f:
        lines = f.readlines()
        x_pixel_length = float(lines[0])
        x_rot_angle = float(lines[1])
        y_rot_angle = float(lines[2])
        neg_y_pixel_length = float(lines[3])
        x_coord = float(lines[4])
        y_coord = float(lines[5])
        # print(x_coord, y_coord)
        return x_pixel_length, neg_y_pixel_length, x_coord, y_coord

def read_tiff_image(img_path):
    try:
        img = Image.open(img_path)
        img.apply_transparency()
        img_data = np.array(img)
        
        return img_data

    except Exception as e:
        print(f"Error reading TIFF image {img_path}: {e}")
        raise

def scale_extent(extent, scale_factor):
    x_center = (extent[0] + extent[1]) / 2
    y_center = (extent[2] + extent[3]) / 2
    width = (extent[1] - extent[0]) * scale_factor
    height = (extent[3] - extent[2]) * scale_factor
    return [x_center - width / 2, x_center + width / 2, y_center - height / 2, y_center + height / 2]

def remove_img_background(img_path):
    bgcolor = [84,1,68]
    img = cv2.imread(img_path)
    img = cv2.cvtColor(img,cv2.COLOR_BGR2BGRA)

    img[np.all(img == bgcolor + [255], axis =2)] = [0,0,0,0]
    return img

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
    vertices, codes = create_sector_path()
    # for index, angle in zip(selected_index, heading):
    rotation_transform = Affine2D().rotate_deg(heading[selected_index])
    rotated_vertices = rotation_transform.transform(vertices)
    path = Path(rotated_vertices, codes)
    patch = PathPatch(path, facecolor='none', edgecolor='r', lw=2)
    ax2.scatter(long[selected_index], lat[selected_index], s=500, facecolor='none', edgecolor='r', marker=path)


    # if selected_index is not None:
    #     highlight.set_data(long[selected_index], lat[selected_index])
    # else:
    #     print(f"SELECTED{selected_index}")
    #     highlight.set_data([], [])
    # fig.canvas.draw()

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
        # print(type(plot))
        # print(type(selected_index))
        # print(np.asarray(data).reshape(height, width))
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

def main():
    global quitGraph
    global ax2
    global highlight
    global fig
    global plt
    global npzfile
    global plot
    global height
    global width

    sidescan_images = []
    tfw_files = []
    highlighted_index = []
    # NOTE:
    # 33 - 56 is the full range for this set of data, it may change with other data sets
    # for i in range(33, 56):
    for i in range(33, 37):
        sidescan_images.append('Sidescan-Data/20240414-010943-UTC_0-2024-04-10_oahu_three-tables-cross-modality-2mDFS-IVER3-3099_WP'+ str(i) + '-L.Tiff')
        tfw_files.append('Sidescan-Data/20240414-010943-UTC_0-2024-04-10_oahu_three-tables-cross-modality-2mDFS-IVER3-3099_WP' + str(i) + '-L.TFW')


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
    # plt.ion()
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


    for img_path, tfw_path in zip(sidescan_images, tfw_files):
        try:
            x_pixel_length, neg_y_pixel_length, x_coord, y_coord = read_tfw(tfw_path)
            ds = gdal.Open(img_path)

            img = read_tiff_image(img_path)
            img_width = ds.RasterXSize * x_pixel_length
            img_height = ds.RasterYSize * abs(neg_y_pixel_length)
            img_extent = [x_coord, x_coord + img_width, y_coord - img_height, y_coord]
            # long.append(x_coord)
            # lat.append(y_coord)
            ax2.imshow(img, extent=img_extent,origin='upper')
            ax2.set_zorder(1)
            ax2.set_xlim(-158.067880292173, -158.06637171583 + img_width)
            ax2.set_ylim(21.647407458227 - img_height, 21.6491011838888)
            # plt.draw()

        except Exception as e:
            print(f"Error processing image {img_path} with TFW file {tfw_path}: {e}")

    # while not quitGraph:
    index = selected_index
    data = npzfile['arr_1'][index]
            
    # NOTE
# # Highlight specific points with different rotation angles
# Create a scatter plot
    for i in range(len(long)):
        highlighted_index.append(i)
    # Loop through each highlighted point and plot it with the respective rotation

    # Set the same aspect ratio
    # ax.set_aspect('equal')

    # NOTE

    fig.canvas.mpl_connect('button_press_event', on_click)
    fig.canvas.mpl_connect('key_press_event', on_key)
    # im = plt.imread("image.Tiff")
    plot.set_array(np.asarray(data).reshape(height, width))
    print("Graphing")
    plt.show()
    while not quitGraph:
        # for img_path, tfw_path in zip(sidescan_images, tfw_files):
        #     try:
        #         x_pixel_length, neg_y_pixel_length, x_coord, y_coord = read_tfw(tfw_path)
        #         ds = gdal.Open(img_path)

        #         img = read_tiff_image(img_path)
        #         img_width = ds.RasterXSize * x_pixel_length
        #         img_height = ds.RasterYSize * abs(neg_y_pixel_length)
        #         img_extent = [x_coord, x_coord + img_width, y_coord - img_height, y_coord]
        #         # long.append(x_coord)
        #         # lat.append(y_coord)
        #         ax2.imshow(img, extent=img_extent,origin='upper')
        #         ax2.set_zorder(1)
        #         ax2.set_xlim(-158.067880292173, -158.06637171583 + img_width)
        #         ax2.set_ylim(21.647407458227 - img_height, 21.6491011838888)
                # plt.draw()

            # except Exception as e:
            #     print(f"Error processing image {img_path} with TFW file {tfw_path}: {e}")
            
        # ax2.scatter(long,lat, color='blue')
        # fig.canvas.draw_idle()
        # fig.canvas.flush_events()

        # plt.show()


        # fig.canvas.mpl_connect('button_press_event', on_click)
        # fig.canvas.mpl_connect('key_press_event', on_key)
        # # im = plt.imread("image.Tiff")
        # plot.set_array(np.asarray(data).reshape(height, width))
        # ax2.scatter(long,lat, color='blue')
        # fig.canvas.draw_idle()
        # fig.canvas.flush_events()
        # plt.show()
        if not plt.fignum_exists(1):
            plt.close()
            quitGraph = True

main()