from setuptools import find_packages, setup

package_name = 'lcm_ros2_bridge'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='laser14',
    maintainer_email='derek.r.benham@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'bridge = lcm_ros2_bridge.bridge:main',
            'listener = lcm_ros2_bridge.subscriber_member_function:main',
        ],
    },
)
