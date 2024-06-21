// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wamv_interfaces:msg/MicrostrainImu.idl
// generated code does not contain a copyright notice
#include "wamv_interfaces/msg/detail/microstrain_imu__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wamv_interfaces__msg__MicrostrainImu__init(wamv_interfaces__msg__MicrostrainImu * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // scaled_accel_x
  // scaled_accel_y
  // scaled_accel_z
  // scaled_gyro_x
  // scaled_gyro_y
  // scaled_gyro_z
  // scaled_mag_x
  // scaled_mag_y
  // scaled_mag_z
  // delta_theta_x
  // delta_theta_y
  // delta_theta_z
  // delta_vel_x
  // delta_vel_y
  // delta_vel_z
  // orient_matrix
  // roll
  // pitch
  // yaw
  // orient_quaternion
  // stabilized_mag_x
  // stabilized_mag_y
  // stabilized_mag_z
  // stabilized_accel_x
  // stabilized_accel_y
  // stabilized_accel_z
  // gps_correl_timestamp_tow
  // gps_correl_timestamp_week_num
  // gps_correl_timestamp_flags
  // scaled_ambient_pressure
  return true;
}

void
wamv_interfaces__msg__MicrostrainImu__fini(wamv_interfaces__msg__MicrostrainImu * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // scaled_accel_x
  // scaled_accel_y
  // scaled_accel_z
  // scaled_gyro_x
  // scaled_gyro_y
  // scaled_gyro_z
  // scaled_mag_x
  // scaled_mag_y
  // scaled_mag_z
  // delta_theta_x
  // delta_theta_y
  // delta_theta_z
  // delta_vel_x
  // delta_vel_y
  // delta_vel_z
  // orient_matrix
  // roll
  // pitch
  // yaw
  // orient_quaternion
  // stabilized_mag_x
  // stabilized_mag_y
  // stabilized_mag_z
  // stabilized_accel_x
  // stabilized_accel_y
  // stabilized_accel_z
  // gps_correl_timestamp_tow
  // gps_correl_timestamp_week_num
  // gps_correl_timestamp_flags
  // scaled_ambient_pressure
}

bool
wamv_interfaces__msg__MicrostrainImu__are_equal(const wamv_interfaces__msg__MicrostrainImu * lhs, const wamv_interfaces__msg__MicrostrainImu * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // scaled_accel_x
  if (lhs->scaled_accel_x != rhs->scaled_accel_x) {
    return false;
  }
  // scaled_accel_y
  if (lhs->scaled_accel_y != rhs->scaled_accel_y) {
    return false;
  }
  // scaled_accel_z
  if (lhs->scaled_accel_z != rhs->scaled_accel_z) {
    return false;
  }
  // scaled_gyro_x
  if (lhs->scaled_gyro_x != rhs->scaled_gyro_x) {
    return false;
  }
  // scaled_gyro_y
  if (lhs->scaled_gyro_y != rhs->scaled_gyro_y) {
    return false;
  }
  // scaled_gyro_z
  if (lhs->scaled_gyro_z != rhs->scaled_gyro_z) {
    return false;
  }
  // scaled_mag_x
  if (lhs->scaled_mag_x != rhs->scaled_mag_x) {
    return false;
  }
  // scaled_mag_y
  if (lhs->scaled_mag_y != rhs->scaled_mag_y) {
    return false;
  }
  // scaled_mag_z
  if (lhs->scaled_mag_z != rhs->scaled_mag_z) {
    return false;
  }
  // delta_theta_x
  if (lhs->delta_theta_x != rhs->delta_theta_x) {
    return false;
  }
  // delta_theta_y
  if (lhs->delta_theta_y != rhs->delta_theta_y) {
    return false;
  }
  // delta_theta_z
  if (lhs->delta_theta_z != rhs->delta_theta_z) {
    return false;
  }
  // delta_vel_x
  if (lhs->delta_vel_x != rhs->delta_vel_x) {
    return false;
  }
  // delta_vel_y
  if (lhs->delta_vel_y != rhs->delta_vel_y) {
    return false;
  }
  // delta_vel_z
  if (lhs->delta_vel_z != rhs->delta_vel_z) {
    return false;
  }
  // orient_matrix
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->orient_matrix[i] != rhs->orient_matrix[i]) {
      return false;
    }
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // orient_quaternion
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->orient_quaternion[i] != rhs->orient_quaternion[i]) {
      return false;
    }
  }
  // stabilized_mag_x
  if (lhs->stabilized_mag_x != rhs->stabilized_mag_x) {
    return false;
  }
  // stabilized_mag_y
  if (lhs->stabilized_mag_y != rhs->stabilized_mag_y) {
    return false;
  }
  // stabilized_mag_z
  if (lhs->stabilized_mag_z != rhs->stabilized_mag_z) {
    return false;
  }
  // stabilized_accel_x
  if (lhs->stabilized_accel_x != rhs->stabilized_accel_x) {
    return false;
  }
  // stabilized_accel_y
  if (lhs->stabilized_accel_y != rhs->stabilized_accel_y) {
    return false;
  }
  // stabilized_accel_z
  if (lhs->stabilized_accel_z != rhs->stabilized_accel_z) {
    return false;
  }
  // gps_correl_timestamp_tow
  if (lhs->gps_correl_timestamp_tow != rhs->gps_correl_timestamp_tow) {
    return false;
  }
  // gps_correl_timestamp_week_num
  if (lhs->gps_correl_timestamp_week_num != rhs->gps_correl_timestamp_week_num) {
    return false;
  }
  // gps_correl_timestamp_flags
  if (lhs->gps_correl_timestamp_flags != rhs->gps_correl_timestamp_flags) {
    return false;
  }
  // scaled_ambient_pressure
  if (lhs->scaled_ambient_pressure != rhs->scaled_ambient_pressure) {
    return false;
  }
  return true;
}

