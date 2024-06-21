// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wamv_interfaces:msg/BlueprintOculusSonarPing.idl
// generated code does not contain a copyright notice
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_ping__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wamv_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_ping__struct.h"
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_ping__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // bearings
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // bearings
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_fire__functions.h"  // fire_msg
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_image__functions.h"  // image_msg

// forward declare type support functions
size_t get_serialized_size_wamv_interfaces__msg__BlueprintOculusSonarFire(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_wamv_interfaces__msg__BlueprintOculusSonarFire(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wamv_interfaces, msg, BlueprintOculusSonarFire)();
size_t get_serialized_size_wamv_interfaces__msg__BlueprintOculusSonarImage(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_wamv_interfaces__msg__BlueprintOculusSonarImage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wamv_interfaces, msg, BlueprintOculusSonarImage)();


using _BlueprintOculusSonarPing__ros_msg_type = wamv_interfaces__msg__BlueprintOculusSonarPing;

static bool _BlueprintOculusSonarPing__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BlueprintOculusSonarPing__ros_msg_type * ros_message = static_cast<const _BlueprintOculusSonarPing__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: ping_id
  {
    cdr << ros_message->ping_id;
  }

  // Field name: part_number
  {
    cdr << ros_message->part_number;
  }

  // Field name: start_time
  {
    cdr << ros_message->start_time;
  }

  // Field name: num_ranges
  {
    cdr << ros_message->num_ranges;
  }

  // Field name: num_beams
  {
    cdr << ros_message->num_beams;
  }

  // Field name: bearings
  {
    size_t size = ros_message->bearings.size;
    auto array_ptr = ros_message->bearings.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: range_resolution
  {
    cdr << ros_message->range_resolution;
  }

  // Field name: fire_msg
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, wamv_interfaces, msg, BlueprintOculusSonarFire
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fire_msg, cdr))
    {
      return false;
    }
  }

  // Field name: image_msg
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, wamv_interfaces, msg, BlueprintOculusSonarImage
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->image_msg, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _BlueprintOculusSonarPing__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BlueprintOculusSonarPing__ros_msg_type * ros_message = static_cast<_BlueprintOculusSonarPing__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: ping_id
  {
    cdr >> ros_message->ping_id;
  }

  // Field name: part_number
  {
    cdr >> ros_message->part_number;
  }

  // Field name: start_time
  {
    cdr >> ros_message->start_time;
  }

  // Field name: num_ranges
  {
    cdr >> ros_message->num_ranges;
  }

  // Field name: num_beams
  {
    cdr >> ros_message->num_beams;
  }

  // Field name: bearings
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bearings.data) {
      rosidl_runtime_c__int16__Sequence__fini(&ros_message->bearings);
    }
    if (!rosidl_runtime_c__int16__Sequence__init(&ros_message->bearings, size)) {
      fprintf(stderr, "failed to create array for field 'bearings'");
      return false;
    }
    auto array_ptr = ros_message->bearings.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: range_resolution
  {
    cdr >> ros_message->range_resolution;
  }

  // Field name: fire_msg
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, wamv_interfaces, msg, BlueprintOculusSonarFire
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fire_msg))
    {
      return false;
    }
  }

  // Field name: image_msg
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, wamv_interfaces, msg, BlueprintOculusSonarImage
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->image_msg))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wamv_interfaces
size_t get_serialized_size_wamv_interfaces__msg__BlueprintOculusSonarPing(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BlueprintOculusSonarPing__ros_msg_type * ros_message = static_cast<const _BlueprintOculusSonarPing__ros_msg_type *>(untyped_ros_message);
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
  // field.name ping_id
  {
    size_t item_size = sizeof(ros_message->ping_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name part_number
  {
    size_t item_size = sizeof(ros_message->part_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name start_time
  {
    size_t item_size = sizeof(ros_message->start_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_ranges
  {
    size_t item_size = sizeof(ros_message->num_ranges);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_beams
  {
    size_t item_size = sizeof(ros_message->num_beams);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bearings
  {
    size_t array_size = ros_message->bearings.size;
    auto array_ptr = ros_message->bearings.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name range_resolution
  {
    size_t item_size = sizeof(ros_message->range_resolution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fire_msg

  current_alignment += get_serialized_size_wamv_interfaces__msg__BlueprintOculusSonarFire(
    &(ros_message->fire_msg), current_alignment);
  // field.name image_msg

  current_alignment += get_serialized_size_wamv_interfaces__msg__BlueprintOculusSonarImage(
    &(ros_message->image_msg), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _BlueprintOculusSonarPing__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wamv_interfaces__msg__BlueprintOculusSonarPing(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wamv_interfaces
size_t max_serialized_size_wamv_interfaces__msg__BlueprintOculusSonarPing(
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
  // member: ping_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: part_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: start_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: num_ranges
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: num_beams
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bearings
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: range_resolution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fire_msg
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_wamv_interfaces__msg__BlueprintOculusSonarFire(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: image_msg
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_wamv_interfaces__msg__BlueprintOculusSonarImage(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = wamv_interfaces__msg__BlueprintOculusSonarPing;
    is_plain =
      (
      offsetof(DataType, image_msg) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BlueprintOculusSonarPing__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wamv_interfaces__msg__BlueprintOculusSonarPing(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BlueprintOculusSonarPing = {
  "wamv_interfaces::msg",
  "BlueprintOculusSonarPing",
  _BlueprintOculusSonarPing__cdr_serialize,
  _BlueprintOculusSonarPing__cdr_deserialize,
  _BlueprintOculusSonarPing__get_serialized_size,
  _BlueprintOculusSonarPing__max_serialized_size
};

static rosidl_message_type_support_t _BlueprintOculusSonarPing__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BlueprintOculusSonarPing,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wamv_interfaces, msg, BlueprintOculusSonarPing)() {
  return &_BlueprintOculusSonarPing__type_support;
}

#if defined(__cplusplus)
}
#endif
