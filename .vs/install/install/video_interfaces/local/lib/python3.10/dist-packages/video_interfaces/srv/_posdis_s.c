// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from video_interfaces:srv/Posdis.idl
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
#include "video_interfaces/srv/detail/posdis__struct.h"
#include "video_interfaces/srv/detail/posdis__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool video_interfaces__srv__posdis__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("video_interfaces.srv._posdis.Posdis_Request", full_classname_dest, 43) == 0);
  }
  video_interfaces__srv__Posdis_Request * ros_message = _ros_message;
  {  // x1
    PyObject * field = PyObject_GetAttrString(_pymsg, "x1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y1
    PyObject * field = PyObject_GetAttrString(_pymsg, "y1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x2
    PyObject * field = PyObject_GetAttrString(_pymsg, "x2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y2
    PyObject * field = PyObject_GetAttrString(_pymsg, "y2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // open
    PyObject * field = PyObject_GetAttrString(_pymsg, "open");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->open = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * video_interfaces__srv__posdis__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Posdis_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("video_interfaces.srv._posdis");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Posdis_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  video_interfaces__srv__Posdis_Request * ros_message = (video_interfaces__srv__Posdis_Request *)raw_ros_message;
  {  // x1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // open
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->open ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "open", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "video_interfaces/srv/detail/posdis__struct.h"
// already included above
// #include "video_interfaces/srv/detail/posdis__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool video_interfaces__srv__posdis__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("video_interfaces.srv._posdis.Posdis_Response", full_classname_dest, 44) == 0);
  }
  video_interfaces__srv__Posdis_Response * ros_message = _ros_message;
  {  // x1_predict
    PyObject * field = PyObject_GetAttrString(_pymsg, "x1_predict");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x1_predict = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y1_predict
    PyObject * field = PyObject_GetAttrString(_pymsg, "y1_predict");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y1_predict = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x2_predict
    PyObject * field = PyObject_GetAttrString(_pymsg, "x2_predict");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x2_predict = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y2_predict
    PyObject * field = PyObject_GetAttrString(_pymsg, "y2_predict");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y2_predict = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * video_interfaces__srv__posdis__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Posdis_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("video_interfaces.srv._posdis");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Posdis_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  video_interfaces__srv__Posdis_Response * ros_message = (video_interfaces__srv__Posdis_Response *)raw_ros_message;
  {  // x1_predict
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x1_predict);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x1_predict", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y1_predict
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y1_predict);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y1_predict", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x2_predict
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x2_predict);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x2_predict", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y2_predict
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y2_predict);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y2_predict", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
