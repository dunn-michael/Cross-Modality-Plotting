import rclpy
from rclpy.node import Node
import numpy as np

from wamv_interfaces.msg import MicrostrainGnss
data = []
class MinimalSubscriber(Node):
    def __init__(self):
        super().__init__('microstrain_subsciber')
        self.subscription = self.create_subscription(
            MicrostrainGnss,  # Use your message type here
            'micro_gnss',  # Change topic name as needed
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        # Save latitude and longitude to a text file
        self.get_logger().info('I heard: Lat: "%s", Long: "%s", Timestamp: "%s", Heading: "%s"' % (msg.latitude, msg.longitude, msg.timestamp, msg.heading))
        data.append([msg.latitude, msg.longitude, msg.timestamp, msg.heading])
        np.save("course-info", data)
        
        # with open('lat_long_data.txt', 'a') as f:  # Open file in append mode
        #     f.write('Latitude: {}, Longitude: {}, Timestamp: {}, Heading: {}\n'.format(msg.latitude, msg.longitude, msg.timestamp, msg.heading))


def main(args=None):
    rclpy.init(args=args)
    minimal_subscriber = MinimalSubscriber()
    rclpy.spin(minimal_subscriber)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()
if __name__ == '__main__':
    main()
