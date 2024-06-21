// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wamv_interfaces:msg/MicrostrainEst.idl
// generated code does not contain a copyright notice
#include "wamv_interfaces/msg/detail/microstrain_est__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wamv_interfaces__msg__MicrostrainEst__init(wamv_interfaces__msg__MicrostrainEst * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // est_latitude
  // est_longitude
  // est_height_above_ellipsoid
  // est_north_velocity
  // est_east_velocity
  // est_down_velocity
  // est_orient_quaternion
  // est_orient_matrix
  // est_roll
  // est_pitch
  // est_yaw
  // est_gyro_bias_x
  // est_gyro_bias_y
  // est_gyro_bias_z
  // est_accel_bias_x
  // est_accel_bias_y
  // est_accel_bias_z
  // est_north_position_uncert
  // est_east_position_uncert
  // est_down_position_uncert
  // est_north_velocity_uncert
  // est_east_velocity_uncert
  // est_down_velocity_uncert
  // est_roll_uncert
  // est_pitch_uncert
  // est_yaw_uncert
  // est_gyro_bias_x_uncert
  // est_gyro_bias_y_uncert
  // est_gyro_bias_z_uncert
  // est_accel_bias_x_uncert
  // est_accel_bias_y_uncert
  // est_accel_bias_z_uncert
  // est_linear_accel_x
  // est_linear_accel_y
  // est_linear_accel_z
  // est_angular_rate_x
  // est_angular_rate_y
  // est_angular_rate_z
  // est_wgs84_local_grav_magnitude
  // est_filter_state
  // est_filter_dynamics_mode
  // est_filter_status_flags
  // est_filter_gps_time_tow
  // est_filter_gps_time_week_num
  // est_attitude_uncert_quaternion
  // est_gravity_vector_x
  // est_gravity_vector_y
  // est_gravity_vector_z
  // est_heading
  // est_heading_uncert
  // est_heading_source
  // est_magnetic_model_sln_north
  // est_magnetic_model_sln_east
  // est_magnetic_model_sln_down
  // est_magnetic_model_sln_inclination
  // est_magnetic_model_sln_declination
  // est_gyro_scale_factor_x
  // est_gyro_scale_factor_y
  // est_gyro_scale_factor_z
  // est_accel_scale_factor_x
  // est_accel_scale_factor_y
  // est_accel_scale_factor_z
  // est_gyro_scale_factor_x_uncert
  // est_gyro_scale_factor_y_uncert
  // est_gyro_scale_factor_z_uncert
  // est_accel_scale_factor_x_uncert
  // est_accel_scale_factor_y_uncert
  // est_accel_scale_factor_z_uncert
  // est_compensated_accel_x
  // est_compensated_accel_y
  // est_compensated_accel_z
  // est_std_atm_model_geometric_alt
  // est_std_atm_model_geopotential_alt
  // est_std_atm_model_temperature
  // est_std_atm_model_pressure
  // est_std_atm_model_density
  // est_pressure_alt
  // est_mag_auto_hard_iron_offset_x
  // est_mag_auto_hard_iron_offset_y
  // est_mag_auto_hard_iron_offset_z
  // est_mag_auto_soft_iron_matrix
  return true;
}

