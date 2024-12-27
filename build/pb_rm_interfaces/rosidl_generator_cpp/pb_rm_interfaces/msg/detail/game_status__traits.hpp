// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pb_rm_interfaces:msg/GameStatus.idl
// generated code does not contain a copyright notice

#ifndef PB_RM_INTERFACES__MSG__DETAIL__GAME_STATUS__TRAITS_HPP_
#define PB_RM_INTERFACES__MSG__DETAIL__GAME_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pb_rm_interfaces/msg/detail/game_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pb_rm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const GameStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: game_progress
  {
    out << "game_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.game_progress, out);
    out << ", ";
  }

  // member: stage_remain_time
  {
    out << "stage_remain_time: ";
    rosidl_generator_traits::value_to_yaml(msg.stage_remain_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GameStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: game_progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.game_progress, out);
    out << "\n";
  }

  // member: stage_remain_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stage_remain_time: ";
    rosidl_generator_traits::value_to_yaml(msg.stage_remain_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GameStatus & msg, bool use_flow_style = false)
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

}  // namespace pb_rm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pb_rm_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pb_rm_interfaces::msg::GameStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  pb_rm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pb_rm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const pb_rm_interfaces::msg::GameStatus & msg)
{
  return pb_rm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pb_rm_interfaces::msg::GameStatus>()
{
  return "pb_rm_interfaces::msg::GameStatus";
}

template<>
inline const char * name<pb_rm_interfaces::msg::GameStatus>()
{
  return "pb_rm_interfaces/msg/GameStatus";
}

template<>
struct has_fixed_size<pb_rm_interfaces::msg::GameStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pb_rm_interfaces::msg::GameStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pb_rm_interfaces::msg::GameStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PB_RM_INTERFACES__MSG__DETAIL__GAME_STATUS__TRAITS_HPP_
