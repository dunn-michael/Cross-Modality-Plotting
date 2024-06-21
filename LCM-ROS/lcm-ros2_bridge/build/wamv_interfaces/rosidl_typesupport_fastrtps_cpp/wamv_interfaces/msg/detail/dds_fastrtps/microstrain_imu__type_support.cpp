// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from wamv_interfaces:msg/MicrostrainImu.idl
// generated code does not contain a copyright notice
#include "wamv_interfaces/msg/detail/microstrain_imu__rosidl_typesupport_fastrtps_cpp.hpp"
#include "wamv_interfaces/msg/detail/microstrain_imu__struct.hpp"

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
  const wamv_interfaces::msg::MicrostrainImu & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: scaled_accel_x
  cdr << ros_message.scaled_accel_x;
  // Member: scaled_accel_y
  cdr << ros_message.scaled_accel_y;
  // Member: scaled_accel_z
  cdr << ros_message.scaled_accel_z;
  // Member: scaled_gyro_x
  cdr << ros_message.scaled_gyro_x;
  // Member: scaled_gyro_y
  cdr << ros_message.scaled_gyro_y;
  // Member: scaled_gyro_z
  cdr << ros_message.scaled_gyro_z;
  // Member: scaled_mag_x
  cdr << ros_message.scaled_mag_x;
  // Member: scaled_mag_y
  cdr << ros_message.scaled_mag_y;
  // Member: scaled_mag_z
  cdr << ros_message.scaled_mag_z;
  // Member: delta_theta_x
  cdr << ros_message.delta_theta_x;
  // Member: delta_theta_y
  cdr << ros_message.delta_theta_y;
  // Member: delta_theta_z
  cdr << ros_message.delta_theta_z;
  // Member: delta_vel_x
  cdr << ros_message.delta_vel_x;
  // Member: delta_vel_y
  cdr << ros_message.delta_vel_y;
  // Member: delta_vel_z
  cdr << ros_message.delta_vel_z;
  // Member: orient_matrix
  {
    cdr << ros_message.orient_matrix;
  }
  // Member: roll
  cdr << ros_message.roll;
  // Member: pitch
  cdr << ros_message.pitch;
  // Member: yaw
  cdr << ros_message.yaw;
  // Member: orient_quaternion
  {
    cdr << ros_message.orient_quaternion;
  }
  // Member: stabilized_mag_x
  cdr << ros_message.stabilized_mag_x;
  // Member: stabilized_mag_y
  cdr << ros_message.stabilized_mag_y;
  // Member: stabilized_mag_z
  cdr << ros_message.stabilized_mag_z;
  // Member: stabilized_accel_x
  cdr << ros_message.stabilized_accel_x;
  // Member: stabilized_accel_y
  cdr << ros_message.stabilized_accel_y;
  // Member: stabilized_accel_z
  cdr << ros_message.stabilized_accel_z;
  // Member: gps_correl_timestamp_tow
  cdr << ros_message.gps_correl_timestamp_tow;
  // Member: gps_correl_timestamp_week_num
  cdr << ros_message.gps_correl_timestamp_week_num;
  // Member: gps_correl_timestamp_flags
  cdr << ros_message.gps_correl_timestamp_flags;
  // Member: scaled_ambient_pressure
  cdr << ros_message.scaled_ambient_pressure;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wamv_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wamv_interfaces::msg::MicrostrainImu & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: scaled_accel_x
  cdr >> ros_message.scaled_accel_x;

  // Member: scaled_accel_y
  cdr >> ros_message.scaled_accel_y;

  // Member: scaled_accel_z
  cdr >> ros_message.scaled_accel_z;

  // Member: scaled_gyro_x
  cdr >> ros_message.scaled_gyro_x;

  // Member: scaled_gyro_y
  cdr >> ros_message.scaled_gyro_y;

  // Member: scaled_gyro_z
  cdr >> ros_message.scaled_gyro_z;

  // Member: scaled_mag_x
  cdr >> ros_message.scaled_mag_x;

  // Member: scaled_mag_y
  cdr >> ros_message.scaled_mag_y;

  // Member: scaled_mag_z
  cdr >> ros_message.scaled_mag_z;

  // Member: delta_theta_x
  cdr >> ros_message.delta_theta_x;

  // Member: delta_theta_y
  cdr >> ros_message.delta_theta_y;

  // Member: delta_theta_z
  cdr >> ros_message.delta_theta_z;

  // Member: delta_vel_x
  cdr >> ros_message.delta_vel_x;

  // Member: delta_vel_y
  cdr >> ros_message.delta_vel_y;

  // Member: delta_vel_z
  cdr >> ros_message.delta_vel_z;

  // Member: orient_matrix
  {
    cdr >> ros_message.orient_matrix;
  }

  // Member: roll
  cdr >> ros_message.roll;

  // Member: pitch
  cdr >> ros_message.pitch;

  // Member: yaw
  cdr >> ros_message.yaw;

  // Member: orient_quaternion
  {
    cdr >> ros_message.orient_quaternion;
  }

  // Member: stabilized_mag_x
  cdr >> ros_message.stabilized_mag_x;

  // Member: stabilized_mag_y
  cdr >> ros_message.stabilized_mag_y;

  // Member: stabilized_mag_z
  cdr >> ros_message.stabilized_mag_z;

  // Member: stabilized_accel_x
  cdr >> ros_message.stabilized_accel_x;

  // Member: stabilized_accel_y
  cdr >> ros_message.stabilized_accel_y;

  // Member: stabilized_accel_z
  cdr >> ros_message.stabilized_accel_z;

  // Member: gps_correl_timestamp_tow
  cdr >> ros_message.gps_correl_timestamp_tow;

  // Member: gps_correl_timestamp_week_num
  cdr >> ros_message.gps_correl_timestamp_week_num;

  // Member: gps_correl_timestamp_flags
  cdr >> ros_message.gps_correl_timestamp_flags;

  // Member: scaled_ambient_pressure
  cdr >> ros_message.scaled_ambient_pressure;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wamv_interfaces
