// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wamv_interfaces:msg/MicrostrainImu.idl
// generated code does not contain a copyright notice
#include "wamv_interfaces/msg/detail/microstrain_imu__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wamv_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wamv_interfaces/msg/detail/microstrain_imu__struct.h"
#include "wamv_interfaces/msg/detail/microstrain_imu__functions.h"
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


using _MicrostrainImu__ros_msg_type = wamv_interfaces__msg__MicrostrainImu;

static bool _MicrostrainImu__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MicrostrainImu__ros_msg_type * ros_message = static_cast<const _MicrostrainImu__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: scaled_accel_x
  {
    cdr << ros_message->scaled_accel_x;
  }

  // Field name: scaled_accel_y
  {
    cdr << ros_message->scaled_accel_y;
  }

  // Field name: scaled_accel_z
  {
    cdr << ros_message->scaled_accel_z;
  }

  // Field name: scaled_gyro_x
  {
    cdr << ros_message->scaled_gyro_x;
  }

  // Field name: scaled_gyro_y
  {
    cdr << ros_message->scaled_gyro_y;
  }

  // Field name: scaled_gyro_z
  {
    cdr << ros_message->scaled_gyro_z;
  }

  // Field name: scaled_mag_x
  {
    cdr << ros_message->scaled_mag_x;
  }

  // Field name: scaled_mag_y
  {
    cdr << ros_message->scaled_mag_y;
  }

  // Field name: scaled_mag_z
  {
    cdr << ros_message->scaled_mag_z;
  }

  // Field name: delta_theta_x
  {
    cdr << ros_message->delta_theta_x;
  }

  // Field name: delta_theta_y
  {
    cdr << ros_message->delta_theta_y;
  }

  // Field name: delta_theta_z
  {
    cdr << ros_message->delta_theta_z;
  }

  // Field name: delta_vel_x
  {
    cdr << ros_message->delta_vel_x;
  }

  // Field name: delta_vel_y
  {
    cdr << ros_message->delta_vel_y;
  }

  // Field name: delta_vel_z
  {
    cdr << ros_message->delta_vel_z;
  }

  // Field name: orient_matrix
  {
    size_t size = 9;
    auto array_ptr = ros_message->orient_matrix;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: roll
  {
    cdr << ros_message->roll;
  }

  // Field name: pitch
  {
    cdr << ros_message->pitch;
  }

  // Field name: yaw
  {
    cdr << ros_message->yaw;
  }

  // Field name: orient_quaternion
  {
    size_t size = 3;
    auto array_ptr = ros_message->orient_quaternion;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: stabilized_mag_x
  {
    cdr << ros_message->stabilized_mag_x;
  }

  // Field name: stabilized_mag_y
  {
    cdr << ros_message->stabilized_mag_y;
  }

  // Field name: stabilized_mag_z
  {
    cdr << ros_message->stabilized_mag_z;
  }

  // Field name: stabilized_accel_x
  {
    cdr << ros_message->stabilized_accel_x;
  }

  // Field name: stabilized_accel_y
  {
    cdr << ros_message->stabilized_accel_y;
  }

  // Field name: stabilized_accel_z
  {
    cdr << ros_message->stabilized_accel_z;
  }

  // Field name: gps_correl_timestamp_tow
  {
    cdr << ros_message->gps_correl_timestamp_tow;
  }

  // Field name: gps_correl_timestamp_week_num
  {
    cdr << ros_message->gps_correl_timestamp_week_num;
  }

  // Field name: gps_correl_timestamp_flags
  {
    cdr << ros_message->gps_correl_timestamp_flags;
  }

  // Field name: scaled_ambient_pressure
  {
    cdr << ros_message->scaled_ambient_pressure;
  }

  return true;
}

static bool _MicrostrainImu__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MicrostrainImu__ros_msg_type * ros_message = static_cast<_MicrostrainImu__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: scaled_accel_x
  {
    cdr >> ros_message->scaled_accel_x;
  }

  // Field name: scaled_accel_y
  {
    cdr >> ros_message->scaled_accel_y;
  }

  // Field name: scaled_accel_z
  {
    cdr >> ros_message->scaled_accel_z;
  }

  // Field name: scaled_gyro_x
  {
    cdr >> ros_message->scaled_gyro_x;
  }

  // Field name: scaled_gyro_y
  {
    cdr >> ros_message->scaled_gyro_y;
  }

  // Field name: scaled_gyro_z
  {
    cdr >> ros_message->scaled_gyro_z;
  }

  // Field name: scaled_mag_x
  {
    cdr >> ros_message->scaled_mag_x;
  }

  // Field name: scaled_mag_y
  {
    cdr >> ros_message->scaled_mag_y;
  }

  // Field name: scaled_mag_z
  {
    cdr >> ros_message->scaled_mag_z;
  }

  // Field name: delta_theta_x
  {
    cdr >> ros_message->delta_theta_x;
  }

  // Field name: delta_theta_y
  {
    cdr >> ros_message->delta_theta_y;
  }

  // Field name: delta_theta_z
  {
    cdr >> ros_message->delta_theta_z;
  }

  // Field name: delta_vel_x
  {
    cdr >> ros_message->delta_vel_x;
  }

  // Field name: delta_vel_y
  {
    cdr >> ros_message->delta_vel_y;
  }

  // Field name: delta_vel_z
  {
    cdr >> ros_message->delta_vel_z;
  }

  // Field name: orient_matrix
  {
    size_t size = 9;
    auto array_ptr = ros_message->orient_matrix;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: roll
  {
    cdr >> ros_message->roll;
  }

  // Field name: pitch
  {
    cdr >> ros_message->pitch;
  }

  // Field name: yaw
  {
    cdr >> ros_message->yaw;
  }

  // Field name: orient_quaternion
  {
    size_t size = 3;
    auto array_ptr = ros_message->orient_quaternion;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: stabilized_mag_x
  {
    cdr >> ros_message->stabilized_mag_x;
  }

  // Field name: stabilized_mag_y
  {
    cdr >> ros_message->stabilized_mag_y;
  }

  // Field name: stabilized_mag_z
  {
    cdr >> ros_message->stabilized_mag_z;
  }

  // Field name: stabilized_accel_x
  {
    cdr >> ros_message->stabilized_accel_x;
  }

  // Field name: stabilized_accel_y
  {
    cdr >> ros_message->stabilized_accel_y;
  }

  // Field name: stabilized_accel_z
  {
    cdr >> ros_message->stabilized_accel_z;
  }

  // Field name: gps_correl_timestamp_tow
  {
    cdr >> ros_message->gps_correl_timestamp_tow;
  }

  // Field name: gps_correl_timestamp_week_num
  {
    cdr >> ros_message->gps_correl_timestamp_week_num;
  }

  // Field name: gps_correl_timestamp_flags
  {
    cdr >> ros_message->gps_correl_timestamp_flags;
  }

  // Field name: scaled_ambient_pressure
  {
    cdr >> ros_message->scaled_ambient_pressure;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wamv_interfaces
size_t get_serialized_size_wamv_interfaces__msg__MicrostrainImu(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MicrostrainImu__ros_msg_type * ros_message = static_cast<const _MicrostrainImu__ros_msg_type *>(untyped_ros_message);
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
  // field.name scaled_accel_x
  {
    size_t item_size = sizeof(ros_message->scaled_accel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scaled_accel_y
  {
    size_t item_size = sizeof(ros_message->scaled_accel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scaled_accel_z
  {
    size_t item_size = sizeof(ros_message->scaled_accel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scaled_gyro_x
  {
    size_t item_size = sizeof(ros_message->scaled_gyro_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scaled_gyro_y
  {
    size_t item_size = sizeof(ros_message->scaled_gyro_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scaled_gyro_z
  {
    size_t item_size = sizeof(ros_message->scaled_gyro_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scaled_mag_x
  {
    size_t item_size = sizeof(ros_message->scaled_mag_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scaled_mag_y
  {
    size_t item_size = sizeof(ros_message->scaled_mag_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scaled_mag_z
  {
    size_t item_size = sizeof(ros_message->scaled_mag_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_theta_x
  {
    size_t item_size = sizeof(ros_message->delta_theta_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_theta_y
  {
    size_t item_size = sizeof(ros_message->delta_theta_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_theta_z
  {
    size_t item_size = sizeof(ros_message->delta_theta_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_vel_x
  {
    size_t item_size = sizeof(ros_message->delta_vel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_vel_y
  {
    size_t item_size = sizeof(ros_message->delta_vel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_vel_z
  {
    size_t item_size = sizeof(ros_message->delta_vel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name orient_matrix
  {
    size_t array_size = 9;
    auto array_ptr = ros_message->orient_matrix;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll
  {
    size_t item_size = sizeof(ros_message->roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch
  {
    size_t item_size = sizeof(ros_message->pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw
  {
    size_t item_size = sizeof(ros_message->yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name orient_quaternion
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->orient_quaternion;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stabilized_mag_x
  {
    size_t item_size = sizeof(ros_message->stabilized_mag_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stabilized_mag_y
  {
    size_t item_size = sizeof(ros_message->stabilized_mag_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stabilized_mag_z
  {
    size_t item_size = sizeof(ros_message->stabilized_mag_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stabilized_accel_x
  {
    size_t item_size = sizeof(ros_message->stabilized_accel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stabilized_accel_y
  {
    size_t item_size = sizeof(ros_message->stabilized_accel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stabilized_accel_z
  {
    size_t item_size = sizeof(ros_message->stabilized_accel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_correl_timestamp_tow
  {
    size_t item_size = sizeof(ros_message->gps_correl_timestamp_tow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_correl_timestamp_week_num
  {
    size_t item_size = sizeof(ros_message->gps_correl_timestamp_week_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_correl_timestamp_flags
  {
    size_t item_size = sizeof(ros_message->gps_correl_timestamp_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scaled_ambient_pressure
  {
    size_t item_size = sizeof(ros_message->scaled_ambient_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MicrostrainImu__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wamv_interfaces__msg__MicrostrainImu(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wamv_interfaces
size_t max_serialized_size_wamv_interfaces__msg__MicrostrainImu(
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
  // member: scaled_accel_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: scaled_accel_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: scaled_accel_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: scaled_gyro_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: scaled_gyro_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: scaled_gyro_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: scaled_mag_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: scaled_mag_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: scaled_mag_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: delta_theta_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: delta_theta_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: delta_theta_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: delta_vel_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: delta_vel_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: delta_vel_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: orient_matrix
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: orient_quaternion
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stabilized_mag_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stabilized_mag_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stabilized_mag_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stabilized_accel_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stabilized_accel_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stabilized_accel_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gps_correl_timestamp_tow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gps_correl_timestamp_week_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gps_correl_timestamp_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: scaled_ambient_pressure
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
    using DataType = wamv_interfaces__msg__MicrostrainImu;
    is_plain =
      (
      offsetof(DataType, scaled_ambient_pressure) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MicrostrainImu__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wamv_interfaces__msg__MicrostrainImu(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MicrostrainImu = {
  "wamv_interfaces::msg",
  "MicrostrainImu",
  _MicrostrainImu__cdr_serialize,
  _MicrostrainImu__cdr_deserialize,
  _MicrostrainImu__get_serialized_size,
  _MicrostrainImu__max_serialized_size
};

static rosidl_message_type_support_t _MicrostrainImu__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MicrostrainImu,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wamv_interfaces, msg, MicrostrainImu)() {
  return &_MicrostrainImu__type_support;
}

#if defined(__cplusplus)
}
#endif
