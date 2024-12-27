// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pb_rm_interfaces:msg/RfidStatus.idl
// generated code does not contain a copyright notice

#ifndef PB_RM_INTERFACES__MSG__DETAIL__RFID_STATUS__STRUCT_H_
#define PB_RM_INTERFACES__MSG__DETAIL__RFID_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NOT_DETECTED'.
/**
  * RFID card not detected
 */
static const bool pb_rm_interfaces__msg__RfidStatus__NOT_DETECTED = false;

/// Constant 'DETECTED'.
/**
  * RFID card detected
 */
static const bool pb_rm_interfaces__msg__RfidStatus__DETECTED = true;

/// Struct defined in msg/RfidStatus in the package pb_rm_interfaces.
/**
  * msg for RFID detection system (V1.6.4 0x0209)用于RFID检测系统
  * const for RFID status
 */
typedef struct pb_rm_interfaces__msg__RfidStatus
{
  /// 对应是否检测到了对应站点的RFID卡
  /// 己方基地增益点
  bool base_gain_point;
  /// 己方环形高地增益点
  bool circular_highland_gain_point;
  /// 对方环形高地增益点
  bool enemy_circular_highland_gain_point;
  /// 己方 R3/B3 梯形高地增益点
  bool friendly_r3_b3_gain_point;
  /// 对方 R3/B3 梯形高地增益点
  bool enemy_r3_b3_gain_point;
  /// 己方 R4/B4 梯形高地增益点
  bool friendly_r4_b4_gain_point;
  /// 对方 R4/B4 梯形高地增益点
  bool enemy_r4_b4_gain_point;
  /// 己方能量机关激活点
  bool energy_mechanism_gain_point;
  /// 己方飞坡增益点（靠近己方一侧飞坡前）
  bool friendly_fly_ramp_front_gain_point;
  /// 己方飞坡增益点（靠近己方一侧飞坡后）
  bool friendly_fly_ramp_back_gain_point;
  /// 对方飞坡增益点（靠近对方一侧飞坡前）
  bool enemy_fly_ramp_front_gain_point;
  /// 对方飞坡增益点（靠近对方一侧飞坡后）
  bool enemy_fly_ramp_back_gain_point;
  /// 己方前哨站增益点
  bool friendly_outpost_gain_point;
  /// 己方补血点（检测到任一均视为激活）
  bool friendly_healing_point;
  /// 己方哨兵巡逻区
  bool friendly_sentry_patrol_area;
  /// 对方哨兵巡逻区
  bool enemy_sentry_patrol_area;
  /// 己方大资源岛增益点
  bool friendly_big_resource_island;
  /// 对方大资源岛增益点
  bool enemy_big_resource_island;
  /// 己方兑换区
  bool friendly_exchange_area;
  /// 中心增益点 RFID 卡状态（仅 RMUL 适用），1 为已检测到
  bool center_gain_point;
} pb_rm_interfaces__msg__RfidStatus;

// Struct for a sequence of pb_rm_interfaces__msg__RfidStatus.
typedef struct pb_rm_interfaces__msg__RfidStatus__Sequence
{
  pb_rm_interfaces__msg__RfidStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pb_rm_interfaces__msg__RfidStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PB_RM_INTERFACES__MSG__DETAIL__RFID_STATUS__STRUCT_H_
