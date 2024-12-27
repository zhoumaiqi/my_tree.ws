// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pb_rm_interfaces:msg/GroundRobotPosition.idl
// generated code does not contain a copyright notice

#ifndef PB_RM_INTERFACES__MSG__DETAIL__GROUND_ROBOT_POSITION__STRUCT_H_
#define PB_RM_INTERFACES__MSG__DETAIL__GROUND_ROBOT_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GroundRobotPosition in the package pb_rm_interfaces.
/**
  *  msg for RFID detection system (V1.6.4 0x020B)
  * RFID系统多个对的位置信息
 */
typedef struct pb_rm_interfaces__msg__GroundRobotPosition
{
  /// 英雄
  float hero_x;
  float hero_y;
  /// 工程
  float engineer_x;
  float engineer_y;
  /// 步兵3，4，5
  float standard_3_x;
  float standard_3_y;
  float standard_4_x;
  float standard_4_y;
  float standard_5_x;
  float standard_5_y;
} pb_rm_interfaces__msg__GroundRobotPosition;

// Struct for a sequence of pb_rm_interfaces__msg__GroundRobotPosition.
typedef struct pb_rm_interfaces__msg__GroundRobotPosition__Sequence
{
  pb_rm_interfaces__msg__GroundRobotPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pb_rm_interfaces__msg__GroundRobotPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PB_RM_INTERFACES__MSG__DETAIL__GROUND_ROBOT_POSITION__STRUCT_H_
