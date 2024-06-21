import rclpy
from rclpy.node import Node

from wamv_interfaces.msg import BlueprintOculusSonarFire, \
                                BlueprintOculusSonarImage, \
                                BlueprintOculusSonarPing


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
        self.get_logger().info('I heard: "%s"' % msg.timestamp)
        with open('oculus_sonar_ping.txt', 'a') as f:
            f.write(str(msg) + '\n')
        

def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()