// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wamv_interfaces:msg/BlueprintOculusSonarImage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_image__rosidl_typesupport_introspection_c.h"
#include "wamv_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_image__functions.h"
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_image__struct.h"


// Include directives for member types
// Member `encoding`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__BlueprintOculusSonarImage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wamv_interfaces__msg__BlueprintOculusSonarImage__init(message_memory);
}

void wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__BlueprintOculusSonarImage_fini_function(void * message_memory)
{
  wamv_interfaces__msg__BlueprintOculusSonarImage__fini(message_memory);
}

size_t wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__size_function__BlueprintOculusSonarImage__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__get_const_function__BlueprintOculusSonarImage__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__get_function__BlueprintOculusSonarImage__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__fetch_function__BlueprintOculusSonarImage__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__get_const_function__BlueprintOculusSonarImage__data(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__assign_function__BlueprintOculusSonarImage__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__get_function__BlueprintOculusSonarImage__data(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__resize_function__BlueprintOculusSonarImage__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__BlueprintOculusSonarImage_message_member_array[6] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wamv_interfaces__msg__BlueprintOculusSonarImage, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wamv_interfaces__msg__BlueprintOculusSonarImage, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wamv_interfaces__msg__BlueprintOculusSonarImage, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "encoding",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wamv_interfaces__msg__BlueprintOculusSonarImage, encoding),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_bigendian",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wamv_interfaces__msg__BlueprintOculusSonarImage, is_bigendian),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wamv_interfaces__msg__BlueprintOculusSonarImage, data),  // bytes offset in struct
    NULL,  // default value
    wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__size_function__BlueprintOculusSonarImage__data,  // size() function pointer
    wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__get_const_function__BlueprintOculusSonarImage__data,  // get_const(index) function pointer
    wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__get_function__BlueprintOculusSonarImage__data,  // get(index) function pointer
    wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__fetch_function__BlueprintOculusSonarImage__data,  // fetch(index, &value) function pointer
    wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__assign_function__BlueprintOculusSonarImage__data,  // assign(index, value) function pointer
    wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__resize_function__BlueprintOculusSonarImage__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__BlueprintOculusSonarImage_message_members = {
  "wamv_interfaces__msg",  // message namespace
  "BlueprintOculusSonarImage",  // message name
  6,  // number of fields
  sizeof(wamv_interfaces__msg__BlueprintOculusSonarImage),
  wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__BlueprintOculusSonarImage_message_member_array,  // message members
  wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__BlueprintOculusSonarImage_init_function,  // function to initialize message memory (memory has to be allocated)
  wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__BlueprintOculusSonarImage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__BlueprintOculusSonarImage_message_type_support_handle = {
  0,
  &wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__BlueprintOculusSonarImage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wamv_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wamv_interfaces, msg, BlueprintOculusSonarImage)() {
  if (!wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__BlueprintOculusSonarImage_message_type_support_handle.typesupport_identifier) {
    wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__BlueprintOculusSonarImage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wamv_interfaces__msg__BlueprintOculusSonarImage__rosidl_typesupport_introspection_c__BlueprintOculusSonarImage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
