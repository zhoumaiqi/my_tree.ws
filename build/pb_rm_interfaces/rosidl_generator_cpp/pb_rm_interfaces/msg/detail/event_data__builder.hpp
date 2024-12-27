// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pb_rm_interfaces:msg/EventData.idl
// generated code does not contain a copyright notice

#ifndef PB_RM_INTERFACES__MSG__DETAIL__EVENT_DATA__BUILDER_HPP_
#define PB_RM_INTERFACES__MSG__DETAIL__EVENT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pb_rm_interfaces/msg/detail/event_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pb_rm_interfaces
{

namespace msg
{

namespace builder
{

class Init_EventData_base_virtual_shield_remaining
{
public:
  explicit Init_EventData_base_virtual_shield_remaining(::pb_rm_interfaces::msg::EventData & msg)
  : msg_(msg)
  {}
  ::pb_rm_interfaces::msg::EventData base_virtual_shield_remaining(::pb_rm_interfaces::msg::EventData::_base_virtual_shield_remaining_type arg)
  {
    msg_.base_virtual_shield_remaining = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pb_rm_interfaces::msg::EventData msg_;
};

class Init_EventData_trapezoidal_highland_4
{
public:
  explicit Init_EventData_trapezoidal_highland_4(::pb_rm_interfaces::msg::EventData & msg)
  : msg_(msg)
  {}
  Init_EventData_base_virtual_shield_remaining trapezoidal_highland_4(::pb_rm_interfaces::msg::EventData::_trapezoidal_highland_4_type arg)
  {
    msg_.trapezoidal_highland_4 = std::move(arg);
    return Init_EventData_base_virtual_shield_remaining(msg_);
  }

private:
  ::pb_rm_interfaces::msg::EventData msg_;
};

class Init_EventData_trapezoidal_highland_3
{
public:
  explicit Init_EventData_trapezoidal_highland_3(::pb_rm_interfaces::msg::EventData & msg)
  : msg_(msg)
  {}
  Init_EventData_trapezoidal_highland_4 trapezoidal_highland_3(::pb_rm_interfaces::msg::EventData::_trapezoidal_highland_3_type arg)
  {
    msg_.trapezoidal_highland_3 = std::move(arg);
    return Init_EventData_trapezoidal_highland_4(msg_);
  }

private:
  ::pb_rm_interfaces::msg::EventData msg_;
};

class Init_EventData_circular_highland
{
public:
  explicit Init_EventData_circular_highland(::pb_rm_interfaces::msg::EventData & msg)
  : msg_(msg)
  {}
  Init_EventData_trapezoidal_highland_3 circular_highland(::pb_rm_interfaces::msg::EventData::_circular_highland_type arg)
  {
    msg_.circular_highland = std::move(arg);
    return Init_EventData_trapezoidal_highland_3(msg_);
  }

private:
  ::pb_rm_interfaces::msg::EventData msg_;
};

class Init_EventData_big_energy
{
public:
  explicit Init_EventData_big_energy(::pb_rm_interfaces::msg::EventData & msg)
  : msg_(msg)
  {}
  Init_EventData_circular_highland big_energy(::pb_rm_interfaces::msg::EventData::_big_energy_type arg)
  {
    msg_.big_energy = std::move(arg);
    return Init_EventData_circular_highland(msg_);
  }

private:
  ::pb_rm_interfaces::msg::EventData msg_;
};

class Init_EventData_small_energy
{
public:
  explicit Init_EventData_small_energy(::pb_rm_interfaces::msg::EventData & msg)
  : msg_(msg)
  {}
  Init_EventData_big_energy small_energy(::pb_rm_interfaces::msg::EventData::_small_energy_type arg)
  {
    msg_.small_energy = std::move(arg);
    return Init_EventData_big_energy(msg_);
  }

private:
  ::pb_rm_interfaces::msg::EventData msg_;
};

class Init_EventData_center_gain_zone
{
public:
  explicit Init_EventData_center_gain_zone(::pb_rm_interfaces::msg::EventData & msg)
  : msg_(msg)
  {}
  Init_EventData_small_energy center_gain_zone(::pb_rm_interfaces::msg::EventData::_center_gain_zone_type arg)
  {
    msg_.center_gain_zone = std::move(arg);
    return Init_EventData_small_energy(msg_);
  }

private:
  ::pb_rm_interfaces::msg::EventData msg_;
};

class Init_EventData_supply_zone
{
public:
  explicit Init_EventData_supply_zone(::pb_rm_interfaces::msg::EventData & msg)
  : msg_(msg)
  {}
  Init_EventData_center_gain_zone supply_zone(::pb_rm_interfaces::msg::EventData::_supply_zone_type arg)
  {
    msg_.supply_zone = std::move(arg);
    return Init_EventData_center_gain_zone(msg_);
  }

private:
  ::pb_rm_interfaces::msg::EventData msg_;
};

class Init_EventData_supply_station_internal
{
public:
  explicit Init_EventData_supply_station_internal(::pb_rm_interfaces::msg::EventData & msg)
  : msg_(msg)
  {}
  Init_EventData_supply_zone supply_station_internal(::pb_rm_interfaces::msg::EventData::_supply_station_internal_type arg)
  {
    msg_.supply_station_internal = std::move(arg);
    return Init_EventData_supply_zone(msg_);
  }

private:
  ::pb_rm_interfaces::msg::EventData msg_;
};

class Init_EventData_supply_station_front
{
public:
  Init_EventData_supply_station_front()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EventData_supply_station_internal supply_station_front(::pb_rm_interfaces::msg::EventData::_supply_station_front_type arg)
  {
    msg_.supply_station_front = std::move(arg);
    return Init_EventData_supply_station_internal(msg_);
  }

private:
  ::pb_rm_interfaces::msg::EventData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pb_rm_interfaces::msg::EventData>()
{
  return pb_rm_interfaces::msg::builder::Init_EventData_supply_station_front();
}

}  // namespace pb_rm_interfaces

#endif  // PB_RM_INTERFACES__MSG__DETAIL__EVENT_DATA__BUILDER_HPP_
