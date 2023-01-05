// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from video_interfaces:msg/Send.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "video_interfaces/msg/detail/send__struct.hpp"
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

void Send_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) video_interfaces::msg::Send(_init);
}

void Send_fini_function(void * message_memory)
{
  auto typed_message = static_cast<video_interfaces::msg::Send *>(message_memory);
  typed_message->~Send();
}

size_t size_function__Send__rvec(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Send__rvec(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Send__rvec(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Send__rvec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Send__rvec(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Send__rvec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Send__rvec(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__Send__tvec(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Send__tvec(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Send__tvec(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Send__tvec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Send__tvec(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Send__tvec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Send__tvec(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Send_message_member_array[5] = {
  {
    "dist",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(video_interfaces::msg::Send, dist),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rvec",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(video_interfaces::msg::Send, rvec),  // bytes offset in struct
    nullptr,  // default value
    size_function__Send__rvec,  // size() function pointer
    get_const_function__Send__rvec,  // get_const(index) function pointer
    get_function__Send__rvec,  // get(index) function pointer
    fetch_function__Send__rvec,  // fetch(index, &value) function pointer
    assign_function__Send__rvec,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tvec",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(video_interfaces::msg::Send, tvec),  // bytes offset in struct
    nullptr,  // default value
    size_function__Send__tvec,  // size() function pointer
    get_const_function__Send__tvec,  // get_const(index) function pointer
    get_function__Send__tvec,  // get(index) function pointer
    fetch_function__Send__tvec,  // fetch(index, &value) function pointer
    assign_function__Send__tvec,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pitch",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(video_interfaces::msg::Send, pitch),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "roll",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(video_interfaces::msg::Send, roll),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Send_message_members = {
  "video_interfaces::msg",  // message namespace
  "Send",  // message name
  5,  // number of fields
  sizeof(video_interfaces::msg::Send),
  Send_message_member_array,  // message members
  Send_init_function,  // function to initialize message memory (memory has to be allocated)
  Send_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Send_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Send_message_members,
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
get_message_type_support_handle<video_interfaces::msg::Send>()
{
  return &::video_interfaces::msg::rosidl_typesupport_introspection_cpp::Send_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, video_interfaces, msg, Send)() {
  return &::video_interfaces::msg::rosidl_typesupport_introspection_cpp::Send_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
