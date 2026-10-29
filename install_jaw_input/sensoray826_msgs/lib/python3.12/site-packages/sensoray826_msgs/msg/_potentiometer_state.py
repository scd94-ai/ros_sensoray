# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sensoray826_msgs:msg/PotentiometerState.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'adc_channels'
# Member 'adc_timestamps_us'
# Member 'voltage_v'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PotentiometerState(type):
    """Metaclass of message 'PotentiometerState'."""

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
            module = import_type_support('sensoray826_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sensoray826_msgs.msg.PotentiometerState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__potentiometer_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__potentiometer_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__potentiometer_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__potentiometer_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__potentiometer_state

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PotentiometerState(metaclass=Metaclass_PotentiometerState):
    """Message class 'PotentiometerState'."""

    __slots__ = [
        '_header',
        '_session_id',
        '_sequence',
        '_board',
        '_settling_us',
        '_adc_channels',
        '_adc_timestamps_us',
        '_voltage_v',
        '_valid',
        '_sdk_status',
        '_supply_valid',
        '_supply_voltage_v',
        '_supply_adc_timestamp_us',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'session_id': 'string',
        'sequence': 'uint64',
        'board': 'uint8',
        'settling_us': 'uint32',
        'adc_channels': 'uint8[2]',
        'adc_timestamps_us': 'uint32[2]',
        'voltage_v': 'double[2]',
        'valid': 'boolean[2]',
        'sdk_status': 'int32',
        'supply_valid': 'boolean',
        'supply_voltage_v': 'double',
        'supply_adc_timestamp_us': 'uint32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.session_id = kwargs.get('session_id', str())
        self.sequence = kwargs.get('sequence', int())
        self.board = kwargs.get('board', int())
        self.settling_us = kwargs.get('settling_us', int())
        if 'adc_channels' not in kwargs:
            self.adc_channels = numpy.zeros(2, dtype=numpy.uint8)
        else:
            self.adc_channels = kwargs.get('adc_channels')
        if 'adc_timestamps_us' not in kwargs:
            self.adc_timestamps_us = numpy.zeros(2, dtype=numpy.uint32)
        else:
            self.adc_timestamps_us = kwargs.get('adc_timestamps_us')
        if 'voltage_v' not in kwargs:
            self.voltage_v = numpy.zeros(2, dtype=numpy.float64)
        else:
            self.voltage_v = kwargs.get('voltage_v')
        self.valid = kwargs.get(
            'valid',
            [bool() for x in range(2)]
        )
        self.sdk_status = kwargs.get('sdk_status', int())
        self.supply_valid = kwargs.get('supply_valid', bool())
        self.supply_voltage_v = kwargs.get('supply_voltage_v', float())
        self.supply_adc_timestamp_us = kwargs.get('supply_adc_timestamp_us', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.session_id != other.session_id:
            return False
        if self.sequence != other.sequence:
            return False
        if self.board != other.board:
            return False
        if self.settling_us != other.settling_us:
            return False
        if any(self.adc_channels != other.adc_channels):
            return False
        if any(self.adc_timestamps_us != other.adc_timestamps_us):
            return False
        if any(self.voltage_v != other.voltage_v):
            return False
        if self.valid != other.valid:
            return False
        if self.sdk_status != other.sdk_status:
            return False
        if self.supply_valid != other.supply_valid:
            return False
        if self.supply_voltage_v != other.supply_voltage_v:
            return False
        if self.supply_adc_timestamp_us != other.supply_adc_timestamp_us:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def session_id(self):
        """Message field 'session_id'."""
        return self._session_id

    @session_id.setter
    def session_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'session_id' field must be of type 'str'"
        self._session_id = value

    @builtins.property
    def sequence(self):
        """Message field 'sequence'."""
        return self._sequence

    @sequence.setter
    def sequence(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sequence' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'sequence' field must be an unsigned integer in [0, 18446744073709551615]"
        self._sequence = value

    @builtins.property
    def board(self):
        """Message field 'board'."""
        return self._board

    @board.setter
    def board(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'board' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'board' field must be an unsigned integer in [0, 255]"
        self._board = value

    @builtins.property
    def settling_us(self):
        """Message field 'settling_us'."""
        return self._settling_us

    @settling_us.setter
    def settling_us(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'settling_us' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'settling_us' field must be an unsigned integer in [0, 4294967295]"
        self._settling_us = value

    @builtins.property
    def adc_channels(self):
        """Message field 'adc_channels'."""
        return self._adc_channels

    @adc_channels.setter
    def adc_channels(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.uint8, \
                    "The 'adc_channels' numpy.ndarray() must have the dtype of 'numpy.uint8'"
                assert value.size == 2, \
                    "The 'adc_channels' numpy.ndarray() must have a size of 2"
                self._adc_channels = value
                return
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
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'adc_channels' field must be a set or sequence with length 2 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._adc_channels = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def adc_timestamps_us(self):
        """Message field 'adc_timestamps_us'."""
        return self._adc_timestamps_us

    @adc_timestamps_us.setter
    def adc_timestamps_us(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.uint32, \
                    "The 'adc_timestamps_us' numpy.ndarray() must have the dtype of 'numpy.uint32'"
                assert value.size == 2, \
                    "The 'adc_timestamps_us' numpy.ndarray() must have a size of 2"
                self._adc_timestamps_us = value
                return
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
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'adc_timestamps_us' field must be a set or sequence with length 2 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._adc_timestamps_us = numpy.array(value, dtype=numpy.uint32)

    @builtins.property
    def voltage_v(self):
        """Message field 'voltage_v'."""
        return self._voltage_v

    @voltage_v.setter
    def voltage_v(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float64, \
                    "The 'voltage_v' numpy.ndarray() must have the dtype of 'numpy.float64'"
                assert value.size == 2, \
                    "The 'voltage_v' numpy.ndarray() must have a size of 2"
                self._voltage_v = value
                return
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'voltage_v' field must be a set or sequence with length 2 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._voltage_v = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def valid(self):
        """Message field 'valid'."""
        return self._valid

    @valid.setter
    def valid(self, value):
        if self._check_fields:
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
                 len(value) == 2 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'valid' field must be a set or sequence with length 2 and each value of type 'bool'"
        self._valid = value

    @builtins.property
    def sdk_status(self):
        """Message field 'sdk_status'."""
        return self._sdk_status

    @sdk_status.setter
    def sdk_status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sdk_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sdk_status' field must be an integer in [-2147483648, 2147483647]"
        self._sdk_status = value

    @builtins.property
    def supply_valid(self):
        """Message field 'supply_valid'."""
        return self._supply_valid

    @supply_valid.setter
    def supply_valid(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'supply_valid' field must be of type 'bool'"
        self._supply_valid = value

    @builtins.property
    def supply_voltage_v(self):
        """Message field 'supply_voltage_v'."""
        return self._supply_voltage_v

    @supply_voltage_v.setter
    def supply_voltage_v(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'supply_voltage_v' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'supply_voltage_v' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._supply_voltage_v = value

    @builtins.property
    def supply_adc_timestamp_us(self):
        """Message field 'supply_adc_timestamp_us'."""
        return self._supply_adc_timestamp_us

    @supply_adc_timestamp_us.setter
    def supply_adc_timestamp_us(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'supply_adc_timestamp_us' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'supply_adc_timestamp_us' field must be an unsigned integer in [0, 4294967295]"
        self._supply_adc_timestamp_us = value
