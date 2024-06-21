// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wamv_interfaces:msg/MicrostrainImu.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_IMU__STRUCT_H_
#define WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_IMU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MicrostrainImu in the package wamv_interfaces.
/**
  * header header                      # Header for ROS message
 */
typedef struct wamv_interfaces__msg__MicrostrainImu
{
  /// Timestamp
  int64_t timestamp;
  /// Scaled Accelerometer X
  float scaled_accel_x;
  /// Scaled Accelerometer Y
  float scaled_accel_y;
  /// Scaled Accelerometer Z
  float scaled_accel_z;
  /// Scaled Gyroscope X
  float scaled_gyro_x;
  /// Scaled Gyroscope Y
  float scaled_gyro_y;
  /// Scaled Gyroscope Z
  float scaled_gyro_z;
  /// Scaled Magnetometer X
  float scaled_mag_x;
  /// Scaled Magnetometer Y
  float scaled_mag_y;
  /// Scaled Magnetometer Z
  float scaled_mag_z;
  /// Delta Theta X
  float delta_theta_x;
  /// Delta Theta Y
  float delta_theta_y;
  /// Delta Theta Z
  float delta_theta_z;
  /// Delta Velocity X
  float delta_vel_x;
  /// Delta Velocity Y
  float delta_vel_y;
  /// Delta Velocity Z
  float delta_vel_z;
  /// float32[3][3] orient_matrix         # Orientation Matrix (3x3)
  /// Orientation Matrix (3x3)
  float orient_matrix[9];
  /// Roll
  float roll;
  /// Pitch
  float pitch;
  /// Yaw
  float yaw;
  /// Orientation Quaternion (x, y, z)
  float orient_quaternion[3];
  /// Stabilized Magnetometer X
  float stabilized_mag_x;
  /// Stabilized Magnetometer Y
  float stabilized_mag_y;
  /// Stabilized Magnetometer Z
  float stabilized_mag_z;
  /// Stabilized Accelerometer X
  float stabilized_accel_x;
  /// Stabilized Accelerometer Y
  float stabilized_accel_y;
  /// Stabilized Accelerometer Z
  float stabilized_accel_z;
  /// GPS Correlation Timestamp (Time of Week)
  double gps_correl_timestamp_tow;
  /// GPS Correlation Timestamp (Week Number)
  int32_t gps_correl_timestamp_week_num;
  /// GPS Correlation Timestamp Flags
  int32_t gps_correl_timestamp_flags;
  /// Scaled Ambient Pressure
  float scaled_ambient_pressure;
} wamv_interfaces__msg__MicrostrainImu;

// Struct for a sequence of wamv_interfaces__msg__MicrostrainImu.
typedef struct wamv_interfaces__msg__MicrostrainImu__Sequence
{
  wamv_interfaces__msg__MicrostrainImu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wamv_interfaces__msg__MicrostrainImu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_IMU__STRUCT_H_
