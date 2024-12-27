// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pb_rm_interfaces:msg/RfidStatus.idl
// generated code does not contain a copyright notice

#ifndef PB_RM_INTERFACES__MSG__DETAIL__RFID_STATUS__BUILDER_HPP_
#define PB_RM_INTERFACES__MSG__DETAIL__RFID_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pb_rm_interfaces/msg/detail/rfid_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pb_rm_interfaces
{

namespace msg
{

namespace builder
{

class Init_RfidStatus_center_gain_point
{
public:
  explicit Init_RfidStatus_center_gain_point(::pb_rm_interfaces::msg::RfidStatus & msg)
  : msg_(msg)
  {}
  ::pb_rm_interfaces::msg::RfidStatus center_gain_point(::pb_rm_interfaces::msg::RfidStatus::_center_gain_point_type arg)
  {
    msg_.center_gain_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pb_rm_interfaces::msg::RfidStatus msg_;
};

class Init_RfidStatus_friendly_exchange_area
{
public:
  explicit Init_RfidStatus_friendly_exchange_area(::pb_rm_interfaces::msg::RfidStatus & msg)
  : msg_(msg)
  {}
  Init_RfidStatus_center_gain_point friendly_exchange_area(::pb_rm_interfaces::msg::RfidStatus::_friendly_exchange_area_type arg)
  {
    msg_.friendly_exchange_area = std::move(arg);
    return Init_RfidStatus_center_gain_point(msg_);
  }

private:
  ::pb_rm_interfaces::msg::RfidStatus msg_;
};

class Init_RfidStatus_enemy_big_resource_island
{
public:
  explicit Init_RfidStatus_enemy_big_resource_island(::pb_rm_interfaces::msg::RfidStatus & msg)
  : msg_(msg)
  {}
  Init_RfidStatus_friendly_exchange_area enemy_big_resource_island(::pb_rm_interfaces::msg::RfidStatus::_enemy_big_resource_island_type arg)
  {
    msg_.enemy_big_resource_island = std::move(arg);
    return Init_RfidStatus_friendly_exchange_area(msg_);
  }

private:
  ::pb_rm_interfaces::msg::RfidStatus msg_;
};

class Init_RfidStatus_friendly_big_resource_island
{
public:
  explicit Init_RfidStatus_friendly_big_resource_island(::pb_rm_interfaces::msg::RfidStatus & msg)
  : msg_(msg)
  {}
  Init_RfidStatus_enemy_big_resource_island friendly_big_resource_island(::pb_rm_interfaces::msg::RfidStatus::_friendly_big_resource_island_type arg)
  {
    msg_.friendly_big_resource_island = std::move(arg);
    return Init_RfidStatus_enemy_big_resource_island(msg_);
  }

private:
  ::pb_rm_interfaces::msg::RfidStatus msg_;
};

class Init_RfidStatus_enemy_sentry_patrol_area
{
public:
  explicit Init_RfidStatus_enemy_sentry_patrol_area(::pb_rm_interfaces::msg::RfidStatus & msg)
  : msg_(msg)
  {}
  Init_RfidStatus_friendly_big_resource_island enemy_sentry_patrol_area(::pb_rm_interfaces::msg::RfidStatus::_enemy_sentry_patrol_area_type arg)
  {
    msg_.enemy_sentry_patrol_area = std::move(arg);
    return Init_RfidStatus_friendly_big_resource_island(msg_);
  }

private:
  ::pb_rm_interfaces::msg::RfidStatus msg_;
};

class Init_RfidStatus_friendly_sentry_patrol_area
{
public:
  explicit Init_RfidStatus_friendly_sentry_patrol_area(::pb_rm_interfaces::msg::RfidStatus & msg)
  : msg_(msg)
  {}
  Init_RfidStatus_enemy_sentry_patrol_area friendly_sentry_patrol_area(::pb_rm_interfaces::msg::RfidStatus::_friendly_sentry_patrol_area_type arg)
  {
    msg_.friendly_sentry_patrol_area = std::move(arg);
    return Init_RfidStatus_enemy_sentry_patrol_area(msg_);
  }

private:
  ::pb_rm_interfaces::msg::RfidStatus msg_;
};

class Init_RfidStatus_friendly_healing_point
{
public:
  explicit Init_RfidStatus_friendly_healing_point(::pb_rm_interfaces::msg::RfidStatus & msg)
  : msg_(msg)
  {}
  Init_RfidStatus_friendly_sentry_patrol_area friendly_healing_point(::pb_rm_interfaces::msg::RfidStatus::_friendly_healing_point_type arg)
  {
    msg_.friendly_healing_point = std::move(arg);
    return Init_RfidStatus_friendly_sentry_patrol_area(msg_);
  }

private:
  ::pb_rm_interfaces::msg::RfidStatus msg_;
};

class Init_RfidStatus_friendly_outpost_gain_point
{
public:
  explicit Init_RfidStatus_friendly_outpost_gain_point(::pb_rm_interfaces::msg::RfidStatus & msg)
  : msg_(msg)
  {}
  Init_RfidStatus_friendly_healing_point friendly_outpost_gain_point(::pb_rm_interfaces::msg::RfidStatus::_friendly_outpost_gain_point_type arg)
  {
    msg_.friendly_outpost_gain_point = std::move(arg);
    return Init_RfidStatus_friendly_healing_point(msg_);
  }

private:
  ::pb_rm_interfaces::msg::RfidStatus msg_;
};

class Init_RfidStatus_enemy_fly_ramp_back_gain_point
{
public:
  explicit Init_RfidStatus_enemy_fly_ramp_back_gain_point(::pb_rm_interfaces::msg::RfidStatus & msg)
  : msg_(msg)
  {}
  Init_RfidStatus_friendly_outpost_gain_point enemy_fly_ramp_back_gain_point(::pb_rm_interfaces::msg::RfidStatus::_enemy_fly_ramp_back_gain_point_type arg)
  {
    msg_.enemy_fly_ramp_back_gain_point = std::move(arg);
    return Init_RfidStatus_friendly_outpost_gain_point(msg_);
  }

private:
  ::pb_rm_interfaces::msg::RfidStatus msg_;
};

class Init_RfidStatus_enemy_fly_ramp_front_gain_point
{
public:
  explicit Init_RfidStatus_enemy_fly_ramp_front_gain_point(::pb_rm_interfaces::msg::RfidStatus & msg)
  : msg_(msg)
  {}
  Init_RfidStatus_enemy_fly_ramp_back_gain_point enemy_fly_ramp_front_gain_point(::pb_rm_interfaces::msg::RfidStatus::_enemy_fly_ramp_front_gain_point_type arg)
  {
    msg_.enemy_fly_ramp_front_gain_point = std::move(arg);
    return Init_RfidStatus_enemy_fly_ramp_back_gain_point(msg_);
  }

private:
  ::pb_rm_interfaces::msg::RfidStatus msg_;
};

class Init_RfidStatus_friendly_fly_ramp_back_gain_point
{
public:
  explicit Init_RfidStatus_friendly_fly_ramp_back_gain_point(::pb_rm_interfaces::msg::RfidStatus & msg)
  : msg_(msg)
  {}
  Init_RfidStatus_enemy_fly_ramp_front_gain_point friendly_fly_ramp_back_gain_point(::pb_rm_interfaces::msg::RfidStatus::_friendly_fly_ramp_back_gain_point_type arg)
  {
    msg_.friendly_fly_ramp_back_gain_point = std::move(arg);
    return Init_RfidStatus_enemy_fly_ramp_front_gain_point(msg_);
  }

private:
  ::pb_rm_interfaces::msg::RfidStatus msg_;
};

class Init_RfidStatus_friendly_fly_ramp_front_gain_point
{
public:
  explicit Init_RfidStatus_friendly_fly_ramp_front_gain_point(::pb_rm_interfaces::msg::RfidStatus & msg)
  : msg_(msg)
  {}
  Init_RfidStatus_friendly_fly_ramp_back_gain_point friendly_fly_ramp_front_gain_point(::pb_rm_interfaces::msg::RfidStatus::_friendly_fly_ramp_front_gain_point_type arg)
  {
    msg_.friendly_fly_ramp_front_gain_point = std::move(arg);
    return Init_RfidStatus_friendly_fly_ramp_back_gain_point(msg_);
  }

private:
  ::pb_rm_interfaces::msg::RfidStatus msg_;
};

class Init_RfidStatus_energy_mechanism_gain_point
{
public:
  explicit Init_RfidStatus_energy_mechanism_gain_point(::pb_rm_interfaces::msg::RfidStatus & msg)
  : msg_(msg)
  {}
  Init_RfidStatus_friendly_fly_ramp_front_gain_point energy_mechanism_gain_point(::pb_rm_interfaces::msg::RfidStatus::_energy_mechanism_gain_point_type arg)
  {
    msg_.energy_mechanism_gain_point = std::move(arg);
    return Init_RfidStatus_friendly_fly_ramp_front_gain_point(msg_);
  }

private:
  ::pb_rm_interfaces::msg::RfidStatus msg_;
};

class Init_RfidStatus_enemy_r4_b4_gain_point
{
public:
  explicit Init_RfidStatus_enemy_r4_b4_gain_point(::pb_rm_interfaces::msg::RfidStatus & msg)
  : msg_(msg)
  {}
  Init_RfidStatus_energy_mechanism_gain_point enemy_r4_b4_gain_point(::pb_rm_interfaces::msg::RfidStatus::_enemy_r4_b4_gain_point_type arg)
  {
    msg_.enemy_r4_b4_gain_point = std::move(arg);
    return Init_RfidStatus_energy_mechanism_gain_point(msg_);
  }

private:
  ::pb_rm_interfaces::msg::RfidStatus msg_;
};

class Init_RfidStatus_friendly_r4_b4_gain_point
{
public:
  explicit Init_RfidStatus_friendly_r4_b4_gain_point(::pb_rm_interfaces::msg::RfidStatus & msg)
  : msg_(msg)
  {}
  Init_RfidStatus_enemy_r4_b4_gain_point friendly_r4_b4_gain_point(::pb_rm_interfaces::msg::RfidStatus::_friendly_r4_b4_gain_point_type arg)
  {
    msg_.friendly_r4_b4_gain_point = std::move(arg);
    return Init_RfidStatus_enemy_r4_b4_gain_point(msg_);
  }

private:
  ::pb_rm_interfaces::msg::RfidStatus msg_;
};

class Init_RfidStatus_enemy_r3_b3_gain_point
{
public:
  explicit Init_RfidStatus_enemy_r3_b3_gain_point(::pb_rm_interfaces::msg::RfidStatus & msg)
  : msg_(msg)
  {}
  Init_RfidStatus_friendly_r4_b4_gain_point enemy_r3_b3_gain_point(::pb_rm_interfaces::msg::RfidStatus::_enemy_r3_b3_gain_point_type arg)
  {
    msg_.enemy_r3_b3_gain_point = std::move(arg);
    return Init_RfidStatus_friendly_r4_b4_gain_point(msg_);
  }

private:
  ::pb_rm_interfaces::msg::RfidStatus msg_;
};

class Init_RfidStatus_friendly_r3_b3_gain_point
{
public:
  explicit Init_RfidStatus_friendly_r3_b3_gain_point(::pb_rm_interfaces::msg::RfidStatus & msg)
  : msg_(msg)
  {}
  Init_RfidStatus_enemy_r3_b3_gain_point friendly_r3_b3_gain_point(::pb_rm_interfaces::msg::RfidStatus::_friendly_r3_b3_gain_point_type arg)
  {
    msg_.friendly_r3_b3_gain_point = std::move(arg);
    return Init_RfidStatus_enemy_r3_b3_gain_point(msg_);
  }

private:
  ::pb_rm_interfaces::msg::RfidStatus msg_;
};

class Init_RfidStatus_enemy_circular_highland_gain_point
{
public:
  explicit Init_RfidStatus_enemy_circular_highland_gain_point(::pb_rm_interfaces::msg::RfidStatus & msg)
  : msg_(msg)
  {}
  Init_RfidStatus_friendly_r3_b3_gain_point enemy_circular_highland_gain_point(::pb_rm_interfaces::msg::RfidStatus::_enemy_circular_highland_gain_point_type arg)
  {
    msg_.enemy_circular_highland_gain_point = std::move(arg);
    return Init_RfidStatus_friendly_r3_b3_gain_point(msg_);
  }

private:
  ::pb_rm_interfaces::msg::RfidStatus msg_;
};

class Init_RfidStatus_circular_highland_gain_point
{
public:
  explicit Init_RfidStatus_circular_highland_gain_point(::pb_rm_interfaces::msg::RfidStatus & msg)
  : msg_(msg)
  {}
  Init_RfidStatus_enemy_circular_highland_gain_point circular_highland_gain_point(::pb_rm_interfaces::msg::RfidStatus::_circular_highland_gain_point_type arg)
  {
    msg_.circular_highland_gain_point = std::move(arg);
    return Init_RfidStatus_enemy_circular_highland_gain_point(msg_);
  }

private:
  ::pb_rm_interfaces::msg::RfidStatus msg_;
};

class Init_RfidStatus_base_gain_point
{
public:
  Init_RfidStatus_base_gain_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RfidStatus_circular_highland_gain_point base_gain_point(::pb_rm_interfaces::msg::RfidStatus::_base_gain_point_type arg)
  {
    msg_.base_gain_point = std::move(arg);
    return Init_RfidStatus_circular_highland_gain_point(msg_);
  }

private:
  ::pb_rm_interfaces::msg::RfidStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pb_rm_interfaces::msg::RfidStatus>()
{
  return pb_rm_interfaces::msg::builder::Init_RfidStatus_base_gain_point();
}

}  // namespace pb_rm_interfaces

#endif  // PB_RM_INTERFACES__MSG__DETAIL__RFID_STATUS__BUILDER_HPP_
