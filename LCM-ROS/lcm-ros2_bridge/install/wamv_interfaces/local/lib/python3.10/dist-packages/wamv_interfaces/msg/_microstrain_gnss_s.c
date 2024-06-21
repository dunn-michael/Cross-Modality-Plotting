// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wamv_interfaces:msg/MicrostrainGnss.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "wamv_interfaces/msg/detail/microstrain_gnss__struct.h"
#include "wamv_interfaces/msg/detail/microstrain_gnss__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool wamv_interfaces__msg__microstrain_gnss__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("wamv_interfaces.msg._microstrain_gnss.MicrostrainGnss", full_classname_dest, 53) == 0);
  }
  wamv_interfaces__msg__MicrostrainGnss * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height_above_elipsoid
    PyObject * field = PyObject_GetAttrString(_pymsg, "height_above_elipsoid");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height_above_elipsoid = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height_above_msl
    PyObject * field = PyObject_GetAttrString(_pymsg, "height_above_msl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height_above_msl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // horizontal_accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizontal_accuracy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->horizontal_accuracy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_accuracy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_accuracy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ecef_pos_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "ecef_pos_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ecef_pos_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ecef_pos_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "ecef_pos_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ecef_pos_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ecef_pos_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "ecef_pos_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ecef_pos_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ecef_pos_accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "ecef_pos_accuracy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ecef_pos_accuracy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // north_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "north_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->north_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // east_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "east_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->east_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // down_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "down_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->down_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ground_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "ground_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ground_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_accuracy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_accuracy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_accuracy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_accuracy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ecef_vel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "ecef_vel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ecef_vel_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ecef_vel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "ecef_vel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ecef_vel_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ecef_vel_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "ecef_vel_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ecef_vel_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ecef_vel_accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "ecef_vel_accuracy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ecef_vel_accuracy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // geometric_dop
    PyObject * field = PyObject_GetAttrString(_pymsg, "geometric_dop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->geometric_dop = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_dop
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_dop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_dop = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // horizontal_dop
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizontal_dop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->horizontal_dop = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_dop
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_dop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_dop = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time_dop
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_dop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_dop = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // northing_dop
    PyObject * field = PyObject_GetAttrString(_pymsg, "northing_dop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->northing_dop = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // easting_dop
    PyObject * field = PyObject_GetAttrString(_pymsg, "easting_dop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->easting_dop = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // utc_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utc_timestamp = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // utc_timestamp_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_timestamp_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utc_timestamp_flags = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gps_time_tow
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_time_tow");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gps_time_tow = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gps_time_week_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_time_week_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gps_time_week_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gps_clock_bias
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_clock_bias");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gps_clock_bias = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gps_clock_drift
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_clock_drift");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gps_clock_drift = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gps_clock_accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_clock_accuracy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gps_clock_accuracy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_fix_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_fix_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gnss_fix_type = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gnss_fix_sv_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_fix_sv_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gnss_fix_sv_count = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gnss_fix_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_fix_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gnss_fix_flags = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // sensor_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sensor_state = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // antenna_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "antenna_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->antenna_state = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // antenna_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "antenna_power");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->antenna_power = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // dgnss_newest_age_gnss_base_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "dgnss_newest_age_gnss_base_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dgnss_newest_age_gnss_base_0 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dgnss_base_station_status_gnss_base_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "dgnss_base_station_status_gnss_base_0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dgnss_base_station_status_gnss_base_0 = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // dgnss_num_channels_gnss_base_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "dgnss_num_channels_gnss_base_0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dgnss_num_channels_gnss_base_0 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wamv_interfaces__msg__microstrain_gnss__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MicrostrainGnss */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wamv_interfaces.msg._microstrain_gnss");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MicrostrainGnss");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wamv_interfaces__msg__MicrostrainGnss * ros_message = (wamv_interfaces__msg__MicrostrainGnss *)raw_ros_message;
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height_above_elipsoid
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height_above_elipsoid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height_above_elipsoid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height_above_msl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height_above_msl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height_above_msl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horizontal_accuracy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->horizontal_accuracy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horizontal_accuracy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_accuracy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_accuracy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_accuracy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ecef_pos_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ecef_pos_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ecef_pos_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ecef_pos_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ecef_pos_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ecef_pos_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ecef_pos_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ecef_pos_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ecef_pos_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ecef_pos_accuracy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ecef_pos_accuracy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ecef_pos_accuracy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // north_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->north_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "north_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // east_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->east_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "east_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // down_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->down_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "down_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ground_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ground_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ground_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_accuracy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_accuracy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_accuracy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_accuracy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_accuracy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_accuracy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ecef_vel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ecef_vel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ecef_vel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ecef_vel_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ecef_vel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ecef_vel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ecef_vel_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ecef_vel_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ecef_vel_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ecef_vel_accuracy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ecef_vel_accuracy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ecef_vel_accuracy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // geometric_dop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->geometric_dop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "geometric_dop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_dop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_dop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_dop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horizontal_dop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->horizontal_dop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horizontal_dop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_dop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_dop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_dop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_dop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_dop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_dop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // northing_dop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->northing_dop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "northing_dop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // easting_dop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->easting_dop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "easting_dop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_timestamp
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->utc_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_timestamp_flags
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->utc_timestamp_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_timestamp_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_time_tow
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gps_time_tow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_time_tow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_time_week_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gps_time_week_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_time_week_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_clock_bias
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gps_clock_bias);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_clock_bias", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_clock_drift
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gps_clock_drift);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_clock_drift", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_clock_accuracy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gps_clock_accuracy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_clock_accuracy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_fix_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gnss_fix_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_fix_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_fix_sv_count
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gnss_fix_sv_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_fix_sv_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_fix_flags
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gnss_fix_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_fix_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sensor_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // antenna_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->antenna_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "antenna_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // antenna_power
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->antenna_power);
    {
      int rc = PyObject_SetAttrString(_pymessage, "antenna_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dgnss_newest_age_gnss_base_0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dgnss_newest_age_gnss_base_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dgnss_newest_age_gnss_base_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dgnss_base_station_status_gnss_base_0
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->dgnss_base_station_status_gnss_base_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dgnss_base_station_status_gnss_base_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dgnss_num_channels_gnss_base_0
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->dgnss_num_channels_gnss_base_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dgnss_num_channels_gnss_base_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
