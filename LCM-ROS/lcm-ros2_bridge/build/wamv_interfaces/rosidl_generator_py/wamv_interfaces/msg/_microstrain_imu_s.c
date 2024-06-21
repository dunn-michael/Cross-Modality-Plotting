// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wamv_interfaces:msg/MicrostrainImu.idl
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
#include "wamv_interfaces/msg/detail/microstrain_imu__struct.h"
#include "wamv_interfaces/msg/detail/microstrain_imu__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool wamv_interfaces__msg__microstrain_imu__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("wamv_interfaces.msg._microstrain_imu.MicrostrainImu", full_classname_dest, 51) == 0);
  }
  wamv_interfaces__msg__MicrostrainImu * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // scaled_accel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "scaled_accel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->scaled_accel_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // scaled_accel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "scaled_accel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->scaled_accel_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // scaled_accel_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "scaled_accel_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->scaled_accel_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // scaled_gyro_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "scaled_gyro_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->scaled_gyro_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // scaled_gyro_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "scaled_gyro_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->scaled_gyro_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // scaled_gyro_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "scaled_gyro_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->scaled_gyro_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // scaled_mag_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "scaled_mag_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->scaled_mag_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // scaled_mag_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "scaled_mag_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->scaled_mag_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // scaled_mag_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "scaled_mag_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->scaled_mag_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_theta_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_theta_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_theta_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_theta_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_theta_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_theta_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_theta_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_theta_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_theta_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_vel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_vel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_vel_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_vel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_vel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_vel_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_vel_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_vel_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_vel_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // orient_matrix
    PyObject * field = PyObject_GetAttrString(_pymsg, "orient_matrix");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 9;
      float * dest = ros_message->orient_matrix;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // orient_quaternion
    PyObject * field = PyObject_GetAttrString(_pymsg, "orient_quaternion");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 3;
      float * dest = ros_message->orient_quaternion;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // stabilized_mag_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "stabilized_mag_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stabilized_mag_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stabilized_mag_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "stabilized_mag_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stabilized_mag_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stabilized_mag_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "stabilized_mag_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stabilized_mag_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stabilized_accel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "stabilized_accel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stabilized_accel_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stabilized_accel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "stabilized_accel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stabilized_accel_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stabilized_accel_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "stabilized_accel_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stabilized_accel_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gps_correl_timestamp_tow
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_correl_timestamp_tow");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gps_correl_timestamp_tow = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gps_correl_timestamp_week_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_correl_timestamp_week_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gps_correl_timestamp_week_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gps_correl_timestamp_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_correl_timestamp_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gps_correl_timestamp_flags = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // scaled_ambient_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "scaled_ambient_pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->scaled_ambient_pressure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wamv_interfaces__msg__microstrain_imu__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MicrostrainImu */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wamv_interfaces.msg._microstrain_imu");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MicrostrainImu");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wamv_interfaces__msg__MicrostrainImu * ros_message = (wamv_interfaces__msg__MicrostrainImu *)raw_ros_message;
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
  {  // scaled_accel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->scaled_accel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scaled_accel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scaled_accel_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->scaled_accel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scaled_accel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scaled_accel_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->scaled_accel_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scaled_accel_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scaled_gyro_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->scaled_gyro_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scaled_gyro_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scaled_gyro_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->scaled_gyro_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scaled_gyro_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scaled_gyro_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->scaled_gyro_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scaled_gyro_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scaled_mag_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->scaled_mag_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scaled_mag_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scaled_mag_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->scaled_mag_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scaled_mag_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scaled_mag_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->scaled_mag_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scaled_mag_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_theta_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_theta_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_theta_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_theta_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_theta_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_theta_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_theta_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_theta_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_theta_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_vel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_vel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_vel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_vel_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_vel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_vel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_vel_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_vel_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_vel_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orient_matrix
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "orient_matrix");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->orient_matrix[0]);
    memcpy(dst, src, 9 * sizeof(float));
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orient_quaternion
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "orient_quaternion");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->orient_quaternion[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // stabilized_mag_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stabilized_mag_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stabilized_mag_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stabilized_mag_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stabilized_mag_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stabilized_mag_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stabilized_mag_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stabilized_mag_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stabilized_mag_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stabilized_accel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stabilized_accel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stabilized_accel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stabilized_accel_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stabilized_accel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stabilized_accel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stabilized_accel_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stabilized_accel_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stabilized_accel_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_correl_timestamp_tow
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gps_correl_timestamp_tow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_correl_timestamp_tow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_correl_timestamp_week_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gps_correl_timestamp_week_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_correl_timestamp_week_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_correl_timestamp_flags
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gps_correl_timestamp_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_correl_timestamp_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scaled_ambient_pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->scaled_ambient_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scaled_ambient_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
