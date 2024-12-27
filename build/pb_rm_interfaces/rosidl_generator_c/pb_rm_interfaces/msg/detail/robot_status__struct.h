// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pb_rm_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef PB_RM_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define PB_RM_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ARMOR_HIT'.
/**
  * (V1.6.4 0x0206)
  * const for hp deduction reason
  * 装甲模块被弹丸攻击导致扣血
 */
enum
{
  pb_rm_interfaces__msg__RobotStatus__ARMOR_HIT = 0
};

/// Constant 'SYSTEM_OFFLINE'.
/**
  * 裁判系统重要模块离线导致扣血
 */
enum
{
  pb_rm_interfaces__msg__RobotStatus__SYSTEM_OFFLINE = 1
};

/// Constant 'OVER_SHOOT_SPEED'.
/**
  * 射击初速度超限导致扣血
 */
enum
{
  pb_rm_interfaces__msg__RobotStatus__OVER_SHOOT_SPEED = 2
};

/// Constant 'OVER_HEAT'.
/**
  * 枪口热量超限导致扣血
 */
enum
{
  pb_rm_interfaces__msg__RobotStatus__OVER_HEAT = 3
};

/// Constant 'OVERPOWER'.
/**
  * 底盘功率超限导致扣血
 */
enum
{
  pb_rm_interfaces__msg__RobotStatus__OVERPOWER = 4
};

/// Constant 'ARMOR_COLLISION'.
/**
  * 装甲模块受到撞击导致扣血
 */
enum
{
  pb_rm_interfaces__msg__RobotStatus__ARMOR_COLLISION = 5
};

/// Struct defined in msg/RobotStatus in the package pb_rm_interfaces.
/**
  * msg for referee system
 */
typedef struct pb_rm_interfaces__msg__RobotStatus
{
  /// (V1.6.4 0x0201)
  /// 本机器人 ID
  uint8_t robot_id;
  /// 机器人等级
  uint8_t robot_level;
  /// 机器人当前血量
  uint16_t current_hp;
  /// 机器人血量上限
  uint16_t maximum_hp;
  /// 机器人枪口热量每秒冷却值
  uint16_t shooter_barrel_cooling_value;
  /// 机器人枪口热量上限
  uint16_t shooter_barrel_heat_limit;
  /// (V1.6.4 0x0202)
  /// 第 1 个 17mm 发射机构的枪口热量
  uint16_t shooter_17mm_1_barrel_heat;
  /// (V1.6.4 0x0203)
  /// 本机器人位置 x 坐标，单位：m
  float robot_pos_x;
  /// 本机器人位置 y 坐标，单位：m
  float robot_pos_y;
  /// 本机器人测速模块的朝向，单位：度。正北为 0 度
  float robot_pos_angle;
  /// 当扣血原因为装甲模块被弹丸攻击、受撞击、离线或测速模块离线时，
  /// 数值为装甲模块或测速模块的 ID 编号；
  /// 当其他原因导致扣血时，该数值为 0
  uint8_t armor_id;
  /// 血量变化类型
  uint8_t hp_deduction_reason;
  /// (V1.6.4 0x0208)
  /// 17mm 弹丸剩余发射次数
  uint16_t projectile_allowance_17mm_1;
  /// 剩余金币数量
  uint16_t remaining_gold_coin;
} pb_rm_interfaces__msg__RobotStatus;

// Struct for a sequence of pb_rm_interfaces__msg__RobotStatus.
typedef struct pb_rm_interfaces__msg__RobotStatus__Sequence
{
  pb_rm_interfaces__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pb_rm_interfaces__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PB_RM_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
