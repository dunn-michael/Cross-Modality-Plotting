// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wamv_interfaces:msg/MicrostrainGnss.idl
// generated code does not contain a copyright notice
#include "wamv_interfaces/msg/detail/microstrain_gnss__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wamv_interfaces__msg__MicrostrainGnss__init(wamv_interfaces__msg__MicrostrainGnss * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // latitude
  // longitude
  // height_above_elipsoid
  // height_above_msl
  // horizontal_accuracy
  // vertical_accuracy
  // ecef_pos_x
  // ecef_pos_y
  // ecef_pos_z
  // ecef_pos_accuracy
  // north_velocity
  // east_velocity
  // down_velocity
  // speed
  // ground_speed
  // heading
  // speed_accuracy
  // heading_accuracy
  // ecef_vel_x
  // ecef_vel_y
  // ecef_vel_z
  // ecef_vel_accuracy
  // geometric_dop
  // position_dop
  // horizontal_dop
  // vertical_dop
  // time_dop
  // northing_dop
  // easting_dop
  // utc_timestamp
  // utc_timestamp_flags
  // gps_time_tow
  // gps_time_week_num
  // gps_clock_bias
  // gps_clock_drift
  // gps_clock_accuracy
  // gnss_fix_type
  // gnss_fix_sv_count
  // gnss_fix_flags
  // sensor_state
  // antenna_state
  // antenna_power
  // dgnss_newest_age_gnss_base_0
  // dgnss_base_station_status_gnss_base_0
  // dgnss_num_channels_gnss_base_0
  return true;
}

void
wamv_interfaces__msg__MicrostrainGnss__fini(wamv_interfaces__msg__MicrostrainGnss * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // latitude
  // longitude
  // height_above_elipsoid
  // height_above_msl
  // horizontal_accuracy
  // vertical_accuracy
  // ecef_pos_x
  // ecef_pos_y
  // ecef_pos_z
  // ecef_pos_accuracy
  // north_velocity
  // east_velocity
  // down_velocity
  // speed
  // ground_speed
  // heading
  // speed_accuracy
  // heading_accuracy
  // ecef_vel_x
  // ecef_vel_y
  // ecef_vel_z
  // ecef_vel_accuracy
  // geometric_dop
  // position_dop
  // horizontal_dop
  // vertical_dop
  // time_dop
  // northing_dop
  // easting_dop
  // utc_timestamp
  // utc_timestamp_flags
  // gps_time_tow
  // gps_time_week_num
  // gps_clock_bias
  // gps_clock_drift
  // gps_clock_accuracy
  // gnss_fix_type
  // gnss_fix_sv_count
  // gnss_fix_flags
  // sensor_state
  // antenna_state
  // antenna_power
  // dgnss_newest_age_gnss_base_0
  // dgnss_base_station_status_gnss_base_0
  // dgnss_num_channels_gnss_base_0
}

