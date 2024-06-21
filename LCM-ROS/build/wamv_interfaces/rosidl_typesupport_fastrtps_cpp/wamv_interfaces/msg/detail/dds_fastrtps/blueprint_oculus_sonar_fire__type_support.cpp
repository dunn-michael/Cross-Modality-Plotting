// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from wamv_interfaces:msg/BlueprintOculusSonarFire.idl
// generated code does not contain a copyright notice
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_fire__rosidl_typesupport_fastrtps_cpp.hpp"
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_fire__struct.hpp"

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
  const wamv_interfaces::msg::BlueprintOculusSonarFire & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: mode
  cdr << ros_message.mode;
  // Member: gamma
  cdr << ros_message.gamma;
  // Member: flags
  cdr << ros_message.flags;
  // Member: ping_rate
  cdr << ros_message.ping_rate;
  // Member: range
  cdr << ros_message.range;
  // Member: gain
  cdr << ros_message.gain;
  // Member: speed_of_sound
  cdr << ros_message.speed_of_sound;
  // Member: salinity
  cdr << ros_message.salinity;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wamv_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wamv_interfaces::msg::BlueprintOculusSonarFire & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: mode
  cdr >> ros_message.mode;

  // Member: gamma
  cdr >> ros_message.gamma;

  // Member: flags
  cdr >> ros_message.flags;

  // Member: ping_rate
  cdr >> ros_message.ping_rate;

  // Member: range
  cdr >> ros_message.range;

  // Member: gain
  cdr >> ros_message.gain;

  // Member: speed_of_sound
  cdr >> ros_message.speed_of_sound;

  // Member: salinity
  cdr >> ros_message.salinity;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wamv_interfaces
get_serialized_size(
  const wamv_interfaces::msg::BlueprintOculusSonarFire & ros_message,
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
  // Member: mode
  {
    size_t item_size = sizeof(ros_message.mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gamma
  {
    size_t item_size = sizeof(ros_message.gamma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flags
  {
    size_t item_size = sizeof(ros_message.flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ping_rate
  {
    size_t item_size = sizeof(ros_message.ping_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: range
  {
    size_t item_size = sizeof(ros_message.range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gain
  {
    size_t item_size = sizeof(ros_message.gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_of_sound
  {
    size_t item_size = sizeof(ros_message.speed_of_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: salinity
  {
    size_t item_size = sizeof(ros_message.salinity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wamv_interfaces
max_serialized_size_BlueprintOculusSonarFire(
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

  // Member: mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: gamma
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ping_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed_of_sound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: salinity
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
    using DataType = wamv_interfaces::msg::BlueprintOculusSonarFire;
    is_plain =
      (
      offsetof(DataType, salinity) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _BlueprintOculusSonarFire__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const wamv_interfaces::msg::BlueprintOculusSonarFire *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BlueprintOculusSonarFire__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<wamv_interfaces::msg::BlueprintOculusSonarFire *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BlueprintOculusSonarFire__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const wamv_interfaces::msg::BlueprintOculusSonarFire *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BlueprintOculusSonarFire__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BlueprintOculusSonarFire(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BlueprintOculusSonarFire__callbacks = {
  "wamv_interfaces::msg",
  "BlueprintOculusSonarFire",
  _BlueprintOculusSonarFire__cdr_serialize,
  _BlueprintOculusSonarFire__cdr_deserialize,
  _BlueprintOculusSonarFire__get_serialized_size,
  _BlueprintOculusSonarFire__max_serialized_size
};

static rosidl_message_type_support_t _BlueprintOculusSonarFire__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BlueprintOculusSonarFire__callbacks,
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
get_message_type_support_handle<wamv_interfaces::msg::BlueprintOculusSonarFire>()
{
  return &wamv_interfaces::msg::typesupport_fastrtps_cpp::_BlueprintOculusSonarFire__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wamv_interfaces, msg, BlueprintOculusSonarFire)() {
  return &wamv_interfaces::msg::typesupport_fastrtps_cpp::_BlueprintOculusSonarFire__handle;
}

#ifdef __cplusplus
}
#endif
