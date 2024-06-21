// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wamv_interfaces:msg/BlueprintOculusSonarFire.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_fire__rosidl_typesupport_introspection_c.h"
#include "wamv_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_fire__functions.h"
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_fire__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void wamv_interfaces__msg__BlueprintOculusSonarFire__rosidl_typesupport_introspection_c__BlueprintOculusSonarFire_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wamv_interfaces__msg__BlueprintOculusSonarFire__init(message_memory);
}

void wamv_interfaces__msg__BlueprintOculusSonarFire__rosidl_typesupport_introspection_c__BlueprintOculusSonarFire_fini_function(void * message_memory)
{
  wamv_interfaces__msg__BlueprintOculusSonarFire__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember wamv_interfaces__msg__BlueprintOculusSonarFire__rosidl_typesupport_introspection_c__BlueprintOculusSonarFire_message_member_array[9] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wamv_interfaces__msg__BlueprintOculusSonarFire, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wamv_interfaces__msg__BlueprintOculusSonarFire, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gamma",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wamv_interfaces__msg__BlueprintOculusSonarFire, gamma),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wamv_interfaces__msg__BlueprintOculusSonarFire, flags),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ping_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wamv_interfaces__msg__BlueprintOculusSonarFire, ping_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wamv_interfaces__msg__BlueprintOculusSonarFire, range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gain",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wamv_interfaces__msg__BlueprintOculusSonarFire, gain),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_of_sound",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wamv_interfaces__msg__BlueprintOculusSonarFire, speed_of_sound),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "salinity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wamv_interfaces__msg__BlueprintOculusSonarFire, salinity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wamv_interfaces__msg__BlueprintOculusSonarFire__rosidl_typesupport_introspection_c__BlueprintOculusSonarFire_message_members = {
  "wamv_interfaces__msg",  // message namespace
  "BlueprintOculusSonarFire",  // message name
  9,  // number of fields
  sizeof(wamv_interfaces__msg__BlueprintOculusSonarFire),
  wamv_interfaces__msg__BlueprintOculusSonarFire__rosidl_typesupport_introspection_c__BlueprintOculusSonarFire_message_member_array,  // message members
  wamv_interfaces__msg__BlueprintOculusSonarFire__rosidl_typesupport_introspection_c__BlueprintOculusSonarFire_init_function,  // function to initialize message memory (memory has to be allocated)
  wamv_interfaces__msg__BlueprintOculusSonarFire__rosidl_typesupport_introspection_c__BlueprintOculusSonarFire_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wamv_interfaces__msg__BlueprintOculusSonarFire__rosidl_typesupport_introspection_c__BlueprintOculusSonarFire_message_type_support_handle = {
  0,
  &wamv_interfaces__msg__BlueprintOculusSonarFire__rosidl_typesupport_introspection_c__BlueprintOculusSonarFire_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wamv_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wamv_interfaces, msg, BlueprintOculusSonarFire)() {
  if (!wamv_interfaces__msg__BlueprintOculusSonarFire__rosidl_typesupport_introspection_c__BlueprintOculusSonarFire_message_type_support_handle.typesupport_identifier) {
    wamv_interfaces__msg__BlueprintOculusSonarFire__rosidl_typesupport_introspection_c__BlueprintOculusSonarFire_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wamv_interfaces__msg__BlueprintOculusSonarFire__rosidl_typesupport_introspection_c__BlueprintOculusSonarFire_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
