// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pb_rm_interfaces:msg/EventData.idl
// generated code does not contain a copyright notice

#ifndef PB_RM_INTERFACES__MSG__DETAIL__EVENT_DATA__TRAITS_HPP_
#define PB_RM_INTERFACES__MSG__DETAIL__EVENT_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pb_rm_interfaces/msg/detail/event_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pb_rm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const EventData & msg,
  std::ostream & out)
{
  out << "{";
  // member: supply_station_front
  {
    out << "supply_station_front: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_station_front, out);
    out << ", ";
  }

  // member: supply_station_internal
  {
    out << "supply_station_internal: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_station_internal, out);
    out << ", ";
  }

  // member: supply_zone
  {
    out << "supply_zone: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_zone, out);
    out << ", ";
  }

  // member: center_gain_zone
  {
    out << "center_gain_zone: ";
    rosidl_generator_traits::value_to_yaml(msg.center_gain_zone, out);
    out << ", ";
  }

  // member: small_energy
  {
    out << "small_energy: ";
    rosidl_generator_traits::value_to_yaml(msg.small_energy, out);
    out << ", ";
  }

  // member: big_energy
  {
    out << "big_energy: ";
    rosidl_generator_traits::value_to_yaml(msg.big_energy, out);
    out << ", ";
  }

  // member: circular_highland
  {
    out << "circular_highland: ";
    rosidl_generator_traits::value_to_yaml(msg.circular_highland, out);
    out << ", ";
  }

  // member: trapezoidal_highland_3
  {
    out << "trapezoidal_highland_3: ";
    rosidl_generator_traits::value_to_yaml(msg.trapezoidal_highland_3, out);
    out << ", ";
  }

  // member: trapezoidal_highland_4
  {
    out << "trapezoidal_highland_4: ";
    rosidl_generator_traits::value_to_yaml(msg.trapezoidal_highland_4, out);
    out << ", ";
  }

  // member: base_virtual_shield_remaining
  {
    out << "base_virtual_shield_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.base_virtual_shield_remaining, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EventData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: supply_station_front
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supply_station_front: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_station_front, out);
    out << "\n";
  }

  // member: supply_station_internal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supply_station_internal: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_station_internal, out);
    out << "\n";
  }

  // member: supply_zone
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supply_zone: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_zone, out);
    out << "\n";
  }

  // member: center_gain_zone
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_gain_zone: ";
    rosidl_generator_traits::value_to_yaml(msg.center_gain_zone, out);
    out << "\n";
  }

  // member: small_energy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "small_energy: ";
    rosidl_generator_traits::value_to_yaml(msg.small_energy, out);
    out << "\n";
  }

  // member: big_energy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "big_energy: ";
    rosidl_generator_traits::value_to_yaml(msg.big_energy, out);
    out << "\n";
  }

  // member: circular_highland
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "circular_highland: ";
    rosidl_generator_traits::value_to_yaml(msg.circular_highland, out);
    out << "\n";
  }

  // member: trapezoidal_highland_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trapezoidal_highland_3: ";
    rosidl_generator_traits::value_to_yaml(msg.trapezoidal_highland_3, out);
    out << "\n";
  }

  // member: trapezoidal_highland_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trapezoidal_highland_4: ";
    rosidl_generator_traits::value_to_yaml(msg.trapezoidal_highland_4, out);
    out << "\n";
  }

  // member: base_virtual_shield_remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_virtual_shield_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.base_virtual_shield_remaining, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EventData & msg, bool use_flow_style = false)
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
  const pb_rm_interfaces::msg::EventData & msg,
  std::ostream & out, size_t indentation = 0)
{
  pb_rm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pb_rm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const pb_rm_interfaces::msg::EventData & msg)
{
  return pb_rm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pb_rm_interfaces::msg::EventData>()
{
  return "pb_rm_interfaces::msg::EventData";
}

template<>
inline const char * name<pb_rm_interfaces::msg::EventData>()
{
  return "pb_rm_interfaces/msg/EventData";
}

template<>
struct has_fixed_size<pb_rm_interfaces::msg::EventData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pb_rm_interfaces::msg::EventData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pb_rm_interfaces::msg::EventData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PB_RM_INTERFACES__MSG__DETAIL__EVENT_DATA__TRAITS_HPP_
