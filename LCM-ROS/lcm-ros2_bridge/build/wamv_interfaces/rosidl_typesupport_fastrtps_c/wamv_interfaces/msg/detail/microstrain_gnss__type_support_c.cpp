// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wamv_interfaces:msg/MicrostrainGnss.idl
// generated code does not contain a copyright notice
#include "wamv_interfaces/msg/detail/microstrain_gnss__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wamv_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wamv_interfaces/msg/detail/microstrain_gnss__struct.h"
#include "wamv_interfaces/msg/detail/microstrain_gnss__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MicrostrainGnss__ros_msg_type = wamv_interfaces__msg__MicrostrainGnss;

static bool _MicrostrainGnss__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MicrostrainGnss__ros_msg_type * ros_message = static_cast<const _MicrostrainGnss__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: latitude
  {
    cdr << ros_message->latitude;
  }

  // Field name: longitude
  {
    cdr << ros_message->longitude;
  }

  // Field name: height_above_elipsoid
  {
    cdr << ros_message->height_above_elipsoid;
  }

  // Field name: height_above_msl
  {
    cdr << ros_message->height_above_msl;
  }

  // Field name: horizontal_accuracy
  {
    cdr << ros_message->horizontal_accuracy;
  }

  // Field name: vertical_accuracy
  {
    cdr << ros_message->vertical_accuracy;
  }

  // Field name: ecef_pos_x
  {
    cdr << ros_message->ecef_pos_x;
  }

  // Field name: ecef_pos_y
  {
    cdr << ros_message->ecef_pos_y;
  }

  // Field name: ecef_pos_z
  {
    cdr << ros_message->ecef_pos_z;
  }

  // Field name: ecef_pos_accuracy
  {
    cdr << ros_message->ecef_pos_accuracy;
  }

  // Field name: north_velocity
  {
    cdr << ros_message->north_velocity;
  }

  // Field name: east_velocity
  {
    cdr << ros_message->east_velocity;
  }

  // Field name: down_velocity
  {
    cdr << ros_message->down_velocity;
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: ground_speed
  {
    cdr << ros_message->ground_speed;
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: speed_accuracy
  {
    cdr << ros_message->speed_accuracy;
  }

  // Field name: heading_accuracy
  {
    cdr << ros_message->heading_accuracy;
  }

  // Field name: ecef_vel_x
  {
    cdr << ros_message->ecef_vel_x;
  }

  // Field name: ecef_vel_y
  {
    cdr << ros_message->ecef_vel_y;
  }

  // Field name: ecef_vel_z
  {
    cdr << ros_message->ecef_vel_z;
  }

  // Field name: ecef_vel_accuracy
  {
    cdr << ros_message->ecef_vel_accuracy;
  }

  // Field name: geometric_dop
  {
    cdr << ros_message->geometric_dop;
  }

  // Field name: position_dop
  {
    cdr << ros_message->position_dop;
  }

  // Field name: horizontal_dop
  {
    cdr << ros_message->horizontal_dop;
  }

  // Field name: vertical_dop
  {
    cdr << ros_message->vertical_dop;
  }

  // Field name: time_dop
  {
    cdr << ros_message->time_dop;
  }

  // Field name: northing_dop
  {
    cdr << ros_message->northing_dop;
  }

  // Field name: easting_dop
  {
    cdr << ros_message->easting_dop;
  }

  // Field name: utc_timestamp
  {
    cdr << ros_message->utc_timestamp;
  }

  // Field name: utc_timestamp_flags
  {
    cdr << ros_message->utc_timestamp_flags;
  }

  // Field name: gps_time_tow
  {
    cdr << ros_message->gps_time_tow;
  }

  // Field name: gps_time_week_num
  {
    cdr << ros_message->gps_time_week_num;
  }

  // Field name: gps_clock_bias
  {
    cdr << ros_message->gps_clock_bias;
  }

  // Field name: gps_clock_drift
  {
    cdr << ros_message->gps_clock_drift;
  }

  // Field name: gps_clock_accuracy
  {
    cdr << ros_message->gps_clock_accuracy;
  }

  // Field name: gnss_fix_type
  {
    cdr << ros_message->gnss_fix_type;
  }

  // Field name: gnss_fix_sv_count
  {
    cdr << ros_message->gnss_fix_sv_count;
  }

  // Field name: gnss_fix_flags
  {
    cdr << ros_message->gnss_fix_flags;
  }

  // Field name: sensor_state
  {
    cdr << ros_message->sensor_state;
  }

  // Field name: antenna_state
  {
    cdr << ros_message->antenna_state;
  }

  // Field name: antenna_power
  {
    cdr << ros_message->antenna_power;
  }

  // Field name: dgnss_newest_age_gnss_base_0
  {
    cdr << ros_message->dgnss_newest_age_gnss_base_0;
  }

  // Field name: dgnss_base_station_status_gnss_base_0
  {
    cdr << ros_message->dgnss_base_station_status_gnss_base_0;
  }

  // Field name: dgnss_num_channels_gnss_base_0
  {
    cdr << ros_message->dgnss_num_channels_gnss_base_0;
  }

  return true;
}

static bool _MicrostrainGnss__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MicrostrainGnss__ros_msg_type * ros_message = static_cast<_MicrostrainGnss__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: latitude
  {
    cdr >> ros_message->latitude;
  }

  // Field name: longitude
  {
    cdr >> ros_message->longitude;
  }

  // Field name: height_above_elipsoid
  {
    cdr >> ros_message->height_above_elipsoid;
  }

  // Field name: height_above_msl
  {
    cdr >> ros_message->height_above_msl;
  }

  // Field name: horizontal_accuracy
  {
    cdr >> ros_message->horizontal_accuracy;
  }

  // Field name: vertical_accuracy
  {
    cdr >> ros_message->vertical_accuracy;
  }

  // Field name: ecef_pos_x
  {
    cdr >> ros_message->ecef_pos_x;
  }

  // Field name: ecef_pos_y
  {
    cdr >> ros_message->ecef_pos_y;
  }

  // Field name: ecef_pos_z
  {
    cdr >> ros_message->ecef_pos_z;
  }

  // Field name: ecef_pos_accuracy
  {
    cdr >> ros_message->ecef_pos_accuracy;
  }

  // Field name: north_velocity
  {
    cdr >> ros_message->north_velocity;
  }

  // Field name: east_velocity
  {
    cdr >> ros_message->east_velocity;
  }

  // Field name: down_velocity
  {
    cdr >> ros_message->down_velocity;
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: ground_speed
  {
    cdr >> ros_message->ground_speed;
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: speed_accuracy
  {
    cdr >> ros_message->speed_accuracy;
  }

  // Field name: heading_accuracy
  {
    cdr >> ros_message->heading_accuracy;
  }

  // Field name: ecef_vel_x
  {
    cdr >> ros_message->ecef_vel_x;
  }

  // Field name: ecef_vel_y
  {
    cdr >> ros_message->ecef_vel_y;
  }

  // Field name: ecef_vel_z
  {
    cdr >> ros_message->ecef_vel_z;
  }

  // Field name: ecef_vel_accuracy
  {
    cdr >> ros_message->ecef_vel_accuracy;
  }

  // Field name: geometric_dop
  {
    cdr >> ros_message->geometric_dop;
  }

  // Field name: position_dop
  {
    cdr >> ros_message->position_dop;
  }

  // Field name: horizontal_dop
  {
    cdr >> ros_message->horizontal_dop;
  }

  // Field name: vertical_dop
  {
    cdr >> ros_message->vertical_dop;
  }

  // Field name: time_dop
  {
    cdr >> ros_message->time_dop;
  }

  // Field name: northing_dop
  {
    cdr >> ros_message->northing_dop;
  }

  // Field name: easting_dop
  {
    cdr >> ros_message->easting_dop;
  }

  // Field name: utc_timestamp
  {
    cdr >> ros_message->utc_timestamp;
  }

  // Field name: utc_timestamp_flags
  {
    cdr >> ros_message->utc_timestamp_flags;
  }

  // Field name: gps_time_tow
  {
    cdr >> ros_message->gps_time_tow;
  }

  // Field name: gps_time_week_num
  {
    cdr >> ros_message->gps_time_week_num;
  }

  // Field name: gps_clock_bias
  {
    cdr >> ros_message->gps_clock_bias;
  }

  // Field name: gps_clock_drift
  {
    cdr >> ros_message->gps_clock_drift;
  }

  // Field name: gps_clock_accuracy
  {
    cdr >> ros_message->gps_clock_accuracy;
  }

  // Field name: gnss_fix_type
  {
    cdr >> ros_message->gnss_fix_type;
  }

  // Field name: gnss_fix_sv_count
  {
    cdr >> ros_message->gnss_fix_sv_count;
  }

  // Field name: gnss_fix_flags
  {
    cdr >> ros_message->gnss_fix_flags;
  }

  // Field name: sensor_state
  {
    cdr >> ros_message->sensor_state;
  }

  // Field name: antenna_state
  {
    cdr >> ros_message->antenna_state;
  }

  // Field name: antenna_power
  {
    cdr >> ros_message->antenna_power;
  }

  // Field name: dgnss_newest_age_gnss_base_0
  {
    cdr >> ros_message->dgnss_newest_age_gnss_base_0;
  }

  // Field name: dgnss_base_station_status_gnss_base_0
  {
    cdr >> ros_message->dgnss_base_station_status_gnss_base_0;
  }

  // Field name: dgnss_num_channels_gnss_base_0
  {
    cdr >> ros_message->dgnss_num_channels_gnss_base_0;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wamv_interfaces
size_t get_serialized_size_wamv_interfaces__msg__MicrostrainGnss(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MicrostrainGnss__ros_msg_type * ros_message = static_cast<const _MicrostrainGnss__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name latitude
  {
    size_t item_size = sizeof(ros_message->latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitude
  {
    size_t item_size = sizeof(ros_message->longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height_above_elipsoid
  {
    size_t item_size = sizeof(ros_message->height_above_elipsoid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height_above_msl
  {
    size_t item_size = sizeof(ros_message->height_above_msl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name horizontal_accuracy
  {
    size_t item_size = sizeof(ros_message->horizontal_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vertical_accuracy
  {
    size_t item_size = sizeof(ros_message->vertical_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ecef_pos_x
  {
    size_t item_size = sizeof(ros_message->ecef_pos_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ecef_pos_y
  {
    size_t item_size = sizeof(ros_message->ecef_pos_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ecef_pos_z
  {
    size_t item_size = sizeof(ros_message->ecef_pos_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ecef_pos_accuracy
  {
    size_t item_size = sizeof(ros_message->ecef_pos_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name north_velocity
  {
    size_t item_size = sizeof(ros_message->north_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name east_velocity
  {
    size_t item_size = sizeof(ros_message->east_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name down_velocity
  {
    size_t item_size = sizeof(ros_message->down_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ground_speed
  {
    size_t item_size = sizeof(ros_message->ground_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_accuracy
  {
    size_t item_size = sizeof(ros_message->speed_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_accuracy
  {
    size_t item_size = sizeof(ros_message->heading_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ecef_vel_x
  {
    size_t item_size = sizeof(ros_message->ecef_vel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ecef_vel_y
  {
    size_t item_size = sizeof(ros_message->ecef_vel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ecef_vel_z
  {
    size_t item_size = sizeof(ros_message->ecef_vel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ecef_vel_accuracy
  {
    size_t item_size = sizeof(ros_message->ecef_vel_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name geometric_dop
  {
    size_t item_size = sizeof(ros_message->geometric_dop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_dop
  {
    size_t item_size = sizeof(ros_message->position_dop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name horizontal_dop
  {
    size_t item_size = sizeof(ros_message->horizontal_dop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vertical_dop
  {
    size_t item_size = sizeof(ros_message->vertical_dop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_dop
  {
    size_t item_size = sizeof(ros_message->time_dop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name northing_dop
  {
    size_t item_size = sizeof(ros_message->northing_dop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name easting_dop
  {
    size_t item_size = sizeof(ros_message->easting_dop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name utc_timestamp
  {
    size_t item_size = sizeof(ros_message->utc_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name utc_timestamp_flags
  {
    size_t item_size = sizeof(ros_message->utc_timestamp_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_time_tow
  {
    size_t item_size = sizeof(ros_message->gps_time_tow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_time_week_num
  {
    size_t item_size = sizeof(ros_message->gps_time_week_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_clock_bias
  {
    size_t item_size = sizeof(ros_message->gps_clock_bias);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_clock_drift
  {
    size_t item_size = sizeof(ros_message->gps_clock_drift);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_clock_accuracy
  {
    size_t item_size = sizeof(ros_message->gps_clock_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_fix_type
  {
    size_t item_size = sizeof(ros_message->gnss_fix_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_fix_sv_count
  {
    size_t item_size = sizeof(ros_message->gnss_fix_sv_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_fix_flags
  {
    size_t item_size = sizeof(ros_message->gnss_fix_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sensor_state
  {
    size_t item_size = sizeof(ros_message->sensor_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name antenna_state
  {
    size_t item_size = sizeof(ros_message->antenna_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name antenna_power
  {
    size_t item_size = sizeof(ros_message->antenna_power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dgnss_newest_age_gnss_base_0
  {
    size_t item_size = sizeof(ros_message->dgnss_newest_age_gnss_base_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dgnss_base_station_status_gnss_base_0
  {
    size_t item_size = sizeof(ros_message->dgnss_base_station_status_gnss_base_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dgnss_num_channels_gnss_base_0
  {
    size_t item_size = sizeof(ros_message->dgnss_num_channels_gnss_base_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MicrostrainGnss__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wamv_interfaces__msg__MicrostrainGnss(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wamv_interfaces
size_t max_serialized_size_wamv_interfaces__msg__MicrostrainGnss(
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

  // member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: latitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: longitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: height_above_elipsoid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: height_above_msl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: horizontal_accuracy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vertical_accuracy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ecef_pos_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ecef_pos_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ecef_pos_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ecef_pos_accuracy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: north_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: east_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: down_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ground_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_accuracy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heading_accuracy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ecef_vel_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ecef_vel_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ecef_vel_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ecef_vel_accuracy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: geometric_dop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: position_dop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: horizontal_dop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vertical_dop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time_dop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: northing_dop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: easting_dop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: utc_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: utc_timestamp_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gps_time_tow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gps_time_week_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gps_clock_bias
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gps_clock_drift
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gps_clock_accuracy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gnss_fix_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: gnss_fix_sv_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: gnss_fix_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sensor_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: antenna_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: antenna_power
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: dgnss_newest_age_gnss_base_0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dgnss_base_station_status_gnss_base_0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: dgnss_num_channels_gnss_base_0
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
    using DataType = wamv_interfaces__msg__MicrostrainGnss;
    is_plain =
      (
      offsetof(DataType, dgnss_num_channels_gnss_base_0) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MicrostrainGnss__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wamv_interfaces__msg__MicrostrainGnss(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MicrostrainGnss = {
  "wamv_interfaces::msg",
  "MicrostrainGnss",
  _MicrostrainGnss__cdr_serialize,
  _MicrostrainGnss__cdr_deserialize,
  _MicrostrainGnss__get_serialized_size,
  _MicrostrainGnss__max_serialized_size
};

static rosidl_message_type_support_t _MicrostrainGnss__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MicrostrainGnss,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wamv_interfaces, msg, MicrostrainGnss)() {
  return &_MicrostrainGnss__type_support;
}

#if defined(__cplusplus)
}
#endif
