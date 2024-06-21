// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wamv_interfaces:msg/BlueprintOculusSonarImage.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_IMAGE__STRUCT_H_
#define WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'encoding'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/BlueprintOculusSonarImage in the package wamv_interfaces.
typedef struct wamv_interfaces__msg__BlueprintOculusSonarImage
{
  int64_t timestamp;
  int32_t height;
  int32_t width;
  rosidl_runtime_c__String encoding;
  int16_t is_bigendian;
  rosidl_runtime_c__int16__Sequence data;
} wamv_interfaces__msg__BlueprintOculusSonarImage;

// Struct for a sequence of wamv_interfaces__msg__BlueprintOculusSonarImage.
typedef struct wamv_interfaces__msg__BlueprintOculusSonarImage__Sequence
{
  wamv_interfaces__msg__BlueprintOculusSonarImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wamv_interfaces__msg__BlueprintOculusSonarImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_IMAGE__STRUCT_H_
