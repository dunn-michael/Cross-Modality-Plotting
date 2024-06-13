import numpy as np
import matplotlib.pyplot as plt
import matplotlib.image as mpimg
from osgeo import gdal
from scipy.ndimage import zoom
import cv2

quitGraph = False

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

def remove_img_background(img_path):
    bgcolor = [255,255,255]
    img = cv2.imread(img_path)
    img = cv2.cvtColor(img,cv2.COLOR_BGR2BGRA)

    img[np.all(img == bgcolor + [255], axis =2)] = [0,0,0,0]
    return img

def main():
    global quitGraph
    global ax2
    global highlight
    global fig

    sidescan_images = ['Sidescan-Data/20240414-010943-UTC_0-2024-04-10_oahu_three-tables-cross-modality-2mDFS-IVER3-3099_WP38-L.Tiff', 'Sidescan-Data/20240414-010943-UTC_0-2024-04-10_oahu_three-tables-cross-modality-2mDFS-IVER3-3099_WP34-L.Tiff']
    tfw_files = ['Sidescan-Data/20240414-010943-UTC_0-2024-04-10_oahu_three-tables-cross-modality-2mDFS-IVER3-3099_WP39-L.TFW', 'Sidescan-Data/20240414-010943-UTC_0-2024-04-10_oahu_three-tables-cross-modality-2mDFS-IVER3-3099_WP34-L.TFW']

    # Functions that setup the polar and cartesian graphs
    plt.ion()
    fig = plt.figure()
    ax2 = fig.add_subplot()


    scale_factor = 0.5


    for img_path, tfw_path in zip(sidescan_images, tfw_files):
        try:
            x_pixel_length, neg_y_pixel_length, x_coord, y_coord = read_tfw(tfw_path)
            ds = gdal.Open(img_path)

            img = read_tiff_image(img_path)
            # img = remove_img_background(img_path)
            
            img_width = ds.RasterXSize * x_pixel_length
            img_height = ds.RasterYSize * abs(neg_y_pixel_length)

            img_extent = [x_coord, x_coord + img_width, y_coord - img_height, y_coord]
            scaled_extent =  scale_extent(img_extent, scale_factor)
            ax2.imshow(img, extent=scaled_extent, origin='upper')
            # ax2.set_xlim(min_long,max_long)
            # ax2.set_ylim(min_lat,max_lat)
        except Exception as e:
            print(f"Error processing image {img_path} with TFW file {tfw_path}: {e}")
    while not quitGraph:

        # im = plt.imread("image.Tiff")
        # ax2.scatter(long,lat, color='blue')
        fig.canvas.draw_idle()
        fig.canvas.flush_events()
        plt.show()
        if not plt.fignum_exists(1):
            quitGraph = True

main()