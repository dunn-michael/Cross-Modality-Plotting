// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wamv_interfaces:msg/BlueprintOculusSonarPing.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_PING__BUILDER_HPP_
#define WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_PING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_ping__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wamv_interfaces
{

namespace msg
{

namespace builder
{

class Init_BlueprintOculusSonarPing_image_msg
{
public:
  explicit Init_BlueprintOculusSonarPing_image_msg(::wamv_interfaces::msg::BlueprintOculusSonarPing & msg)
  : msg_(msg)
  {}
  ::wamv_interfaces::msg::BlueprintOculusSonarPing image_msg(::wamv_interfaces::msg::BlueprintOculusSonarPing::_image_msg_type arg)
  {
    msg_.image_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarPing msg_;
};

class Init_BlueprintOculusSonarPing_fire_msg
{
public:
  explicit Init_BlueprintOculusSonarPing_fire_msg(::wamv_interfaces::msg::BlueprintOculusSonarPing & msg)
  : msg_(msg)
  {}
  Init_BlueprintOculusSonarPing_image_msg fire_msg(::wamv_interfaces::msg::BlueprintOculusSonarPing::_fire_msg_type arg)
  {
    msg_.fire_msg = std::move(arg);
    return Init_BlueprintOculusSonarPing_image_msg(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarPing msg_;
};

class Init_BlueprintOculusSonarPing_range_resolution
{
public:
  explicit Init_BlueprintOculusSonarPing_range_resolution(::wamv_interfaces::msg::BlueprintOculusSonarPing & msg)
  : msg_(msg)
  {}
  Init_BlueprintOculusSonarPing_fire_msg range_resolution(::wamv_interfaces::msg::BlueprintOculusSonarPing::_range_resolution_type arg)
  {
    msg_.range_resolution = std::move(arg);
    return Init_BlueprintOculusSonarPing_fire_msg(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarPing msg_;
};

class Init_BlueprintOculusSonarPing_bearings
{
public:
  explicit Init_BlueprintOculusSonarPing_bearings(::wamv_interfaces::msg::BlueprintOculusSonarPing & msg)
  : msg_(msg)
  {}
  Init_BlueprintOculusSonarPing_range_resolution bearings(::wamv_interfaces::msg::BlueprintOculusSonarPing::_bearings_type arg)
  {
    msg_.bearings = std::move(arg);
    return Init_BlueprintOculusSonarPing_range_resolution(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarPing msg_;
};

class Init_BlueprintOculusSonarPing_num_beams
{
public:
  explicit Init_BlueprintOculusSonarPing_num_beams(::wamv_interfaces::msg::BlueprintOculusSonarPing & msg)
  : msg_(msg)
  {}
  Init_BlueprintOculusSonarPing_bearings num_beams(::wamv_interfaces::msg::BlueprintOculusSonarPing::_num_beams_type arg)
  {
    msg_.num_beams = std::move(arg);
    return Init_BlueprintOculusSonarPing_bearings(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarPing msg_;
};

class Init_BlueprintOculusSonarPing_num_ranges
{
public:
  explicit Init_BlueprintOculusSonarPing_num_ranges(::wamv_interfaces::msg::BlueprintOculusSonarPing & msg)
  : msg_(msg)
  {}
  Init_BlueprintOculusSonarPing_num_beams num_ranges(::wamv_interfaces::msg::BlueprintOculusSonarPing::_num_ranges_type arg)
  {
    msg_.num_ranges = std::move(arg);
    return Init_BlueprintOculusSonarPing_num_beams(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarPing msg_;
};

class Init_BlueprintOculusSonarPing_start_time
{
public:
  explicit Init_BlueprintOculusSonarPing_start_time(::wamv_interfaces::msg::BlueprintOculusSonarPing & msg)
  : msg_(msg)
  {}
  Init_BlueprintOculusSonarPing_num_ranges start_time(::wamv_interfaces::msg::BlueprintOculusSonarPing::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_BlueprintOculusSonarPing_num_ranges(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarPing msg_;
};

class Init_BlueprintOculusSonarPing_part_number
{
public:
  explicit Init_BlueprintOculusSonarPing_part_number(::wamv_interfaces::msg::BlueprintOculusSonarPing & msg)
  : msg_(msg)
  {}
  Init_BlueprintOculusSonarPing_start_time part_number(::wamv_interfaces::msg::BlueprintOculusSonarPing::_part_number_type arg)
  {
    msg_.part_number = std::move(arg);
    return Init_BlueprintOculusSonarPing_start_time(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarPing msg_;
};

class Init_BlueprintOculusSonarPing_ping_id
{
public:
  explicit Init_BlueprintOculusSonarPing_ping_id(::wamv_interfaces::msg::BlueprintOculusSonarPing & msg)
  : msg_(msg)
  {}
  Init_BlueprintOculusSonarPing_part_number ping_id(::wamv_interfaces::msg::BlueprintOculusSonarPing::_ping_id_type arg)
  {
    msg_.ping_id = std::move(arg);
    return Init_BlueprintOculusSonarPing_part_number(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarPing msg_;
};

class Init_BlueprintOculusSonarPing_timestamp
{
public:
  Init_BlueprintOculusSonarPing_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BlueprintOculusSonarPing_ping_id timestamp(::wamv_interfaces::msg::BlueprintOculusSonarPing::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_BlueprintOculusSonarPing_ping_id(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarPing msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wamv_interfaces::msg::BlueprintOculusSonarPing>()
{
  return wamv_interfaces::msg::builder::Init_BlueprintOculusSonarPing_timestamp();
}

}  // namespace wamv_interfaces

#endif  // WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_PING__BUILDER_HPP_
