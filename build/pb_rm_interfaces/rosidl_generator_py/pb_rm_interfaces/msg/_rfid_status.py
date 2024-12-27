# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pb_rm_interfaces:msg/RfidStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RfidStatus(type):
    """Metaclass of message 'RfidStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NOT_DETECTED': False,
        'DETECTED': True,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('pb_rm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pb_rm_interfaces.msg.RfidStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rfid_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rfid_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rfid_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rfid_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rfid_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NOT_DETECTED': cls.__constants['NOT_DETECTED'],
            'DETECTED': cls.__constants['DETECTED'],
        }

    @property
    def NOT_DETECTED(self):
        """Message constant 'NOT_DETECTED'."""
        return Metaclass_RfidStatus.__constants['NOT_DETECTED']

    @property
    def DETECTED(self):
        """Message constant 'DETECTED'."""
        return Metaclass_RfidStatus.__constants['DETECTED']


class RfidStatus(metaclass=Metaclass_RfidStatus):
    """
    Message class 'RfidStatus'.

    Constants:
      NOT_DETECTED
      DETECTED
    """

    __slots__ = [
        '_base_gain_point',
        '_circular_highland_gain_point',
        '_enemy_circular_highland_gain_point',
        '_friendly_r3_b3_gain_point',
        '_enemy_r3_b3_gain_point',
        '_friendly_r4_b4_gain_point',
        '_enemy_r4_b4_gain_point',
        '_energy_mechanism_gain_point',
        '_friendly_fly_ramp_front_gain_point',
        '_friendly_fly_ramp_back_gain_point',
        '_enemy_fly_ramp_front_gain_point',
        '_enemy_fly_ramp_back_gain_point',
        '_friendly_outpost_gain_point',
        '_friendly_healing_point',
        '_friendly_sentry_patrol_area',
        '_enemy_sentry_patrol_area',
        '_friendly_big_resource_island',
        '_enemy_big_resource_island',
        '_friendly_exchange_area',
        '_center_gain_point',
    ]

    _fields_and_field_types = {
        'base_gain_point': 'boolean',
        'circular_highland_gain_point': 'boolean',
        'enemy_circular_highland_gain_point': 'boolean',
        'friendly_r3_b3_gain_point': 'boolean',
        'enemy_r3_b3_gain_point': 'boolean',
        'friendly_r4_b4_gain_point': 'boolean',
        'enemy_r4_b4_gain_point': 'boolean',
        'energy_mechanism_gain_point': 'boolean',
        'friendly_fly_ramp_front_gain_point': 'boolean',
        'friendly_fly_ramp_back_gain_point': 'boolean',
        'enemy_fly_ramp_front_gain_point': 'boolean',
        'enemy_fly_ramp_back_gain_point': 'boolean',
        'friendly_outpost_gain_point': 'boolean',
        'friendly_healing_point': 'boolean',
        'friendly_sentry_patrol_area': 'boolean',
        'enemy_sentry_patrol_area': 'boolean',
        'friendly_big_resource_island': 'boolean',
        'enemy_big_resource_island': 'boolean',
        'friendly_exchange_area': 'boolean',
        'center_gain_point': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.base_gain_point = kwargs.get('base_gain_point', bool())
        self.circular_highland_gain_point = kwargs.get('circular_highland_gain_point', bool())
        self.enemy_circular_highland_gain_point = kwargs.get('enemy_circular_highland_gain_point', bool())
        self.friendly_r3_b3_gain_point = kwargs.get('friendly_r3_b3_gain_point', bool())
        self.enemy_r3_b3_gain_point = kwargs.get('enemy_r3_b3_gain_point', bool())
        self.friendly_r4_b4_gain_point = kwargs.get('friendly_r4_b4_gain_point', bool())
        self.enemy_r4_b4_gain_point = kwargs.get('enemy_r4_b4_gain_point', bool())
        self.energy_mechanism_gain_point = kwargs.get('energy_mechanism_gain_point', bool())
        self.friendly_fly_ramp_front_gain_point = kwargs.get('friendly_fly_ramp_front_gain_point', bool())
        self.friendly_fly_ramp_back_gain_point = kwargs.get('friendly_fly_ramp_back_gain_point', bool())
        self.enemy_fly_ramp_front_gain_point = kwargs.get('enemy_fly_ramp_front_gain_point', bool())
        self.enemy_fly_ramp_back_gain_point = kwargs.get('enemy_fly_ramp_back_gain_point', bool())
        self.friendly_outpost_gain_point = kwargs.get('friendly_outpost_gain_point', bool())
        self.friendly_healing_point = kwargs.get('friendly_healing_point', bool())
        self.friendly_sentry_patrol_area = kwargs.get('friendly_sentry_patrol_area', bool())
        self.enemy_sentry_patrol_area = kwargs.get('enemy_sentry_patrol_area', bool())
        self.friendly_big_resource_island = kwargs.get('friendly_big_resource_island', bool())
        self.enemy_big_resource_island = kwargs.get('enemy_big_resource_island', bool())
        self.friendly_exchange_area = kwargs.get('friendly_exchange_area', bool())
        self.center_gain_point = kwargs.get('center_gain_point', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.base_gain_point != other.base_gain_point:
            return False
        if self.circular_highland_gain_point != other.circular_highland_gain_point:
            return False
        if self.enemy_circular_highland_gain_point != other.enemy_circular_highland_gain_point:
            return False
        if self.friendly_r3_b3_gain_point != other.friendly_r3_b3_gain_point:
            return False
        if self.enemy_r3_b3_gain_point != other.enemy_r3_b3_gain_point:
            return False
        if self.friendly_r4_b4_gain_point != other.friendly_r4_b4_gain_point:
            return False
        if self.enemy_r4_b4_gain_point != other.enemy_r4_b4_gain_point:
            return False
        if self.energy_mechanism_gain_point != other.energy_mechanism_gain_point:
            return False
        if self.friendly_fly_ramp_front_gain_point != other.friendly_fly_ramp_front_gain_point:
            return False
        if self.friendly_fly_ramp_back_gain_point != other.friendly_fly_ramp_back_gain_point:
            return False
        if self.enemy_fly_ramp_front_gain_point != other.enemy_fly_ramp_front_gain_point:
            return False
        if self.enemy_fly_ramp_back_gain_point != other.enemy_fly_ramp_back_gain_point:
            return False
        if self.friendly_outpost_gain_point != other.friendly_outpost_gain_point:
            return False
        if self.friendly_healing_point != other.friendly_healing_point:
            return False
        if self.friendly_sentry_patrol_area != other.friendly_sentry_patrol_area:
            return False
        if self.enemy_sentry_patrol_area != other.enemy_sentry_patrol_area:
            return False
        if self.friendly_big_resource_island != other.friendly_big_resource_island:
            return False
        if self.enemy_big_resource_island != other.enemy_big_resource_island:
            return False
        if self.friendly_exchange_area != other.friendly_exchange_area:
            return False
        if self.center_gain_point != other.center_gain_point:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def base_gain_point(self):
        """Message field 'base_gain_point'."""
        return self._base_gain_point

    @base_gain_point.setter
    def base_gain_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'base_gain_point' field must be of type 'bool'"
        self._base_gain_point = value

    @builtins.property
    def circular_highland_gain_point(self):
        """Message field 'circular_highland_gain_point'."""
        return self._circular_highland_gain_point

    @circular_highland_gain_point.setter
    def circular_highland_gain_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'circular_highland_gain_point' field must be of type 'bool'"
        self._circular_highland_gain_point = value

    @builtins.property
    def enemy_circular_highland_gain_point(self):
        """Message field 'enemy_circular_highland_gain_point'."""
        return self._enemy_circular_highland_gain_point

    @enemy_circular_highland_gain_point.setter
    def enemy_circular_highland_gain_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enemy_circular_highland_gain_point' field must be of type 'bool'"
        self._enemy_circular_highland_gain_point = value

    @builtins.property
    def friendly_r3_b3_gain_point(self):
        """Message field 'friendly_r3_b3_gain_point'."""
        return self._friendly_r3_b3_gain_point

    @friendly_r3_b3_gain_point.setter
    def friendly_r3_b3_gain_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'friendly_r3_b3_gain_point' field must be of type 'bool'"
        self._friendly_r3_b3_gain_point = value

    @builtins.property
    def enemy_r3_b3_gain_point(self):
        """Message field 'enemy_r3_b3_gain_point'."""
        return self._enemy_r3_b3_gain_point

    @enemy_r3_b3_gain_point.setter
    def enemy_r3_b3_gain_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enemy_r3_b3_gain_point' field must be of type 'bool'"
        self._enemy_r3_b3_gain_point = value

    @builtins.property
    def friendly_r4_b4_gain_point(self):
        """Message field 'friendly_r4_b4_gain_point'."""
        return self._friendly_r4_b4_gain_point

    @friendly_r4_b4_gain_point.setter
    def friendly_r4_b4_gain_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'friendly_r4_b4_gain_point' field must be of type 'bool'"
        self._friendly_r4_b4_gain_point = value

    @builtins.property
    def enemy_r4_b4_gain_point(self):
        """Message field 'enemy_r4_b4_gain_point'."""
        return self._enemy_r4_b4_gain_point

    @enemy_r4_b4_gain_point.setter
    def enemy_r4_b4_gain_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enemy_r4_b4_gain_point' field must be of type 'bool'"
        self._enemy_r4_b4_gain_point = value

    @builtins.property
    def energy_mechanism_gain_point(self):
        """Message field 'energy_mechanism_gain_point'."""
        return self._energy_mechanism_gain_point

    @energy_mechanism_gain_point.setter
    def energy_mechanism_gain_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'energy_mechanism_gain_point' field must be of type 'bool'"
        self._energy_mechanism_gain_point = value

    @builtins.property
    def friendly_fly_ramp_front_gain_point(self):
        """Message field 'friendly_fly_ramp_front_gain_point'."""
        return self._friendly_fly_ramp_front_gain_point

    @friendly_fly_ramp_front_gain_point.setter
    def friendly_fly_ramp_front_gain_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'friendly_fly_ramp_front_gain_point' field must be of type 'bool'"
        self._friendly_fly_ramp_front_gain_point = value

    @builtins.property
    def friendly_fly_ramp_back_gain_point(self):
        """Message field 'friendly_fly_ramp_back_gain_point'."""
        return self._friendly_fly_ramp_back_gain_point

    @friendly_fly_ramp_back_gain_point.setter
    def friendly_fly_ramp_back_gain_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'friendly_fly_ramp_back_gain_point' field must be of type 'bool'"
        self._friendly_fly_ramp_back_gain_point = value

    @builtins.property
    def enemy_fly_ramp_front_gain_point(self):
        """Message field 'enemy_fly_ramp_front_gain_point'."""
        return self._enemy_fly_ramp_front_gain_point

    @enemy_fly_ramp_front_gain_point.setter
    def enemy_fly_ramp_front_gain_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enemy_fly_ramp_front_gain_point' field must be of type 'bool'"
        self._enemy_fly_ramp_front_gain_point = value

    @builtins.property
    def enemy_fly_ramp_back_gain_point(self):
        """Message field 'enemy_fly_ramp_back_gain_point'."""
        return self._enemy_fly_ramp_back_gain_point

    @enemy_fly_ramp_back_gain_point.setter
    def enemy_fly_ramp_back_gain_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enemy_fly_ramp_back_gain_point' field must be of type 'bool'"
        self._enemy_fly_ramp_back_gain_point = value

    @builtins.property
    def friendly_outpost_gain_point(self):
        """Message field 'friendly_outpost_gain_point'."""
        return self._friendly_outpost_gain_point

    @friendly_outpost_gain_point.setter
    def friendly_outpost_gain_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'friendly_outpost_gain_point' field must be of type 'bool'"
        self._friendly_outpost_gain_point = value

    @builtins.property
    def friendly_healing_point(self):
        """Message field 'friendly_healing_point'."""
        return self._friendly_healing_point

    @friendly_healing_point.setter
    def friendly_healing_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'friendly_healing_point' field must be of type 'bool'"
        self._friendly_healing_point = value

    @builtins.property
    def friendly_sentry_patrol_area(self):
        """Message field 'friendly_sentry_patrol_area'."""
        return self._friendly_sentry_patrol_area

    @friendly_sentry_patrol_area.setter
    def friendly_sentry_patrol_area(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'friendly_sentry_patrol_area' field must be of type 'bool'"
        self._friendly_sentry_patrol_area = value

    @builtins.property
    def enemy_sentry_patrol_area(self):
        """Message field 'enemy_sentry_patrol_area'."""
        return self._enemy_sentry_patrol_area

    @enemy_sentry_patrol_area.setter
    def enemy_sentry_patrol_area(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enemy_sentry_patrol_area' field must be of type 'bool'"
        self._enemy_sentry_patrol_area = value

    @builtins.property
    def friendly_big_resource_island(self):
        """Message field 'friendly_big_resource_island'."""
        return self._friendly_big_resource_island

    @friendly_big_resource_island.setter
    def friendly_big_resource_island(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'friendly_big_resource_island' field must be of type 'bool'"
        self._friendly_big_resource_island = value

    @builtins.property
    def enemy_big_resource_island(self):
        """Message field 'enemy_big_resource_island'."""
        return self._enemy_big_resource_island

    @enemy_big_resource_island.setter
    def enemy_big_resource_island(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enemy_big_resource_island' field must be of type 'bool'"
        self._enemy_big_resource_island = value

    @builtins.property
    def friendly_exchange_area(self):
        """Message field 'friendly_exchange_area'."""
        return self._friendly_exchange_area

    @friendly_exchange_area.setter
    def friendly_exchange_area(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'friendly_exchange_area' field must be of type 'bool'"
        self._friendly_exchange_area = value

    @builtins.property
    def center_gain_point(self):
        """Message field 'center_gain_point'."""
        return self._center_gain_point

    @center_gain_point.setter
    def center_gain_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'center_gain_point' field must be of type 'bool'"
        self._center_gain_point = value
