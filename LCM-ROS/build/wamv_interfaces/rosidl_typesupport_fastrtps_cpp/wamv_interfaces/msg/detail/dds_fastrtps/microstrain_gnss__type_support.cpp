// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from wamv_interfaces:msg/MicrostrainGnss.idl
// generated code does not contain a copyright notice
#include "wamv_interfaces/msg/detail/microstrain_gnss__rosidl_typesupport_fastrtps_cpp.hpp"
#include "wamv_interfaces/msg/detail/microstrain_gnss__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace wamv_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wamv_interfaces
cdr_serialize(
  const wamv_interfaces::msg::MicrostrainGnss & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: latitude
  cdr << ros_message.latitude;
  // Member: longitude
  cdr << ros_message.longitude;
  // Member: height_above_elipsoid
  cdr << ros_message.height_above_elipsoid;
  // Member: height_above_msl
  cdr << ros_message.height_above_msl;
  // Member: horizontal_accuracy
  cdr << ros_message.horizontal_accuracy;
  // Member: vertical_accuracy
  cdr << ros_message.vertical_accuracy;
  // Member: ecef_pos_x
  cdr << ros_message.ecef_pos_x;
  // Member: ecef_pos_y
  cdr << ros_message.ecef_pos_y;
  // Member: ecef_pos_z
  cdr << ros_message.ecef_pos_z;
  // Member: ecef_pos_accuracy
  cdr << ros_message.ecef_pos_accuracy;
  // Member: north_velocity
  cdr << ros_message.north_velocity;
  // Member: east_velocity
  cdr << ros_message.east_velocity;
  // Member: down_velocity
  cdr << ros_message.down_velocity;
  // Member: speed
  cdr << ros_message.speed;
  // Member: ground_speed
  cdr << ros_message.ground_speed;
  // Member: heading
  cdr << ros_message.heading;
  // Member: speed_accuracy
  cdr << ros_message.speed_accuracy;
  // Member: heading_accuracy
  cdr << ros_message.heading_accuracy;
  // Member: ecef_vel_x
  cdr << ros_message.ecef_vel_x;
  // Member: ecef_vel_y
  cdr << ros_message.ecef_vel_y;
  // Member: ecef_vel_z
  cdr << ros_message.ecef_vel_z;
  // Member: ecef_vel_accuracy
  cdr << ros_message.ecef_vel_accuracy;
  // Member: geometric_dop
  cdr << ros_message.geometric_dop;
  // Member: position_dop
  cdr << ros_message.position_dop;
  // Member: horizontal_dop
  cdr << ros_message.horizontal_dop;
  // Member: vertical_dop
  cdr << ros_message.vertical_dop;
  // Member: time_dop
  cdr << ros_message.time_dop;
  // Member: northing_dop
  cdr << ros_message.northing_dop;
  // Member: easting_dop
  cdr << ros_message.easting_dop;
  // Member: utc_timestamp
  cdr << ros_message.utc_timestamp;
  // Member: utc_timestamp_flags
  cdr << ros_message.utc_timestamp_flags;
  // Member: gps_time_tow
  cdr << ros_message.gps_time_tow;
  // Member: gps_time_week_num
  cdr << ros_message.gps_time_week_num;
  // Member: gps_clock_bias
  cdr << ros_message.gps_clock_bias;
  // Member: gps_clock_drift
  cdr << ros_message.gps_clock_drift;
  // Member: gps_clock_accuracy
  cdr << ros_message.gps_clock_accuracy;
  // Member: gnss_fix_type
  cdr << ros_message.gnss_fix_type;
  // Member: gnss_fix_sv_count
  cdr << ros_message.gnss_fix_sv_count;
  // Member: gnss_fix_flags
  cdr << ros_message.gnss_fix_flags;
  // Member: sensor_state
  cdr << ros_message.sensor_state;
  // Member: antenna_state
  cdr << ros_message.antenna_state;
  // Member: antenna_power
  cdr << ros_message.antenna_power;
  // Member: dgnss_newest_age_gnss_base_0
  cdr << ros_message.dgnss_newest_age_gnss_base_0;
  // Member: dgnss_base_station_status_gnss_base_0
  cdr << ros_message.dgnss_base_station_status_gnss_base_0;
  // Member: dgnss_num_channels_gnss_base_0
  cdr << ros_message.dgnss_num_channels_gnss_base_0;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wamv_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wamv_interfaces::msg::MicrostrainGnss & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: latitude
  cdr >> ros_message.latitude;

  // Member: longitude
  cdr >> ros_message.longitude;

  // Member: height_above_elipsoid
  cdr >> ros_message.height_above_elipsoid;

  // Member: height_above_msl
  cdr >> ros_message.height_above_msl;

  // Member: horizontal_accuracy
  cdr >> ros_message.horizontal_accuracy;

  // Member: vertical_accuracy
  cdr >> ros_message.vertical_accuracy;

  // Member: ecef_pos_x
  cdr >> ros_message.ecef_pos_x;

  // Member: ecef_pos_y
  cdr >> ros_message.ecef_pos_y;

  // Member: ecef_pos_z
  cdr >> ros_message.ecef_pos_z;

  // Member: ecef_pos_accuracy
  cdr >> ros_message.ecef_pos_accuracy;

  // Member: north_velocity
  cdr >> ros_message.north_velocity;

  // Member: east_velocity
  cdr >> ros_message.east_velocity;

  // Member: down_velocity
  cdr >> ros_message.down_velocity;

  // Member: speed
  cdr >> ros_message.speed;

  // Member: ground_speed
  cdr >> ros_message.ground_speed;

  // Member: heading
  cdr >> ros_message.heading;

  // Member: speed_accuracy
  cdr >> ros_message.speed_accuracy;

  // Member: heading_accuracy
  cdr >> ros_message.heading_accuracy;

  // Member: ecef_vel_x
  cdr >> ros_message.ecef_vel_x;

  // Member: ecef_vel_y
  cdr >> ros_message.ecef_vel_y;

  // Member: ecef_vel_z
  cdr >> ros_message.ecef_vel_z;

  // Member: ecef_vel_accuracy
  cdr >> ros_message.ecef_vel_accuracy;

  // Member: geometric_dop
  cdr >> ros_message.geometric_dop;

  // Member: position_dop
  cdr >> ros_message.position_dop;

  // Member: horizontal_dop
  cdr >> ros_message.horizontal_dop;

  // Member: vertical_dop
  cdr >> ros_message.vertical_dop;

  // Member: time_dop
  cdr >> ros_message.time_dop;

  // Member: northing_dop
  cdr >> ros_message.northing_dop;

  // Member: easting_dop
  cdr >> ros_message.easting_dop;

  // Member: utc_timestamp
  cdr >> ros_message.utc_timestamp;

  // Member: utc_timestamp_flags
  cdr >> ros_message.utc_timestamp_flags;

  // Member: gps_time_tow
  cdr >> ros_message.gps_time_tow;

  // Member: gps_time_week_num
  cdr >> ros_message.gps_time_week_num;

  // Member: gps_clock_bias
  cdr >> ros_message.gps_clock_bias;

  // Member: gps_clock_drift
  cdr >> ros_message.gps_clock_drift;

  // Member: gps_clock_accuracy
  cdr >> ros_message.gps_clock_accuracy;

  // Member: gnss_fix_type
  cdr >> ros_message.gnss_fix_type;

  // Member: gnss_fix_sv_count
  cdr >> ros_message.gnss_fix_sv_count;

  // Member: gnss_fix_flags
  cdr >> ros_message.gnss_fix_flags;

  // Member: sensor_state
  cdr >> ros_message.sensor_state;

  // Member: antenna_state
  cdr >> ros_message.antenna_state;

  // Member: antenna_power
  cdr >> ros_message.antenna_power;

  // Member: dgnss_newest_age_gnss_base_0
  cdr >> ros_message.dgnss_newest_age_gnss_base_0;

  // Member: dgnss_base_station_status_gnss_base_0
  cdr >> ros_message.dgnss_base_station_status_gnss_base_0;

  // Member: dgnss_num_channels_gnss_base_0
  cdr >> ros_message.dgnss_num_channels_gnss_base_0;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wamv_interfaces
get_serialized_size(
  const wamv_interfaces::msg::MicrostrainGnss & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: latitude
  {
    size_t item_size = sizeof(ros_message.latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: longitude
  {
    size_t item_size = sizeof(ros_message.longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: height_above_elipsoid
  {
    size_t item_size = sizeof(ros_message.height_above_elipsoid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: height_above_msl
  {
    size_t item_size = sizeof(ros_message.height_above_msl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: horizontal_accuracy
  {
    size_t item_size = sizeof(ros_message.horizontal_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vertical_accuracy
  {
    size_t item_size = sizeof(ros_message.vertical_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ecef_pos_x
  {
    size_t item_size = sizeof(ros_message.ecef_pos_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ecef_pos_y
  {
    size_t item_size = sizeof(ros_message.ecef_pos_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ecef_pos_z
  {
    size_t item_size = sizeof(ros_message.ecef_pos_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ecef_pos_accuracy
  {
    size_t item_size = sizeof(ros_message.ecef_pos_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: north_velocity
  {
    size_t item_size = sizeof(ros_message.north_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: east_velocity
  {
    size_t item_size = sizeof(ros_message.east_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: down_velocity
  {
    size_t item_size = sizeof(ros_message.down_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed
  {
    size_t item_size = sizeof(ros_message.speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ground_speed
  {
    size_t item_size = sizeof(ros_message.ground_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading
  {
    size_t item_size = sizeof(ros_message.heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_accuracy
  {
    size_t item_size = sizeof(ros_message.speed_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading_accuracy
  {
    size_t item_size = sizeof(ros_message.heading_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ecef_vel_x
  {
    size_t item_size = sizeof(ros_message.ecef_vel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ecef_vel_y
  {
    size_t item_size = sizeof(ros_message.ecef_vel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ecef_vel_z
  {
    size_t item_size = sizeof(ros_message.ecef_vel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ecef_vel_accuracy
  {
    size_t item_size = sizeof(ros_message.ecef_vel_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: geometric_dop
  {
    size_t item_size = sizeof(ros_message.geometric_dop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_dop
  {
    size_t item_size = sizeof(ros_message.position_dop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: horizontal_dop
  {
    size_t item_size = sizeof(ros_message.horizontal_dop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vertical_dop
  {
    size_t item_size = sizeof(ros_message.vertical_dop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_dop
  {
    size_t item_size = sizeof(ros_message.time_dop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: northing_dop
  {
    size_t item_size = sizeof(ros_message.northing_dop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: easting_dop
  {
    size_t item_size = sizeof(ros_message.easting_dop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: utc_timestamp
  {
    size_t item_size = sizeof(ros_message.utc_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: utc_timestamp_flags
  {
    size_t item_size = sizeof(ros_message.utc_timestamp_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_time_tow
  {
    size_t item_size = sizeof(ros_message.gps_time_tow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_time_week_num
  {
    size_t item_size = sizeof(ros_message.gps_time_week_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_clock_bias
  {
    size_t item_size = sizeof(ros_message.gps_clock_bias);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_clock_drift
  {
    size_t item_size = sizeof(ros_message.gps_clock_drift);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_clock_accuracy
  {
    size_t item_size = sizeof(ros_message.gps_clock_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_fix_type
  {
    size_t item_size = sizeof(ros_message.gnss_fix_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_fix_sv_count
  {
    size_t item_size = sizeof(ros_message.gnss_fix_sv_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_fix_flags
  {
    size_t item_size = sizeof(ros_message.gnss_fix_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sensor_state
  {
    size_t item_size = sizeof(ros_message.sensor_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: antenna_state
  {
    size_t item_size = sizeof(ros_message.antenna_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: antenna_power
  {
    size_t item_size = sizeof(ros_message.antenna_power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dgnss_newest_age_gnss_base_0
  {
    size_t item_size = sizeof(ros_message.dgnss_newest_age_gnss_base_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dgnss_base_station_status_gnss_base_0
  {
    size_t item_size = sizeof(ros_message.dgnss_base_station_status_gnss_base_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dgnss_num_channels_gnss_base_0
  {
    size_t item_size = sizeof(ros_message.dgnss_num_channels_gnss_base_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wamv_interfaces
max_serialized_size_MicrostrainGnss(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: latitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: longitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: height_above_elipsoid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: height_above_msl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: horizontal_accuracy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vertical_accuracy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ecef_pos_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ecef_pos_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ecef_pos_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ecef_pos_accuracy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: north_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: east_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: down_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ground_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed_accuracy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: heading_accuracy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ecef_vel_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ecef_vel_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ecef_vel_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ecef_vel_accuracy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: geometric_dop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: position_dop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: horizontal_dop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vertical_dop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time_dop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: northing_dop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: easting_dop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: utc_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: utc_timestamp_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gps_time_tow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gps_time_week_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gps_clock_bias
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gps_clock_drift
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gps_clock_accuracy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gnss_fix_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: gnss_fix_sv_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: gnss_fix_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sensor_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: antenna_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: antenna_power
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: dgnss_newest_age_gnss_base_0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dgnss_base_station_status_gnss_base_0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: dgnss_num_channels_gnss_base_0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = wamv_interfaces::msg::MicrostrainGnss;
    is_plain =
      (
      offsetof(DataType, dgnss_num_channels_gnss_base_0) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MicrostrainGnss__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const wamv_interfaces::msg::MicrostrainGnss *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MicrostrainGnss__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<wamv_interfaces::msg::MicrostrainGnss *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MicrostrainGnss__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const wamv_interfaces::msg::MicrostrainGnss *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MicrostrainGnss__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MicrostrainGnss(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MicrostrainGnss__callbacks = {
  "wamv_interfaces::msg",
  "MicrostrainGnss",
  _MicrostrainGnss__cdr_serialize,
  _MicrostrainGnss__cdr_deserialize,
  _MicrostrainGnss__get_serialized_size,
  _MicrostrainGnss__max_serialized_size
};

static rosidl_message_type_support_t _MicrostrainGnss__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MicrostrainGnss__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace wamv_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_wamv_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<wamv_interfaces::msg::MicrostrainGnss>()
{
  return &wamv_interfaces::msg::typesupport_fastrtps_cpp::_MicrostrainGnss__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wamv_interfaces, msg, MicrostrainGnss)() {
  return &wamv_interfaces::msg::typesupport_fastrtps_cpp::_MicrostrainGnss__handle;
}

#ifdef __cplusplus
}
#endif