bool
wamv_interfaces__msg__MicrostrainImu__copy(
  const wamv_interfaces__msg__MicrostrainImu * input,
  wamv_interfaces__msg__MicrostrainImu * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // scaled_accel_x
  output->scaled_accel_x = input->scaled_accel_x;
  // scaled_accel_y
  output->scaled_accel_y = input->scaled_accel_y;
  // scaled_accel_z
  output->scaled_accel_z = input->scaled_accel_z;
  // scaled_gyro_x
  output->scaled_gyro_x = input->scaled_gyro_x;
  // scaled_gyro_y
  output->scaled_gyro_y = input->scaled_gyro_y;
  // scaled_gyro_z
  output->scaled_gyro_z = input->scaled_gyro_z;
  // scaled_mag_x
  output->scaled_mag_x = input->scaled_mag_x;
  // scaled_mag_y
  output->scaled_mag_y = input->scaled_mag_y;
  // scaled_mag_z
  output->scaled_mag_z = input->scaled_mag_z;
  // delta_theta_x
  output->delta_theta_x = input->delta_theta_x;
  // delta_theta_y
  output->delta_theta_y = input->delta_theta_y;
  // delta_theta_z
  output->delta_theta_z = input->delta_theta_z;
  // delta_vel_x
  output->delta_vel_x = input->delta_vel_x;
  // delta_vel_y
  output->delta_vel_y = input->delta_vel_y;
  // delta_vel_z
  output->delta_vel_z = input->delta_vel_z;
  // orient_matrix
  for (size_t i = 0; i < 9; ++i) {
    output->orient_matrix[i] = input->orient_matrix[i];
  }
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  // orient_quaternion
  for (size_t i = 0; i < 3; ++i) {
    output->orient_quaternion[i] = input->orient_quaternion[i];
  }
  // stabilized_mag_x
  output->stabilized_mag_x = input->stabilized_mag_x;
  // stabilized_mag_y
  output->stabilized_mag_y = input->stabilized_mag_y;
  // stabilized_mag_z
  output->stabilized_mag_z = input->stabilized_mag_z;
  // stabilized_accel_x
  output->stabilized_accel_x = input->stabilized_accel_x;
  // stabilized_accel_y
  output->stabilized_accel_y = input->stabilized_accel_y;
  // stabilized_accel_z
  output->stabilized_accel_z = input->stabilized_accel_z;
  // gps_correl_timestamp_tow
  output->gps_correl_timestamp_tow = input->gps_correl_timestamp_tow;
  // gps_correl_timestamp_week_num
  output->gps_correl_timestamp_week_num = input->gps_correl_timestamp_week_num;
  // gps_correl_timestamp_flags
  output->gps_correl_timestamp_flags = input->gps_correl_timestamp_flags;
  // scaled_ambient_pressure
  output->scaled_ambient_pressure = input->scaled_ambient_pressure;
  return true;
}

wamv_interfaces__msg__MicrostrainImu *
wamv_interfaces__msg__MicrostrainImu__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wamv_interfaces__msg__MicrostrainImu * msg = (wamv_interfaces__msg__MicrostrainImu *)allocator.allocate(sizeof(wamv_interfaces__msg__MicrostrainImu), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wamv_interfaces__msg__MicrostrainImu));
  bool success = wamv_interfaces__msg__MicrostrainImu__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wamv_interfaces__msg__MicrostrainImu__destroy(wamv_interfaces__msg__MicrostrainImu * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wamv_interfaces__msg__MicrostrainImu__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wamv_interfaces__msg__MicrostrainImu__Sequence__init(wamv_interfaces__msg__MicrostrainImu__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wamv_interfaces__msg__MicrostrainImu * data = NULL;

  if (size) {
    data = (wamv_interfaces__msg__MicrostrainImu *)allocator.zero_allocate(size, sizeof(wamv_interfaces__msg__MicrostrainImu), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wamv_interfaces__msg__MicrostrainImu__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wamv_interfaces__msg__MicrostrainImu__fini(&data[i - 1]);
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
wamv_interfaces__msg__MicrostrainImu__Sequence__fini(wamv_interfaces__msg__MicrostrainImu__Sequence * array)
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
      wamv_interfaces__msg__MicrostrainImu__fini(&array->data[i]);
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

wamv_interfaces__msg__MicrostrainImu__Sequence *
wamv_interfaces__msg__MicrostrainImu__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wamv_interfaces__msg__MicrostrainImu__Sequence * array = (wamv_interfaces__msg__MicrostrainImu__Sequence *)allocator.allocate(sizeof(wamv_interfaces__msg__MicrostrainImu__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wamv_interfaces__msg__MicrostrainImu__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wamv_interfaces__msg__MicrostrainImu__Sequence__destroy(wamv_interfaces__msg__MicrostrainImu__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wamv_interfaces__msg__MicrostrainImu__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wamv_interfaces__msg__MicrostrainImu__Sequence__are_equal(const wamv_interfaces__msg__MicrostrainImu__Sequence * lhs, const wamv_interfaces__msg__MicrostrainImu__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wamv_interfaces__msg__MicrostrainImu__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wamv_interfaces__msg__MicrostrainImu__Sequence__copy(
  const wamv_interfaces__msg__MicrostrainImu__Sequence * input,
  wamv_interfaces__msg__MicrostrainImu__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wamv_interfaces__msg__MicrostrainImu);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wamv_interfaces__msg__MicrostrainImu * data =
      (wamv_interfaces__msg__MicrostrainImu *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wamv_interfaces__msg__MicrostrainImu__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wamv_interfaces__msg__MicrostrainImu__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wamv_interfaces__msg__MicrostrainImu__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
