// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from video_interfaces:msg/Image.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "video_interfaces/msg/detail/image__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace video_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Image_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) video_interfaces::msg::Image(_init);
}

void Image_fini_function(void * message_memory)
{
  auto typed_message = static_cast<video_interfaces::msg::Image *>(message_memory);
  typed_message->~Image();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Image_message_member_array[2] = {
  {
    "img_pre",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(video_interfaces::msg::Image, img_pre),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "img_th1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(video_interfaces::msg::Image, img_th1),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Image_message_members = {
  "video_interfaces::msg",  // message namespace
  "Image",  // message name
  2,  // number of fields
  sizeof(video_interfaces::msg::Image),
  Image_message_member_array,  // message members
  Image_init_function,  // function to initialize message memory (memory has to be allocated)
  Image_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Image_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Image_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace video_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<video_interfaces::msg::Image>()
{
  return &::video_interfaces::msg::rosidl_typesupport_introspection_cpp::Image_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, video_interfaces, msg, Image)() {
  return &::video_interfaces::msg::rosidl_typesupport_introspection_cpp::Image_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
