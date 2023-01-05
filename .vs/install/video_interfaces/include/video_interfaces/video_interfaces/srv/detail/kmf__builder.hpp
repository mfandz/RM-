// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from video_interfaces:srv/Kmf.idl
// generated code does not contain a copyright notice

#ifndef VIDEO_INTERFACES__SRV__DETAIL__KMF__BUILDER_HPP_
#define VIDEO_INTERFACES__SRV__DETAIL__KMF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "video_interfaces/srv/detail/kmf__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace video_interfaces
{

namespace srv
{

namespace builder
{

class Init_Kmf_Request_y2
{
public:
  explicit Init_Kmf_Request_y2(::video_interfaces::srv::Kmf_Request & msg)
  : msg_(msg)
  {}
  ::video_interfaces::srv::Kmf_Request y2(::video_interfaces::srv::Kmf_Request::_y2_type arg)
  {
    msg_.y2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::video_interfaces::srv::Kmf_Request msg_;
};

class Init_Kmf_Request_x2
{
public:
  explicit Init_Kmf_Request_x2(::video_interfaces::srv::Kmf_Request & msg)
  : msg_(msg)
  {}
  Init_Kmf_Request_y2 x2(::video_interfaces::srv::Kmf_Request::_x2_type arg)
  {
    msg_.x2 = std::move(arg);
    return Init_Kmf_Request_y2(msg_);
  }

private:
  ::video_interfaces::srv::Kmf_Request msg_;
};

class Init_Kmf_Request_y1
{
public:
  explicit Init_Kmf_Request_y1(::video_interfaces::srv::Kmf_Request & msg)
  : msg_(msg)
  {}
  Init_Kmf_Request_x2 y1(::video_interfaces::srv::Kmf_Request::_y1_type arg)
  {
    msg_.y1 = std::move(arg);
    return Init_Kmf_Request_x2(msg_);
  }

private:
  ::video_interfaces::srv::Kmf_Request msg_;
};

class Init_Kmf_Request_x1
{
public:
  Init_Kmf_Request_x1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Kmf_Request_y1 x1(::video_interfaces::srv::Kmf_Request::_x1_type arg)
  {
    msg_.x1 = std::move(arg);
    return Init_Kmf_Request_y1(msg_);
  }

private:
  ::video_interfaces::srv::Kmf_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::video_interfaces::srv::Kmf_Request>()
{
  return video_interfaces::srv::builder::Init_Kmf_Request_x1();
}

}  // namespace video_interfaces


namespace video_interfaces
{

namespace srv
{

namespace builder
{

class Init_Kmf_Response_y2
{
public:
  explicit Init_Kmf_Response_y2(::video_interfaces::srv::Kmf_Response & msg)
  : msg_(msg)
  {}
  ::video_interfaces::srv::Kmf_Response y2(::video_interfaces::srv::Kmf_Response::_y2_type arg)
  {
    msg_.y2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::video_interfaces::srv::Kmf_Response msg_;
};

class Init_Kmf_Response_x2
{
public:
  explicit Init_Kmf_Response_x2(::video_interfaces::srv::Kmf_Response & msg)
  : msg_(msg)
  {}
  Init_Kmf_Response_y2 x2(::video_interfaces::srv::Kmf_Response::_x2_type arg)
  {
    msg_.x2 = std::move(arg);
    return Init_Kmf_Response_y2(msg_);
  }

private:
  ::video_interfaces::srv::Kmf_Response msg_;
};

class Init_Kmf_Response_y1
{
public:
  explicit Init_Kmf_Response_y1(::video_interfaces::srv::Kmf_Response & msg)
  : msg_(msg)
  {}
  Init_Kmf_Response_x2 y1(::video_interfaces::srv::Kmf_Response::_y1_type arg)
  {
    msg_.y1 = std::move(arg);
    return Init_Kmf_Response_x2(msg_);
  }

private:
  ::video_interfaces::srv::Kmf_Response msg_;
};

class Init_Kmf_Response_x1
{
public:
  Init_Kmf_Response_x1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Kmf_Response_y1 x1(::video_interfaces::srv::Kmf_Response::_x1_type arg)
  {
    msg_.x1 = std::move(arg);
    return Init_Kmf_Response_y1(msg_);
  }

private:
  ::video_interfaces::srv::Kmf_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::video_interfaces::srv::Kmf_Response>()
{
  return video_interfaces::srv::builder::Init_Kmf_Response_x1();
}

}  // namespace video_interfaces

#endif  // VIDEO_INTERFACES__SRV__DETAIL__KMF__BUILDER_HPP_
