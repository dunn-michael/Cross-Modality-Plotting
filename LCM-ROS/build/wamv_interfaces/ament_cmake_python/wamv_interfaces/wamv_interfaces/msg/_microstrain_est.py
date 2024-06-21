# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wamv_interfaces:msg/MicrostrainEst.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'est_orient_quaternion'
# Member 'est_orient_matrix'
# Member 'est_attitude_uncert_quaternion'
# Member 'est_mag_auto_soft_iron_matrix'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MicrostrainEst(type):
    """Metaclass of message 'MicrostrainEst'."""

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
                'wamv_interfaces.msg.MicrostrainEst')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__microstrain_est
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__microstrain_est
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__microstrain_est
            cls._TYPE_SUPPORT = module.type_support_msg__msg__microstrain_est
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__microstrain_est

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MicrostrainEst(metaclass=Metaclass_MicrostrainEst):
    """Message class 'MicrostrainEst'."""

    __slots__ = [
        '_timestamp',
        '_est_latitude',
        '_est_longitude',
        '_est_height_above_ellipsoid',
        '_est_north_velocity',
        '_est_east_velocity',
        '_est_down_velocity',
        '_est_orient_quaternion',
        '_est_orient_matrix',
        '_est_roll',
        '_est_pitch',
        '_est_yaw',
        '_est_gyro_bias_x',
        '_est_gyro_bias_y',
        '_est_gyro_bias_z',
        '_est_accel_bias_x',
        '_est_accel_bias_y',
        '_est_accel_bias_z',
        '_est_north_position_uncert',
        '_est_east_position_uncert',
        '_est_down_position_uncert',
        '_est_north_velocity_uncert',
        '_est_east_velocity_uncert',
        '_est_down_velocity_uncert',
        '_est_roll_uncert',
        '_est_pitch_uncert',
        '_est_yaw_uncert',
        '_est_gyro_bias_x_uncert',
        '_est_gyro_bias_y_uncert',
        '_est_gyro_bias_z_uncert',
        '_est_accel_bias_x_uncert',
        '_est_accel_bias_y_uncert',
        '_est_accel_bias_z_uncert',
        '_est_linear_accel_x',
        '_est_linear_accel_y',
        '_est_linear_accel_z',
        '_est_angular_rate_x',
        '_est_angular_rate_y',
        '_est_angular_rate_z',
        '_est_wgs84_local_grav_magnitude',
        '_est_filter_state',
        '_est_filter_dynamics_mode',
        '_est_filter_status_flags',
        '_est_filter_gps_time_tow',
        '_est_filter_gps_time_week_num',
        '_est_attitude_uncert_quaternion',
        '_est_gravity_vector_x',
        '_est_gravity_vector_y',
        '_est_gravity_vector_z',
        '_est_heading',
        '_est_heading_uncert',
        '_est_heading_source',
        '_est_magnetic_model_sln_north',
        '_est_magnetic_model_sln_east',
        '_est_magnetic_model_sln_down',
        '_est_magnetic_model_sln_inclination',
        '_est_magnetic_model_sln_declination',
        '_est_gyro_scale_factor_x',
        '_est_gyro_scale_factor_y',
        '_est_gyro_scale_factor_z',
        '_est_accel_scale_factor_x',
        '_est_accel_scale_factor_y',
        '_est_accel_scale_factor_z',
        '_est_gyro_scale_factor_x_uncert',
        '_est_gyro_scale_factor_y_uncert',
        '_est_gyro_scale_factor_z_uncert',
        '_est_accel_scale_factor_x_uncert',
        '_est_accel_scale_factor_y_uncert',
        '_est_accel_scale_factor_z_uncert',
        '_est_compensated_accel_x',
        '_est_compensated_accel_y',
        '_est_compensated_accel_z',
        '_est_std_atm_model_geometric_alt',
        '_est_std_atm_model_geopotential_alt',
        '_est_std_atm_model_temperature',
        '_est_std_atm_model_pressure',
        '_est_std_atm_model_density',
        '_est_pressure_alt',
        '_est_mag_auto_hard_iron_offset_x',
        '_est_mag_auto_hard_iron_offset_y',
        '_est_mag_auto_hard_iron_offset_z',
        '_est_mag_auto_soft_iron_matrix',
    ]

    _fields_and_field_types = {
        'timestamp': 'int64',
        'est_latitude': 'double',
        'est_longitude': 'double',
        'est_height_above_ellipsoid': 'double',
        'est_north_velocity': 'float',
        'est_east_velocity': 'float',
        'est_down_velocity': 'float',
        'est_orient_quaternion': 'float[3]',
        'est_orient_matrix': 'float[9]',
        'est_roll': 'float',
        'est_pitch': 'float',
        'est_yaw': 'float',
        'est_gyro_bias_x': 'float',
        'est_gyro_bias_y': 'float',
        'est_gyro_bias_z': 'float',
        'est_accel_bias_x': 'float',
        'est_accel_bias_y': 'float',
        'est_accel_bias_z': 'float',
        'est_north_position_uncert': 'float',
        'est_east_position_uncert': 'float',
        'est_down_position_uncert': 'float',
        'est_north_velocity_uncert': 'float',
        'est_east_velocity_uncert': 'float',
        'est_down_velocity_uncert': 'float',
        'est_roll_uncert': 'float',
        'est_pitch_uncert': 'float',
        'est_yaw_uncert': 'float',
        'est_gyro_bias_x_uncert': 'float',
        'est_gyro_bias_y_uncert': 'float',
        'est_gyro_bias_z_uncert': 'float',
        'est_accel_bias_x_uncert': 'float',
        'est_accel_bias_y_uncert': 'float',
        'est_accel_bias_z_uncert': 'float',
        'est_linear_accel_x': 'float',
        'est_linear_accel_y': 'float',
        'est_linear_accel_z': 'float',
        'est_angular_rate_x': 'float',
        'est_angular_rate_y': 'float',
        'est_angular_rate_z': 'float',
        'est_wgs84_local_grav_magnitude': 'float',
        'est_filter_state': 'int32',
        'est_filter_dynamics_mode': 'int32',
        'est_filter_status_flags': 'int32',
        'est_filter_gps_time_tow': 'double',
        'est_filter_gps_time_week_num': 'int32',
        'est_attitude_uncert_quaternion': 'float[3]',
        'est_gravity_vector_x': 'float',
        'est_gravity_vector_y': 'float',
        'est_gravity_vector_z': 'float',
        'est_heading': 'float',
        'est_heading_uncert': 'float',
        'est_heading_source': 'int32',
        'est_magnetic_model_sln_north': 'float',
        'est_magnetic_model_sln_east': 'float',
        'est_magnetic_model_sln_down': 'float',
        'est_magnetic_model_sln_inclination': 'float',
        'est_magnetic_model_sln_declination': 'float',
        'est_gyro_scale_factor_x': 'float',
        'est_gyro_scale_factor_y': 'float',
        'est_gyro_scale_factor_z': 'float',
        'est_accel_scale_factor_x': 'float',
        'est_accel_scale_factor_y': 'float',
        'est_accel_scale_factor_z': 'float',
        'est_gyro_scale_factor_x_uncert': 'float',
        'est_gyro_scale_factor_y_uncert': 'float',
        'est_gyro_scale_factor_z_uncert': 'float',
        'est_accel_scale_factor_x_uncert': 'float',
        'est_accel_scale_factor_y_uncert': 'float',
        'est_accel_scale_factor_z_uncert': 'float',
        'est_compensated_accel_x': 'float',
        'est_compensated_accel_y': 'float',
        'est_compensated_accel_z': 'float',
        'est_std_atm_model_geometric_alt': 'float',
        'est_std_atm_model_geopotential_alt': 'float',
        'est_std_atm_model_temperature': 'float',
        'est_std_atm_model_pressure': 'float',
        'est_std_atm_model_density': 'float',
        'est_pressure_alt': 'float',
        'est_mag_auto_hard_iron_offset_x': 'float',
        'est_mag_auto_hard_iron_offset_y': 'float',
        'est_mag_auto_hard_iron_offset_z': 'float',
        'est_mag_auto_soft_iron_matrix': 'float[9]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 9),  # noqa: E501
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
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.est_latitude = kwargs.get('est_latitude', float())
        self.est_longitude = kwargs.get('est_longitude', float())
        self.est_height_above_ellipsoid = kwargs.get('est_height_above_ellipsoid', float())
        self.est_north_velocity = kwargs.get('est_north_velocity', float())
        self.est_east_velocity = kwargs.get('est_east_velocity', float())
        self.est_down_velocity = kwargs.get('est_down_velocity', float())
        if 'est_orient_quaternion' not in kwargs:
            self.est_orient_quaternion = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.est_orient_quaternion = numpy.array(kwargs.get('est_orient_quaternion'), dtype=numpy.float32)
            assert self.est_orient_quaternion.shape == (3, )
        if 'est_orient_matrix' not in kwargs:
            self.est_orient_matrix = numpy.zeros(9, dtype=numpy.float32)
        else:
            self.est_orient_matrix = numpy.array(kwargs.get('est_orient_matrix'), dtype=numpy.float32)
            assert self.est_orient_matrix.shape == (9, )
        self.est_roll = kwargs.get('est_roll', float())
        self.est_pitch = kwargs.get('est_pitch', float())
        self.est_yaw = kwargs.get('est_yaw', float())
        self.est_gyro_bias_x = kwargs.get('est_gyro_bias_x', float())
        self.est_gyro_bias_y = kwargs.get('est_gyro_bias_y', float())
        self.est_gyro_bias_z = kwargs.get('est_gyro_bias_z', float())
        self.est_accel_bias_x = kwargs.get('est_accel_bias_x', float())
        self.est_accel_bias_y = kwargs.get('est_accel_bias_y', float())
        self.est_accel_bias_z = kwargs.get('est_accel_bias_z', float())
        self.est_north_position_uncert = kwargs.get('est_north_position_uncert', float())
        self.est_east_position_uncert = kwargs.get('est_east_position_uncert', float())
        self.est_down_position_uncert = kwargs.get('est_down_position_uncert', float())
        self.est_north_velocity_uncert = kwargs.get('est_north_velocity_uncert', float())
        self.est_east_velocity_uncert = kwargs.get('est_east_velocity_uncert', float())
        self.est_down_velocity_uncert = kwargs.get('est_down_velocity_uncert', float())
        self.est_roll_uncert = kwargs.get('est_roll_uncert', float())
        self.est_pitch_uncert = kwargs.get('est_pitch_uncert', float())
        self.est_yaw_uncert = kwargs.get('est_yaw_uncert', float())
        self.est_gyro_bias_x_uncert = kwargs.get('est_gyro_bias_x_uncert', float())
        self.est_gyro_bias_y_uncert = kwargs.get('est_gyro_bias_y_uncert', float())
        self.est_gyro_bias_z_uncert = kwargs.get('est_gyro_bias_z_uncert', float())
        self.est_accel_bias_x_uncert = kwargs.get('est_accel_bias_x_uncert', float())
        self.est_accel_bias_y_uncert = kwargs.get('est_accel_bias_y_uncert', float())
        self.est_accel_bias_z_uncert = kwargs.get('est_accel_bias_z_uncert', float())
        self.est_linear_accel_x = kwargs.get('est_linear_accel_x', float())
        self.est_linear_accel_y = kwargs.get('est_linear_accel_y', float())
        self.est_linear_accel_z = kwargs.get('est_linear_accel_z', float())
        self.est_angular_rate_x = kwargs.get('est_angular_rate_x', float())
        self.est_angular_rate_y = kwargs.get('est_angular_rate_y', float())
        self.est_angular_rate_z = kwargs.get('est_angular_rate_z', float())
        self.est_wgs84_local_grav_magnitude = kwargs.get('est_wgs84_local_grav_magnitude', float())
        self.est_filter_state = kwargs.get('est_filter_state', int())
        self.est_filter_dynamics_mode = kwargs.get('est_filter_dynamics_mode', int())
        self.est_filter_status_flags = kwargs.get('est_filter_status_flags', int())
        self.est_filter_gps_time_tow = kwargs.get('est_filter_gps_time_tow', float())
        self.est_filter_gps_time_week_num = kwargs.get('est_filter_gps_time_week_num', int())
        if 'est_attitude_uncert_quaternion' not in kwargs:
            self.est_attitude_uncert_quaternion = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.est_attitude_uncert_quaternion = numpy.array(kwargs.get('est_attitude_uncert_quaternion'), dtype=numpy.float32)
            assert self.est_attitude_uncert_quaternion.shape == (3, )
        self.est_gravity_vector_x = kwargs.get('est_gravity_vector_x', float())
        self.est_gravity_vector_y = kwargs.get('est_gravity_vector_y', float())
        self.est_gravity_vector_z = kwargs.get('est_gravity_vector_z', float())
        self.est_heading = kwargs.get('est_heading', float())
        self.est_heading_uncert = kwargs.get('est_heading_uncert', float())
        self.est_heading_source = kwargs.get('est_heading_source', int())
        self.est_magnetic_model_sln_north = kwargs.get('est_magnetic_model_sln_north', float())
        self.est_magnetic_model_sln_east = kwargs.get('est_magnetic_model_sln_east', float())
        self.est_magnetic_model_sln_down = kwargs.get('est_magnetic_model_sln_down', float())
        self.est_magnetic_model_sln_inclination = kwargs.get('est_magnetic_model_sln_inclination', float())
        self.est_magnetic_model_sln_declination = kwargs.get('est_magnetic_model_sln_declination', float())
        self.est_gyro_scale_factor_x = kwargs.get('est_gyro_scale_factor_x', float())
        self.est_gyro_scale_factor_y = kwargs.get('est_gyro_scale_factor_y', float())
        self.est_gyro_scale_factor_z = kwargs.get('est_gyro_scale_factor_z', float())
        self.est_accel_scale_factor_x = kwargs.get('est_accel_scale_factor_x', float())
        self.est_accel_scale_factor_y = kwargs.get('est_accel_scale_factor_y', float())
        self.est_accel_scale_factor_z = kwargs.get('est_accel_scale_factor_z', float())
        self.est_gyro_scale_factor_x_uncert = kwargs.get('est_gyro_scale_factor_x_uncert', float())
        self.est_gyro_scale_factor_y_uncert = kwargs.get('est_gyro_scale_factor_y_uncert', float())
        self.est_gyro_scale_factor_z_uncert = kwargs.get('est_gyro_scale_factor_z_uncert', float())
        self.est_accel_scale_factor_x_uncert = kwargs.get('est_accel_scale_factor_x_uncert', float())
        self.est_accel_scale_factor_y_uncert = kwargs.get('est_accel_scale_factor_y_uncert', float())
        self.est_accel_scale_factor_z_uncert = kwargs.get('est_accel_scale_factor_z_uncert', float())
        self.est_compensated_accel_x = kwargs.get('est_compensated_accel_x', float())
        self.est_compensated_accel_y = kwargs.get('est_compensated_accel_y', float())
        self.est_compensated_accel_z = kwargs.get('est_compensated_accel_z', float())
        self.est_std_atm_model_geometric_alt = kwargs.get('est_std_atm_model_geometric_alt', float())
        self.est_std_atm_model_geopotential_alt = kwargs.get('est_std_atm_model_geopotential_alt', float())
        self.est_std_atm_model_temperature = kwargs.get('est_std_atm_model_temperature', float())
        self.est_std_atm_model_pressure = kwargs.get('est_std_atm_model_pressure', float())
        self.est_std_atm_model_density = kwargs.get('est_std_atm_model_density', float())
        self.est_pressure_alt = kwargs.get('est_pressure_alt', float())
        self.est_mag_auto_hard_iron_offset_x = kwargs.get('est_mag_auto_hard_iron_offset_x', float())
        self.est_mag_auto_hard_iron_offset_y = kwargs.get('est_mag_auto_hard_iron_offset_y', float())
        self.est_mag_auto_hard_iron_offset_z = kwargs.get('est_mag_auto_hard_iron_offset_z', float())
        if 'est_mag_auto_soft_iron_matrix' not in kwargs:
            self.est_mag_auto_soft_iron_matrix = numpy.zeros(9, dtype=numpy.float32)
        else:
            self.est_mag_auto_soft_iron_matrix = numpy.array(kwargs.get('est_mag_auto_soft_iron_matrix'), dtype=numpy.float32)
            assert self.est_mag_auto_soft_iron_matrix.shape == (9, )

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
        if self.est_latitude != other.est_latitude:
            return False
        if self.est_longitude != other.est_longitude:
            return False
        if self.est_height_above_ellipsoid != other.est_height_above_ellipsoid:
            return False
        if self.est_north_velocity != other.est_north_velocity:
            return False
        if self.est_east_velocity != other.est_east_velocity:
            return False
        if self.est_down_velocity != other.est_down_velocity:
            return False
        if all(self.est_orient_quaternion != other.est_orient_quaternion):
            return False
        if all(self.est_orient_matrix != other.est_orient_matrix):
            return False
        if self.est_roll != other.est_roll:
            return False
        if self.est_pitch != other.est_pitch:
            return False
        if self.est_yaw != other.est_yaw:
            return False
        if self.est_gyro_bias_x != other.est_gyro_bias_x:
            return False
        if self.est_gyro_bias_y != other.est_gyro_bias_y:
            return False
        if self.est_gyro_bias_z != other.est_gyro_bias_z:
            return False
        if self.est_accel_bias_x != other.est_accel_bias_x:
            return False
        if self.est_accel_bias_y != other.est_accel_bias_y:
            return False
        if self.est_accel_bias_z != other.est_accel_bias_z:
            return False
        if self.est_north_position_uncert != other.est_north_position_uncert:
            return False
        if self.est_east_position_uncert != other.est_east_position_uncert:
            return False
        if self.est_down_position_uncert != other.est_down_position_uncert:
            return False
        if self.est_north_velocity_uncert != other.est_north_velocity_uncert:
            return False
        if self.est_east_velocity_uncert != other.est_east_velocity_uncert:
            return False
        if self.est_down_velocity_uncert != other.est_down_velocity_uncert:
            return False
        if self.est_roll_uncert != other.est_roll_uncert:
            return False
        if self.est_pitch_uncert != other.est_pitch_uncert:
            return False
        if self.est_yaw_uncert != other.est_yaw_uncert:
            return False
        if self.est_gyro_bias_x_uncert != other.est_gyro_bias_x_uncert:
            return False
        if self.est_gyro_bias_y_uncert != other.est_gyro_bias_y_uncert:
            return False
        if self.est_gyro_bias_z_uncert != other.est_gyro_bias_z_uncert:
            return False
        if self.est_accel_bias_x_uncert != other.est_accel_bias_x_uncert:
            return False
        if self.est_accel_bias_y_uncert != other.est_accel_bias_y_uncert:
            return False
        if self.est_accel_bias_z_uncert != other.est_accel_bias_z_uncert:
            return False
        if self.est_linear_accel_x != other.est_linear_accel_x:
            return False
        if self.est_linear_accel_y != other.est_linear_accel_y:
            return False
        if self.est_linear_accel_z != other.est_linear_accel_z:
            return False
        if self.est_angular_rate_x != other.est_angular_rate_x:
            return False
        if self.est_angular_rate_y != other.est_angular_rate_y:
            return False
        if self.est_angular_rate_z != other.est_angular_rate_z:
            return False
        if self.est_wgs84_local_grav_magnitude != other.est_wgs84_local_grav_magnitude:
            return False
        if self.est_filter_state != other.est_filter_state:
            return False
        if self.est_filter_dynamics_mode != other.est_filter_dynamics_mode:
            return False
        if self.est_filter_status_flags != other.est_filter_status_flags:
            return False
        if self.est_filter_gps_time_tow != other.est_filter_gps_time_tow:
            return False
        if self.est_filter_gps_time_week_num != other.est_filter_gps_time_week_num:
            return False
        if all(self.est_attitude_uncert_quaternion != other.est_attitude_uncert_quaternion):
            return False
        if self.est_gravity_vector_x != other.est_gravity_vector_x:
            return False
        if self.est_gravity_vector_y != other.est_gravity_vector_y:
            return False
        if self.est_gravity_vector_z != other.est_gravity_vector_z:
            return False
        if self.est_heading != other.est_heading:
            return False
        if self.est_heading_uncert != other.est_heading_uncert:
            return False
        if self.est_heading_source != other.est_heading_source:
            return False
        if self.est_magnetic_model_sln_north != other.est_magnetic_model_sln_north:
            return False
        if self.est_magnetic_model_sln_east != other.est_magnetic_model_sln_east:
            return False
        if self.est_magnetic_model_sln_down != other.est_magnetic_model_sln_down:
            return False
        if self.est_magnetic_model_sln_inclination != other.est_magnetic_model_sln_inclination:
            return False
        if self.est_magnetic_model_sln_declination != other.est_magnetic_model_sln_declination:
            return False
        if self.est_gyro_scale_factor_x != other.est_gyro_scale_factor_x:
            return False
        if self.est_gyro_scale_factor_y != other.est_gyro_scale_factor_y:
            return False
        if self.est_gyro_scale_factor_z != other.est_gyro_scale_factor_z:
            return False
        if self.est_accel_scale_factor_x != other.est_accel_scale_factor_x:
            return False
        if self.est_accel_scale_factor_y != other.est_accel_scale_factor_y:
            return False
        if self.est_accel_scale_factor_z != other.est_accel_scale_factor_z:
            return False
        if self.est_gyro_scale_factor_x_uncert != other.est_gyro_scale_factor_x_uncert:
            return False
        if self.est_gyro_scale_factor_y_uncert != other.est_gyro_scale_factor_y_uncert:
            return False
        if self.est_gyro_scale_factor_z_uncert != other.est_gyro_scale_factor_z_uncert:
            return False
        if self.est_accel_scale_factor_x_uncert != other.est_accel_scale_factor_x_uncert:
            return False
        if self.est_accel_scale_factor_y_uncert != other.est_accel_scale_factor_y_uncert:
            return False
        if self.est_accel_scale_factor_z_uncert != other.est_accel_scale_factor_z_uncert:
            return False
        if self.est_compensated_accel_x != other.est_compensated_accel_x:
            return False
        if self.est_compensated_accel_y != other.est_compensated_accel_y:
            return False
        if self.est_compensated_accel_z != other.est_compensated_accel_z:
            return False
        if self.est_std_atm_model_geometric_alt != other.est_std_atm_model_geometric_alt:
            return False
        if self.est_std_atm_model_geopotential_alt != other.est_std_atm_model_geopotential_alt:
            return False
        if self.est_std_atm_model_temperature != other.est_std_atm_model_temperature:
            return False
        if self.est_std_atm_model_pressure != other.est_std_atm_model_pressure:
            return False
        if self.est_std_atm_model_density != other.est_std_atm_model_density:
            return False
        if self.est_pressure_alt != other.est_pressure_alt:
            return False
        if self.est_mag_auto_hard_iron_offset_x != other.est_mag_auto_hard_iron_offset_x:
            return False
        if self.est_mag_auto_hard_iron_offset_y != other.est_mag_auto_hard_iron_offset_y:
            return False
        if self.est_mag_auto_hard_iron_offset_z != other.est_mag_auto_hard_iron_offset_z:
            return False
        if all(self.est_mag_auto_soft_iron_matrix != other.est_mag_auto_soft_iron_matrix):
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
    def est_latitude(self):
        """Message field 'est_latitude'."""
        return self._est_latitude

    @est_latitude.setter
    def est_latitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'est_latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._est_latitude = value

    @builtins.property
    def est_longitude(self):
        """Message field 'est_longitude'."""
        return self._est_longitude

    @est_longitude.setter
    def est_longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_longitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'est_longitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._est_longitude = value

    @builtins.property
    def est_height_above_ellipsoid(self):
        """Message field 'est_height_above_ellipsoid'."""
        return self._est_height_above_ellipsoid

    @est_height_above_ellipsoid.setter
    def est_height_above_ellipsoid(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_height_above_ellipsoid' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'est_height_above_ellipsoid' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._est_height_above_ellipsoid = value

    @builtins.property
    def est_north_velocity(self):
        """Message field 'est_north_velocity'."""
        return self._est_north_velocity

    @est_north_velocity.setter
    def est_north_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_north_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_north_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_north_velocity = value

    @builtins.property
    def est_east_velocity(self):
        """Message field 'est_east_velocity'."""
        return self._est_east_velocity

    @est_east_velocity.setter
    def est_east_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_east_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_east_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_east_velocity = value

    @builtins.property
    def est_down_velocity(self):
        """Message field 'est_down_velocity'."""
        return self._est_down_velocity

    @est_down_velocity.setter
    def est_down_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_down_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_down_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_down_velocity = value

    @builtins.property
    def est_orient_quaternion(self):
        """Message field 'est_orient_quaternion'."""
        return self._est_orient_quaternion

    @est_orient_quaternion.setter
    def est_orient_quaternion(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'est_orient_quaternion' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'est_orient_quaternion' numpy.ndarray() must have a size of 3"
            self._est_orient_quaternion = value
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
                "The 'est_orient_quaternion' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._est_orient_quaternion = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def est_orient_matrix(self):
        """Message field 'est_orient_matrix'."""
        return self._est_orient_matrix

    @est_orient_matrix.setter
    def est_orient_matrix(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'est_orient_matrix' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 9, \
                "The 'est_orient_matrix' numpy.ndarray() must have a size of 9"
            self._est_orient_matrix = value
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
                "The 'est_orient_matrix' field must be a set or sequence with length 9 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._est_orient_matrix = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def est_roll(self):
        """Message field 'est_roll'."""
        return self._est_roll

    @est_roll.setter
    def est_roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_roll' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_roll' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_roll = value

    @builtins.property
    def est_pitch(self):
        """Message field 'est_pitch'."""
        return self._est_pitch

    @est_pitch.setter
    def est_pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_pitch = value

    @builtins.property
    def est_yaw(self):
        """Message field 'est_yaw'."""
        return self._est_yaw

    @est_yaw.setter
    def est_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_yaw = value

    @builtins.property
    def est_gyro_bias_x(self):
        """Message field 'est_gyro_bias_x'."""
        return self._est_gyro_bias_x

    @est_gyro_bias_x.setter
    def est_gyro_bias_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_gyro_bias_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_gyro_bias_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_gyro_bias_x = value

    @builtins.property
    def est_gyro_bias_y(self):
        """Message field 'est_gyro_bias_y'."""
        return self._est_gyro_bias_y

    @est_gyro_bias_y.setter
    def est_gyro_bias_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_gyro_bias_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_gyro_bias_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_gyro_bias_y = value

    @builtins.property
    def est_gyro_bias_z(self):
        """Message field 'est_gyro_bias_z'."""
        return self._est_gyro_bias_z

    @est_gyro_bias_z.setter
    def est_gyro_bias_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_gyro_bias_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_gyro_bias_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_gyro_bias_z = value

    @builtins.property
    def est_accel_bias_x(self):
        """Message field 'est_accel_bias_x'."""
        return self._est_accel_bias_x

    @est_accel_bias_x.setter
    def est_accel_bias_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_accel_bias_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_accel_bias_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_accel_bias_x = value

    @builtins.property
    def est_accel_bias_y(self):
        """Message field 'est_accel_bias_y'."""
        return self._est_accel_bias_y

    @est_accel_bias_y.setter
    def est_accel_bias_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_accel_bias_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_accel_bias_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_accel_bias_y = value

    @builtins.property
    def est_accel_bias_z(self):
        """Message field 'est_accel_bias_z'."""
        return self._est_accel_bias_z

    @est_accel_bias_z.setter
    def est_accel_bias_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_accel_bias_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_accel_bias_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_accel_bias_z = value

    @builtins.property
    def est_north_position_uncert(self):
        """Message field 'est_north_position_uncert'."""
        return self._est_north_position_uncert

    @est_north_position_uncert.setter
    def est_north_position_uncert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_north_position_uncert' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_north_position_uncert' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_north_position_uncert = value

    @builtins.property
    def est_east_position_uncert(self):
        """Message field 'est_east_position_uncert'."""
        return self._est_east_position_uncert

    @est_east_position_uncert.setter
    def est_east_position_uncert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_east_position_uncert' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_east_position_uncert' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_east_position_uncert = value

    @builtins.property
    def est_down_position_uncert(self):
        """Message field 'est_down_position_uncert'."""
        return self._est_down_position_uncert

    @est_down_position_uncert.setter
    def est_down_position_uncert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_down_position_uncert' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_down_position_uncert' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_down_position_uncert = value

    @builtins.property
    def est_north_velocity_uncert(self):
        """Message field 'est_north_velocity_uncert'."""
        return self._est_north_velocity_uncert

    @est_north_velocity_uncert.setter
    def est_north_velocity_uncert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_north_velocity_uncert' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_north_velocity_uncert' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_north_velocity_uncert = value

    @builtins.property
    def est_east_velocity_uncert(self):
        """Message field 'est_east_velocity_uncert'."""
        return self._est_east_velocity_uncert

    @est_east_velocity_uncert.setter
    def est_east_velocity_uncert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_east_velocity_uncert' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_east_velocity_uncert' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_east_velocity_uncert = value

    @builtins.property
    def est_down_velocity_uncert(self):
        """Message field 'est_down_velocity_uncert'."""
        return self._est_down_velocity_uncert

    @est_down_velocity_uncert.setter
    def est_down_velocity_uncert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_down_velocity_uncert' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_down_velocity_uncert' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_down_velocity_uncert = value

    @builtins.property
    def est_roll_uncert(self):
        """Message field 'est_roll_uncert'."""
        return self._est_roll_uncert

    @est_roll_uncert.setter
    def est_roll_uncert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_roll_uncert' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_roll_uncert' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_roll_uncert = value

    @builtins.property
    def est_pitch_uncert(self):
        """Message field 'est_pitch_uncert'."""
        return self._est_pitch_uncert

    @est_pitch_uncert.setter
    def est_pitch_uncert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_pitch_uncert' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_pitch_uncert' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_pitch_uncert = value

    @builtins.property
    def est_yaw_uncert(self):
        """Message field 'est_yaw_uncert'."""
        return self._est_yaw_uncert

    @est_yaw_uncert.setter
    def est_yaw_uncert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_yaw_uncert' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_yaw_uncert' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_yaw_uncert = value

    @builtins.property
    def est_gyro_bias_x_uncert(self):
        """Message field 'est_gyro_bias_x_uncert'."""
        return self._est_gyro_bias_x_uncert

    @est_gyro_bias_x_uncert.setter
    def est_gyro_bias_x_uncert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_gyro_bias_x_uncert' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_gyro_bias_x_uncert' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_gyro_bias_x_uncert = value

    @builtins.property
    def est_gyro_bias_y_uncert(self):
        """Message field 'est_gyro_bias_y_uncert'."""
        return self._est_gyro_bias_y_uncert

    @est_gyro_bias_y_uncert.setter
    def est_gyro_bias_y_uncert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_gyro_bias_y_uncert' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_gyro_bias_y_uncert' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_gyro_bias_y_uncert = value

    @builtins.property
    def est_gyro_bias_z_uncert(self):
        """Message field 'est_gyro_bias_z_uncert'."""
        return self._est_gyro_bias_z_uncert

    @est_gyro_bias_z_uncert.setter
    def est_gyro_bias_z_uncert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_gyro_bias_z_uncert' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_gyro_bias_z_uncert' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_gyro_bias_z_uncert = value

    @builtins.property
    def est_accel_bias_x_uncert(self):
        """Message field 'est_accel_bias_x_uncert'."""
        return self._est_accel_bias_x_uncert

    @est_accel_bias_x_uncert.setter
    def est_accel_bias_x_uncert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_accel_bias_x_uncert' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_accel_bias_x_uncert' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_accel_bias_x_uncert = value

    @builtins.property
    def est_accel_bias_y_uncert(self):
        """Message field 'est_accel_bias_y_uncert'."""
        return self._est_accel_bias_y_uncert

    @est_accel_bias_y_uncert.setter
    def est_accel_bias_y_uncert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_accel_bias_y_uncert' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_accel_bias_y_uncert' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_accel_bias_y_uncert = value

    @builtins.property
    def est_accel_bias_z_uncert(self):
        """Message field 'est_accel_bias_z_uncert'."""
        return self._est_accel_bias_z_uncert

    @est_accel_bias_z_uncert.setter
    def est_accel_bias_z_uncert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_accel_bias_z_uncert' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_accel_bias_z_uncert' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_accel_bias_z_uncert = value

    @builtins.property
    def est_linear_accel_x(self):
        """Message field 'est_linear_accel_x'."""
        return self._est_linear_accel_x

    @est_linear_accel_x.setter
    def est_linear_accel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_linear_accel_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_linear_accel_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_linear_accel_x = value

    @builtins.property
    def est_linear_accel_y(self):
        """Message field 'est_linear_accel_y'."""
        return self._est_linear_accel_y

    @est_linear_accel_y.setter
    def est_linear_accel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_linear_accel_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_linear_accel_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_linear_accel_y = value

    @builtins.property
    def est_linear_accel_z(self):
        """Message field 'est_linear_accel_z'."""
        return self._est_linear_accel_z

    @est_linear_accel_z.setter
    def est_linear_accel_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_linear_accel_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_linear_accel_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_linear_accel_z = value

    @builtins.property
    def est_angular_rate_x(self):
        """Message field 'est_angular_rate_x'."""
        return self._est_angular_rate_x

    @est_angular_rate_x.setter
    def est_angular_rate_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_angular_rate_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_angular_rate_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_angular_rate_x = value

    @builtins.property
    def est_angular_rate_y(self):
        """Message field 'est_angular_rate_y'."""
        return self._est_angular_rate_y

    @est_angular_rate_y.setter
    def est_angular_rate_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_angular_rate_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_angular_rate_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_angular_rate_y = value

    @builtins.property
    def est_angular_rate_z(self):
        """Message field 'est_angular_rate_z'."""
        return self._est_angular_rate_z

    @est_angular_rate_z.setter
    def est_angular_rate_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_angular_rate_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_angular_rate_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_angular_rate_z = value

    @builtins.property
    def est_wgs84_local_grav_magnitude(self):
        """Message field 'est_wgs84_local_grav_magnitude'."""
        return self._est_wgs84_local_grav_magnitude

    @est_wgs84_local_grav_magnitude.setter
    def est_wgs84_local_grav_magnitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_wgs84_local_grav_magnitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_wgs84_local_grav_magnitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_wgs84_local_grav_magnitude = value

    @builtins.property
    def est_filter_state(self):
        """Message field 'est_filter_state'."""
        return self._est_filter_state

    @est_filter_state.setter
    def est_filter_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'est_filter_state' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'est_filter_state' field must be an integer in [-2147483648, 2147483647]"
        self._est_filter_state = value

    @builtins.property
    def est_filter_dynamics_mode(self):
        """Message field 'est_filter_dynamics_mode'."""
        return self._est_filter_dynamics_mode

    @est_filter_dynamics_mode.setter
    def est_filter_dynamics_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'est_filter_dynamics_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'est_filter_dynamics_mode' field must be an integer in [-2147483648, 2147483647]"
        self._est_filter_dynamics_mode = value

    @builtins.property
    def est_filter_status_flags(self):
        """Message field 'est_filter_status_flags'."""
        return self._est_filter_status_flags

    @est_filter_status_flags.setter
    def est_filter_status_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'est_filter_status_flags' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'est_filter_status_flags' field must be an integer in [-2147483648, 2147483647]"
        self._est_filter_status_flags = value

    @builtins.property
    def est_filter_gps_time_tow(self):
        """Message field 'est_filter_gps_time_tow'."""
        return self._est_filter_gps_time_tow

    @est_filter_gps_time_tow.setter
    def est_filter_gps_time_tow(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_filter_gps_time_tow' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'est_filter_gps_time_tow' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._est_filter_gps_time_tow = value

    @builtins.property
    def est_filter_gps_time_week_num(self):
        """Message field 'est_filter_gps_time_week_num'."""
        return self._est_filter_gps_time_week_num

    @est_filter_gps_time_week_num.setter
    def est_filter_gps_time_week_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'est_filter_gps_time_week_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'est_filter_gps_time_week_num' field must be an integer in [-2147483648, 2147483647]"
        self._est_filter_gps_time_week_num = value

    @builtins.property
    def est_attitude_uncert_quaternion(self):
        """Message field 'est_attitude_uncert_quaternion'."""
        return self._est_attitude_uncert_quaternion

    @est_attitude_uncert_quaternion.setter
    def est_attitude_uncert_quaternion(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'est_attitude_uncert_quaternion' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'est_attitude_uncert_quaternion' numpy.ndarray() must have a size of 3"
            self._est_attitude_uncert_quaternion = value
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
                "The 'est_attitude_uncert_quaternion' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._est_attitude_uncert_quaternion = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def est_gravity_vector_x(self):
        """Message field 'est_gravity_vector_x'."""
        return self._est_gravity_vector_x

    @est_gravity_vector_x.setter
    def est_gravity_vector_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_gravity_vector_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_gravity_vector_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_gravity_vector_x = value

    @builtins.property
    def est_gravity_vector_y(self):
        """Message field 'est_gravity_vector_y'."""
        return self._est_gravity_vector_y

    @est_gravity_vector_y.setter
    def est_gravity_vector_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_gravity_vector_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_gravity_vector_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_gravity_vector_y = value

    @builtins.property
    def est_gravity_vector_z(self):
        """Message field 'est_gravity_vector_z'."""
        return self._est_gravity_vector_z

    @est_gravity_vector_z.setter
    def est_gravity_vector_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_gravity_vector_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_gravity_vector_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_gravity_vector_z = value

    @builtins.property
    def est_heading(self):
        """Message field 'est_heading'."""
        return self._est_heading

    @est_heading.setter
    def est_heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_heading' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_heading' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_heading = value

    @builtins.property
    def est_heading_uncert(self):
        """Message field 'est_heading_uncert'."""
        return self._est_heading_uncert

    @est_heading_uncert.setter
    def est_heading_uncert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_heading_uncert' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_heading_uncert' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_heading_uncert = value

    @builtins.property
    def est_heading_source(self):
        """Message field 'est_heading_source'."""
        return self._est_heading_source

    @est_heading_source.setter
    def est_heading_source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'est_heading_source' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'est_heading_source' field must be an integer in [-2147483648, 2147483647]"
        self._est_heading_source = value

    @builtins.property
    def est_magnetic_model_sln_north(self):
        """Message field 'est_magnetic_model_sln_north'."""
        return self._est_magnetic_model_sln_north

    @est_magnetic_model_sln_north.setter
    def est_magnetic_model_sln_north(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_magnetic_model_sln_north' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_magnetic_model_sln_north' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_magnetic_model_sln_north = value

    @builtins.property
    def est_magnetic_model_sln_east(self):
        """Message field 'est_magnetic_model_sln_east'."""
        return self._est_magnetic_model_sln_east

    @est_magnetic_model_sln_east.setter
    def est_magnetic_model_sln_east(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_magnetic_model_sln_east' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_magnetic_model_sln_east' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_magnetic_model_sln_east = value

    @builtins.property
    def est_magnetic_model_sln_down(self):
        """Message field 'est_magnetic_model_sln_down'."""
        return self._est_magnetic_model_sln_down

    @est_magnetic_model_sln_down.setter
    def est_magnetic_model_sln_down(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_magnetic_model_sln_down' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_magnetic_model_sln_down' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_magnetic_model_sln_down = value

    @builtins.property
    def est_magnetic_model_sln_inclination(self):
        """Message field 'est_magnetic_model_sln_inclination'."""
        return self._est_magnetic_model_sln_inclination

    @est_magnetic_model_sln_inclination.setter
    def est_magnetic_model_sln_inclination(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_magnetic_model_sln_inclination' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_magnetic_model_sln_inclination' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_magnetic_model_sln_inclination = value

    @builtins.property
    def est_magnetic_model_sln_declination(self):
        """Message field 'est_magnetic_model_sln_declination'."""
        return self._est_magnetic_model_sln_declination

    @est_magnetic_model_sln_declination.setter
    def est_magnetic_model_sln_declination(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_magnetic_model_sln_declination' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_magnetic_model_sln_declination' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_magnetic_model_sln_declination = value

    @builtins.property
    def est_gyro_scale_factor_x(self):
        """Message field 'est_gyro_scale_factor_x'."""
        return self._est_gyro_scale_factor_x

    @est_gyro_scale_factor_x.setter
    def est_gyro_scale_factor_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_gyro_scale_factor_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_gyro_scale_factor_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_gyro_scale_factor_x = value

    @builtins.property
    def est_gyro_scale_factor_y(self):
        """Message field 'est_gyro_scale_factor_y'."""
        return self._est_gyro_scale_factor_y

    @est_gyro_scale_factor_y.setter
    def est_gyro_scale_factor_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_gyro_scale_factor_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_gyro_scale_factor_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_gyro_scale_factor_y = value

    @builtins.property
    def est_gyro_scale_factor_z(self):
        """Message field 'est_gyro_scale_factor_z'."""
        return self._est_gyro_scale_factor_z

    @est_gyro_scale_factor_z.setter
    def est_gyro_scale_factor_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_gyro_scale_factor_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_gyro_scale_factor_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_gyro_scale_factor_z = value

    @builtins.property
    def est_accel_scale_factor_x(self):
        """Message field 'est_accel_scale_factor_x'."""
        return self._est_accel_scale_factor_x

    @est_accel_scale_factor_x.setter
    def est_accel_scale_factor_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_accel_scale_factor_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_accel_scale_factor_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_accel_scale_factor_x = value

    @builtins.property
    def est_accel_scale_factor_y(self):
        """Message field 'est_accel_scale_factor_y'."""
        return self._est_accel_scale_factor_y

    @est_accel_scale_factor_y.setter
    def est_accel_scale_factor_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_accel_scale_factor_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_accel_scale_factor_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_accel_scale_factor_y = value

    @builtins.property
    def est_accel_scale_factor_z(self):
        """Message field 'est_accel_scale_factor_z'."""
        return self._est_accel_scale_factor_z

    @est_accel_scale_factor_z.setter
    def est_accel_scale_factor_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_accel_scale_factor_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_accel_scale_factor_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_accel_scale_factor_z = value

    @builtins.property
    def est_gyro_scale_factor_x_uncert(self):
        """Message field 'est_gyro_scale_factor_x_uncert'."""
        return self._est_gyro_scale_factor_x_uncert

    @est_gyro_scale_factor_x_uncert.setter
    def est_gyro_scale_factor_x_uncert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_gyro_scale_factor_x_uncert' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_gyro_scale_factor_x_uncert' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_gyro_scale_factor_x_uncert = value

    @builtins.property
    def est_gyro_scale_factor_y_uncert(self):
        """Message field 'est_gyro_scale_factor_y_uncert'."""
        return self._est_gyro_scale_factor_y_uncert

    @est_gyro_scale_factor_y_uncert.setter
    def est_gyro_scale_factor_y_uncert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_gyro_scale_factor_y_uncert' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_gyro_scale_factor_y_uncert' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_gyro_scale_factor_y_uncert = value

    @builtins.property
    def est_gyro_scale_factor_z_uncert(self):
        """Message field 'est_gyro_scale_factor_z_uncert'."""
        return self._est_gyro_scale_factor_z_uncert

    @est_gyro_scale_factor_z_uncert.setter
    def est_gyro_scale_factor_z_uncert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_gyro_scale_factor_z_uncert' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_gyro_scale_factor_z_uncert' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_gyro_scale_factor_z_uncert = value

    @builtins.property
    def est_accel_scale_factor_x_uncert(self):
        """Message field 'est_accel_scale_factor_x_uncert'."""
        return self._est_accel_scale_factor_x_uncert

    @est_accel_scale_factor_x_uncert.setter
    def est_accel_scale_factor_x_uncert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_accel_scale_factor_x_uncert' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_accel_scale_factor_x_uncert' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_accel_scale_factor_x_uncert = value

    @builtins.property
    def est_accel_scale_factor_y_uncert(self):
        """Message field 'est_accel_scale_factor_y_uncert'."""
        return self._est_accel_scale_factor_y_uncert

    @est_accel_scale_factor_y_uncert.setter
    def est_accel_scale_factor_y_uncert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_accel_scale_factor_y_uncert' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_accel_scale_factor_y_uncert' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_accel_scale_factor_y_uncert = value

    @builtins.property
    def est_accel_scale_factor_z_uncert(self):
        """Message field 'est_accel_scale_factor_z_uncert'."""
        return self._est_accel_scale_factor_z_uncert

    @est_accel_scale_factor_z_uncert.setter
    def est_accel_scale_factor_z_uncert(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_accel_scale_factor_z_uncert' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_accel_scale_factor_z_uncert' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_accel_scale_factor_z_uncert = value

    @builtins.property
    def est_compensated_accel_x(self):
        """Message field 'est_compensated_accel_x'."""
        return self._est_compensated_accel_x

    @est_compensated_accel_x.setter
    def est_compensated_accel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_compensated_accel_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_compensated_accel_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_compensated_accel_x = value

    @builtins.property
    def est_compensated_accel_y(self):
        """Message field 'est_compensated_accel_y'."""
        return self._est_compensated_accel_y

    @est_compensated_accel_y.setter
    def est_compensated_accel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_compensated_accel_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_compensated_accel_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_compensated_accel_y = value

    @builtins.property
    def est_compensated_accel_z(self):
        """Message field 'est_compensated_accel_z'."""
        return self._est_compensated_accel_z

    @est_compensated_accel_z.setter
    def est_compensated_accel_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_compensated_accel_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_compensated_accel_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_compensated_accel_z = value

    @builtins.property
    def est_std_atm_model_geometric_alt(self):
        """Message field 'est_std_atm_model_geometric_alt'."""
        return self._est_std_atm_model_geometric_alt

    @est_std_atm_model_geometric_alt.setter
    def est_std_atm_model_geometric_alt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_std_atm_model_geometric_alt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_std_atm_model_geometric_alt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_std_atm_model_geometric_alt = value

    @builtins.property
    def est_std_atm_model_geopotential_alt(self):
        """Message field 'est_std_atm_model_geopotential_alt'."""
        return self._est_std_atm_model_geopotential_alt

    @est_std_atm_model_geopotential_alt.setter
    def est_std_atm_model_geopotential_alt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_std_atm_model_geopotential_alt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_std_atm_model_geopotential_alt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_std_atm_model_geopotential_alt = value

    @builtins.property
    def est_std_atm_model_temperature(self):
        """Message field 'est_std_atm_model_temperature'."""
        return self._est_std_atm_model_temperature

    @est_std_atm_model_temperature.setter
    def est_std_atm_model_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_std_atm_model_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_std_atm_model_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_std_atm_model_temperature = value

    @builtins.property
    def est_std_atm_model_pressure(self):
        """Message field 'est_std_atm_model_pressure'."""
        return self._est_std_atm_model_pressure

    @est_std_atm_model_pressure.setter
    def est_std_atm_model_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_std_atm_model_pressure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_std_atm_model_pressure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_std_atm_model_pressure = value

    @builtins.property
    def est_std_atm_model_density(self):
        """Message field 'est_std_atm_model_density'."""
        return self._est_std_atm_model_density

    @est_std_atm_model_density.setter
    def est_std_atm_model_density(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_std_atm_model_density' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_std_atm_model_density' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_std_atm_model_density = value

    @builtins.property
    def est_pressure_alt(self):
        """Message field 'est_pressure_alt'."""
        return self._est_pressure_alt

    @est_pressure_alt.setter
    def est_pressure_alt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_pressure_alt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_pressure_alt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_pressure_alt = value

    @builtins.property
    def est_mag_auto_hard_iron_offset_x(self):
        """Message field 'est_mag_auto_hard_iron_offset_x'."""
        return self._est_mag_auto_hard_iron_offset_x

    @est_mag_auto_hard_iron_offset_x.setter
    def est_mag_auto_hard_iron_offset_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_mag_auto_hard_iron_offset_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_mag_auto_hard_iron_offset_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_mag_auto_hard_iron_offset_x = value

    @builtins.property
    def est_mag_auto_hard_iron_offset_y(self):
        """Message field 'est_mag_auto_hard_iron_offset_y'."""
        return self._est_mag_auto_hard_iron_offset_y

    @est_mag_auto_hard_iron_offset_y.setter
    def est_mag_auto_hard_iron_offset_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_mag_auto_hard_iron_offset_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_mag_auto_hard_iron_offset_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_mag_auto_hard_iron_offset_y = value

    @builtins.property
    def est_mag_auto_hard_iron_offset_z(self):
        """Message field 'est_mag_auto_hard_iron_offset_z'."""
        return self._est_mag_auto_hard_iron_offset_z

    @est_mag_auto_hard_iron_offset_z.setter
    def est_mag_auto_hard_iron_offset_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'est_mag_auto_hard_iron_offset_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'est_mag_auto_hard_iron_offset_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._est_mag_auto_hard_iron_offset_z = value

    @builtins.property
    def est_mag_auto_soft_iron_matrix(self):
        """Message field 'est_mag_auto_soft_iron_matrix'."""
        return self._est_mag_auto_soft_iron_matrix

    @est_mag_auto_soft_iron_matrix.setter
    def est_mag_auto_soft_iron_matrix(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'est_mag_auto_soft_iron_matrix' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 9, \
                "The 'est_mag_auto_soft_iron_matrix' numpy.ndarray() must have a size of 9"
            self._est_mag_auto_soft_iron_matrix = value
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
                "The 'est_mag_auto_soft_iron_matrix' field must be a set or sequence with length 9 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._est_mag_auto_soft_iron_matrix = numpy.array(value, dtype=numpy.float32)