void
wamv_interfaces__msg__MicrostrainEst__fini(wamv_interfaces__msg__MicrostrainEst * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // est_latitude
  // est_longitude
  // est_height_above_ellipsoid
  // est_north_velocity
  // est_east_velocity
  // est_down_velocity
  // est_orient_quaternion
  // est_orient_matrix
  // est_roll
  // est_pitch
  // est_yaw
  // est_gyro_bias_x
  // est_gyro_bias_y
  // est_gyro_bias_z
  // est_accel_bias_x
  // est_accel_bias_y
  // est_accel_bias_z
  // est_north_position_uncert
  // est_east_position_uncert
  // est_down_position_uncert
  // est_north_velocity_uncert
  // est_east_velocity_uncert
  // est_down_velocity_uncert
  // est_roll_uncert
  // est_pitch_uncert
  // est_yaw_uncert
  // est_gyro_bias_x_uncert
  // est_gyro_bias_y_uncert
  // est_gyro_bias_z_uncert
  // est_accel_bias_x_uncert
  // est_accel_bias_y_uncert
  // est_accel_bias_z_uncert
  // est_linear_accel_x
  // est_linear_accel_y
  // est_linear_accel_z
  // est_angular_rate_x
  // est_angular_rate_y
  // est_angular_rate_z
  // est_wgs84_local_grav_magnitude
  // est_filter_state
  // est_filter_dynamics_mode
  // est_filter_status_flags
  // est_filter_gps_time_tow
  // est_filter_gps_time_week_num
  // est_attitude_uncert_quaternion
  // est_gravity_vector_x
  // est_gravity_vector_y
  // est_gravity_vector_z
  // est_heading
  // est_heading_uncert
  // est_heading_source
  // est_magnetic_model_sln_north
  // est_magnetic_model_sln_east
  // est_magnetic_model_sln_down
  // est_magnetic_model_sln_inclination
  // est_magnetic_model_sln_declination
  // est_gyro_scale_factor_x
  // est_gyro_scale_factor_y
  // est_gyro_scale_factor_z
  // est_accel_scale_factor_x
  // est_accel_scale_factor_y
  // est_accel_scale_factor_z
  // est_gyro_scale_factor_x_uncert
  // est_gyro_scale_factor_y_uncert
  // est_gyro_scale_factor_z_uncert
  // est_accel_scale_factor_x_uncert
  // est_accel_scale_factor_y_uncert
  // est_accel_scale_factor_z_uncert
  // est_compensated_accel_x
  // est_compensated_accel_y
  // est_compensated_accel_z
  // est_std_atm_model_geometric_alt
  // est_std_atm_model_geopotential_alt
  // est_std_atm_model_temperature
  // est_std_atm_model_pressure
  // est_std_atm_model_density
  // est_pressure_alt
  // est_mag_auto_hard_iron_offset_x
  // est_mag_auto_hard_iron_offset_y
  // est_mag_auto_hard_iron_offset_z
  // est_mag_auto_soft_iron_matrix
}

