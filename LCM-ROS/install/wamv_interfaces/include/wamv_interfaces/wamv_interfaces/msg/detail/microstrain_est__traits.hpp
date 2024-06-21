// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wamv_interfaces:msg/MicrostrainEst.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_EST__TRAITS_HPP_
#define WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_EST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wamv_interfaces/msg/detail/microstrain_est__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wamv_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MicrostrainEst & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: est_latitude
  {
    out << "est_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.est_latitude, out);
    out << ", ";
  }

  // member: est_longitude
  {
    out << "est_longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.est_longitude, out);
    out << ", ";
  }

  // member: est_height_above_ellipsoid
  {
    out << "est_height_above_ellipsoid: ";
    rosidl_generator_traits::value_to_yaml(msg.est_height_above_ellipsoid, out);
    out << ", ";
  }

  // member: est_north_velocity
  {
    out << "est_north_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.est_north_velocity, out);
    out << ", ";
  }

  // member: est_east_velocity
  {
    out << "est_east_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.est_east_velocity, out);
    out << ", ";
  }

  // member: est_down_velocity
  {
    out << "est_down_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.est_down_velocity, out);
    out << ", ";
  }

  // member: est_orient_quaternion
  {
    if (msg.est_orient_quaternion.size() == 0) {
      out << "est_orient_quaternion: []";
    } else {
      out << "est_orient_quaternion: [";
      size_t pending_items = msg.est_orient_quaternion.size();
      for (auto item : msg.est_orient_quaternion) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: est_orient_matrix
  {
    if (msg.est_orient_matrix.size() == 0) {
      out << "est_orient_matrix: []";
    } else {
      out << "est_orient_matrix: [";
      size_t pending_items = msg.est_orient_matrix.size();
      for (auto item : msg.est_orient_matrix) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: est_roll
  {
    out << "est_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.est_roll, out);
    out << ", ";
  }

  // member: est_pitch
  {
    out << "est_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.est_pitch, out);
    out << ", ";
  }

  // member: est_yaw
  {
    out << "est_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.est_yaw, out);
    out << ", ";
  }

  // member: est_gyro_bias_x
  {
    out << "est_gyro_bias_x: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_bias_x, out);
    out << ", ";
  }

  // member: est_gyro_bias_y
  {
    out << "est_gyro_bias_y: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_bias_y, out);
    out << ", ";
  }

  // member: est_gyro_bias_z
  {
    out << "est_gyro_bias_z: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_bias_z, out);
    out << ", ";
  }

  // member: est_accel_bias_x
  {
    out << "est_accel_bias_x: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_bias_x, out);
    out << ", ";
  }

  // member: est_accel_bias_y
  {
    out << "est_accel_bias_y: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_bias_y, out);
    out << ", ";
  }

  // member: est_accel_bias_z
  {
    out << "est_accel_bias_z: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_bias_z, out);
    out << ", ";
  }

  // member: est_north_position_uncert
  {
    out << "est_north_position_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_north_position_uncert, out);
    out << ", ";
  }

  // member: est_east_position_uncert
  {
    out << "est_east_position_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_east_position_uncert, out);
    out << ", ";
  }

  // member: est_down_position_uncert
  {
    out << "est_down_position_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_down_position_uncert, out);
    out << ", ";
  }

  // member: est_north_velocity_uncert
  {
    out << "est_north_velocity_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_north_velocity_uncert, out);
    out << ", ";
  }

  // member: est_east_velocity_uncert
  {
    out << "est_east_velocity_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_east_velocity_uncert, out);
    out << ", ";
  }

  // member: est_down_velocity_uncert
  {
    out << "est_down_velocity_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_down_velocity_uncert, out);
    out << ", ";
  }

  // member: est_roll_uncert
  {
    out << "est_roll_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_roll_uncert, out);
    out << ", ";
  }

  // member: est_pitch_uncert
  {
    out << "est_pitch_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_pitch_uncert, out);
    out << ", ";
  }

  // member: est_yaw_uncert
  {
    out << "est_yaw_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_yaw_uncert, out);
    out << ", ";
  }

  // member: est_gyro_bias_x_uncert
  {
    out << "est_gyro_bias_x_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_bias_x_uncert, out);
    out << ", ";
  }

  // member: est_gyro_bias_y_uncert
  {
    out << "est_gyro_bias_y_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_bias_y_uncert, out);
    out << ", ";
  }

  // member: est_gyro_bias_z_uncert
  {
    out << "est_gyro_bias_z_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_bias_z_uncert, out);
    out << ", ";
  }

  // member: est_accel_bias_x_uncert
  {
    out << "est_accel_bias_x_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_bias_x_uncert, out);
    out << ", ";
  }

  // member: est_accel_bias_y_uncert
  {
    out << "est_accel_bias_y_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_bias_y_uncert, out);
    out << ", ";
  }

  // member: est_accel_bias_z_uncert
  {
    out << "est_accel_bias_z_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_bias_z_uncert, out);
    out << ", ";
  }

  // member: est_linear_accel_x
  {
    out << "est_linear_accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.est_linear_accel_x, out);
    out << ", ";
  }

  // member: est_linear_accel_y
  {
    out << "est_linear_accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.est_linear_accel_y, out);
    out << ", ";
  }

  // member: est_linear_accel_z
  {
    out << "est_linear_accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.est_linear_accel_z, out);
    out << ", ";
  }

  // member: est_angular_rate_x
  {
    out << "est_angular_rate_x: ";
    rosidl_generator_traits::value_to_yaml(msg.est_angular_rate_x, out);
    out << ", ";
  }

  // member: est_angular_rate_y
  {
    out << "est_angular_rate_y: ";
    rosidl_generator_traits::value_to_yaml(msg.est_angular_rate_y, out);
    out << ", ";
  }

  // member: est_angular_rate_z
  {
    out << "est_angular_rate_z: ";
    rosidl_generator_traits::value_to_yaml(msg.est_angular_rate_z, out);
    out << ", ";
  }

  // member: est_wgs84_local_grav_magnitude
  {
    out << "est_wgs84_local_grav_magnitude: ";
    rosidl_generator_traits::value_to_yaml(msg.est_wgs84_local_grav_magnitude, out);
    out << ", ";
  }

  // member: est_filter_state
  {
    out << "est_filter_state: ";
    rosidl_generator_traits::value_to_yaml(msg.est_filter_state, out);
    out << ", ";
  }

  // member: est_filter_dynamics_mode
  {
    out << "est_filter_dynamics_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.est_filter_dynamics_mode, out);
    out << ", ";
  }

  // member: est_filter_status_flags
  {
    out << "est_filter_status_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.est_filter_status_flags, out);
    out << ", ";
  }

  // member: est_filter_gps_time_tow
  {
    out << "est_filter_gps_time_tow: ";
    rosidl_generator_traits::value_to_yaml(msg.est_filter_gps_time_tow, out);
    out << ", ";
  }

  // member: est_filter_gps_time_week_num
  {
    out << "est_filter_gps_time_week_num: ";
    rosidl_generator_traits::value_to_yaml(msg.est_filter_gps_time_week_num, out);
    out << ", ";
  }

  // member: est_attitude_uncert_quaternion
  {
    if (msg.est_attitude_uncert_quaternion.size() == 0) {
      out << "est_attitude_uncert_quaternion: []";
    } else {
      out << "est_attitude_uncert_quaternion: [";
      size_t pending_items = msg.est_attitude_uncert_quaternion.size();
      for (auto item : msg.est_attitude_uncert_quaternion) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: est_gravity_vector_x
  {
    out << "est_gravity_vector_x: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gravity_vector_x, out);
    out << ", ";
  }

  // member: est_gravity_vector_y
  {
    out << "est_gravity_vector_y: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gravity_vector_y, out);
    out << ", ";
  }

  // member: est_gravity_vector_z
  {
    out << "est_gravity_vector_z: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gravity_vector_z, out);
    out << ", ";
  }

  // member: est_heading
  {
    out << "est_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.est_heading, out);
    out << ", ";
  }

  // member: est_heading_uncert
  {
    out << "est_heading_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_heading_uncert, out);
    out << ", ";
  }

  // member: est_heading_source
  {
    out << "est_heading_source: ";
    rosidl_generator_traits::value_to_yaml(msg.est_heading_source, out);
    out << ", ";
  }

  // member: est_magnetic_model_sln_north
  {
    out << "est_magnetic_model_sln_north: ";
    rosidl_generator_traits::value_to_yaml(msg.est_magnetic_model_sln_north, out);
    out << ", ";
  }

  // member: est_magnetic_model_sln_east
  {
    out << "est_magnetic_model_sln_east: ";
    rosidl_generator_traits::value_to_yaml(msg.est_magnetic_model_sln_east, out);
    out << ", ";
  }

  // member: est_magnetic_model_sln_down
  {
    out << "est_magnetic_model_sln_down: ";
    rosidl_generator_traits::value_to_yaml(msg.est_magnetic_model_sln_down, out);
    out << ", ";
  }

  // member: est_magnetic_model_sln_inclination
  {
    out << "est_magnetic_model_sln_inclination: ";
    rosidl_generator_traits::value_to_yaml(msg.est_magnetic_model_sln_inclination, out);
    out << ", ";
  }

  // member: est_magnetic_model_sln_declination
  {
    out << "est_magnetic_model_sln_declination: ";
    rosidl_generator_traits::value_to_yaml(msg.est_magnetic_model_sln_declination, out);
    out << ", ";
  }

  // member: est_gyro_scale_factor_x
  {
    out << "est_gyro_scale_factor_x: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_scale_factor_x, out);
    out << ", ";
  }

  // member: est_gyro_scale_factor_y
  {
    out << "est_gyro_scale_factor_y: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_scale_factor_y, out);
    out << ", ";
  }

  // member: est_gyro_scale_factor_z
  {
    out << "est_gyro_scale_factor_z: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_scale_factor_z, out);
    out << ", ";
  }

  // member: est_accel_scale_factor_x
  {
    out << "est_accel_scale_factor_x: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_scale_factor_x, out);
    out << ", ";
  }

  // member: est_accel_scale_factor_y
  {
    out << "est_accel_scale_factor_y: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_scale_factor_y, out);
    out << ", ";
  }

  // member: est_accel_scale_factor_z
  {
    out << "est_accel_scale_factor_z: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_scale_factor_z, out);
    out << ", ";
  }

  // member: est_gyro_scale_factor_x_uncert
  {
    out << "est_gyro_scale_factor_x_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_scale_factor_x_uncert, out);
    out << ", ";
  }

  // member: est_gyro_scale_factor_y_uncert
  {
    out << "est_gyro_scale_factor_y_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_scale_factor_y_uncert, out);
    out << ", ";
  }

  // member: est_gyro_scale_factor_z_uncert
  {
    out << "est_gyro_scale_factor_z_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_scale_factor_z_uncert, out);
    out << ", ";
  }

  // member: est_accel_scale_factor_x_uncert
  {
    out << "est_accel_scale_factor_x_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_scale_factor_x_uncert, out);
    out << ", ";
  }

  // member: est_accel_scale_factor_y_uncert
  {
    out << "est_accel_scale_factor_y_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_scale_factor_y_uncert, out);
    out << ", ";
  }

  // member: est_accel_scale_factor_z_uncert
  {
    out << "est_accel_scale_factor_z_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_scale_factor_z_uncert, out);
    out << ", ";
  }

  // member: est_compensated_accel_x
  {
    out << "est_compensated_accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.est_compensated_accel_x, out);
    out << ", ";
  }

  // member: est_compensated_accel_y
  {
    out << "est_compensated_accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.est_compensated_accel_y, out);
    out << ", ";
  }

  // member: est_compensated_accel_z
  {
    out << "est_compensated_accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.est_compensated_accel_z, out);
    out << ", ";
  }

  // member: est_std_atm_model_geometric_alt
  {
    out << "est_std_atm_model_geometric_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.est_std_atm_model_geometric_alt, out);
    out << ", ";
  }

  // member: est_std_atm_model_geopotential_alt
  {
    out << "est_std_atm_model_geopotential_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.est_std_atm_model_geopotential_alt, out);
    out << ", ";
  }

  // member: est_std_atm_model_temperature
  {
    out << "est_std_atm_model_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.est_std_atm_model_temperature, out);
    out << ", ";
  }

  // member: est_std_atm_model_pressure
  {
    out << "est_std_atm_model_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.est_std_atm_model_pressure, out);
    out << ", ";
  }

  // member: est_std_atm_model_density
  {
    out << "est_std_atm_model_density: ";
    rosidl_generator_traits::value_to_yaml(msg.est_std_atm_model_density, out);
    out << ", ";
  }

  // member: est_pressure_alt
  {
    out << "est_pressure_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.est_pressure_alt, out);
    out << ", ";
  }

  // member: est_mag_auto_hard_iron_offset_x
  {
    out << "est_mag_auto_hard_iron_offset_x: ";
    rosidl_generator_traits::value_to_yaml(msg.est_mag_auto_hard_iron_offset_x, out);
    out << ", ";
  }

  // member: est_mag_auto_hard_iron_offset_y
  {
    out << "est_mag_auto_hard_iron_offset_y: ";
    rosidl_generator_traits::value_to_yaml(msg.est_mag_auto_hard_iron_offset_y, out);
    out << ", ";
  }

  // member: est_mag_auto_hard_iron_offset_z
  {
    out << "est_mag_auto_hard_iron_offset_z: ";
    rosidl_generator_traits::value_to_yaml(msg.est_mag_auto_hard_iron_offset_z, out);
    out << ", ";
  }

  // member: est_mag_auto_soft_iron_matrix
  {
    if (msg.est_mag_auto_soft_iron_matrix.size() == 0) {
      out << "est_mag_auto_soft_iron_matrix: []";
    } else {
      out << "est_mag_auto_soft_iron_matrix: [";
      size_t pending_items = msg.est_mag_auto_soft_iron_matrix.size();
      for (auto item : msg.est_mag_auto_soft_iron_matrix) {
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
  const MicrostrainEst & msg,
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

  // member: est_latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.est_latitude, out);
    out << "\n";
  }

  // member: est_longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.est_longitude, out);
    out << "\n";
  }

  // member: est_height_above_ellipsoid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_height_above_ellipsoid: ";
    rosidl_generator_traits::value_to_yaml(msg.est_height_above_ellipsoid, out);
    out << "\n";
  }

  // member: est_north_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_north_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.est_north_velocity, out);
    out << "\n";
  }

  // member: est_east_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_east_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.est_east_velocity, out);
    out << "\n";
  }

  // member: est_down_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_down_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.est_down_velocity, out);
    out << "\n";
  }

  // member: est_orient_quaternion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.est_orient_quaternion.size() == 0) {
      out << "est_orient_quaternion: []\n";
    } else {
      out << "est_orient_quaternion:\n";
      for (auto item : msg.est_orient_quaternion) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: est_orient_matrix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.est_orient_matrix.size() == 0) {
      out << "est_orient_matrix: []\n";
    } else {
      out << "est_orient_matrix:\n";
      for (auto item : msg.est_orient_matrix) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: est_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.est_roll, out);
    out << "\n";
  }

  // member: est_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.est_pitch, out);
    out << "\n";
  }

  // member: est_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.est_yaw, out);
    out << "\n";
  }

  // member: est_gyro_bias_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_gyro_bias_x: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_bias_x, out);
    out << "\n";
  }

  // member: est_gyro_bias_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_gyro_bias_y: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_bias_y, out);
    out << "\n";
  }

  // member: est_gyro_bias_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_gyro_bias_z: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_bias_z, out);
    out << "\n";
  }

  // member: est_accel_bias_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_accel_bias_x: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_bias_x, out);
    out << "\n";
  }

  // member: est_accel_bias_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_accel_bias_y: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_bias_y, out);
    out << "\n";
  }

  // member: est_accel_bias_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_accel_bias_z: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_bias_z, out);
    out << "\n";
  }

  // member: est_north_position_uncert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_north_position_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_north_position_uncert, out);
    out << "\n";
  }

  // member: est_east_position_uncert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_east_position_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_east_position_uncert, out);
    out << "\n";
  }

  // member: est_down_position_uncert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_down_position_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_down_position_uncert, out);
    out << "\n";
  }

  // member: est_north_velocity_uncert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_north_velocity_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_north_velocity_uncert, out);
    out << "\n";
  }

  // member: est_east_velocity_uncert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_east_velocity_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_east_velocity_uncert, out);
    out << "\n";
  }

  // member: est_down_velocity_uncert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_down_velocity_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_down_velocity_uncert, out);
    out << "\n";
  }

  // member: est_roll_uncert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_roll_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_roll_uncert, out);
    out << "\n";
  }

  // member: est_pitch_uncert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_pitch_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_pitch_uncert, out);
    out << "\n";
  }

  // member: est_yaw_uncert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_yaw_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_yaw_uncert, out);
    out << "\n";
  }

  // member: est_gyro_bias_x_uncert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_gyro_bias_x_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_bias_x_uncert, out);
    out << "\n";
  }

  // member: est_gyro_bias_y_uncert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_gyro_bias_y_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_bias_y_uncert, out);
    out << "\n";
  }

  // member: est_gyro_bias_z_uncert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_gyro_bias_z_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_bias_z_uncert, out);
    out << "\n";
  }

  // member: est_accel_bias_x_uncert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_accel_bias_x_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_bias_x_uncert, out);
    out << "\n";
  }

  // member: est_accel_bias_y_uncert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_accel_bias_y_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_bias_y_uncert, out);
    out << "\n";
  }

  // member: est_accel_bias_z_uncert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_accel_bias_z_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_bias_z_uncert, out);
    out << "\n";
  }

  // member: est_linear_accel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_linear_accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.est_linear_accel_x, out);
    out << "\n";
  }

  // member: est_linear_accel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_linear_accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.est_linear_accel_y, out);
    out << "\n";
  }

  // member: est_linear_accel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_linear_accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.est_linear_accel_z, out);
    out << "\n";
  }

  // member: est_angular_rate_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_angular_rate_x: ";
    rosidl_generator_traits::value_to_yaml(msg.est_angular_rate_x, out);
    out << "\n";
  }

  // member: est_angular_rate_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_angular_rate_y: ";
    rosidl_generator_traits::value_to_yaml(msg.est_angular_rate_y, out);
    out << "\n";
  }

  // member: est_angular_rate_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_angular_rate_z: ";
    rosidl_generator_traits::value_to_yaml(msg.est_angular_rate_z, out);
    out << "\n";
  }

  // member: est_wgs84_local_grav_magnitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_wgs84_local_grav_magnitude: ";
    rosidl_generator_traits::value_to_yaml(msg.est_wgs84_local_grav_magnitude, out);
    out << "\n";
  }

  // member: est_filter_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_filter_state: ";
    rosidl_generator_traits::value_to_yaml(msg.est_filter_state, out);
    out << "\n";
  }

  // member: est_filter_dynamics_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_filter_dynamics_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.est_filter_dynamics_mode, out);
    out << "\n";
  }

  // member: est_filter_status_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_filter_status_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.est_filter_status_flags, out);
    out << "\n";
  }

  // member: est_filter_gps_time_tow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_filter_gps_time_tow: ";
    rosidl_generator_traits::value_to_yaml(msg.est_filter_gps_time_tow, out);
    out << "\n";
  }

  // member: est_filter_gps_time_week_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_filter_gps_time_week_num: ";
    rosidl_generator_traits::value_to_yaml(msg.est_filter_gps_time_week_num, out);
    out << "\n";
  }

  // member: est_attitude_uncert_quaternion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.est_attitude_uncert_quaternion.size() == 0) {
      out << "est_attitude_uncert_quaternion: []\n";
    } else {
      out << "est_attitude_uncert_quaternion:\n";
      for (auto item : msg.est_attitude_uncert_quaternion) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: est_gravity_vector_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_gravity_vector_x: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gravity_vector_x, out);
    out << "\n";
  }

  // member: est_gravity_vector_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_gravity_vector_y: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gravity_vector_y, out);
    out << "\n";
  }

  // member: est_gravity_vector_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_gravity_vector_z: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gravity_vector_z, out);
    out << "\n";
  }

  // member: est_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.est_heading, out);
    out << "\n";
  }

  // member: est_heading_uncert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_heading_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_heading_uncert, out);
    out << "\n";
  }

  // member: est_heading_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_heading_source: ";
    rosidl_generator_traits::value_to_yaml(msg.est_heading_source, out);
    out << "\n";
  }

  // member: est_magnetic_model_sln_north
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_magnetic_model_sln_north: ";
    rosidl_generator_traits::value_to_yaml(msg.est_magnetic_model_sln_north, out);
    out << "\n";
  }

  // member: est_magnetic_model_sln_east
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_magnetic_model_sln_east: ";
    rosidl_generator_traits::value_to_yaml(msg.est_magnetic_model_sln_east, out);
    out << "\n";
  }

  // member: est_magnetic_model_sln_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_magnetic_model_sln_down: ";
    rosidl_generator_traits::value_to_yaml(msg.est_magnetic_model_sln_down, out);
    out << "\n";
  }

  // member: est_magnetic_model_sln_inclination
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_magnetic_model_sln_inclination: ";
    rosidl_generator_traits::value_to_yaml(msg.est_magnetic_model_sln_inclination, out);
    out << "\n";
  }

  // member: est_magnetic_model_sln_declination
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_magnetic_model_sln_declination: ";
    rosidl_generator_traits::value_to_yaml(msg.est_magnetic_model_sln_declination, out);
    out << "\n";
  }

  // member: est_gyro_scale_factor_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_gyro_scale_factor_x: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_scale_factor_x, out);
    out << "\n";
  }

  // member: est_gyro_scale_factor_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_gyro_scale_factor_y: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_scale_factor_y, out);
    out << "\n";
  }

  // member: est_gyro_scale_factor_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_gyro_scale_factor_z: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_scale_factor_z, out);
    out << "\n";
  }

  // member: est_accel_scale_factor_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_accel_scale_factor_x: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_scale_factor_x, out);
    out << "\n";
  }

  // member: est_accel_scale_factor_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_accel_scale_factor_y: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_scale_factor_y, out);
    out << "\n";
  }

  // member: est_accel_scale_factor_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_accel_scale_factor_z: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_scale_factor_z, out);
    out << "\n";
  }

  // member: est_gyro_scale_factor_x_uncert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_gyro_scale_factor_x_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_scale_factor_x_uncert, out);
    out << "\n";
  }

  // member: est_gyro_scale_factor_y_uncert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_gyro_scale_factor_y_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_scale_factor_y_uncert, out);
    out << "\n";
  }

  // member: est_gyro_scale_factor_z_uncert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_gyro_scale_factor_z_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_gyro_scale_factor_z_uncert, out);
    out << "\n";
  }

  // member: est_accel_scale_factor_x_uncert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_accel_scale_factor_x_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_scale_factor_x_uncert, out);
    out << "\n";
  }

  // member: est_accel_scale_factor_y_uncert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_accel_scale_factor_y_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_scale_factor_y_uncert, out);
    out << "\n";
  }

  // member: est_accel_scale_factor_z_uncert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_accel_scale_factor_z_uncert: ";
    rosidl_generator_traits::value_to_yaml(msg.est_accel_scale_factor_z_uncert, out);
    out << "\n";
  }

  // member: est_compensated_accel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_compensated_accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.est_compensated_accel_x, out);
    out << "\n";
  }

  // member: est_compensated_accel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_compensated_accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.est_compensated_accel_y, out);
    out << "\n";
  }

  // member: est_compensated_accel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_compensated_accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.est_compensated_accel_z, out);
    out << "\n";
  }

  // member: est_std_atm_model_geometric_alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_std_atm_model_geometric_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.est_std_atm_model_geometric_alt, out);
    out << "\n";
  }

  // member: est_std_atm_model_geopotential_alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_std_atm_model_geopotential_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.est_std_atm_model_geopotential_alt, out);
    out << "\n";
  }

  // member: est_std_atm_model_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_std_atm_model_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.est_std_atm_model_temperature, out);
    out << "\n";
  }

  // member: est_std_atm_model_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_std_atm_model_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.est_std_atm_model_pressure, out);
    out << "\n";
  }

  // member: est_std_atm_model_density
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_std_atm_model_density: ";
    rosidl_generator_traits::value_to_yaml(msg.est_std_atm_model_density, out);
    out << "\n";
  }

  // member: est_pressure_alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_pressure_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.est_pressure_alt, out);
    out << "\n";
  }

  // member: est_mag_auto_hard_iron_offset_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_mag_auto_hard_iron_offset_x: ";
    rosidl_generator_traits::value_to_yaml(msg.est_mag_auto_hard_iron_offset_x, out);
    out << "\n";
  }

  // member: est_mag_auto_hard_iron_offset_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_mag_auto_hard_iron_offset_y: ";
    rosidl_generator_traits::value_to_yaml(msg.est_mag_auto_hard_iron_offset_y, out);
    out << "\n";
  }

  // member: est_mag_auto_hard_iron_offset_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "est_mag_auto_hard_iron_offset_z: ";
    rosidl_generator_traits::value_to_yaml(msg.est_mag_auto_hard_iron_offset_z, out);
    out << "\n";
  }

  // member: est_mag_auto_soft_iron_matrix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.est_mag_auto_soft_iron_matrix.size() == 0) {
      out << "est_mag_auto_soft_iron_matrix: []\n";
    } else {
      out << "est_mag_auto_soft_iron_matrix:\n";
      for (auto item : msg.est_mag_auto_soft_iron_matrix) {
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

inline std::string to_yaml(const MicrostrainEst & msg, bool use_flow_style = false)
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
  const wamv_interfaces::msg::MicrostrainEst & msg,
  std::ostream & out, size_t indentation = 0)
{
  wamv_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wamv_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const wamv_interfaces::msg::MicrostrainEst & msg)
{
  return wamv_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wamv_interfaces::msg::MicrostrainEst>()
{
  return "wamv_interfaces::msg::MicrostrainEst";
}

template<>
inline const char * name<wamv_interfaces::msg::MicrostrainEst>()
{
  return "wamv_interfaces/msg/MicrostrainEst";
}

template<>
struct has_fixed_size<wamv_interfaces::msg::MicrostrainEst>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wamv_interfaces::msg::MicrostrainEst>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wamv_interfaces::msg::MicrostrainEst>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_EST__TRAITS_HPP_
