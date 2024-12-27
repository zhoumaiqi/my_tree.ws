// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pb_rm_interfaces:msg/RfidStatus.idl
// generated code does not contain a copyright notice

#ifndef PB_RM_INTERFACES__MSG__DETAIL__RFID_STATUS__STRUCT_HPP_
#define PB_RM_INTERFACES__MSG__DETAIL__RFID_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pb_rm_interfaces__msg__RfidStatus __attribute__((deprecated))
#else
# define DEPRECATED__pb_rm_interfaces__msg__RfidStatus __declspec(deprecated)
#endif

namespace pb_rm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RfidStatus_
{
  using Type = RfidStatus_<ContainerAllocator>;

  explicit RfidStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_gain_point = false;
      this->circular_highland_gain_point = false;
      this->enemy_circular_highland_gain_point = false;
      this->friendly_r3_b3_gain_point = false;
      this->enemy_r3_b3_gain_point = false;
      this->friendly_r4_b4_gain_point = false;
      this->enemy_r4_b4_gain_point = false;
      this->energy_mechanism_gain_point = false;
      this->friendly_fly_ramp_front_gain_point = false;
      this->friendly_fly_ramp_back_gain_point = false;
      this->enemy_fly_ramp_front_gain_point = false;
      this->enemy_fly_ramp_back_gain_point = false;
      this->friendly_outpost_gain_point = false;
      this->friendly_healing_point = false;
      this->friendly_sentry_patrol_area = false;
      this->enemy_sentry_patrol_area = false;
      this->friendly_big_resource_island = false;
      this->enemy_big_resource_island = false;
      this->friendly_exchange_area = false;
      this->center_gain_point = false;
    }
  }

  explicit RfidStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_gain_point = false;
      this->circular_highland_gain_point = false;
      this->enemy_circular_highland_gain_point = false;
      this->friendly_r3_b3_gain_point = false;
      this->enemy_r3_b3_gain_point = false;
      this->friendly_r4_b4_gain_point = false;
      this->enemy_r4_b4_gain_point = false;
      this->energy_mechanism_gain_point = false;
      this->friendly_fly_ramp_front_gain_point = false;
      this->friendly_fly_ramp_back_gain_point = false;
      this->enemy_fly_ramp_front_gain_point = false;
      this->enemy_fly_ramp_back_gain_point = false;
      this->friendly_outpost_gain_point = false;
      this->friendly_healing_point = false;
      this->friendly_sentry_patrol_area = false;
      this->enemy_sentry_patrol_area = false;
      this->friendly_big_resource_island = false;
      this->enemy_big_resource_island = false;
      this->friendly_exchange_area = false;
      this->center_gain_point = false;
    }
  }

  // field types and members
  using _base_gain_point_type =
    bool;
  _base_gain_point_type base_gain_point;
  using _circular_highland_gain_point_type =
    bool;
  _circular_highland_gain_point_type circular_highland_gain_point;
  using _enemy_circular_highland_gain_point_type =
    bool;
  _enemy_circular_highland_gain_point_type enemy_circular_highland_gain_point;
  using _friendly_r3_b3_gain_point_type =
    bool;
  _friendly_r3_b3_gain_point_type friendly_r3_b3_gain_point;
  using _enemy_r3_b3_gain_point_type =
    bool;
  _enemy_r3_b3_gain_point_type enemy_r3_b3_gain_point;
  using _friendly_r4_b4_gain_point_type =
    bool;
  _friendly_r4_b4_gain_point_type friendly_r4_b4_gain_point;
  using _enemy_r4_b4_gain_point_type =
    bool;
  _enemy_r4_b4_gain_point_type enemy_r4_b4_gain_point;
  using _energy_mechanism_gain_point_type =
    bool;
  _energy_mechanism_gain_point_type energy_mechanism_gain_point;
  using _friendly_fly_ramp_front_gain_point_type =
    bool;
  _friendly_fly_ramp_front_gain_point_type friendly_fly_ramp_front_gain_point;
  using _friendly_fly_ramp_back_gain_point_type =
    bool;
  _friendly_fly_ramp_back_gain_point_type friendly_fly_ramp_back_gain_point;
  using _enemy_fly_ramp_front_gain_point_type =
    bool;
  _enemy_fly_ramp_front_gain_point_type enemy_fly_ramp_front_gain_point;
  using _enemy_fly_ramp_back_gain_point_type =
    bool;
  _enemy_fly_ramp_back_gain_point_type enemy_fly_ramp_back_gain_point;
  using _friendly_outpost_gain_point_type =
    bool;
  _friendly_outpost_gain_point_type friendly_outpost_gain_point;
  using _friendly_healing_point_type =
    bool;
  _friendly_healing_point_type friendly_healing_point;
  using _friendly_sentry_patrol_area_type =
    bool;
  _friendly_sentry_patrol_area_type friendly_sentry_patrol_area;
  using _enemy_sentry_patrol_area_type =
    bool;
  _enemy_sentry_patrol_area_type enemy_sentry_patrol_area;
  using _friendly_big_resource_island_type =
    bool;
  _friendly_big_resource_island_type friendly_big_resource_island;
  using _enemy_big_resource_island_type =
    bool;
  _enemy_big_resource_island_type enemy_big_resource_island;
  using _friendly_exchange_area_type =
    bool;
  _friendly_exchange_area_type friendly_exchange_area;
  using _center_gain_point_type =
    bool;
  _center_gain_point_type center_gain_point;

  // setters for named parameter idiom
  Type & set__base_gain_point(
    const bool & _arg)
  {
    this->base_gain_point = _arg;
    return *this;
  }
  Type & set__circular_highland_gain_point(
    const bool & _arg)
  {
    this->circular_highland_gain_point = _arg;
    return *this;
  }
  Type & set__enemy_circular_highland_gain_point(
    const bool & _arg)
  {
    this->enemy_circular_highland_gain_point = _arg;
    return *this;
  }
  Type & set__friendly_r3_b3_gain_point(
    const bool & _arg)
  {
    this->friendly_r3_b3_gain_point = _arg;
    return *this;
  }
  Type & set__enemy_r3_b3_gain_point(
    const bool & _arg)
  {
    this->enemy_r3_b3_gain_point = _arg;
    return *this;
  }
  Type & set__friendly_r4_b4_gain_point(
    const bool & _arg)
  {
    this->friendly_r4_b4_gain_point = _arg;
    return *this;
  }
  Type & set__enemy_r4_b4_gain_point(
    const bool & _arg)
  {
    this->enemy_r4_b4_gain_point = _arg;
    return *this;
  }
  Type & set__energy_mechanism_gain_point(
    const bool & _arg)
  {
    this->energy_mechanism_gain_point = _arg;
    return *this;
  }
  Type & set__friendly_fly_ramp_front_gain_point(
    const bool & _arg)
  {
    this->friendly_fly_ramp_front_gain_point = _arg;
    return *this;
  }
  Type & set__friendly_fly_ramp_back_gain_point(
    const bool & _arg)
  {
    this->friendly_fly_ramp_back_gain_point = _arg;
    return *this;
  }
  Type & set__enemy_fly_ramp_front_gain_point(
    const bool & _arg)
  {
    this->enemy_fly_ramp_front_gain_point = _arg;
    return *this;
  }
  Type & set__enemy_fly_ramp_back_gain_point(
    const bool & _arg)
  {
    this->enemy_fly_ramp_back_gain_point = _arg;
    return *this;
  }
  Type & set__friendly_outpost_gain_point(
    const bool & _arg)
  {
    this->friendly_outpost_gain_point = _arg;
    return *this;
  }
  Type & set__friendly_healing_point(
    const bool & _arg)
  {
    this->friendly_healing_point = _arg;
    return *this;
  }
  Type & set__friendly_sentry_patrol_area(
    const bool & _arg)
  {
    this->friendly_sentry_patrol_area = _arg;
    return *this;
  }
  Type & set__enemy_sentry_patrol_area(
    const bool & _arg)
  {
    this->enemy_sentry_patrol_area = _arg;
    return *this;
  }
  Type & set__friendly_big_resource_island(
    const bool & _arg)
  {
    this->friendly_big_resource_island = _arg;
    return *this;
  }
  Type & set__enemy_big_resource_island(
    const bool & _arg)
  {
    this->enemy_big_resource_island = _arg;
    return *this;
  }
  Type & set__friendly_exchange_area(
    const bool & _arg)
  {
    this->friendly_exchange_area = _arg;
    return *this;
  }
  Type & set__center_gain_point(
    const bool & _arg)
  {
    this->center_gain_point = _arg;
    return *this;
  }

  // constant declarations
  static constexpr bool NOT_DETECTED =
    0;
  static constexpr bool DETECTED =
    1;

  // pointer types
  using RawPtr =
    pb_rm_interfaces::msg::RfidStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const pb_rm_interfaces::msg::RfidStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pb_rm_interfaces::msg::RfidStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pb_rm_interfaces::msg::RfidStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pb_rm_interfaces::msg::RfidStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pb_rm_interfaces::msg::RfidStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pb_rm_interfaces::msg::RfidStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pb_rm_interfaces::msg::RfidStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pb_rm_interfaces::msg::RfidStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pb_rm_interfaces::msg::RfidStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pb_rm_interfaces__msg__RfidStatus
    std::shared_ptr<pb_rm_interfaces::msg::RfidStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pb_rm_interfaces__msg__RfidStatus
    std::shared_ptr<pb_rm_interfaces::msg::RfidStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RfidStatus_ & other) const
  {
    if (this->base_gain_point != other.base_gain_point) {
      return false;
    }
    if (this->circular_highland_gain_point != other.circular_highland_gain_point) {
      return false;
    }
    if (this->enemy_circular_highland_gain_point != other.enemy_circular_highland_gain_point) {
      return false;
    }
    if (this->friendly_r3_b3_gain_point != other.friendly_r3_b3_gain_point) {
      return false;
    }
    if (this->enemy_r3_b3_gain_point != other.enemy_r3_b3_gain_point) {
      return false;
    }
    if (this->friendly_r4_b4_gain_point != other.friendly_r4_b4_gain_point) {
      return false;
    }
    if (this->enemy_r4_b4_gain_point != other.enemy_r4_b4_gain_point) {
      return false;
    }
    if (this->energy_mechanism_gain_point != other.energy_mechanism_gain_point) {
      return false;
    }
    if (this->friendly_fly_ramp_front_gain_point != other.friendly_fly_ramp_front_gain_point) {
      return false;
    }
    if (this->friendly_fly_ramp_back_gain_point != other.friendly_fly_ramp_back_gain_point) {
      return false;
    }
    if (this->enemy_fly_ramp_front_gain_point != other.enemy_fly_ramp_front_gain_point) {
      return false;
    }
    if (this->enemy_fly_ramp_back_gain_point != other.enemy_fly_ramp_back_gain_point) {
      return false;
    }
    if (this->friendly_outpost_gain_point != other.friendly_outpost_gain_point) {
      return false;
    }
    if (this->friendly_healing_point != other.friendly_healing_point) {
      return false;
    }
    if (this->friendly_sentry_patrol_area != other.friendly_sentry_patrol_area) {
      return false;
    }
    if (this->enemy_sentry_patrol_area != other.enemy_sentry_patrol_area) {
      return false;
    }
    if (this->friendly_big_resource_island != other.friendly_big_resource_island) {
      return false;
    }
    if (this->enemy_big_resource_island != other.enemy_big_resource_island) {
      return false;
    }
    if (this->friendly_exchange_area != other.friendly_exchange_area) {
      return false;
    }
    if (this->center_gain_point != other.center_gain_point) {
      return false;
    }
    return true;
  }
  bool operator!=(const RfidStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RfidStatus_

// alias to use template instance with default allocator
using RfidStatus =
  pb_rm_interfaces::msg::RfidStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr bool RfidStatus_<ContainerAllocator>::NOT_DETECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr bool RfidStatus_<ContainerAllocator>::DETECTED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace pb_rm_interfaces

#endif  // PB_RM_INTERFACES__MSG__DETAIL__RFID_STATUS__STRUCT_HPP_
