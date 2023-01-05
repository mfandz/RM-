// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from video_interfaces:msg/Kmfs.idl
// generated code does not contain a copyright notice

#ifndef VIDEO_INTERFACES__MSG__DETAIL__KMFS__TRAITS_HPP_
#define VIDEO_INTERFACES__MSG__DETAIL__KMFS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "video_interfaces/msg/detail/kmfs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace video_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Kmfs & msg,
  std::ostream & out)
{
  out << "{";
  // member: x1
  {
    out << "x1: ";
    rosidl_generator_traits::value_to_yaml(msg.x1, out);
    out << ", ";
  }

  // member: y1
  {
    out << "y1: ";
    rosidl_generator_traits::value_to_yaml(msg.y1, out);
    out << ", ";
  }

  // member: x2
  {
    out << "x2: ";
    rosidl_generator_traits::value_to_yaml(msg.x2, out);
    out << ", ";
  }

  // member: y2
  {
    out << "y2: ";
    rosidl_generator_traits::value_to_yaml(msg.y2, out);
    out << ", ";
  }

  // member: open
  {
    out << "open: ";
    rosidl_generator_traits::value_to_yaml(msg.open, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Kmfs & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x1: ";
    rosidl_generator_traits::value_to_yaml(msg.x1, out);
    out << "\n";
  }

  // member: y1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y1: ";
    rosidl_generator_traits::value_to_yaml(msg.y1, out);
    out << "\n";
  }

  // member: x2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x2: ";
    rosidl_generator_traits::value_to_yaml(msg.x2, out);
    out << "\n";
  }

  // member: y2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y2: ";
    rosidl_generator_traits::value_to_yaml(msg.y2, out);
    out << "\n";
  }

  // member: open
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "open: ";
    rosidl_generator_traits::value_to_yaml(msg.open, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Kmfs & msg, bool use_flow_style = false)
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
  const video_interfaces::msg::Kmfs & msg,
  std::ostream & out, size_t indentation = 0)
{
  video_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use video_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const video_interfaces::msg::Kmfs & msg)
{
  return video_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<video_interfaces::msg::Kmfs>()
{
  return "video_interfaces::msg::Kmfs";
}

template<>
inline const char * name<video_interfaces::msg::Kmfs>()
{
  return "video_interfaces/msg/Kmfs";
}

template<>
struct has_fixed_size<video_interfaces::msg::Kmfs>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<video_interfaces::msg::Kmfs>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<video_interfaces::msg::Kmfs>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VIDEO_INTERFACES__MSG__DETAIL__KMFS__TRAITS_HPP_
