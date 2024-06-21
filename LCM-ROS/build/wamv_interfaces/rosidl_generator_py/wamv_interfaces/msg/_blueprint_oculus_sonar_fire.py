# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wamv_interfaces:msg/BlueprintOculusSonarFire.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BlueprintOculusSonarFire(type):
    """Metaclass of message 'BlueprintOculusSonarFire'."""

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
                'wamv_interfaces.msg.BlueprintOculusSonarFire')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__blueprint_oculus_sonar_fire
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__blueprint_oculus_sonar_fire
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__blueprint_oculus_sonar_fire
            cls._TYPE_SUPPORT = module.type_support_msg__msg__blueprint_oculus_sonar_fire
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__blueprint_oculus_sonar_fire

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BlueprintOculusSonarFire(metaclass=Metaclass_BlueprintOculusSonarFire):
    """Message class 'BlueprintOculusSonarFire'."""

    __slots__ = [
        '_timestamp',
        '_mode',
        '_gamma',
        '_flags',
        '_ping_rate',
        '_range',
        '_gain',
        '_speed_of_sound',
        '_salinity',
    ]

    _fields_and_field_types = {
        'timestamp': 'int64',
        'mode': 'int16',
        'gamma': 'int16',
        'flags': 'int16',
        'ping_rate': 'int16',
        'range': 'float',
        'gain': 'float',
        'speed_of_sound': 'float',
        'salinity': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.mode = kwargs.get('mode', int())
        self.gamma = kwargs.get('gamma', int())
        self.flags = kwargs.get('flags', int())
        self.ping_rate = kwargs.get('ping_rate', int())
        self.range = kwargs.get('range', float())
        self.gain = kwargs.get('gain', float())
        self.speed_of_sound = kwargs.get('speed_of_sound', float())
        self.salinity = kwargs.get('salinity', float())

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
        if self.mode != other.mode:
            return False
        if self.gamma != other.gamma:
            return False
        if self.flags != other.flags:
            return False
        if self.ping_rate != other.ping_rate:
            return False
        if self.range != other.range:
            return False
        if self.gain != other.gain:
            return False
        if self.speed_of_sound != other.speed_of_sound:
            return False
        if self.salinity != other.salinity:
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
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'mode' field must be an integer in [-32768, 32767]"
        self._mode = value

    @builtins.property
    def gamma(self):
        """Message field 'gamma'."""
        return self._gamma

    @gamma.setter
    def gamma(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gamma' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'gamma' field must be an integer in [-32768, 32767]"
        self._gamma = value

    @builtins.property
    def flags(self):
        """Message field 'flags'."""
        return self._flags

    @flags.setter
    def flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'flags' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'flags' field must be an integer in [-32768, 32767]"
        self._flags = value

    @builtins.property
    def ping_rate(self):
        """Message field 'ping_rate'."""
        return self._ping_rate

    @ping_rate.setter
    def ping_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ping_rate' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ping_rate' field must be an integer in [-32768, 32767]"
        self._ping_rate = value

    @builtins.property  # noqa: A003
    def range(self):  # noqa: A003
        """Message field 'range'."""
        return self._range

    @range.setter  # noqa: A003
    def range(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'range' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._range = value

    @builtins.property
    def gain(self):
        """Message field 'gain'."""
        return self._gain

    @gain.setter
    def gain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gain' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gain' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gain = value

    @builtins.property
    def speed_of_sound(self):
        """Message field 'speed_of_sound'."""
        return self._speed_of_sound

    @speed_of_sound.setter
    def speed_of_sound(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_of_sound' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed_of_sound' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed_of_sound = value

    @builtins.property
    def salinity(self):
        """Message field 'salinity'."""
        return self._salinity

    @salinity.setter
    def salinity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'salinity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'salinity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._salinity = value
