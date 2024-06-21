// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wamv_interfaces:msg/BlueprintOculusSonarFire.idl
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
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_fire__struct.h"
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_fire__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool wamv_interfaces__msg__blueprint_oculus_sonar_fire__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[74];
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
    assert(strncmp("wamv_interfaces.msg._blueprint_oculus_sonar_fire.BlueprintOculusSonarFire", full_classname_dest, 73) == 0);
  }
  wamv_interfaces__msg__BlueprintOculusSonarFire * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gamma
    PyObject * field = PyObject_GetAttrString(_pymsg, "gamma");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gamma = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->flags = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ping_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "ping_rate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ping_rate = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // range
    PyObject * field = PyObject_GetAttrString(_pymsg, "range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gain
    PyObject * field = PyObject_GetAttrString(_pymsg, "gain");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gain = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_of_sound
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_of_sound");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_of_sound = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // salinity
    PyObject * field = PyObject_GetAttrString(_pymsg, "salinity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->salinity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wamv_interfaces__msg__blueprint_oculus_sonar_fire__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BlueprintOculusSonarFire */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wamv_interfaces.msg._blueprint_oculus_sonar_fire");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BlueprintOculusSonarFire");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wamv_interfaces__msg__BlueprintOculusSonarFire * ros_message = (wamv_interfaces__msg__BlueprintOculusSonarFire *)raw_ros_message;
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
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gamma
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gamma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gamma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flags
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ping_rate
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ping_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ping_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gain
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_of_sound
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_of_sound);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_of_sound", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // salinity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->salinity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "salinity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
