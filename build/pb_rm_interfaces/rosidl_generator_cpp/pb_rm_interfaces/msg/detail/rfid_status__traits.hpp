// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pb_rm_interfaces:msg/RfidStatus.idl
// generated code does not contain a copyright notice

#ifndef PB_RM_INTERFACES__MSG__DETAIL__RFID_STATUS__TRAITS_HPP_
#define PB_RM_INTERFACES__MSG__DETAIL__RFID_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pb_rm_interfaces/msg/detail/rfid_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pb_rm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RfidStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: base_gain_point
  {
    out << "base_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.base_gain_point, out);
    out << ", ";
  }

  // member: circular_highland_gain_point
  {
    out << "circular_highland_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.circular_highland_gain_point, out);
    out << ", ";
  }

  // member: enemy_circular_highland_gain_point
  {
    out << "enemy_circular_highland_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_circular_highland_gain_point, out);
    out << ", ";
  }

  // member: friendly_r3_b3_gain_point
  {
    out << "friendly_r3_b3_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.friendly_r3_b3_gain_point, out);
    out << ", ";
  }

  // member: enemy_r3_b3_gain_point
  {
    out << "enemy_r3_b3_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_r3_b3_gain_point, out);
    out << ", ";
  }

  // member: friendly_r4_b4_gain_point
  {
    out << "friendly_r4_b4_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.friendly_r4_b4_gain_point, out);
    out << ", ";
  }

  // member: enemy_r4_b4_gain_point
  {
    out << "enemy_r4_b4_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_r4_b4_gain_point, out);
    out << ", ";
  }

  // member: energy_mechanism_gain_point
  {
    out << "energy_mechanism_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.energy_mechanism_gain_point, out);
    out << ", ";
  }

  // member: friendly_fly_ramp_front_gain_point
  {
    out << "friendly_fly_ramp_front_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.friendly_fly_ramp_front_gain_point, out);
    out << ", ";
  }

  // member: friendly_fly_ramp_back_gain_point
  {
    out << "friendly_fly_ramp_back_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.friendly_fly_ramp_back_gain_point, out);
    out << ", ";
  }

  // member: enemy_fly_ramp_front_gain_point
  {
    out << "enemy_fly_ramp_front_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_fly_ramp_front_gain_point, out);
    out << ", ";
  }

  // member: enemy_fly_ramp_back_gain_point
  {
    out << "enemy_fly_ramp_back_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_fly_ramp_back_gain_point, out);
    out << ", ";
  }

  // member: friendly_outpost_gain_point
  {
    out << "friendly_outpost_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.friendly_outpost_gain_point, out);
    out << ", ";
  }

  // member: friendly_healing_point
  {
    out << "friendly_healing_point: ";
    rosidl_generator_traits::value_to_yaml(msg.friendly_healing_point, out);
    out << ", ";
  }

  // member: friendly_sentry_patrol_area
  {
    out << "friendly_sentry_patrol_area: ";
    rosidl_generator_traits::value_to_yaml(msg.friendly_sentry_patrol_area, out);
    out << ", ";
  }

  // member: enemy_sentry_patrol_area
  {
    out << "enemy_sentry_patrol_area: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_sentry_patrol_area, out);
    out << ", ";
  }

  // member: friendly_big_resource_island
  {
    out << "friendly_big_resource_island: ";
    rosidl_generator_traits::value_to_yaml(msg.friendly_big_resource_island, out);
    out << ", ";
  }

  // member: enemy_big_resource_island
  {
    out << "enemy_big_resource_island: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_big_resource_island, out);
    out << ", ";
  }

  // member: friendly_exchange_area
  {
    out << "friendly_exchange_area: ";
    rosidl_generator_traits::value_to_yaml(msg.friendly_exchange_area, out);
    out << ", ";
  }

  // member: center_gain_point
  {
    out << "center_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.center_gain_point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RfidStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: base_gain_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.base_gain_point, out);
    out << "\n";
  }

  // member: circular_highland_gain_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "circular_highland_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.circular_highland_gain_point, out);
    out << "\n";
  }

  // member: enemy_circular_highland_gain_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_circular_highland_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_circular_highland_gain_point, out);
    out << "\n";
  }

  // member: friendly_r3_b3_gain_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "friendly_r3_b3_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.friendly_r3_b3_gain_point, out);
    out << "\n";
  }

  // member: enemy_r3_b3_gain_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_r3_b3_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_r3_b3_gain_point, out);
    out << "\n";
  }

  // member: friendly_r4_b4_gain_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "friendly_r4_b4_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.friendly_r4_b4_gain_point, out);
    out << "\n";
  }

  // member: enemy_r4_b4_gain_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_r4_b4_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_r4_b4_gain_point, out);
    out << "\n";
  }

  // member: energy_mechanism_gain_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "energy_mechanism_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.energy_mechanism_gain_point, out);
    out << "\n";
  }

  // member: friendly_fly_ramp_front_gain_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "friendly_fly_ramp_front_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.friendly_fly_ramp_front_gain_point, out);
    out << "\n";
  }

  // member: friendly_fly_ramp_back_gain_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "friendly_fly_ramp_back_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.friendly_fly_ramp_back_gain_point, out);
    out << "\n";
  }

  // member: enemy_fly_ramp_front_gain_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_fly_ramp_front_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_fly_ramp_front_gain_point, out);
    out << "\n";
  }

  // member: enemy_fly_ramp_back_gain_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_fly_ramp_back_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_fly_ramp_back_gain_point, out);
    out << "\n";
  }

  // member: friendly_outpost_gain_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "friendly_outpost_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.friendly_outpost_gain_point, out);
    out << "\n";
  }

  // member: friendly_healing_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "friendly_healing_point: ";
    rosidl_generator_traits::value_to_yaml(msg.friendly_healing_point, out);
    out << "\n";
  }

  // member: friendly_sentry_patrol_area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "friendly_sentry_patrol_area: ";
    rosidl_generator_traits::value_to_yaml(msg.friendly_sentry_patrol_area, out);
    out << "\n";
  }

  // member: enemy_sentry_patrol_area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_sentry_patrol_area: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_sentry_patrol_area, out);
    out << "\n";
  }

  // member: friendly_big_resource_island
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "friendly_big_resource_island: ";
    rosidl_generator_traits::value_to_yaml(msg.friendly_big_resource_island, out);
    out << "\n";
  }

  // member: enemy_big_resource_island
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_big_resource_island: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_big_resource_island, out);
    out << "\n";
  }

  // member: friendly_exchange_area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "friendly_exchange_area: ";
    rosidl_generator_traits::value_to_yaml(msg.friendly_exchange_area, out);
    out << "\n";
  }

  // member: center_gain_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.center_gain_point, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RfidStatus & msg, bool use_flow_style = false)
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
  const pb_rm_interfaces::msg::RfidStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  pb_rm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pb_rm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const pb_rm_interfaces::msg::RfidStatus & msg)
{
  return pb_rm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pb_rm_interfaces::msg::RfidStatus>()
{
  return "pb_rm_interfaces::msg::RfidStatus";
}

template<>
inline const char * name<pb_rm_interfaces::msg::RfidStatus>()
{
  return "pb_rm_interfaces/msg/RfidStatus";
}

template<>
struct has_fixed_size<pb_rm_interfaces::msg::RfidStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pb_rm_interfaces::msg::RfidStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pb_rm_interfaces::msg::RfidStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PB_RM_INTERFACES__MSG__DETAIL__RFID_STATUS__TRAITS_HPP_
