// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wamv_interfaces:msg/BlueprintOculusSonarFire.idl
// generated code does not contain a copyright notice
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_fire__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wamv_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_fire__struct.h"
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_fire__functions.h"
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


using _BlueprintOculusSonarFire__ros_msg_type = wamv_interfaces__msg__BlueprintOculusSonarFire;

static bool _BlueprintOculusSonarFire__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BlueprintOculusSonarFire__ros_msg_type * ros_message = static_cast<const _BlueprintOculusSonarFire__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: gamma
  {
    cdr << ros_message->gamma;
  }

  // Field name: flags
  {
    cdr << ros_message->flags;
  }

  // Field name: ping_rate
  {
    cdr << ros_message->ping_rate;
  }

  // Field name: range
  {
    cdr << ros_message->range;
  }

  // Field name: gain
  {
    cdr << ros_message->gain;
  }

  // Field name: speed_of_sound
  {
    cdr << ros_message->speed_of_sound;
  }

  // Field name: salinity
  {
    cdr << ros_message->salinity;
  }

  return true;
}

static bool _BlueprintOculusSonarFire__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BlueprintOculusSonarFire__ros_msg_type * ros_message = static_cast<_BlueprintOculusSonarFire__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: gamma
  {
    cdr >> ros_message->gamma;
  }

  // Field name: flags
  {
    cdr >> ros_message->flags;
  }

  // Field name: ping_rate
  {
    cdr >> ros_message->ping_rate;
  }

  // Field name: range
  {
    cdr >> ros_message->range;
  }

  // Field name: gain
  {
    cdr >> ros_message->gain;
  }

  // Field name: speed_of_sound
  {
    cdr >> ros_message->speed_of_sound;
  }

  // Field name: salinity
  {
    cdr >> ros_message->salinity;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wamv_interfaces
size_t get_serialized_size_wamv_interfaces__msg__BlueprintOculusSonarFire(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BlueprintOculusSonarFire__ros_msg_type * ros_message = static_cast<const _BlueprintOculusSonarFire__ros_msg_type *>(untyped_ros_message);
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
  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gamma
  {
    size_t item_size = sizeof(ros_message->gamma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flags
  {
    size_t item_size = sizeof(ros_message->flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ping_rate
  {
    size_t item_size = sizeof(ros_message->ping_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name range
  {
    size_t item_size = sizeof(ros_message->range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gain
  {
    size_t item_size = sizeof(ros_message->gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_of_sound
  {
    size_t item_size = sizeof(ros_message->speed_of_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name salinity
  {
    size_t item_size = sizeof(ros_message->salinity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BlueprintOculusSonarFire__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wamv_interfaces__msg__BlueprintOculusSonarFire(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wamv_interfaces
size_t max_serialized_size_wamv_interfaces__msg__BlueprintOculusSonarFire(
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
  // member: mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: gamma
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ping_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_of_sound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: salinity
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
    using DataType = wamv_interfaces__msg__BlueprintOculusSonarFire;
    is_plain =
      (
      offsetof(DataType, salinity) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BlueprintOculusSonarFire__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wamv_interfaces__msg__BlueprintOculusSonarFire(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BlueprintOculusSonarFire = {
  "wamv_interfaces::msg",
  "BlueprintOculusSonarFire",
  _BlueprintOculusSonarFire__cdr_serialize,
  _BlueprintOculusSonarFire__cdr_deserialize,
  _BlueprintOculusSonarFire__get_serialized_size,
  _BlueprintOculusSonarFire__max_serialized_size
};

static rosidl_message_type_support_t _BlueprintOculusSonarFire__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BlueprintOculusSonarFire,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wamv_interfaces, msg, BlueprintOculusSonarFire)() {
  return &_BlueprintOculusSonarFire__type_support;
}

#if defined(__cplusplus)
}
#endif
