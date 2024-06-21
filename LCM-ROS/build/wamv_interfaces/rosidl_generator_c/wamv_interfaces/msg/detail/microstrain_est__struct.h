// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wamv_interfaces:msg/MicrostrainEst.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_EST__STRUCT_H_
#define WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_EST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MicrostrainEst in the package wamv_interfaces.
/**
  * MicrostrainEst.msg
 */
typedef struct wamv_interfaces__msg__MicrostrainEst
{
  /// Timestamp
  int64_t timestamp;
  /// Estimated Latitude
  double est_latitude;
  /// Estimated Longitude
  double est_longitude;
  /// Estimated Height Above Ellipsoid
  double est_height_above_ellipsoid;
  /// Estimated North Velocity
  float est_north_velocity;
  /// Estimated East Velocity
  float est_east_velocity;
  /// Estimated Down Velocity
  float est_down_velocity;
  /// Estimated Orientation Quaternion (x, y, z)
  float est_orient_quaternion[3];
  /// float32[3][3] est_orient_matrix    # Estimated Orientation Matrix (3x3)
  /// Estimated Orientation Matrix (3x3)
  float est_orient_matrix[9];
  /// Estimated Roll
  float est_roll;
  /// Estimated Pitch
  float est_pitch;
  /// Estimated Yaw
  float est_yaw;
  /// Estimated Gyroscope Bias (X-axis)
  float est_gyro_bias_x;
  /// Estimated Gyroscope Bias (Y-axis)
  float est_gyro_bias_y;
  /// Estimated Gyroscope Bias (Z-axis)
  float est_gyro_bias_z;
  /// Estimated Accelerometer Bias (X-axis)
  float est_accel_bias_x;
  /// Estimated Accelerometer Bias (Y-axis)
  float est_accel_bias_y;
  /// Estimated Accelerometer Bias (Z-axis)
  float est_accel_bias_z;
  /// Estimated North Position Uncertainty
  float est_north_position_uncert;
  /// Estimated East Position Uncertainty
  float est_east_position_uncert;
  /// Estimated Down Position Uncertainty
  float est_down_position_uncert;
  /// Estimated North Velocity Uncertainty
  float est_north_velocity_uncert;
  /// Estimated East Velocity Uncertainty
  float est_east_velocity_uncert;
  /// Estimated Down Velocity Uncertainty
  float est_down_velocity_uncert;
  /// Estimated Roll Uncertainty
  float est_roll_uncert;
  /// Estimated Pitch Uncertainty
  float est_pitch_uncert;
  /// Estimated Yaw Uncertainty
  float est_yaw_uncert;
  /// Estimated Gyroscope Bias Uncertainty (X-axis)
  float est_gyro_bias_x_uncert;
  /// Estimated Gyroscope Bias Uncertainty (Y-axis)
  float est_gyro_bias_y_uncert;
  /// Estimated Gyroscope Bias Uncertainty (Z-axis)
  float est_gyro_bias_z_uncert;
  /// Estimated Accelerometer Bias Uncertainty (X-axis)
  float est_accel_bias_x_uncert;
  /// Estimated Accelerometer Bias Uncertainty (Y-axis)
  float est_accel_bias_y_uncert;
  /// Estimated Accelerometer Bias Uncertainty (Z-axis)
  float est_accel_bias_z_uncert;
  /// Estimated Linear Acceleration (X-axis)
  float est_linear_accel_x;
  /// Estimated Linear Acceleration (Y-axis)
  float est_linear_accel_y;
  /// Estimated Linear Acceleration (Z-axis)
  float est_linear_accel_z;
  /// Estimated Angular Rate (X-axis)
  float est_angular_rate_x;
  /// Estimated Angular Rate (Y-axis)
  float est_angular_rate_y;
  /// Estimated Angular Rate (Z-axis)
  float est_angular_rate_z;
  /// Estimated WGS84 Local Gravity Magnitude
  float est_wgs84_local_grav_magnitude;
  /// Estimated Filter State
  int32_t est_filter_state;
  /// Estimated Filter Dynamics Mode
  int32_t est_filter_dynamics_mode;
  /// Estimated Filter Status Flags
  int32_t est_filter_status_flags;
  /// Estimated Filter GPS Time (Time of Week)
  double est_filter_gps_time_tow;
  /// Estimated Filter GPS Time (Week Number)
  int32_t est_filter_gps_time_week_num;
  /// Estimated Attitude Uncertainty Quaternion (x, y, z)
  float est_attitude_uncert_quaternion[3];
  /// Estimated Gravity Vector (X-axis)
  float est_gravity_vector_x;
  /// Estimated Gravity Vector (Y-axis)
  float est_gravity_vector_y;
  /// Estimated Gravity Vector (Z-axis)
  float est_gravity_vector_z;
  /// Estimated Heading
  float est_heading;
  /// Estimated Heading Uncertainty
  float est_heading_uncert;
  /// Estimated Heading Source
  int32_t est_heading_source;
  /// Estimated Magnetic Model Solution (North)
  float est_magnetic_model_sln_north;
  /// Estimated Magnetic Model Solution (East)
  float est_magnetic_model_sln_east;
  /// Estimated Magnetic Model Solution (Down)
  float est_magnetic_model_sln_down;
  /// Estimated Magnetic Model Solution (Inclination)
  float est_magnetic_model_sln_inclination;
  /// Estimated Magnetic Model Solution (Declination)
  float est_magnetic_model_sln_declination;
  /// Estimated Gyroscope Scale Factor (X-axis)
  float est_gyro_scale_factor_x;
  /// Estimated Gyroscope Scale Factor (Y-axis)
  float est_gyro_scale_factor_y;
  /// Estimated Gyroscope Scale Factor (Z-axis)
  float est_gyro_scale_factor_z;
  /// Estimated Accelerometer Scale Factor (X-axis)
  float est_accel_scale_factor_x;
  /// Estimated Accelerometer Scale Factor (Y-axis)
  float est_accel_scale_factor_y;
  /// Estimated Accelerometer Scale Factor (Z-axis)
  float est_accel_scale_factor_z;
  /// Estimated Gyroscope Scale Factor Uncertainty (X-axis)
  float est_gyro_scale_factor_x_uncert;
  /// Estimated Gyroscope Scale Factor Uncertainty (Y-axis)
  float est_gyro_scale_factor_y_uncert;
  /// Estimated Gyroscope Scale Factor Uncertainty (Z-axis)
  float est_gyro_scale_factor_z_uncert;
  /// Estimated Accelerometer Scale Factor Uncertainty (X-axis)
  float est_accel_scale_factor_x_uncert;
  /// Estimated Accelerometer Scale Factor Uncertainty (Y-axis)
  float est_accel_scale_factor_y_uncert;
  /// Estimated Accelerometer Scale Factor Uncertainty (Z-axis)
  float est_accel_scale_factor_z_uncert;
  /// Estimated Compensated Acceleration (X-axis)
  float est_compensated_accel_x;
  /// Estimated Compensated Acceleration (Y-axis)
  float est_compensated_accel_y;
  /// Estimated Compensated Acceleration (Z-axis)
  float est_compensated_accel_z;
  /// Estimated Standard Atmosphere Model (Geometric Altitude)
  float est_std_atm_model_geometric_alt;
  /// Estimated Standard Atmosphere Model (Geopotential Altitude)
  float est_std_atm_model_geopotential_alt;
  /// Estimated Standard Atmosphere Model (Temperature)
  float est_std_atm_model_temperature;
  /// Estimated Standard Atmosphere Model (Pressure)
  float est_std_atm_model_pressure;
  /// Estimated Standard Atmosphere Model (Density)
  float est_std_atm_model_density;
  /// Estimated Pressure Altitude
  float est_pressure_alt;
  float est_mag_auto_hard_iron_offset_x;
  float est_mag_auto_hard_iron_offset_y;
  float est_mag_auto_hard_iron_offset_z;
  float est_mag_auto_soft_iron_matrix[9];
} wamv_interfaces__msg__MicrostrainEst;

// Struct for a sequence of wamv_interfaces__msg__MicrostrainEst.
typedef struct wamv_interfaces__msg__MicrostrainEst__Sequence
{
  wamv_interfaces__msg__MicrostrainEst * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wamv_interfaces__msg__MicrostrainEst__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_EST__STRUCT_H_
