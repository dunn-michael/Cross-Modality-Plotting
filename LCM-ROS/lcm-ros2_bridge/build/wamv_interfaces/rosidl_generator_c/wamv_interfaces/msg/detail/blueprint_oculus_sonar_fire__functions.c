// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wamv_interfaces:msg/BlueprintOculusSonarFire.idl
// generated code does not contain a copyright notice
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_fire__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wamv_interfaces__msg__BlueprintOculusSonarFire__init(wamv_interfaces__msg__BlueprintOculusSonarFire * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // mode
  // gamma
  // flags
  // ping_rate
  // range
  // gain
  // speed_of_sound
  // salinity
  return true;
}

void
wamv_interfaces__msg__BlueprintOculusSonarFire__fini(wamv_interfaces__msg__BlueprintOculusSonarFire * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // mode
  // gamma
  // flags
  // ping_rate
  // range
  // gain
  // speed_of_sound
  // salinity
}

bool
wamv_interfaces__msg__BlueprintOculusSonarFire__are_equal(const wamv_interfaces__msg__BlueprintOculusSonarFire * lhs, const wamv_interfaces__msg__BlueprintOculusSonarFire * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // gamma
  if (lhs->gamma != rhs->gamma) {
    return false;
  }
  // flags
  if (lhs->flags != rhs->flags) {
    return false;
  }
  // ping_rate
  if (lhs->ping_rate != rhs->ping_rate) {
    return false;
  }
  // range
  if (lhs->range != rhs->range) {
    return false;
  }
  // gain
  if (lhs->gain != rhs->gain) {
    return false;
  }
  // speed_of_sound
  if (lhs->speed_of_sound != rhs->speed_of_sound) {
    return false;
  }
  // salinity
  if (lhs->salinity != rhs->salinity) {
    return false;
  }
  return true;
}

bool
wamv_interfaces__msg__BlueprintOculusSonarFire__copy(
  const wamv_interfaces__msg__BlueprintOculusSonarFire * input,
  wamv_interfaces__msg__BlueprintOculusSonarFire * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // mode
  output->mode = input->mode;
  // gamma
  output->gamma = input->gamma;
  // flags
  output->flags = input->flags;
  // ping_rate
  output->ping_rate = input->ping_rate;
  // range
  output->range = input->range;
  // gain
  output->gain = input->gain;
  // speed_of_sound
  output->speed_of_sound = input->speed_of_sound;
  // salinity
  output->salinity = input->salinity;
  return true;
}

wamv_interfaces__msg__BlueprintOculusSonarFire *
wamv_interfaces__msg__BlueprintOculusSonarFire__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wamv_interfaces__msg__BlueprintOculusSonarFire * msg = (wamv_interfaces__msg__BlueprintOculusSonarFire *)allocator.allocate(sizeof(wamv_interfaces__msg__BlueprintOculusSonarFire), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wamv_interfaces__msg__BlueprintOculusSonarFire));
  bool success = wamv_interfaces__msg__BlueprintOculusSonarFire__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wamv_interfaces__msg__BlueprintOculusSonarFire__destroy(wamv_interfaces__msg__BlueprintOculusSonarFire * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wamv_interfaces__msg__BlueprintOculusSonarFire__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wamv_interfaces__msg__BlueprintOculusSonarFire__Sequence__init(wamv_interfaces__msg__BlueprintOculusSonarFire__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wamv_interfaces__msg__BlueprintOculusSonarFire * data = NULL;

  if (size) {
    data = (wamv_interfaces__msg__BlueprintOculusSonarFire *)allocator.zero_allocate(size, sizeof(wamv_interfaces__msg__BlueprintOculusSonarFire), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wamv_interfaces__msg__BlueprintOculusSonarFire__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wamv_interfaces__msg__BlueprintOculusSonarFire__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
wamv_interfaces__msg__BlueprintOculusSonarFire__Sequence__fini(wamv_interfaces__msg__BlueprintOculusSonarFire__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      wamv_interfaces__msg__BlueprintOculusSonarFire__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

wamv_interfaces__msg__BlueprintOculusSonarFire__Sequence *
wamv_interfaces__msg__BlueprintOculusSonarFire__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wamv_interfaces__msg__BlueprintOculusSonarFire__Sequence * array = (wamv_interfaces__msg__BlueprintOculusSonarFire__Sequence *)allocator.allocate(sizeof(wamv_interfaces__msg__BlueprintOculusSonarFire__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wamv_interfaces__msg__BlueprintOculusSonarFire__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wamv_interfaces__msg__BlueprintOculusSonarFire__Sequence__destroy(wamv_interfaces__msg__BlueprintOculusSonarFire__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wamv_interfaces__msg__BlueprintOculusSonarFire__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wamv_interfaces__msg__BlueprintOculusSonarFire__Sequence__are_equal(const wamv_interfaces__msg__BlueprintOculusSonarFire__Sequence * lhs, const wamv_interfaces__msg__BlueprintOculusSonarFire__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wamv_interfaces__msg__BlueprintOculusSonarFire__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wamv_interfaces__msg__BlueprintOculusSonarFire__Sequence__copy(
  const wamv_interfaces__msg__BlueprintOculusSonarFire__Sequence * input,
  wamv_interfaces__msg__BlueprintOculusSonarFire__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wamv_interfaces__msg__BlueprintOculusSonarFire);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wamv_interfaces__msg__BlueprintOculusSonarFire * data =
      (wamv_interfaces__msg__BlueprintOculusSonarFire *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wamv_interfaces__msg__BlueprintOculusSonarFire__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wamv_interfaces__msg__BlueprintOculusSonarFire__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wamv_interfaces__msg__BlueprintOculusSonarFire__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
