# generated from rosidl_generator_py/resource/_idl.py.em
# with input from video_interfaces:srv/Posdis.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Posdis_Request(type):
    """Metaclass of message 'Posdis_Request'."""

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
                'video_interfaces.srv.Posdis_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__posdis__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__posdis__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__posdis__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__posdis__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__posdis__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Posdis_Request(metaclass=Metaclass_Posdis_Request):
    """Message class 'Posdis_Request'."""

    __slots__ = [
        '_x1',
        '_y1',
        '_x2',
        '_y2',
        '_open',
    ]

    _fields_and_field_types = {
        'x1': 'float',
        'y1': 'float',
        'x2': 'float',
        'y2': 'float',
        'open': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x1 = kwargs.get('x1', float())
        self.y1 = kwargs.get('y1', float())
        self.x2 = kwargs.get('x2', float())
        self.y2 = kwargs.get('y2', float())
        self.open = kwargs.get('open', bool())

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
        if self.x1 != other.x1:
            return False
        if self.y1 != other.y1:
            return False
        if self.x2 != other.x2:
            return False
        if self.y2 != other.y2:
            return False
        if self.open != other.open:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x1(self):
        """Message field 'x1'."""
        return self._x1

    @x1.setter
    def x1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x1 = value

    @builtins.property
    def y1(self):
        """Message field 'y1'."""
        return self._y1

    @y1.setter
    def y1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y1 = value

    @builtins.property
    def x2(self):
        """Message field 'x2'."""
        return self._x2

    @x2.setter
    def x2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x2 = value

    @builtins.property
    def y2(self):
        """Message field 'y2'."""
        return self._y2

    @y2.setter
    def y2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y2 = value

    @builtins.property  # noqa: A003
    def open(self):  # noqa: A003
        """Message field 'open'."""
        return self._open

    @open.setter  # noqa: A003
    def open(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'open' field must be of type 'bool'"
        self._open = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_Posdis_Response(type):
    """Metaclass of message 'Posdis_Response'."""

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
                'video_interfaces.srv.Posdis_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__posdis__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__posdis__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__posdis__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__posdis__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__posdis__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Posdis_Response(metaclass=Metaclass_Posdis_Response):
    """Message class 'Posdis_Response'."""

    __slots__ = [
        '_x1_predict',
        '_y1_predict',
        '_x2_predict',
        '_y2_predict',
    ]

    _fields_and_field_types = {
        'x1_predict': 'float',
        'y1_predict': 'float',
        'x2_predict': 'float',
        'y2_predict': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x1_predict = kwargs.get('x1_predict', float())
        self.y1_predict = kwargs.get('y1_predict', float())
        self.x2_predict = kwargs.get('x2_predict', float())
        self.y2_predict = kwargs.get('y2_predict', float())

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
        if self.x1_predict != other.x1_predict:
            return False
        if self.y1_predict != other.y1_predict:
            return False
        if self.x2_predict != other.x2_predict:
            return False
        if self.y2_predict != other.y2_predict:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x1_predict(self):
        """Message field 'x1_predict'."""
        return self._x1_predict

    @x1_predict.setter
    def x1_predict(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x1_predict' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x1_predict' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x1_predict = value

    @builtins.property
    def y1_predict(self):
        """Message field 'y1_predict'."""
        return self._y1_predict

    @y1_predict.setter
    def y1_predict(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y1_predict' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y1_predict' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y1_predict = value

    @builtins.property
    def x2_predict(self):
        """Message field 'x2_predict'."""
        return self._x2_predict

    @x2_predict.setter
    def x2_predict(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x2_predict' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x2_predict' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x2_predict = value

    @builtins.property
    def y2_predict(self):
        """Message field 'y2_predict'."""
        return self._y2_predict

    @y2_predict.setter
    def y2_predict(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y2_predict' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y2_predict' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y2_predict = value


class Metaclass_Posdis(type):
    """Metaclass of service 'Posdis'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('video_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'video_interfaces.srv.Posdis')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__posdis

            from video_interfaces.srv import _posdis
            if _posdis.Metaclass_Posdis_Request._TYPE_SUPPORT is None:
                _posdis.Metaclass_Posdis_Request.__import_type_support__()
            if _posdis.Metaclass_Posdis_Response._TYPE_SUPPORT is None:
                _posdis.Metaclass_Posdis_Response.__import_type_support__()


class Posdis(metaclass=Metaclass_Posdis):
    from video_interfaces.srv._posdis import Posdis_Request as Request
    from video_interfaces.srv._posdis import Posdis_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
