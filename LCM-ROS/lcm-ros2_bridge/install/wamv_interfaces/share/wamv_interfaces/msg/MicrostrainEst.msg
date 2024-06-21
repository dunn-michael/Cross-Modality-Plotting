# MicrostrainEst.msg
int64 timestamp                  # Timestamp

float64 est_latitude              # Estimated Latitude
float64 est_longitude             # Estimated Longitude
float64 est_height_above_ellipsoid  # Estimated Height Above Ellipsoid

float32 est_north_velocity         # Estimated North Velocity
float32 est_east_velocity          # Estimated East Velocity
float32 est_down_velocity          # Estimated Down Velocity

float32[3] est_orient_quaternion   # Estimated Orientation Quaternion (x, y, z)

# float32[3][3] est_orient_matrix    # Estimated Orientation Matrix (3x3)
float32[9] est_orient_matrix    # Estimated Orientation Matrix (3x3)

float32 est_roll                  # Estimated Roll
float32 est_pitch                 # Estimated Pitch
float32 est_yaw                   # Estimated Yaw

float32 est_gyro_bias_x             # Estimated Gyroscope Bias (X-axis)
float32 est_gyro_bias_y             # Estimated Gyroscope Bias (Y-axis)
float32 est_gyro_bias_z             # Estimated Gyroscope Bias (Z-axis)

float32 est_accel_bias_x            # Estimated Accelerometer Bias (X-axis)
float32 est_accel_bias_y            # Estimated Accelerometer Bias (Y-axis)
float32 est_accel_bias_z            # Estimated Accelerometer Bias (Z-axis)

float32 est_north_position_uncert   # Estimated North Position Uncertainty
float32 est_east_position_uncert    # Estimated East Position Uncertainty
float32 est_down_position_uncert    # Estimated Down Position Uncertainty

float32 est_north_velocity_uncert   # Estimated North Velocity Uncertainty
float32 est_east_velocity_uncert    # Estimated East Velocity Uncertainty
float32 est_down_velocity_uncert    # Estimated Down Velocity Uncertainty

float32 est_roll_uncert            # Estimated Roll Uncertainty
float32 est_pitch_uncert           # Estimated Pitch Uncertainty
float32 est_yaw_uncert             # Estimated Yaw Uncertainty

float32 est_gyro_bias_x_uncert       # Estimated Gyroscope Bias Uncertainty (X-axis)
float32 est_gyro_bias_y_uncert       # Estimated Gyroscope Bias Uncertainty (Y-axis)
float32 est_gyro_bias_z_uncert       # Estimated Gyroscope Bias Uncertainty (Z-axis)

float32 est_accel_bias_x_uncert      # Estimated Accelerometer Bias Uncertainty (X-axis)
float32 est_accel_bias_y_uncert      # Estimated Accelerometer Bias Uncertainty (Y-axis)
float32 est_accel_bias_z_uncert      # Estimated Accelerometer Bias Uncertainty (Z-axis)

float32 est_linear_accel_x          # Estimated Linear Acceleration (X-axis)
float32 est_linear_accel_y          # Estimated Linear Acceleration (Y-axis)
float32 est_linear_accel_z          # Estimated Linear Acceleration (Z-axis)

float32 est_angular_rate_x          # Estimated Angular Rate (X-axis)
float32 est_angular_rate_y          # Estimated Angular Rate (Y-axis)
float32 est_angular_rate_z          # Estimated Angular Rate (Z-axis)

float32 est_wgs84_local_grav_magnitude  # Estimated WGS84 Local Gravity Magnitude

int32 est_filter_state             # Estimated Filter State
int32 est_filter_dynamics_mode      # Estimated Filter Dynamics Mode
int32 est_filter_status_flags       # Estimated Filter Status Flags

float64 est_filter_gps_time_tow      # Estimated Filter GPS Time (Time of Week)
int32 est_filter_gps_time_week_num    # Estimated Filter GPS Time (Week Number)
float32[3] est_attitude_uncert_quaternion  # Estimated Attitude Uncertainty Quaternion (x, y, z)

float32 est_gravity_vector_x         # Estimated Gravity Vector (X-axis)
float32 est_gravity_vector_y         # Estimated Gravity Vector (Y-axis)
float32 est_gravity_vector_z         # Estimated Gravity Vector (Z-axis)

float32 est_heading                # Estimated Heading
float32 est_heading_uncert          # Estimated Heading Uncertainty
int32 est_heading_source            # Estimated Heading Source

float32 est_magnetic_model_sln_north  # Estimated Magnetic Model Solution (North)
float32 est_magnetic_model_sln_east   # Estimated Magnetic Model Solution (East)
float32 est_magnetic_model_sln_down   # Estimated Magnetic Model Solution (Down)
float32 est_magnetic_model_sln_inclination  # Estimated Magnetic Model Solution (Inclination)
float32 est_magnetic_model_sln_declination  # Estimated Magnetic Model Solution (Declination)

float32 est_gyro_scale_factor_x       # Estimated Gyroscope Scale Factor (X-axis)
float32 est_gyro_scale_factor_y       # Estimated Gyroscope Scale Factor (Y-axis)
float32 est_gyro_scale_factor_z       # Estimated Gyroscope Scale Factor (Z-axis)

float32 est_accel_scale_factor_x      # Estimated Accelerometer Scale Factor (X-axis)
float32 est_accel_scale_factor_y      # Estimated Accelerometer Scale Factor (Y-axis)
float32 est_accel_scale_factor_z      # Estimated Accelerometer Scale Factor (Z-axis)

float32 est_gyro_scale_factor_x_uncert  # Estimated Gyroscope Scale Factor Uncertainty (X-axis)
float32 est_gyro_scale_factor_y_uncert  # Estimated Gyroscope Scale Factor Uncertainty (Y-axis)
float32 est_gyro_scale_factor_z_uncert  # Estimated Gyroscope Scale Factor Uncertainty (Z-axis)

float32 est_accel_scale_factor_x_uncert  # Estimated Accelerometer Scale Factor Uncertainty (X-axis)
float32 est_accel_scale_factor_y_uncert  # Estimated Accelerometer Scale Factor Uncertainty (Y-axis)
float32 est_accel_scale_factor_z_uncert  # Estimated Accelerometer Scale Factor Uncertainty (Z-axis)

float32 est_compensated_accel_x     # Estimated Compensated Acceleration (X-axis)
float32 est_compensated_accel_y     # Estimated Compensated Acceleration (Y-axis)
float32 est_compensated_accel_z     # Estimated Compensated Acceleration (Z-axis)

float32 est_std_atm_model_geometric_alt  # Estimated Standard Atmosphere Model (Geometric Altitude)
float32 est_std_atm_model_geopotential_alt  # Estimated Standard Atmosphere Model (Geopotential Altitude)
float32 est_std_atm_model_temperature  # Estimated Standard Atmosphere Model (Temperature)
float32 est_std_atm_model_pressure   # Estimated Standard Atmosphere Model (Pressure)
float32 est_std_atm_model_density    # Estimated Standard Atmosphere Model (Density)

float32 est_pressure_alt           # Estimated Pressure Altitude

float32 est_mag_auto_hard_iron_offset_x
float32 est_mag_auto_hard_iron_offset_y
float32 est_mag_auto_hard_iron_offset_z

float32[9] est_mag_auto_soft_iron_matrix
# float32[3][3] est_mag_auto_soft_iron_matrix
