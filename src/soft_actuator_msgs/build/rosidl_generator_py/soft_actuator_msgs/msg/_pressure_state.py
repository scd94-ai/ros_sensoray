# generated from rosidl_generator_py/resource/_idl.py.em
# with input from soft_actuator_msgs:msg/PressureState.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'written_pressure_kpa'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PressureState(type):
    """Metaclass of message 'PressureState'."""

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
            module = import_type_support('soft_actuator_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'soft_actuator_msgs.msg.PressureState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pressure_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pressure_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pressure_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pressure_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pressure_state

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


class PressureState(metaclass=Metaclass_PressureState):
    """Message class 'PressureState'."""

    __slots__ = [
        '_header',
        '_session_id',
        '_command_sequence',
        '_written_pressure_kpa',
        '_write_success',
        '_ready',
        '_fault',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'session_id': 'string',
        'command_sequence': 'uint64',
        'written_pressure_kpa': 'double[3]',
        'write_success': 'boolean',
        'ready': 'boolean',
        'fault': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.command_sequence = kwargs.get('command_sequence', int())
        if 'written_pressure_kpa' not in kwargs:
            self.written_pressure_kpa = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.written_pressure_kpa = kwargs.get('written_pressure_kpa')
        self.write_success = kwargs.get('write_success', bool())
        self.ready = kwargs.get('ready', bool())
        self.fault = kwargs.get('fault', str())

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
        if self.command_sequence != other.command_sequence:
            return False
        if any(self.written_pressure_kpa != other.written_pressure_kpa):
            return False
        if self.write_success != other.write_success:
            return False
        if self.ready != other.ready:
            return False
        if self.fault != other.fault:
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
    def command_sequence(self):
        """Message field 'command_sequence'."""
        return self._command_sequence

    @command_sequence.setter
    def command_sequence(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'command_sequence' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'command_sequence' field must be an unsigned integer in [0, 18446744073709551615]"
        self._command_sequence = value

    @builtins.property
    def written_pressure_kpa(self):
        """Message field 'written_pressure_kpa'."""
        return self._written_pressure_kpa

    @written_pressure_kpa.setter
    def written_pressure_kpa(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float64, \
                    "The 'written_pressure_kpa' numpy.ndarray() must have the dtype of 'numpy.float64'"
                assert value.size == 3, \
                    "The 'written_pressure_kpa' numpy.ndarray() must have a size of 3"
                self._written_pressure_kpa = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'written_pressure_kpa' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._written_pressure_kpa = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def write_success(self):
        """Message field 'write_success'."""
        return self._write_success

    @write_success.setter
    def write_success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'write_success' field must be of type 'bool'"
        self._write_success = value

    @builtins.property
    def ready(self):
        """Message field 'ready'."""
        return self._ready

    @ready.setter
    def ready(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'ready' field must be of type 'bool'"
        self._ready = value

    @builtins.property
    def fault(self):
        """Message field 'fault'."""
        return self._fault

    @fault.setter
    def fault(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'fault' field must be of type 'str'"
        self._fault = value
