import rclpy
from rclpy.node import Node
import lcm
import numpy as np
# Importing LCM Messages
from lcm_ros2_bridge.lcm_messages import blueprint_oculus_sonar_fire, \
                                            blueprint_oculus_sonar_image, \
                                            blueprint_oculus_sonar_ping, \
                                            microstrain_est, \
                                            microstrain_gnss, \
                                            microstrain_imu

# Importing ROS 2 Messages
from wamv_interfaces.msg import BlueprintOculusSonarFire, \
                                BlueprintOculusSonarImage, \
                                BlueprintOculusSonarPing, \
                                MicrostrainEst, \
                                MicrostrainGnss, \
                                MicrostrainImu

class OculusPublisher(Node):

    def __init__(self):
        super().__init__('oculus_publisher')
        self.publisher_ = self.create_publisher(BlueprintOculusSonarPing, 'oculus', 10)

    def lcm_oculus_handler(self, channel, data):
        lcm_msg = blueprint_oculus_sonar_ping.decode(data)
        
        ros_msg_ping = BlueprintOculusSonarPing()
        ros_msg_img = BlueprintOculusSonarImage()
        ros_msg_fire = BlueprintOculusSonarFire()
        
        # Handling Ping first
        ros_msg_ping.timestamp = lcm_msg.timestamp
        ros_msg_ping.ping_id = lcm_msg.ping_id
        ros_msg_ping.part_number = lcm_msg.part_number
        ros_msg_ping.start_time = lcm_msg.start_time
        ros_msg_ping.num_ranges = lcm_msg.num_ranges
        ros_msg_ping.num_beams = lcm_msg.num_beams
        ros_msg_ping.bearings = lcm_msg.bearings
        ros_msg_ping.range_resolution = lcm_msg.range_resolution

        # Handling Image
        ros_msg_img.timestamp = lcm_msg.image_msg.timestamp
        ros_msg_img.height = lcm_msg.image_msg.height
        ros_msg_img.width = lcm_msg.image_msg.width
        ros_msg_img.encoding = lcm_msg.image_msg.encoding
        ros_msg_img.is_bigendian = lcm_msg.image_msg.is_bigendian
        
        two_d_image = np.array(lcm_msg.image_msg.data)

        # Flatten the 2D array into a 1D array using NumPy's flatten function
        one_d_image = two_d_image.flatten()
        one_d_image_int16 = one_d_image.astype(np.int16).tolist()
        ros_msg_img.data = one_d_image_int16

        # Handling Fire
        ros_msg_fire.timestamp = lcm_msg.fire_msg.timestamp
        ros_msg_fire.mode = lcm_msg.fire_msg.mode
        ros_msg_fire.gamma = lcm_msg.fire_msg.gamma
        ros_msg_fire.flags = lcm_msg.fire_msg.flags
        ros_msg_fire.ping_rate = lcm_msg.fire_msg.ping_rate
        ros_msg_fire.range = lcm_msg.fire_msg.range
        ros_msg_fire.gain = lcm_msg.fire_msg.gain
        ros_msg_fire.speed_of_sound = lcm_msg.fire_msg.speed_of_sound
        ros_msg_fire.salinity = lcm_msg.fire_msg.salinity        


        ros_msg_ping.fire_msg = ros_msg_fire
        ros_msg_ping.image_msg = ros_msg_img


        self.publisher_.publish(ros_msg_ping)
        self.get_logger().info('Publishing to ROS 2: "%s"' % ros_msg_ping.timestamp)

