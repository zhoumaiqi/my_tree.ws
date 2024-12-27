// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pb_rm_interfaces:msg/ShootCmd.idl
// generated code does not contain a copyright notice

#ifndef PB_RM_INTERFACES__MSG__DETAIL__SHOOT_CMD__BUILDER_HPP_
#define PB_RM_INTERFACES__MSG__DETAIL__SHOOT_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pb_rm_interfaces/msg/detail/shoot_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pb_rm_interfaces
{

namespace msg
{

namespace builder
{

class Init_ShootCmd_projectile_num
{
public:
  Init_ShootCmd_projectile_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pb_rm_interfaces::msg::ShootCmd projectile_num(::pb_rm_interfaces::msg::ShootCmd::_projectile_num_type arg)
  {
    msg_.projectile_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pb_rm_interfaces::msg::ShootCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pb_rm_interfaces::msg::ShootCmd>()
{
  return pb_rm_interfaces::msg::builder::Init_ShootCmd_projectile_num();
}

}  // namespace pb_rm_interfaces

#endif  // PB_RM_INTERFACES__MSG__DETAIL__SHOOT_CMD__BUILDER_HPP_