bool
wamv_interfaces__msg__MicrostrainGnss__are_equal(const wamv_interfaces__msg__MicrostrainGnss * lhs, const wamv_interfaces__msg__MicrostrainGnss * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // height_above_elipsoid
  if (lhs->height_above_elipsoid != rhs->height_above_elipsoid) {
    return false;
  }
  // height_above_msl
  if (lhs->height_above_msl != rhs->height_above_msl) {
    return false;
  }
  // horizontal_accuracy
  if (lhs->horizontal_accuracy != rhs->horizontal_accuracy) {
    return false;
  }
  // vertical_accuracy
  if (lhs->vertical_accuracy != rhs->vertical_accuracy) {
    return false;
  }
  // ecef_pos_x
  if (lhs->ecef_pos_x != rhs->ecef_pos_x) {
    return false;
  }
  // ecef_pos_y
  if (lhs->ecef_pos_y != rhs->ecef_pos_y) {
    return false;
  }
  // ecef_pos_z
  if (lhs->ecef_pos_z != rhs->ecef_pos_z) {
    return false;
  }
  // ecef_pos_accuracy
  if (lhs->ecef_pos_accuracy != rhs->ecef_pos_accuracy) {
    return false;
  }
  // north_velocity
  if (lhs->north_velocity != rhs->north_velocity) {
    return false;
  }
  // east_velocity
  if (lhs->east_velocity != rhs->east_velocity) {
    return false;
  }
  // down_velocity
  if (lhs->down_velocity != rhs->down_velocity) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // ground_speed
  if (lhs->ground_speed != rhs->ground_speed) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // speed_accuracy
  if (lhs->speed_accuracy != rhs->speed_accuracy) {
    return false;
  }
  // heading_accuracy
  if (lhs->heading_accuracy != rhs->heading_accuracy) {
    return false;
  }
  // ecef_vel_x
  if (lhs->ecef_vel_x != rhs->ecef_vel_x) {
    return false;
  }
  // ecef_vel_y
  if (lhs->ecef_vel_y != rhs->ecef_vel_y) {
    return false;
  }
  // ecef_vel_z
  if (lhs->ecef_vel_z != rhs->ecef_vel_z) {
    return false;
  }
  // ecef_vel_accuracy
  if (lhs->ecef_vel_accuracy != rhs->ecef_vel_accuracy) {
    return false;
  }
  // geometric_dop
  if (lhs->geometric_dop != rhs->geometric_dop) {
    return false;
  }
  // position_dop
  if (lhs->position_dop != rhs->position_dop) {
    return false;
  }
  // horizontal_dop
  if (lhs->horizontal_dop != rhs->horizontal_dop) {
    return false;
  }
  // vertical_dop
  if (lhs->vertical_dop != rhs->vertical_dop) {
    return false;
  }
  // time_dop
  if (lhs->time_dop != rhs->time_dop) {
    return false;
  }
  // northing_dop
  if (lhs->northing_dop != rhs->northing_dop) {
    return false;
  }
  // easting_dop
  if (lhs->easting_dop != rhs->easting_dop) {
    return false;
  }
  // utc_timestamp
  if (lhs->utc_timestamp != rhs->utc_timestamp) {
    return false;
  }
  // utc_timestamp_flags
  if (lhs->utc_timestamp_flags != rhs->utc_timestamp_flags) {
    return false;
  }
  // gps_time_tow
  if (lhs->gps_time_tow != rhs->gps_time_tow) {
    return false;
  }
  // gps_time_week_num
  if (lhs->gps_time_week_num != rhs->gps_time_week_num) {
    return false;
  }
  // gps_clock_bias
  if (lhs->gps_clock_bias != rhs->gps_clock_bias) {
    return false;
  }
  // gps_clock_drift
  if (lhs->gps_clock_drift != rhs->gps_clock_drift) {
    return false;
  }
  // gps_clock_accuracy
  if (lhs->gps_clock_accuracy != rhs->gps_clock_accuracy) {
    return false;
  }
  // gnss_fix_type
  if (lhs->gnss_fix_type != rhs->gnss_fix_type) {
    return false;
  }
  // gnss_fix_sv_count
  if (lhs->gnss_fix_sv_count != rhs->gnss_fix_sv_count) {
    return false;
  }
  // gnss_fix_flags
  if (lhs->gnss_fix_flags != rhs->gnss_fix_flags) {
    return false;
  }
  // sensor_state
  if (lhs->sensor_state != rhs->sensor_state) {
    return false;
  }
  // antenna_state
  if (lhs->antenna_state != rhs->antenna_state) {
    return false;
  }
  // antenna_power
  if (lhs->antenna_power != rhs->antenna_power) {
    return false;
  }
  // dgnss_newest_age_gnss_base_0
  if (lhs->dgnss_newest_age_gnss_base_0 != rhs->dgnss_newest_age_gnss_base_0) {
    return false;
  }
  // dgnss_base_station_status_gnss_base_0
  if (lhs->dgnss_base_station_status_gnss_base_0 != rhs->dgnss_base_station_status_gnss_base_0) {
    return false;
  }
  // dgnss_num_channels_gnss_base_0
  if (lhs->dgnss_num_channels_gnss_base_0 != rhs->dgnss_num_channels_gnss_base_0) {
    return false;
  }
  return true;
}

