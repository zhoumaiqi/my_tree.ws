// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pb_rm_interfaces:msg/RfidStatus.idl
// generated code does not contain a copyright notice
#include "pb_rm_interfaces/msg/detail/rfid_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
pb_rm_interfaces__msg__RfidStatus__init(pb_rm_interfaces__msg__RfidStatus * msg)
{
  if (!msg) {
    return false;
  }
  // base_gain_point
  // circular_highland_gain_point
  // enemy_circular_highland_gain_point
  // friendly_r3_b3_gain_point
  // enemy_r3_b3_gain_point
  // friendly_r4_b4_gain_point
  // enemy_r4_b4_gain_point
  // energy_mechanism_gain_point
  // friendly_fly_ramp_front_gain_point
  // friendly_fly_ramp_back_gain_point
  // enemy_fly_ramp_front_gain_point
  // enemy_fly_ramp_back_gain_point
  // friendly_outpost_gain_point
  // friendly_healing_point
  // friendly_sentry_patrol_area
  // enemy_sentry_patrol_area
  // friendly_big_resource_island
  // enemy_big_resource_island
  // friendly_exchange_area
  // center_gain_point
  return true;
}

void
pb_rm_interfaces__msg__RfidStatus__fini(pb_rm_interfaces__msg__RfidStatus * msg)
{
  if (!msg) {
    return;
  }
  // base_gain_point
  // circular_highland_gain_point
  // enemy_circular_highland_gain_point
  // friendly_r3_b3_gain_point
  // enemy_r3_b3_gain_point
  // friendly_r4_b4_gain_point
  // enemy_r4_b4_gain_point
  // energy_mechanism_gain_point
  // friendly_fly_ramp_front_gain_point
  // friendly_fly_ramp_back_gain_point
  // enemy_fly_ramp_front_gain_point
  // enemy_fly_ramp_back_gain_point
  // friendly_outpost_gain_point
  // friendly_healing_point
  // friendly_sentry_patrol_area
  // enemy_sentry_patrol_area
  // friendly_big_resource_island
  // enemy_big_resource_island
  // friendly_exchange_area
  // center_gain_point
}

bool
pb_rm_interfaces__msg__RfidStatus__are_equal(const pb_rm_interfaces__msg__RfidStatus * lhs, const pb_rm_interfaces__msg__RfidStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // base_gain_point
  if (lhs->base_gain_point != rhs->base_gain_point) {
    return false;
  }
  // circular_highland_gain_point
  if (lhs->circular_highland_gain_point != rhs->circular_highland_gain_point) {
    return false;
  }
  // enemy_circular_highland_gain_point
  if (lhs->enemy_circular_highland_gain_point != rhs->enemy_circular_highland_gain_point) {
    return false;
  }
  // friendly_r3_b3_gain_point
  if (lhs->friendly_r3_b3_gain_point != rhs->friendly_r3_b3_gain_point) {
    return false;
  }
  // enemy_r3_b3_gain_point
  if (lhs->enemy_r3_b3_gain_point != rhs->enemy_r3_b3_gain_point) {
    return false;
  }
  // friendly_r4_b4_gain_point
  if (lhs->friendly_r4_b4_gain_point != rhs->friendly_r4_b4_gain_point) {
    return false;
  }
  // enemy_r4_b4_gain_point
  if (lhs->enemy_r4_b4_gain_point != rhs->enemy_r4_b4_gain_point) {
    return false;
  }
  // energy_mechanism_gain_point
  if (lhs->energy_mechanism_gain_point != rhs->energy_mechanism_gain_point) {
    return false;
  }
  // friendly_fly_ramp_front_gain_point
  if (lhs->friendly_fly_ramp_front_gain_point != rhs->friendly_fly_ramp_front_gain_point) {
    return false;
  }
  // friendly_fly_ramp_back_gain_point
  if (lhs->friendly_fly_ramp_back_gain_point != rhs->friendly_fly_ramp_back_gain_point) {
    return false;
  }
  // enemy_fly_ramp_front_gain_point
  if (lhs->enemy_fly_ramp_front_gain_point != rhs->enemy_fly_ramp_front_gain_point) {
    return false;
  }
  // enemy_fly_ramp_back_gain_point
  if (lhs->enemy_fly_ramp_back_gain_point != rhs->enemy_fly_ramp_back_gain_point) {
    return false;
  }
  // friendly_outpost_gain_point
  if (lhs->friendly_outpost_gain_point != rhs->friendly_outpost_gain_point) {
    return false;
  }
  // friendly_healing_point
  if (lhs->friendly_healing_point != rhs->friendly_healing_point) {
    return false;
  }
  // friendly_sentry_patrol_area
  if (lhs->friendly_sentry_patrol_area != rhs->friendly_sentry_patrol_area) {
    return false;
  }
  // enemy_sentry_patrol_area
  if (lhs->enemy_sentry_patrol_area != rhs->enemy_sentry_patrol_area) {
    return false;
  }
  // friendly_big_resource_island
  if (lhs->friendly_big_resource_island != rhs->friendly_big_resource_island) {
    return false;
  }
  // enemy_big_resource_island
  if (lhs->enemy_big_resource_island != rhs->enemy_big_resource_island) {
    return false;
  }
  // friendly_exchange_area
  if (lhs->friendly_exchange_area != rhs->friendly_exchange_area) {
    return false;
  }
  // center_gain_point
  if (lhs->center_gain_point != rhs->center_gain_point) {
    return false;
  }
  return true;
}

