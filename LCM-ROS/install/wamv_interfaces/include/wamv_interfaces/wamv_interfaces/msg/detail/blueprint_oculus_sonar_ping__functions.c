// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wamv_interfaces:msg/BlueprintOculusSonarPing.idl
// generated code does not contain a copyright notice
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_ping__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `bearings`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `fire_msg`
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_fire__functions.h"
// Member `image_msg`
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_image__functions.h"

bool
wamv_interfaces__msg__BlueprintOculusSonarPing__init(wamv_interfaces__msg__BlueprintOculusSonarPing * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // ping_id
  // part_number
  // start_time
  // num_ranges
  // num_beams
  // bearings
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->bearings, 0)) {
    wamv_interfaces__msg__BlueprintOculusSonarPing__fini(msg);
    return false;
  }
  // range_resolution
  // fire_msg
  if (!wamv_interfaces__msg__BlueprintOculusSonarFire__init(&msg->fire_msg)) {
    wamv_interfaces__msg__BlueprintOculusSonarPing__fini(msg);
    return false;
  }
  // image_msg
  if (!wamv_interfaces__msg__BlueprintOculusSonarImage__init(&msg->image_msg)) {
    wamv_interfaces__msg__BlueprintOculusSonarPing__fini(msg);
    return false;
  }
  return true;
}

void
wamv_interfaces__msg__BlueprintOculusSonarPing__fini(wamv_interfaces__msg__BlueprintOculusSonarPing * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // ping_id
  // part_number
  // start_time
  // num_ranges
  // num_beams
  // bearings
  rosidl_runtime_c__int16__Sequence__fini(&msg->bearings);
  // range_resolution
  // fire_msg
  wamv_interfaces__msg__BlueprintOculusSonarFire__fini(&msg->fire_msg);
  // image_msg
  wamv_interfaces__msg__BlueprintOculusSonarImage__fini(&msg->image_msg);
}

bool
wamv_interfaces__msg__BlueprintOculusSonarPing__are_equal(const wamv_interfaces__msg__BlueprintOculusSonarPing * lhs, const wamv_interfaces__msg__BlueprintOculusSonarPing * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // ping_id
  if (lhs->ping_id != rhs->ping_id) {
    return false;
  }
  // part_number
  if (lhs->part_number != rhs->part_number) {
    return false;
  }
  // start_time
  if (lhs->start_time != rhs->start_time) {
    return false;
  }
  // num_ranges
  if (lhs->num_ranges != rhs->num_ranges) {
    return false;
  }
  // num_beams
  if (lhs->num_beams != rhs->num_beams) {
    return false;
  }
  // bearings
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->bearings), &(rhs->bearings)))
  {
    return false;
  }
  // range_resolution
  if (lhs->range_resolution != rhs->range_resolution) {
    return false;
  }
  // fire_msg
  if (!wamv_interfaces__msg__BlueprintOculusSonarFire__are_equal(
      &(lhs->fire_msg), &(rhs->fire_msg)))
  {
    return false;
  }
  // image_msg
  if (!wamv_interfaces__msg__BlueprintOculusSonarImage__are_equal(
      &(lhs->image_msg), &(rhs->image_msg)))
  {
    return false;
  }
  return true;
}

bool
wamv_interfaces__msg__BlueprintOculusSonarPing__copy(
  const wamv_interfaces__msg__BlueprintOculusSonarPing * input,
  wamv_interfaces__msg__BlueprintOculusSonarPing * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // ping_id
  output->ping_id = input->ping_id;
  // part_number
  output->part_number = input->part_number;
  // start_time
  output->start_time = input->start_time;
  // num_ranges
  output->num_ranges = input->num_ranges;
  // num_beams
  output->num_beams = input->num_beams;
  // bearings
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->bearings), &(output->bearings)))
  {
    return false;
  }
  // range_resolution
  output->range_resolution = input->range_resolution;
  // fire_msg
  if (!wamv_interfaces__msg__BlueprintOculusSonarFire__copy(
      &(input->fire_msg), &(output->fire_msg)))
  {
    return false;
  }
  // image_msg
  if (!wamv_interfaces__msg__BlueprintOculusSonarImage__copy(
      &(input->image_msg), &(output->image_msg)))
  {
    return false;
  }
  return true;
}

wamv_interfaces__msg__BlueprintOculusSonarPing *
wamv_interfaces__msg__BlueprintOculusSonarPing__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wamv_interfaces__msg__BlueprintOculusSonarPing * msg = (wamv_interfaces__msg__BlueprintOculusSonarPing *)allocator.allocate(sizeof(wamv_interfaces__msg__BlueprintOculusSonarPing), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wamv_interfaces__msg__BlueprintOculusSonarPing));
  bool success = wamv_interfaces__msg__BlueprintOculusSonarPing__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wamv_interfaces__msg__BlueprintOculusSonarPing__destroy(wamv_interfaces__msg__BlueprintOculusSonarPing * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wamv_interfaces__msg__BlueprintOculusSonarPing__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wamv_interfaces__msg__BlueprintOculusSonarPing__Sequence__init(wamv_interfaces__msg__BlueprintOculusSonarPing__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wamv_interfaces__msg__BlueprintOculusSonarPing * data = NULL;

  if (size) {
    data = (wamv_interfaces__msg__BlueprintOculusSonarPing *)allocator.zero_allocate(size, sizeof(wamv_interfaces__msg__BlueprintOculusSonarPing), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wamv_interfaces__msg__BlueprintOculusSonarPing__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wamv_interfaces__msg__BlueprintOculusSonarPing__fini(&data[i - 1]);
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
wamv_interfaces__msg__BlueprintOculusSonarPing__Sequence__fini(wamv_interfaces__msg__BlueprintOculusSonarPing__Sequence * array)
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
      wamv_interfaces__msg__BlueprintOculusSonarPing__fini(&array->data[i]);
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

wamv_interfaces__msg__BlueprintOculusSonarPing__Sequence *
wamv_interfaces__msg__BlueprintOculusSonarPing__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wamv_interfaces__msg__BlueprintOculusSonarPing__Sequence * array = (wamv_interfaces__msg__BlueprintOculusSonarPing__Sequence *)allocator.allocate(sizeof(wamv_interfaces__msg__BlueprintOculusSonarPing__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wamv_interfaces__msg__BlueprintOculusSonarPing__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wamv_interfaces__msg__BlueprintOculusSonarPing__Sequence__destroy(wamv_interfaces__msg__BlueprintOculusSonarPing__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wamv_interfaces__msg__BlueprintOculusSonarPing__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wamv_interfaces__msg__BlueprintOculusSonarPing__Sequence__are_equal(const wamv_interfaces__msg__BlueprintOculusSonarPing__Sequence * lhs, const wamv_interfaces__msg__BlueprintOculusSonarPing__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wamv_interfaces__msg__BlueprintOculusSonarPing__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wamv_interfaces__msg__BlueprintOculusSonarPing__Sequence__copy(
  const wamv_interfaces__msg__BlueprintOculusSonarPing__Sequence * input,
  wamv_interfaces__msg__BlueprintOculusSonarPing__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wamv_interfaces__msg__BlueprintOculusSonarPing);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wamv_interfaces__msg__BlueprintOculusSonarPing * data =
      (wamv_interfaces__msg__BlueprintOculusSonarPing *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wamv_interfaces__msg__BlueprintOculusSonarPing__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wamv_interfaces__msg__BlueprintOculusSonarPing__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wamv_interfaces__msg__BlueprintOculusSonarPing__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
