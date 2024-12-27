// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pb_rm_interfaces:msg/GroundRobotPosition.idl
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
#include "pb_rm_interfaces/msg/detail/ground_robot_position__struct.h"
#include "pb_rm_interfaces/msg/detail/ground_robot_position__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool pb_rm_interfaces__msg__ground_robot_position__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("pb_rm_interfaces.msg._ground_robot_position.GroundRobotPosition", full_classname_dest, 63) == 0);
  }
  pb_rm_interfaces__msg__GroundRobotPosition * ros_message = _ros_message;
  {  // hero_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "hero_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hero_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hero_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "hero_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hero_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // engineer_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "engineer_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->engineer_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // engineer_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "engineer_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->engineer_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // standard_3_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "standard_3_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->standard_3_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // standard_3_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "standard_3_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->standard_3_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // standard_4_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "standard_4_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->standard_4_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // standard_4_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "standard_4_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->standard_4_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // standard_5_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "standard_5_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->standard_5_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // standard_5_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "standard_5_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->standard_5_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pb_rm_interfaces__msg__ground_robot_position__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GroundRobotPosition */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pb_rm_interfaces.msg._ground_robot_position");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GroundRobotPosition");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pb_rm_interfaces__msg__GroundRobotPosition * ros_message = (pb_rm_interfaces__msg__GroundRobotPosition *)raw_ros_message;
  {  // hero_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hero_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hero_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hero_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hero_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hero_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engineer_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->engineer_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engineer_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engineer_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->engineer_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engineer_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // standard_3_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->standard_3_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "standard_3_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // standard_3_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->standard_3_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "standard_3_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // standard_4_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->standard_4_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "standard_4_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // standard_4_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->standard_4_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "standard_4_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // standard_5_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->standard_5_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "standard_5_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // standard_5_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->standard_5_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "standard_5_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
