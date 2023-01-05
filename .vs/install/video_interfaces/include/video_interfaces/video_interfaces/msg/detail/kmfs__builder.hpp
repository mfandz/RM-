// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from video_interfaces:msg/Kmfs.idl
// generated code does not contain a copyright notice

#ifndef VIDEO_INTERFACES__MSG__DETAIL__KMFS__BUILDER_HPP_
#define VIDEO_INTERFACES__MSG__DETAIL__KMFS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "video_interfaces/msg/detail/kmfs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace video_interfaces
{

namespace msg
{

namespace builder
{

class Init_Kmfs_open
{
public:
  explicit Init_Kmfs_open(::video_interfaces::msg::Kmfs & msg)
  : msg_(msg)
  {}
  ::video_interfaces::msg::Kmfs open(::video_interfaces::msg::Kmfs::_open_type arg)
  {
    msg_.open = std::move(arg);
    return std::move(msg_);
  }

private:
  ::video_interfaces::msg::Kmfs msg_;
};

class Init_Kmfs_y2
{
public:
  explicit Init_Kmfs_y2(::video_interfaces::msg::Kmfs & msg)
  : msg_(msg)
  {}
  Init_Kmfs_open y2(::video_interfaces::msg::Kmfs::_y2_type arg)
  {
    msg_.y2 = std::move(arg);
    return Init_Kmfs_open(msg_);
  }

private:
  ::video_interfaces::msg::Kmfs msg_;
};

class Init_Kmfs_x2
{
public:
  explicit Init_Kmfs_x2(::video_interfaces::msg::Kmfs & msg)
  : msg_(msg)
  {}
  Init_Kmfs_y2 x2(::video_interfaces::msg::Kmfs::_x2_type arg)
  {
    msg_.x2 = std::move(arg);
    return Init_Kmfs_y2(msg_);
  }

private:
  ::video_interfaces::msg::Kmfs msg_;
};

class Init_Kmfs_y1
{
public:
  explicit Init_Kmfs_y1(::video_interfaces::msg::Kmfs & msg)
  : msg_(msg)
  {}
  Init_Kmfs_x2 y1(::video_interfaces::msg::Kmfs::_y1_type arg)
  {
    msg_.y1 = std::move(arg);
    return Init_Kmfs_x2(msg_);
  }

private:
  ::video_interfaces::msg::Kmfs msg_;
};

class Init_Kmfs_x1
{
public:
  Init_Kmfs_x1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Kmfs_y1 x1(::video_interfaces::msg::Kmfs::_x1_type arg)
  {
    msg_.x1 = std::move(arg);
    return Init_Kmfs_y1(msg_);
  }

private:
  ::video_interfaces::msg::Kmfs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::video_interfaces::msg::Kmfs>()
{
  return video_interfaces::msg::builder::Init_Kmfs_x1();
}

}  // namespace video_interfaces

#endif  // VIDEO_INTERFACES__MSG__DETAIL__KMFS__BUILDER_HPP_