bool
wamv_interfaces__msg__MicrostrainEst__are_equal(const wamv_interfaces__msg__MicrostrainEst * lhs, const wamv_interfaces__msg__MicrostrainEst * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // est_latitude
  if (lhs->est_latitude != rhs->est_latitude) {
    return false;
  }
  // est_longitude
  if (lhs->est_longitude != rhs->est_longitude) {
    return false;
  }
  // est_height_above_ellipsoid
  if (lhs->est_height_above_ellipsoid != rhs->est_height_above_ellipsoid) {
    return false;
  }
  // est_north_velocity
  if (lhs->est_north_velocity != rhs->est_north_velocity) {
    return false;
  }
  // est_east_velocity
  if (lhs->est_east_velocity != rhs->est_east_velocity) {
    return false;
  }
  // est_down_velocity
  if (lhs->est_down_velocity != rhs->est_down_velocity) {
    return false;
  }
  // est_orient_quaternion
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->est_orient_quaternion[i] != rhs->est_orient_quaternion[i]) {
      return false;
    }
  }
  // est_orient_matrix
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->est_orient_matrix[i] != rhs->est_orient_matrix[i]) {
      return false;
    }
  }
  // est_roll
  if (lhs->est_roll != rhs->est_roll) {
    return false;
  }
  // est_pitch
  if (lhs->est_pitch != rhs->est_pitch) {
    return false;
  }
  // est_yaw
  if (lhs->est_yaw != rhs->est_yaw) {
    return false;
  }
  // est_gyro_bias_x
  if (lhs->est_gyro_bias_x != rhs->est_gyro_bias_x) {
    return false;
  }
  // est_gyro_bias_y
  if (lhs->est_gyro_bias_y != rhs->est_gyro_bias_y) {
    return false;
  }
  // est_gyro_bias_z
  if (lhs->est_gyro_bias_z != rhs->est_gyro_bias_z) {
    return false;
  }
  // est_accel_bias_x
  if (lhs->est_accel_bias_x != rhs->est_accel_bias_x) {
    return false;
  }
  // est_accel_bias_y
  if (lhs->est_accel_bias_y != rhs->est_accel_bias_y) {
    return false;
  }
  // est_accel_bias_z
  if (lhs->est_accel_bias_z != rhs->est_accel_bias_z) {
    return false;
  }
  // est_north_position_uncert
  if (lhs->est_north_position_uncert != rhs->est_north_position_uncert) {
    return false;
  }
  // est_east_position_uncert
  if (lhs->est_east_position_uncert != rhs->est_east_position_uncert) {
    return false;
  }
  // est_down_position_uncert
  if (lhs->est_down_position_uncert != rhs->est_down_position_uncert) {
    return false;
  }
  // est_north_velocity_uncert
  if (lhs->est_north_velocity_uncert != rhs->est_north_velocity_uncert) {
    return false;
  }
  // est_east_velocity_uncert
  if (lhs->est_east_velocity_uncert != rhs->est_east_velocity_uncert) {
    return false;
  }
  // est_down_velocity_uncert
  if (lhs->est_down_velocity_uncert != rhs->est_down_velocity_uncert) {
    return false;
  }
  // est_roll_uncert
  if (lhs->est_roll_uncert != rhs->est_roll_uncert) {
    return false;
  }
  // est_pitch_uncert
  if (lhs->est_pitch_uncert != rhs->est_pitch_uncert) {
    return false;
  }
  // est_yaw_uncert
  if (lhs->est_yaw_uncert != rhs->est_yaw_uncert) {
    return false;
  }
  // est_gyro_bias_x_uncert
  if (lhs->est_gyro_bias_x_uncert != rhs->est_gyro_bias_x_uncert) {
    return false;
  }
  // est_gyro_bias_y_uncert
  if (lhs->est_gyro_bias_y_uncert != rhs->est_gyro_bias_y_uncert) {
    return false;
  }
  // est_gyro_bias_z_uncert
  if (lhs->est_gyro_bias_z_uncert != rhs->est_gyro_bias_z_uncert) {
    return false;
  }
  // est_accel_bias_x_uncert
  if (lhs->est_accel_bias_x_uncert != rhs->est_accel_bias_x_uncert) {
    return false;
  }
  // est_accel_bias_y_uncert
  if (lhs->est_accel_bias_y_uncert != rhs->est_accel_bias_y_uncert) {
    return false;
  }
  // est_accel_bias_z_uncert
  if (lhs->est_accel_bias_z_uncert != rhs->est_accel_bias_z_uncert) {
    return false;
  }
  // est_linear_accel_x
  if (lhs->est_linear_accel_x != rhs->est_linear_accel_x) {
    return false;
  }
  // est_linear_accel_y
  if (lhs->est_linear_accel_y != rhs->est_linear_accel_y) {
    return false;
  }
  // est_linear_accel_z
  if (lhs->est_linear_accel_z != rhs->est_linear_accel_z) {
    return false;
  }
  // est_angular_rate_x
  if (lhs->est_angular_rate_x != rhs->est_angular_rate_x) {
    return false;
  }
  // est_angular_rate_y
  if (lhs->est_angular_rate_y != rhs->est_angular_rate_y) {
    return false;
  }
  // est_angular_rate_z
  if (lhs->est_angular_rate_z != rhs->est_angular_rate_z) {
    return false;
  }
  // est_wgs84_local_grav_magnitude
  if (lhs->est_wgs84_local_grav_magnitude != rhs->est_wgs84_local_grav_magnitude) {
    return false;
  }
  // est_filter_state
  if (lhs->est_filter_state != rhs->est_filter_state) {
    return false;
  }
  // est_filter_dynamics_mode
  if (lhs->est_filter_dynamics_mode != rhs->est_filter_dynamics_mode) {
    return false;
  }
  // est_filter_status_flags
  if (lhs->est_filter_status_flags != rhs->est_filter_status_flags) {
    return false;
  }
  // est_filter_gps_time_tow
  if (lhs->est_filter_gps_time_tow != rhs->est_filter_gps_time_tow) {
    return false;
  }
  // est_filter_gps_time_week_num
  if (lhs->est_filter_gps_time_week_num != rhs->est_filter_gps_time_week_num) {
    return false;
  }
  // est_attitude_uncert_quaternion
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->est_attitude_uncert_quaternion[i] != rhs->est_attitude_uncert_quaternion[i]) {
      return false;
    }
  }
  // est_gravity_vector_x
  if (lhs->est_gravity_vector_x != rhs->est_gravity_vector_x) {
    return false;
  }
  // est_gravity_vector_y
  if (lhs->est_gravity_vector_y != rhs->est_gravity_vector_y) {
    return false;
  }
  // est_gravity_vector_z
  if (lhs->est_gravity_vector_z != rhs->est_gravity_vector_z) {
    return false;
  }
  // est_heading
  if (lhs->est_heading != rhs->est_heading) {
    return false;
  }
  // est_heading_uncert
  if (lhs->est_heading_uncert != rhs->est_heading_uncert) {
    return false;
  }
  // est_heading_source
  if (lhs->est_heading_source != rhs->est_heading_source) {
    return false;
  }
  // est_magnetic_model_sln_north
  if (lhs->est_magnetic_model_sln_north != rhs->est_magnetic_model_sln_north) {
    return false;
  }
  // est_magnetic_model_sln_east
  if (lhs->est_magnetic_model_sln_east != rhs->est_magnetic_model_sln_east) {
    return false;
  }
  // est_magnetic_model_sln_down
  if (lhs->est_magnetic_model_sln_down != rhs->est_magnetic_model_sln_down) {
    return false;
  }
  // est_magnetic_model_sln_inclination
  if (lhs->est_magnetic_model_sln_inclination != rhs->est_magnetic_model_sln_inclination) {
    return false;
  }
  // est_magnetic_model_sln_declination
  if (lhs->est_magnetic_model_sln_declination != rhs->est_magnetic_model_sln_declination) {
    return false;
  }
  // est_gyro_scale_factor_x
  if (lhs->est_gyro_scale_factor_x != rhs->est_gyro_scale_factor_x) {
    return false;
  }
  // est_gyro_scale_factor_y
  if (lhs->est_gyro_scale_factor_y != rhs->est_gyro_scale_factor_y) {
    return false;
  }
  // est_gyro_scale_factor_z
  if (lhs->est_gyro_scale_factor_z != rhs->est_gyro_scale_factor_z) {
    return false;
  }
  // est_accel_scale_factor_x
  if (lhs->est_accel_scale_factor_x != rhs->est_accel_scale_factor_x) {
    return false;
  }
  // est_accel_scale_factor_y
  if (lhs->est_accel_scale_factor_y != rhs->est_accel_scale_factor_y) {
    return false;
  }
  // est_accel_scale_factor_z
  if (lhs->est_accel_scale_factor_z != rhs->est_accel_scale_factor_z) {
    return false;
  }
  // est_gyro_scale_factor_x_uncert
  if (lhs->est_gyro_scale_factor_x_uncert != rhs->est_gyro_scale_factor_x_uncert) {
    return false;
  }
  // est_gyro_scale_factor_y_uncert
  if (lhs->est_gyro_scale_factor_y_uncert != rhs->est_gyro_scale_factor_y_uncert) {
    return false;
  }
  // est_gyro_scale_factor_z_uncert
  if (lhs->est_gyro_scale_factor_z_uncert != rhs->est_gyro_scale_factor_z_uncert) {
    return false;
  }
  // est_accel_scale_factor_x_uncert
  if (lhs->est_accel_scale_factor_x_uncert != rhs->est_accel_scale_factor_x_uncert) {
    return false;
  }
  // est_accel_scale_factor_y_uncert
  if (lhs->est_accel_scale_factor_y_uncert != rhs->est_accel_scale_factor_y_uncert) {
    return false;
  }
  // est_accel_scale_factor_z_uncert
  if (lhs->est_accel_scale_factor_z_uncert != rhs->est_accel_scale_factor_z_uncert) {
    return false;
  }
  // est_compensated_accel_x
  if (lhs->est_compensated_accel_x != rhs->est_compensated_accel_x) {
    return false;
  }
  // est_compensated_accel_y
  if (lhs->est_compensated_accel_y != rhs->est_compensated_accel_y) {
    return false;
  }
  // est_compensated_accel_z
  if (lhs->est_compensated_accel_z != rhs->est_compensated_accel_z) {
    return false;
  }
  // est_std_atm_model_geometric_alt
  if (lhs->est_std_atm_model_geometric_alt != rhs->est_std_atm_model_geometric_alt) {
    return false;
  }
  // est_std_atm_model_geopotential_alt
  if (lhs->est_std_atm_model_geopotential_alt != rhs->est_std_atm_model_geopotential_alt) {
    return false;
  }
  // est_std_atm_model_temperature
  if (lhs->est_std_atm_model_temperature != rhs->est_std_atm_model_temperature) {
    return false;
  }
  // est_std_atm_model_pressure
  if (lhs->est_std_atm_model_pressure != rhs->est_std_atm_model_pressure) {
    return false;
  }
  // est_std_atm_model_density
  if (lhs->est_std_atm_model_density != rhs->est_std_atm_model_density) {
    return false;
  }
  // est_pressure_alt
  if (lhs->est_pressure_alt != rhs->est_pressure_alt) {
    return false;
  }
  // est_mag_auto_hard_iron_offset_x
  if (lhs->est_mag_auto_hard_iron_offset_x != rhs->est_mag_auto_hard_iron_offset_x) {
    return false;
  }
  // est_mag_auto_hard_iron_offset_y
  if (lhs->est_mag_auto_hard_iron_offset_y != rhs->est_mag_auto_hard_iron_offset_y) {
    return false;
  }
  // est_mag_auto_hard_iron_offset_z
  if (lhs->est_mag_auto_hard_iron_offset_z != rhs->est_mag_auto_hard_iron_offset_z) {
    return false;
  }
  // est_mag_auto_soft_iron_matrix
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->est_mag_auto_soft_iron_matrix[i] != rhs->est_mag_auto_soft_iron_matrix[i]) {
      return false;
    }
  }
  return true;
}

