# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wamv_interfaces:msg/BlueprintOculusSonarPing.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'bearings'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BlueprintOculusSonarPing(type):
    """Metaclass of message 'BlueprintOculusSonarPing'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('wamv_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'wamv_interfaces.msg.BlueprintOculusSonarPing')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__blueprint_oculus_sonar_ping
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__blueprint_oculus_sonar_ping
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__blueprint_oculus_sonar_ping
            cls._TYPE_SUPPORT = module.type_support_msg__msg__blueprint_oculus_sonar_ping
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__blueprint_oculus_sonar_ping

            from wamv_interfaces.msg import BlueprintOculusSonarFire
            if BlueprintOculusSonarFire.__class__._TYPE_SUPPORT is None:
                BlueprintOculusSonarFire.__class__.__import_type_support__()

            from wamv_interfaces.msg import BlueprintOculusSonarImage
            if BlueprintOculusSonarImage.__class__._TYPE_SUPPORT is None:
                BlueprintOculusSonarImage.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BlueprintOculusSonarPing(metaclass=Metaclass_BlueprintOculusSonarPing):
    """Message class 'BlueprintOculusSonarPing'."""

    __slots__ = [
        '_timestamp',
        '_ping_id',
        '_part_number',
        '_start_time',
        '_num_ranges',
        '_num_beams',
        '_bearings',
        '_range_resolution',
        '_fire_msg',
        '_image_msg',
    ]

    _fields_and_field_types = {
        'timestamp': 'int64',
        'ping_id': 'int32',
        'part_number': 'int16',
        'start_time': 'int32',
        'num_ranges': 'int32',
        'num_beams': 'int32',
        'bearings': 'sequence<int16>',
        'range_resolution': 'float',
        'fire_msg': 'wamv_interfaces/BlueprintOculusSonarFire',
        'image_msg': 'wamv_interfaces/BlueprintOculusSonarImage',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['wamv_interfaces', 'msg'], 'BlueprintOculusSonarFire'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['wamv_interfaces', 'msg'], 'BlueprintOculusSonarImage'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.ping_id = kwargs.get('ping_id', int())
        self.part_number = kwargs.get('part_number', int())
        self.start_time = kwargs.get('start_time', int())
        self.num_ranges = kwargs.get('num_ranges', int())
        self.num_beams = kwargs.get('num_beams', int())
        self.bearings = array.array('h', kwargs.get('bearings', []))
        self.range_resolution = kwargs.get('range_resolution', float())
        from wamv_interfaces.msg import BlueprintOculusSonarFire
        self.fire_msg = kwargs.get('fire_msg', BlueprintOculusSonarFire())
        from wamv_interfaces.msg import BlueprintOculusSonarImage
        self.image_msg = kwargs.get('image_msg', BlueprintOculusSonarImage())

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
        if self.timestamp != other.timestamp:
            return False
        if self.ping_id != other.ping_id:
            return False
        if self.part_number != other.part_number:
            return False
        if self.start_time != other.start_time:
            return False
        if self.num_ranges != other.num_ranges:
            return False
        if self.num_beams != other.num_beams:
            return False
        if self.bearings != other.bearings:
            return False
        if self.range_resolution != other.range_resolution:
            return False
        if self.fire_msg != other.fire_msg:
            return False
        if self.image_msg != other.image_msg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'timestamp' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._timestamp = value

    @builtins.property
    def ping_id(self):
        """Message field 'ping_id'."""
        return self._ping_id

    @ping_id.setter
    def ping_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ping_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ping_id' field must be an integer in [-2147483648, 2147483647]"
        self._ping_id = value

    @builtins.property
    def part_number(self):
        """Message field 'part_number'."""
        return self._part_number

    @part_number.setter
    def part_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'part_number' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'part_number' field must be an integer in [-32768, 32767]"
        self._part_number = value

    @builtins.property
    def start_time(self):
        """Message field 'start_time'."""
        return self._start_time

    @start_time.setter
    def start_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'start_time' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'start_time' field must be an integer in [-2147483648, 2147483647]"
        self._start_time = value

    @builtins.property
    def num_ranges(self):
        """Message field 'num_ranges'."""
        return self._num_ranges

    @num_ranges.setter
    def num_ranges(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_ranges' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'num_ranges' field must be an integer in [-2147483648, 2147483647]"
        self._num_ranges = value

    @builtins.property
    def num_beams(self):
        """Message field 'num_beams'."""
        return self._num_beams

    @num_beams.setter
    def num_beams(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_beams' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'num_beams' field must be an integer in [-2147483648, 2147483647]"
        self._num_beams = value

    @builtins.property
    def bearings(self):
        """Message field 'bearings'."""
        return self._bearings

    @bearings.setter
    def bearings(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'bearings' array.array() must have the type code of 'h'"
            self._bearings = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'bearings' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._bearings = array.array('h', value)

    @builtins.property
    def range_resolution(self):
        """Message field 'range_resolution'."""
        return self._range_resolution

    @range_resolution.setter
    def range_resolution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range_resolution' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'range_resolution' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._range_resolution = value

    @builtins.property
    def fire_msg(self):
        """Message field 'fire_msg'."""
        return self._fire_msg

    @fire_msg.setter
    def fire_msg(self, value):
        if __debug__:
            from wamv_interfaces.msg import BlueprintOculusSonarFire
            assert \
                isinstance(value, BlueprintOculusSonarFire), \
                "The 'fire_msg' field must be a sub message of type 'BlueprintOculusSonarFire'"
        self._fire_msg = value

    @builtins.property
    def image_msg(self):
        """Message field 'image_msg'."""
        return self._image_msg

    @image_msg.setter
    def image_msg(self, value):
        if __debug__:
            from wamv_interfaces.msg import BlueprintOculusSonarImage
            assert \
                isinstance(value, BlueprintOculusSonarImage), \
                "The 'image_msg' field must be a sub message of type 'BlueprintOculusSonarImage'"
        self._image_msg = value
