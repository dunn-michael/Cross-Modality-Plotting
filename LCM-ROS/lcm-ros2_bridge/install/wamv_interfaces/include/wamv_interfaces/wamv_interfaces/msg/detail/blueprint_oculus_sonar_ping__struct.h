// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wamv_interfaces:msg/BlueprintOculusSonarPing.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_PING__STRUCT_H_
#define WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_PING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bearings'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'fire_msg'
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_fire__struct.h"
// Member 'image_msg'
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_image__struct.h"

/// Struct defined in msg/BlueprintOculusSonarPing in the package wamv_interfaces.
typedef struct wamv_interfaces__msg__BlueprintOculusSonarPing
{
  int64_t timestamp;
  int32_t ping_id;
  int16_t part_number;
  int32_t start_time;
  int32_t num_ranges;
  int32_t num_beams;
  rosidl_runtime_c__int16__Sequence bearings;
  float range_resolution;
  wamv_interfaces__msg__BlueprintOculusSonarFire fire_msg;
  wamv_interfaces__msg__BlueprintOculusSonarImage image_msg;
} wamv_interfaces__msg__BlueprintOculusSonarPing;

// Struct for a sequence of wamv_interfaces__msg__BlueprintOculusSonarPing.
typedef struct wamv_interfaces__msg__BlueprintOculusSonarPing__Sequence
{
  wamv_interfaces__msg__BlueprintOculusSonarPing * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wamv_interfaces__msg__BlueprintOculusSonarPing__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_PING__STRUCT_H_
