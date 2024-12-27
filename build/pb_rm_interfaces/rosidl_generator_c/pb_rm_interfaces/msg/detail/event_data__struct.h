// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pb_rm_interfaces:msg/EventData.idl
// generated code does not contain a copyright notice

#ifndef PB_RM_INTERFACES__MSG__DETAIL__EVENT_DATA__STRUCT_H_
#define PB_RM_INTERFACES__MSG__DETAIL__EVENT_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNOCCUPIED'.
/**
  * Constants for the occupation and activation states
  * 某个地点未被占用或未被激活
 */
enum
{
  pb_rm_interfaces__msg__EventData__UNOCCUPIED = 0
};

/// Constant 'OCCUPIED_FRIEND'.
/**
  * 已被己方占用或激活
 */
enum
{
  pb_rm_interfaces__msg__EventData__OCCUPIED_FRIEND = 1
};

/// Constant 'OCCUPIED_ENEMY'.
/**
  * 已被敌方占用或激活
 */
enum
{
  pb_rm_interfaces__msg__EventData__OCCUPIED_ENEMY = 2
};

/// Constant 'OCCUPIED_BOTH'.
/**
  * 已被双方占用或激活
 */
enum
{
  pb_rm_interfaces__msg__EventData__OCCUPIED_BOTH = 3
};

/// Struct defined in msg/EventData in the package pb_rm_interfaces.
/**
  * msg for referee system (V1.6.4 0x0101)
 */
typedef struct pb_rm_interfaces__msg__EventData
{
  /// 己方补给站前补血点的占领状态，1 为已占领
  uint8_t supply_station_front;
  /// 己方补给站内部补血点的占领状态，1 为已占领
  uint8_t supply_station_internal;
  /// 己方补给区的占领状态，1 为已占领
  uint8_t supply_zone;
  /// 中心增益点的占领情况，
  /// 0 为未被占领，1 为被己方占领，2 为被对方占领，3 为被双方占领（仅 RMUL 适用）
  uint8_t center_gain_zone;
  /// 己方小能量机关的激活状态，1 为已激活
  uint8_t small_energy;
  /// 己方大能量机关的激活状态，1 为已激活
  uint8_t big_energy;
  /// 己方环形高地的占领状态，1 为被己方占领，2 为被对方占领
  uint8_t circular_highland;
  /// 己方 3 号梯形高地的占领状态，1 为被己方占领，2 为被对方占领
  uint8_t trapezoidal_highland_3;
  /// 己方 4 号梯形高地的占领状态，1 为被己方占领，2 为被对方占领
  uint8_t trapezoidal_highland_4;
  /// 己方基地虚拟护盾的剩余值百分比（四舍五入，保留整数）
  uint8_t base_virtual_shield_remaining;
} pb_rm_interfaces__msg__EventData;

// Struct for a sequence of pb_rm_interfaces__msg__EventData.
typedef struct pb_rm_interfaces__msg__EventData__Sequence
{
  pb_rm_interfaces__msg__EventData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pb_rm_interfaces__msg__EventData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PB_RM_INTERFACES__MSG__DETAIL__EVENT_DATA__STRUCT_H_
