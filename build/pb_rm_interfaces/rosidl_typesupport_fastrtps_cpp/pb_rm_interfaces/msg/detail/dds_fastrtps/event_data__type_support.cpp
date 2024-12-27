// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from pb_rm_interfaces:msg/EventData.idl
// generated code does not contain a copyright notice
#include "pb_rm_interfaces/msg/detail/event_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "pb_rm_interfaces/msg/detail/event_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace pb_rm_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pb_rm_interfaces
cdr_serialize(
  const pb_rm_interfaces::msg::EventData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: supply_station_front
  cdr << ros_message.supply_station_front;
  // Member: supply_station_internal
  cdr << ros_message.supply_station_internal;
  // Member: supply_zone
  cdr << ros_message.supply_zone;
  // Member: center_gain_zone
  cdr << ros_message.center_gain_zone;
  // Member: small_energy
  cdr << ros_message.small_energy;
  // Member: big_energy
  cdr << ros_message.big_energy;
  // Member: circular_highland
  cdr << ros_message.circular_highland;
  // Member: trapezoidal_highland_3
  cdr << ros_message.trapezoidal_highland_3;
  // Member: trapezoidal_highland_4
  cdr << ros_message.trapezoidal_highland_4;
  // Member: base_virtual_shield_remaining
  cdr << ros_message.base_virtual_shield_remaining;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pb_rm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pb_rm_interfaces::msg::EventData & ros_message)
{
  // Member: supply_station_front
  cdr >> ros_message.supply_station_front;

  // Member: supply_station_internal
  cdr >> ros_message.supply_station_internal;

  // Member: supply_zone
  cdr >> ros_message.supply_zone;

  // Member: center_gain_zone
  cdr >> ros_message.center_gain_zone;

  // Member: small_energy
  cdr >> ros_message.small_energy;

  // Member: big_energy
  cdr >> ros_message.big_energy;

  // Member: circular_highland
  cdr >> ros_message.circular_highland;

  // Member: trapezoidal_highland_3
  cdr >> ros_message.trapezoidal_highland_3;

  // Member: trapezoidal_highland_4
  cdr >> ros_message.trapezoidal_highland_4;

  // Member: base_virtual_shield_remaining
  cdr >> ros_message.base_virtual_shield_remaining;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pb_rm_interfaces
get_serialized_size(
  const pb_rm_interfaces::msg::EventData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: supply_station_front
  {
    size_t item_size = sizeof(ros_message.supply_station_front);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: supply_station_internal
  {
    size_t item_size = sizeof(ros_message.supply_station_internal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: supply_zone
  {
    size_t item_size = sizeof(ros_message.supply_zone);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: center_gain_zone
  {
    size_t item_size = sizeof(ros_message.center_gain_zone);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: small_energy
  {
    size_t item_size = sizeof(ros_message.small_energy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: big_energy
  {
    size_t item_size = sizeof(ros_message.big_energy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: circular_highland
  {
    size_t item_size = sizeof(ros_message.circular_highland);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trapezoidal_highland_3
  {
    size_t item_size = sizeof(ros_message.trapezoidal_highland_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trapezoidal_highland_4
  {
    size_t item_size = sizeof(ros_message.trapezoidal_highland_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: base_virtual_shield_remaining
  {
    size_t item_size = sizeof(ros_message.base_virtual_shield_remaining);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pb_rm_interfaces
max_serialized_size_EventData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: supply_station_front
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: supply_station_internal
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: supply_zone
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: center_gain_zone
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: small_energy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: big_energy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: circular_highland
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: trapezoidal_highland_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: trapezoidal_highland_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: base_virtual_shield_remaining
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = pb_rm_interfaces::msg::EventData;
    is_plain =
      (
      offsetof(DataType, base_virtual_shield_remaining) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _EventData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const pb_rm_interfaces::msg::EventData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EventData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<pb_rm_interfaces::msg::EventData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EventData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const pb_rm_interfaces::msg::EventData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EventData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EventData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EventData__callbacks = {
  "pb_rm_interfaces::msg",
  "EventData",
  _EventData__cdr_serialize,
  _EventData__cdr_deserialize,
  _EventData__get_serialized_size,
  _EventData__max_serialized_size
};

static rosidl_message_type_support_t _EventData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EventData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace pb_rm_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_pb_rm_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<pb_rm_interfaces::msg::EventData>()
{
  return &pb_rm_interfaces::msg::typesupport_fastrtps_cpp::_EventData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pb_rm_interfaces, msg, EventData)() {
  return &pb_rm_interfaces::msg::typesupport_fastrtps_cpp::_EventData__handle;
}

#ifdef __cplusplus
}
#endif
