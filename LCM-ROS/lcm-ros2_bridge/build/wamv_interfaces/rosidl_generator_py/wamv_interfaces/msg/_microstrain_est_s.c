// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wamv_interfaces:msg/MicrostrainEst.idl
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
#include "wamv_interfaces/msg/detail/microstrain_est__struct.h"
#include "wamv_interfaces/msg/detail/microstrain_est__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool wamv_interfaces__msg__microstrain_est__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("wamv_interfaces.msg._microstrain_est.MicrostrainEst", full_classname_dest, 51) == 0);
  }
  wamv_interfaces__msg__MicrostrainEst * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // est_latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_latitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_latitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_longitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_longitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_height_above_ellipsoid
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_height_above_ellipsoid");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_height_above_ellipsoid = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_north_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_north_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_north_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_east_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_east_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_east_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_down_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_down_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_down_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_orient_quaternion
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_orient_quaternion");
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
      float * dest = ros_message->est_orient_quaternion;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // est_orient_matrix
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_orient_matrix");
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
      float * dest = ros_message->est_orient_matrix;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // est_roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_gyro_bias_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_gyro_bias_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_gyro_bias_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_gyro_bias_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_gyro_bias_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_gyro_bias_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_gyro_bias_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_gyro_bias_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_gyro_bias_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_accel_bias_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_accel_bias_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_accel_bias_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_accel_bias_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_accel_bias_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_accel_bias_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_accel_bias_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_accel_bias_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_accel_bias_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_north_position_uncert
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_north_position_uncert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_north_position_uncert = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_east_position_uncert
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_east_position_uncert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_east_position_uncert = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_down_position_uncert
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_down_position_uncert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_down_position_uncert = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_north_velocity_uncert
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_north_velocity_uncert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_north_velocity_uncert = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_east_velocity_uncert
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_east_velocity_uncert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_east_velocity_uncert = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_down_velocity_uncert
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_down_velocity_uncert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_down_velocity_uncert = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_roll_uncert
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_roll_uncert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_roll_uncert = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_pitch_uncert
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_pitch_uncert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_pitch_uncert = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_yaw_uncert
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_yaw_uncert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_yaw_uncert = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_gyro_bias_x_uncert
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_gyro_bias_x_uncert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_gyro_bias_x_uncert = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_gyro_bias_y_uncert
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_gyro_bias_y_uncert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_gyro_bias_y_uncert = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_gyro_bias_z_uncert
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_gyro_bias_z_uncert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_gyro_bias_z_uncert = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_accel_bias_x_uncert
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_accel_bias_x_uncert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_accel_bias_x_uncert = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_accel_bias_y_uncert
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_accel_bias_y_uncert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_accel_bias_y_uncert = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_accel_bias_z_uncert
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_accel_bias_z_uncert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_accel_bias_z_uncert = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_linear_accel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_linear_accel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_linear_accel_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_linear_accel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_linear_accel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_linear_accel_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_linear_accel_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_linear_accel_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_linear_accel_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_angular_rate_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_angular_rate_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_angular_rate_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_angular_rate_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_angular_rate_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_angular_rate_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_angular_rate_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_angular_rate_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_angular_rate_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_wgs84_local_grav_magnitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_wgs84_local_grav_magnitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_wgs84_local_grav_magnitude = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_filter_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_filter_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->est_filter_state = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // est_filter_dynamics_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_filter_dynamics_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->est_filter_dynamics_mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // est_filter_status_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_filter_status_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->est_filter_status_flags = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // est_filter_gps_time_tow
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_filter_gps_time_tow");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_filter_gps_time_tow = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_filter_gps_time_week_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_filter_gps_time_week_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->est_filter_gps_time_week_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // est_attitude_uncert_quaternion
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_attitude_uncert_quaternion");
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
      float * dest = ros_message->est_attitude_uncert_quaternion;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // est_gravity_vector_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_gravity_vector_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_gravity_vector_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_gravity_vector_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_gravity_vector_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_gravity_vector_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_gravity_vector_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_gravity_vector_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_gravity_vector_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_heading = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_heading_uncert
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_heading_uncert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_heading_uncert = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_heading_source
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_heading_source");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->est_heading_source = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // est_magnetic_model_sln_north
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_magnetic_model_sln_north");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_magnetic_model_sln_north = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_magnetic_model_sln_east
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_magnetic_model_sln_east");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_magnetic_model_sln_east = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_magnetic_model_sln_down
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_magnetic_model_sln_down");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_magnetic_model_sln_down = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_magnetic_model_sln_inclination
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_magnetic_model_sln_inclination");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_magnetic_model_sln_inclination = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_magnetic_model_sln_declination
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_magnetic_model_sln_declination");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_magnetic_model_sln_declination = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_gyro_scale_factor_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_gyro_scale_factor_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_gyro_scale_factor_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_gyro_scale_factor_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_gyro_scale_factor_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_gyro_scale_factor_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_gyro_scale_factor_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_gyro_scale_factor_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_gyro_scale_factor_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_accel_scale_factor_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_accel_scale_factor_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_accel_scale_factor_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_accel_scale_factor_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_accel_scale_factor_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_accel_scale_factor_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_accel_scale_factor_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_accel_scale_factor_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_accel_scale_factor_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_gyro_scale_factor_x_uncert
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_gyro_scale_factor_x_uncert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_gyro_scale_factor_x_uncert = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_gyro_scale_factor_y_uncert
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_gyro_scale_factor_y_uncert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_gyro_scale_factor_y_uncert = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_gyro_scale_factor_z_uncert
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_gyro_scale_factor_z_uncert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_gyro_scale_factor_z_uncert = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_accel_scale_factor_x_uncert
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_accel_scale_factor_x_uncert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_accel_scale_factor_x_uncert = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_accel_scale_factor_y_uncert
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_accel_scale_factor_y_uncert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_accel_scale_factor_y_uncert = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_accel_scale_factor_z_uncert
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_accel_scale_factor_z_uncert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_accel_scale_factor_z_uncert = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_compensated_accel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_compensated_accel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_compensated_accel_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_compensated_accel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_compensated_accel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_compensated_accel_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_compensated_accel_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_compensated_accel_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_compensated_accel_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_std_atm_model_geometric_alt
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_std_atm_model_geometric_alt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_std_atm_model_geometric_alt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_std_atm_model_geopotential_alt
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_std_atm_model_geopotential_alt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_std_atm_model_geopotential_alt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_std_atm_model_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_std_atm_model_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_std_atm_model_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_std_atm_model_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_std_atm_model_pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_std_atm_model_pressure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_std_atm_model_density
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_std_atm_model_density");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_std_atm_model_density = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_pressure_alt
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_pressure_alt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_pressure_alt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_mag_auto_hard_iron_offset_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_mag_auto_hard_iron_offset_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_mag_auto_hard_iron_offset_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_mag_auto_hard_iron_offset_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_mag_auto_hard_iron_offset_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_mag_auto_hard_iron_offset_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_mag_auto_hard_iron_offset_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_mag_auto_hard_iron_offset_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->est_mag_auto_hard_iron_offset_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // est_mag_auto_soft_iron_matrix
    PyObject * field = PyObject_GetAttrString(_pymsg, "est_mag_auto_soft_iron_matrix");
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
      float * dest = ros_message->est_mag_auto_soft_iron_matrix;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wamv_interfaces__msg__microstrain_est__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MicrostrainEst */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wamv_interfaces.msg._microstrain_est");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MicrostrainEst");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wamv_interfaces__msg__MicrostrainEst * ros_message = (wamv_interfaces__msg__MicrostrainEst *)raw_ros_message;
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
  {  // est_latitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_latitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_latitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_longitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_height_above_ellipsoid
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_height_above_ellipsoid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_height_above_ellipsoid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_north_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_north_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_north_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_east_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_east_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_east_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_down_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_down_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_down_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_orient_quaternion
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "est_orient_quaternion");
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
    float * src = &(ros_message->est_orient_quaternion[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // est_orient_matrix
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "est_orient_matrix");
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
    float * src = &(ros_message->est_orient_matrix[0]);
    memcpy(dst, src, 9 * sizeof(float));
    Py_DECREF(field);
  }
  {  // est_roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_gyro_bias_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_gyro_bias_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_gyro_bias_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_gyro_bias_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_gyro_bias_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_gyro_bias_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_gyro_bias_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_gyro_bias_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_gyro_bias_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_accel_bias_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_accel_bias_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_accel_bias_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_accel_bias_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_accel_bias_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_accel_bias_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_accel_bias_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_accel_bias_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_accel_bias_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_north_position_uncert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_north_position_uncert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_north_position_uncert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_east_position_uncert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_east_position_uncert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_east_position_uncert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_down_position_uncert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_down_position_uncert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_down_position_uncert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_north_velocity_uncert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_north_velocity_uncert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_north_velocity_uncert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_east_velocity_uncert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_east_velocity_uncert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_east_velocity_uncert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_down_velocity_uncert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_down_velocity_uncert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_down_velocity_uncert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_roll_uncert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_roll_uncert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_roll_uncert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_pitch_uncert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_pitch_uncert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_pitch_uncert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_yaw_uncert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_yaw_uncert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_yaw_uncert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_gyro_bias_x_uncert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_gyro_bias_x_uncert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_gyro_bias_x_uncert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_gyro_bias_y_uncert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_gyro_bias_y_uncert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_gyro_bias_y_uncert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_gyro_bias_z_uncert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_gyro_bias_z_uncert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_gyro_bias_z_uncert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_accel_bias_x_uncert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_accel_bias_x_uncert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_accel_bias_x_uncert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_accel_bias_y_uncert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_accel_bias_y_uncert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_accel_bias_y_uncert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_accel_bias_z_uncert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_accel_bias_z_uncert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_accel_bias_z_uncert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_linear_accel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_linear_accel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_linear_accel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_linear_accel_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_linear_accel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_linear_accel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_linear_accel_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_linear_accel_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_linear_accel_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_angular_rate_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_angular_rate_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_angular_rate_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_angular_rate_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_angular_rate_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_angular_rate_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_angular_rate_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_angular_rate_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_angular_rate_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_wgs84_local_grav_magnitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_wgs84_local_grav_magnitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_wgs84_local_grav_magnitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_filter_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->est_filter_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_filter_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_filter_dynamics_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->est_filter_dynamics_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_filter_dynamics_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_filter_status_flags
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->est_filter_status_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_filter_status_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_filter_gps_time_tow
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_filter_gps_time_tow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_filter_gps_time_tow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_filter_gps_time_week_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->est_filter_gps_time_week_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_filter_gps_time_week_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_attitude_uncert_quaternion
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "est_attitude_uncert_quaternion");
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
    float * src = &(ros_message->est_attitude_uncert_quaternion[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // est_gravity_vector_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_gravity_vector_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_gravity_vector_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_gravity_vector_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_gravity_vector_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_gravity_vector_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_gravity_vector_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_gravity_vector_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_gravity_vector_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_heading_uncert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_heading_uncert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_heading_uncert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_heading_source
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->est_heading_source);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_heading_source", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_magnetic_model_sln_north
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_magnetic_model_sln_north);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_magnetic_model_sln_north", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_magnetic_model_sln_east
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_magnetic_model_sln_east);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_magnetic_model_sln_east", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_magnetic_model_sln_down
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_magnetic_model_sln_down);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_magnetic_model_sln_down", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_magnetic_model_sln_inclination
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_magnetic_model_sln_inclination);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_magnetic_model_sln_inclination", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_magnetic_model_sln_declination
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_magnetic_model_sln_declination);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_magnetic_model_sln_declination", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_gyro_scale_factor_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_gyro_scale_factor_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_gyro_scale_factor_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_gyro_scale_factor_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_gyro_scale_factor_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_gyro_scale_factor_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_gyro_scale_factor_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_gyro_scale_factor_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_gyro_scale_factor_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_accel_scale_factor_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_accel_scale_factor_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_accel_scale_factor_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_accel_scale_factor_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_accel_scale_factor_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_accel_scale_factor_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_accel_scale_factor_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_accel_scale_factor_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_accel_scale_factor_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_gyro_scale_factor_x_uncert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_gyro_scale_factor_x_uncert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_gyro_scale_factor_x_uncert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_gyro_scale_factor_y_uncert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_gyro_scale_factor_y_uncert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_gyro_scale_factor_y_uncert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_gyro_scale_factor_z_uncert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_gyro_scale_factor_z_uncert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_gyro_scale_factor_z_uncert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_accel_scale_factor_x_uncert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_accel_scale_factor_x_uncert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_accel_scale_factor_x_uncert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_accel_scale_factor_y_uncert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_accel_scale_factor_y_uncert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_accel_scale_factor_y_uncert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_accel_scale_factor_z_uncert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_accel_scale_factor_z_uncert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_accel_scale_factor_z_uncert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_compensated_accel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_compensated_accel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_compensated_accel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_compensated_accel_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_compensated_accel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_compensated_accel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_compensated_accel_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_compensated_accel_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_compensated_accel_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_std_atm_model_geometric_alt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_std_atm_model_geometric_alt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_std_atm_model_geometric_alt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_std_atm_model_geopotential_alt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_std_atm_model_geopotential_alt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_std_atm_model_geopotential_alt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_std_atm_model_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_std_atm_model_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_std_atm_model_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_std_atm_model_pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_std_atm_model_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_std_atm_model_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_std_atm_model_density
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_std_atm_model_density);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_std_atm_model_density", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_pressure_alt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_pressure_alt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_pressure_alt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_mag_auto_hard_iron_offset_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_mag_auto_hard_iron_offset_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_mag_auto_hard_iron_offset_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_mag_auto_hard_iron_offset_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_mag_auto_hard_iron_offset_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_mag_auto_hard_iron_offset_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_mag_auto_hard_iron_offset_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->est_mag_auto_hard_iron_offset_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "est_mag_auto_hard_iron_offset_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // est_mag_auto_soft_iron_matrix
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "est_mag_auto_soft_iron_matrix");
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
    float * src = &(ros_message->est_mag_auto_soft_iron_matrix[0]);
    memcpy(dst, src, 9 * sizeof(float));
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
