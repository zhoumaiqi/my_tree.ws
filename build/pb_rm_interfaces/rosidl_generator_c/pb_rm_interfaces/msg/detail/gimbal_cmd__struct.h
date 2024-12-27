// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pb_rm_interfaces:msg/GimbalCmd.idl
// generated code does not contain a copyright notice

#ifndef PB_RM_INTERFACES__MSG__DETAIL__GIMBAL_CMD__STRUCT_H_
#define PB_RM_INTERFACES__MSG__DETAIL__GIMBAL_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GimbalCmd in the package pb_rm_interfaces.
/**
  * cmd msg for controlling gimbal
  * position control, set position by ABSOLUTE ANGLE (rad)
 */
typedef struct pb_rm_interfaces__msg__GimbalCmd
{
  /// 云台的偏航角
  float yaw;
  /// 云台的俯仰角
  float pitch;
} pb_rm_interfaces__msg__GimbalCmd;

// Struct for a sequence of pb_rm_interfaces__msg__GimbalCmd.
typedef struct pb_rm_interfaces__msg__GimbalCmd__Sequence
{
  pb_rm_interfaces__msg__GimbalCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pb_rm_interfaces__msg__GimbalCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PB_RM_INTERFACES__MSG__DETAIL__GIMBAL_CMD__STRUCT_H_
