// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wamv_interfaces:msg/BlueprintOculusSonarPing.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_PING__TRAITS_HPP_
#define WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_PING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_ping__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'fire_msg'
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_fire__traits.hpp"
// Member 'image_msg'
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_image__traits.hpp"

namespace wamv_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const BlueprintOculusSonarPing & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: ping_id
  {
    out << "ping_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ping_id, out);
    out << ", ";
  }

  // member: part_number
  {
    out << "part_number: ";
    rosidl_generator_traits::value_to_yaml(msg.part_number, out);
    out << ", ";
  }

  // member: start_time
  {
    out << "start_time: ";
    rosidl_generator_traits::value_to_yaml(msg.start_time, out);
    out << ", ";
  }

  // member: num_ranges
  {
    out << "num_ranges: ";
    rosidl_generator_traits::value_to_yaml(msg.num_ranges, out);
    out << ", ";
  }

  // member: num_beams
  {
    out << "num_beams: ";
    rosidl_generator_traits::value_to_yaml(msg.num_beams, out);
    out << ", ";
  }

  // member: bearings
  {
    if (msg.bearings.size() == 0) {
      out << "bearings: []";
    } else {
      out << "bearings: [";
      size_t pending_items = msg.bearings.size();
      for (auto item : msg.bearings) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: range_resolution
  {
    out << "range_resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.range_resolution, out);
    out << ", ";
  }

  // member: fire_msg
  {
    out << "fire_msg: ";
    to_flow_style_yaml(msg.fire_msg, out);
    out << ", ";
  }

  // member: image_msg
  {
    out << "image_msg: ";
    to_flow_style_yaml(msg.image_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BlueprintOculusSonarPing & msg,
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

  // member: ping_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ping_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ping_id, out);
    out << "\n";
  }

  // member: part_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "part_number: ";
    rosidl_generator_traits::value_to_yaml(msg.part_number, out);
    out << "\n";
  }

  // member: start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_time: ";
    rosidl_generator_traits::value_to_yaml(msg.start_time, out);
    out << "\n";
  }

  // member: num_ranges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_ranges: ";
    rosidl_generator_traits::value_to_yaml(msg.num_ranges, out);
    out << "\n";
  }

  // member: num_beams
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_beams: ";
    rosidl_generator_traits::value_to_yaml(msg.num_beams, out);
    out << "\n";
  }

  // member: bearings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bearings.size() == 0) {
      out << "bearings: []\n";
    } else {
      out << "bearings:\n";
      for (auto item : msg.bearings) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: range_resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range_resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.range_resolution, out);
    out << "\n";
  }

  // member: fire_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fire_msg:\n";
    to_block_style_yaml(msg.fire_msg, out, indentation + 2);
  }

  // member: image_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_msg:\n";
    to_block_style_yaml(msg.image_msg, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BlueprintOculusSonarPing & msg, bool use_flow_style = false)
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
  const wamv_interfaces::msg::BlueprintOculusSonarPing & msg,
  std::ostream & out, size_t indentation = 0)
{
  wamv_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wamv_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const wamv_interfaces::msg::BlueprintOculusSonarPing & msg)
{
  return wamv_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wamv_interfaces::msg::BlueprintOculusSonarPing>()
{
  return "wamv_interfaces::msg::BlueprintOculusSonarPing";
}

template<>
inline const char * name<wamv_interfaces::msg::BlueprintOculusSonarPing>()
{
  return "wamv_interfaces/msg/BlueprintOculusSonarPing";
}

template<>
struct has_fixed_size<wamv_interfaces::msg::BlueprintOculusSonarPing>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wamv_interfaces::msg::BlueprintOculusSonarPing>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wamv_interfaces::msg::BlueprintOculusSonarPing>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_PING__TRAITS_HPP_
