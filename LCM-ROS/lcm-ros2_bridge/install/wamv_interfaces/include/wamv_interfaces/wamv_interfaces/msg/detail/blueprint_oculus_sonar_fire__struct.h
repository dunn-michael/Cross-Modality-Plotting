// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wamv_interfaces:msg/BlueprintOculusSonarFire.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_FIRE__STRUCT_H_
#define WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_FIRE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BlueprintOculusSonarFire in the package wamv_interfaces.
typedef struct wamv_interfaces__msg__BlueprintOculusSonarFire
{
  int64_t timestamp;
  int16_t mode;
  int16_t gamma;
  int16_t flags;
  int16_t ping_rate;
  float range;
  float gain;
  float speed_of_sound;
  float salinity;
} wamv_interfaces__msg__BlueprintOculusSonarFire;

// Struct for a sequence of wamv_interfaces__msg__BlueprintOculusSonarFire.
typedef struct wamv_interfaces__msg__BlueprintOculusSonarFire__Sequence
{
  wamv_interfaces__msg__BlueprintOculusSonarFire * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wamv_interfaces__msg__BlueprintOculusSonarFire__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_FIRE__STRUCT_H_
