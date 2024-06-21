// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wamv_interfaces:msg/BlueprintOculusSonarFire.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_FIRE__BUILDER_HPP_
#define WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_FIRE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_fire__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wamv_interfaces
{

namespace msg
{

namespace builder
{

class Init_BlueprintOculusSonarFire_salinity
{
public:
  explicit Init_BlueprintOculusSonarFire_salinity(::wamv_interfaces::msg::BlueprintOculusSonarFire & msg)
  : msg_(msg)
  {}
  ::wamv_interfaces::msg::BlueprintOculusSonarFire salinity(::wamv_interfaces::msg::BlueprintOculusSonarFire::_salinity_type arg)
  {
    msg_.salinity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarFire msg_;
};

class Init_BlueprintOculusSonarFire_speed_of_sound
{
public:
  explicit Init_BlueprintOculusSonarFire_speed_of_sound(::wamv_interfaces::msg::BlueprintOculusSonarFire & msg)
  : msg_(msg)
  {}
  Init_BlueprintOculusSonarFire_salinity speed_of_sound(::wamv_interfaces::msg::BlueprintOculusSonarFire::_speed_of_sound_type arg)
  {
    msg_.speed_of_sound = std::move(arg);
    return Init_BlueprintOculusSonarFire_salinity(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarFire msg_;
};

class Init_BlueprintOculusSonarFire_gain
{
public:
  explicit Init_BlueprintOculusSonarFire_gain(::wamv_interfaces::msg::BlueprintOculusSonarFire & msg)
  : msg_(msg)
  {}
  Init_BlueprintOculusSonarFire_speed_of_sound gain(::wamv_interfaces::msg::BlueprintOculusSonarFire::_gain_type arg)
  {
    msg_.gain = std::move(arg);
    return Init_BlueprintOculusSonarFire_speed_of_sound(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarFire msg_;
};

class Init_BlueprintOculusSonarFire_range
{
public:
  explicit Init_BlueprintOculusSonarFire_range(::wamv_interfaces::msg::BlueprintOculusSonarFire & msg)
  : msg_(msg)
  {}
  Init_BlueprintOculusSonarFire_gain range(::wamv_interfaces::msg::BlueprintOculusSonarFire::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_BlueprintOculusSonarFire_gain(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarFire msg_;
};

class Init_BlueprintOculusSonarFire_ping_rate
{
public:
  explicit Init_BlueprintOculusSonarFire_ping_rate(::wamv_interfaces::msg::BlueprintOculusSonarFire & msg)
  : msg_(msg)
  {}
  Init_BlueprintOculusSonarFire_range ping_rate(::wamv_interfaces::msg::BlueprintOculusSonarFire::_ping_rate_type arg)
  {
    msg_.ping_rate = std::move(arg);
    return Init_BlueprintOculusSonarFire_range(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarFire msg_;
};

class Init_BlueprintOculusSonarFire_flags
{
public:
  explicit Init_BlueprintOculusSonarFire_flags(::wamv_interfaces::msg::BlueprintOculusSonarFire & msg)
  : msg_(msg)
  {}
  Init_BlueprintOculusSonarFire_ping_rate flags(::wamv_interfaces::msg::BlueprintOculusSonarFire::_flags_type arg)
  {
    msg_.flags = std::move(arg);
    return Init_BlueprintOculusSonarFire_ping_rate(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarFire msg_;
};

class Init_BlueprintOculusSonarFire_gamma
{
public:
  explicit Init_BlueprintOculusSonarFire_gamma(::wamv_interfaces::msg::BlueprintOculusSonarFire & msg)
  : msg_(msg)
  {}
  Init_BlueprintOculusSonarFire_flags gamma(::wamv_interfaces::msg::BlueprintOculusSonarFire::_gamma_type arg)
  {
    msg_.gamma = std::move(arg);
    return Init_BlueprintOculusSonarFire_flags(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarFire msg_;
};

class Init_BlueprintOculusSonarFire_mode
{
public:
  explicit Init_BlueprintOculusSonarFire_mode(::wamv_interfaces::msg::BlueprintOculusSonarFire & msg)
  : msg_(msg)
  {}
  Init_BlueprintOculusSonarFire_gamma mode(::wamv_interfaces::msg::BlueprintOculusSonarFire::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_BlueprintOculusSonarFire_gamma(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarFire msg_;
};

class Init_BlueprintOculusSonarFire_timestamp
{
public:
  Init_BlueprintOculusSonarFire_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BlueprintOculusSonarFire_mode timestamp(::wamv_interfaces::msg::BlueprintOculusSonarFire::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_BlueprintOculusSonarFire_mode(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarFire msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wamv_interfaces::msg::BlueprintOculusSonarFire>()
{
  return wamv_interfaces::msg::builder::Init_BlueprintOculusSonarFire_timestamp();
}

}  // namespace wamv_interfaces

#endif  // WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_FIRE__BUILDER_HPP_