bool
pb_rm_interfaces__msg__RfidStatus__copy(
  const pb_rm_interfaces__msg__RfidStatus * input,
  pb_rm_interfaces__msg__RfidStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // base_gain_point
  output->base_gain_point = input->base_gain_point;
  // circular_highland_gain_point
  output->circular_highland_gain_point = input->circular_highland_gain_point;
  // enemy_circular_highland_gain_point
  output->enemy_circular_highland_gain_point = input->enemy_circular_highland_gain_point;
  // friendly_r3_b3_gain_point
  output->friendly_r3_b3_gain_point = input->friendly_r3_b3_gain_point;
  // enemy_r3_b3_gain_point
  output->enemy_r3_b3_gain_point = input->enemy_r3_b3_gain_point;
  // friendly_r4_b4_gain_point
  output->friendly_r4_b4_gain_point = input->friendly_r4_b4_gain_point;
  // enemy_r4_b4_gain_point
  output->enemy_r4_b4_gain_point = input->enemy_r4_b4_gain_point;
  // energy_mechanism_gain_point
  output->energy_mechanism_gain_point = input->energy_mechanism_gain_point;
  // friendly_fly_ramp_front_gain_point
  output->friendly_fly_ramp_front_gain_point = input->friendly_fly_ramp_front_gain_point;
  // friendly_fly_ramp_back_gain_point
  output->friendly_fly_ramp_back_gain_point = input->friendly_fly_ramp_back_gain_point;
  // enemy_fly_ramp_front_gain_point
  output->enemy_fly_ramp_front_gain_point = input->enemy_fly_ramp_front_gain_point;
  // enemy_fly_ramp_back_gain_point
  output->enemy_fly_ramp_back_gain_point = input->enemy_fly_ramp_back_gain_point;
  // friendly_outpost_gain_point
  output->friendly_outpost_gain_point = input->friendly_outpost_gain_point;
  // friendly_healing_point
  output->friendly_healing_point = input->friendly_healing_point;
  // friendly_sentry_patrol_area
  output->friendly_sentry_patrol_area = input->friendly_sentry_patrol_area;
  // enemy_sentry_patrol_area
  output->enemy_sentry_patrol_area = input->enemy_sentry_patrol_area;
  // friendly_big_resource_island
  output->friendly_big_resource_island = input->friendly_big_resource_island;
  // enemy_big_resource_island
  output->enemy_big_resource_island = input->enemy_big_resource_island;
  // friendly_exchange_area
  output->friendly_exchange_area = input->friendly_exchange_area;
  // center_gain_point
  output->center_gain_point = input->center_gain_point;
  return true;
}

pb_rm_interfaces__msg__RfidStatus *
pb_rm_interfaces__msg__RfidStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pb_rm_interfaces__msg__RfidStatus * msg = (pb_rm_interfaces__msg__RfidStatus *)allocator.allocate(sizeof(pb_rm_interfaces__msg__RfidStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pb_rm_interfaces__msg__RfidStatus));
  bool success = pb_rm_interfaces__msg__RfidStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pb_rm_interfaces__msg__RfidStatus__destroy(pb_rm_interfaces__msg__RfidStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pb_rm_interfaces__msg__RfidStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pb_rm_interfaces__msg__RfidStatus__Sequence__init(pb_rm_interfaces__msg__RfidStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pb_rm_interfaces__msg__RfidStatus * data = NULL;

  if (size) {
    data = (pb_rm_interfaces__msg__RfidStatus *)allocator.zero_allocate(size, sizeof(pb_rm_interfaces__msg__RfidStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pb_rm_interfaces__msg__RfidStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pb_rm_interfaces__msg__RfidStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pb_rm_interfaces__msg__RfidStatus__Sequence__fini(pb_rm_interfaces__msg__RfidStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pb_rm_interfaces__msg__RfidStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pb_rm_interfaces__msg__RfidStatus__Sequence *
pb_rm_interfaces__msg__RfidStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pb_rm_interfaces__msg__RfidStatus__Sequence * array = (pb_rm_interfaces__msg__RfidStatus__Sequence *)allocator.allocate(sizeof(pb_rm_interfaces__msg__RfidStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pb_rm_interfaces__msg__RfidStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pb_rm_interfaces__msg__RfidStatus__Sequence__destroy(pb_rm_interfaces__msg__RfidStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pb_rm_interfaces__msg__RfidStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pb_rm_interfaces__msg__RfidStatus__Sequence__are_equal(const pb_rm_interfaces__msg__RfidStatus__Sequence * lhs, const pb_rm_interfaces__msg__RfidStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pb_rm_interfaces__msg__RfidStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pb_rm_interfaces__msg__RfidStatus__Sequence__copy(
  const pb_rm_interfaces__msg__RfidStatus__Sequence * input,
  pb_rm_interfaces__msg__RfidStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pb_rm_interfaces__msg__RfidStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pb_rm_interfaces__msg__RfidStatus * data =
      (pb_rm_interfaces__msg__RfidStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pb_rm_interfaces__msg__RfidStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pb_rm_interfaces__msg__RfidStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pb_rm_interfaces__msg__RfidStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
