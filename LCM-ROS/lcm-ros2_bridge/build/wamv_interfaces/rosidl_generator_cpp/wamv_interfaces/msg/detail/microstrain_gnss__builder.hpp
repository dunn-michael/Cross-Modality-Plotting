// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wamv_interfaces:msg/MicrostrainGnss.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_GNSS__BUILDER_HPP_
#define WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_GNSS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wamv_interfaces/msg/detail/microstrain_gnss__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wamv_interfaces
{

namespace msg
{

namespace builder
{

class Init_MicrostrainGnss_dgnss_num_channels_gnss_base_0
{
public:
  explicit Init_MicrostrainGnss_dgnss_num_channels_gnss_base_0(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  ::wamv_interfaces::msg::MicrostrainGnss dgnss_num_channels_gnss_base_0(::wamv_interfaces::msg::MicrostrainGnss::_dgnss_num_channels_gnss_base_0_type arg)
  {
    msg_.dgnss_num_channels_gnss_base_0 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_dgnss_base_station_status_gnss_base_0
{
public:
  explicit Init_MicrostrainGnss_dgnss_base_station_status_gnss_base_0(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_dgnss_num_channels_gnss_base_0 dgnss_base_station_status_gnss_base_0(::wamv_interfaces::msg::MicrostrainGnss::_dgnss_base_station_status_gnss_base_0_type arg)
  {
    msg_.dgnss_base_station_status_gnss_base_0 = std::move(arg);
    return Init_MicrostrainGnss_dgnss_num_channels_gnss_base_0(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_dgnss_newest_age_gnss_base_0
{
public:
  explicit Init_MicrostrainGnss_dgnss_newest_age_gnss_base_0(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_dgnss_base_station_status_gnss_base_0 dgnss_newest_age_gnss_base_0(::wamv_interfaces::msg::MicrostrainGnss::_dgnss_newest_age_gnss_base_0_type arg)
  {
    msg_.dgnss_newest_age_gnss_base_0 = std::move(arg);
    return Init_MicrostrainGnss_dgnss_base_station_status_gnss_base_0(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_antenna_power
{
public:
  explicit Init_MicrostrainGnss_antenna_power(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_dgnss_newest_age_gnss_base_0 antenna_power(::wamv_interfaces::msg::MicrostrainGnss::_antenna_power_type arg)
  {
    msg_.antenna_power = std::move(arg);
    return Init_MicrostrainGnss_dgnss_newest_age_gnss_base_0(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_antenna_state
{
public:
  explicit Init_MicrostrainGnss_antenna_state(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_antenna_power antenna_state(::wamv_interfaces::msg::MicrostrainGnss::_antenna_state_type arg)
  {
    msg_.antenna_state = std::move(arg);
    return Init_MicrostrainGnss_antenna_power(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_sensor_state
{
public:
  explicit Init_MicrostrainGnss_sensor_state(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_antenna_state sensor_state(::wamv_interfaces::msg::MicrostrainGnss::_sensor_state_type arg)
  {
    msg_.sensor_state = std::move(arg);
    return Init_MicrostrainGnss_antenna_state(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_gnss_fix_flags
{
public:
  explicit Init_MicrostrainGnss_gnss_fix_flags(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_sensor_state gnss_fix_flags(::wamv_interfaces::msg::MicrostrainGnss::_gnss_fix_flags_type arg)
  {
    msg_.gnss_fix_flags = std::move(arg);
    return Init_MicrostrainGnss_sensor_state(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_gnss_fix_sv_count
{
public:
  explicit Init_MicrostrainGnss_gnss_fix_sv_count(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_gnss_fix_flags gnss_fix_sv_count(::wamv_interfaces::msg::MicrostrainGnss::_gnss_fix_sv_count_type arg)
  {
    msg_.gnss_fix_sv_count = std::move(arg);
    return Init_MicrostrainGnss_gnss_fix_flags(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_gnss_fix_type
{
public:
  explicit Init_MicrostrainGnss_gnss_fix_type(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_gnss_fix_sv_count gnss_fix_type(::wamv_interfaces::msg::MicrostrainGnss::_gnss_fix_type_type arg)
  {
    msg_.gnss_fix_type = std::move(arg);
    return Init_MicrostrainGnss_gnss_fix_sv_count(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_gps_clock_accuracy
{
public:
  explicit Init_MicrostrainGnss_gps_clock_accuracy(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_gnss_fix_type gps_clock_accuracy(::wamv_interfaces::msg::MicrostrainGnss::_gps_clock_accuracy_type arg)
  {
    msg_.gps_clock_accuracy = std::move(arg);
    return Init_MicrostrainGnss_gnss_fix_type(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_gps_clock_drift
{
public:
  explicit Init_MicrostrainGnss_gps_clock_drift(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_gps_clock_accuracy gps_clock_drift(::wamv_interfaces::msg::MicrostrainGnss::_gps_clock_drift_type arg)
  {
    msg_.gps_clock_drift = std::move(arg);
    return Init_MicrostrainGnss_gps_clock_accuracy(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_gps_clock_bias
{
public:
  explicit Init_MicrostrainGnss_gps_clock_bias(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_gps_clock_drift gps_clock_bias(::wamv_interfaces::msg::MicrostrainGnss::_gps_clock_bias_type arg)
  {
    msg_.gps_clock_bias = std::move(arg);
    return Init_MicrostrainGnss_gps_clock_drift(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_gps_time_week_num
{
public:
  explicit Init_MicrostrainGnss_gps_time_week_num(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_gps_clock_bias gps_time_week_num(::wamv_interfaces::msg::MicrostrainGnss::_gps_time_week_num_type arg)
  {
    msg_.gps_time_week_num = std::move(arg);
    return Init_MicrostrainGnss_gps_clock_bias(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_gps_time_tow
{
public:
  explicit Init_MicrostrainGnss_gps_time_tow(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_gps_time_week_num gps_time_tow(::wamv_interfaces::msg::MicrostrainGnss::_gps_time_tow_type arg)
  {
    msg_.gps_time_tow = std::move(arg);
    return Init_MicrostrainGnss_gps_time_week_num(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_utc_timestamp_flags
{
public:
  explicit Init_MicrostrainGnss_utc_timestamp_flags(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_gps_time_tow utc_timestamp_flags(::wamv_interfaces::msg::MicrostrainGnss::_utc_timestamp_flags_type arg)
  {
    msg_.utc_timestamp_flags = std::move(arg);
    return Init_MicrostrainGnss_gps_time_tow(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_utc_timestamp
{
public:
  explicit Init_MicrostrainGnss_utc_timestamp(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_utc_timestamp_flags utc_timestamp(::wamv_interfaces::msg::MicrostrainGnss::_utc_timestamp_type arg)
  {
    msg_.utc_timestamp = std::move(arg);
    return Init_MicrostrainGnss_utc_timestamp_flags(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_easting_dop
{
public:
  explicit Init_MicrostrainGnss_easting_dop(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_utc_timestamp easting_dop(::wamv_interfaces::msg::MicrostrainGnss::_easting_dop_type arg)
  {
    msg_.easting_dop = std::move(arg);
    return Init_MicrostrainGnss_utc_timestamp(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_northing_dop
{
public:
  explicit Init_MicrostrainGnss_northing_dop(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_easting_dop northing_dop(::wamv_interfaces::msg::MicrostrainGnss::_northing_dop_type arg)
  {
    msg_.northing_dop = std::move(arg);
    return Init_MicrostrainGnss_easting_dop(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_time_dop
{
public:
  explicit Init_MicrostrainGnss_time_dop(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_northing_dop time_dop(::wamv_interfaces::msg::MicrostrainGnss::_time_dop_type arg)
  {
    msg_.time_dop = std::move(arg);
    return Init_MicrostrainGnss_northing_dop(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_vertical_dop
{
public:
  explicit Init_MicrostrainGnss_vertical_dop(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_time_dop vertical_dop(::wamv_interfaces::msg::MicrostrainGnss::_vertical_dop_type arg)
  {
    msg_.vertical_dop = std::move(arg);
    return Init_MicrostrainGnss_time_dop(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_horizontal_dop
{
public:
  explicit Init_MicrostrainGnss_horizontal_dop(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_vertical_dop horizontal_dop(::wamv_interfaces::msg::MicrostrainGnss::_horizontal_dop_type arg)
  {
    msg_.horizontal_dop = std::move(arg);
    return Init_MicrostrainGnss_vertical_dop(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_position_dop
{
public:
  explicit Init_MicrostrainGnss_position_dop(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_horizontal_dop position_dop(::wamv_interfaces::msg::MicrostrainGnss::_position_dop_type arg)
  {
    msg_.position_dop = std::move(arg);
    return Init_MicrostrainGnss_horizontal_dop(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_geometric_dop
{
public:
  explicit Init_MicrostrainGnss_geometric_dop(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_position_dop geometric_dop(::wamv_interfaces::msg::MicrostrainGnss::_geometric_dop_type arg)
  {
    msg_.geometric_dop = std::move(arg);
    return Init_MicrostrainGnss_position_dop(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_ecef_vel_accuracy
{
public:
  explicit Init_MicrostrainGnss_ecef_vel_accuracy(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_geometric_dop ecef_vel_accuracy(::wamv_interfaces::msg::MicrostrainGnss::_ecef_vel_accuracy_type arg)
  {
    msg_.ecef_vel_accuracy = std::move(arg);
    return Init_MicrostrainGnss_geometric_dop(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_ecef_vel_z
{
public:
  explicit Init_MicrostrainGnss_ecef_vel_z(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_ecef_vel_accuracy ecef_vel_z(::wamv_interfaces::msg::MicrostrainGnss::_ecef_vel_z_type arg)
  {
    msg_.ecef_vel_z = std::move(arg);
    return Init_MicrostrainGnss_ecef_vel_accuracy(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_ecef_vel_y
{
public:
  explicit Init_MicrostrainGnss_ecef_vel_y(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_ecef_vel_z ecef_vel_y(::wamv_interfaces::msg::MicrostrainGnss::_ecef_vel_y_type arg)
  {
    msg_.ecef_vel_y = std::move(arg);
    return Init_MicrostrainGnss_ecef_vel_z(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_ecef_vel_x
{
public:
  explicit Init_MicrostrainGnss_ecef_vel_x(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_ecef_vel_y ecef_vel_x(::wamv_interfaces::msg::MicrostrainGnss::_ecef_vel_x_type arg)
  {
    msg_.ecef_vel_x = std::move(arg);
    return Init_MicrostrainGnss_ecef_vel_y(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_heading_accuracy
{
public:
  explicit Init_MicrostrainGnss_heading_accuracy(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_ecef_vel_x heading_accuracy(::wamv_interfaces::msg::MicrostrainGnss::_heading_accuracy_type arg)
  {
    msg_.heading_accuracy = std::move(arg);
    return Init_MicrostrainGnss_ecef_vel_x(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_speed_accuracy
{
public:
  explicit Init_MicrostrainGnss_speed_accuracy(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_heading_accuracy speed_accuracy(::wamv_interfaces::msg::MicrostrainGnss::_speed_accuracy_type arg)
  {
    msg_.speed_accuracy = std::move(arg);
    return Init_MicrostrainGnss_heading_accuracy(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_heading
{
public:
  explicit Init_MicrostrainGnss_heading(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_speed_accuracy heading(::wamv_interfaces::msg::MicrostrainGnss::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_MicrostrainGnss_speed_accuracy(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_ground_speed
{
public:
  explicit Init_MicrostrainGnss_ground_speed(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_heading ground_speed(::wamv_interfaces::msg::MicrostrainGnss::_ground_speed_type arg)
  {
    msg_.ground_speed = std::move(arg);
    return Init_MicrostrainGnss_heading(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_speed
{
public:
  explicit Init_MicrostrainGnss_speed(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_ground_speed speed(::wamv_interfaces::msg::MicrostrainGnss::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_MicrostrainGnss_ground_speed(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_down_velocity
{
public:
  explicit Init_MicrostrainGnss_down_velocity(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_speed down_velocity(::wamv_interfaces::msg::MicrostrainGnss::_down_velocity_type arg)
  {
    msg_.down_velocity = std::move(arg);
    return Init_MicrostrainGnss_speed(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_east_velocity
{
public:
  explicit Init_MicrostrainGnss_east_velocity(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_down_velocity east_velocity(::wamv_interfaces::msg::MicrostrainGnss::_east_velocity_type arg)
  {
    msg_.east_velocity = std::move(arg);
    return Init_MicrostrainGnss_down_velocity(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_north_velocity
{
public:
  explicit Init_MicrostrainGnss_north_velocity(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_east_velocity north_velocity(::wamv_interfaces::msg::MicrostrainGnss::_north_velocity_type arg)
  {
    msg_.north_velocity = std::move(arg);
    return Init_MicrostrainGnss_east_velocity(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_ecef_pos_accuracy
{
public:
  explicit Init_MicrostrainGnss_ecef_pos_accuracy(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_north_velocity ecef_pos_accuracy(::wamv_interfaces::msg::MicrostrainGnss::_ecef_pos_accuracy_type arg)
  {
    msg_.ecef_pos_accuracy = std::move(arg);
    return Init_MicrostrainGnss_north_velocity(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_ecef_pos_z
{
public:
  explicit Init_MicrostrainGnss_ecef_pos_z(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_ecef_pos_accuracy ecef_pos_z(::wamv_interfaces::msg::MicrostrainGnss::_ecef_pos_z_type arg)
  {
    msg_.ecef_pos_z = std::move(arg);
    return Init_MicrostrainGnss_ecef_pos_accuracy(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_ecef_pos_y
{
public:
  explicit Init_MicrostrainGnss_ecef_pos_y(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_ecef_pos_z ecef_pos_y(::wamv_interfaces::msg::MicrostrainGnss::_ecef_pos_y_type arg)
  {
    msg_.ecef_pos_y = std::move(arg);
    return Init_MicrostrainGnss_ecef_pos_z(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_ecef_pos_x
{
public:
  explicit Init_MicrostrainGnss_ecef_pos_x(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_ecef_pos_y ecef_pos_x(::wamv_interfaces::msg::MicrostrainGnss::_ecef_pos_x_type arg)
  {
    msg_.ecef_pos_x = std::move(arg);
    return Init_MicrostrainGnss_ecef_pos_y(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_vertical_accuracy
{
public:
  explicit Init_MicrostrainGnss_vertical_accuracy(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_ecef_pos_x vertical_accuracy(::wamv_interfaces::msg::MicrostrainGnss::_vertical_accuracy_type arg)
  {
    msg_.vertical_accuracy = std::move(arg);
    return Init_MicrostrainGnss_ecef_pos_x(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_horizontal_accuracy
{
public:
  explicit Init_MicrostrainGnss_horizontal_accuracy(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_vertical_accuracy horizontal_accuracy(::wamv_interfaces::msg::MicrostrainGnss::_horizontal_accuracy_type arg)
  {
    msg_.horizontal_accuracy = std::move(arg);
    return Init_MicrostrainGnss_vertical_accuracy(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_height_above_msl
{
public:
  explicit Init_MicrostrainGnss_height_above_msl(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_horizontal_accuracy height_above_msl(::wamv_interfaces::msg::MicrostrainGnss::_height_above_msl_type arg)
  {
    msg_.height_above_msl = std::move(arg);
    return Init_MicrostrainGnss_horizontal_accuracy(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_height_above_elipsoid
{
public:
  explicit Init_MicrostrainGnss_height_above_elipsoid(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_height_above_msl height_above_elipsoid(::wamv_interfaces::msg::MicrostrainGnss::_height_above_elipsoid_type arg)
  {
    msg_.height_above_elipsoid = std::move(arg);
    return Init_MicrostrainGnss_height_above_msl(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_longitude
{
public:
  explicit Init_MicrostrainGnss_longitude(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_height_above_elipsoid longitude(::wamv_interfaces::msg::MicrostrainGnss::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_MicrostrainGnss_height_above_elipsoid(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_latitude
{
public:
  explicit Init_MicrostrainGnss_latitude(::wamv_interfaces::msg::MicrostrainGnss & msg)
  : msg_(msg)
  {}
  Init_MicrostrainGnss_longitude latitude(::wamv_interfaces::msg::MicrostrainGnss::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_MicrostrainGnss_longitude(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

class Init_MicrostrainGnss_timestamp
{
public:
  Init_MicrostrainGnss_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MicrostrainGnss_latitude timestamp(::wamv_interfaces::msg::MicrostrainGnss::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_MicrostrainGnss_latitude(msg_);
  }

private:
  ::wamv_interfaces::msg::MicrostrainGnss msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wamv_interfaces::msg::MicrostrainGnss>()
{
  return wamv_interfaces::msg::builder::Init_MicrostrainGnss_timestamp();
}

}  // namespace wamv_interfaces

#endif  // WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_GNSS__BUILDER_HPP_
