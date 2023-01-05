// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from video_interfaces:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef VIDEO_INTERFACES__MSG__DETAIL__IMAGE__BUILDER_HPP_
#define VIDEO_INTERFACES__MSG__DETAIL__IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "video_interfaces/msg/detail/image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace video_interfaces
{

namespace msg
{

namespace builder
{

class Init_Image_img_th1
{
public:
  explicit Init_Image_img_th1(::video_interfaces::msg::Image & msg)
  : msg_(msg)
  {}
  ::video_interfaces::msg::Image img_th1(::video_interfaces::msg::Image::_img_th1_type arg)
  {
    msg_.img_th1 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::video_interfaces::msg::Image msg_;
};

class Init_Image_img_pre
{
public:
  Init_Image_img_pre()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Image_img_th1 img_pre(::video_interfaces::msg::Image::_img_pre_type arg)
  {
    msg_.img_pre = std::move(arg);
    return Init_Image_img_th1(msg_);
  }

private:
  ::video_interfaces::msg::Image msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::video_interfaces::msg::Image>()
{
  return video_interfaces::msg::builder::Init_Image_img_pre();
}

}  // namespace video_interfaces

#endif  // VIDEO_INTERFACES__MSG__DETAIL__IMAGE__BUILDER_HPP_
