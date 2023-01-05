// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from video_interfaces:msg/Pos.idl
// generated code does not contain a copyright notice

#ifndef VIDEO_INTERFACES__MSG__DETAIL__POS__BUILDER_HPP_
#define VIDEO_INTERFACES__MSG__DETAIL__POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "video_interfaces/msg/detail/pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace video_interfaces
{

namespace msg
{

namespace builder
{

class Init_Pos_success
{
public:
  explicit Init_Pos_success(::video_interfaces::msg::Pos & msg)
  : msg_(msg)
  {}
  ::video_interfaces::msg::Pos success(::video_interfaces::msg::Pos::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::video_interfaces::msg::Pos msg_;
};

class Init_Pos_open
{
public:
  explicit Init_Pos_open(::video_interfaces::msg::Pos & msg)
  : msg_(msg)
  {}
  Init_Pos_success open(::video_interfaces::msg::Pos::_open_type arg)
  {
    msg_.open = std::move(arg);
    return Init_Pos_success(msg_);
  }

private:
  ::video_interfaces::msg::Pos msg_;
};

class Init_Pos_angle
{
public:
  explicit Init_Pos_angle(::video_interfaces::msg::Pos & msg)
  : msg_(msg)
  {}
  Init_Pos_open angle(::video_interfaces::msg::Pos::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_Pos_open(msg_);
  }

private:
  ::video_interfaces::msg::Pos msg_;
};

class Init_Pos_height
{
public:
  explicit Init_Pos_height(::video_interfaces::msg::Pos & msg)
  : msg_(msg)
  {}
  Init_Pos_angle height(::video_interfaces::msg::Pos::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Pos_angle(msg_);
  }

private:
  ::video_interfaces::msg::Pos msg_;
};

class Init_Pos_width
{
public:
  explicit Init_Pos_width(::video_interfaces::msg::Pos & msg)
  : msg_(msg)
  {}
  Init_Pos_height width(::video_interfaces::msg::Pos::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Pos_height(msg_);
  }

private:
  ::video_interfaces::msg::Pos msg_;
};

class Init_Pos_y2
{
public:
  explicit Init_Pos_y2(::video_interfaces::msg::Pos & msg)
  : msg_(msg)
  {}
  Init_Pos_width y2(::video_interfaces::msg::Pos::_y2_type arg)
  {
    msg_.y2 = std::move(arg);
    return Init_Pos_width(msg_);
  }

private:
  ::video_interfaces::msg::Pos msg_;
};

class Init_Pos_x2
{
public:
  explicit Init_Pos_x2(::video_interfaces::msg::Pos & msg)
  : msg_(msg)
  {}
  Init_Pos_y2 x2(::video_interfaces::msg::Pos::_x2_type arg)
  {
    msg_.x2 = std::move(arg);
    return Init_Pos_y2(msg_);
  }

private:
  ::video_interfaces::msg::Pos msg_;
};

class Init_Pos_y1
{
public:
  explicit Init_Pos_y1(::video_interfaces::msg::Pos & msg)
  : msg_(msg)
  {}
  Init_Pos_x2 y1(::video_interfaces::msg::Pos::_y1_type arg)
  {
    msg_.y1 = std::move(arg);
    return Init_Pos_x2(msg_);
  }

private:
  ::video_interfaces::msg::Pos msg_;
};

class Init_Pos_x1
{
public:
  Init_Pos_x1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pos_y1 x1(::video_interfaces::msg::Pos::_x1_type arg)
  {
    msg_.x1 = std::move(arg);
    return Init_Pos_y1(msg_);
  }

private:
  ::video_interfaces::msg::Pos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::video_interfaces::msg::Pos>()
{
  return video_interfaces::msg::builder::Init_Pos_x1();
}

}  // namespace video_interfaces

#endif  // VIDEO_INTERFACES__MSG__DETAIL__POS__BUILDER_HPP_
