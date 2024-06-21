// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wamv_interfaces:msg/BlueprintOculusSonarFire.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_FIRE__TRAITS_HPP_
#define WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_FIRE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_fire__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wamv_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const BlueprintOculusSonarFire & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: gamma
  {
    out << "gamma: ";
    rosidl_generator_traits::value_to_yaml(msg.gamma, out);
    out << ", ";
  }

  // member: flags
  {
    out << "flags: ";
    rosidl_generator_traits::value_to_yaml(msg.flags, out);
    out << ", ";
  }

  // member: ping_rate
  {
    out << "ping_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.ping_rate, out);
    out << ", ";
  }

  // member: range
  {
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << ", ";
  }

  // member: gain
  {
    out << "gain: ";
    rosidl_generator_traits::value_to_yaml(msg.gain, out);
    out << ", ";
  }

  // member: speed_of_sound
  {
    out << "speed_of_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_of_sound, out);
    out << ", ";
  }

  // member: salinity
  {
    out << "salinity: ";
    rosidl_generator_traits::value_to_yaml(msg.salinity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BlueprintOculusSonarFire & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: gamma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gamma: ";
    rosidl_generator_traits::value_to_yaml(msg.gamma, out);
    out << "\n";
  }

  // member: flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flags: ";
    rosidl_generator_traits::value_to_yaml(msg.flags, out);
    out << "\n";
  }

  // member: ping_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ping_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.ping_rate, out);
    out << "\n";
  }

  // member: range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << "\n";
  }

  // member: gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gain: ";
    rosidl_generator_traits::value_to_yaml(msg.gain, out);
    out << "\n";
  }

  // member: speed_of_sound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_of_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_of_sound, out);
    out << "\n";
  }

  // member: salinity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "salinity: ";
    rosidl_generator_traits::value_to_yaml(msg.salinity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BlueprintOculusSonarFire & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace wamv_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use wamv_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wamv_interfaces::msg::BlueprintOculusSonarFire & msg,
  std::ostream & out, size_t indentation = 0)
{
  wamv_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wamv_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const wamv_interfaces::msg::BlueprintOculusSonarFire & msg)
{
  return wamv_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wamv_interfaces::msg::BlueprintOculusSonarFire>()
{
  return "wamv_interfaces::msg::BlueprintOculusSonarFire";
}

template<>
inline const char * name<wamv_interfaces::msg::BlueprintOculusSonarFire>()
{
  return "wamv_interfaces/msg/BlueprintOculusSonarFire";
}

template<>
struct has_fixed_size<wamv_interfaces::msg::BlueprintOculusSonarFire>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wamv_interfaces::msg::BlueprintOculusSonarFire>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wamv_interfaces::msg::BlueprintOculusSonarFire>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_FIRE__TRAITS_HPP_
