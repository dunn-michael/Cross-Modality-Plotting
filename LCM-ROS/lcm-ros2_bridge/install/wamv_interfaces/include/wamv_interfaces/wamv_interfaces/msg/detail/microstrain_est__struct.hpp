// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wamv_interfaces:msg/MicrostrainEst.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_EST__STRUCT_HPP_
#define WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_EST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wamv_interfaces__msg__MicrostrainEst __attribute__((deprecated))
#else
# define DEPRECATED__wamv_interfaces__msg__MicrostrainEst __declspec(deprecated)
#endif

namespace wamv_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MicrostrainEst_
{
  using Type = MicrostrainEst_<ContainerAllocator>;

  explicit MicrostrainEst_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->est_latitude = 0.0;
      this->est_longitude = 0.0;
      this->est_height_above_ellipsoid = 0.0;
      this->est_north_velocity = 0.0f;
      this->est_east_velocity = 0.0f;
      this->est_down_velocity = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->est_orient_quaternion.begin(), this->est_orient_quaternion.end(), 0.0f);
      std::fill<typename std::array<float, 9>::iterator, float>(this->est_orient_matrix.begin(), this->est_orient_matrix.end(), 0.0f);
      this->est_roll = 0.0f;
      this->est_pitch = 0.0f;
      this->est_yaw = 0.0f;
      this->est_gyro_bias_x = 0.0f;
      this->est_gyro_bias_y = 0.0f;
      this->est_gyro_bias_z = 0.0f;
      this->est_accel_bias_x = 0.0f;
      this->est_accel_bias_y = 0.0f;
      this->est_accel_bias_z = 0.0f;
      this->est_north_position_uncert = 0.0f;
      this->est_east_position_uncert = 0.0f;
      this->est_down_position_uncert = 0.0f;
      this->est_north_velocity_uncert = 0.0f;
      this->est_east_velocity_uncert = 0.0f;
      this->est_down_velocity_uncert = 0.0f;
      this->est_roll_uncert = 0.0f;
      this->est_pitch_uncert = 0.0f;
      this->est_yaw_uncert = 0.0f;
      this->est_gyro_bias_x_uncert = 0.0f;
      this->est_gyro_bias_y_uncert = 0.0f;
      this->est_gyro_bias_z_uncert = 0.0f;
      this->est_accel_bias_x_uncert = 0.0f;
      this->est_accel_bias_y_uncert = 0.0f;
      this->est_accel_bias_z_uncert = 0.0f;
      this->est_linear_accel_x = 0.0f;
      this->est_linear_accel_y = 0.0f;
      this->est_linear_accel_z = 0.0f;
      this->est_angular_rate_x = 0.0f;
      this->est_angular_rate_y = 0.0f;
      this->est_angular_rate_z = 0.0f;
      this->est_wgs84_local_grav_magnitude = 0.0f;
      this->est_filter_state = 0l;
      this->est_filter_dynamics_mode = 0l;
      this->est_filter_status_flags = 0l;
      this->est_filter_gps_time_tow = 0.0;
      this->est_filter_gps_time_week_num = 0l;
      std::fill<typename std::array<float, 3>::iterator, float>(this->est_attitude_uncert_quaternion.begin(), this->est_attitude_uncert_quaternion.end(), 0.0f);
      this->est_gravity_vector_x = 0.0f;
      this->est_gravity_vector_y = 0.0f;
      this->est_gravity_vector_z = 0.0f;
      this->est_heading = 0.0f;
      this->est_heading_uncert = 0.0f;
      this->est_heading_source = 0l;
      this->est_magnetic_model_sln_north = 0.0f;
      this->est_magnetic_model_sln_east = 0.0f;
      this->est_magnetic_model_sln_down = 0.0f;
      this->est_magnetic_model_sln_inclination = 0.0f;
      this->est_magnetic_model_sln_declination = 0.0f;
      this->est_gyro_scale_factor_x = 0.0f;
      this->est_gyro_scale_factor_y = 0.0f;
      this->est_gyro_scale_factor_z = 0.0f;
      this->est_accel_scale_factor_x = 0.0f;
      this->est_accel_scale_factor_y = 0.0f;
      this->est_accel_scale_factor_z = 0.0f;
      this->est_gyro_scale_factor_x_uncert = 0.0f;
      this->est_gyro_scale_factor_y_uncert = 0.0f;
      this->est_gyro_scale_factor_z_uncert = 0.0f;
      this->est_accel_scale_factor_x_uncert = 0.0f;
      this->est_accel_scale_factor_y_uncert = 0.0f;
      this->est_accel_scale_factor_z_uncert = 0.0f;
      this->est_compensated_accel_x = 0.0f;
      this->est_compensated_accel_y = 0.0f;
      this->est_compensated_accel_z = 0.0f;
      this->est_std_atm_model_geometric_alt = 0.0f;
      this->est_std_atm_model_geopotential_alt = 0.0f;
      this->est_std_atm_model_temperature = 0.0f;
      this->est_std_atm_model_pressure = 0.0f;
      this->est_std_atm_model_density = 0.0f;
      this->est_pressure_alt = 0.0f;
      this->est_mag_auto_hard_iron_offset_x = 0.0f;
      this->est_mag_auto_hard_iron_offset_y = 0.0f;
      this->est_mag_auto_hard_iron_offset_z = 0.0f;
      std::fill<typename std::array<float, 9>::iterator, float>(this->est_mag_auto_soft_iron_matrix.begin(), this->est_mag_auto_soft_iron_matrix.end(), 0.0f);
    }
  }

  explicit MicrostrainEst_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : est_orient_quaternion(_alloc),
    est_orient_matrix(_alloc),
    est_attitude_uncert_quaternion(_alloc),
    est_mag_auto_soft_iron_matrix(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->est_latitude = 0.0;
      this->est_longitude = 0.0;
      this->est_height_above_ellipsoid = 0.0;
      this->est_north_velocity = 0.0f;
      this->est_east_velocity = 0.0f;
      this->est_down_velocity = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->est_orient_quaternion.begin(), this->est_orient_quaternion.end(), 0.0f);
      std::fill<typename std::array<float, 9>::iterator, float>(this->est_orient_matrix.begin(), this->est_orient_matrix.end(), 0.0f);
      this->est_roll = 0.0f;
      this->est_pitch = 0.0f;
      this->est_yaw = 0.0f;
      this->est_gyro_bias_x = 0.0f;
      this->est_gyro_bias_y = 0.0f;
      this->est_gyro_bias_z = 0.0f;
      this->est_accel_bias_x = 0.0f;
      this->est_accel_bias_y = 0.0f;
      this->est_accel_bias_z = 0.0f;
      this->est_north_position_uncert = 0.0f;
      this->est_east_position_uncert = 0.0f;
      this->est_down_position_uncert = 0.0f;
      this->est_north_velocity_uncert = 0.0f;
      this->est_east_velocity_uncert = 0.0f;
      this->est_down_velocity_uncert = 0.0f;
      this->est_roll_uncert = 0.0f;
      this->est_pitch_uncert = 0.0f;
      this->est_yaw_uncert = 0.0f;
      this->est_gyro_bias_x_uncert = 0.0f;
      this->est_gyro_bias_y_uncert = 0.0f;
      this->est_gyro_bias_z_uncert = 0.0f;
      this->est_accel_bias_x_uncert = 0.0f;
      this->est_accel_bias_y_uncert = 0.0f;
      this->est_accel_bias_z_uncert = 0.0f;
      this->est_linear_accel_x = 0.0f;
      this->est_linear_accel_y = 0.0f;
      this->est_linear_accel_z = 0.0f;
      this->est_angular_rate_x = 0.0f;
      this->est_angular_rate_y = 0.0f;
      this->est_angular_rate_z = 0.0f;
      this->est_wgs84_local_grav_magnitude = 0.0f;
      this->est_filter_state = 0l;
      this->est_filter_dynamics_mode = 0l;
      this->est_filter_status_flags = 0l;
      this->est_filter_gps_time_tow = 0.0;
      this->est_filter_gps_time_week_num = 0l;
      std::fill<typename std::array<float, 3>::iterator, float>(this->est_attitude_uncert_quaternion.begin(), this->est_attitude_uncert_quaternion.end(), 0.0f);
      this->est_gravity_vector_x = 0.0f;
      this->est_gravity_vector_y = 0.0f;
      this->est_gravity_vector_z = 0.0f;
      this->est_heading = 0.0f;
      this->est_heading_uncert = 0.0f;
      this->est_heading_source = 0l;
      this->est_magnetic_model_sln_north = 0.0f;
      this->est_magnetic_model_sln_east = 0.0f;
      this->est_magnetic_model_sln_down = 0.0f;
      this->est_magnetic_model_sln_inclination = 0.0f;
      this->est_magnetic_model_sln_declination = 0.0f;
      this->est_gyro_scale_factor_x = 0.0f;
      this->est_gyro_scale_factor_y = 0.0f;
      this->est_gyro_scale_factor_z = 0.0f;
      this->est_accel_scale_factor_x = 0.0f;
      this->est_accel_scale_factor_y = 0.0f;
      this->est_accel_scale_factor_z = 0.0f;
      this->est_gyro_scale_factor_x_uncert = 0.0f;
      this->est_gyro_scale_factor_y_uncert = 0.0f;
      this->est_gyro_scale_factor_z_uncert = 0.0f;
      this->est_accel_scale_factor_x_uncert = 0.0f;
      this->est_accel_scale_factor_y_uncert = 0.0f;
      this->est_accel_scale_factor_z_uncert = 0.0f;
      this->est_compensated_accel_x = 0.0f;
      this->est_compensated_accel_y = 0.0f;
      this->est_compensated_accel_z = 0.0f;
      this->est_std_atm_model_geometric_alt = 0.0f;
      this->est_std_atm_model_geopotential_alt = 0.0f;
      this->est_std_atm_model_temperature = 0.0f;
      this->est_std_atm_model_pressure = 0.0f;
      this->est_std_atm_model_density = 0.0f;
      this->est_pressure_alt = 0.0f;
      this->est_mag_auto_hard_iron_offset_x = 0.0f;
      this->est_mag_auto_hard_iron_offset_y = 0.0f;
      this->est_mag_auto_hard_iron_offset_z = 0.0f;
      std::fill<typename std::array<float, 9>::iterator, float>(this->est_mag_auto_soft_iron_matrix.begin(), this->est_mag_auto_soft_iron_matrix.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _est_latitude_type =
    double;
  _est_latitude_type est_latitude;
  using _est_longitude_type =
    double;
  _est_longitude_type est_longitude;
  using _est_height_above_ellipsoid_type =
    double;
  _est_height_above_ellipsoid_type est_height_above_ellipsoid;
  using _est_north_velocity_type =
    float;
  _est_north_velocity_type est_north_velocity;
  using _est_east_velocity_type =
    float;
  _est_east_velocity_type est_east_velocity;
  using _est_down_velocity_type =
    float;
  _est_down_velocity_type est_down_velocity;
  using _est_orient_quaternion_type =
    std::array<float, 3>;
  _est_orient_quaternion_type est_orient_quaternion;
  using _est_orient_matrix_type =
    std::array<float, 9>;
  _est_orient_matrix_type est_orient_matrix;
  using _est_roll_type =
    float;
  _est_roll_type est_roll;
  using _est_pitch_type =
    float;
  _est_pitch_type est_pitch;
  using _est_yaw_type =
    float;
  _est_yaw_type est_yaw;
  using _est_gyro_bias_x_type =
    float;
  _est_gyro_bias_x_type est_gyro_bias_x;
  using _est_gyro_bias_y_type =
    float;
  _est_gyro_bias_y_type est_gyro_bias_y;
  using _est_gyro_bias_z_type =
    float;
  _est_gyro_bias_z_type est_gyro_bias_z;
  using _est_accel_bias_x_type =
    float;
  _est_accel_bias_x_type est_accel_bias_x;
  using _est_accel_bias_y_type =
    float;
  _est_accel_bias_y_type est_accel_bias_y;
  using _est_accel_bias_z_type =
    float;
  _est_accel_bias_z_type est_accel_bias_z;
  using _est_north_position_uncert_type =
    float;
  _est_north_position_uncert_type est_north_position_uncert;
  using _est_east_position_uncert_type =
    float;
  _est_east_position_uncert_type est_east_position_uncert;
  using _est_down_position_uncert_type =
    float;
  _est_down_position_uncert_type est_down_position_uncert;
  using _est_north_velocity_uncert_type =
    float;
  _est_north_velocity_uncert_type est_north_velocity_uncert;
  using _est_east_velocity_uncert_type =
    float;
  _est_east_velocity_uncert_type est_east_velocity_uncert;
  using _est_down_velocity_uncert_type =
    float;
  _est_down_velocity_uncert_type est_down_velocity_uncert;
  using _est_roll_uncert_type =
    float;
  _est_roll_uncert_type est_roll_uncert;
  using _est_pitch_uncert_type =
    float;
  _est_pitch_uncert_type est_pitch_uncert;
  using _est_yaw_uncert_type =
    float;
  _est_yaw_uncert_type est_yaw_uncert;
  using _est_gyro_bias_x_uncert_type =
    float;
  _est_gyro_bias_x_uncert_type est_gyro_bias_x_uncert;
  using _est_gyro_bias_y_uncert_type =
    float;
  _est_gyro_bias_y_uncert_type est_gyro_bias_y_uncert;
  using _est_gyro_bias_z_uncert_type =
    float;
  _est_gyro_bias_z_uncert_type est_gyro_bias_z_uncert;
  using _est_accel_bias_x_uncert_type =
    float;
  _est_accel_bias_x_uncert_type est_accel_bias_x_uncert;
  using _est_accel_bias_y_uncert_type =
    float;
  _est_accel_bias_y_uncert_type est_accel_bias_y_uncert;
  using _est_accel_bias_z_uncert_type =
    float;
  _est_accel_bias_z_uncert_type est_accel_bias_z_uncert;
  using _est_linear_accel_x_type =
    float;
  _est_linear_accel_x_type est_linear_accel_x;
  using _est_linear_accel_y_type =
    float;
  _est_linear_accel_y_type est_linear_accel_y;
  using _est_linear_accel_z_type =
    float;
  _est_linear_accel_z_type est_linear_accel_z;
  using _est_angular_rate_x_type =
    float;
  _est_angular_rate_x_type est_angular_rate_x;
  using _est_angular_rate_y_type =
    float;
  _est_angular_rate_y_type est_angular_rate_y;
  using _est_angular_rate_z_type =
    float;
  _est_angular_rate_z_type est_angular_rate_z;
  using _est_wgs84_local_grav_magnitude_type =
    float;
  _est_wgs84_local_grav_magnitude_type est_wgs84_local_grav_magnitude;
  using _est_filter_state_type =
    int32_t;
  _est_filter_state_type est_filter_state;
  using _est_filter_dynamics_mode_type =
    int32_t;
  _est_filter_dynamics_mode_type est_filter_dynamics_mode;
  using _est_filter_status_flags_type =
    int32_t;
  _est_filter_status_flags_type est_filter_status_flags;
  using _est_filter_gps_time_tow_type =
    double;
  _est_filter_gps_time_tow_type est_filter_gps_time_tow;
  using _est_filter_gps_time_week_num_type =
    int32_t;
  _est_filter_gps_time_week_num_type est_filter_gps_time_week_num;
  using _est_attitude_uncert_quaternion_type =
    std::array<float, 3>;
  _est_attitude_uncert_quaternion_type est_attitude_uncert_quaternion;
  using _est_gravity_vector_x_type =
    float;
  _est_gravity_vector_x_type est_gravity_vector_x;
  using _est_gravity_vector_y_type =
    float;
  _est_gravity_vector_y_type est_gravity_vector_y;
  using _est_gravity_vector_z_type =
    float;
  _est_gravity_vector_z_type est_gravity_vector_z;
  using _est_heading_type =
    float;
  _est_heading_type est_heading;
  using _est_heading_uncert_type =
    float;
  _est_heading_uncert_type est_heading_uncert;
  using _est_heading_source_type =
    int32_t;
  _est_heading_source_type est_heading_source;
  using _est_magnetic_model_sln_north_type =
    float;
  _est_magnetic_model_sln_north_type est_magnetic_model_sln_north;
  using _est_magnetic_model_sln_east_type =
    float;
  _est_magnetic_model_sln_east_type est_magnetic_model_sln_east;
  using _est_magnetic_model_sln_down_type =
    float;
  _est_magnetic_model_sln_down_type est_magnetic_model_sln_down;
  using _est_magnetic_model_sln_inclination_type =
    float;
  _est_magnetic_model_sln_inclination_type est_magnetic_model_sln_inclination;
  using _est_magnetic_model_sln_declination_type =
    float;
  _est_magnetic_model_sln_declination_type est_magnetic_model_sln_declination;
  using _est_gyro_scale_factor_x_type =
    float;
  _est_gyro_scale_factor_x_type est_gyro_scale_factor_x;
  using _est_gyro_scale_factor_y_type =
    float;
  _est_gyro_scale_factor_y_type est_gyro_scale_factor_y;
  using _est_gyro_scale_factor_z_type =
    float;
  _est_gyro_scale_factor_z_type est_gyro_scale_factor_z;
  using _est_accel_scale_factor_x_type =
    float;
  _est_accel_scale_factor_x_type est_accel_scale_factor_x;
  using _est_accel_scale_factor_y_type =
    float;
  _est_accel_scale_factor_y_type est_accel_scale_factor_y;
  using _est_accel_scale_factor_z_type =
    float;
  _est_accel_scale_factor_z_type est_accel_scale_factor_z;
  using _est_gyro_scale_factor_x_uncert_type =
    float;
  _est_gyro_scale_factor_x_uncert_type est_gyro_scale_factor_x_uncert;
  using _est_gyro_scale_factor_y_uncert_type =
    float;
  _est_gyro_scale_factor_y_uncert_type est_gyro_scale_factor_y_uncert;
  using _est_gyro_scale_factor_z_uncert_type =
    float;
  _est_gyro_scale_factor_z_uncert_type est_gyro_scale_factor_z_uncert;
  using _est_accel_scale_factor_x_uncert_type =
    float;
  _est_accel_scale_factor_x_uncert_type est_accel_scale_factor_x_uncert;
  using _est_accel_scale_factor_y_uncert_type =
    float;
  _est_accel_scale_factor_y_uncert_type est_accel_scale_factor_y_uncert;
  using _est_accel_scale_factor_z_uncert_type =
    float;
  _est_accel_scale_factor_z_uncert_type est_accel_scale_factor_z_uncert;
  using _est_compensated_accel_x_type =
    float;
  _est_compensated_accel_x_type est_compensated_accel_x;
  using _est_compensated_accel_y_type =
    float;
  _est_compensated_accel_y_type est_compensated_accel_y;
  using _est_compensated_accel_z_type =
    float;
  _est_compensated_accel_z_type est_compensated_accel_z;
  using _est_std_atm_model_geometric_alt_type =
    float;
  _est_std_atm_model_geometric_alt_type est_std_atm_model_geometric_alt;
  using _est_std_atm_model_geopotential_alt_type =
    float;
  _est_std_atm_model_geopotential_alt_type est_std_atm_model_geopotential_alt;
  using _est_std_atm_model_temperature_type =
    float;
  _est_std_atm_model_temperature_type est_std_atm_model_temperature;
  using _est_std_atm_model_pressure_type =
    float;
  _est_std_atm_model_pressure_type est_std_atm_model_pressure;
  using _est_std_atm_model_density_type =
    float;
  _est_std_atm_model_density_type est_std_atm_model_density;
  using _est_pressure_alt_type =
    float;
  _est_pressure_alt_type est_pressure_alt;
  using _est_mag_auto_hard_iron_offset_x_type =
    float;
  _est_mag_auto_hard_iron_offset_x_type est_mag_auto_hard_iron_offset_x;
  using _est_mag_auto_hard_iron_offset_y_type =
    float;
  _est_mag_auto_hard_iron_offset_y_type est_mag_auto_hard_iron_offset_y;
  using _est_mag_auto_hard_iron_offset_z_type =
    float;
  _est_mag_auto_hard_iron_offset_z_type est_mag_auto_hard_iron_offset_z;
  using _est_mag_auto_soft_iron_matrix_type =
    std::array<float, 9>;
  _est_mag_auto_soft_iron_matrix_type est_mag_auto_soft_iron_matrix;

  // setters for named parameter idiom
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__est_latitude(
    const double & _arg)
  {
    this->est_latitude = _arg;
    return *this;
  }
  Type & set__est_longitude(
    const double & _arg)
  {
    this->est_longitude = _arg;
    return *this;
  }
  Type & set__est_height_above_ellipsoid(
    const double & _arg)
  {
    this->est_height_above_ellipsoid = _arg;
    return *this;
  }
  Type & set__est_north_velocity(
    const float & _arg)
  {
    this->est_north_velocity = _arg;
    return *this;
  }
  Type & set__est_east_velocity(
    const float & _arg)
  {
    this->est_east_velocity = _arg;
    return *this;
  }
  Type & set__est_down_velocity(
    const float & _arg)
  {
    this->est_down_velocity = _arg;
    return *this;
  }
  Type & set__est_orient_quaternion(
    const std::array<float, 3> & _arg)
  {
    this->est_orient_quaternion = _arg;
    return *this;
  }
  Type & set__est_orient_matrix(
    const std::array<float, 9> & _arg)
  {
    this->est_orient_matrix = _arg;
    return *this;
  }
  Type & set__est_roll(
    const float & _arg)
  {
    this->est_roll = _arg;
    return *this;
  }
  Type & set__est_pitch(
    const float & _arg)
  {
    this->est_pitch = _arg;
    return *this;
  }
  Type & set__est_yaw(
    const float & _arg)
  {
    this->est_yaw = _arg;
    return *this;
  }
  Type & set__est_gyro_bias_x(
    const float & _arg)
  {
    this->est_gyro_bias_x = _arg;
    return *this;
  }
  Type & set__est_gyro_bias_y(
    const float & _arg)
  {
    this->est_gyro_bias_y = _arg;
    return *this;
  }
  Type & set__est_gyro_bias_z(
    const float & _arg)
  {
    this->est_gyro_bias_z = _arg;
    return *this;
  }
  Type & set__est_accel_bias_x(
    const float & _arg)
  {
    this->est_accel_bias_x = _arg;
    return *this;
  }
  Type & set__est_accel_bias_y(
    const float & _arg)
  {
    this->est_accel_bias_y = _arg;
    return *this;
  }
  Type & set__est_accel_bias_z(
    const float & _arg)
  {
    this->est_accel_bias_z = _arg;
    return *this;
  }
  Type & set__est_north_position_uncert(
    const float & _arg)
  {
    this->est_north_position_uncert = _arg;
    return *this;
  }
  Type & set__est_east_position_uncert(
    const float & _arg)
  {
    this->est_east_position_uncert = _arg;
    return *this;
  }
  Type & set__est_down_position_uncert(
    const float & _arg)
  {
    this->est_down_position_uncert = _arg;
    return *this;
  }
  Type & set__est_north_velocity_uncert(
    const float & _arg)
  {
    this->est_north_velocity_uncert = _arg;
    return *this;
  }
  Type & set__est_east_velocity_uncert(
    const float & _arg)
  {
    this->est_east_velocity_uncert = _arg;
    return *this;
  }
  Type & set__est_down_velocity_uncert(
    const float & _arg)
  {
    this->est_down_velocity_uncert = _arg;
    return *this;
  }
  Type & set__est_roll_uncert(
    const float & _arg)
  {
    this->est_roll_uncert = _arg;
    return *this;
  }
  Type & set__est_pitch_uncert(
    const float & _arg)
  {
    this->est_pitch_uncert = _arg;
    return *this;
  }
  Type & set__est_yaw_uncert(
    const float & _arg)
  {
    this->est_yaw_uncert = _arg;
    return *this;
  }
  Type & set__est_gyro_bias_x_uncert(
    const float & _arg)
  {
    this->est_gyro_bias_x_uncert = _arg;
    return *this;
  }
  Type & set__est_gyro_bias_y_uncert(
    const float & _arg)
  {
    this->est_gyro_bias_y_uncert = _arg;
    return *this;
  }
  Type & set__est_gyro_bias_z_uncert(
    const float & _arg)
  {
    this->est_gyro_bias_z_uncert = _arg;
    return *this;
  }
  Type & set__est_accel_bias_x_uncert(
    const float & _arg)
  {
    this->est_accel_bias_x_uncert = _arg;
    return *this;
  }
  Type & set__est_accel_bias_y_uncert(
    const float & _arg)
  {
    this->est_accel_bias_y_uncert = _arg;
    return *this;
  }
  Type & set__est_accel_bias_z_uncert(
    const float & _arg)
  {
    this->est_accel_bias_z_uncert = _arg;
    return *this;
  }
  Type & set__est_linear_accel_x(
    const float & _arg)
  {
    this->est_linear_accel_x = _arg;
    return *this;
  }
  Type & set__est_linear_accel_y(
    const float & _arg)
  {
    this->est_linear_accel_y = _arg;
    return *this;
  }
  Type & set__est_linear_accel_z(
    const float & _arg)
  {
    this->est_linear_accel_z = _arg;
    return *this;
  }
  Type & set__est_angular_rate_x(
    const float & _arg)
  {
    this->est_angular_rate_x = _arg;
    return *this;
  }
  Type & set__est_angular_rate_y(
    const float & _arg)
  {
    this->est_angular_rate_y = _arg;
    return *this;
  }
  Type & set__est_angular_rate_z(
    const float & _arg)
  {
    this->est_angular_rate_z = _arg;
    return *this;
  }
  Type & set__est_wgs84_local_grav_magnitude(
    const float & _arg)
  {
    this->est_wgs84_local_grav_magnitude = _arg;
    return *this;
  }
  Type & set__est_filter_state(
    const int32_t & _arg)
  {
    this->est_filter_state = _arg;
    return *this;
  }
  Type & set__est_filter_dynamics_mode(
    const int32_t & _arg)
  {
    this->est_filter_dynamics_mode = _arg;
    return *this;
  }
  Type & set__est_filter_status_flags(
    const int32_t & _arg)
  {
    this->est_filter_status_flags = _arg;
    return *this;
  }
  Type & set__est_filter_gps_time_tow(
    const double & _arg)
  {
    this->est_filter_gps_time_tow = _arg;
    return *this;
  }
  Type & set__est_filter_gps_time_week_num(
    const int32_t & _arg)
  {
    this->est_filter_gps_time_week_num = _arg;
    return *this;
  }
  Type & set__est_attitude_uncert_quaternion(
    const std::array<float, 3> & _arg)
  {
    this->est_attitude_uncert_quaternion = _arg;
    return *this;
  }
  Type & set__est_gravity_vector_x(
    const float & _arg)
  {
    this->est_gravity_vector_x = _arg;
    return *this;
  }
  Type & set__est_gravity_vector_y(
    const float & _arg)
  {
    this->est_gravity_vector_y = _arg;
    return *this;
  }
  Type & set__est_gravity_vector_z(
    const float & _arg)
  {
    this->est_gravity_vector_z = _arg;
    return *this;
  }
  Type & set__est_heading(
    const float & _arg)
  {
    this->est_heading = _arg;
    return *this;
  }
  Type & set__est_heading_uncert(
    const float & _arg)
  {
    this->est_heading_uncert = _arg;
    return *this;
  }
  Type & set__est_heading_source(
    const int32_t & _arg)
  {
    this->est_heading_source = _arg;
    return *this;
  }
  Type & set__est_magnetic_model_sln_north(
    const float & _arg)
  {
    this->est_magnetic_model_sln_north = _arg;
    return *this;
  }
  Type & set__est_magnetic_model_sln_east(
    const float & _arg)
  {
    this->est_magnetic_model_sln_east = _arg;
    return *this;
  }
  Type & set__est_magnetic_model_sln_down(
    const float & _arg)
  {
    this->est_magnetic_model_sln_down = _arg;
    return *this;
  }
  Type & set__est_magnetic_model_sln_inclination(
    const float & _arg)
  {
    this->est_magnetic_model_sln_inclination = _arg;
    return *this;
  }
  Type & set__est_magnetic_model_sln_declination(
    const float & _arg)
  {
    this->est_magnetic_model_sln_declination = _arg;
    return *this;
  }
  Type & set__est_gyro_scale_factor_x(
    const float & _arg)
  {
    this->est_gyro_scale_factor_x = _arg;
    return *this;
  }
  Type & set__est_gyro_scale_factor_y(
    const float & _arg)
  {
    this->est_gyro_scale_factor_y = _arg;
    return *this;
  }
  Type & set__est_gyro_scale_factor_z(
    const float & _arg)
  {
    this->est_gyro_scale_factor_z = _arg;
    return *this;
  }
  Type & set__est_accel_scale_factor_x(
    const float & _arg)
  {
    this->est_accel_scale_factor_x = _arg;
    return *this;
  }
  Type & set__est_accel_scale_factor_y(
    const float & _arg)
  {
    this->est_accel_scale_factor_y = _arg;
    return *this;
  }
  Type & set__est_accel_scale_factor_z(
    const float & _arg)
  {
    this->est_accel_scale_factor_z = _arg;
    return *this;
  }
  Type & set__est_gyro_scale_factor_x_uncert(
    const float & _arg)
  {
    this->est_gyro_scale_factor_x_uncert = _arg;
    return *this;
  }
  Type & set__est_gyro_scale_factor_y_uncert(
    const float & _arg)
  {
    this->est_gyro_scale_factor_y_uncert = _arg;
    return *this;
  }
  Type & set__est_gyro_scale_factor_z_uncert(
    const float & _arg)
  {
    this->est_gyro_scale_factor_z_uncert = _arg;
    return *this;
  }
  Type & set__est_accel_scale_factor_x_uncert(
    const float & _arg)
  {
    this->est_accel_scale_factor_x_uncert = _arg;
    return *this;
  }
  Type & set__est_accel_scale_factor_y_uncert(
    const float & _arg)
  {
    this->est_accel_scale_factor_y_uncert = _arg;
    return *this;
  }
  Type & set__est_accel_scale_factor_z_uncert(
    const float & _arg)
  {
    this->est_accel_scale_factor_z_uncert = _arg;
    return *this;
  }
  Type & set__est_compensated_accel_x(
    const float & _arg)
  {
    this->est_compensated_accel_x = _arg;
    return *this;
  }
  Type & set__est_compensated_accel_y(
    const float & _arg)
  {
    this->est_compensated_accel_y = _arg;
    return *this;
  }
  Type & set__est_compensated_accel_z(
    const float & _arg)
  {
    this->est_compensated_accel_z = _arg;
    return *this;
  }
  Type & set__est_std_atm_model_geometric_alt(
    const float & _arg)
  {
    this->est_std_atm_model_geometric_alt = _arg;
    return *this;
  }
  Type & set__est_std_atm_model_geopotential_alt(
    const float & _arg)
  {
    this->est_std_atm_model_geopotential_alt = _arg;
    return *this;
  }
  Type & set__est_std_atm_model_temperature(
    const float & _arg)
  {
    this->est_std_atm_model_temperature = _arg;
    return *this;
  }
  Type & set__est_std_atm_model_pressure(
    const float & _arg)
  {
    this->est_std_atm_model_pressure = _arg;
    return *this;
  }
  Type & set__est_std_atm_model_density(
    const float & _arg)
  {
    this->est_std_atm_model_density = _arg;
    return *this;
  }
  Type & set__est_pressure_alt(
    const float & _arg)
  {
    this->est_pressure_alt = _arg;
    return *this;
  }
  Type & set__est_mag_auto_hard_iron_offset_x(
    const float & _arg)
  {
    this->est_mag_auto_hard_iron_offset_x = _arg;
    return *this;
  }
  Type & set__est_mag_auto_hard_iron_offset_y(
    const float & _arg)
  {
    this->est_mag_auto_hard_iron_offset_y = _arg;
    return *this;
  }
  Type & set__est_mag_auto_hard_iron_offset_z(
    const float & _arg)
  {
    this->est_mag_auto_hard_iron_offset_z = _arg;
    return *this;
  }
  Type & set__est_mag_auto_soft_iron_matrix(
    const std::array<float, 9> & _arg)
  {
    this->est_mag_auto_soft_iron_matrix = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wamv_interfaces::msg::MicrostrainEst_<ContainerAllocator> *;
  using ConstRawPtr =
    const wamv_interfaces::msg::MicrostrainEst_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wamv_interfaces::msg::MicrostrainEst_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wamv_interfaces::msg::MicrostrainEst_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wamv_interfaces::msg::MicrostrainEst_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wamv_interfaces::msg::MicrostrainEst_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wamv_interfaces::msg::MicrostrainEst_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wamv_interfaces::msg::MicrostrainEst_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wamv_interfaces::msg::MicrostrainEst_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wamv_interfaces::msg::MicrostrainEst_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wamv_interfaces__msg__MicrostrainEst
    std::shared_ptr<wamv_interfaces::msg::MicrostrainEst_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wamv_interfaces__msg__MicrostrainEst
    std::shared_ptr<wamv_interfaces::msg::MicrostrainEst_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MicrostrainEst_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->est_latitude != other.est_latitude) {
      return false;
    }
    if (this->est_longitude != other.est_longitude) {
      return false;
    }
    if (this->est_height_above_ellipsoid != other.est_height_above_ellipsoid) {
      return false;
    }
    if (this->est_north_velocity != other.est_north_velocity) {
      return false;
    }
    if (this->est_east_velocity != other.est_east_velocity) {
      return false;
    }
    if (this->est_down_velocity != other.est_down_velocity) {
      return false;
    }
    if (this->est_orient_quaternion != other.est_orient_quaternion) {
      return false;
    }
    if (this->est_orient_matrix != other.est_orient_matrix) {
      return false;
    }
    if (this->est_roll != other.est_roll) {
      return false;
    }
    if (this->est_pitch != other.est_pitch) {
      return false;
    }
    if (this->est_yaw != other.est_yaw) {
      return false;
    }
    if (this->est_gyro_bias_x != other.est_gyro_bias_x) {
      return false;
    }
    if (this->est_gyro_bias_y != other.est_gyro_bias_y) {
      return false;
    }
    if (this->est_gyro_bias_z != other.est_gyro_bias_z) {
      return false;
    }
    if (this->est_accel_bias_x != other.est_accel_bias_x) {
      return false;
    }
    if (this->est_accel_bias_y != other.est_accel_bias_y) {
      return false;
    }
    if (this->est_accel_bias_z != other.est_accel_bias_z) {
      return false;
    }
    if (this->est_north_position_uncert != other.est_north_position_uncert) {
      return false;
    }
    if (this->est_east_position_uncert != other.est_east_position_uncert) {
      return false;
    }
    if (this->est_down_position_uncert != other.est_down_position_uncert) {
      return false;
    }
    if (this->est_north_velocity_uncert != other.est_north_velocity_uncert) {
      return false;
    }
    if (this->est_east_velocity_uncert != other.est_east_velocity_uncert) {
      return false;
    }
    if (this->est_down_velocity_uncert != other.est_down_velocity_uncert) {
      return false;
    }
    if (this->est_roll_uncert != other.est_roll_uncert) {
      return false;
    }
    if (this->est_pitch_uncert != other.est_pitch_uncert) {
      return false;
    }
    if (this->est_yaw_uncert != other.est_yaw_uncert) {
      return false;
    }
    if (this->est_gyro_bias_x_uncert != other.est_gyro_bias_x_uncert) {
      return false;
    }
    if (this->est_gyro_bias_y_uncert != other.est_gyro_bias_y_uncert) {
      return false;
    }
    if (this->est_gyro_bias_z_uncert != other.est_gyro_bias_z_uncert) {
      return false;
    }
    if (this->est_accel_bias_x_uncert != other.est_accel_bias_x_uncert) {
      return false;
    }
    if (this->est_accel_bias_y_uncert != other.est_accel_bias_y_uncert) {
      return false;
    }
    if (this->est_accel_bias_z_uncert != other.est_accel_bias_z_uncert) {
      return false;
    }
    if (this->est_linear_accel_x != other.est_linear_accel_x) {
      return false;
    }
    if (this->est_linear_accel_y != other.est_linear_accel_y) {
      return false;
    }
    if (this->est_linear_accel_z != other.est_linear_accel_z) {
      return false;
    }
    if (this->est_angular_rate_x != other.est_angular_rate_x) {
      return false;
    }
    if (this->est_angular_rate_y != other.est_angular_rate_y) {
      return false;
    }
    if (this->est_angular_rate_z != other.est_angular_rate_z) {
      return false;
    }
    if (this->est_wgs84_local_grav_magnitude != other.est_wgs84_local_grav_magnitude) {
      return false;
    }
    if (this->est_filter_state != other.est_filter_state) {
      return false;
    }
    if (this->est_filter_dynamics_mode != other.est_filter_dynamics_mode) {
      return false;
    }
    if (this->est_filter_status_flags != other.est_filter_status_flags) {
      return false;
    }
    if (this->est_filter_gps_time_tow != other.est_filter_gps_time_tow) {
      return false;
    }
    if (this->est_filter_gps_time_week_num != other.est_filter_gps_time_week_num) {
      return false;
    }
    if (this->est_attitude_uncert_quaternion != other.est_attitude_uncert_quaternion) {
      return false;
    }
    if (this->est_gravity_vector_x != other.est_gravity_vector_x) {
      return false;
    }
    if (this->est_gravity_vector_y != other.est_gravity_vector_y) {
      return false;
    }
    if (this->est_gravity_vector_z != other.est_gravity_vector_z) {
      return false;
    }
    if (this->est_heading != other.est_heading) {
      return false;
    }
    if (this->est_heading_uncert != other.est_heading_uncert) {
      return false;
    }
    if (this->est_heading_source != other.est_heading_source) {
      return false;
    }
    if (this->est_magnetic_model_sln_north != other.est_magnetic_model_sln_north) {
      return false;
    }
    if (this->est_magnetic_model_sln_east != other.est_magnetic_model_sln_east) {
      return false;
    }
    if (this->est_magnetic_model_sln_down != other.est_magnetic_model_sln_down) {
      return false;
    }
    if (this->est_magnetic_model_sln_inclination != other.est_magnetic_model_sln_inclination) {
      return false;
    }
    if (this->est_magnetic_model_sln_declination != other.est_magnetic_model_sln_declination) {
      return false;
    }
    if (this->est_gyro_scale_factor_x != other.est_gyro_scale_factor_x) {
      return false;
    }
    if (this->est_gyro_scale_factor_y != other.est_gyro_scale_factor_y) {
      return false;
    }
    if (this->est_gyro_scale_factor_z != other.est_gyro_scale_factor_z) {
      return false;
    }
    if (this->est_accel_scale_factor_x != other.est_accel_scale_factor_x) {
      return false;
    }
    if (this->est_accel_scale_factor_y != other.est_accel_scale_factor_y) {
      return false;
    }
    if (this->est_accel_scale_factor_z != other.est_accel_scale_factor_z) {
      return false;
    }
    if (this->est_gyro_scale_factor_x_uncert != other.est_gyro_scale_factor_x_uncert) {
      return false;
    }
    if (this->est_gyro_scale_factor_y_uncert != other.est_gyro_scale_factor_y_uncert) {
      return false;
    }
    if (this->est_gyro_scale_factor_z_uncert != other.est_gyro_scale_factor_z_uncert) {
      return false;
    }
    if (this->est_accel_scale_factor_x_uncert != other.est_accel_scale_factor_x_uncert) {
      return false;
    }
    if (this->est_accel_scale_factor_y_uncert != other.est_accel_scale_factor_y_uncert) {
      return false;
    }
    if (this->est_accel_scale_factor_z_uncert != other.est_accel_scale_factor_z_uncert) {
      return false;
    }
    if (this->est_compensated_accel_x != other.est_compensated_accel_x) {
      return false;
    }
    if (this->est_compensated_accel_y != other.est_compensated_accel_y) {
      return false;
    }
    if (this->est_compensated_accel_z != other.est_compensated_accel_z) {
      return false;
    }
    if (this->est_std_atm_model_geometric_alt != other.est_std_atm_model_geometric_alt) {
      return false;
    }
    if (this->est_std_atm_model_geopotential_alt != other.est_std_atm_model_geopotential_alt) {
      return false;
    }
    if (this->est_std_atm_model_temperature != other.est_std_atm_model_temperature) {
      return false;
    }
    if (this->est_std_atm_model_pressure != other.est_std_atm_model_pressure) {
      return false;
    }
    if (this->est_std_atm_model_density != other.est_std_atm_model_density) {
      return false;
    }
    if (this->est_pressure_alt != other.est_pressure_alt) {
      return false;
    }
    if (this->est_mag_auto_hard_iron_offset_x != other.est_mag_auto_hard_iron_offset_x) {
      return false;
    }
    if (this->est_mag_auto_hard_iron_offset_y != other.est_mag_auto_hard_iron_offset_y) {
      return false;
    }
    if (this->est_mag_auto_hard_iron_offset_z != other.est_mag_auto_hard_iron_offset_z) {
      return false;
    }
    if (this->est_mag_auto_soft_iron_matrix != other.est_mag_auto_soft_iron_matrix) {
      return false;
    }
    return true;
  }
  bool operator!=(const MicrostrainEst_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MicrostrainEst_

// alias to use template instance with default allocator
using MicrostrainEst =
  wamv_interfaces::msg::MicrostrainEst_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wamv_interfaces

#endif  // WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_EST__STRUCT_HPP_
