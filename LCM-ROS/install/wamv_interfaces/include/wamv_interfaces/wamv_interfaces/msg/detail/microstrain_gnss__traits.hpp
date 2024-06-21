// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wamv_interfaces:msg/MicrostrainGnss.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_GNSS__TRAITS_HPP_
#define WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_GNSS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wamv_interfaces/msg/detail/microstrain_gnss__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wamv_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MicrostrainGnss & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: height_above_elipsoid
  {
    out << "height_above_elipsoid: ";
    rosidl_generator_traits::value_to_yaml(msg.height_above_elipsoid, out);
    out << ", ";
  }

  // member: height_above_msl
  {
    out << "height_above_msl: ";
    rosidl_generator_traits::value_to_yaml(msg.height_above_msl, out);
    out << ", ";
  }

  // member: horizontal_accuracy
  {
    out << "horizontal_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_accuracy, out);
    out << ", ";
  }

  // member: vertical_accuracy
  {
    out << "vertical_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_accuracy, out);
    out << ", ";
  }

  // member: ecef_pos_x
  {
    out << "ecef_pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ecef_pos_x, out);
    out << ", ";
  }

  // member: ecef_pos_y
  {
    out << "ecef_pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ecef_pos_y, out);
    out << ", ";
  }

  // member: ecef_pos_z
  {
    out << "ecef_pos_z: ";
    rosidl_generator_traits::value_to_yaml(msg.ecef_pos_z, out);
    out << ", ";
  }

  // member: ecef_pos_accuracy
  {
    out << "ecef_pos_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.ecef_pos_accuracy, out);
    out << ", ";
  }

  // member: north_velocity
  {
    out << "north_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.north_velocity, out);
    out << ", ";
  }

  // member: east_velocity
  {
    out << "east_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.east_velocity, out);
    out << ", ";
  }

  // member: down_velocity
  {
    out << "down_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.down_velocity, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: ground_speed
  {
    out << "ground_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.ground_speed, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: speed_accuracy
  {
    out << "speed_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_accuracy, out);
    out << ", ";
  }

  // member: heading_accuracy
  {
    out << "heading_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_accuracy, out);
    out << ", ";
  }

  // member: ecef_vel_x
  {
    out << "ecef_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ecef_vel_x, out);
    out << ", ";
  }

  // member: ecef_vel_y
  {
    out << "ecef_vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ecef_vel_y, out);
    out << ", ";
  }

  // member: ecef_vel_z
  {
    out << "ecef_vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.ecef_vel_z, out);
    out << ", ";
  }

  // member: ecef_vel_accuracy
  {
    out << "ecef_vel_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.ecef_vel_accuracy, out);
    out << ", ";
  }

  // member: geometric_dop
  {
    out << "geometric_dop: ";
    rosidl_generator_traits::value_to_yaml(msg.geometric_dop, out);
    out << ", ";
  }

  // member: position_dop
  {
    out << "position_dop: ";
    rosidl_generator_traits::value_to_yaml(msg.position_dop, out);
    out << ", ";
  }

  // member: horizontal_dop
  {
    out << "horizontal_dop: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_dop, out);
    out << ", ";
  }

  // member: vertical_dop
  {
    out << "vertical_dop: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_dop, out);
    out << ", ";
  }

  // member: time_dop
  {
    out << "time_dop: ";
    rosidl_generator_traits::value_to_yaml(msg.time_dop, out);
    out << ", ";
  }

  // member: northing_dop
  {
    out << "northing_dop: ";
    rosidl_generator_traits::value_to_yaml(msg.northing_dop, out);
    out << ", ";
  }

  // member: easting_dop
  {
    out << "easting_dop: ";
    rosidl_generator_traits::value_to_yaml(msg.easting_dop, out);
    out << ", ";
  }

  // member: utc_timestamp
  {
    out << "utc_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_timestamp, out);
    out << ", ";
  }

  // member: utc_timestamp_flags
  {
    out << "utc_timestamp_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_timestamp_flags, out);
    out << ", ";
  }

  // member: gps_time_tow
  {
    out << "gps_time_tow: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_time_tow, out);
    out << ", ";
  }

  // member: gps_time_week_num
  {
    out << "gps_time_week_num: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_time_week_num, out);
    out << ", ";
  }

  // member: gps_clock_bias
  {
    out << "gps_clock_bias: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_clock_bias, out);
    out << ", ";
  }

  // member: gps_clock_drift
  {
    out << "gps_clock_drift: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_clock_drift, out);
    out << ", ";
  }

  // member: gps_clock_accuracy
  {
    out << "gps_clock_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_clock_accuracy, out);
    out << ", ";
  }

  // member: gnss_fix_type
  {
    out << "gnss_fix_type: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_fix_type, out);
    out << ", ";
  }

  // member: gnss_fix_sv_count
  {
    out << "gnss_fix_sv_count: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_fix_sv_count, out);
    out << ", ";
  }

  // member: gnss_fix_flags
  {
    out << "gnss_fix_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_fix_flags, out);
    out << ", ";
  }

  // member: sensor_state
  {
    out << "sensor_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_state, out);
    out << ", ";
  }

  // member: antenna_state
  {
    out << "antenna_state: ";
    rosidl_generator_traits::value_to_yaml(msg.antenna_state, out);
    out << ", ";
  }

  // member: antenna_power
  {
    out << "antenna_power: ";
    rosidl_generator_traits::value_to_yaml(msg.antenna_power, out);
    out << ", ";
  }

  // member: dgnss_newest_age_gnss_base_0
  {
    out << "dgnss_newest_age_gnss_base_0: ";
    rosidl_generator_traits::value_to_yaml(msg.dgnss_newest_age_gnss_base_0, out);
    out << ", ";
  }

  // member: dgnss_base_station_status_gnss_base_0
  {
    out << "dgnss_base_station_status_gnss_base_0: ";
    rosidl_generator_traits::value_to_yaml(msg.dgnss_base_station_status_gnss_base_0, out);
    out << ", ";
  }

  // member: dgnss_num_channels_gnss_base_0
  {
    out << "dgnss_num_channels_gnss_base_0: ";
    rosidl_generator_traits::value_to_yaml(msg.dgnss_num_channels_gnss_base_0, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MicrostrainGnss & msg,
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

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: height_above_elipsoid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_above_elipsoid: ";
    rosidl_generator_traits::value_to_yaml(msg.height_above_elipsoid, out);
    out << "\n";
  }

  // member: height_above_msl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_above_msl: ";
    rosidl_generator_traits::value_to_yaml(msg.height_above_msl, out);
    out << "\n";
  }

  // member: horizontal_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_accuracy, out);
    out << "\n";
  }

  // member: vertical_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_accuracy, out);
    out << "\n";
  }

  // member: ecef_pos_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ecef_pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ecef_pos_x, out);
    out << "\n";
  }

  // member: ecef_pos_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ecef_pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ecef_pos_y, out);
    out << "\n";
  }

  // member: ecef_pos_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ecef_pos_z: ";
    rosidl_generator_traits::value_to_yaml(msg.ecef_pos_z, out);
    out << "\n";
  }

  // member: ecef_pos_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ecef_pos_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.ecef_pos_accuracy, out);
    out << "\n";
  }

  // member: north_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "north_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.north_velocity, out);
    out << "\n";
  }

  // member: east_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "east_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.east_velocity, out);
    out << "\n";
  }

  // member: down_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "down_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.down_velocity, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: ground_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ground_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.ground_speed, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: speed_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_accuracy, out);
    out << "\n";
  }

  // member: heading_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_accuracy, out);
    out << "\n";
  }

  // member: ecef_vel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ecef_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ecef_vel_x, out);
    out << "\n";
  }

  // member: ecef_vel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ecef_vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ecef_vel_y, out);
    out << "\n";
  }

  // member: ecef_vel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ecef_vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.ecef_vel_z, out);
    out << "\n";
  }

  // member: ecef_vel_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ecef_vel_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.ecef_vel_accuracy, out);
    out << "\n";
  }

  // member: geometric_dop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "geometric_dop: ";
    rosidl_generator_traits::value_to_yaml(msg.geometric_dop, out);
    out << "\n";
  }

  // member: position_dop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_dop: ";
    rosidl_generator_traits::value_to_yaml(msg.position_dop, out);
    out << "\n";
  }

  // member: horizontal_dop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_dop: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_dop, out);
    out << "\n";
  }

  // member: vertical_dop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_dop: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_dop, out);
    out << "\n";
  }

  // member: time_dop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_dop: ";
    rosidl_generator_traits::value_to_yaml(msg.time_dop, out);
    out << "\n";
  }

  // member: northing_dop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "northing_dop: ";
    rosidl_generator_traits::value_to_yaml(msg.northing_dop, out);
    out << "\n";
  }

  // member: easting_dop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "easting_dop: ";
    rosidl_generator_traits::value_to_yaml(msg.easting_dop, out);
    out << "\n";
  }

  // member: utc_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_timestamp, out);
    out << "\n";
  }

  // member: utc_timestamp_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_timestamp_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_timestamp_flags, out);
    out << "\n";
  }

  // member: gps_time_tow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_time_tow: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_time_tow, out);
    out << "\n";
  }

  // member: gps_time_week_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_time_week_num: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_time_week_num, out);
    out << "\n";
  }

  // member: gps_clock_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_clock_bias: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_clock_bias, out);
    out << "\n";
  }

  // member: gps_clock_drift
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_clock_drift: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_clock_drift, out);
    out << "\n";
  }

  // member: gps_clock_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_clock_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_clock_accuracy, out);
    out << "\n";
  }

  // member: gnss_fix_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_fix_type: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_fix_type, out);
    out << "\n";
  }

  // member: gnss_fix_sv_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_fix_sv_count: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_fix_sv_count, out);
    out << "\n";
  }

  // member: gnss_fix_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_fix_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_fix_flags, out);
    out << "\n";
  }

  // member: sensor_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_state, out);
    out << "\n";
  }

  // member: antenna_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "antenna_state: ";
    rosidl_generator_traits::value_to_yaml(msg.antenna_state, out);
    out << "\n";
  }

  // member: antenna_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "antenna_power: ";
    rosidl_generator_traits::value_to_yaml(msg.antenna_power, out);
    out << "\n";
  }

  // member: dgnss_newest_age_gnss_base_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dgnss_newest_age_gnss_base_0: ";
    rosidl_generator_traits::value_to_yaml(msg.dgnss_newest_age_gnss_base_0, out);
    out << "\n";
  }

  // member: dgnss_base_station_status_gnss_base_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dgnss_base_station_status_gnss_base_0: ";
    rosidl_generator_traits::value_to_yaml(msg.dgnss_base_station_status_gnss_base_0, out);
    out << "\n";
  }

  // member: dgnss_num_channels_gnss_base_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dgnss_num_channels_gnss_base_0: ";
    rosidl_generator_traits::value_to_yaml(msg.dgnss_num_channels_gnss_base_0, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MicrostrainGnss & msg, bool use_flow_style = false)
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
  const wamv_interfaces::msg::MicrostrainGnss & msg,
  std::ostream & out, size_t indentation = 0)
{
  wamv_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wamv_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const wamv_interfaces::msg::MicrostrainGnss & msg)
{
  return wamv_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wamv_interfaces::msg::MicrostrainGnss>()
{
  return "wamv_interfaces::msg::MicrostrainGnss";
}

template<>
inline const char * name<wamv_interfaces::msg::MicrostrainGnss>()
{
  return "wamv_interfaces/msg/MicrostrainGnss";
}

template<>
struct has_fixed_size<wamv_interfaces::msg::MicrostrainGnss>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wamv_interfaces::msg::MicrostrainGnss>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wamv_interfaces::msg::MicrostrainGnss>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_GNSS__TRAITS_HPP_