class MicrostrainPublisher(Node):

    def __init__(self):
        super().__init__('microstrain_publisher')
        self.publisher_est = self.create_publisher(MicrostrainEst, 'micro_est', 20)
        self.publisher_gnss = self.create_publisher(MicrostrainGnss, 'micro_gnss', 20)    
        self.publisher_imu = self.create_publisher(MicrostrainImu, 'micro_imu', 20)
    
    def lcm_microstrain_est(self, channel, data):
        lcm_msg = microstrain_est.decode(data)
        ros_msg = MicrostrainEst()

        ros_msg.timestamp = lcm_msg.timestamp
        ros_msg.est_latitude = lcm_msg.estLatitude
        ros_msg.est_longitude = lcm_msg.estLongitude
        ros_msg.est_height_above_ellipsoid = lcm_msg.estHeightAboveElipsoid

        ros_msg.est_north_velocity = lcm_msg.estNorthVelocity
        ros_msg.est_east_velocity = lcm_msg.estEastVelocity
        ros_msg.est_down_velocity = lcm_msg.estDownVelocity

        ros_msg.est_orient_quaternion = lcm_msg.estOrientQuaternion

        # ros_msg.est_orient_matrix = lcm_msg.estOrientMatrix # TODO: flatten and set to float32
        ros_msg.est_orient_matrix = [lcm_msg.estOrientMatrix[i][j] for i in range(3) for j in range(3)]

        ros_msg.est_roll = lcm_msg.estRoll
        ros_msg.est_pitch = lcm_msg.estPitch
        ros_msg.est_yaw = lcm_msg.estYaw

        ros_msg.est_gyro_bias_x = lcm_msg.estGyroBiasX
        ros_msg.est_gyro_bias_y = lcm_msg.estGyroBiasY
        ros_msg.est_gyro_bias_z = lcm_msg.estGyroBiasZ

        ros_msg.est_accel_bias_x = lcm_msg.estAccelBiasX
        ros_msg.est_accel_bias_y = lcm_msg.estAccelBiasY
        ros_msg.est_accel_bias_z = lcm_msg.estAccelBiasZ

        ros_msg.est_north_position_uncert = lcm_msg.estNorthPositionUncert
        ros_msg.est_east_position_uncert = lcm_msg.estEastPositionUncert
        ros_msg.est_down_position_uncert = lcm_msg.estDownPositionUncert

        ros_msg.est_north_velocity_uncert = lcm_msg.estNorthVelocityUncert
        ros_msg.est_east_velocity_uncert = lcm_msg.estEastVelocityUncert
        ros_msg.est_down_velocity_uncert = lcm_msg.estDownVelocityUncert

        ros_msg.est_roll_uncert = lcm_msg.estRollUncert
        ros_msg.est_pitch_uncert = lcm_msg.estPitchUncert
        ros_msg.est_yaw_uncert = lcm_msg.estYawUncert

        ros_msg.est_gyro_bias_x_uncert = lcm_msg.estGyroBiasXUncert
        ros_msg.est_gyro_bias_y_uncert = lcm_msg.estGyroBiasYUncert
        ros_msg.est_gyro_bias_z_uncert = lcm_msg.estGyroBiasZUncert

        ros_msg.est_accel_bias_x_uncert = lcm_msg.estAccelBiasXUncert
        ros_msg.est_accel_bias_y_uncert = lcm_msg.estAccelBiasYUncert
        ros_msg.est_accel_bias_z_uncert = lcm_msg.estAccelBiasZUncert

        ros_msg.est_linear_accel_x = lcm_msg.estLinearAccelX
        ros_msg.est_linear_accel_y = lcm_msg.estLinearAccelY
        ros_msg.est_linear_accel_z = lcm_msg.estLinearAccelZ

        ros_msg.est_angular_rate_x = lcm_msg.estAngularRateX
        ros_msg.est_angular_rate_y = lcm_msg.estAngularRateY
        ros_msg.est_angular_rate_z = lcm_msg.estAngularRateZ

        ros_msg.est_wgs84_local_grav_magnitude = lcm_msg.estWGS84LocalGravMagnitude

        ros_msg.est_filter_state = lcm_msg.estFilterState
        ros_msg.est_filter_dynamics_mode = lcm_msg.estFilterDynamicsMode
        ros_msg.est_filter_status_flags = lcm_msg.estFilterStatusFlags

        ros_msg.est_filter_gps_time_tow = lcm_msg.estFilterGpsTimeTow
        ros_msg.est_filter_gps_time_week_num = lcm_msg.estFilterGpsTimeWeekNum

        ros_msg.est_attitude_uncert_quaternion = lcm_msg.estAttitudeUncertQuaternion

        ros_msg.est_gravity_vector_x = lcm_msg.estGravityVectorX
        ros_msg.est_gravity_vector_y = lcm_msg.estGravityVectorY
        ros_msg.est_gravity_vector_z = lcm_msg.estGravityVectorZ

        ros_msg.est_heading = lcm_msg.estHeading
        ros_msg.est_heading_uncert = lcm_msg.estHeadingUncert
        ros_msg.est_heading_source = lcm_msg.estHeadingSource

        ros_msg.est_magnetic_model_sln_north = lcm_msg.estMagneticModelSlnNorth
        ros_msg.est_magnetic_model_sln_east = lcm_msg.estMagneticModelSlnEast
        ros_msg.est_magnetic_model_sln_down = lcm_msg.estMagneticModelSlnDown
        ros_msg.est_magnetic_model_sln_inclination = lcm_msg.estMagneticModelSlnInclination
        ros_msg.est_magnetic_model_sln_declination = lcm_msg.estMagneticModelSlnDeclination

        ros_msg.est_gyro_scale_factor_x = lcm_msg.estGyroScaleFactorX
        ros_msg.est_gyro_scale_factor_y = lcm_msg.estGyroScaleFactorY
        ros_msg.est_gyro_scale_factor_z = lcm_msg.estGyroScaleFactorZ

        ros_msg.est_accel_scale_factor_x = lcm_msg.estAccelScaleFactorX
        ros_msg.est_accel_scale_factor_y = lcm_msg.estAccelScaleFactorY
        ros_msg.est_accel_scale_factor_z = lcm_msg.estAccelScaleFactorZ

        ros_msg.est_gyro_scale_factor_x_uncert = lcm_msg.estGyroScaleFactorXUncert
        ros_msg.est_gyro_scale_factor_y_uncert = lcm_msg.estGyroScaleFactorYUncert
        ros_msg.est_gyro_scale_factor_z_uncert = lcm_msg.estGyroScaleFactorZUncert

        ros_msg.est_accel_scale_factor_x_uncert = lcm_msg.estAccelScaleFactorXUncert
        ros_msg.est_accel_scale_factor_y_uncert = lcm_msg.estAccelScaleFactorYUncert
        ros_msg.est_accel_scale_factor_z_uncert = lcm_msg.estAccelScaleFactorZUncert

        ros_msg.est_compensated_accel_x = lcm_msg.estCompensatedAccelX
        ros_msg.est_compensated_accel_y = lcm_msg.estCompensatedAccelY
        ros_msg.est_compensated_accel_z = lcm_msg.estCompensatedAccelZ

        ros_msg.est_std_atm_model_geometric_alt = lcm_msg.estStdAtmModelGeometricAlt
        ros_msg.est_std_atm_model_geopotential_alt = lcm_msg.estStdAtmModelGeopotentialAlt
        ros_msg.est_std_atm_model_temperature = lcm_msg.estStdAtmModelTemperature
        ros_msg.est_std_atm_model_pressure = lcm_msg.estStdAtmModelPressure
        ros_msg.est_std_atm_model_density = lcm_msg.estStdAtmModelDensity

        ros_msg.est_pressure_alt = lcm_msg.estPressureAlt

        ros_msg.est_mag_auto_hard_iron_offset_x = lcm_msg.estMagAutoHardIronOffsetX
        ros_msg.est_mag_auto_hard_iron_offset_y = lcm_msg.estMagAutoHardIronOffsetY
        ros_msg.est_mag_auto_hard_iron_offset_z = lcm_msg.estMagAutoHardIronOffsetZ

        # Assuming estMagAutoSoftIronMatrix is stored as a flattened list in the LCM message
        ros_msg.est_mag_auto_soft_iron_matrix = [lcm_msg.estMagAutoSoftIronMatrix[i][j] for i in range(3) for j in range(3)]

        # Publishing the message
        self.publisher_est.publish(ros_msg)

    def lcm_microstrain_imu(self, channel, data):
        lcm_msg = microstrain_imu.decode(data)
        ros_msg = MicrostrainImu()

        ros_msg.timestamp = lcm_msg.timestamp
        
        ros_msg.scaled_accel_x = lcm_msg.scaledAccelX
        ros_msg.scaled_accel_y = lcm_msg.scaledAccelY
        ros_msg.scaled_accel_z = lcm_msg.scaledAccelZ
        
        ros_msg.scaled_gyro_x = lcm_msg.scaledGyroX
        ros_msg.scaled_gyro_y = lcm_msg.scaledGyroY
        ros_msg.scaled_gyro_z = lcm_msg.scaledGyroZ
        
        ros_msg.scaled_mag_x = lcm_msg.scaledMagX
        ros_msg.scaled_mag_y = lcm_msg.scaledMagY
        ros_msg.scaled_mag_z = lcm_msg.scaledMagZ
        
        ros_msg.delta_theta_x = lcm_msg.deltaThetaX
        ros_msg.delta_theta_y = lcm_msg.deltaThetaY
        ros_msg.delta_theta_z = lcm_msg.deltaThetaZ
        
        ros_msg.delta_vel_x = lcm_msg.deltaVelX
        ros_msg.delta_vel_y = lcm_msg.deltaVelY
        ros_msg.delta_vel_z = lcm_msg.deltaVelZ
        
        ros_msg.orient_matrix = [lcm_msg.orientMatrix[i][j] for i in range(3) for j in range(3)]
        
        ros_msg.roll = lcm_msg.roll
        ros_msg.pitch = lcm_msg.pitch
        ros_msg.yaw = lcm_msg.yaw
        
        ros_msg.orient_quaternion = lcm_msg.orientQuaternion
        
        ros_msg.stabilized_mag_x = lcm_msg.stabilizedMagX
        ros_msg.stabilized_mag_y = lcm_msg.stabilizedMagY
        ros_msg.stabilized_mag_z = lcm_msg.stabilizedMagZ
        
        ros_msg.stabilized_accel_x = lcm_msg.stabilizedAccelX
        ros_msg.stabilized_accel_y = lcm_msg.stabilizedAccelY
        ros_msg.stabilized_accel_z = lcm_msg.stabilizedAccelZ
        
        ros_msg.gps_correl_timestamp_tow = lcm_msg.gpsCorrelTimestampTow
        ros_msg.gps_correl_timestamp_week_num = lcm_msg.gpsCorrelTimestampWeekNum
        ros_msg.gps_correl_timestamp_flags = lcm_msg.gpsCorrelTimestampFlags
        
        ros_msg.scaled_ambient_pressure = lcm_msg.scaledAmbientPressure
        
        # Publishing the message
        self.publisher_imu.publish(ros_msg)
    
    def lcm_microstrain_gnss(self, channel, data):
        lcm_msg = microstrain_gnss.decode(data)
        ros_msg = MicrostrainGnss()

        ros_msg.timestamp = lcm_msg.timestamp
        
        ros_msg.latitude = lcm_msg.latitude
        ros_msg.longitude = lcm_msg.longitude
        ros_msg.height_above_elipsoid = lcm_msg.heightAboveElipsoid
        ros_msg.height_above_msl = lcm_msg.heightAboveMSL
        ros_msg.horizontal_accuracy = lcm_msg.horizontalAccuracy
        ros_msg.vertical_accuracy = lcm_msg.verticalAccuracy
        
        ros_msg.ecef_pos_x = lcm_msg.ecefPosX
        ros_msg.ecef_pos_y = lcm_msg.ecefPosY
        ros_msg.ecef_pos_z = lcm_msg.ecefPosZ
        ros_msg.ecef_pos_accuracy = lcm_msg.ecefPosAccuracy
        
        ros_msg.north_velocity = lcm_msg.northVelocity
        ros_msg.east_velocity = lcm_msg.eastVelocity
        ros_msg.down_velocity = lcm_msg.downVelocity
        ros_msg.speed = lcm_msg.speed
        ros_msg.ground_speed = lcm_msg.groundSpeed
        ros_msg.heading = lcm_msg.heading
        ros_msg.speed_accuracy = lcm_msg.speedAccuracy
        ros_msg.heading_accuracy = lcm_msg.headingAccuracy
        
        ros_msg.ecef_vel_x = lcm_msg.ecefVelX
        ros_msg.ecef_vel_y = lcm_msg.ecefVelY
        ros_msg.ecef_vel_z = lcm_msg.ecefVelZ
        ros_msg.ecef_vel_accuracy = lcm_msg.ecefVelAccuracy
        
        ros_msg.geometric_dop = lcm_msg.geometricDOP
        ros_msg.position_dop = lcm_msg.positionDOP
        ros_msg.horizontal_dop = lcm_msg.horizontalDOP
        ros_msg.vertical_dop = lcm_msg.verticalDOP
        ros_msg.time_dop = lcm_msg.timeDOP
        ros_msg.northing_dop = lcm_msg.northingDOP
        ros_msg.easting_dop = lcm_msg.eastingDOP
        
        ros_msg.utc_timestamp = lcm_msg.utcTimestamp
        ros_msg.utc_timestamp_flags = lcm_msg.utcTimestampFlags
        
        ros_msg.gps_time_tow = lcm_msg.gpsTimeTow
        ros_msg.gps_time_week_num = lcm_msg.gpsTimeWeekNum
        
        ros_msg.gps_clock_bias = lcm_msg.gpsClockBias
        ros_msg.gps_clock_drift = lcm_msg.gpsClockDrift
        ros_msg.gps_clock_accuracy = lcm_msg.gpsClockAccuracy
        
        ros_msg.gnss_fix_type = lcm_msg.gnssFixType
        ros_msg.gnss_fix_sv_count = lcm_msg.gnssFixSvCount
        ros_msg.gnss_fix_flags = lcm_msg.gnssFixFlags
        
        ros_msg.sensor_state = lcm_msg.sensorState
        ros_msg.antenna_state = lcm_msg.antennaState
        ros_msg.antenna_power = lcm_msg.antennaPower
        
        ros_msg.dgnss_newest_age_gnss_base_0 = lcm_msg.dgnssNewestAgeGnssBase0
        ros_msg.dgnss_base_station_status_gnss_base_0 = lcm_msg.dgnssBaseStationStatusGnssBase0
        ros_msg.dgnss_num_channels_gnss_base_0 = lcm_msg.dgnssNumChannelsGnssBase0
        
        # Publishing the message
        self.publisher_gnss.publish(ros_msg)
        
        

def main(args=None):
    rclpy.init(args=args)
    oculus_publisher = OculusPublisher()
    microstrain_publisher = MicrostrainPublisher()


    lc = lcm.LCM()
    subscription_oculus = lc.subscribe("OCULUS", oculus_publisher.lcm_oculus_handler)
    subscription_microstrain_est = lc.subscribe("EST", microstrain_publisher.lcm_microstrain_est)
    subscription_microstrain_imu = lc.subscribe("IMU", microstrain_publisher.lcm_microstrain_imu)
    subscription_microstrain_gnss = lc.subscribe("GNSS", microstrain_publisher.lcm_microstrain_gnss)

    try:
        while True:
            lc.handle()
    except KeyboardInterrupt:
        pass


    # rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    # minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()



