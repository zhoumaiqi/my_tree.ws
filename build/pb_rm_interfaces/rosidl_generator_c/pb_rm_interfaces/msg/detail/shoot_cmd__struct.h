// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pb_rm_interfaces:msg/ShootCmd.idl
// generated code does not contain a copyright notice

#ifndef PB_RM_INTERFACES__MSG__DETAIL__SHOOT_CMD__STRUCT_H_
#define PB_RM_INTERFACES__MSG__DETAIL__SHOOT_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ShootCmd in the package pb_rm_interfaces.
/**
  * cmd msg for shooter
 */
typedef struct pb_rm_interfaces__msg__ShootCmd
{
  ///  control data
  /// 要发射的弹丸数量
  uint8_t projectile_num;
} pb_rm_interfaces__msg__ShootCmd;

// Struct for a sequence of pb_rm_interfaces__msg__ShootCmd.
typedef struct pb_rm_interfaces__msg__ShootCmd__Sequence
{
  pb_rm_interfaces__msg__ShootCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pb_rm_interfaces__msg__ShootCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PB_RM_INTERFACES__MSG__DETAIL__SHOOT_CMD__STRUCT_H_
