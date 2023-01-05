# generated from rosidl_generator_py/resource/_idl.py.em
# with input from video_interfaces:msg/Send.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'rvec'
# Member 'tvec'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Send(type):
    """Metaclass of message 'Send'."""

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
            module = import_type_support('video_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'video_interfaces.msg.Send')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__send
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__send
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__send
            cls._TYPE_SUPPORT = module.type_support_msg__msg__send
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__send

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Send(metaclass=Metaclass_Send):
    """Message class 'Send'."""

    __slots__ = [
        '_dist',
        '_rvec',
        '_tvec',
        '_pitch',
        '_roll',
    ]

    _fields_and_field_types = {
        'dist': 'float',
        'rvec': 'float[3]',
        'tvec': 'float[3]',
        'pitch': 'float',
        'roll': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.dist = kwargs.get('dist', float())
        if 'rvec' not in kwargs:
            self.rvec = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.rvec = numpy.array(kwargs.get('rvec'), dtype=numpy.float32)
            assert self.rvec.shape == (3, )
        if 'tvec' not in kwargs:
            self.tvec = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.tvec = numpy.array(kwargs.get('tvec'), dtype=numpy.float32)
            assert self.tvec.shape == (3, )
        self.pitch = kwargs.get('pitch', float())
        self.roll = kwargs.get('roll', float())

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
        if self.dist != other.dist:
            return False
        if all(self.rvec != other.rvec):
            return False
        if all(self.tvec != other.tvec):
            return False
        if self.pitch != other.pitch:
            return False
        if self.roll != other.roll:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def dist(self):
        """Message field 'dist'."""
        return self._dist

    @dist.setter
    def dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dist' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dist' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dist = value

    @builtins.property
    def rvec(self):
        """Message field 'rvec'."""
        return self._rvec

    @rvec.setter
    def rvec(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'rvec' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'rvec' numpy.ndarray() must have a size of 3"
            self._rvec = value
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
                "The 'rvec' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._rvec = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def tvec(self):
        """Message field 'tvec'."""
        return self._tvec

    @tvec.setter
    def tvec(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'tvec' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'tvec' numpy.ndarray() must have a size of 3"
            self._tvec = value
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
                "The 'tvec' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._tvec = numpy.array(value, dtype=numpy.float32)

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
