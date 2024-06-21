// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wamv_interfaces:msg/BlueprintOculusSonarImage.idl
// generated code does not contain a copyright notice
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `encoding`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
wamv_interfaces__msg__BlueprintOculusSonarImage__init(wamv_interfaces__msg__BlueprintOculusSonarImage * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // height
  // width
  // encoding
  if (!rosidl_runtime_c__String__init(&msg->encoding)) {
    wamv_interfaces__msg__BlueprintOculusSonarImage__fini(msg);
    return false;
  }
  // is_bigendian
  // data
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->data, 0)) {
    wamv_interfaces__msg__BlueprintOculusSonarImage__fini(msg);
    return false;
  }
  return true;
}

void
wamv_interfaces__msg__BlueprintOculusSonarImage__fini(wamv_interfaces__msg__BlueprintOculusSonarImage * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // height
  // width
  // encoding
  rosidl_runtime_c__String__fini(&msg->encoding);
  // is_bigendian
  // data
  rosidl_runtime_c__int16__Sequence__fini(&msg->data);
}

bool
wamv_interfaces__msg__BlueprintOculusSonarImage__are_equal(const wamv_interfaces__msg__BlueprintOculusSonarImage * lhs, const wamv_interfaces__msg__BlueprintOculusSonarImage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // encoding
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->encoding), &(rhs->encoding)))
  {
    return false;
  }
  // is_bigendian
  if (lhs->is_bigendian != rhs->is_bigendian) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
wamv_interfaces__msg__BlueprintOculusSonarImage__copy(
  const wamv_interfaces__msg__BlueprintOculusSonarImage * input,
  wamv_interfaces__msg__BlueprintOculusSonarImage * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // height
  output->height = input->height;
  // width
  output->width = input->width;
  // encoding
  if (!rosidl_runtime_c__String__copy(
      &(input->encoding), &(output->encoding)))
  {
    return false;
  }
  // is_bigendian
  output->is_bigendian = input->is_bigendian;
  // data
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

wamv_interfaces__msg__BlueprintOculusSonarImage *
wamv_interfaces__msg__BlueprintOculusSonarImage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wamv_interfaces__msg__BlueprintOculusSonarImage * msg = (wamv_interfaces__msg__BlueprintOculusSonarImage *)allocator.allocate(sizeof(wamv_interfaces__msg__BlueprintOculusSonarImage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wamv_interfaces__msg__BlueprintOculusSonarImage));
  bool success = wamv_interfaces__msg__BlueprintOculusSonarImage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wamv_interfaces__msg__BlueprintOculusSonarImage__destroy(wamv_interfaces__msg__BlueprintOculusSonarImage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wamv_interfaces__msg__BlueprintOculusSonarImage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wamv_interfaces__msg__BlueprintOculusSonarImage__Sequence__init(wamv_interfaces__msg__BlueprintOculusSonarImage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wamv_interfaces__msg__BlueprintOculusSonarImage * data = NULL;

  if (size) {
    data = (wamv_interfaces__msg__BlueprintOculusSonarImage *)allocator.zero_allocate(size, sizeof(wamv_interfaces__msg__BlueprintOculusSonarImage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wamv_interfaces__msg__BlueprintOculusSonarImage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wamv_interfaces__msg__BlueprintOculusSonarImage__fini(&data[i - 1]);
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
wamv_interfaces__msg__BlueprintOculusSonarImage__Sequence__fini(wamv_interfaces__msg__BlueprintOculusSonarImage__Sequence * array)
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
      wamv_interfaces__msg__BlueprintOculusSonarImage__fini(&array->data[i]);
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

wamv_interfaces__msg__BlueprintOculusSonarImage__Sequence *
wamv_interfaces__msg__BlueprintOculusSonarImage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wamv_interfaces__msg__BlueprintOculusSonarImage__Sequence * array = (wamv_interfaces__msg__BlueprintOculusSonarImage__Sequence *)allocator.allocate(sizeof(wamv_interfaces__msg__BlueprintOculusSonarImage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wamv_interfaces__msg__BlueprintOculusSonarImage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wamv_interfaces__msg__BlueprintOculusSonarImage__Sequence__destroy(wamv_interfaces__msg__BlueprintOculusSonarImage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wamv_interfaces__msg__BlueprintOculusSonarImage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wamv_interfaces__msg__BlueprintOculusSonarImage__Sequence__are_equal(const wamv_interfaces__msg__BlueprintOculusSonarImage__Sequence * lhs, const wamv_interfaces__msg__BlueprintOculusSonarImage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wamv_interfaces__msg__BlueprintOculusSonarImage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wamv_interfaces__msg__BlueprintOculusSonarImage__Sequence__copy(
  const wamv_interfaces__msg__BlueprintOculusSonarImage__Sequence * input,
  wamv_interfaces__msg__BlueprintOculusSonarImage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wamv_interfaces__msg__BlueprintOculusSonarImage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wamv_interfaces__msg__BlueprintOculusSonarImage * data =
      (wamv_interfaces__msg__BlueprintOculusSonarImage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wamv_interfaces__msg__BlueprintOculusSonarImage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wamv_interfaces__msg__BlueprintOculusSonarImage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wamv_interfaces__msg__BlueprintOculusSonarImage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
