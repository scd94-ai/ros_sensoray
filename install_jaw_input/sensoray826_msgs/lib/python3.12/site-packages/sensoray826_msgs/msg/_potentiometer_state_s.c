// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sensoray826_msgs:msg/PotentiometerState.idl
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
#include "sensoray826_msgs/msg/detail/potentiometer_state__struct.h"
#include "sensoray826_msgs/msg/detail/potentiometer_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sensoray826_msgs__msg__potentiometer_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("sensoray826_msgs.msg._potentiometer_state.PotentiometerState", full_classname_dest, 60) == 0);
  }
  sensoray826_msgs__msg__PotentiometerState * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // session_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "session_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->session_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // sequence
    PyObject * field = PyObject_GetAttrString(_pymsg, "sequence");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sequence = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // board
    PyObject * field = PyObject_GetAttrString(_pymsg, "board");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->board = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // settling_us
    PyObject * field = PyObject_GetAttrString(_pymsg, "settling_us");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->settling_us = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // adc_channels
    PyObject * field = PyObject_GetAttrString(_pymsg, "adc_channels");
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
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 2;
      uint8_t * dest = ros_message->adc_channels;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // adc_timestamps_us
    PyObject * field = PyObject_GetAttrString(_pymsg, "adc_timestamps_us");
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
      assert(PyArray_TYPE(seq_field) == NPY_UINT32);
      Py_ssize_t size = 2;
      uint32_t * dest = ros_message->adc_timestamps_us;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint32_t tmp = *(npy_uint32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // voltage_v
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage_v");
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
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 2;
      double * dest = ros_message->voltage_v;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "valid");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'valid'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 2;
      bool * dest = ros_message->valid;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // sdk_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "sdk_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sdk_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // supply_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "supply_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->supply_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // supply_voltage_v
    PyObject * field = PyObject_GetAttrString(_pymsg, "supply_voltage_v");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->supply_voltage_v = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // supply_adc_timestamp_us
    PyObject * field = PyObject_GetAttrString(_pymsg, "supply_adc_timestamp_us");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->supply_adc_timestamp_us = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sensoray826_msgs__msg__potentiometer_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PotentiometerState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sensoray826_msgs.msg._potentiometer_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PotentiometerState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sensoray826_msgs__msg__PotentiometerState * ros_message = (sensoray826_msgs__msg__PotentiometerState *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // session_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->session_id.data,
      strlen(ros_message->session_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "session_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sequence
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->sequence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sequence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // board
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->board);
    {
      int rc = PyObject_SetAttrString(_pymessage, "board", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // settling_us
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->settling_us);
    {
      int rc = PyObject_SetAttrString(_pymessage, "settling_us", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // adc_channels
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "adc_channels");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->adc_channels[0]);
    memcpy(dst, src, 2 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // adc_timestamps_us
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "adc_timestamps_us");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT32);
    assert(sizeof(npy_uint32) == sizeof(uint32_t));
    npy_uint32 * dst = (npy_uint32 *)PyArray_GETPTR1(seq_field, 0);
    uint32_t * src = &(ros_message->adc_timestamps_us[0]);
    memcpy(dst, src, 2 * sizeof(uint32_t));
    Py_DECREF(field);
  }
  {  // voltage_v
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "voltage_v");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->voltage_v[0]);
    memcpy(dst, src, 2 * sizeof(double));
    Py_DECREF(field);
  }
  {  // valid
    PyObject * field = NULL;
    size_t size = 2;
    bool * src = ros_message->valid;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sdk_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sdk_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sdk_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // supply_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->supply_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "supply_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // supply_voltage_v
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->supply_voltage_v);
    {
      int rc = PyObject_SetAttrString(_pymessage, "supply_voltage_v", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // supply_adc_timestamp_us
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->supply_adc_timestamp_us);
    {
      int rc = PyObject_SetAttrString(_pymessage, "supply_adc_timestamp_us", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
