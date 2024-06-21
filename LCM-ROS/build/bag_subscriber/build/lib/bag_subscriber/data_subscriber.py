import rclpy
from rclpy.node import Node
import numpy as np

from wamv_interfaces.msg import BlueprintOculusSonarFire, \
                                BlueprintOculusSonarImage, \
                                BlueprintOculusSonarPing, \
                                MicrostrainGnss
data = []
timestamp = []
width = []
height = []
mode = []
partNumber = []
class MinimalSubscriber(Node):
    def __init__(self):
        super().__init__('oculus_subscriber')
        self.subscription = self.create_subscription(
            BlueprintOculusSonarPing,
            'oculus',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        # save entire message to a txt file
        self.get_logger().info('I heard: Timestamp: "%s"' % (msg.timestamp))
        # data.append([msg.timestamp] + msg.image_msg)
        timestamp.append(msg.timestamp)
        data.append(msg.image_msg.data)
        width.append(msg.image_msg.width)
        height.append(msg.image_msg.height)
        partNumber.append(msg.part_number)
        mode.append(msg.fire_msg.mode)
        # data.append(([msg.timestamp], [msg.image_msg]))
        # np.save("oculus-data", [timestamp] + data)
        np.savez("oculus-data", timestamp, data, width, height, partNumber, mode)

def main(args=None):
    rclpy.init(args=args)
    minimal_subscriber = MinimalSubscriber()
    rclpy.spin(minimal_subscriber)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()
if __name__ == '__main__':
    main()

    import rclpy
from rclpy.node import Node