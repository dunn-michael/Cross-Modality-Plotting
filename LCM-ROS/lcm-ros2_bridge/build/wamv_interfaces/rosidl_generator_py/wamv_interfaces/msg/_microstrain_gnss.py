# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wamv_interfaces:msg/MicrostrainGnss.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MicrostrainGnss(type):
    """Metaclass of message 'MicrostrainGnss'."""

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
                'wamv_interfaces.msg.MicrostrainGnss')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__microstrain_gnss
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__microstrain_gnss
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__microstrain_gnss
            cls._TYPE_SUPPORT = module.type_support_msg__msg__microstrain_gnss
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__microstrain_gnss

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MicrostrainGnss(metaclass=Metaclass_MicrostrainGnss):
    """Message class 'MicrostrainGnss'."""

    __slots__ = [
        '_timestamp',
        '_latitude',
        '_longitude',
        '_height_above_elipsoid',
        '_height_above_msl',
        '_horizontal_accuracy',
        '_vertical_accuracy',
        '_ecef_pos_x',
        '_ecef_pos_y',
        '_ecef_pos_z',
        '_ecef_pos_accuracy',
        '_north_velocity',
        '_east_velocity',
        '_down_velocity',
        '_speed',
        '_ground_speed',
        '_heading',
        '_speed_accuracy',
        '_heading_accuracy',
        '_ecef_vel_x',
        '_ecef_vel_y',
        '_ecef_vel_z',
        '_ecef_vel_accuracy',
        '_geometric_dop',
        '_position_dop',
        '_horizontal_dop',
        '_vertical_dop',
        '_time_dop',
        '_northing_dop',
        '_easting_dop',
        '_utc_timestamp',
        '_utc_timestamp_flags',
        '_gps_time_tow',
        '_gps_time_week_num',
        '_gps_clock_bias',
        '_gps_clock_drift',
        '_gps_clock_accuracy',
        '_gnss_fix_type',
        '_gnss_fix_sv_count',
        '_gnss_fix_flags',
        '_sensor_state',
        '_antenna_state',
        '_antenna_power',
        '_dgnss_newest_age_gnss_base_0',
        '_dgnss_base_station_status_gnss_base_0',
        '_dgnss_num_channels_gnss_base_0',
    ]

    _fields_and_field_types = {
        'timestamp': 'int64',
        'latitude': 'double',
        'longitude': 'double',
        'height_above_elipsoid': 'double',
        'height_above_msl': 'double',
        'horizontal_accuracy': 'float',
        'vertical_accuracy': 'float',
        'ecef_pos_x': 'double',
        'ecef_pos_y': 'double',
        'ecef_pos_z': 'double',
        'ecef_pos_accuracy': 'float',
        'north_velocity': 'float',
        'east_velocity': 'float',
        'down_velocity': 'float',
        'speed': 'float',
        'ground_speed': 'float',
        'heading': 'float',
        'speed_accuracy': 'float',
        'heading_accuracy': 'float',
        'ecef_vel_x': 'float',
        'ecef_vel_y': 'float',
        'ecef_vel_z': 'float',
        'ecef_vel_accuracy': 'float',
        'geometric_dop': 'float',
        'position_dop': 'float',
        'horizontal_dop': 'float',
        'vertical_dop': 'float',
        'time_dop': 'float',
        'northing_dop': 'float',
        'easting_dop': 'float',
        'utc_timestamp': 'int64',
        'utc_timestamp_flags': 'int32',
        'gps_time_tow': 'double',
        'gps_time_week_num': 'int32',
        'gps_clock_bias': 'double',
        'gps_clock_drift': 'double',
        'gps_clock_accuracy': 'double',
        'gnss_fix_type': 'int16',
        'gnss_fix_sv_count': 'int16',
        'gnss_fix_flags': 'int32',
        'sensor_state': 'int16',
        'antenna_state': 'int16',
        'antenna_power': 'int16',
        'dgnss_newest_age_gnss_base_0': 'float',
        'dgnss_base_station_status_gnss_base_0': 'int16',
        'dgnss_num_channels_gnss_base_0': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.latitude = kwargs.get('latitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.height_above_elipsoid = kwargs.get('height_above_elipsoid', float())
        self.height_above_msl = kwargs.get('height_above_msl', float())
        self.horizontal_accuracy = kwargs.get('horizontal_accuracy', float())
        self.vertical_accuracy = kwargs.get('vertical_accuracy', float())
        self.ecef_pos_x = kwargs.get('ecef_pos_x', float())
        self.ecef_pos_y = kwargs.get('ecef_pos_y', float())
        self.ecef_pos_z = kwargs.get('ecef_pos_z', float())
        self.ecef_pos_accuracy = kwargs.get('ecef_pos_accuracy', float())
        self.north_velocity = kwargs.get('north_velocity', float())
        self.east_velocity = kwargs.get('east_velocity', float())
        self.down_velocity = kwargs.get('down_velocity', float())
        self.speed = kwargs.get('speed', float())
        self.ground_speed = kwargs.get('ground_speed', float())
        self.heading = kwargs.get('heading', float())
        self.speed_accuracy = kwargs.get('speed_accuracy', float())
        self.heading_accuracy = kwargs.get('heading_accuracy', float())
        self.ecef_vel_x = kwargs.get('ecef_vel_x', float())
        self.ecef_vel_y = kwargs.get('ecef_vel_y', float())
        self.ecef_vel_z = kwargs.get('ecef_vel_z', float())
        self.ecef_vel_accuracy = kwargs.get('ecef_vel_accuracy', float())
        self.geometric_dop = kwargs.get('geometric_dop', float())
        self.position_dop = kwargs.get('position_dop', float())
        self.horizontal_dop = kwargs.get('horizontal_dop', float())
        self.vertical_dop = kwargs.get('vertical_dop', float())
        self.time_dop = kwargs.get('time_dop', float())
        self.northing_dop = kwargs.get('northing_dop', float())
        self.easting_dop = kwargs.get('easting_dop', float())
        self.utc_timestamp = kwargs.get('utc_timestamp', int())
        self.utc_timestamp_flags = kwargs.get('utc_timestamp_flags', int())
        self.gps_time_tow = kwargs.get('gps_time_tow', float())
        self.gps_time_week_num = kwargs.get('gps_time_week_num', int())
        self.gps_clock_bias = kwargs.get('gps_clock_bias', float())
        self.gps_clock_drift = kwargs.get('gps_clock_drift', float())
        self.gps_clock_accuracy = kwargs.get('gps_clock_accuracy', float())
        self.gnss_fix_type = kwargs.get('gnss_fix_type', int())
        self.gnss_fix_sv_count = kwargs.get('gnss_fix_sv_count', int())
        self.gnss_fix_flags = kwargs.get('gnss_fix_flags', int())
        self.sensor_state = kwargs.get('sensor_state', int())
        self.antenna_state = kwargs.get('antenna_state', int())
        self.antenna_power = kwargs.get('antenna_power', int())
        self.dgnss_newest_age_gnss_base_0 = kwargs.get('dgnss_newest_age_gnss_base_0', float())
        self.dgnss_base_station_status_gnss_base_0 = kwargs.get('dgnss_base_station_status_gnss_base_0', int())
        self.dgnss_num_channels_gnss_base_0 = kwargs.get('dgnss_num_channels_gnss_base_0', int())

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
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.height_above_elipsoid != other.height_above_elipsoid:
            return False
        if self.height_above_msl != other.height_above_msl:
            return False
        if self.horizontal_accuracy != other.horizontal_accuracy:
            return False
        if self.vertical_accuracy != other.vertical_accuracy:
            return False
        if self.ecef_pos_x != other.ecef_pos_x:
            return False
        if self.ecef_pos_y != other.ecef_pos_y:
            return False
        if self.ecef_pos_z != other.ecef_pos_z:
            return False
        if self.ecef_pos_accuracy != other.ecef_pos_accuracy:
            return False
        if self.north_velocity != other.north_velocity:
            return False
        if self.east_velocity != other.east_velocity:
            return False
        if self.down_velocity != other.down_velocity:
            return False
        if self.speed != other.speed:
            return False
        if self.ground_speed != other.ground_speed:
            return False
        if self.heading != other.heading:
            return False
        if self.speed_accuracy != other.speed_accuracy:
            return False
        if self.heading_accuracy != other.heading_accuracy:
            return False
        if self.ecef_vel_x != other.ecef_vel_x:
            return False
        if self.ecef_vel_y != other.ecef_vel_y:
            return False
        if self.ecef_vel_z != other.ecef_vel_z:
            return False
        if self.ecef_vel_accuracy != other.ecef_vel_accuracy:
            return False
        if self.geometric_dop != other.geometric_dop:
            return False
        if self.position_dop != other.position_dop:
            return False
        if self.horizontal_dop != other.horizontal_dop:
            return False
        if self.vertical_dop != other.vertical_dop:
            return False
        if self.time_dop != other.time_dop:
            return False
        if self.northing_dop != other.northing_dop:
            return False
        if self.easting_dop != other.easting_dop:
            return False
        if self.utc_timestamp != other.utc_timestamp:
            return False
        if self.utc_timestamp_flags != other.utc_timestamp_flags:
            return False
        if self.gps_time_tow != other.gps_time_tow:
            return False
        if self.gps_time_week_num != other.gps_time_week_num:
            return False
        if self.gps_clock_bias != other.gps_clock_bias:
            return False
        if self.gps_clock_drift != other.gps_clock_drift:
            return False
        if self.gps_clock_accuracy != other.gps_clock_accuracy:
            return False
        if self.gnss_fix_type != other.gnss_fix_type:
            return False
        if self.gnss_fix_sv_count != other.gnss_fix_sv_count:
            return False
        if self.gnss_fix_flags != other.gnss_fix_flags:
            return False
        if self.sensor_state != other.sensor_state:
            return False
        if self.antenna_state != other.antenna_state:
            return False
        if self.antenna_power != other.antenna_power:
            return False
        if self.dgnss_newest_age_gnss_base_0 != other.dgnss_newest_age_gnss_base_0:
            return False
        if self.dgnss_base_station_status_gnss_base_0 != other.dgnss_base_station_status_gnss_base_0:
            return False
        if self.dgnss_num_channels_gnss_base_0 != other.dgnss_num_channels_gnss_base_0:
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
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latitude = value

    @builtins.property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitude = value

    @builtins.property
    def height_above_elipsoid(self):
        """Message field 'height_above_elipsoid'."""
        return self._height_above_elipsoid

    @height_above_elipsoid.setter
    def height_above_elipsoid(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height_above_elipsoid' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'height_above_elipsoid' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._height_above_elipsoid = value

    @builtins.property
    def height_above_msl(self):
        """Message field 'height_above_msl'."""
        return self._height_above_msl

    @height_above_msl.setter
    def height_above_msl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height_above_msl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'height_above_msl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._height_above_msl = value

    @builtins.property
    def horizontal_accuracy(self):
        """Message field 'horizontal_accuracy'."""
        return self._horizontal_accuracy

    @horizontal_accuracy.setter
    def horizontal_accuracy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'horizontal_accuracy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'horizontal_accuracy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._horizontal_accuracy = value

    @builtins.property
    def vertical_accuracy(self):
        """Message field 'vertical_accuracy'."""
        return self._vertical_accuracy

    @vertical_accuracy.setter
    def vertical_accuracy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vertical_accuracy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vertical_accuracy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vertical_accuracy = value

    @builtins.property
    def ecef_pos_x(self):
        """Message field 'ecef_pos_x'."""
        return self._ecef_pos_x

    @ecef_pos_x.setter
    def ecef_pos_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ecef_pos_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ecef_pos_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ecef_pos_x = value

    @builtins.property
    def ecef_pos_y(self):
        """Message field 'ecef_pos_y'."""
        return self._ecef_pos_y

    @ecef_pos_y.setter
    def ecef_pos_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ecef_pos_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ecef_pos_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ecef_pos_y = value

    @builtins.property
    def ecef_pos_z(self):
        """Message field 'ecef_pos_z'."""
        return self._ecef_pos_z

    @ecef_pos_z.setter
    def ecef_pos_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ecef_pos_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ecef_pos_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ecef_pos_z = value

    @builtins.property
    def ecef_pos_accuracy(self):
        """Message field 'ecef_pos_accuracy'."""
        return self._ecef_pos_accuracy

    @ecef_pos_accuracy.setter
    def ecef_pos_accuracy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ecef_pos_accuracy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ecef_pos_accuracy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ecef_pos_accuracy = value

    @builtins.property
    def north_velocity(self):
        """Message field 'north_velocity'."""
        return self._north_velocity

    @north_velocity.setter
    def north_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'north_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'north_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._north_velocity = value

    @builtins.property
    def east_velocity(self):
        """Message field 'east_velocity'."""
        return self._east_velocity

    @east_velocity.setter
    def east_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'east_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'east_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._east_velocity = value

    @builtins.property
    def down_velocity(self):
        """Message field 'down_velocity'."""
        return self._down_velocity

    @down_velocity.setter
    def down_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'down_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'down_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._down_velocity = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed = value

    @builtins.property
    def ground_speed(self):
        """Message field 'ground_speed'."""
        return self._ground_speed

    @ground_speed.setter
    def ground_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ground_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ground_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ground_speed = value

    @builtins.property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading = value

    @builtins.property
    def speed_accuracy(self):
        """Message field 'speed_accuracy'."""
        return self._speed_accuracy

    @speed_accuracy.setter
    def speed_accuracy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_accuracy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed_accuracy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed_accuracy = value

    @builtins.property
    def heading_accuracy(self):
        """Message field 'heading_accuracy'."""
        return self._heading_accuracy

    @heading_accuracy.setter
    def heading_accuracy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_accuracy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading_accuracy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading_accuracy = value

    @builtins.property
    def ecef_vel_x(self):
        """Message field 'ecef_vel_x'."""
        return self._ecef_vel_x

    @ecef_vel_x.setter
    def ecef_vel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ecef_vel_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ecef_vel_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ecef_vel_x = value

    @builtins.property
    def ecef_vel_y(self):
        """Message field 'ecef_vel_y'."""
        return self._ecef_vel_y

    @ecef_vel_y.setter
    def ecef_vel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ecef_vel_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ecef_vel_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ecef_vel_y = value

    @builtins.property
    def ecef_vel_z(self):
        """Message field 'ecef_vel_z'."""
        return self._ecef_vel_z

    @ecef_vel_z.setter
    def ecef_vel_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ecef_vel_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ecef_vel_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ecef_vel_z = value

    @builtins.property
    def ecef_vel_accuracy(self):
        """Message field 'ecef_vel_accuracy'."""
        return self._ecef_vel_accuracy

    @ecef_vel_accuracy.setter
    def ecef_vel_accuracy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ecef_vel_accuracy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ecef_vel_accuracy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ecef_vel_accuracy = value

    @builtins.property
    def geometric_dop(self):
        """Message field 'geometric_dop'."""
        return self._geometric_dop

    @geometric_dop.setter
    def geometric_dop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'geometric_dop' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'geometric_dop' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._geometric_dop = value

    @builtins.property
    def position_dop(self):
        """Message field 'position_dop'."""
        return self._position_dop

    @position_dop.setter
    def position_dop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_dop' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'position_dop' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._position_dop = value

    @builtins.property
    def horizontal_dop(self):
        """Message field 'horizontal_dop'."""
        return self._horizontal_dop

    @horizontal_dop.setter
    def horizontal_dop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'horizontal_dop' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'horizontal_dop' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._horizontal_dop = value

    @builtins.property
    def vertical_dop(self):
        """Message field 'vertical_dop'."""
        return self._vertical_dop

    @vertical_dop.setter
    def vertical_dop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vertical_dop' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vertical_dop' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vertical_dop = value

    @builtins.property
    def time_dop(self):
        """Message field 'time_dop'."""
        return self._time_dop

    @time_dop.setter
    def time_dop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_dop' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time_dop' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time_dop = value

    @builtins.property
    def northing_dop(self):
        """Message field 'northing_dop'."""
        return self._northing_dop

    @northing_dop.setter
    def northing_dop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'northing_dop' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'northing_dop' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._northing_dop = value

    @builtins.property
    def easting_dop(self):
        """Message field 'easting_dop'."""
        return self._easting_dop

    @easting_dop.setter
    def easting_dop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'easting_dop' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'easting_dop' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._easting_dop = value

    @builtins.property
    def utc_timestamp(self):
        """Message field 'utc_timestamp'."""
        return self._utc_timestamp

    @utc_timestamp.setter
    def utc_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'utc_timestamp' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'utc_timestamp' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._utc_timestamp = value

    @builtins.property
    def utc_timestamp_flags(self):
        """Message field 'utc_timestamp_flags'."""
        return self._utc_timestamp_flags

    @utc_timestamp_flags.setter
    def utc_timestamp_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'utc_timestamp_flags' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'utc_timestamp_flags' field must be an integer in [-2147483648, 2147483647]"
        self._utc_timestamp_flags = value

    @builtins.property
    def gps_time_tow(self):
        """Message field 'gps_time_tow'."""
        return self._gps_time_tow

    @gps_time_tow.setter
    def gps_time_tow(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gps_time_tow' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gps_time_tow' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gps_time_tow = value

    @builtins.property
    def gps_time_week_num(self):
        """Message field 'gps_time_week_num'."""
        return self._gps_time_week_num

    @gps_time_week_num.setter
    def gps_time_week_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gps_time_week_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gps_time_week_num' field must be an integer in [-2147483648, 2147483647]"
        self._gps_time_week_num = value

    @builtins.property
    def gps_clock_bias(self):
        """Message field 'gps_clock_bias'."""
        return self._gps_clock_bias

    @gps_clock_bias.setter
    def gps_clock_bias(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gps_clock_bias' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gps_clock_bias' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gps_clock_bias = value

    @builtins.property
    def gps_clock_drift(self):
        """Message field 'gps_clock_drift'."""
        return self._gps_clock_drift

    @gps_clock_drift.setter
    def gps_clock_drift(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gps_clock_drift' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gps_clock_drift' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gps_clock_drift = value

    @builtins.property
    def gps_clock_accuracy(self):
        """Message field 'gps_clock_accuracy'."""
        return self._gps_clock_accuracy

    @gps_clock_accuracy.setter
    def gps_clock_accuracy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gps_clock_accuracy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gps_clock_accuracy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gps_clock_accuracy = value

    @builtins.property
    def gnss_fix_type(self):
        """Message field 'gnss_fix_type'."""
        return self._gnss_fix_type

    @gnss_fix_type.setter
    def gnss_fix_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gnss_fix_type' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'gnss_fix_type' field must be an integer in [-32768, 32767]"
        self._gnss_fix_type = value

    @builtins.property
    def gnss_fix_sv_count(self):
        """Message field 'gnss_fix_sv_count'."""
        return self._gnss_fix_sv_count

    @gnss_fix_sv_count.setter
    def gnss_fix_sv_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gnss_fix_sv_count' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'gnss_fix_sv_count' field must be an integer in [-32768, 32767]"
        self._gnss_fix_sv_count = value

    @builtins.property
    def gnss_fix_flags(self):
        """Message field 'gnss_fix_flags'."""
        return self._gnss_fix_flags

    @gnss_fix_flags.setter
    def gnss_fix_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gnss_fix_flags' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gnss_fix_flags' field must be an integer in [-2147483648, 2147483647]"
        self._gnss_fix_flags = value

    @builtins.property
    def sensor_state(self):
        """Message field 'sensor_state'."""
        return self._sensor_state

    @sensor_state.setter
    def sensor_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor_state' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'sensor_state' field must be an integer in [-32768, 32767]"
        self._sensor_state = value

    @builtins.property
    def antenna_state(self):
        """Message field 'antenna_state'."""
        return self._antenna_state

    @antenna_state.setter
    def antenna_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'antenna_state' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'antenna_state' field must be an integer in [-32768, 32767]"
        self._antenna_state = value

    @builtins.property
    def antenna_power(self):
        """Message field 'antenna_power'."""
        return self._antenna_power

    @antenna_power.setter
    def antenna_power(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'antenna_power' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'antenna_power' field must be an integer in [-32768, 32767]"
        self._antenna_power = value

    @builtins.property
    def dgnss_newest_age_gnss_base_0(self):
        """Message field 'dgnss_newest_age_gnss_base_0'."""
        return self._dgnss_newest_age_gnss_base_0

    @dgnss_newest_age_gnss_base_0.setter
    def dgnss_newest_age_gnss_base_0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dgnss_newest_age_gnss_base_0' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dgnss_newest_age_gnss_base_0' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dgnss_newest_age_gnss_base_0 = value

    @builtins.property
    def dgnss_base_station_status_gnss_base_0(self):
        """Message field 'dgnss_base_station_status_gnss_base_0'."""
        return self._dgnss_base_station_status_gnss_base_0

    @dgnss_base_station_status_gnss_base_0.setter
    def dgnss_base_station_status_gnss_base_0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dgnss_base_station_status_gnss_base_0' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'dgnss_base_station_status_gnss_base_0' field must be an integer in [-32768, 32767]"
        self._dgnss_base_station_status_gnss_base_0 = value

    @builtins.property
    def dgnss_num_channels_gnss_base_0(self):
        """Message field 'dgnss_num_channels_gnss_base_0'."""
        return self._dgnss_num_channels_gnss_base_0

    @dgnss_num_channels_gnss_base_0.setter
    def dgnss_num_channels_gnss_base_0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dgnss_num_channels_gnss_base_0' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'dgnss_num_channels_gnss_base_0' field must be an integer in [-2147483648, 2147483647]"
        self._dgnss_num_channels_gnss_base_0 = value
