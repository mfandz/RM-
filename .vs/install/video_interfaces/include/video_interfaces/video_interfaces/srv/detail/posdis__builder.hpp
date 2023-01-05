// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from video_interfaces:srv/Posdis.idl
// generated code does not contain a copyright notice

#ifndef VIDEO_INTERFACES__SRV__DETAIL__POSDIS__BUILDER_HPP_
#define VIDEO_INTERFACES__SRV__DETAIL__POSDIS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "video_interfaces/srv/detail/posdis__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace video_interfaces
{

namespace srv
{

namespace builder
{

class Init_Posdis_Request_open
{
public:
  explicit Init_Posdis_Request_open(::video_interfaces::srv::Posdis_Request & msg)
  : msg_(msg)
  {}
  ::video_interfaces::srv::Posdis_Request open(::video_interfaces::srv::Posdis_Request::_open_type arg)
  {
    msg_.open = std::move(arg);
    return std::move(msg_);
  }

private:
  ::video_interfaces::srv::Posdis_Request msg_;
};

class Init_Posdis_Request_y2
{
public:
  explicit Init_Posdis_Request_y2(::video_interfaces::srv::Posdis_Request & msg)
  : msg_(msg)
  {}
  Init_Posdis_Request_open y2(::video_interfaces::srv::Posdis_Request::_y2_type arg)
  {
    msg_.y2 = std::move(arg);
    return Init_Posdis_Request_open(msg_);
  }

private:
  ::video_interfaces::srv::Posdis_Request msg_;
};

class Init_Posdis_Request_x2
{
public:
  explicit Init_Posdis_Request_x2(::video_interfaces::srv::Posdis_Request & msg)
  : msg_(msg)
  {}
  Init_Posdis_Request_y2 x2(::video_interfaces::srv::Posdis_Request::_x2_type arg)
  {
    msg_.x2 = std::move(arg);
    return Init_Posdis_Request_y2(msg_);
  }

private:
  ::video_interfaces::srv::Posdis_Request msg_;
};

class Init_Posdis_Request_y1
{
public:
  explicit Init_Posdis_Request_y1(::video_interfaces::srv::Posdis_Request & msg)
  : msg_(msg)
  {}
  Init_Posdis_Request_x2 y1(::video_interfaces::srv::Posdis_Request::_y1_type arg)
  {
    msg_.y1 = std::move(arg);
    return Init_Posdis_Request_x2(msg_);
  }

private:
  ::video_interfaces::srv::Posdis_Request msg_;
};

class Init_Posdis_Request_x1
{
public:
  Init_Posdis_Request_x1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Posdis_Request_y1 x1(::video_interfaces::srv::Posdis_Request::_x1_type arg)
  {
    msg_.x1 = std::move(arg);
    return Init_Posdis_Request_y1(msg_);
  }

private:
  ::video_interfaces::srv::Posdis_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::video_interfaces::srv::Posdis_Request>()
{
  return video_interfaces::srv::builder::Init_Posdis_Request_x1();
}

}  // namespace video_interfaces


namespace video_interfaces
{

namespace srv
{

namespace builder
{

class Init_Posdis_Response_y2_predict
{
public:
  explicit Init_Posdis_Response_y2_predict(::video_interfaces::srv::Posdis_Response & msg)
  : msg_(msg)
  {}
  ::video_interfaces::srv::Posdis_Response y2_predict(::video_interfaces::srv::Posdis_Response::_y2_predict_type arg)
  {
    msg_.y2_predict = std::move(arg);
    return std::move(msg_);
  }

private:
  ::video_interfaces::srv::Posdis_Response msg_;
};

class Init_Posdis_Response_x2_predict
{
public:
  explicit Init_Posdis_Response_x2_predict(::video_interfaces::srv::Posdis_Response & msg)
  : msg_(msg)
  {}
  Init_Posdis_Response_y2_predict x2_predict(::video_interfaces::srv::Posdis_Response::_x2_predict_type arg)
  {
    msg_.x2_predict = std::move(arg);
    return Init_Posdis_Response_y2_predict(msg_);
  }

private:
  ::video_interfaces::srv::Posdis_Response msg_;
};

class Init_Posdis_Response_y1_predict
{
public:
  explicit Init_Posdis_Response_y1_predict(::video_interfaces::srv::Posdis_Response & msg)
  : msg_(msg)
  {}
  Init_Posdis_Response_x2_predict y1_predict(::video_interfaces::srv::Posdis_Response::_y1_predict_type arg)
  {
    msg_.y1_predict = std::move(arg);
    return Init_Posdis_Response_x2_predict(msg_);
  }

private:
  ::video_interfaces::srv::Posdis_Response msg_;
};

class Init_Posdis_Response_x1_predict
{
public:
  Init_Posdis_Response_x1_predict()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Posdis_Response_y1_predict x1_predict(::video_interfaces::srv::Posdis_Response::_x1_predict_type arg)
  {
    msg_.x1_predict = std::move(arg);
    return Init_Posdis_Response_y1_predict(msg_);
  }

private:
  ::video_interfaces::srv::Posdis_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::video_interfaces::srv::Posdis_Response>()
{
  return video_interfaces::srv::builder::Init_Posdis_Response_x1_predict();
}

}  // namespace video_interfaces

#endif  // VIDEO_INTERFACES__SRV__DETAIL__POSDIS__BUILDER_HPP_
