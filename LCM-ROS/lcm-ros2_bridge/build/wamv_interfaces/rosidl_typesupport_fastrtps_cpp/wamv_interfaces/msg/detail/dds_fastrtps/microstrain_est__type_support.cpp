// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from wamv_interfaces:msg/MicrostrainEst.idl
// generated code does not contain a copyright notice
#include "wamv_interfaces/msg/detail/microstrain_est__rosidl_typesupport_fastrtps_cpp.hpp"
#include "wamv_interfaces/msg/detail/microstrain_est__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace wamv_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wamv_interfaces
cdr_serialize(
  const wamv_interfaces::msg::MicrostrainEst & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: est_latitude
  cdr << ros_message.est_latitude;
  // Member: est_longitude
  cdr << ros_message.est_longitude;
  // Member: est_height_above_ellipsoid
  cdr << ros_message.est_height_above_ellipsoid;
  // Member: est_north_velocity
  cdr << ros_message.est_north_velocity;
  // Member: est_east_velocity
  cdr << ros_message.est_east_velocity;
  // Member: est_down_velocity
  cdr << ros_message.est_down_velocity;
  // Member: est_orient_quaternion
  {
    cdr << ros_message.est_orient_quaternion;
  }
  // Member: est_orient_matrix
  {
    cdr << ros_message.est_orient_matrix;
  }
  // Member: est_roll
  cdr << ros_message.est_roll;
  // Member: est_pitch
  cdr << ros_message.est_pitch;
  // Member: est_yaw
  cdr << ros_message.est_yaw;
  // Member: est_gyro_bias_x
  cdr << ros_message.est_gyro_bias_x;
  // Member: est_gyro_bias_y
  cdr << ros_message.est_gyro_bias_y;
  // Member: est_gyro_bias_z
  cdr << ros_message.est_gyro_bias_z;
  // Member: est_accel_bias_x
  cdr << ros_message.est_accel_bias_x;
  // Member: est_accel_bias_y
  cdr << ros_message.est_accel_bias_y;
  // Member: est_accel_bias_z
  cdr << ros_message.est_accel_bias_z;
  // Member: est_north_position_uncert
  cdr << ros_message.est_north_position_uncert;
  // Member: est_east_position_uncert
  cdr << ros_message.est_east_position_uncert;
  // Member: est_down_position_uncert
  cdr << ros_message.est_down_position_uncert;
  // Member: est_north_velocity_uncert
  cdr << ros_message.est_north_velocity_uncert;
  // Member: est_east_velocity_uncert
  cdr << ros_message.est_east_velocity_uncert;
  // Member: est_down_velocity_uncert
  cdr << ros_message.est_down_velocity_uncert;
  // Member: est_roll_uncert
  cdr << ros_message.est_roll_uncert;
  // Member: est_pitch_uncert
  cdr << ros_message.est_pitch_uncert;
  // Member: est_yaw_uncert
  cdr << ros_message.est_yaw_uncert;
  // Member: est_gyro_bias_x_uncert
  cdr << ros_message.est_gyro_bias_x_uncert;
  // Member: est_gyro_bias_y_uncert
  cdr << ros_message.est_gyro_bias_y_uncert;
  // Member: est_gyro_bias_z_uncert
  cdr << ros_message.est_gyro_bias_z_uncert;
  // Member: est_accel_bias_x_uncert
  cdr << ros_message.est_accel_bias_x_uncert;
  // Member: est_accel_bias_y_uncert
  cdr << ros_message.est_accel_bias_y_uncert;
  // Member: est_accel_bias_z_uncert
  cdr << ros_message.est_accel_bias_z_uncert;
  // Member: est_linear_accel_x
  cdr << ros_message.est_linear_accel_x;
  // Member: est_linear_accel_y
  cdr << ros_message.est_linear_accel_y;
  // Member: est_linear_accel_z
  cdr << ros_message.est_linear_accel_z;
  // Member: est_angular_rate_x
  cdr << ros_message.est_angular_rate_x;
  // Member: est_angular_rate_y
  cdr << ros_message.est_angular_rate_y;
  // Member: est_angular_rate_z
  cdr << ros_message.est_angular_rate_z;
  // Member: est_wgs84_local_grav_magnitude
  cdr << ros_message.est_wgs84_local_grav_magnitude;
  // Member: est_filter_state
  cdr << ros_message.est_filter_state;
  // Member: est_filter_dynamics_mode
  cdr << ros_message.est_filter_dynamics_mode;
  // Member: est_filter_status_flags
  cdr << ros_message.est_filter_status_flags;
  // Member: est_filter_gps_time_tow
  cdr << ros_message.est_filter_gps_time_tow;
  // Member: est_filter_gps_time_week_num
  cdr << ros_message.est_filter_gps_time_week_num;
  // Member: est_attitude_uncert_quaternion
  {
    cdr << ros_message.est_attitude_uncert_quaternion;
  }
  // Member: est_gravity_vector_x
  cdr << ros_message.est_gravity_vector_x;
  // Member: est_gravity_vector_y
  cdr << ros_message.est_gravity_vector_y;
  // Member: est_gravity_vector_z
  cdr << ros_message.est_gravity_vector_z;
  // Member: est_heading
  cdr << ros_message.est_heading;
  // Member: est_heading_uncert
  cdr << ros_message.est_heading_uncert;
  // Member: est_heading_source
  cdr << ros_message.est_heading_source;
  // Member: est_magnetic_model_sln_north
  cdr << ros_message.est_magnetic_model_sln_north;
  // Member: est_magnetic_model_sln_east
  cdr << ros_message.est_magnetic_model_sln_east;
  // Member: est_magnetic_model_sln_down
  cdr << ros_message.est_magnetic_model_sln_down;
  // Member: est_magnetic_model_sln_inclination
  cdr << ros_message.est_magnetic_model_sln_inclination;
  // Member: est_magnetic_model_sln_declination
  cdr << ros_message.est_magnetic_model_sln_declination;
  // Member: est_gyro_scale_factor_x
  cdr << ros_message.est_gyro_scale_factor_x;
  // Member: est_gyro_scale_factor_y
  cdr << ros_message.est_gyro_scale_factor_y;
  // Member: est_gyro_scale_factor_z
  cdr << ros_message.est_gyro_scale_factor_z;
  // Member: est_accel_scale_factor_x
  cdr << ros_message.est_accel_scale_factor_x;
  // Member: est_accel_scale_factor_y
  cdr << ros_message.est_accel_scale_factor_y;
  // Member: est_accel_scale_factor_z
  cdr << ros_message.est_accel_scale_factor_z;
  // Member: est_gyro_scale_factor_x_uncert
  cdr << ros_message.est_gyro_scale_factor_x_uncert;
  // Member: est_gyro_scale_factor_y_uncert
  cdr << ros_message.est_gyro_scale_factor_y_uncert;
  // Member: est_gyro_scale_factor_z_uncert
  cdr << ros_message.est_gyro_scale_factor_z_uncert;
  // Member: est_accel_scale_factor_x_uncert
  cdr << ros_message.est_accel_scale_factor_x_uncert;
  // Member: est_accel_scale_factor_y_uncert
  cdr << ros_message.est_accel_scale_factor_y_uncert;
  // Member: est_accel_scale_factor_z_uncert
  cdr << ros_message.est_accel_scale_factor_z_uncert;
  // Member: est_compensated_accel_x
  cdr << ros_message.est_compensated_accel_x;
  // Member: est_compensated_accel_y
  cdr << ros_message.est_compensated_accel_y;
  // Member: est_compensated_accel_z
  cdr << ros_message.est_compensated_accel_z;
  // Member: est_std_atm_model_geometric_alt
  cdr << ros_message.est_std_atm_model_geometric_alt;
  // Member: est_std_atm_model_geopotential_alt
  cdr << ros_message.est_std_atm_model_geopotential_alt;
  // Member: est_std_atm_model_temperature
  cdr << ros_message.est_std_atm_model_temperature;
  // Member: est_std_atm_model_pressure
  cdr << ros_message.est_std_atm_model_pressure;
  // Member: est_std_atm_model_density
  cdr << ros_message.est_std_atm_model_density;
  // Member: est_pressure_alt
  cdr << ros_message.est_pressure_alt;
  // Member: est_mag_auto_hard_iron_offset_x
  cdr << ros_message.est_mag_auto_hard_iron_offset_x;
  // Member: est_mag_auto_hard_iron_offset_y
  cdr << ros_message.est_mag_auto_hard_iron_offset_y;
  // Member: est_mag_auto_hard_iron_offset_z
  cdr << ros_message.est_mag_auto_hard_iron_offset_z;
  // Member: est_mag_auto_soft_iron_matrix
  {
    cdr << ros_message.est_mag_auto_soft_iron_matrix;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wamv_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wamv_interfaces::msg::MicrostrainEst & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: est_latitude
  cdr >> ros_message.est_latitude;

  // Member: est_longitude
  cdr >> ros_message.est_longitude;

  // Member: est_height_above_ellipsoid
  cdr >> ros_message.est_height_above_ellipsoid;

  // Member: est_north_velocity
  cdr >> ros_message.est_north_velocity;

  // Member: est_east_velocity
  cdr >> ros_message.est_east_velocity;

  // Member: est_down_velocity
  cdr >> ros_message.est_down_velocity;

  // Member: est_orient_quaternion
  {
    cdr >> ros_message.est_orient_quaternion;
  }

  // Member: est_orient_matrix
  {
    cdr >> ros_message.est_orient_matrix;
  }

  // Member: est_roll
  cdr >> ros_message.est_roll;

  // Member: est_pitch
  cdr >> ros_message.est_pitch;

  // Member: est_yaw
  cdr >> ros_message.est_yaw;

  // Member: est_gyro_bias_x
  cdr >> ros_message.est_gyro_bias_x;

  // Member: est_gyro_bias_y
  cdr >> ros_message.est_gyro_bias_y;

  // Member: est_gyro_bias_z
  cdr >> ros_message.est_gyro_bias_z;

  // Member: est_accel_bias_x
  cdr >> ros_message.est_accel_bias_x;

  // Member: est_accel_bias_y
  cdr >> ros_message.est_accel_bias_y;

  // Member: est_accel_bias_z
  cdr >> ros_message.est_accel_bias_z;

  // Member: est_north_position_uncert
  cdr >> ros_message.est_north_position_uncert;

  // Member: est_east_position_uncert
  cdr >> ros_message.est_east_position_uncert;

  // Member: est_down_position_uncert
  cdr >> ros_message.est_down_position_uncert;

  // Member: est_north_velocity_uncert
  cdr >> ros_message.est_north_velocity_uncert;

  // Member: est_east_velocity_uncert
  cdr >> ros_message.est_east_velocity_uncert;

  // Member: est_down_velocity_uncert
  cdr >> ros_message.est_down_velocity_uncert;

  // Member: est_roll_uncert
  cdr >> ros_message.est_roll_uncert;

  // Member: est_pitch_uncert
  cdr >> ros_message.est_pitch_uncert;

  // Member: est_yaw_uncert
  cdr >> ros_message.est_yaw_uncert;

  // Member: est_gyro_bias_x_uncert
  cdr >> ros_message.est_gyro_bias_x_uncert;

  // Member: est_gyro_bias_y_uncert
  cdr >> ros_message.est_gyro_bias_y_uncert;

  // Member: est_gyro_bias_z_uncert
  cdr >> ros_message.est_gyro_bias_z_uncert;

  // Member: est_accel_bias_x_uncert
  cdr >> ros_message.est_accel_bias_x_uncert;

  // Member: est_accel_bias_y_uncert
  cdr >> ros_message.est_accel_bias_y_uncert;

  // Member: est_accel_bias_z_uncert
  cdr >> ros_message.est_accel_bias_z_uncert;

  // Member: est_linear_accel_x
  cdr >> ros_message.est_linear_accel_x;

  // Member: est_linear_accel_y
  cdr >> ros_message.est_linear_accel_y;

  // Member: est_linear_accel_z
  cdr >> ros_message.est_linear_accel_z;

  // Member: est_angular_rate_x
  cdr >> ros_message.est_angular_rate_x;

  // Member: est_angular_rate_y
  cdr >> ros_message.est_angular_rate_y;

  // Member: est_angular_rate_z
  cdr >> ros_message.est_angular_rate_z;

  // Member: est_wgs84_local_grav_magnitude
  cdr >> ros_message.est_wgs84_local_grav_magnitude;

  // Member: est_filter_state
  cdr >> ros_message.est_filter_state;

  // Member: est_filter_dynamics_mode
  cdr >> ros_message.est_filter_dynamics_mode;

  // Member: est_filter_status_flags
  cdr >> ros_message.est_filter_status_flags;

  // Member: est_filter_gps_time_tow
  cdr >> ros_message.est_filter_gps_time_tow;

  // Member: est_filter_gps_time_week_num
  cdr >> ros_message.est_filter_gps_time_week_num;

  // Member: est_attitude_uncert_quaternion
  {
    cdr >> ros_message.est_attitude_uncert_quaternion;
  }

  // Member: est_gravity_vector_x
  cdr >> ros_message.est_gravity_vector_x;

  // Member: est_gravity_vector_y
  cdr >> ros_message.est_gravity_vector_y;

  // Member: est_gravity_vector_z
  cdr >> ros_message.est_gravity_vector_z;

  // Member: est_heading
  cdr >> ros_message.est_heading;

  // Member: est_heading_uncert
  cdr >> ros_message.est_heading_uncert;

  // Member: est_heading_source
  cdr >> ros_message.est_heading_source;

  // Member: est_magnetic_model_sln_north
  cdr >> ros_message.est_magnetic_model_sln_north;

  // Member: est_magnetic_model_sln_east
  cdr >> ros_message.est_magnetic_model_sln_east;

  // Member: est_magnetic_model_sln_down
  cdr >> ros_message.est_magnetic_model_sln_down;

  // Member: est_magnetic_model_sln_inclination
  cdr >> ros_message.est_magnetic_model_sln_inclination;

  // Member: est_magnetic_model_sln_declination
  cdr >> ros_message.est_magnetic_model_sln_declination;

  // Member: est_gyro_scale_factor_x
  cdr >> ros_message.est_gyro_scale_factor_x;

  // Member: est_gyro_scale_factor_y
  cdr >> ros_message.est_gyro_scale_factor_y;

  // Member: est_gyro_scale_factor_z
  cdr >> ros_message.est_gyro_scale_factor_z;

  // Member: est_accel_scale_factor_x
  cdr >> ros_message.est_accel_scale_factor_x;

  // Member: est_accel_scale_factor_y
  cdr >> ros_message.est_accel_scale_factor_y;

  // Member: est_accel_scale_factor_z
  cdr >> ros_message.est_accel_scale_factor_z;

  // Member: est_gyro_scale_factor_x_uncert
  cdr >> ros_message.est_gyro_scale_factor_x_uncert;

  // Member: est_gyro_scale_factor_y_uncert
  cdr >> ros_message.est_gyro_scale_factor_y_uncert;

  // Member: est_gyro_scale_factor_z_uncert
  cdr >> ros_message.est_gyro_scale_factor_z_uncert;

  // Member: est_accel_scale_factor_x_uncert
  cdr >> ros_message.est_accel_scale_factor_x_uncert;

  // Member: est_accel_scale_factor_y_uncert
  cdr >> ros_message.est_accel_scale_factor_y_uncert;

  // Member: est_accel_scale_factor_z_uncert
  cdr >> ros_message.est_accel_scale_factor_z_uncert;

  // Member: est_compensated_accel_x
  cdr >> ros_message.est_compensated_accel_x;

  // Member: est_compensated_accel_y
  cdr >> ros_message.est_compensated_accel_y;

  // Member: est_compensated_accel_z
  cdr >> ros_message.est_compensated_accel_z;

  // Member: est_std_atm_model_geometric_alt
  cdr >> ros_message.est_std_atm_model_geometric_alt;

  // Member: est_std_atm_model_geopotential_alt
  cdr >> ros_message.est_std_atm_model_geopotential_alt;

  // Member: est_std_atm_model_temperature
  cdr >> ros_message.est_std_atm_model_temperature;

  // Member: est_std_atm_model_pressure
  cdr >> ros_message.est_std_atm_model_pressure;

  // Member: est_std_atm_model_density
  cdr >> ros_message.est_std_atm_model_density;

  // Member: est_pressure_alt
  cdr >> ros_message.est_pressure_alt;

  // Member: est_mag_auto_hard_iron_offset_x
  cdr >> ros_message.est_mag_auto_hard_iron_offset_x;

  // Member: est_mag_auto_hard_iron_offset_y
  cdr >> ros_message.est_mag_auto_hard_iron_offset_y;

  // Member: est_mag_auto_hard_iron_offset_z
  cdr >> ros_message.est_mag_auto_hard_iron_offset_z;

  // Member: est_mag_auto_soft_iron_matrix
  {
    cdr >> ros_message.est_mag_auto_soft_iron_matrix;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wamv_interfaces
get_serialized_size(
  const wamv_interfaces::msg::MicrostrainEst & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_latitude
  {
    size_t item_size = sizeof(ros_message.est_latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_longitude
  {
    size_t item_size = sizeof(ros_message.est_longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_height_above_ellipsoid
  {
    size_t item_size = sizeof(ros_message.est_height_above_ellipsoid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_north_velocity
  {
    size_t item_size = sizeof(ros_message.est_north_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_east_velocity
  {
    size_t item_size = sizeof(ros_message.est_east_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_down_velocity
  {
    size_t item_size = sizeof(ros_message.est_down_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_orient_quaternion
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.est_orient_quaternion[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_orient_matrix
  {
    size_t array_size = 9;
    size_t item_size = sizeof(ros_message.est_orient_matrix[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_roll
  {
    size_t item_size = sizeof(ros_message.est_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_pitch
  {
    size_t item_size = sizeof(ros_message.est_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_yaw
  {
    size_t item_size = sizeof(ros_message.est_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_gyro_bias_x
  {
    size_t item_size = sizeof(ros_message.est_gyro_bias_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_gyro_bias_y
  {
    size_t item_size = sizeof(ros_message.est_gyro_bias_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_gyro_bias_z
  {
    size_t item_size = sizeof(ros_message.est_gyro_bias_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_accel_bias_x
  {
    size_t item_size = sizeof(ros_message.est_accel_bias_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_accel_bias_y
  {
    size_t item_size = sizeof(ros_message.est_accel_bias_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_accel_bias_z
  {
    size_t item_size = sizeof(ros_message.est_accel_bias_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_north_position_uncert
  {
    size_t item_size = sizeof(ros_message.est_north_position_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_east_position_uncert
  {
    size_t item_size = sizeof(ros_message.est_east_position_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_down_position_uncert
  {
    size_t item_size = sizeof(ros_message.est_down_position_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_north_velocity_uncert
  {
    size_t item_size = sizeof(ros_message.est_north_velocity_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_east_velocity_uncert
  {
    size_t item_size = sizeof(ros_message.est_east_velocity_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_down_velocity_uncert
  {
    size_t item_size = sizeof(ros_message.est_down_velocity_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_roll_uncert
  {
    size_t item_size = sizeof(ros_message.est_roll_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_pitch_uncert
  {
    size_t item_size = sizeof(ros_message.est_pitch_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_yaw_uncert
  {
    size_t item_size = sizeof(ros_message.est_yaw_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_gyro_bias_x_uncert
  {
    size_t item_size = sizeof(ros_message.est_gyro_bias_x_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_gyro_bias_y_uncert
  {
    size_t item_size = sizeof(ros_message.est_gyro_bias_y_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_gyro_bias_z_uncert
  {
    size_t item_size = sizeof(ros_message.est_gyro_bias_z_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_accel_bias_x_uncert
  {
    size_t item_size = sizeof(ros_message.est_accel_bias_x_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_accel_bias_y_uncert
  {
    size_t item_size = sizeof(ros_message.est_accel_bias_y_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_accel_bias_z_uncert
  {
    size_t item_size = sizeof(ros_message.est_accel_bias_z_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_linear_accel_x
  {
    size_t item_size = sizeof(ros_message.est_linear_accel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_linear_accel_y
  {
    size_t item_size = sizeof(ros_message.est_linear_accel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_linear_accel_z
  {
    size_t item_size = sizeof(ros_message.est_linear_accel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_angular_rate_x
  {
    size_t item_size = sizeof(ros_message.est_angular_rate_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_angular_rate_y
  {
    size_t item_size = sizeof(ros_message.est_angular_rate_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_angular_rate_z
  {
    size_t item_size = sizeof(ros_message.est_angular_rate_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_wgs84_local_grav_magnitude
  {
    size_t item_size = sizeof(ros_message.est_wgs84_local_grav_magnitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_filter_state
  {
    size_t item_size = sizeof(ros_message.est_filter_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_filter_dynamics_mode
  {
    size_t item_size = sizeof(ros_message.est_filter_dynamics_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_filter_status_flags
  {
    size_t item_size = sizeof(ros_message.est_filter_status_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_filter_gps_time_tow
  {
    size_t item_size = sizeof(ros_message.est_filter_gps_time_tow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_filter_gps_time_week_num
  {
    size_t item_size = sizeof(ros_message.est_filter_gps_time_week_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_attitude_uncert_quaternion
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.est_attitude_uncert_quaternion[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_gravity_vector_x
  {
    size_t item_size = sizeof(ros_message.est_gravity_vector_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_gravity_vector_y
  {
    size_t item_size = sizeof(ros_message.est_gravity_vector_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_gravity_vector_z
  {
    size_t item_size = sizeof(ros_message.est_gravity_vector_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_heading
  {
    size_t item_size = sizeof(ros_message.est_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_heading_uncert
  {
    size_t item_size = sizeof(ros_message.est_heading_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_heading_source
  {
    size_t item_size = sizeof(ros_message.est_heading_source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_magnetic_model_sln_north
  {
    size_t item_size = sizeof(ros_message.est_magnetic_model_sln_north);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_magnetic_model_sln_east
  {
    size_t item_size = sizeof(ros_message.est_magnetic_model_sln_east);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_magnetic_model_sln_down
  {
    size_t item_size = sizeof(ros_message.est_magnetic_model_sln_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_magnetic_model_sln_inclination
  {
    size_t item_size = sizeof(ros_message.est_magnetic_model_sln_inclination);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_magnetic_model_sln_declination
  {
    size_t item_size = sizeof(ros_message.est_magnetic_model_sln_declination);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_gyro_scale_factor_x
  {
    size_t item_size = sizeof(ros_message.est_gyro_scale_factor_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_gyro_scale_factor_y
  {
    size_t item_size = sizeof(ros_message.est_gyro_scale_factor_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_gyro_scale_factor_z
  {
    size_t item_size = sizeof(ros_message.est_gyro_scale_factor_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_accel_scale_factor_x
  {
    size_t item_size = sizeof(ros_message.est_accel_scale_factor_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_accel_scale_factor_y
  {
    size_t item_size = sizeof(ros_message.est_accel_scale_factor_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_accel_scale_factor_z
  {
    size_t item_size = sizeof(ros_message.est_accel_scale_factor_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_gyro_scale_factor_x_uncert
  {
    size_t item_size = sizeof(ros_message.est_gyro_scale_factor_x_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_gyro_scale_factor_y_uncert
  {
    size_t item_size = sizeof(ros_message.est_gyro_scale_factor_y_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_gyro_scale_factor_z_uncert
  {
    size_t item_size = sizeof(ros_message.est_gyro_scale_factor_z_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_accel_scale_factor_x_uncert
  {
    size_t item_size = sizeof(ros_message.est_accel_scale_factor_x_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_accel_scale_factor_y_uncert
  {
    size_t item_size = sizeof(ros_message.est_accel_scale_factor_y_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_accel_scale_factor_z_uncert
  {
    size_t item_size = sizeof(ros_message.est_accel_scale_factor_z_uncert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_compensated_accel_x
  {
    size_t item_size = sizeof(ros_message.est_compensated_accel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_compensated_accel_y
  {
    size_t item_size = sizeof(ros_message.est_compensated_accel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_compensated_accel_z
  {
    size_t item_size = sizeof(ros_message.est_compensated_accel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_std_atm_model_geometric_alt
  {
    size_t item_size = sizeof(ros_message.est_std_atm_model_geometric_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_std_atm_model_geopotential_alt
  {
    size_t item_size = sizeof(ros_message.est_std_atm_model_geopotential_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_std_atm_model_temperature
  {
    size_t item_size = sizeof(ros_message.est_std_atm_model_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_std_atm_model_pressure
  {
    size_t item_size = sizeof(ros_message.est_std_atm_model_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_std_atm_model_density
  {
    size_t item_size = sizeof(ros_message.est_std_atm_model_density);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_pressure_alt
  {
    size_t item_size = sizeof(ros_message.est_pressure_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_mag_auto_hard_iron_offset_x
  {
    size_t item_size = sizeof(ros_message.est_mag_auto_hard_iron_offset_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_mag_auto_hard_iron_offset_y
  {
    size_t item_size = sizeof(ros_message.est_mag_auto_hard_iron_offset_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_mag_auto_hard_iron_offset_z
  {
    size_t item_size = sizeof(ros_message.est_mag_auto_hard_iron_offset_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: est_mag_auto_soft_iron_matrix
  {
    size_t array_size = 9;
    size_t item_size = sizeof(ros_message.est_mag_auto_soft_iron_matrix[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wamv_interfaces
max_serialized_size_MicrostrainEst(
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


  // Member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: est_latitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: est_longitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: est_height_above_ellipsoid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: est_north_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_east_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_down_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_orient_quaternion
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_orient_matrix
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_gyro_bias_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_gyro_bias_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_gyro_bias_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_accel_bias_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_accel_bias_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_accel_bias_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_north_position_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_east_position_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_down_position_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_north_velocity_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_east_velocity_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_down_velocity_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_roll_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_pitch_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_yaw_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_gyro_bias_x_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_gyro_bias_y_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_gyro_bias_z_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_accel_bias_x_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_accel_bias_y_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_accel_bias_z_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_linear_accel_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_linear_accel_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_linear_accel_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_angular_rate_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_angular_rate_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_angular_rate_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_wgs84_local_grav_magnitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_filter_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_filter_dynamics_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_filter_status_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_filter_gps_time_tow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: est_filter_gps_time_week_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_attitude_uncert_quaternion
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_gravity_vector_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_gravity_vector_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_gravity_vector_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_heading_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_heading_source
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_magnetic_model_sln_north
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_magnetic_model_sln_east
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_magnetic_model_sln_down
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_magnetic_model_sln_inclination
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_magnetic_model_sln_declination
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_gyro_scale_factor_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_gyro_scale_factor_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_gyro_scale_factor_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_accel_scale_factor_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_accel_scale_factor_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_accel_scale_factor_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_gyro_scale_factor_x_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_gyro_scale_factor_y_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_gyro_scale_factor_z_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_accel_scale_factor_x_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_accel_scale_factor_y_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_accel_scale_factor_z_uncert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_compensated_accel_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_compensated_accel_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_compensated_accel_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_std_atm_model_geometric_alt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_std_atm_model_geopotential_alt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_std_atm_model_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_std_atm_model_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_std_atm_model_density
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_pressure_alt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_mag_auto_hard_iron_offset_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_mag_auto_hard_iron_offset_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_mag_auto_hard_iron_offset_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: est_mag_auto_soft_iron_matrix
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
    using DataType = wamv_interfaces::msg::MicrostrainEst;
    is_plain =
      (
      offsetof(DataType, est_mag_auto_soft_iron_matrix) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MicrostrainEst__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const wamv_interfaces::msg::MicrostrainEst *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MicrostrainEst__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<wamv_interfaces::msg::MicrostrainEst *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MicrostrainEst__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const wamv_interfaces::msg::MicrostrainEst *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MicrostrainEst__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MicrostrainEst(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MicrostrainEst__callbacks = {
  "wamv_interfaces::msg",
  "MicrostrainEst",
  _MicrostrainEst__cdr_serialize,
  _MicrostrainEst__cdr_deserialize,
  _MicrostrainEst__get_serialized_size,
  _MicrostrainEst__max_serialized_size
};

static rosidl_message_type_support_t _MicrostrainEst__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MicrostrainEst__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace wamv_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_wamv_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<wamv_interfaces::msg::MicrostrainEst>()
{
  return &wamv_interfaces::msg::typesupport_fastrtps_cpp::_MicrostrainEst__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wamv_interfaces, msg, MicrostrainEst)() {
  return &wamv_interfaces::msg::typesupport_fastrtps_cpp::_MicrostrainEst__handle;
}

#ifdef __cplusplus
}
#endif