bool
wamv_interfaces__msg__MicrostrainEst__copy(
  const wamv_interfaces__msg__MicrostrainEst * input,
  wamv_interfaces__msg__MicrostrainEst * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // est_latitude
  output->est_latitude = input->est_latitude;
  // est_longitude
  output->est_longitude = input->est_longitude;
  // est_height_above_ellipsoid
  output->est_height_above_ellipsoid = input->est_height_above_ellipsoid;
  // est_north_velocity
  output->est_north_velocity = input->est_north_velocity;
  // est_east_velocity
  output->est_east_velocity = input->est_east_velocity;
  // est_down_velocity
  output->est_down_velocity = input->est_down_velocity;
  // est_orient_quaternion
  for (size_t i = 0; i < 3; ++i) {
    output->est_orient_quaternion[i] = input->est_orient_quaternion[i];
  }
  // est_orient_matrix
  for (size_t i = 0; i < 9; ++i) {
    output->est_orient_matrix[i] = input->est_orient_matrix[i];
  }
  // est_roll
  output->est_roll = input->est_roll;
  // est_pitch
  output->est_pitch = input->est_pitch;
  // est_yaw
  output->est_yaw = input->est_yaw;
  // est_gyro_bias_x
  output->est_gyro_bias_x = input->est_gyro_bias_x;
  // est_gyro_bias_y
  output->est_gyro_bias_y = input->est_gyro_bias_y;
  // est_gyro_bias_z
  output->est_gyro_bias_z = input->est_gyro_bias_z;
  // est_accel_bias_x
  output->est_accel_bias_x = input->est_accel_bias_x;
  // est_accel_bias_y
  output->est_accel_bias_y = input->est_accel_bias_y;
  // est_accel_bias_z
  output->est_accel_bias_z = input->est_accel_bias_z;
  // est_north_position_uncert
  output->est_north_position_uncert = input->est_north_position_uncert;
  // est_east_position_uncert
  output->est_east_position_uncert = input->est_east_position_uncert;
  // est_down_position_uncert
  output->est_down_position_uncert = input->est_down_position_uncert;
  // est_north_velocity_uncert
  output->est_north_velocity_uncert = input->est_north_velocity_uncert;
  // est_east_velocity_uncert
  output->est_east_velocity_uncert = input->est_east_velocity_uncert;
  // est_down_velocity_uncert
  output->est_down_velocity_uncert = input->est_down_velocity_uncert;
  // est_roll_uncert
  output->est_roll_uncert = input->est_roll_uncert;
  // est_pitch_uncert
  output->est_pitch_uncert = input->est_pitch_uncert;
  // est_yaw_uncert
  output->est_yaw_uncert = input->est_yaw_uncert;
  // est_gyro_bias_x_uncert
  output->est_gyro_bias_x_uncert = input->est_gyro_bias_x_uncert;
  // est_gyro_bias_y_uncert
  output->est_gyro_bias_y_uncert = input->est_gyro_bias_y_uncert;
  // est_gyro_bias_z_uncert
  output->est_gyro_bias_z_uncert = input->est_gyro_bias_z_uncert;
  // est_accel_bias_x_uncert
  output->est_accel_bias_x_uncert = input->est_accel_bias_x_uncert;
  // est_accel_bias_y_uncert
  output->est_accel_bias_y_uncert = input->est_accel_bias_y_uncert;
  // est_accel_bias_z_uncert
  output->est_accel_bias_z_uncert = input->est_accel_bias_z_uncert;
  // est_linear_accel_x
  output->est_linear_accel_x = input->est_linear_accel_x;
  // est_linear_accel_y
  output->est_linear_accel_y = input->est_linear_accel_y;
  // est_linear_accel_z
  output->est_linear_accel_z = input->est_linear_accel_z;
  // est_angular_rate_x
  output->est_angular_rate_x = input->est_angular_rate_x;
  // est_angular_rate_y
  output->est_angular_rate_y = input->est_angular_rate_y;
  // est_angular_rate_z
  output->est_angular_rate_z = input->est_angular_rate_z;
  // est_wgs84_local_grav_magnitude
  output->est_wgs84_local_grav_magnitude = input->est_wgs84_local_grav_magnitude;
  // est_filter_state
  output->est_filter_state = input->est_filter_state;
  // est_filter_dynamics_mode
  output->est_filter_dynamics_mode = input->est_filter_dynamics_mode;
  // est_filter_status_flags
  output->est_filter_status_flags = input->est_filter_status_flags;
  // est_filter_gps_time_tow
  output->est_filter_gps_time_tow = input->est_filter_gps_time_tow;
  // est_filter_gps_time_week_num
  output->est_filter_gps_time_week_num = input->est_filter_gps_time_week_num;
  // est_attitude_uncert_quaternion
  for (size_t i = 0; i < 3; ++i) {
    output->est_attitude_uncert_quaternion[i] = input->est_attitude_uncert_quaternion[i];
  }
  // est_gravity_vector_x
  output->est_gravity_vector_x = input->est_gravity_vector_x;
  // est_gravity_vector_y
  output->est_gravity_vector_y = input->est_gravity_vector_y;
  // est_gravity_vector_z
  output->est_gravity_vector_z = input->est_gravity_vector_z;
  // est_heading
  output->est_heading = input->est_heading;
  // est_heading_uncert
  output->est_heading_uncert = input->est_heading_uncert;
  // est_heading_source
  output->est_heading_source = input->est_heading_source;
  // est_magnetic_model_sln_north
  output->est_magnetic_model_sln_north = input->est_magnetic_model_sln_north;
  // est_magnetic_model_sln_east
  output->est_magnetic_model_sln_east = input->est_magnetic_model_sln_east;
  // est_magnetic_model_sln_down
  output->est_magnetic_model_sln_down = input->est_magnetic_model_sln_down;
  // est_magnetic_model_sln_inclination
  output->est_magnetic_model_sln_inclination = input->est_magnetic_model_sln_inclination;
  // est_magnetic_model_sln_declination
  output->est_magnetic_model_sln_declination = input->est_magnetic_model_sln_declination;
  // est_gyro_scale_factor_x
  output->est_gyro_scale_factor_x = input->est_gyro_scale_factor_x;
  // est_gyro_scale_factor_y
  output->est_gyro_scale_factor_y = input->est_gyro_scale_factor_y;
  // est_gyro_scale_factor_z
  output->est_gyro_scale_factor_z = input->est_gyro_scale_factor_z;
  // est_accel_scale_factor_x
  output->est_accel_scale_factor_x = input->est_accel_scale_factor_x;
  // est_accel_scale_factor_y
  output->est_accel_scale_factor_y = input->est_accel_scale_factor_y;
  // est_accel_scale_factor_z
  output->est_accel_scale_factor_z = input->est_accel_scale_factor_z;
  // est_gyro_scale_factor_x_uncert
  output->est_gyro_scale_factor_x_uncert = input->est_gyro_scale_factor_x_uncert;
  // est_gyro_scale_factor_y_uncert
  output->est_gyro_scale_factor_y_uncert = input->est_gyro_scale_factor_y_uncert;
  // est_gyro_scale_factor_z_uncert
  output->est_gyro_scale_factor_z_uncert = input->est_gyro_scale_factor_z_uncert;
  // est_accel_scale_factor_x_uncert
  output->est_accel_scale_factor_x_uncert = input->est_accel_scale_factor_x_uncert;
  // est_accel_scale_factor_y_uncert
  output->est_accel_scale_factor_y_uncert = input->est_accel_scale_factor_y_uncert;
  // est_accel_scale_factor_z_uncert
  output->est_accel_scale_factor_z_uncert = input->est_accel_scale_factor_z_uncert;
  // est_compensated_accel_x
  output->est_compensated_accel_x = input->est_compensated_accel_x;
  // est_compensated_accel_y
  output->est_compensated_accel_y = input->est_compensated_accel_y;
  // est_compensated_accel_z
  output->est_compensated_accel_z = input->est_compensated_accel_z;
  // est_std_atm_model_geometric_alt
  output->est_std_atm_model_geometric_alt = input->est_std_atm_model_geometric_alt;
  // est_std_atm_model_geopotential_alt
  output->est_std_atm_model_geopotential_alt = input->est_std_atm_model_geopotential_alt;
  // est_std_atm_model_temperature
  output->est_std_atm_model_temperature = input->est_std_atm_model_temperature;
  // est_std_atm_model_pressure
  output->est_std_atm_model_pressure = input->est_std_atm_model_pressure;
  // est_std_atm_model_density
  output->est_std_atm_model_density = input->est_std_atm_model_density;
  // est_pressure_alt
  output->est_pressure_alt = input->est_pressure_alt;
  // est_mag_auto_hard_iron_offset_x
  output->est_mag_auto_hard_iron_offset_x = input->est_mag_auto_hard_iron_offset_x;
  // est_mag_auto_hard_iron_offset_y
  output->est_mag_auto_hard_iron_offset_y = input->est_mag_auto_hard_iron_offset_y;
  // est_mag_auto_hard_iron_offset_z
  output->est_mag_auto_hard_iron_offset_z = input->est_mag_auto_hard_iron_offset_z;
  // est_mag_auto_soft_iron_matrix
  for (size_t i = 0; i < 9; ++i) {
    output->est_mag_auto_soft_iron_matrix[i] = input->est_mag_auto_soft_iron_matrix[i];
  }
  return true;
}

