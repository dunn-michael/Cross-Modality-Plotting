// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wamv_interfaces:msg/MicrostrainEst.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_EST__BUILDER_HPP_
#define WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_EST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wamv_interfaces/msg/detail/microstrain_est__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wamv_interfaces
{

namespace msg
{

namespace builder
{

class Init_MicrostrainEst_est_mag_auto_soft_iron_matrix
{
public:
  explicit Init_MicrostrainEst_est_mag_auto_soft_iron_matrix(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  ::wamv_interfaces::msg::MicrostrainEst est_mag_auto_soft_iron_matrix(::wamv_interfaces::msg::MicrostrainEst::_est_mag_auto_soft_iron_matrix_type arg)
  {
    msg_.est_mag_auto_soft_iron_matrix = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_mag_auto_hard_iron_offset_z
{
public:
  explicit Init_MicrostrainEst_est_mag_auto_hard_iron_offset_z(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_mag_auto_soft_iron_matrix est_mag_auto_hard_iron_offset_z(::wamv_interfaces::msg::MicrostrainEst::_est_mag_auto_hard_iron_offset_z_type arg)
  {
    msg_.est_mag_auto_hard_iron_offset_z = std::move(arg);
    return Init_MicrostrainEst_est_mag_auto_soft_iron_matrix(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_mag_auto_hard_iron_offset_y
{
public:
  explicit Init_MicrostrainEst_est_mag_auto_hard_iron_offset_y(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_mag_auto_hard_iron_offset_z est_mag_auto_hard_iron_offset_y(::wamv_interfaces::msg::MicrostrainEst::_est_mag_auto_hard_iron_offset_y_type arg)
  {
    msg_.est_mag_auto_hard_iron_offset_y = std::move(arg);
    return Init_MicrostrainEst_est_mag_auto_hard_iron_offset_z(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_mag_auto_hard_iron_offset_x
{
public:
  explicit Init_MicrostrainEst_est_mag_auto_hard_iron_offset_x(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_mag_auto_hard_iron_offset_y est_mag_auto_hard_iron_offset_x(::wamv_interfaces::msg::MicrostrainEst::_est_mag_auto_hard_iron_offset_x_type arg)
  {
    msg_.est_mag_auto_hard_iron_offset_x = std::move(arg);
    return Init_MicrostrainEst_est_mag_auto_hard_iron_offset_y(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_pressure_alt
{
public:
  explicit Init_MicrostrainEst_est_pressure_alt(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_mag_auto_hard_iron_offset_x est_pressure_alt(::wamv_interfaces::msg::MicrostrainEst::_est_pressure_alt_type arg)
  {
    msg_.est_pressure_alt = std::move(arg);
    return Init_MicrostrainEst_est_mag_auto_hard_iron_offset_x(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_std_atm_model_density
{
public:
  explicit Init_MicrostrainEst_est_std_atm_model_density(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_pressure_alt est_std_atm_model_density(::wamv_interfaces::msg::MicrostrainEst::_est_std_atm_model_density_type arg)
  {
    msg_.est_std_atm_model_density = std::move(arg);
    return Init_MicrostrainEst_est_pressure_alt(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_std_atm_model_pressure
{
public:
  explicit Init_MicrostrainEst_est_std_atm_model_pressure(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_std_atm_model_density est_std_atm_model_pressure(::wamv_interfaces::msg::MicrostrainEst::_est_std_atm_model_pressure_type arg)
  {
    msg_.est_std_atm_model_pressure = std::move(arg);
    return Init_MicrostrainEst_est_std_atm_model_density(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_std_atm_model_temperature
{
public:
  explicit Init_MicrostrainEst_est_std_atm_model_temperature(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_std_atm_model_pressure est_std_atm_model_temperature(::wamv_interfaces::msg::MicrostrainEst::_est_std_atm_model_temperature_type arg)
  {
    msg_.est_std_atm_model_temperature = std::move(arg);
    return Init_MicrostrainEst_est_std_atm_model_pressure(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_std_atm_model_geopotential_alt
{
public:
  explicit Init_MicrostrainEst_est_std_atm_model_geopotential_alt(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_std_atm_model_temperature est_std_atm_model_geopotential_alt(::wamv_interfaces::msg::MicrostrainEst::_est_std_atm_model_geopotential_alt_type arg)
  {
    msg_.est_std_atm_model_geopotential_alt = std::move(arg);
    return Init_MicrostrainEst_est_std_atm_model_temperature(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_std_atm_model_geometric_alt
{
public:
  explicit Init_MicrostrainEst_est_std_atm_model_geometric_alt(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_std_atm_model_geopotential_alt est_std_atm_model_geometric_alt(::wamv_interfaces::msg::MicrostrainEst::_est_std_atm_model_geometric_alt_type arg)
  {
    msg_.est_std_atm_model_geometric_alt = std::move(arg);
    return Init_MicrostrainEst_est_std_atm_model_geopotential_alt(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_compensated_accel_z
{
public:
  explicit Init_MicrostrainEst_est_compensated_accel_z(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_std_atm_model_geometric_alt est_compensated_accel_z(::wamv_interfaces::msg::MicrostrainEst::_est_compensated_accel_z_type arg)
  {
    msg_.est_compensated_accel_z = std::move(arg);
    return Init_MicrostrainEst_est_std_atm_model_geometric_alt(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_compensated_accel_y
{
public:
  explicit Init_MicrostrainEst_est_compensated_accel_y(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_compensated_accel_z est_compensated_accel_y(::wamv_interfaces::msg::MicrostrainEst::_est_compensated_accel_y_type arg)
  {
    msg_.est_compensated_accel_y = std::move(arg);
    return Init_MicrostrainEst_est_compensated_accel_z(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_compensated_accel_x
{
public:
  explicit Init_MicrostrainEst_est_compensated_accel_x(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_compensated_accel_y est_compensated_accel_x(::wamv_interfaces::msg::MicrostrainEst::_est_compensated_accel_x_type arg)
  {
    msg_.est_compensated_accel_x = std::move(arg);
    return Init_MicrostrainEst_est_compensated_accel_y(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_accel_scale_factor_z_uncert
{
public:
  explicit Init_MicrostrainEst_est_accel_scale_factor_z_uncert(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_compensated_accel_x est_accel_scale_factor_z_uncert(::wamv_interfaces::msg::MicrostrainEst::_est_accel_scale_factor_z_uncert_type arg)
  {
    msg_.est_accel_scale_factor_z_uncert = std::move(arg);
    return Init_MicrostrainEst_est_compensated_accel_x(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_accel_scale_factor_y_uncert
{
public:
  explicit Init_MicrostrainEst_est_accel_scale_factor_y_uncert(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_accel_scale_factor_z_uncert est_accel_scale_factor_y_uncert(::wamv_interfaces::msg::MicrostrainEst::_est_accel_scale_factor_y_uncert_type arg)
  {
    msg_.est_accel_scale_factor_y_uncert = std::move(arg);
    return Init_MicrostrainEst_est_accel_scale_factor_z_uncert(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_accel_scale_factor_x_uncert
{
public:
  explicit Init_MicrostrainEst_est_accel_scale_factor_x_uncert(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_accel_scale_factor_y_uncert est_accel_scale_factor_x_uncert(::wamv_interfaces::msg::MicrostrainEst::_est_accel_scale_factor_x_uncert_type arg)
  {
    msg_.est_accel_scale_factor_x_uncert = std::move(arg);
    return Init_MicrostrainEst_est_accel_scale_factor_y_uncert(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_gyro_scale_factor_z_uncert
{
public:
  explicit Init_MicrostrainEst_est_gyro_scale_factor_z_uncert(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_accel_scale_factor_x_uncert est_gyro_scale_factor_z_uncert(::wamv_interfaces::msg::MicrostrainEst::_est_gyro_scale_factor_z_uncert_type arg)
  {
    msg_.est_gyro_scale_factor_z_uncert = std::move(arg);
    return Init_MicrostrainEst_est_accel_scale_factor_x_uncert(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_gyro_scale_factor_y_uncert
{
public:
  explicit Init_MicrostrainEst_est_gyro_scale_factor_y_uncert(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_gyro_scale_factor_z_uncert est_gyro_scale_factor_y_uncert(::wamv_interfaces::msg::MicrostrainEst::_est_gyro_scale_factor_y_uncert_type arg)
  {
    msg_.est_gyro_scale_factor_y_uncert = std::move(arg);
    return Init_MicrostrainEst_est_gyro_scale_factor_z_uncert(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_gyro_scale_factor_x_uncert
{
public:
  explicit Init_MicrostrainEst_est_gyro_scale_factor_x_uncert(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_gyro_scale_factor_y_uncert est_gyro_scale_factor_x_uncert(::wamv_interfaces::msg::MicrostrainEst::_est_gyro_scale_factor_x_uncert_type arg)
  {
    msg_.est_gyro_scale_factor_x_uncert = std::move(arg);
    return Init_MicrostrainEst_est_gyro_scale_factor_y_uncert(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_accel_scale_factor_z
{
public:
  explicit Init_MicrostrainEst_est_accel_scale_factor_z(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_gyro_scale_factor_x_uncert est_accel_scale_factor_z(::wamv_interfaces::msg::MicrostrainEst::_est_accel_scale_factor_z_type arg)
  {
    msg_.est_accel_scale_factor_z = std::move(arg);
    return Init_MicrostrainEst_est_gyro_scale_factor_x_uncert(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_accel_scale_factor_y
{
public:
  explicit Init_MicrostrainEst_est_accel_scale_factor_y(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_accel_scale_factor_z est_accel_scale_factor_y(::wamv_interfaces::msg::MicrostrainEst::_est_accel_scale_factor_y_type arg)
  {
    msg_.est_accel_scale_factor_y = std::move(arg);
    return Init_MicrostrainEst_est_accel_scale_factor_z(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_accel_scale_factor_x
{
public:
  explicit Init_MicrostrainEst_est_accel_scale_factor_x(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_accel_scale_factor_y est_accel_scale_factor_x(::wamv_interfaces::msg::MicrostrainEst::_est_accel_scale_factor_x_type arg)
  {
    msg_.est_accel_scale_factor_x = std::move(arg);
    return Init_MicrostrainEst_est_accel_scale_factor_y(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_gyro_scale_factor_z
{
public:
  explicit Init_MicrostrainEst_est_gyro_scale_factor_z(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_accel_scale_factor_x est_gyro_scale_factor_z(::wamv_interfaces::msg::MicrostrainEst::_est_gyro_scale_factor_z_type arg)
  {
    msg_.est_gyro_scale_factor_z = std::move(arg);
    return Init_MicrostrainEst_est_accel_scale_factor_x(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_gyro_scale_factor_y
{
public:
  explicit Init_MicrostrainEst_est_gyro_scale_factor_y(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_gyro_scale_factor_z est_gyro_scale_factor_y(::wamv_interfaces::msg::MicrostrainEst::_est_gyro_scale_factor_y_type arg)
  {
    msg_.est_gyro_scale_factor_y = std::move(arg);
    return Init_MicrostrainEst_est_gyro_scale_factor_z(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_gyro_scale_factor_x
{
public:
  explicit Init_MicrostrainEst_est_gyro_scale_factor_x(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_gyro_scale_factor_y est_gyro_scale_factor_x(::wamv_interfaces::msg::MicrostrainEst::_est_gyro_scale_factor_x_type arg)
  {
    msg_.est_gyro_scale_factor_x = std::move(arg);
    return Init_MicrostrainEst_est_gyro_scale_factor_y(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_magnetic_model_sln_declination
{
public:
  explicit Init_MicrostrainEst_est_magnetic_model_sln_declination(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_gyro_scale_factor_x est_magnetic_model_sln_declination(::wamv_interfaces::msg::MicrostrainEst::_est_magnetic_model_sln_declination_type arg)
  {
    msg_.est_magnetic_model_sln_declination = std::move(arg);
    return Init_MicrostrainEst_est_gyro_scale_factor_x(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_magnetic_model_sln_inclination
{
public:
  explicit Init_MicrostrainEst_est_magnetic_model_sln_inclination(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_magnetic_model_sln_declination est_magnetic_model_sln_inclination(::wamv_interfaces::msg::MicrostrainEst::_est_magnetic_model_sln_inclination_type arg)
  {
    msg_.est_magnetic_model_sln_inclination = std::move(arg);
    return Init_MicrostrainEst_est_magnetic_model_sln_declination(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_magnetic_model_sln_down
{
public:
  explicit Init_MicrostrainEst_est_magnetic_model_sln_down(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_magnetic_model_sln_inclination est_magnetic_model_sln_down(::wamv_interfaces::msg::MicrostrainEst::_est_magnetic_model_sln_down_type arg)
  {
    msg_.est_magnetic_model_sln_down = std::move(arg);
    return Init_MicrostrainEst_est_magnetic_model_sln_inclination(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_magnetic_model_sln_east
{
public:
  explicit Init_MicrostrainEst_est_magnetic_model_sln_east(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_magnetic_model_sln_down est_magnetic_model_sln_east(::wamv_interfaces::msg::MicrostrainEst::_est_magnetic_model_sln_east_type arg)
  {
    msg_.est_magnetic_model_sln_east = std::move(arg);
    return Init_MicrostrainEst_est_magnetic_model_sln_down(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_magnetic_model_sln_north
{
public:
  explicit Init_MicrostrainEst_est_magnetic_model_sln_north(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_magnetic_model_sln_east est_magnetic_model_sln_north(::wamv_interfaces::msg::MicrostrainEst::_est_magnetic_model_sln_north_type arg)
  {
    msg_.est_magnetic_model_sln_north = std::move(arg);
    return Init_MicrostrainEst_est_magnetic_model_sln_east(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_heading_source
{
public:
  explicit Init_MicrostrainEst_est_heading_source(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_magnetic_model_sln_north est_heading_source(::wamv_interfaces::msg::MicrostrainEst::_est_heading_source_type arg)
  {
    msg_.est_heading_source = std::move(arg);
    return Init_MicrostrainEst_est_magnetic_model_sln_north(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_heading_uncert
{
public:
  explicit Init_MicrostrainEst_est_heading_uncert(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_heading_source est_heading_uncert(::wamv_interfaces::msg::MicrostrainEst::_est_heading_uncert_type arg)
  {
    msg_.est_heading_uncert = std::move(arg);
    return Init_MicrostrainEst_est_heading_source(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_heading
{
public:
  explicit Init_MicrostrainEst_est_heading(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_heading_uncert est_heading(::wamv_interfaces::msg::MicrostrainEst::_est_heading_type arg)
  {
    msg_.est_heading = std::move(arg);
    return Init_MicrostrainEst_est_heading_uncert(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_gravity_vector_z
{
public:
  explicit Init_MicrostrainEst_est_gravity_vector_z(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_heading est_gravity_vector_z(::wamv_interfaces::msg::MicrostrainEst::_est_gravity_vector_z_type arg)
  {
    msg_.est_gravity_vector_z = std::move(arg);
    return Init_MicrostrainEst_est_heading(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_gravity_vector_y
{
public:
  explicit Init_MicrostrainEst_est_gravity_vector_y(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_gravity_vector_z est_gravity_vector_y(::wamv_interfaces::msg::MicrostrainEst::_est_gravity_vector_y_type arg)
  {
    msg_.est_gravity_vector_y = std::move(arg);
    return Init_MicrostrainEst_est_gravity_vector_z(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_gravity_vector_x
{
public:
  explicit Init_MicrostrainEst_est_gravity_vector_x(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_gravity_vector_y est_gravity_vector_x(::wamv_interfaces::msg::MicrostrainEst::_est_gravity_vector_x_type arg)
  {
    msg_.est_gravity_vector_x = std::move(arg);
    return Init_MicrostrainEst_est_gravity_vector_y(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_attitude_uncert_quaternion
{
public:
  explicit Init_MicrostrainEst_est_attitude_uncert_quaternion(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_gravity_vector_x est_attitude_uncert_quaternion(::wamv_interfaces::msg::MicrostrainEst::_est_attitude_uncert_quaternion_type arg)
  {
    msg_.est_attitude_uncert_quaternion = std::move(arg);
    return Init_MicrostrainEst_est_gravity_vector_x(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_filter_gps_time_week_num
{
public:
  explicit Init_MicrostrainEst_est_filter_gps_time_week_num(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_attitude_uncert_quaternion est_filter_gps_time_week_num(::wamv_interfaces::msg::MicrostrainEst::_est_filter_gps_time_week_num_type arg)
  {
    msg_.est_filter_gps_time_week_num = std::move(arg);
    return Init_MicrostrainEst_est_attitude_uncert_quaternion(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_filter_gps_time_tow
{
public:
  explicit Init_MicrostrainEst_est_filter_gps_time_tow(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_filter_gps_time_week_num est_filter_gps_time_tow(::wamv_interfaces::msg::MicrostrainEst::_est_filter_gps_time_tow_type arg)
  {
    msg_.est_filter_gps_time_tow = std::move(arg);
    return Init_MicrostrainEst_est_filter_gps_time_week_num(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_filter_status_flags
{
public:
  explicit Init_MicrostrainEst_est_filter_status_flags(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_filter_gps_time_tow est_filter_status_flags(::wamv_interfaces::msg::MicrostrainEst::_est_filter_status_flags_type arg)
  {
    msg_.est_filter_status_flags = std::move(arg);
    return Init_MicrostrainEst_est_filter_gps_time_tow(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_filter_dynamics_mode
{
public:
  explicit Init_MicrostrainEst_est_filter_dynamics_mode(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_filter_status_flags est_filter_dynamics_mode(::wamv_interfaces::msg::MicrostrainEst::_est_filter_dynamics_mode_type arg)
  {
    msg_.est_filter_dynamics_mode = std::move(arg);
    return Init_MicrostrainEst_est_filter_status_flags(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_filter_state
{
public:
  explicit Init_MicrostrainEst_est_filter_state(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_filter_dynamics_mode est_filter_state(::wamv_interfaces::msg::MicrostrainEst::_est_filter_state_type arg)
  {
    msg_.est_filter_state = std::move(arg);
    return Init_MicrostrainEst_est_filter_dynamics_mode(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_wgs84_local_grav_magnitude
{
public:
  explicit Init_MicrostrainEst_est_wgs84_local_grav_magnitude(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_filter_state est_wgs84_local_grav_magnitude(::wamv_interfaces::msg::MicrostrainEst::_est_wgs84_local_grav_magnitude_type arg)
  {
    msg_.est_wgs84_local_grav_magnitude = std::move(arg);
    return Init_MicrostrainEst_est_filter_state(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_angular_rate_z
{
public:
  explicit Init_MicrostrainEst_est_angular_rate_z(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_wgs84_local_grav_magnitude est_angular_rate_z(::wamv_interfaces::msg::MicrostrainEst::_est_angular_rate_z_type arg)
  {
    msg_.est_angular_rate_z = std::move(arg);
    return Init_MicrostrainEst_est_wgs84_local_grav_magnitude(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_angular_rate_y
{
public:
  explicit Init_MicrostrainEst_est_angular_rate_y(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_angular_rate_z est_angular_rate_y(::wamv_interfaces::msg::MicrostrainEst::_est_angular_rate_y_type arg)
  {
    msg_.est_angular_rate_y = std::move(arg);
    return Init_MicrostrainEst_est_angular_rate_z(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_angular_rate_x
{
public:
  explicit Init_MicrostrainEst_est_angular_rate_x(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_angular_rate_y est_angular_rate_x(::wamv_interfaces::msg::MicrostrainEst::_est_angular_rate_x_type arg)
  {
    msg_.est_angular_rate_x = std::move(arg);
    return Init_MicrostrainEst_est_angular_rate_y(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_linear_accel_z
{
public:
  explicit Init_MicrostrainEst_est_linear_accel_z(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_angular_rate_x est_linear_accel_z(::wamv_interfaces::msg::MicrostrainEst::_est_linear_accel_z_type arg)
  {
    msg_.est_linear_accel_z = std::move(arg);
    return Init_MicrostrainEst_est_angular_rate_x(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_linear_accel_y
{
public:
  explicit Init_MicrostrainEst_est_linear_accel_y(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_linear_accel_z est_linear_accel_y(::wamv_interfaces::msg::MicrostrainEst::_est_linear_accel_y_type arg)
  {
    msg_.est_linear_accel_y = std::move(arg);
    return Init_MicrostrainEst_est_linear_accel_z(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_linear_accel_x
{
public:
  explicit Init_MicrostrainEst_est_linear_accel_x(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_linear_accel_y est_linear_accel_x(::wamv_interfaces::msg::MicrostrainEst::_est_linear_accel_x_type arg)
  {
    msg_.est_linear_accel_x = std::move(arg);
    return Init_MicrostrainEst_est_linear_accel_y(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_accel_bias_z_uncert
{
public:
  explicit Init_MicrostrainEst_est_accel_bias_z_uncert(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_linear_accel_x est_accel_bias_z_uncert(::wamv_interfaces::msg::MicrostrainEst::_est_accel_bias_z_uncert_type arg)
  {
    msg_.est_accel_bias_z_uncert = std::move(arg);
    return Init_MicrostrainEst_est_linear_accel_x(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_accel_bias_y_uncert
{
public:
  explicit Init_MicrostrainEst_est_accel_bias_y_uncert(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_accel_bias_z_uncert est_accel_bias_y_uncert(::wamv_interfaces::msg::MicrostrainEst::_est_accel_bias_y_uncert_type arg)
  {
    msg_.est_accel_bias_y_uncert = std::move(arg);
    return Init_MicrostrainEst_est_accel_bias_z_uncert(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_accel_bias_x_uncert
{
public:
  explicit Init_MicrostrainEst_est_accel_bias_x_uncert(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_accel_bias_y_uncert est_accel_bias_x_uncert(::wamv_interfaces::msg::MicrostrainEst::_est_accel_bias_x_uncert_type arg)
  {
    msg_.est_accel_bias_x_uncert = std::move(arg);
    return Init_MicrostrainEst_est_accel_bias_y_uncert(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_gyro_bias_z_uncert
{
public:
  explicit Init_MicrostrainEst_est_gyro_bias_z_uncert(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_accel_bias_x_uncert est_gyro_bias_z_uncert(::wamv_interfaces::msg::MicrostrainEst::_est_gyro_bias_z_uncert_type arg)
  {
    msg_.est_gyro_bias_z_uncert = std::move(arg);
    return Init_MicrostrainEst_est_accel_bias_x_uncert(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_gyro_bias_y_uncert
{
public:
  explicit Init_MicrostrainEst_est_gyro_bias_y_uncert(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_gyro_bias_z_uncert est_gyro_bias_y_uncert(::wamv_interfaces::msg::MicrostrainEst::_est_gyro_bias_y_uncert_type arg)
  {
    msg_.est_gyro_bias_y_uncert = std::move(arg);
    return Init_MicrostrainEst_est_gyro_bias_z_uncert(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_gyro_bias_x_uncert
{
public:
  explicit Init_MicrostrainEst_est_gyro_bias_x_uncert(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_gyro_bias_y_uncert est_gyro_bias_x_uncert(::wamv_interfaces::msg::MicrostrainEst::_est_gyro_bias_x_uncert_type arg)
  {
    msg_.est_gyro_bias_x_uncert = std::move(arg);
    return Init_MicrostrainEst_est_gyro_bias_y_uncert(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_yaw_uncert
{
public:
  explicit Init_MicrostrainEst_est_yaw_uncert(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_gyro_bias_x_uncert est_yaw_uncert(::wamv_interfaces::msg::MicrostrainEst::_est_yaw_uncert_type arg)
  {
    msg_.est_yaw_uncert = std::move(arg);
    return Init_MicrostrainEst_est_gyro_bias_x_uncert(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_pitch_uncert
{
public:
  explicit Init_MicrostrainEst_est_pitch_uncert(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_yaw_uncert est_pitch_uncert(::wamv_interfaces::msg::MicrostrainEst::_est_pitch_uncert_type arg)
  {
    msg_.est_pitch_uncert = std::move(arg);
    return Init_MicrostrainEst_est_yaw_uncert(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_roll_uncert
{
public:
  explicit Init_MicrostrainEst_est_roll_uncert(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_pitch_uncert est_roll_uncert(::wamv_interfaces::msg::MicrostrainEst::_est_roll_uncert_type arg)
  {
    msg_.est_roll_uncert = std::move(arg);
    return Init_MicrostrainEst_est_pitch_uncert(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_down_velocity_uncert
{
public:
  explicit Init_MicrostrainEst_est_down_velocity_uncert(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_roll_uncert est_down_velocity_uncert(::wamv_interfaces::msg::MicrostrainEst::_est_down_velocity_uncert_type arg)
  {
    msg_.est_down_velocity_uncert = std::move(arg);
    return Init_MicrostrainEst_est_roll_uncert(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_east_velocity_uncert
{
public:
  explicit Init_MicrostrainEst_est_east_velocity_uncert(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_down_velocity_uncert est_east_velocity_uncert(::wamv_interfaces::msg::MicrostrainEst::_est_east_velocity_uncert_type arg)
  {
    msg_.est_east_velocity_uncert = std::move(arg);
    return Init_MicrostrainEst_est_down_velocity_uncert(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_north_velocity_uncert
{
public:
  explicit Init_MicrostrainEst_est_north_velocity_uncert(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_east_velocity_uncert est_north_velocity_uncert(::wamv_interfaces::msg::MicrostrainEst::_est_north_velocity_uncert_type arg)
  {
    msg_.est_north_velocity_uncert = std::move(arg);
    return Init_MicrostrainEst_est_east_velocity_uncert(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_down_position_uncert
{
public:
  explicit Init_MicrostrainEst_est_down_position_uncert(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_north_velocity_uncert est_down_position_uncert(::wamv_interfaces::msg::MicrostrainEst::_est_down_position_uncert_type arg)
  {
    msg_.est_down_position_uncert = std::move(arg);
    return Init_MicrostrainEst_est_north_velocity_uncert(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_east_position_uncert
{
public:
  explicit Init_MicrostrainEst_est_east_position_uncert(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_down_position_uncert est_east_position_uncert(::wamv_interfaces::msg::MicrostrainEst::_est_east_position_uncert_type arg)
  {
    msg_.est_east_position_uncert = std::move(arg);
    return Init_MicrostrainEst_est_down_position_uncert(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_north_position_uncert
{
public:
  explicit Init_MicrostrainEst_est_north_position_uncert(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_east_position_uncert est_north_position_uncert(::wamv_interfaces::msg::MicrostrainEst::_est_north_position_uncert_type arg)
  {
    msg_.est_north_position_uncert = std::move(arg);
    return Init_MicrostrainEst_est_east_position_uncert(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_accel_bias_z
{
public:
  explicit Init_MicrostrainEst_est_accel_bias_z(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_north_position_uncert est_accel_bias_z(::wamv_interfaces::msg::MicrostrainEst::_est_accel_bias_z_type arg)
  {
    msg_.est_accel_bias_z = std::move(arg);
    return Init_MicrostrainEst_est_north_position_uncert(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_accel_bias_y
{
public:
  explicit Init_MicrostrainEst_est_accel_bias_y(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_accel_bias_z est_accel_bias_y(::wamv_interfaces::msg::MicrostrainEst::_est_accel_bias_y_type arg)
  {
    msg_.est_accel_bias_y = std::move(arg);
    return Init_MicrostrainEst_est_accel_bias_z(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_accel_bias_x
{
public:
  explicit Init_MicrostrainEst_est_accel_bias_x(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_accel_bias_y est_accel_bias_x(::wamv_interfaces::msg::MicrostrainEst::_est_accel_bias_x_type arg)
  {
    msg_.est_accel_bias_x = std::move(arg);
    return Init_MicrostrainEst_est_accel_bias_y(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_gyro_bias_z
{
public:
  explicit Init_MicrostrainEst_est_gyro_bias_z(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_accel_bias_x est_gyro_bias_z(::wamv_interfaces::msg::MicrostrainEst::_est_gyro_bias_z_type arg)
  {
    msg_.est_gyro_bias_z = std::move(arg);
    return Init_MicrostrainEst_est_accel_bias_x(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_gyro_bias_y
{
public:
  explicit Init_MicrostrainEst_est_gyro_bias_y(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_gyro_bias_z est_gyro_bias_y(::wamv_interfaces::msg::MicrostrainEst::_est_gyro_bias_y_type arg)
  {
    msg_.est_gyro_bias_y = std::move(arg);
    return Init_MicrostrainEst_est_gyro_bias_z(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_gyro_bias_x
{
public:
  explicit Init_MicrostrainEst_est_gyro_bias_x(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_gyro_bias_y est_gyro_bias_x(::wamv_interfaces::msg::MicrostrainEst::_est_gyro_bias_x_type arg)
  {
    msg_.est_gyro_bias_x = std::move(arg);
    return Init_MicrostrainEst_est_gyro_bias_y(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_yaw
{
public:
  explicit Init_MicrostrainEst_est_yaw(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_gyro_bias_x est_yaw(::wamv_interfaces::msg::MicrostrainEst::_est_yaw_type arg)
  {
    msg_.est_yaw = std::move(arg);
    return Init_MicrostrainEst_est_gyro_bias_x(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_pitch
{
public:
  explicit Init_MicrostrainEst_est_pitch(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_yaw est_pitch(::wamv_interfaces::msg::MicrostrainEst::_est_pitch_type arg)
  {
    msg_.est_pitch = std::move(arg);
    return Init_MicrostrainEst_est_yaw(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_roll
{
public:
  explicit Init_MicrostrainEst_est_roll(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_pitch est_roll(::wamv_interfaces::msg::MicrostrainEst::_est_roll_type arg)
  {
    msg_.est_roll = std::move(arg);
    return Init_MicrostrainEst_est_pitch(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_orient_matrix
{
public:
  explicit Init_MicrostrainEst_est_orient_matrix(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_roll est_orient_matrix(::wamv_interfaces::msg::MicrostrainEst::_est_orient_matrix_type arg)
  {
    msg_.est_orient_matrix = std::move(arg);
    return Init_MicrostrainEst_est_roll(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_orient_quaternion
{
public:
  explicit Init_MicrostrainEst_est_orient_quaternion(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_orient_matrix est_orient_quaternion(::wamv_interfaces::msg::MicrostrainEst::_est_orient_quaternion_type arg)
  {
    msg_.est_orient_quaternion = std::move(arg);
    return Init_MicrostrainEst_est_orient_matrix(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_down_velocity
{
public:
  explicit Init_MicrostrainEst_est_down_velocity(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_orient_quaternion est_down_velocity(::wamv_interfaces::msg::MicrostrainEst::_est_down_velocity_type arg)
  {
    msg_.est_down_velocity = std::move(arg);
    return Init_MicrostrainEst_est_orient_quaternion(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_east_velocity
{
public:
  explicit Init_MicrostrainEst_est_east_velocity(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_down_velocity est_east_velocity(::wamv_interfaces::msg::MicrostrainEst::_est_east_velocity_type arg)
  {
    msg_.est_east_velocity = std::move(arg);
    return Init_MicrostrainEst_est_down_velocity(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_north_velocity
{
public:
  explicit Init_MicrostrainEst_est_north_velocity(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_east_velocity est_north_velocity(::wamv_interfaces::msg::MicrostrainEst::_est_north_velocity_type arg)
  {
    msg_.est_north_velocity = std::move(arg);
    return Init_MicrostrainEst_est_east_velocity(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_height_above_ellipsoid
{
public:
  explicit Init_MicrostrainEst_est_height_above_ellipsoid(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_north_velocity est_height_above_ellipsoid(::wamv_interfaces::msg::MicrostrainEst::_est_height_above_ellipsoid_type arg)
  {
    msg_.est_height_above_ellipsoid = std::move(arg);
    return Init_MicrostrainEst_est_north_velocity(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_longitude
{
public:
  explicit Init_MicrostrainEst_est_longitude(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_height_above_ellipsoid est_longitude(::wamv_interfaces::msg::MicrostrainEst::_est_longitude_type arg)
  {
    msg_.est_longitude = std::move(arg);
    return Init_MicrostrainEst_est_height_above_ellipsoid(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_est_latitude
{
public:
  explicit Init_MicrostrainEst_est_latitude(::wamv_interfaces::msg::MicrostrainEst & msg)
  : msg_(msg)
  {}
  Init_MicrostrainEst_est_longitude est_latitude(::wamv_interfaces::msg::MicrostrainEst::_est_latitude_type arg)
  {
    msg_.est_latitude = std::move(arg);
    return Init_MicrostrainEst_est_longitude(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

class Init_MicrostrainEst_timestamp
{
public:
  Init_MicrostrainEst_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MicrostrainEst_est_latitude timestamp(::wamv_interfaces::msg::MicrostrainEst::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_MicrostrainEst_est_latitude(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainEst msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wamv_interfaces::msg::MicrostrainEst>()
{
  return wamv_interfaces::msg::builder::Init_MicrostrainEst_timestamp();
}

}  // namespace wamv_interfaces

#endif  // WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_EST__BUILDER_HPP_
