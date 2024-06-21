// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wamv_interfaces:msg/MicrostrainImu.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_IMU__TRAITS_HPP_
#define WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_IMU__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wamv_interfaces/msg/detail/microstrain_imu__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wamv_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MicrostrainImu & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: scaled_accel_x
  {
    out << "scaled_accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.scaled_accel_x, out);
    out << ", ";
  }

  // member: scaled_accel_y
  {
    out << "scaled_accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.scaled_accel_y, out);
    out << ", ";
  }

  // member: scaled_accel_z
  {
    out << "scaled_accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.scaled_accel_z, out);
    out << ", ";
  }

  // member: scaled_gyro_x
  {
    out << "scaled_gyro_x: ";
    rosidl_generator_traits::value_to_yaml(msg.scaled_gyro_x, out);
    out << ", ";
  }

  // member: scaled_gyro_y
  {
    out << "scaled_gyro_y: ";
    rosidl_generator_traits::value_to_yaml(msg.scaled_gyro_y, out);
    out << ", ";
  }

  // member: scaled_gyro_z
  {
    out << "scaled_gyro_z: ";
    rosidl_generator_traits::value_to_yaml(msg.scaled_gyro_z, out);
    out << ", ";
  }

  // member: scaled_mag_x
  {
    out << "scaled_mag_x: ";
    rosidl_generator_traits::value_to_yaml(msg.scaled_mag_x, out);
    out << ", ";
  }

  // member: scaled_mag_y
  {
    out << "scaled_mag_y: ";
    rosidl_generator_traits::value_to_yaml(msg.scaled_mag_y, out);
    out << ", ";
  }

  // member: scaled_mag_z
  {
    out << "scaled_mag_z: ";
    rosidl_generator_traits::value_to_yaml(msg.scaled_mag_z, out);
    out << ", ";
  }

  // member: delta_theta_x
  {
    out << "delta_theta_x: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_theta_x, out);
    out << ", ";
  }

  // member: delta_theta_y
  {
    out << "delta_theta_y: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_theta_y, out);
    out << ", ";
  }

  // member: delta_theta_z
  {
    out << "delta_theta_z: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_theta_z, out);
    out << ", ";
  }

  // member: delta_vel_x
  {
    out << "delta_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_vel_x, out);
    out << ", ";
  }

  // member: delta_vel_y
  {
    out << "delta_vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_vel_y, out);
    out << ", ";
  }

  // member: delta_vel_z
  {
    out << "delta_vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_vel_z, out);
    out << ", ";
  }

  // member: orient_matrix
  {
    if (msg.orient_matrix.size() == 0) {
      out << "orient_matrix: []";
    } else {
      out << "orient_matrix: [";
      size_t pending_items = msg.orient_matrix.size();
      for (auto item : msg.orient_matrix) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: orient_quaternion
  {
    if (msg.orient_quaternion.size() == 0) {
      out << "orient_quaternion: []";
    } else {
      out << "orient_quaternion: [";
      size_t pending_items = msg.orient_quaternion.size();
      for (auto item : msg.orient_quaternion) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: stabilized_mag_x
  {
    out << "stabilized_mag_x: ";
    rosidl_generator_traits::value_to_yaml(msg.stabilized_mag_x, out);
    out << ", ";
  }

  // member: stabilized_mag_y
  {
    out << "stabilized_mag_y: ";
    rosidl_generator_traits::value_to_yaml(msg.stabilized_mag_y, out);
    out << ", ";
  }

  // member: stabilized_mag_z
  {
    out << "stabilized_mag_z: ";
    rosidl_generator_traits::value_to_yaml(msg.stabilized_mag_z, out);
    out << ", ";
  }

  // member: stabilized_accel_x
  {
    out << "stabilized_accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.stabilized_accel_x, out);
    out << ", ";
  }

  // member: stabilized_accel_y
  {
    out << "stabilized_accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.stabilized_accel_y, out);
    out << ", ";
  }

  // member: stabilized_accel_z
  {
    out << "stabilized_accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.stabilized_accel_z, out);
    out << ", ";
  }

  // member: gps_correl_timestamp_tow
  {
    out << "gps_correl_timestamp_tow: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_correl_timestamp_tow, out);
    out << ", ";
  }

  // member: gps_correl_timestamp_week_num
  {
    out << "gps_correl_timestamp_week_num: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_correl_timestamp_week_num, out);
    out << ", ";
  }

  // member: gps_correl_timestamp_flags
  {
    out << "gps_correl_timestamp_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_correl_timestamp_flags, out);
    out << ", ";
  }

  // member: scaled_ambient_pressure
  {
    out << "scaled_ambient_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.scaled_ambient_pressure, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MicrostrainImu & msg,
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

  // member: scaled_accel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scaled_accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.scaled_accel_x, out);
    out << "\n";
  }

  // member: scaled_accel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scaled_accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.scaled_accel_y, out);
    out << "\n";
  }

  // member: scaled_accel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scaled_accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.scaled_accel_z, out);
    out << "\n";
  }

  // member: scaled_gyro_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scaled_gyro_x: ";
    rosidl_generator_traits::value_to_yaml(msg.scaled_gyro_x, out);
    out << "\n";
  }

  // member: scaled_gyro_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scaled_gyro_y: ";
    rosidl_generator_traits::value_to_yaml(msg.scaled_gyro_y, out);
    out << "\n";
  }

  // member: scaled_gyro_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scaled_gyro_z: ";
    rosidl_generator_traits::value_to_yaml(msg.scaled_gyro_z, out);
    out << "\n";
  }

  // member: scaled_mag_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scaled_mag_x: ";
    rosidl_generator_traits::value_to_yaml(msg.scaled_mag_x, out);
    out << "\n";
  }

  // member: scaled_mag_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scaled_mag_y: ";
    rosidl_generator_traits::value_to_yaml(msg.scaled_mag_y, out);
    out << "\n";
  }

  // member: scaled_mag_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scaled_mag_z: ";
    rosidl_generator_traits::value_to_yaml(msg.scaled_mag_z, out);
    out << "\n";
  }

  // member: delta_theta_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_theta_x: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_theta_x, out);
    out << "\n";
  }

  // member: delta_theta_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_theta_y: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_theta_y, out);
    out << "\n";
  }

  // member: delta_theta_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_theta_z: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_theta_z, out);
    out << "\n";
  }

  // member: delta_vel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_vel_x, out);
    out << "\n";
  }

  // member: delta_vel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_vel_y, out);
    out << "\n";
  }

  // member: delta_vel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_vel_z, out);
    out << "\n";
  }

  // member: orient_matrix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.orient_matrix.size() == 0) {
      out << "orient_matrix: []\n";
    } else {
      out << "orient_matrix:\n";
      for (auto item : msg.orient_matrix) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: orient_quaternion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.orient_quaternion.size() == 0) {
      out << "orient_quaternion: []\n";
    } else {
      out << "orient_quaternion:\n";
      for (auto item : msg.orient_quaternion) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: stabilized_mag_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stabilized_mag_x: ";
    rosidl_generator_traits::value_to_yaml(msg.stabilized_mag_x, out);
    out << "\n";
  }

  // member: stabilized_mag_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stabilized_mag_y: ";
    rosidl_generator_traits::value_to_yaml(msg.stabilized_mag_y, out);
    out << "\n";
  }

  // member: stabilized_mag_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stabilized_mag_z: ";
    rosidl_generator_traits::value_to_yaml(msg.stabilized_mag_z, out);
    out << "\n";
  }

  // member: stabilized_accel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stabilized_accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.stabilized_accel_x, out);
    out << "\n";
  }

  // member: stabilized_accel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stabilized_accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.stabilized_accel_y, out);
    out << "\n";
  }

  // member: stabilized_accel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stabilized_accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.stabilized_accel_z, out);
    out << "\n";
  }

  // member: gps_correl_timestamp_tow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_correl_timestamp_tow: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_correl_timestamp_tow, out);
    out << "\n";
  }

  // member: gps_correl_timestamp_week_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_correl_timestamp_week_num: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_correl_timestamp_week_num, out);
    out << "\n";
  }

  // member: gps_correl_timestamp_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_correl_timestamp_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_correl_timestamp_flags, out);
    out << "\n";
  }

  // member: scaled_ambient_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scaled_ambient_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.scaled_ambient_pressure, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MicrostrainImu & msg, bool use_flow_style = false)
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
  const wamv_interfaces::msg::MicrostrainImu & msg,
  std::ostream & out, size_t indentation = 0)
{
  wamv_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wamv_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const wamv_interfaces::msg::MicrostrainImu & msg)
{
  return wamv_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wamv_interfaces::msg::MicrostrainImu>()
{
  return "wamv_interfaces::msg::MicrostrainImu";
}

template<>
inline const char * name<wamv_interfaces::msg::MicrostrainImu>()
{
  return "wamv_interfaces/msg/MicrostrainImu";
}

template<>
struct has_fixed_size<wamv_interfaces::msg::MicrostrainImu>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wamv_interfaces::msg::MicrostrainImu>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wamv_interfaces::msg::MicrostrainImu>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_IMU__TRAITS_HPP_
