// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from video_interfaces:msg/Send.idl
// generated code does not contain a copyright notice

#ifndef VIDEO_INTERFACES__MSG__DETAIL__SEND__BUILDER_HPP_
#define VIDEO_INTERFACES__MSG__DETAIL__SEND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "video_interfaces/msg/detail/send__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace video_interfaces
{

namespace msg
{

namespace builder
{

class Init_Send_roll
{
public:
  explicit Init_Send_roll(::video_interfaces::msg::Send & msg)
  : msg_(msg)
  {}
  ::video_interfaces::msg::Send roll(::video_interfaces::msg::Send::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return std::move(msg_);
  }

private:
  ::video_interfaces::msg::Send msg_;
};

class Init_Send_pitch
{
public:
  explicit Init_Send_pitch(::video_interfaces::msg::Send & msg)
  : msg_(msg)
  {}
  Init_Send_roll pitch(::video_interfaces::msg::Send::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Send_roll(msg_);
  }

private:
  ::video_interfaces::msg::Send msg_;
};

class Init_Send_tvec
{
public:
  explicit Init_Send_tvec(::video_interfaces::msg::Send & msg)
  : msg_(msg)
  {}
  Init_Send_pitch tvec(::video_interfaces::msg::Send::_tvec_type arg)
  {
    msg_.tvec = std::move(arg);
    return Init_Send_pitch(msg_);
  }

private:
  ::video_interfaces::msg::Send msg_;
};

class Init_Send_rvec
{
public:
  explicit Init_Send_rvec(::video_interfaces::msg::Send & msg)
  : msg_(msg)
  {}
  Init_Send_tvec rvec(::video_interfaces::msg::Send::_rvec_type arg)
  {
    msg_.rvec = std::move(arg);
    return Init_Send_tvec(msg_);
  }

private:
  ::video_interfaces::msg::Send msg_;
};

class Init_Send_dist
{
public:
  Init_Send_dist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Send_rvec dist(::video_interfaces::msg::Send::_dist_type arg)
  {
    msg_.dist = std::move(arg);
    return Init_Send_rvec(msg_);
  }

private:
  ::video_interfaces::msg::Send msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::video_interfaces::msg::Send>()
{
  return video_interfaces::msg::builder::Init_Send_dist();
}

}  // namespace video_interfaces

#endif  // VIDEO_INTERFACES__MSG__DETAIL__SEND__BUILDER_HPP_
