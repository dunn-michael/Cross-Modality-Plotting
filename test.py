import numpy as np
import matplotlib.pyplot as plt
import matplotlib.image as mpimg
from osgeo import gdal
from scipy.ndimage import zoom
import cv2
from PIL import Image

quitGraph = False

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

def main():
    long = []
    lat = []

    global quitGraph
    global ax2
    global highlight
    global fig
    sidescan_images = []
    tfw_files = []
    # for i in range(33, 56):
    for i in range(33, 40):
        sidescan_images.append('Sidescan-Data/20240414-010943-UTC_0-2024-04-10_oahu_three-tables-cross-modality-2mDFS-IVER3-3099_WP'+ str(i) + '-L.Tiff')
        tfw_files.append('Sidescan-Data/20240414-010943-UTC_0-2024-04-10_oahu_three-tables-cross-modality-2mDFS-IVER3-3099_WP' + str(i) + '-L.TFW')
    # Functions that setup the polar and cartesian graphs
    fig = plt.figure()
    ax2 = fig.add_subplot()


    scale = 1

    for img_path, tfw_path in zip(sidescan_images, tfw_files):
        try:
            x_pixel_length, neg_y_pixel_length, x_coord, y_coord = read_tfw(tfw_path)
            ds = gdal.Open(img_path)

            img = read_tiff_image(img_path)
            img_width = ds.RasterXSize * x_pixel_length
            img_height = ds.RasterYSize * abs(neg_y_pixel_length)
            img_extent = [x_coord, x_coord + img_width / scale, y_coord - img_height / scale, y_coord]
            long.append(x_coord)
            lat.append(y_coord)
            ax2.imshow(img, extent=img_extent,origin='upper')

            ax2.set_xlim(-158.067880292173, -158.06637171583 + img_width)
            ax2.set_ylim(21.647407458227 - img_height, 21.6491011838888)


        except Exception as e:
            print(f"Error processing image {img_path} with TFW file {tfw_path}: {e}")
    print(f"Min : ({min(long)}, {min(lat)})")
    print(f"Max: ({max(long)}, {max(lat)})")
    plt.show()

main()