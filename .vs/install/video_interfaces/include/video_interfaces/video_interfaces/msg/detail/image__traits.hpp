// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from video_interfaces:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef VIDEO_INTERFACES__MSG__DETAIL__IMAGE__TRAITS_HPP_
#define VIDEO_INTERFACES__MSG__DETAIL__IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "video_interfaces/msg/detail/image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'img_pre'
// Member 'img_th1'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace video_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Image & msg,
  std::ostream & out)
{
  out << "{";
  // member: img_pre
  {
    out << "img_pre: ";
    to_flow_style_yaml(msg.img_pre, out);
    out << ", ";
  }

  // member: img_th1
  {
    out << "img_th1: ";
    to_flow_style_yaml(msg.img_th1, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Image & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: img_pre
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "img_pre:\n";
    to_block_style_yaml(msg.img_pre, out, indentation + 2);
  }

  // member: img_th1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "img_th1:\n";
    to_block_style_yaml(msg.img_th1, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Image & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace video_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use video_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const video_interfaces::msg::Image & msg,
  std::ostream & out, size_t indentation = 0)
{
  video_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use video_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const video_interfaces::msg::Image & msg)
{
  return video_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<video_interfaces::msg::Image>()
{
  return "video_interfaces::msg::Image";
}

template<>
inline const char * name<video_interfaces::msg::Image>()
{
  return "video_interfaces/msg/Image";
}

template<>
struct has_fixed_size<video_interfaces::msg::Image>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<video_interfaces::msg::Image>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<video_interfaces::msg::Image>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VIDEO_INTERFACES__MSG__DETAIL__IMAGE__TRAITS_HPP_
