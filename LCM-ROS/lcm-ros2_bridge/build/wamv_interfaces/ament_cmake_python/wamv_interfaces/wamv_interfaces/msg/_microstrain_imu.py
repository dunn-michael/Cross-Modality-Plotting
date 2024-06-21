# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wamv_interfaces:msg/MicrostrainImu.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'orient_matrix'
# Member 'orient_quaternion'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MicrostrainImu(type):
    """Metaclass of message 'MicrostrainImu'."""

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
                'wamv_interfaces.msg.MicrostrainImu')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__microstrain_imu
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__microstrain_imu
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__microstrain_imu
            cls._TYPE_SUPPORT = module.type_support_msg__msg__microstrain_imu
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__microstrain_imu

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MicrostrainImu(metaclass=Metaclass_MicrostrainImu):
    """Message class 'MicrostrainImu'."""

    __slots__ = [
        '_timestamp',
        '_scaled_accel_x',
        '_scaled_accel_y',
        '_scaled_accel_z',
        '_scaled_gyro_x',
        '_scaled_gyro_y',
        '_scaled_gyro_z',
        '_scaled_mag_x',
        '_scaled_mag_y',
        '_scaled_mag_z',
        '_delta_theta_x',
        '_delta_theta_y',
        '_delta_theta_z',
        '_delta_vel_x',
        '_delta_vel_y',
        '_delta_vel_z',
        '_orient_matrix',
        '_roll',
        '_pitch',
        '_yaw',
        '_orient_quaternion',
        '_stabilized_mag_x',
        '_stabilized_mag_y',
        '_stabilized_mag_z',
        '_stabilized_accel_x',
        '_stabilized_accel_y',
        '_stabilized_accel_z',
        '_gps_correl_timestamp_tow',
        '_gps_correl_timestamp_week_num',
        '_gps_correl_timestamp_flags',
        '_scaled_ambient_pressure',
    ]

    _fields_and_field_types = {
        'timestamp': 'int64',
        'scaled_accel_x': 'float',
        'scaled_accel_y': 'float',
        'scaled_accel_z': 'float',
        'scaled_gyro_x': 'float',
        'scaled_gyro_y': 'float',
        'scaled_gyro_z': 'float',
        'scaled_mag_x': 'float',
        'scaled_mag_y': 'float',
        'scaled_mag_z': 'float',
        'delta_theta_x': 'float',
        'delta_theta_y': 'float',
        'delta_theta_z': 'float',
        'delta_vel_x': 'float',
        'delta_vel_y': 'float',
        'delta_vel_z': 'float',
        'orient_matrix': 'float[9]',
        'roll': 'float',
        'pitch': 'float',
        'yaw': 'float',
        'orient_quaternion': 'float[3]',
        'stabilized_mag_x': 'float',
        'stabilized_mag_y': 'float',
        'stabilized_mag_z': 'float',
        'stabilized_accel_x': 'float',
        'stabilized_accel_y': 'float',
        'stabilized_accel_z': 'float',
        'gps_correl_timestamp_tow': 'double',
        'gps_correl_timestamp_week_num': 'int32',
        'gps_correl_timestamp_flags': 'int32',
        'scaled_ambient_pressure': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 9),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.scaled_accel_x = kwargs.get('scaled_accel_x', float())
        self.scaled_accel_y = kwargs.get('scaled_accel_y', float())
        self.scaled_accel_z = kwargs.get('scaled_accel_z', float())
        self.scaled_gyro_x = kwargs.get('scaled_gyro_x', float())
        self.scaled_gyro_y = kwargs.get('scaled_gyro_y', float())
        self.scaled_gyro_z = kwargs.get('scaled_gyro_z', float())
        self.scaled_mag_x = kwargs.get('scaled_mag_x', float())
        self.scaled_mag_y = kwargs.get('scaled_mag_y', float())
        self.scaled_mag_z = kwargs.get('scaled_mag_z', float())
        self.delta_theta_x = kwargs.get('delta_theta_x', float())
        self.delta_theta_y = kwargs.get('delta_theta_y', float())
        self.delta_theta_z = kwargs.get('delta_theta_z', float())
        self.delta_vel_x = kwargs.get('delta_vel_x', float())
        self.delta_vel_y = kwargs.get('delta_vel_y', float())
        self.delta_vel_z = kwargs.get('delta_vel_z', float())
        if 'orient_matrix' not in kwargs:
            self.orient_matrix = numpy.zeros(9, dtype=numpy.float32)
        else:
            self.orient_matrix = numpy.array(kwargs.get('orient_matrix'), dtype=numpy.float32)
            assert self.orient_matrix.shape == (9, )
        self.roll = kwargs.get('roll', float())
        self.pitch = kwargs.get('pitch', float())
        self.yaw = kwargs.get('yaw', float())
        if 'orient_quaternion' not in kwargs:
            self.orient_quaternion = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.orient_quaternion = numpy.array(kwargs.get('orient_quaternion'), dtype=numpy.float32)
            assert self.orient_quaternion.shape == (3, )
        self.stabilized_mag_x = kwargs.get('stabilized_mag_x', float())
        self.stabilized_mag_y = kwargs.get('stabilized_mag_y', float())
        self.stabilized_mag_z = kwargs.get('stabilized_mag_z', float())
        self.stabilized_accel_x = kwargs.get('stabilized_accel_x', float())
        self.stabilized_accel_y = kwargs.get('stabilized_accel_y', float())
        self.stabilized_accel_z = kwargs.get('stabilized_accel_z', float())
        self.gps_correl_timestamp_tow = kwargs.get('gps_correl_timestamp_tow', float())
        self.gps_correl_timestamp_week_num = kwargs.get('gps_correl_timestamp_week_num', int())
        self.gps_correl_timestamp_flags = kwargs.get('gps_correl_timestamp_flags', int())
        self.scaled_ambient_pressure = kwargs.get('scaled_ambient_pressure', float())

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
        if self.scaled_accel_x != other.scaled_accel_x:
            return False
        if self.scaled_accel_y != other.scaled_accel_y:
            return False
        if self.scaled_accel_z != other.scaled_accel_z:
            return False
        if self.scaled_gyro_x != other.scaled_gyro_x:
            return False
        if self.scaled_gyro_y != other.scaled_gyro_y:
            return False
        if self.scaled_gyro_z != other.scaled_gyro_z:
            return False
        if self.scaled_mag_x != other.scaled_mag_x:
            return False
        if self.scaled_mag_y != other.scaled_mag_y:
            return False
        if self.scaled_mag_z != other.scaled_mag_z:
            return False
        if self.delta_theta_x != other.delta_theta_x:
            return False
        if self.delta_theta_y != other.delta_theta_y:
            return False
        if self.delta_theta_z != other.delta_theta_z:
            return False
        if self.delta_vel_x != other.delta_vel_x:
            return False
        if self.delta_vel_y != other.delta_vel_y:
            return False
        if self.delta_vel_z != other.delta_vel_z:
            return False
        if all(self.orient_matrix != other.orient_matrix):
            return False
        if self.roll != other.roll:
            return False
        if self.pitch != other.pitch:
            return False
        if self.yaw != other.yaw:
            return False
        if all(self.orient_quaternion != other.orient_quaternion):
            return False
        if self.stabilized_mag_x != other.stabilized_mag_x:
            return False
        if self.stabilized_mag_y != other.stabilized_mag_y:
            return False
        if self.stabilized_mag_z != other.stabilized_mag_z:
            return False
        if self.stabilized_accel_x != other.stabilized_accel_x:
            return False
        if self.stabilized_accel_y != other.stabilized_accel_y:
            return False
        if self.stabilized_accel_z != other.stabilized_accel_z:
            return False
        if self.gps_correl_timestamp_tow != other.gps_correl_timestamp_tow:
            return False
        if self.gps_correl_timestamp_week_num != other.gps_correl_timestamp_week_num:
            return False
        if self.gps_correl_timestamp_flags != other.gps_correl_timestamp_flags:
            return False
        if self.scaled_ambient_pressure != other.scaled_ambient_pressure:
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
    def scaled_accel_x(self):
        """Message field 'scaled_accel_x'."""
        return self._scaled_accel_x

    @scaled_accel_x.setter
    def scaled_accel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scaled_accel_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'scaled_accel_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._scaled_accel_x = value

    @builtins.property
    def scaled_accel_y(self):
        """Message field 'scaled_accel_y'."""
        return self._scaled_accel_y

    @scaled_accel_y.setter
    def scaled_accel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scaled_accel_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'scaled_accel_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._scaled_accel_y = value

    @builtins.property
    def scaled_accel_z(self):
        """Message field 'scaled_accel_z'."""
        return self._scaled_accel_z

    @scaled_accel_z.setter
    def scaled_accel_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scaled_accel_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'scaled_accel_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._scaled_accel_z = value

    @builtins.property
    def scaled_gyro_x(self):
        """Message field 'scaled_gyro_x'."""
        return self._scaled_gyro_x

    @scaled_gyro_x.setter
    def scaled_gyro_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scaled_gyro_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'scaled_gyro_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._scaled_gyro_x = value

    @builtins.property
    def scaled_gyro_y(self):
        """Message field 'scaled_gyro_y'."""
        return self._scaled_gyro_y

    @scaled_gyro_y.setter
    def scaled_gyro_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scaled_gyro_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'scaled_gyro_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._scaled_gyro_y = value

    @builtins.property
    def scaled_gyro_z(self):
        """Message field 'scaled_gyro_z'."""
        return self._scaled_gyro_z

    @scaled_gyro_z.setter
    def scaled_gyro_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scaled_gyro_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'scaled_gyro_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._scaled_gyro_z = value

    @builtins.property
    def scaled_mag_x(self):
        """Message field 'scaled_mag_x'."""
        return self._scaled_mag_x

    @scaled_mag_x.setter
    def scaled_mag_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scaled_mag_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'scaled_mag_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._scaled_mag_x = value

    @builtins.property
    def scaled_mag_y(self):
        """Message field 'scaled_mag_y'."""
        return self._scaled_mag_y

    @scaled_mag_y.setter
    def scaled_mag_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scaled_mag_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'scaled_mag_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._scaled_mag_y = value

    @builtins.property
    def scaled_mag_z(self):
        """Message field 'scaled_mag_z'."""
        return self._scaled_mag_z

    @scaled_mag_z.setter
    def scaled_mag_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scaled_mag_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'scaled_mag_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._scaled_mag_z = value

    @builtins.property
    def delta_theta_x(self):
        """Message field 'delta_theta_x'."""
        return self._delta_theta_x

    @delta_theta_x.setter
    def delta_theta_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_theta_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'delta_theta_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._delta_theta_x = value

    @builtins.property
    def delta_theta_y(self):
        """Message field 'delta_theta_y'."""
        return self._delta_theta_y

    @delta_theta_y.setter
    def delta_theta_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_theta_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'delta_theta_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._delta_theta_y = value

    @builtins.property
    def delta_theta_z(self):
        """Message field 'delta_theta_z'."""
        return self._delta_theta_z

    @delta_theta_z.setter
    def delta_theta_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_theta_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'delta_theta_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._delta_theta_z = value

    @builtins.property
    def delta_vel_x(self):
        """Message field 'delta_vel_x'."""
        return self._delta_vel_x

    @delta_vel_x.setter
    def delta_vel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_vel_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'delta_vel_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._delta_vel_x = value

    @builtins.property
    def delta_vel_y(self):
        """Message field 'delta_vel_y'."""
        return self._delta_vel_y

    @delta_vel_y.setter
    def delta_vel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_vel_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'delta_vel_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._delta_vel_y = value

    @builtins.property
    def delta_vel_z(self):
        """Message field 'delta_vel_z'."""
        return self._delta_vel_z

    @delta_vel_z.setter
    def delta_vel_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_vel_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'delta_vel_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._delta_vel_z = value

    @builtins.property
    def orient_matrix(self):
        """Message field 'orient_matrix'."""
        return self._orient_matrix

    @orient_matrix.setter
    def orient_matrix(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'orient_matrix' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 9, \
                "The 'orient_matrix' numpy.ndarray() must have a size of 9"
            self._orient_matrix = value
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
                 len(value) == 9 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'orient_matrix' field must be a set or sequence with length 9 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._orient_matrix = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'roll' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._roll = value

    @builtins.property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw = value

    @builtins.property
    def orient_quaternion(self):
        """Message field 'orient_quaternion'."""
        return self._orient_quaternion

    @orient_quaternion.setter
    def orient_quaternion(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'orient_quaternion' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'orient_quaternion' numpy.ndarray() must have a size of 3"
            self._orient_quaternion = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'orient_quaternion' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._orient_quaternion = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def stabilized_mag_x(self):
        """Message field 'stabilized_mag_x'."""
        return self._stabilized_mag_x

    @stabilized_mag_x.setter
    def stabilized_mag_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stabilized_mag_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'stabilized_mag_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._stabilized_mag_x = value

    @builtins.property
    def stabilized_mag_y(self):
        """Message field 'stabilized_mag_y'."""
        return self._stabilized_mag_y

    @stabilized_mag_y.setter
    def stabilized_mag_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stabilized_mag_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'stabilized_mag_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._stabilized_mag_y = value

    @builtins.property
    def stabilized_mag_z(self):
        """Message field 'stabilized_mag_z'."""
        return self._stabilized_mag_z

    @stabilized_mag_z.setter
    def stabilized_mag_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stabilized_mag_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'stabilized_mag_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._stabilized_mag_z = value

    @builtins.property
    def stabilized_accel_x(self):
        """Message field 'stabilized_accel_x'."""
        return self._stabilized_accel_x

    @stabilized_accel_x.setter
    def stabilized_accel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stabilized_accel_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'stabilized_accel_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._stabilized_accel_x = value

    @builtins.property
    def stabilized_accel_y(self):
        """Message field 'stabilized_accel_y'."""
        return self._stabilized_accel_y

    @stabilized_accel_y.setter
    def stabilized_accel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stabilized_accel_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'stabilized_accel_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._stabilized_accel_y = value

    @builtins.property
    def stabilized_accel_z(self):
        """Message field 'stabilized_accel_z'."""
        return self._stabilized_accel_z

    @stabilized_accel_z.setter
    def stabilized_accel_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stabilized_accel_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'stabilized_accel_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._stabilized_accel_z = value

    @builtins.property
    def gps_correl_timestamp_tow(self):
        """Message field 'gps_correl_timestamp_tow'."""
        return self._gps_correl_timestamp_tow

    @gps_correl_timestamp_tow.setter
    def gps_correl_timestamp_tow(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gps_correl_timestamp_tow' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gps_correl_timestamp_tow' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gps_correl_timestamp_tow = value

    @builtins.property
    def gps_correl_timestamp_week_num(self):
        """Message field 'gps_correl_timestamp_week_num'."""
        return self._gps_correl_timestamp_week_num

    @gps_correl_timestamp_week_num.setter
    def gps_correl_timestamp_week_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gps_correl_timestamp_week_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gps_correl_timestamp_week_num' field must be an integer in [-2147483648, 2147483647]"
        self._gps_correl_timestamp_week_num = value

    @builtins.property
    def gps_correl_timestamp_flags(self):
        """Message field 'gps_correl_timestamp_flags'."""
        return self._gps_correl_timestamp_flags

    @gps_correl_timestamp_flags.setter
    def gps_correl_timestamp_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gps_correl_timestamp_flags' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gps_correl_timestamp_flags' field must be an integer in [-2147483648, 2147483647]"
        self._gps_correl_timestamp_flags = value

    @builtins.property
    def scaled_ambient_pressure(self):
        """Message field 'scaled_ambient_pressure'."""
        return self._scaled_ambient_pressure

    @scaled_ambient_pressure.setter
    def scaled_ambient_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scaled_ambient_pressure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'scaled_ambient_pressure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._scaled_ambient_pressure = value
