// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from video_interfaces:msg/Send.idl
// generated code does not contain a copyright notice

#ifndef VIDEO_INTERFACES__MSG__DETAIL__SEND__TRAITS_HPP_
#define VIDEO_INTERFACES__MSG__DETAIL__SEND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "video_interfaces/msg/detail/send__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace video_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Send & msg,
  std::ostream & out)
{
  out << "{";
  // member: dist
  {
    out << "dist: ";
    rosidl_generator_traits::value_to_yaml(msg.dist, out);
    out << ", ";
  }

  // member: rvec
  {
    if (msg.rvec.size() == 0) {
      out << "rvec: []";
    } else {
      out << "rvec: [";
      size_t pending_items = msg.rvec.size();
      for (auto item : msg.rvec) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tvec
  {
    if (msg.tvec.size() == 0) {
      out << "tvec: []";
    } else {
      out << "tvec: [";
      size_t pending_items = msg.tvec.size();
      for (auto item : msg.tvec) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Send & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist: ";
    rosidl_generator_traits::value_to_yaml(msg.dist, out);
    out << "\n";
  }

  // member: rvec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rvec.size() == 0) {
      out << "rvec: []\n";
    } else {
      out << "rvec:\n";
      for (auto item : msg.rvec) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tvec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tvec.size() == 0) {
      out << "tvec: []\n";
    } else {
      out << "tvec:\n";
      for (auto item : msg.tvec) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Send & msg, bool use_flow_style = false)
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
  const video_interfaces::msg::Send & msg,
  std::ostream & out, size_t indentation = 0)
{
  video_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use video_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const video_interfaces::msg::Send & msg)
{
  return video_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<video_interfaces::msg::Send>()
{
  return "video_interfaces::msg::Send";
}

template<>
inline const char * name<video_interfaces::msg::Send>()
{
  return "video_interfaces/msg/Send";
}

template<>
struct has_fixed_size<video_interfaces::msg::Send>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<video_interfaces::msg::Send>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<video_interfaces::msg::Send>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VIDEO_INTERFACES__MSG__DETAIL__SEND__TRAITS_HPP_
