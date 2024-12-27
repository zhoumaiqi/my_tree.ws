// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pb_rm_interfaces:msg/EventData.idl
// generated code does not contain a copyright notice

#ifndef PB_RM_INTERFACES__MSG__DETAIL__EVENT_DATA__STRUCT_HPP_
#define PB_RM_INTERFACES__MSG__DETAIL__EVENT_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pb_rm_interfaces__msg__EventData __attribute__((deprecated))
#else
# define DEPRECATED__pb_rm_interfaces__msg__EventData __declspec(deprecated)
#endif

namespace pb_rm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EventData_
{
  using Type = EventData_<ContainerAllocator>;

  explicit EventData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->supply_station_front = 0;
      this->supply_station_internal = 0;
      this->supply_zone = 0;
      this->center_gain_zone = 0;
      this->small_energy = 0;
      this->big_energy = 0;
      this->circular_highland = 0;
      this->trapezoidal_highland_3 = 0;
      this->trapezoidal_highland_4 = 0;
      this->base_virtual_shield_remaining = 0;
    }
  }

  explicit EventData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->supply_station_front = 0;
      this->supply_station_internal = 0;
      this->supply_zone = 0;
      this->center_gain_zone = 0;
      this->small_energy = 0;
      this->big_energy = 0;
      this->circular_highland = 0;
      this->trapezoidal_highland_3 = 0;
      this->trapezoidal_highland_4 = 0;
      this->base_virtual_shield_remaining = 0;
    }
  }

  // field types and members
  using _supply_station_front_type =
    uint8_t;
  _supply_station_front_type supply_station_front;
  using _supply_station_internal_type =
    uint8_t;
  _supply_station_internal_type supply_station_internal;
  using _supply_zone_type =
    uint8_t;
  _supply_zone_type supply_zone;
  using _center_gain_zone_type =
    uint8_t;
  _center_gain_zone_type center_gain_zone;
  using _small_energy_type =
    uint8_t;
  _small_energy_type small_energy;
  using _big_energy_type =
    uint8_t;
  _big_energy_type big_energy;
  using _circular_highland_type =
    uint8_t;
  _circular_highland_type circular_highland;
  using _trapezoidal_highland_3_type =
    uint8_t;
  _trapezoidal_highland_3_type trapezoidal_highland_3;
  using _trapezoidal_highland_4_type =
    uint8_t;
  _trapezoidal_highland_4_type trapezoidal_highland_4;
  using _base_virtual_shield_remaining_type =
    uint8_t;
  _base_virtual_shield_remaining_type base_virtual_shield_remaining;

  // setters for named parameter idiom
  Type & set__supply_station_front(
    const uint8_t & _arg)
  {
    this->supply_station_front = _arg;
    return *this;
  }
  Type & set__supply_station_internal(
    const uint8_t & _arg)
  {
    this->supply_station_internal = _arg;
    return *this;
  }
  Type & set__supply_zone(
    const uint8_t & _arg)
  {
    this->supply_zone = _arg;
    return *this;
  }
  Type & set__center_gain_zone(
    const uint8_t & _arg)
  {
    this->center_gain_zone = _arg;
    return *this;
  }
  Type & set__small_energy(
    const uint8_t & _arg)
  {
    this->small_energy = _arg;
    return *this;
  }
  Type & set__big_energy(
    const uint8_t & _arg)
  {
    this->big_energy = _arg;
    return *this;
  }
  Type & set__circular_highland(
    const uint8_t & _arg)
  {
    this->circular_highland = _arg;
    return *this;
  }
  Type & set__trapezoidal_highland_3(
    const uint8_t & _arg)
  {
    this->trapezoidal_highland_3 = _arg;
    return *this;
  }
  Type & set__trapezoidal_highland_4(
    const uint8_t & _arg)
  {
    this->trapezoidal_highland_4 = _arg;
    return *this;
  }
  Type & set__base_virtual_shield_remaining(
    const uint8_t & _arg)
  {
    this->base_virtual_shield_remaining = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNOCCUPIED =
    0u;
  static constexpr uint8_t OCCUPIED_FRIEND =
    1u;
  static constexpr uint8_t OCCUPIED_ENEMY =
    2u;
  static constexpr uint8_t OCCUPIED_BOTH =
    3u;

  // pointer types
  using RawPtr =
    pb_rm_interfaces::msg::EventData_<ContainerAllocator> *;
  using ConstRawPtr =
    const pb_rm_interfaces::msg::EventData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pb_rm_interfaces::msg::EventData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pb_rm_interfaces::msg::EventData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pb_rm_interfaces::msg::EventData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pb_rm_interfaces::msg::EventData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pb_rm_interfaces::msg::EventData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pb_rm_interfaces::msg::EventData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pb_rm_interfaces::msg::EventData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pb_rm_interfaces::msg::EventData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pb_rm_interfaces__msg__EventData
    std::shared_ptr<pb_rm_interfaces::msg::EventData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pb_rm_interfaces__msg__EventData
    std::shared_ptr<pb_rm_interfaces::msg::EventData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EventData_ & other) const
  {
    if (this->supply_station_front != other.supply_station_front) {
      return false;
    }
    if (this->supply_station_internal != other.supply_station_internal) {
      return false;
    }
    if (this->supply_zone != other.supply_zone) {
      return false;
    }
    if (this->center_gain_zone != other.center_gain_zone) {
      return false;
    }
    if (this->small_energy != other.small_energy) {
      return false;
    }
    if (this->big_energy != other.big_energy) {
      return false;
    }
    if (this->circular_highland != other.circular_highland) {
      return false;
    }
    if (this->trapezoidal_highland_3 != other.trapezoidal_highland_3) {
      return false;
    }
    if (this->trapezoidal_highland_4 != other.trapezoidal_highland_4) {
      return false;
    }
    if (this->base_virtual_shield_remaining != other.base_virtual_shield_remaining) {
      return false;
    }
    return true;
  }
  bool operator!=(const EventData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EventData_

// alias to use template instance with default allocator
using EventData =
  pb_rm_interfaces::msg::EventData_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EventData_<ContainerAllocator>::UNOCCUPIED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EventData_<ContainerAllocator>::OCCUPIED_FRIEND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EventData_<ContainerAllocator>::OCCUPIED_ENEMY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EventData_<ContainerAllocator>::OCCUPIED_BOTH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace pb_rm_interfaces

#endif  // PB_RM_INTERFACES__MSG__DETAIL__EVENT_DATA__STRUCT_HPP_
