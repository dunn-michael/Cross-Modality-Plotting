// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wamv_interfaces:msg/MicrostrainImu.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_IMU__BUILDER_HPP_
#define WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_IMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wamv_interfaces/msg/detail/microstrain_imu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wamv_interfaces
{

namespace msg
{

namespace builder
{

class Init_MicrostrainImu_scaled_ambient_pressure
{
public:
  explicit Init_MicrostrainImu_scaled_ambient_pressure(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  ::wamv_interfaces::msg::MicrostrainImu scaled_ambient_pressure(::wamv_interfaces::msg::MicrostrainImu::_scaled_ambient_pressure_type arg)
  {
    msg_.scaled_ambient_pressure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_gps_correl_timestamp_flags
{
public:
  explicit Init_MicrostrainImu_gps_correl_timestamp_flags(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_scaled_ambient_pressure gps_correl_timestamp_flags(::wamv_interfaces::msg::MicrostrainImu::_gps_correl_timestamp_flags_type arg)
  {
    msg_.gps_correl_timestamp_flags = std::move(arg);
    return Init_MicrostrainImu_scaled_ambient_pressure(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_gps_correl_timestamp_week_num
{
public:
  explicit Init_MicrostrainImu_gps_correl_timestamp_week_num(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_gps_correl_timestamp_flags gps_correl_timestamp_week_num(::wamv_interfaces::msg::MicrostrainImu::_gps_correl_timestamp_week_num_type arg)
  {
    msg_.gps_correl_timestamp_week_num = std::move(arg);
    return Init_MicrostrainImu_gps_correl_timestamp_flags(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_gps_correl_timestamp_tow
{
public:
  explicit Init_MicrostrainImu_gps_correl_timestamp_tow(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_gps_correl_timestamp_week_num gps_correl_timestamp_tow(::wamv_interfaces::msg::MicrostrainImu::_gps_correl_timestamp_tow_type arg)
  {
    msg_.gps_correl_timestamp_tow = std::move(arg);
    return Init_MicrostrainImu_gps_correl_timestamp_week_num(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_stabilized_accel_z
{
public:
  explicit Init_MicrostrainImu_stabilized_accel_z(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_gps_correl_timestamp_tow stabilized_accel_z(::wamv_interfaces::msg::MicrostrainImu::_stabilized_accel_z_type arg)
  {
    msg_.stabilized_accel_z = std::move(arg);
    return Init_MicrostrainImu_gps_correl_timestamp_tow(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_stabilized_accel_y
{
public:
  explicit Init_MicrostrainImu_stabilized_accel_y(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_stabilized_accel_z stabilized_accel_y(::wamv_interfaces::msg::MicrostrainImu::_stabilized_accel_y_type arg)
  {
    msg_.stabilized_accel_y = std::move(arg);
    return Init_MicrostrainImu_stabilized_accel_z(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_stabilized_accel_x
{
public:
  explicit Init_MicrostrainImu_stabilized_accel_x(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_stabilized_accel_y stabilized_accel_x(::wamv_interfaces::msg::MicrostrainImu::_stabilized_accel_x_type arg)
  {
    msg_.stabilized_accel_x = std::move(arg);
    return Init_MicrostrainImu_stabilized_accel_y(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_stabilized_mag_z
{
public:
  explicit Init_MicrostrainImu_stabilized_mag_z(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_stabilized_accel_x stabilized_mag_z(::wamv_interfaces::msg::MicrostrainImu::_stabilized_mag_z_type arg)
  {
    msg_.stabilized_mag_z = std::move(arg);
    return Init_MicrostrainImu_stabilized_accel_x(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_stabilized_mag_y
{
public:
  explicit Init_MicrostrainImu_stabilized_mag_y(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_stabilized_mag_z stabilized_mag_y(::wamv_interfaces::msg::MicrostrainImu::_stabilized_mag_y_type arg)
  {
    msg_.stabilized_mag_y = std::move(arg);
    return Init_MicrostrainImu_stabilized_mag_z(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_stabilized_mag_x
{
public:
  explicit Init_MicrostrainImu_stabilized_mag_x(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_stabilized_mag_y stabilized_mag_x(::wamv_interfaces::msg::MicrostrainImu::_stabilized_mag_x_type arg)
  {
    msg_.stabilized_mag_x = std::move(arg);
    return Init_MicrostrainImu_stabilized_mag_y(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_orient_quaternion
{
public:
  explicit Init_MicrostrainImu_orient_quaternion(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_stabilized_mag_x orient_quaternion(::wamv_interfaces::msg::MicrostrainImu::_orient_quaternion_type arg)
  {
    msg_.orient_quaternion = std::move(arg);
    return Init_MicrostrainImu_stabilized_mag_x(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_yaw
{
public:
  explicit Init_MicrostrainImu_yaw(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_orient_quaternion yaw(::wamv_interfaces::msg::MicrostrainImu::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_MicrostrainImu_orient_quaternion(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_pitch
{
public:
  explicit Init_MicrostrainImu_pitch(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_yaw pitch(::wamv_interfaces::msg::MicrostrainImu::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_MicrostrainImu_yaw(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_roll
{
public:
  explicit Init_MicrostrainImu_roll(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_pitch roll(::wamv_interfaces::msg::MicrostrainImu::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_MicrostrainImu_pitch(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_orient_matrix
{
public:
  explicit Init_MicrostrainImu_orient_matrix(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_roll orient_matrix(::wamv_interfaces::msg::MicrostrainImu::_orient_matrix_type arg)
  {
    msg_.orient_matrix = std::move(arg);
    return Init_MicrostrainImu_roll(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_delta_vel_z
{
public:
  explicit Init_MicrostrainImu_delta_vel_z(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_orient_matrix delta_vel_z(::wamv_interfaces::msg::MicrostrainImu::_delta_vel_z_type arg)
  {
    msg_.delta_vel_z = std::move(arg);
    return Init_MicrostrainImu_orient_matrix(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_delta_vel_y
{
public:
  explicit Init_MicrostrainImu_delta_vel_y(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_delta_vel_z delta_vel_y(::wamv_interfaces::msg::MicrostrainImu::_delta_vel_y_type arg)
  {
    msg_.delta_vel_y = std::move(arg);
    return Init_MicrostrainImu_delta_vel_z(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_delta_vel_x
{
public:
  explicit Init_MicrostrainImu_delta_vel_x(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_delta_vel_y delta_vel_x(::wamv_interfaces::msg::MicrostrainImu::_delta_vel_x_type arg)
  {
    msg_.delta_vel_x = std::move(arg);
    return Init_MicrostrainImu_delta_vel_y(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_delta_theta_z
{
public:
  explicit Init_MicrostrainImu_delta_theta_z(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_delta_vel_x delta_theta_z(::wamv_interfaces::msg::MicrostrainImu::_delta_theta_z_type arg)
  {
    msg_.delta_theta_z = std::move(arg);
    return Init_MicrostrainImu_delta_vel_x(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_delta_theta_y
{
public:
  explicit Init_MicrostrainImu_delta_theta_y(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_delta_theta_z delta_theta_y(::wamv_interfaces::msg::MicrostrainImu::_delta_theta_y_type arg)
  {
    msg_.delta_theta_y = std::move(arg);
    return Init_MicrostrainImu_delta_theta_z(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_delta_theta_x
{
public:
  explicit Init_MicrostrainImu_delta_theta_x(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_delta_theta_y delta_theta_x(::wamv_interfaces::msg::MicrostrainImu::_delta_theta_x_type arg)
  {
    msg_.delta_theta_x = std::move(arg);
    return Init_MicrostrainImu_delta_theta_y(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_scaled_mag_z
{
public:
  explicit Init_MicrostrainImu_scaled_mag_z(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_delta_theta_x scaled_mag_z(::wamv_interfaces::msg::MicrostrainImu::_scaled_mag_z_type arg)
  {
    msg_.scaled_mag_z = std::move(arg);
    return Init_MicrostrainImu_delta_theta_x(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_scaled_mag_y
{
public:
  explicit Init_MicrostrainImu_scaled_mag_y(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_scaled_mag_z scaled_mag_y(::wamv_interfaces::msg::MicrostrainImu::_scaled_mag_y_type arg)
  {
    msg_.scaled_mag_y = std::move(arg);
    return Init_MicrostrainImu_scaled_mag_z(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_scaled_mag_x
{
public:
  explicit Init_MicrostrainImu_scaled_mag_x(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_scaled_mag_y scaled_mag_x(::wamv_interfaces::msg::MicrostrainImu::_scaled_mag_x_type arg)
  {
    msg_.scaled_mag_x = std::move(arg);
    return Init_MicrostrainImu_scaled_mag_y(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_scaled_gyro_z
{
public:
  explicit Init_MicrostrainImu_scaled_gyro_z(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_scaled_mag_x scaled_gyro_z(::wamv_interfaces::msg::MicrostrainImu::_scaled_gyro_z_type arg)
  {
    msg_.scaled_gyro_z = std::move(arg);
    return Init_MicrostrainImu_scaled_mag_x(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_scaled_gyro_y
{
public:
  explicit Init_MicrostrainImu_scaled_gyro_y(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_scaled_gyro_z scaled_gyro_y(::wamv_interfaces::msg::MicrostrainImu::_scaled_gyro_y_type arg)
  {
    msg_.scaled_gyro_y = std::move(arg);
    return Init_MicrostrainImu_scaled_gyro_z(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_scaled_gyro_x
{
public:
  explicit Init_MicrostrainImu_scaled_gyro_x(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_scaled_gyro_y scaled_gyro_x(::wamv_interfaces::msg::MicrostrainImu::_scaled_gyro_x_type arg)
  {
    msg_.scaled_gyro_x = std::move(arg);
    return Init_MicrostrainImu_scaled_gyro_y(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_scaled_accel_z
{
public:
  explicit Init_MicrostrainImu_scaled_accel_z(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_scaled_gyro_x scaled_accel_z(::wamv_interfaces::msg::MicrostrainImu::_scaled_accel_z_type arg)
  {
    msg_.scaled_accel_z = std::move(arg);
    return Init_MicrostrainImu_scaled_gyro_x(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_scaled_accel_y
{
public:
  explicit Init_MicrostrainImu_scaled_accel_y(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_scaled_accel_z scaled_accel_y(::wamv_interfaces::msg::MicrostrainImu::_scaled_accel_y_type arg)
  {
    msg_.scaled_accel_y = std::move(arg);
    return Init_MicrostrainImu_scaled_accel_z(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_scaled_accel_x
{
public:
  explicit Init_MicrostrainImu_scaled_accel_x(::wamv_interfaces::msg::MicrostrainImu & msg)
  : msg_(msg)
  {}
  Init_MicrostrainImu_scaled_accel_y scaled_accel_x(::wamv_interfaces::msg::MicrostrainImu::_scaled_accel_x_type arg)
  {
    msg_.scaled_accel_x = std::move(arg);
    return Init_MicrostrainImu_scaled_accel_y(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

class Init_MicrostrainImu_timestamp
{
public:
  Init_MicrostrainImu_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MicrostrainImu_scaled_accel_x timestamp(::wamv_interfaces::msg::MicrostrainImu::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_MicrostrainImu_scaled_accel_x(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainImu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wamv_interfaces::msg::MicrostrainImu>()
{
  return wamv_interfaces::msg::builder::Init_MicrostrainImu_timestamp();
}

}  // namespace wamv_interfaces

#endif  // WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_IMU__BUILDER_HPP_