bool
wamv_interfaces__msg__MicrostrainGnss__copy(
  const wamv_interfaces__msg__MicrostrainGnss * input,
  wamv_interfaces__msg__MicrostrainGnss * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // height_above_elipsoid
  output->height_above_elipsoid = input->height_above_elipsoid;
  // height_above_msl
  output->height_above_msl = input->height_above_msl;
  // horizontal_accuracy
  output->horizontal_accuracy = input->horizontal_accuracy;
  // vertical_accuracy
  output->vertical_accuracy = input->vertical_accuracy;
  // ecef_pos_x
  output->ecef_pos_x = input->ecef_pos_x;
  // ecef_pos_y
  output->ecef_pos_y = input->ecef_pos_y;
  // ecef_pos_z
  output->ecef_pos_z = input->ecef_pos_z;
  // ecef_pos_accuracy
  output->ecef_pos_accuracy = input->ecef_pos_accuracy;
  // north_velocity
  output->north_velocity = input->north_velocity;
  // east_velocity
  output->east_velocity = input->east_velocity;
  // down_velocity
  output->down_velocity = input->down_velocity;
  // speed
  output->speed = input->speed;
  // ground_speed
  output->ground_speed = input->ground_speed;
  // heading
  output->heading = input->heading;
  // speed_accuracy
  output->speed_accuracy = input->speed_accuracy;
  // heading_accuracy
  output->heading_accuracy = input->heading_accuracy;
  // ecef_vel_x
  output->ecef_vel_x = input->ecef_vel_x;
  // ecef_vel_y
  output->ecef_vel_y = input->ecef_vel_y;
  // ecef_vel_z
  output->ecef_vel_z = input->ecef_vel_z;
  // ecef_vel_accuracy
  output->ecef_vel_accuracy = input->ecef_vel_accuracy;
  // geometric_dop
  output->geometric_dop = input->geometric_dop;
  // position_dop
  output->position_dop = input->position_dop;
  // horizontal_dop
  output->horizontal_dop = input->horizontal_dop;
  // vertical_dop
  output->vertical_dop = input->vertical_dop;
  // time_dop
  output->time_dop = input->time_dop;
  // northing_dop
  output->northing_dop = input->northing_dop;
  // easting_dop
  output->easting_dop = input->easting_dop;
  // utc_timestamp
  output->utc_timestamp = input->utc_timestamp;
  // utc_timestamp_flags
  output->utc_timestamp_flags = input->utc_timestamp_flags;
  // gps_time_tow
  output->gps_time_tow = input->gps_time_tow;
  // gps_time_week_num
  output->gps_time_week_num = input->gps_time_week_num;
  // gps_clock_bias
  output->gps_clock_bias = input->gps_clock_bias;
  // gps_clock_drift
  output->gps_clock_drift = input->gps_clock_drift;
  // gps_clock_accuracy
  output->gps_clock_accuracy = input->gps_clock_accuracy;
  // gnss_fix_type
  output->gnss_fix_type = input->gnss_fix_type;
  // gnss_fix_sv_count
  output->gnss_fix_sv_count = input->gnss_fix_sv_count;
  // gnss_fix_flags
  output->gnss_fix_flags = input->gnss_fix_flags;
  // sensor_state
  output->sensor_state = input->sensor_state;
  // antenna_state
  output->antenna_state = input->antenna_state;
  // antenna_power
  output->antenna_power = input->antenna_power;
  // dgnss_newest_age_gnss_base_0
  output->dgnss_newest_age_gnss_base_0 = input->dgnss_newest_age_gnss_base_0;
  // dgnss_base_station_status_gnss_base_0
  output->dgnss_base_station_status_gnss_base_0 = input->dgnss_base_station_status_gnss_base_0;
  // dgnss_num_channels_gnss_base_0
  output->dgnss_num_channels_gnss_base_0 = input->dgnss_num_channels_gnss_base_0;
  return true;
}

wamv_interfaces__msg__MicrostrainGnss *
wamv_interfaces__msg__MicrostrainGnss__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wamv_interfaces__msg__MicrostrainGnss * msg = (wamv_interfaces__msg__MicrostrainGnss *)allocator.allocate(sizeof(wamv_interfaces__msg__MicrostrainGnss), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wamv_interfaces__msg__MicrostrainGnss));
  bool success = wamv_interfaces__msg__MicrostrainGnss__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wamv_interfaces__msg__MicrostrainGnss__destroy(wamv_interfaces__msg__MicrostrainGnss * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wamv_interfaces__msg__MicrostrainGnss__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wamv_interfaces__msg__MicrostrainGnss__Sequence__init(wamv_interfaces__msg__MicrostrainGnss__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wamv_interfaces__msg__MicrostrainGnss * data = NULL;

  if (size) {
    data = (wamv_interfaces__msg__MicrostrainGnss *)allocator.zero_allocate(size, sizeof(wamv_interfaces__msg__MicrostrainGnss), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wamv_interfaces__msg__MicrostrainGnss__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wamv_interfaces__msg__MicrostrainGnss__fini(&data[i - 1]);
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
wamv_interfaces__msg__MicrostrainGnss__Sequence__fini(wamv_interfaces__msg__MicrostrainGnss__Sequence * array)
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
      wamv_interfaces__msg__MicrostrainGnss__fini(&array->data[i]);
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

wamv_interfaces__msg__MicrostrainGnss__Sequence *
wamv_interfaces__msg__MicrostrainGnss__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wamv_interfaces__msg__MicrostrainGnss__Sequence * array = (wamv_interfaces__msg__MicrostrainGnss__Sequence *)allocator.allocate(sizeof(wamv_interfaces__msg__MicrostrainGnss__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wamv_interfaces__msg__MicrostrainGnss__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wamv_interfaces__msg__MicrostrainGnss__Sequence__destroy(wamv_interfaces__msg__MicrostrainGnss__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wamv_interfaces__msg__MicrostrainGnss__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wamv_interfaces__msg__MicrostrainGnss__Sequence__are_equal(const wamv_interfaces__msg__MicrostrainGnss__Sequence * lhs, const wamv_interfaces__msg__MicrostrainGnss__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wamv_interfaces__msg__MicrostrainGnss__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wamv_interfaces__msg__MicrostrainGnss__Sequence__copy(
  const wamv_interfaces__msg__MicrostrainGnss__Sequence * input,
  wamv_interfaces__msg__MicrostrainGnss__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wamv_interfaces__msg__MicrostrainGnss);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wamv_interfaces__msg__MicrostrainGnss * data =
      (wamv_interfaces__msg__MicrostrainGnss *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wamv_interfaces__msg__MicrostrainGnss__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wamv_interfaces__msg__MicrostrainGnss__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wamv_interfaces__msg__MicrostrainGnss__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