wamv_interfaces__msg__MicrostrainEst *
wamv_interfaces__msg__MicrostrainEst__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wamv_interfaces__msg__MicrostrainEst * msg = (wamv_interfaces__msg__MicrostrainEst *)allocator.allocate(sizeof(wamv_interfaces__msg__MicrostrainEst), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wamv_interfaces__msg__MicrostrainEst));
  bool success = wamv_interfaces__msg__MicrostrainEst__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wamv_interfaces__msg__MicrostrainEst__destroy(wamv_interfaces__msg__MicrostrainEst * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wamv_interfaces__msg__MicrostrainEst__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wamv_interfaces__msg__MicrostrainEst__Sequence__init(wamv_interfaces__msg__MicrostrainEst__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wamv_interfaces__msg__MicrostrainEst * data = NULL;

  if (size) {
    data = (wamv_interfaces__msg__MicrostrainEst *)allocator.zero_allocate(size, sizeof(wamv_interfaces__msg__MicrostrainEst), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wamv_interfaces__msg__MicrostrainEst__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wamv_interfaces__msg__MicrostrainEst__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
wamv_interfaces__msg__MicrostrainEst__Sequence__fini(wamv_interfaces__msg__MicrostrainEst__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      wamv_interfaces__msg__MicrostrainEst__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

wamv_interfaces__msg__MicrostrainEst__Sequence *
wamv_interfaces__msg__MicrostrainEst__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wamv_interfaces__msg__MicrostrainEst__Sequence * array = (wamv_interfaces__msg__MicrostrainEst__Sequence *)allocator.allocate(sizeof(wamv_interfaces__msg__MicrostrainEst__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wamv_interfaces__msg__MicrostrainEst__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wamv_interfaces__msg__MicrostrainEst__Sequence__destroy(wamv_interfaces__msg__MicrostrainEst__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wamv_interfaces__msg__MicrostrainEst__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wamv_interfaces__msg__MicrostrainEst__Sequence__are_equal(const wamv_interfaces__msg__MicrostrainEst__Sequence * lhs, const wamv_interfaces__msg__MicrostrainEst__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wamv_interfaces__msg__MicrostrainEst__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wamv_interfaces__msg__MicrostrainEst__Sequence__copy(
  const wamv_interfaces__msg__MicrostrainEst__Sequence * input,
  wamv_interfaces__msg__MicrostrainEst__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wamv_interfaces__msg__MicrostrainEst);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wamv_interfaces__msg__MicrostrainEst * data =
      (wamv_interfaces__msg__MicrostrainEst *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wamv_interfaces__msg__MicrostrainEst__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wamv_interfaces__msg__MicrostrainEst__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wamv_interfaces__msg__MicrostrainEst__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
