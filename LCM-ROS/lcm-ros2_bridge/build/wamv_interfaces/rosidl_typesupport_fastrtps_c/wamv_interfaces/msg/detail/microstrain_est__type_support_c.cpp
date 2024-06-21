// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wamv_interfaces:msg/MicrostrainEst.idl
// generated code does not contain a copyright notice
#include "wamv_interfaces/msg/detail/microstrain_est__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wamv_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wamv_interfaces/msg/detail/microstrain_est__struct.h"
#include "wamv_interfaces/msg/detail/microstrain_est__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MicrostrainEst__ros_msg_type = wamv_interfaces__msg__MicrostrainEst;

static bool _MicrostrainEst__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MicrostrainEst__ros_msg_type * ros_message = static_cast<const _MicrostrainEst__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: est_latitude
  {
    cdr << ros_message->est_latitude;
  }

  // Field name: est_longitude
  {
    cdr << ros_message->est_longitude;
  }

  // Field name: est_height_above_ellipsoid
  {
    cdr << ros_message->est_height_above_ellipsoid;
  }

  // Field name: est_north_velocity
  {
    cdr << ros_message->est_north_velocity;
  }

  // Field name: est_east_velocity
  {
    cdr << ros_message->est_east_velocity;
  }

  // Field name: est_down_velocity
  {
    cdr << ros_message->est_down_velocity;
  }

  // Field name: est_orient_quaternion
  {
    size_t size = 3;
    auto array_ptr = ros_message->est_orient_quaternion;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: est_orient_matrix
  {
    size_t size = 9;
    auto array_ptr = ros_message->est_orient_matrix;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: est_roll
  {
    cdr << ros_message->est_roll;
  }

  // Field name: est_pitch
  {
    cdr << ros_message->est_pitch;
  }

  // Field name: est_yaw
  {
    cdr << ros_message->est_yaw;
  }

  // Field name: est_gyro_bias_x
  {
    cdr << ros_message->est_gyro_bias_x;
  }

  // Field name: est_gyro_bias_y
  {
    cdr << ros_message->est_gyro_bias_y;
  }

  // Field name: est_gyro_bias_z
  {
    cdr << ros_message->est_gyro_bias_z;
  }

  // Field name: est_accel_bias_x
  {
    cdr << ros_message->est_accel_bias_x;
  }

  // Field name: est_accel_bias_y
  {
    cdr << ros_message->est_accel_bias_y;
  }

  // Field name: est_accel_bias_z
  {
    cdr << ros_message->est_accel_bias_z;
  }

  // Field name: est_north_position_uncert
  {
    cdr << ros_message->est_north_position_uncert;
  }

  // Field name: est_east_position_uncert
  {
    cdr << ros_message->est_east_position_uncert;
  }

  // Field name: est_down_position_uncert
  {
    cdr << ros_message->est_down_position_uncert;
  }

  // Field name: est_north_velocity_uncert
  {
    cdr << ros_message->est_north_velocity_uncert;
  }

  // Field name: est_east_velocity_uncert
  {
    cdr << ros_message->est_east_velocity_uncert;
  }

  // Field name: est_down_velocity_uncert
  {
    cdr << ros_message->est_down_velocity_uncert;
  }

  // Field name: est_roll_uncert
  {
    cdr << ros_message->est_roll_uncert;
  }

  // Field name: est_pitch_uncert
  {
    cdr << ros_message->est_pitch_uncert;
  }

  // Field name: est_yaw_uncert
  {
    cdr << ros_message->est_yaw_uncert;
  }

  // Field name: est_gyro_bias_x_uncert
  {
    cdr << ros_message->est_gyro_bias_x_uncert;
  }

  // Field name: est_gyro_bias_y_uncert
  {
    cdr << ros_message->est_gyro_bias_y_uncert;
  }

  // Field name: est_gyro_bias_z_uncert
  {
    cdr << ros_message->est_gyro_bias_z_uncert;
  }

  // Field name: est_accel_bias_x_uncert
  {
    cdr << ros_message->est_accel_bias_x_uncert;
  }

  // Field name: est_accel_bias_y_uncert
  {
    cdr << ros_message->est_accel_bias_y_uncert;
  }

  // Field name: est_accel_bias_z_uncert
  {
    cdr << ros_message->est_accel_bias_z_uncert;
  }

  // Field name: est_linear_accel_x
  {
    cdr << ros_message->est_linear_accel_x;
  }

  // Field name: est_linear_accel_y
  {
    cdr << ros_message->est_linear_accel_y;
  }

  // Field name: est_linear_accel_z
  {
    cdr << ros_message->est_linear_accel_z;
  }

  // Field name: est_angular_rate_x
  {
    cdr << ros_message->est_angular_rate_x;
  }

  // Field name: est_angular_rate_y
  {
    cdr << ros_message->est_angular_rate_y;
  }

  // Field name: est_angular_rate_z
  {
    cdr << ros_message->est_angular_rate_z;
  }

  // Field name: est_wgs84_local_grav_magnitude
  {
    cdr << ros_message->est_wgs84_local_grav_magnitude;
  }

  // Field name: est_filter_state
  {
    cdr << ros_message->est_filter_state;
  }

  // Field name: est_filter_dynamics_mode
  {
    cdr << ros_message->est_filter_dynamics_mode;
  }

  // Field name: est_filter_status_flags
  {
    cdr << ros_message->est_filter_status_flags;
  }

  // Field name: est_filter_gps_time_tow
  {
    cdr << ros_message->est_filter_gps_time_tow;
  }

  // Field name: est_filter_gps_time_week_num
  {
    cdr << ros_message->est_filter_gps_time_week_num;
  }

  // Field name: est_attitude_uncert_quaternion
  {
    size_t size = 3;
    auto array_ptr = ros_message->est_attitude_uncert_quaternion;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: est_gravity_vector_x
  {
    cdr << ros_message->est_gravity_vector_x;
  }

  // Field name: est_gravity_vector_y
  {
    cdr << ros_message->est_gravity_vector_y;
  }

  // Field name: est_gravity_vector_z
  {
    cdr << ros_message->est_gravity_vector_z;
  }

  // Field name: est_heading
  {
    cdr << ros_message->est_heading;
  }

  // Field name: est_heading_uncert
  {
    cdr << ros_message->est_heading_uncert;
  }

  // Field name: est_heading_source
  {
    cdr << ros_message->est_heading_source;
  }

  // Field name: est_magnetic_model_sln_north
  {
    cdr << ros_message->est_magnetic_model_sln_north;
  }

  // Field name: est_magnetic_model_sln_east
  {
    cdr << ros_message->est_magnetic_model_sln_east;
  }

  // Field name: est_magnetic_model_sln_down
  {
    cdr << ros_message->est_magnetic_model_sln_down;
  }

  // Field name: est_magnetic_model_sln_inclination
  {
    cdr << ros_message->est_magnetic_model_sln_inclination;
  }

  // Field name: est_magnetic_model_sln_declination
  {
    cdr << ros_message->est_magnetic_model_sln_declination;
  }

  // Field name: est_gyro_scale_factor_x
  {
    cdr << ros_message->est_gyro_scale_factor_x;
  }

  // Field name: est_gyro_scale_factor_y
  {
    cdr << ros_message->est_gyro_scale_factor_y;
  }

  // Field name: est_gyro_scale_factor_z
  {
    cdr << ros_message->est_gyro_scale_factor_z;
  }

  // Field name: est_accel_scale_factor_x
  {
    cdr << ros_message->est_accel_scale_factor_x;
  }

  // Field name: est_accel_scale_factor_y
  {
    cdr << ros_message->est_accel_scale_factor_y;
  }

  // Field name: est_accel_scale_factor_z
  {
    cdr << ros_message->est_accel_scale_factor_z;
  }

  // Field name: est_gyro_scale_factor_x_uncert
  {
    cdr << ros_message->est_gyro_scale_factor_x_uncert;
  }

  // Field name: est_gyro_scale_factor_y_uncert
  {
    cdr << ros_message->est_gyro_scale_factor_y_uncert;
  }

  // Field name: est_gyro_scale_factor_z_uncert
  {
    cdr << ros_message->est_gyro_scale_factor_z_uncert;
  }

  // Field name: est_accel_scale_factor_x_uncert
  {
    cdr << ros_message->est_accel_scale_factor_x_uncert;
  }

  // Field name: est_accel_scale_factor_y_uncert
  {
    cdr << ros_message->est_accel_scale_factor_y_uncert;
  }

  // Field name: est_accel_scale_factor_z_uncert
  {
    cdr << ros_message->est_accel_scale_factor_z_uncert;
  }

  // Field name: est_compensated_accel_x
  {
    cdr << ros_message->est_compensated_accel_x;
  }

  // Field name: est_compensated_accel_y
  {
    cdr << ros_message->est_compensated_accel_y;
  }

  // Field name: est_compensated_accel_z
  {
    cdr << ros_message->est_compensated_accel_z;
  }

  // Field name: est_std_atm_model_geometric_alt
  {
    cdr << ros_message->est_std_atm_model_geometric_alt;
  }

  // Field name: est_std_atm_model_geopotential_alt
  {
    cdr << ros_message->est_std_atm_model_geopotential_alt;
  }

  // Field name: est_std_atm_model_temperature
  {
    cdr << ros_message->est_std_atm_model_temperature;
  }

  // Field name: est_std_atm_model_pressure
  {
    cdr << ros_message->est_std_atm_model_pressure;
  }

  // Field name: est_std_atm_model_density
  {
    cdr << ros_message->est_std_atm_model_density;
  }

  // Field name: est_pressure_alt
  {
    cdr << ros_message->est_pressure_alt;
  }

  // Field name: est_mag_auto_hard_iron_offset_x
  {
    cdr << ros_message->est_mag_auto_hard_iron_offset_x;
  }

  // Field name: est_mag_auto_hard_iron_offset_y
  {
    cdr << ros_message->est_mag_auto_hard_iron_offset_y;
  }

  // Field name: est_mag_auto_hard_iron_offset_z
  {
    cdr << ros_message->est_mag_auto_hard_iron_offset_z;
  }

  // Field name: est_mag_auto_soft_iron_matrix
  {
    size_t size = 9;
    auto array_ptr = ros_message->est_mag_auto_soft_iron_matrix;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _MicrostrainEst__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MicrostrainEst__ros_msg_type * ros_message = static_cast<_MicrostrainEst__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: est_latitude
  {
    cdr >> ros_message->est_latitude;
  }

  // Field name: est_longitude
  {
    cdr >> ros_message->est_longitude;
  }

  // Field name: est_height_above_ellipsoid
  {
    cdr >> ros_message->est_height_above_ellipsoid;
  }

  // Field name: est_north_velocity
  {
    cdr >> ros_message->est_north_velocity;
  }

  // Field name: est_east_velocity
  {
    cdr >> ros_message->est_east_velocity;
  }

  // Field name: est_down_velocity
  {
    cdr >> ros_message->est_down_velocity;
  }

  // Field name: est_orient_quaternion
  {
    size_t size = 3;
    auto array_ptr = ros_message->est_orient_quaternion;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: est_orient_matrix
  {
    size_t size = 9;
    auto array_ptr = ros_message->est_orient_matrix;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: est_roll
  {
    cdr >> ros_message->est_roll;
  }

  // Field name: est_pitch
  {
    cdr >> ros_message->est_pitch;
  }

  // Field name: est_yaw
  {
    cdr >> ros_message->est_yaw;
  }

  // Field name: est_gyro_bias_x
  {
    cdr >> ros_message->est_gyro_bias_x;
  }

  // Field name: est_gyro_bias_y
  {
    cdr >> ros_message->est_gyro_bias_y;
  }

  // Field name: est_gyro_bias_z
  {
    cdr >> ros_message->est_gyro_bias_z;
  }

  // Field name: est_accel_bias_x
  {
    cdr >> ros_message->est_accel_bias_x;
  }

  // Field name: est_accel_bias_y
  {
    cdr >> ros_message->est_accel_bias_y;
  }

  // Field name: est_accel_bias_z
  {
    cdr >> ros_message->est_accel_bias_z;
  }

  // Field name: est_north_position_uncert
  {
    cdr >> ros_message->est_north_position_uncert;
  }

  // Field name: est_east_position_uncert
  {
    cdr >> ros_message->est_east_position_uncert;
  }

  // Field name: est_down_position_uncert
  {
    cdr >> ros_message->est_down_position_uncert;
  }

  // Field name: est_north_velocity_uncert
  {
    cdr >> ros_message->est_north_velocity_uncert;
  }

  // Field name: est_east_velocity_uncert
  {
    cdr >> ros_message->est_east_velocity_uncert;
  }

  // Field name: est_down_velocity_uncert
  {
    cdr >> ros_message->est_down_velocity_uncert;
  }

  // Field name: est_roll_uncert
  {
    cdr >> ros_message->est_roll_uncert;
  }

  // Field name: est_pitch_uncert
  {
    cdr >> ros_message->est_pitch_uncert;
  }

  // Field name: est_yaw_uncert
  {
    cdr >> ros_message->est_yaw_uncert;
  }

  // Field name: est_gyro_bias_x_uncert
  {
    cdr >> ros_message->est_gyro_bias_x_uncert;
  }

  // Field name: est_gyro_bias_y_uncert
  {
    cdr >> ros_message->est_gyro_bias_y_uncert;
  }

  // Field name: est_gyro_bias_z_uncert
  {
    cdr >> ros_message->est_gyro_bias_z_uncert;
  }

  // Field name: est_accel_bias_x_uncert
  {
    cdr >> ros_message->est_accel_bias_x_uncert;
  }

  // Field name: est_accel_bias_y_uncert
  {
    cdr >> ros_message->est_accel_bias_y_uncert;
  }

  // Field name: est_accel_bias_z_uncert
  {
    cdr >> ros_message->est_accel_bias_z_uncert;
  }

  // Field name: est_linear_accel_x
  {
    cdr >> ros_message->est_linear_accel_x;
  }

  // Field name: est_linear_accel_y
  {
    cdr >> ros_message->est_linear_accel_y;
  }

  // Field name: est_linear_accel_z
  {
    cdr >> ros_message->est_linear_accel_z;
  }

  // Field name: est_angular_rate_x
  {
    cdr >> ros_message->est_angular_rate_x;
  }

  // Field name: est_angular_rate_y
  {
    cdr >> ros_message->est_angular_rate_y;
  }

  // Field name: est_angular_rate_z
  {
    cdr >> ros_message->est_angular_rate_z;
  }

  // Field name: est_wgs84_local_grav_magnitude
  {
    cdr >> ros_message->est_wgs84_local_grav_magnitude;
  }

  // Field name: est_filter_state
  {
    cdr >> ros_message->est_filter_state;
  }

  // Field name: est_filter_dynamics_mode
  {
    cdr >> ros_message->est_filter_dynamics_mode;
  }

  // Field name: est_filter_status_flags
  {
    cdr >> ros_message->est_filter_status_flags;
  }

  // Field name: est_filter_gps_time_tow
  {
    cdr >> ros_message->est_filter_gps_time_tow;
  }

  // Field name: est_filter_gps_time_week_num
  {
    cdr >> ros_message->est_filter_gps_time_week_num;
  }

  // Field name: est_attitude_uncert_quaternion
  {
    size_t size = 3;
    auto array_ptr = ros_message->est_attitude_uncert_quaternion;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: est_gravity_vector_x
  {
    cdr >> ros_message->est_gravity_vector_x;
  }

  // Field name: est_gravity_vector_y
  {
    cdr >> ros_message->est_gravity_vector_y;
  }

  // Field name: est_gravity_vector_z
  {
    cdr >> ros_message->est_gravity_vector_z;
  }

  // Field name: est_heading
  {
    cdr >> ros_message->est_heading;
  }

  // Field name: est_heading_uncert
  {
    cdr >> ros_message->est_heading_uncert;
  }

  // Field name: est_heading_source
  {
    cdr >> ros_message->est_heading_source;
  }

  // Field name: est_magnetic_model_sln_north
  {
    cdr >> ros_message->est_magnetic_model_sln_north;
  }

  // Field name: est_magnetic_model_sln_east
  {
    cdr >> ros_message->est_magnetic_model_sln_east;
  }

  // Field name: est_magnetic_model_sln_down
  {
    cdr >> ros_message->est_magnetic_model_sln_down;
  }

  // Field name: est_magnetic_model_sln_inclination
  {
    cdr >> ros_message->est_magnetic_model_sln_inclination;
  }

  // Field name: est_magnetic_model_sln_declination
  {
    cdr >> ros_message->est_magnetic_model_sln_declination;
  }

  // Field name: est_gyro_scale_factor_x
  {
    cdr >> ros_message->est_gyro_scale_factor_x;
  }

  // Field name: est_gyro_scale_factor_y
  {
    cdr >> ros_message->est_gyro_scale_factor_y;
  }

  // Field name: est_gyro_scale_factor_z
  {
    cdr >> ros_message->est_gyro_scale_factor_z;
  }

  // Field name: est_accel_scale_factor_x
  {
    cdr >> ros_message->est_accel_scale_factor_x;
  }

  // Field name: est_accel_scale_factor_y
  {
    cdr >> ros_message->est_accel_scale_factor_y;
  }

  // Field name: est_accel_scale_factor_z
  {
    cdr >> ros_message->est_accel_scale_factor_z;
  }

  // Field name: est_gyro_scale_factor_x_uncert
  {
    cdr >> ros_message->est_gyro_scale_factor_x_uncert;
  }

  // Field name: est_gyro_scale_factor_y_uncert
  {
    cdr >> ros_message->est_gyro_scale_factor_y_uncert;
  }

  // Field name: est_gyro_scale_factor_z_uncert
  {
    cdr >> ros_message->est_gyro_scale_factor_z_uncert;
  }

  // Field name: est_accel_scale_factor_x_uncert
  {
    cdr >> ros_message->est_accel_scale_factor_x_uncert;
  }

  // Field name: est_accel_scale_factor_y_uncert
  {
    cdr >> ros_message->est_accel_scale_factor_y_uncert;
  }

  // Field name: est_accel_scale_factor_z_uncert
  {
    cdr >> ros_message->est_accel_scale_factor_z_uncert;
  }

  // Field name: est_compensated_accel_x
  {
    cdr >> ros_message->est_compensated_accel_x;
  }

  // Field name: est_compensated_accel_y
  {
    cdr >> ros_message->est_compensated_accel_y;
  }

  // Field name: est_compensated_accel_z
  {
    cdr >> ros_message->est_compensated_accel_z;
  }

  // Field name: est_std_atm_model_geometric_alt
  {
    cdr >> ros_message->est_std_atm_model_geometric_alt;
  }

  // Field name: est_std_atm_model_geopotential_alt
  {
    cdr >> ros_message->est_std_atm_model_geopotential_alt;
  }

  // Field name: est_std_atm_model_temperature
  {
    cdr >> ros_message->est_std_atm_model_temperature;
  }

  // Field name: est_std_atm_model_pressure
  {
    cdr >> ros_message->est_std_atm_model_pressure;
  }

  // Field name: est_std_atm_model_density
  {
    cdr >> ros_message->est_std_atm_model_density;
  }

  // Field name: est_pressure_alt
  {
    cdr >> ros_message->est_pressure_alt;
  }

  // Field name: est_mag_auto_hard_iron_offset_x
  {
    cdr >> ros_message->est_mag_auto_hard_iron_offset_x;
  }

  // Field name: est_mag_auto_hard_iron_offset_y
  {
    cdr >> ros_message->est_mag_auto_hard_iron_offset_y;
  }

  // Field name: est_mag_auto_hard_iron_offset_z
  {
    cdr >> ros_message->est_mag_auto_hard_iron_offset_z;
  }

  // Field name: est_mag_auto_soft_iron_matrix
  {
    size_t size = 9;
    auto array_ptr = ros_message->est_mag_auto_soft_iron_matrix;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wamv_interfaces
size_t get_serialized_size_wamv_interfaces__msg__MicrostrainEst(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MicrostrainEst__ros_msg_type * ros_message = static_cast<const _MicrostrainEst__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_latitude
  {
    size_t item_size = sizeof(ros_message->est_latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_longitude
  {
    size_t item_size = sizeof(ros_message->est_longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_height_above_ellipsoid
  {
    size_t item_size = sizeof(ros_message->est_height_above_ellipsoid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_north_velocity
  {
    size_t item_size = sizeof(ros_message->est_north_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_east_velocity
  {
    size_t item_size = sizeof(ros_message->est_east_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_down_velocity
  {
    size_t item_size = sizeof(ros_message->est_down_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_orient_quaternion
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->est_orient_quaternion;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_orient_matrix
  {
    size_t array_size = 9;
    auto array_ptr = ros_message->est_orient_matrix;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_roll
  {
    size_t item_size = sizeof(ros_message->est_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_pitch
  {
    size_t item_size = sizeof(ros_message->est_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_yaw
  {
    size_t item_size = sizeof(ros_message->est_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_gyro_bias_x
  {
    size_t item_size = sizeof(ros_message->est_gyro_bias_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_gyro_bias_y
  {
    size_t item_size = sizeof(ros_message->est_gyro_bias_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_gyro_bias_z
  {
    size_t item_size = sizeof(ros_message->est_gyro_bias_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_accel_bias_x
  {
    size_t item_size = sizeof(ros_message->est_accel_bias_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_accel_bias_y
  {
    size_t item_size = sizeof(ros_message->est_accel_bias_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_accel_bias_z
  {
    size_t item_size = sizeof(ros_message->est_accel_bias_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_north_position_uncert
  {
    size_t item_size = sizeof(ros_message->est_north_position_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_east_position_uncert
  {
    size_t item_size = sizeof(ros_message->est_east_position_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_down_position_uncert
  {
    size_t item_size = sizeof(ros_message->est_down_position_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_north_velocity_uncert
  {
    size_t item_size = sizeof(ros_message->est_north_velocity_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_east_velocity_uncert
  {
    size_t item_size = sizeof(ros_message->est_east_velocity_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_down_velocity_uncert
  {
    size_t item_size = sizeof(ros_message->est_down_velocity_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_roll_uncert
  {
    size_t item_size = sizeof(ros_message->est_roll_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_pitch_uncert
  {
    size_t item_size = sizeof(ros_message->est_pitch_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_yaw_uncert
  {
    size_t item_size = sizeof(ros_message->est_yaw_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_gyro_bias_x_uncert
  {
    size_t item_size = sizeof(ros_message->est_gyro_bias_x_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_gyro_bias_y_uncert
  {
    size_t item_size = sizeof(ros_message->est_gyro_bias_y_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_gyro_bias_z_uncert
  {
    size_t item_size = sizeof(ros_message->est_gyro_bias_z_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_accel_bias_x_uncert
  {
    size_t item_size = sizeof(ros_message->est_accel_bias_x_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_accel_bias_y_uncert
  {
    size_t item_size = sizeof(ros_message->est_accel_bias_y_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_accel_bias_z_uncert
  {
    size_t item_size = sizeof(ros_message->est_accel_bias_z_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_linear_accel_x
  {
    size_t item_size = sizeof(ros_message->est_linear_accel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_linear_accel_y
  {
    size_t item_size = sizeof(ros_message->est_linear_accel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_linear_accel_z
  {
    size_t item_size = sizeof(ros_message->est_linear_accel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_angular_rate_x
  {
    size_t item_size = sizeof(ros_message->est_angular_rate_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_angular_rate_y
  {
    size_t item_size = sizeof(ros_message->est_angular_rate_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_angular_rate_z
  {
    size_t item_size = sizeof(ros_message->est_angular_rate_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_wgs84_local_grav_magnitude
  {
    size_t item_size = sizeof(ros_message->est_wgs84_local_grav_magnitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_filter_state
  {
    size_t item_size = sizeof(ros_message->est_filter_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_filter_dynamics_mode
  {
    size_t item_size = sizeof(ros_message->est_filter_dynamics_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_filter_status_flags
  {
    size_t item_size = sizeof(ros_message->est_filter_status_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_filter_gps_time_tow
  {
    size_t item_size = sizeof(ros_message->est_filter_gps_time_tow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_filter_gps_time_week_num
  {
    size_t item_size = sizeof(ros_message->est_filter_gps_time_week_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_attitude_uncert_quaternion
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->est_attitude_uncert_quaternion;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_gravity_vector_x
  {
    size_t item_size = sizeof(ros_message->est_gravity_vector_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_gravity_vector_y
  {
    size_t item_size = sizeof(ros_message->est_gravity_vector_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_gravity_vector_z
  {
    size_t item_size = sizeof(ros_message->est_gravity_vector_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_heading
  {
    size_t item_size = sizeof(ros_message->est_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_heading_uncert
  {
    size_t item_size = sizeof(ros_message->est_heading_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_heading_source
  {
    size_t item_size = sizeof(ros_message->est_heading_source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_magnetic_model_sln_north
  {
    size_t item_size = sizeof(ros_message->est_magnetic_model_sln_north);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_magnetic_model_sln_east
  {
    size_t item_size = sizeof(ros_message->est_magnetic_model_sln_east);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_magnetic_model_sln_down
  {
    size_t item_size = sizeof(ros_message->est_magnetic_model_sln_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_magnetic_model_sln_inclination
  {
    size_t item_size = sizeof(ros_message->est_magnetic_model_sln_inclination);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_magnetic_model_sln_declination
  {
    size_t item_size = sizeof(ros_message->est_magnetic_model_sln_declination);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_gyro_scale_factor_x
  {
    size_t item_size = sizeof(ros_message->est_gyro_scale_factor_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_gyro_scale_factor_y
  {
    size_t item_size = sizeof(ros_message->est_gyro_scale_factor_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_gyro_scale_factor_z
  {
    size_t item_size = sizeof(ros_message->est_gyro_scale_factor_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_accel_scale_factor_x
  {
    size_t item_size = sizeof(ros_message->est_accel_scale_factor_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_accel_scale_factor_y
  {
    size_t item_size = sizeof(ros_message->est_accel_scale_factor_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_accel_scale_factor_z
  {
    size_t item_size = sizeof(ros_message->est_accel_scale_factor_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_gyro_scale_factor_x_uncert
  {
    size_t item_size = sizeof(ros_message->est_gyro_scale_factor_x_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_gyro_scale_factor_y_uncert
  {
    size_t item_size = sizeof(ros_message->est_gyro_scale_factor_y_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_gyro_scale_factor_z_uncert
  {
    size_t item_size = sizeof(ros_message->est_gyro_scale_factor_z_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_accel_scale_factor_x_uncert
  {
    size_t item_size = sizeof(ros_message->est_accel_scale_factor_x_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_accel_scale_factor_y_uncert
  {
    size_t item_size = sizeof(ros_message->est_accel_scale_factor_y_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_accel_scale_factor_z_uncert
  {
    size_t item_size = sizeof(ros_message->est_accel_scale_factor_z_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_compensated_accel_x
  {
    size_t item_size = sizeof(ros_message->est_compensated_accel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_compensated_accel_y
  {
    size_t item_size = sizeof(ros_message->est_compensated_accel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_compensated_accel_z
  {
    size_t item_size = sizeof(ros_message->est_compensated_accel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_std_atm_model_geometric_alt
  {
    size_t item_size = sizeof(ros_message->est_std_atm_model_geometric_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_std_atm_model_geopotential_alt
  {
    size_t item_size = sizeof(ros_message->est_std_atm_model_geopotential_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_std_atm_model_temperature
  {
    size_t item_size = sizeof(ros_message->est_std_atm_model_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_std_atm_model_pressure
  {
    size_t item_size = sizeof(ros_message->est_std_atm_model_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_std_atm_model_density
  {
    size_t item_size = sizeof(ros_message->est_std_atm_model_density);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_pressure_alt
  {
    size_t item_size = sizeof(ros_message->est_pressure_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_mag_auto_hard_iron_offset_x
  {
    size_t item_size = sizeof(ros_message->est_mag_auto_hard_iron_offset_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_mag_auto_hard_iron_offset_y
  {
    size_t item_size = sizeof(ros_message->est_mag_auto_hard_iron_offset_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_mag_auto_hard_iron_offset_z
  {
    size_t item_size = sizeof(ros_message->est_mag_auto_hard_iron_offset_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name est_mag_auto_soft_iron_matrix
  {
    size_t array_size = 9;
    auto array_ptr = ros_message->est_mag_auto_soft_iron_matrix;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MicrostrainEst__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wamv_interfaces__msg__MicrostrainEst(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wamv_interfaces
size_t max_serialized_size_wamv_interfaces__msg__MicrostrainEst(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: est_latitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: est_longitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: est_height_above_ellipsoid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: est_north_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_east_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_down_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_orient_quaternion
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_orient_matrix
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_gyro_bias_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_gyro_bias_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_gyro_bias_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_accel_bias_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_accel_bias_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_accel_bias_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_north_position_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_east_position_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_down_position_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_north_velocity_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_east_velocity_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_down_velocity_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_roll_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_pitch_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_yaw_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_gyro_bias_x_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_gyro_bias_y_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_gyro_bias_z_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_accel_bias_x_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_accel_bias_y_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_accel_bias_z_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_linear_accel_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_linear_accel_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_linear_accel_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_angular_rate_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_angular_rate_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_angular_rate_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_wgs84_local_grav_magnitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_filter_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_filter_dynamics_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_filter_status_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_filter_gps_time_tow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: est_filter_gps_time_week_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_attitude_uncert_quaternion
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_gravity_vector_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_gravity_vector_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_gravity_vector_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_heading_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_heading_source
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_magnetic_model_sln_north
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_magnetic_model_sln_east
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_magnetic_model_sln_down
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_magnetic_model_sln_inclination
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_magnetic_model_sln_declination
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_gyro_scale_factor_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_gyro_scale_factor_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_gyro_scale_factor_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_accel_scale_factor_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_accel_scale_factor_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_accel_scale_factor_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_gyro_scale_factor_x_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_gyro_scale_factor_y_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_gyro_scale_factor_z_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_accel_scale_factor_x_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_accel_scale_factor_y_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_accel_scale_factor_z_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_compensated_accel_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_compensated_accel_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_compensated_accel_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_std_atm_model_geometric_alt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_std_atm_model_geopotential_alt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_std_atm_model_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_std_atm_model_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_std_atm_model_density
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_pressure_alt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_mag_auto_hard_iron_offset_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_mag_auto_hard_iron_offset_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_mag_auto_hard_iron_offset_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: est_mag_auto_soft_iron_matrix
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = wamv_interfaces__msg__MicrostrainEst;
    is_plain =
      (
      offsetof(DataType, est_mag_auto_soft_iron_matrix) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MicrostrainEst__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wamv_interfaces__msg__MicrostrainEst(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MicrostrainEst = {
  "wamv_interfaces::msg",
  "MicrostrainEst",
  _MicrostrainEst__cdr_serialize,
  _MicrostrainEst__cdr_deserialize,
  _MicrostrainEst__get_serialized_size,
  _MicrostrainEst__max_serialized_size
};

static rosidl_message_type_support_t _MicrostrainEst__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MicrostrainEst,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wamv_interfaces, msg, MicrostrainEst)() {
  return &_MicrostrainEst__type_support;
}

#if defined(__cplusplus)
}
#endif
