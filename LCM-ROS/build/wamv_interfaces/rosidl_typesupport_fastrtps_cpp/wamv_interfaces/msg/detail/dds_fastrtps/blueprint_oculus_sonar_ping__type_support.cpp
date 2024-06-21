// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from wamv_interfaces:msg/BlueprintOculusSonarPing.idl
// generated code does not contain a copyright notice
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_ping__rosidl_typesupport_fastrtps_cpp.hpp"
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_ping__struct.hpp"

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
bool cdr_serialize(
  const wamv_interfaces::msg::BlueprintOculusSonarFire &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  wamv_interfaces::msg::BlueprintOculusSonarFire &);
size_t get_serialized_size(
  const wamv_interfaces::msg::BlueprintOculusSonarFire &,
  size_t current_alignment);
size_t
max_serialized_size_BlueprintOculusSonarFire(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace wamv_interfaces

namespace wamv_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const wamv_interfaces::msg::BlueprintOculusSonarImage &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  wamv_interfaces::msg::BlueprintOculusSonarImage &);
size_t get_serialized_size(
  const wamv_interfaces::msg::BlueprintOculusSonarImage &,
  size_t current_alignment);
size_t
max_serialized_size_BlueprintOculusSonarImage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace wamv_interfaces


namespace wamv_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wamv_interfaces
cdr_serialize(
  const wamv_interfaces::msg::BlueprintOculusSonarPing & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: ping_id
  cdr << ros_message.ping_id;
  // Member: part_number
  cdr << ros_message.part_number;
  // Member: start_time
  cdr << ros_message.start_time;
  // Member: num_ranges
  cdr << ros_message.num_ranges;
  // Member: num_beams
  cdr << ros_message.num_beams;
  // Member: bearings
  {
    cdr << ros_message.bearings;
  }
  // Member: range_resolution
  cdr << ros_message.range_resolution;
  // Member: fire_msg
  wamv_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.fire_msg,
    cdr);
  // Member: image_msg
  wamv_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.image_msg,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wamv_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wamv_interfaces::msg::BlueprintOculusSonarPing & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: ping_id
  cdr >> ros_message.ping_id;

  // Member: part_number
  cdr >> ros_message.part_number;

  // Member: start_time
  cdr >> ros_message.start_time;

  // Member: num_ranges
  cdr >> ros_message.num_ranges;

  // Member: num_beams
  cdr >> ros_message.num_beams;

  // Member: bearings
  {
    cdr >> ros_message.bearings;
  }

  // Member: range_resolution
  cdr >> ros_message.range_resolution;

  // Member: fire_msg
  wamv_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.fire_msg);

  // Member: image_msg
  wamv_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.image_msg);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wamv_interfaces
get_serialized_size(
  const wamv_interfaces::msg::BlueprintOculusSonarPing & ros_message,
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
  // Member: ping_id
  {
    size_t item_size = sizeof(ros_message.ping_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: part_number
  {
    size_t item_size = sizeof(ros_message.part_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: start_time
  {
    size_t item_size = sizeof(ros_message.start_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_ranges
  {
    size_t item_size = sizeof(ros_message.num_ranges);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_beams
  {
    size_t item_size = sizeof(ros_message.num_beams);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bearings
  {
    size_t array_size = ros_message.bearings.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.bearings[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: range_resolution
  {
    size_t item_size = sizeof(ros_message.range_resolution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fire_msg

  current_alignment +=
    wamv_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.fire_msg, current_alignment);
  // Member: image_msg

  current_alignment +=
    wamv_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.image_msg, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wamv_interfaces
max_serialized_size_BlueprintOculusSonarPing(
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

  // Member: ping_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: part_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: start_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: num_ranges
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: num_beams
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bearings
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

  // Member: range_resolution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fire_msg
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        wamv_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_BlueprintOculusSonarFire(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: image_msg
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        wamv_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_BlueprintOculusSonarImage(
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
    using DataType = wamv_interfaces::msg::BlueprintOculusSonarPing;
    is_plain =
      (
      offsetof(DataType, image_msg) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _BlueprintOculusSonarPing__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const wamv_interfaces::msg::BlueprintOculusSonarPing *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BlueprintOculusSonarPing__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<wamv_interfaces::msg::BlueprintOculusSonarPing *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BlueprintOculusSonarPing__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const wamv_interfaces::msg::BlueprintOculusSonarPing *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BlueprintOculusSonarPing__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BlueprintOculusSonarPing(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BlueprintOculusSonarPing__callbacks = {
  "wamv_interfaces::msg",
  "BlueprintOculusSonarPing",
  _BlueprintOculusSonarPing__cdr_serialize,
  _BlueprintOculusSonarPing__cdr_deserialize,
  _BlueprintOculusSonarPing__get_serialized_size,
  _BlueprintOculusSonarPing__max_serialized_size
};

static rosidl_message_type_support_t _BlueprintOculusSonarPing__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BlueprintOculusSonarPing__callbacks,
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
get_message_type_support_handle<wamv_interfaces::msg::BlueprintOculusSonarPing>()
{
  return &wamv_interfaces::msg::typesupport_fastrtps_cpp::_BlueprintOculusSonarPing__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wamv_interfaces, msg, BlueprintOculusSonarPing)() {
  return &wamv_interfaces::msg::typesupport_fastrtps_cpp::_BlueprintOculusSonarPing__handle;
}

#ifdef __cplusplus
}
#endif
