// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wamv_interfaces:msg/MicrostrainGnss.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_GNSS__STRUCT_H_
#define WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_GNSS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MicrostrainGnss in the package wamv_interfaces.
/**
  * header header                      # Header for ROS message
 */
typedef struct wamv_interfaces__msg__MicrostrainGnss
{
  /// Timestamp
  int64_t timestamp;
  /// Latitude
  double latitude;
  /// Longitude
  double longitude;
  /// Height Above Elipsoid
  double height_above_elipsoid;
  /// Height Above Mean Sea Level
  double height_above_msl;
  /// Horizontal Accuracy
  float horizontal_accuracy;
  /// Vertical Accuracy
  float vertical_accuracy;
  /// ECEF Position X
  double ecef_pos_x;
  /// ECEF Position Y
  double ecef_pos_y;
  /// ECEF Position Z
  double ecef_pos_z;
  /// ECEF Position Accuracy
  float ecef_pos_accuracy;
  /// North Velocity
  float north_velocity;
  /// East Velocity
  float east_velocity;
  /// Down Velocity
  float down_velocity;
  /// Speed
  float speed;
  /// Ground Speed
  float ground_speed;
  /// Heading
  float heading;
  /// Speed Accuracy
  float speed_accuracy;
  /// Heading Accuracy
  float heading_accuracy;
  /// ECEF Velocity X
  float ecef_vel_x;
  /// ECEF Velocity Y
  float ecef_vel_y;
  /// ECEF Velocity Z
  float ecef_vel_z;
  /// ECEF Velocity Accuracy
  float ecef_vel_accuracy;
  /// Geometric DOP
  float geometric_dop;
  /// Position DOP
  float position_dop;
  /// Horizontal DOP
  float horizontal_dop;
  /// Vertical DOP
  float vertical_dop;
  /// Time DOP
  float time_dop;
  /// Northing DOP
  float northing_dop;
  /// Easting DOP
  float easting_dop;
  /// UTC Timestamp
  int64_t utc_timestamp;
  /// UTC Timestamp Flags
  int32_t utc_timestamp_flags;
  /// GPS Time of Week
  double gps_time_tow;
  /// GPS Time Week Number
  int32_t gps_time_week_num;
  /// GPS Clock Bias
  double gps_clock_bias;
  /// GPS Clock Drift
  double gps_clock_drift;
  /// GPS Clock Accuracy
  double gps_clock_accuracy;
  /// GNSS Fix Type
  int16_t gnss_fix_type;
  /// GNSS Fix Satellite Count
  int16_t gnss_fix_sv_count;
  /// GNSS Fix Flags
  int32_t gnss_fix_flags;
  /// Sensor State
  int16_t sensor_state;
  /// Antenna State
  int16_t antenna_state;
  /// Antenna Power
  int16_t antenna_power;
  /// DGNSS Newest Age GNSS Base 0
  float dgnss_newest_age_gnss_base_0;
  /// DGNSS Base Station Status GNSS Base 0
  int16_t dgnss_base_station_status_gnss_base_0;
  /// DGNSS Number of Channels GNSS Base 0
  int32_t dgnss_num_channels_gnss_base_0;
} wamv_interfaces__msg__MicrostrainGnss;

// Struct for a sequence of wamv_interfaces__msg__MicrostrainGnss.
typedef struct wamv_interfaces__msg__MicrostrainGnss__Sequence
{
  wamv_interfaces__msg__MicrostrainGnss * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wamv_interfaces__msg__MicrostrainGnss__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_GNSS__STRUCT_H_
