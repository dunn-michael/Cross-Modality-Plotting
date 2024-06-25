# Graphing
Before you can graph your data, you need to get it first so make sure you go through the "ROS" section below before you try to graph.

To graph, you will need TFW files their corresponding Tiff files, the course-info.npy and the oculus-data.npz files.
Then all you will need to do is run the "plot.py" program and navigate to the location of the TFW and Tiff files.

**DO NOT SPAM OR HOLD DOWN ANY BUTTONS THIS CAN AND WILL CRASH THE PROGRAM**

'esc' Will exit the graph

Left and Right keys navigate through the index one at a time 

Note : At the beginning of the index left key will bring you to the ending index and at the end index the right arrow key will bring you to the beginning index
Up and Down arrow keys navigte through the index 5 at a time

'p' will show the path

'z' will zoom in on the selected index

# ROS

Note: You only need to do this if you have not already generated the course-info and oculus-data files

Navigate to the lcm-ros2_bridge folder and run "source install/setup.bash"

Run the command `colcon build`

Run `ros2 run bag_subscriber gps_subscriber`

Then, In a separate terminal, navigate to the lcm-ros2_bridge folder and run "`source install/setup.bash`"

In the same terminal navigate to the folder that has your rosbag and run `ros2 bag play [filename]`

Once you no longer see the "I heard" messages appearing in the terminal, cancel the program and
run "ros2 run bag_subscriber data_subscriber",

then run the `ros2 bag play [filename]`

Again once the "I heard" messages stop appearing, cancel the program.

After all this is done you can then proceed to the graphing section

Note : After running the rosbag it might take a little while for the messages to start appearing, you may want to use the up and down arrow keys to slow down or speed up the rate at which the messages get sent. However, if you speed them up too much the program may crash or miss some messages

# Debug

On Ubuntu to install osgeo you may need to run this code

`sudo add-apt-repository ppa:ubuntugis/ppa
sudo apt-get update
sudo apt-get install gdal-bin
sudo apt-get install libgdal-dev
export CPLUS_INCLUDE_PATH=/usr/include/gdal
export C_INCLUDE_PATH=/usr/include/gdal
pip install GDAL`