# generated from rosidl_generator_py/resource/_idl.py.em
# with input from soft_actuator_msgs:msg/ControllerStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'target_mm'
# Member 'predicted_mm'
# Member 'error_mm'
# Member 'requested_pressure_kpa'
# Member 'core_pressure_kpa'
# Member 'output_pressure_kpa'
# Member 'last_written_pressure_kpa'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControllerStatus(type):
    """Metaclass of message 'ControllerStatus'."""

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
                'soft_actuator_msgs.msg.ControllerStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__controller_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__controller_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__controller_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__controller_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__controller_status

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


class ControllerStatus(metaclass=Metaclass_ControllerStatus):
    """Message class 'ControllerStatus'."""

    __slots__ = [
        '_header',
        '_session_id',
        '_state',
        '_enabled',
        '_requested_mode',
        '_effective_mode',
        '_feedback_reason',
        '_numeric_valid',
        '_pressure_limited',
        '_measured_error_valid',
        '_contact_state',
        '_target_mm',
        '_predicted_mm',
        '_error_mm',
        '_requested_pressure_kpa',
        '_core_pressure_kpa',
        '_output_pressure_kpa',
        '_last_written_pressure_kpa',
        '_writer_fresh',
        '_feedback_sequence',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'session_id': 'string',
        'state': 'string',
        'enabled': 'boolean',
        'requested_mode': 'string',
        'effective_mode': 'string',
        'feedback_reason': 'string',
        'numeric_valid': 'boolean',
        'pressure_limited': 'boolean',
        'measured_error_valid': 'boolean',
        'contact_state': 'string',
        'target_mm': 'double[3]',
        'predicted_mm': 'double[3]',
        'error_mm': 'double[3]',
        'requested_pressure_kpa': 'double[3]',
        'core_pressure_kpa': 'double[3]',
        'output_pressure_kpa': 'double[3]',
        'last_written_pressure_kpa': 'double[3]',
        'writer_fresh': 'boolean',
        'feedback_sequence': 'uint64',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
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
        self.state = kwargs.get('state', str())
        self.enabled = kwargs.get('enabled', bool())
        self.requested_mode = kwargs.get('requested_mode', str())
        self.effective_mode = kwargs.get('effective_mode', str())
        self.feedback_reason = kwargs.get('feedback_reason', str())
        self.numeric_valid = kwargs.get('numeric_valid', bool())
        self.pressure_limited = kwargs.get('pressure_limited', bool())
        self.measured_error_valid = kwargs.get('measured_error_valid', bool())
        self.contact_state = kwargs.get('contact_state', str())
        if 'target_mm' not in kwargs:
            self.target_mm = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.target_mm = kwargs.get('target_mm')
        if 'predicted_mm' not in kwargs:
            self.predicted_mm = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.predicted_mm = kwargs.get('predicted_mm')
        if 'error_mm' not in kwargs:
            self.error_mm = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.error_mm = kwargs.get('error_mm')
        if 'requested_pressure_kpa' not in kwargs:
            self.requested_pressure_kpa = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.requested_pressure_kpa = kwargs.get('requested_pressure_kpa')
        if 'core_pressure_kpa' not in kwargs:
            self.core_pressure_kpa = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.core_pressure_kpa = kwargs.get('core_pressure_kpa')
        if 'output_pressure_kpa' not in kwargs:
            self.output_pressure_kpa = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.output_pressure_kpa = kwargs.get('output_pressure_kpa')
        if 'last_written_pressure_kpa' not in kwargs:
            self.last_written_pressure_kpa = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.last_written_pressure_kpa = kwargs.get('last_written_pressure_kpa')
        self.writer_fresh = kwargs.get('writer_fresh', bool())
        self.feedback_sequence = kwargs.get('feedback_sequence', int())

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
        if self.state != other.state:
            return False
        if self.enabled != other.enabled:
            return False
        if self.requested_mode != other.requested_mode:
            return False
        if self.effective_mode != other.effective_mode:
            return False
        if self.feedback_reason != other.feedback_reason:
            return False
        if self.numeric_valid != other.numeric_valid:
            return False
        if self.pressure_limited != other.pressure_limited:
            return False
        if self.measured_error_valid != other.measured_error_valid:
            return False
        if self.contact_state != other.contact_state:
            return False
        if any(self.target_mm != other.target_mm):
            return False
        if any(self.predicted_mm != other.predicted_mm):
            return False
        if any(self.error_mm != other.error_mm):
            return False
        if any(self.requested_pressure_kpa != other.requested_pressure_kpa):
            return False
        if any(self.core_pressure_kpa != other.core_pressure_kpa):
            return False
        if any(self.output_pressure_kpa != other.output_pressure_kpa):
            return False
        if any(self.last_written_pressure_kpa != other.last_written_pressure_kpa):
            return False
        if self.writer_fresh != other.writer_fresh:
            return False
        if self.feedback_sequence != other.feedback_sequence:
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
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'state' field must be of type 'str'"
        self._state = value

    @builtins.property
    def enabled(self):
        """Message field 'enabled'."""
        return self._enabled

    @enabled.setter
    def enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'enabled' field must be of type 'bool'"
        self._enabled = value

    @builtins.property
    def requested_mode(self):
        """Message field 'requested_mode'."""
        return self._requested_mode

    @requested_mode.setter
    def requested_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'requested_mode' field must be of type 'str'"
        self._requested_mode = value

    @builtins.property
    def effective_mode(self):
        """Message field 'effective_mode'."""
        return self._effective_mode

    @effective_mode.setter
    def effective_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'effective_mode' field must be of type 'str'"
        self._effective_mode = value

    @builtins.property
    def feedback_reason(self):
        """Message field 'feedback_reason'."""
        return self._feedback_reason

    @feedback_reason.setter
    def feedback_reason(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'feedback_reason' field must be of type 'str'"
        self._feedback_reason = value

    @builtins.property
    def numeric_valid(self):
        """Message field 'numeric_valid'."""
        return self._numeric_valid

    @numeric_valid.setter
    def numeric_valid(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'numeric_valid' field must be of type 'bool'"
        self._numeric_valid = value

    @builtins.property
    def pressure_limited(self):
        """Message field 'pressure_limited'."""
        return self._pressure_limited

    @pressure_limited.setter
    def pressure_limited(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'pressure_limited' field must be of type 'bool'"
        self._pressure_limited = value

    @builtins.property
    def measured_error_valid(self):
        """Message field 'measured_error_valid'."""
        return self._measured_error_valid

    @measured_error_valid.setter
    def measured_error_valid(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'measured_error_valid' field must be of type 'bool'"
        self._measured_error_valid = value

    @builtins.property
    def contact_state(self):
        """Message field 'contact_state'."""
        return self._contact_state

    @contact_state.setter
    def contact_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'contact_state' field must be of type 'str'"
        self._contact_state = value

    @builtins.property
    def target_mm(self):
        """Message field 'target_mm'."""
        return self._target_mm

    @target_mm.setter
    def target_mm(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float64, \
                    "The 'target_mm' numpy.ndarray() must have the dtype of 'numpy.float64'"
                assert value.size == 3, \
                    "The 'target_mm' numpy.ndarray() must have a size of 3"
                self._target_mm = value
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
                "The 'target_mm' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._target_mm = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def predicted_mm(self):
        """Message field 'predicted_mm'."""
        return self._predicted_mm

    @predicted_mm.setter
    def predicted_mm(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float64, \
                    "The 'predicted_mm' numpy.ndarray() must have the dtype of 'numpy.float64'"
                assert value.size == 3, \
                    "The 'predicted_mm' numpy.ndarray() must have a size of 3"
                self._predicted_mm = value
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
                "The 'predicted_mm' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._predicted_mm = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def error_mm(self):
        """Message field 'error_mm'."""
        return self._error_mm

    @error_mm.setter
    def error_mm(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float64, \
                    "The 'error_mm' numpy.ndarray() must have the dtype of 'numpy.float64'"
                assert value.size == 3, \
                    "The 'error_mm' numpy.ndarray() must have a size of 3"
                self._error_mm = value
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
                "The 'error_mm' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._error_mm = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def requested_pressure_kpa(self):
        """Message field 'requested_pressure_kpa'."""
        return self._requested_pressure_kpa

    @requested_pressure_kpa.setter
    def requested_pressure_kpa(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float64, \
                    "The 'requested_pressure_kpa' numpy.ndarray() must have the dtype of 'numpy.float64'"
                assert value.size == 3, \
                    "The 'requested_pressure_kpa' numpy.ndarray() must have a size of 3"
                self._requested_pressure_kpa = value
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
                "The 'requested_pressure_kpa' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._requested_pressure_kpa = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def core_pressure_kpa(self):
        """Message field 'core_pressure_kpa'."""
        return self._core_pressure_kpa

    @core_pressure_kpa.setter
    def core_pressure_kpa(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float64, \
                    "The 'core_pressure_kpa' numpy.ndarray() must have the dtype of 'numpy.float64'"
                assert value.size == 3, \
                    "The 'core_pressure_kpa' numpy.ndarray() must have a size of 3"
                self._core_pressure_kpa = value
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
                "The 'core_pressure_kpa' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._core_pressure_kpa = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def output_pressure_kpa(self):
        """Message field 'output_pressure_kpa'."""
        return self._output_pressure_kpa

    @output_pressure_kpa.setter
    def output_pressure_kpa(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float64, \
                    "The 'output_pressure_kpa' numpy.ndarray() must have the dtype of 'numpy.float64'"
                assert value.size == 3, \
                    "The 'output_pressure_kpa' numpy.ndarray() must have a size of 3"
                self._output_pressure_kpa = value
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
                "The 'output_pressure_kpa' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._output_pressure_kpa = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def last_written_pressure_kpa(self):
        """Message field 'last_written_pressure_kpa'."""
        return self._last_written_pressure_kpa

    @last_written_pressure_kpa.setter
    def last_written_pressure_kpa(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float64, \
                    "The 'last_written_pressure_kpa' numpy.ndarray() must have the dtype of 'numpy.float64'"
                assert value.size == 3, \
                    "The 'last_written_pressure_kpa' numpy.ndarray() must have a size of 3"
                self._last_written_pressure_kpa = value
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
                "The 'last_written_pressure_kpa' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._last_written_pressure_kpa = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def writer_fresh(self):
        """Message field 'writer_fresh'."""
        return self._writer_fresh

    @writer_fresh.setter
    def writer_fresh(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'writer_fresh' field must be of type 'bool'"
        self._writer_fresh = value

    @builtins.property
    def feedback_sequence(self):
        """Message field 'feedback_sequence'."""
        return self._feedback_sequence

    @feedback_sequence.setter
    def feedback_sequence(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'feedback_sequence' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'feedback_sequence' field must be an unsigned integer in [0, 18446744073709551615]"
        self._feedback_sequence = value