get_serialized_size(
  const wamv_interfaces::msg::MicrostrainImu & ros_message,
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
  // Member: scaled_accel_x
  {
    size_t item_size = sizeof(ros_message.scaled_accel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scaled_accel_y
  {
    size_t item_size = sizeof(ros_message.scaled_accel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scaled_accel_z
  {
    size_t item_size = sizeof(ros_message.scaled_accel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scaled_gyro_x
  {
    size_t item_size = sizeof(ros_message.scaled_gyro_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scaled_gyro_y
  {
    size_t item_size = sizeof(ros_message.scaled_gyro_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scaled_gyro_z
  {
    size_t item_size = sizeof(ros_message.scaled_gyro_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scaled_mag_x
  {
    size_t item_size = sizeof(ros_message.scaled_mag_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scaled_mag_y
  {
    size_t item_size = sizeof(ros_message.scaled_mag_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scaled_mag_z
  {
    size_t item_size = sizeof(ros_message.scaled_mag_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta_theta_x
  {
    size_t item_size = sizeof(ros_message.delta_theta_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta_theta_y
  {
    size_t item_size = sizeof(ros_message.delta_theta_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta_theta_z
  {
    size_t item_size = sizeof(ros_message.delta_theta_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta_vel_x
  {
    size_t item_size = sizeof(ros_message.delta_vel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta_vel_y
  {
    size_t item_size = sizeof(ros_message.delta_vel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta_vel_z
  {
    size_t item_size = sizeof(ros_message.delta_vel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: orient_matrix
  {
    size_t array_size = 9;
    size_t item_size = sizeof(ros_message.orient_matrix[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll
  {
    size_t item_size = sizeof(ros_message.roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch
  {
    size_t item_size = sizeof(ros_message.pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw
  {
    size_t item_size = sizeof(ros_message.yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: orient_quaternion
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.orient_quaternion[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stabilized_mag_x
  {
    size_t item_size = sizeof(ros_message.stabilized_mag_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stabilized_mag_y
  {
    size_t item_size = sizeof(ros_message.stabilized_mag_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stabilized_mag_z
  {
    size_t item_size = sizeof(ros_message.stabilized_mag_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stabilized_accel_x
  {
    size_t item_size = sizeof(ros_message.stabilized_accel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stabilized_accel_y
  {
    size_t item_size = sizeof(ros_message.stabilized_accel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stabilized_accel_z
  {
    size_t item_size = sizeof(ros_message.stabilized_accel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_correl_timestamp_tow
  {
    size_t item_size = sizeof(ros_message.gps_correl_timestamp_tow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_correl_timestamp_week_num
  {
    size_t item_size = sizeof(ros_message.gps_correl_timestamp_week_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_correl_timestamp_flags
  {
    size_t item_size = sizeof(ros_message.gps_correl_timestamp_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scaled_ambient_pressure
  {
    size_t item_size = sizeof(ros_message.scaled_ambient_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wamv_interfaces
max_serialized_size_MicrostrainImu(
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

  // Member: scaled_accel_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: scaled_accel_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: scaled_accel_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: scaled_gyro_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: scaled_gyro_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: scaled_gyro_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: scaled_mag_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: scaled_mag_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: scaled_mag_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: delta_theta_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: delta_theta_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: delta_theta_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: delta_vel_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: delta_vel_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: delta_vel_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: orient_matrix
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: orient_quaternion
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: stabilized_mag_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: stabilized_mag_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: stabilized_mag_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: stabilized_accel_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: stabilized_accel_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: stabilized_accel_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gps_correl_timestamp_tow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gps_correl_timestamp_week_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gps_correl_timestamp_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: scaled_ambient_pressure
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
    using DataType = wamv_interfaces::msg::MicrostrainImu;
    is_plain =
      (
      offsetof(DataType, scaled_ambient_pressure) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MicrostrainImu__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const wamv_interfaces::msg::MicrostrainImu *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MicrostrainImu__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<wamv_interfaces::msg::MicrostrainImu *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MicrostrainImu__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const wamv_interfaces::msg::MicrostrainImu *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MicrostrainImu__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MicrostrainImu(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MicrostrainImu__callbacks = {
  "wamv_interfaces::msg",
  "MicrostrainImu",
  _MicrostrainImu__cdr_serialize,
  _MicrostrainImu__cdr_deserialize,
  _MicrostrainImu__get_serialized_size,
  _MicrostrainImu__max_serialized_size
};

static rosidl_message_type_support_t _MicrostrainImu__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MicrostrainImu__callbacks,
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
get_message_type_support_handle<wamv_interfaces::msg::MicrostrainImu>()
{
  return &wamv_interfaces::msg::typesupport_fastrtps_cpp::_MicrostrainImu__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wamv_interfaces, msg, MicrostrainImu)() {
  return &wamv_interfaces::msg::typesupport_fastrtps_cpp::_MicrostrainImu__handle;
}

#ifdef __cplusplus
}
#endif
