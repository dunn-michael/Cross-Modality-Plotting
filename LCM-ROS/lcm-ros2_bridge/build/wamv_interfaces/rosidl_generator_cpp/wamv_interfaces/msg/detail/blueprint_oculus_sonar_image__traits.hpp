// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wamv_interfaces:msg/BlueprintOculusSonarImage.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_IMAGE__TRAITS_HPP_
#define WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wamv_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const BlueprintOculusSonarImage & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: encoding
  {
    out << "encoding: ";
    rosidl_generator_traits::value_to_yaml(msg.encoding, out);
    out << ", ";
  }

  // member: is_bigendian
  {
    out << "is_bigendian: ";
    rosidl_generator_traits::value_to_yaml(msg.is_bigendian, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BlueprintOculusSonarImage & msg,
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

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: encoding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encoding: ";
    rosidl_generator_traits::value_to_yaml(msg.encoding, out);
    out << "\n";
  }

  // member: is_bigendian
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_bigendian: ";
    rosidl_generator_traits::value_to_yaml(msg.is_bigendian, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BlueprintOculusSonarImage & msg, bool use_flow_style = false)
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
  const wamv_interfaces::msg::BlueprintOculusSonarImage & msg,
  std::ostream & out, size_t indentation = 0)
{
  wamv_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wamv_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const wamv_interfaces::msg::BlueprintOculusSonarImage & msg)
{
  return wamv_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wamv_interfaces::msg::BlueprintOculusSonarImage>()
{
  return "wamv_interfaces::msg::BlueprintOculusSonarImage";
}

template<>
inline const char * name<wamv_interfaces::msg::BlueprintOculusSonarImage>()
{
  return "wamv_interfaces/msg/BlueprintOculusSonarImage";
}

template<>
struct has_fixed_size<wamv_interfaces::msg::BlueprintOculusSonarImage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wamv_interfaces::msg::BlueprintOculusSonarImage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wamv_interfaces::msg::BlueprintOculusSonarImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_IMAGE__TRAITS_HPP_
