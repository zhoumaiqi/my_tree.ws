// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pb_rm_interfaces:msg/ShootCmd.idl
// generated code does not contain a copyright notice

#ifndef PB_RM_INTERFACES__MSG__DETAIL__SHOOT_CMD__STRUCT_HPP_
#define PB_RM_INTERFACES__MSG__DETAIL__SHOOT_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pb_rm_interfaces__msg__ShootCmd __attribute__((deprecated))
#else
# define DEPRECATED__pb_rm_interfaces__msg__ShootCmd __declspec(deprecated)
#endif

namespace pb_rm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ShootCmd_
{
  using Type = ShootCmd_<ContainerAllocator>;

  explicit ShootCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->projectile_num = 0;
    }
  }

  explicit ShootCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->projectile_num = 0;
    }
  }

  // field types and members
  using _projectile_num_type =
    uint8_t;
  _projectile_num_type projectile_num;

  // setters for named parameter idiom
  Type & set__projectile_num(
    const uint8_t & _arg)
  {
    this->projectile_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pb_rm_interfaces::msg::ShootCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const pb_rm_interfaces::msg::ShootCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pb_rm_interfaces::msg::ShootCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pb_rm_interfaces::msg::ShootCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pb_rm_interfaces::msg::ShootCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pb_rm_interfaces::msg::ShootCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pb_rm_interfaces::msg::ShootCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pb_rm_interfaces::msg::ShootCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pb_rm_interfaces::msg::ShootCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pb_rm_interfaces::msg::ShootCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pb_rm_interfaces__msg__ShootCmd
    std::shared_ptr<pb_rm_interfaces::msg::ShootCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pb_rm_interfaces__msg__ShootCmd
    std::shared_ptr<pb_rm_interfaces::msg::ShootCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShootCmd_ & other) const
  {
    if (this->projectile_num != other.projectile_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShootCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShootCmd_

// alias to use template instance with default allocator
using ShootCmd =
  pb_rm_interfaces::msg::ShootCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pb_rm_interfaces

#endif  // PB_RM_INTERFACES__MSG__DETAIL__SHOOT_CMD__STRUCT_HPP_
