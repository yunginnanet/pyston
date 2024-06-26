/*[clinic input]
preserve
[clinic start generated code]*/

PyDoc_STRVAR(type___instancecheck____doc__,
"__instancecheck__($self, instance, /)\n"
"--\n"
"\n"
"Check if an object is an instance.");

#define TYPE___INSTANCECHECK___METHODDEF    \
    {"__instancecheck__", (PyCFunction)type___instancecheck__, METH_O, type___instancecheck____doc__},

static int
type___instancecheck___impl(PyTypeObject *self, PyObject *instance);

static PyObject *
type___instancecheck__(PyTypeObject *self, PyObject *instance)
{
    PyObject *return_value = NULL;
    int _return_value;

    _return_value = type___instancecheck___impl(self, instance);
    if ((_return_value == -1) && PyErr_Occurred()) {
        goto exit;
    }
    return_value = PyBool_FromLong((long)_return_value);

exit:
    return return_value;
}

PyDoc_STRVAR(type___subclasscheck____doc__,
"__subclasscheck__($self, subclass, /)\n"
"--\n"
"\n"
"Check if a class is a subclass.");

#define TYPE___SUBCLASSCHECK___METHODDEF    \
    {"__subclasscheck__", (PyCFunction)type___subclasscheck__, METH_O, type___subclasscheck____doc__},

static int
type___subclasscheck___impl(PyTypeObject *self, PyObject *subclass);

static PyObject *
type___subclasscheck__(PyTypeObject *self, PyObject *subclass)
{
    PyObject *return_value = NULL;
    int _return_value;

    _return_value = type___subclasscheck___impl(self, subclass);
    if ((_return_value == -1) && PyErr_Occurred()) {
        goto exit;
    }
    return_value = PyBool_FromLong((long)_return_value);

exit:
    return return_value;
}

PyDoc_STRVAR(type_mro__doc__,
"mro($self, /)\n"
"--\n"
"\n"
"Return a type\'s method resolution order.");

#define TYPE_MRO_METHODDEF    \
    {"mro", (PyCFunction)type_mro, METH_NOARGS, type_mro__doc__},

static PyObject *
type_mro_impl(PyTypeObject *self);

static PyObject *
type_mro(PyTypeObject *self, PyObject *Py_UNUSED(ignored))
{
    return type_mro_impl(self);
}

PyDoc_STRVAR(type___subclasses____doc__,
"__subclasses__($self, /)\n"
"--\n"
"\n"
"Return a list of immediate subclasses.");

#define TYPE___SUBCLASSES___METHODDEF    \
    {"__subclasses__", (PyCFunction)type___subclasses__, METH_NOARGS, type___subclasses____doc__},

static PyObject *
type___subclasses___impl(PyTypeObject *self);

static PyObject *
type___subclasses__(PyTypeObject *self, PyObject *Py_UNUSED(ignored))
{
    return type___subclasses___impl(self);
}

PyDoc_STRVAR(type___dir____doc__,
"__dir__($self, /)\n"
"--\n"
"\n"
"Specialized __dir__ implementation for types.");

#define TYPE___DIR___METHODDEF    \
    {"__dir__", (PyCFunction)type___dir__, METH_NOARGS, type___dir____doc__},

static PyObject *
type___dir___impl(PyTypeObject *self);

static PyObject *
type___dir__(PyTypeObject *self, PyObject *Py_UNUSED(ignored))
{
    return type___dir___impl(self);
}

PyDoc_STRVAR(type___sizeof____doc__,
"__sizeof__($self, /)\n"
"--\n"
"\n"
"Return memory consumption of the type object.");

#define TYPE___SIZEOF___METHODDEF    \
    {"__sizeof__", (PyCFunction)type___sizeof__, METH_NOARGS, type___sizeof____doc__},

static PyObject *
type___sizeof___impl(PyTypeObject *self);

static PyObject *
type___sizeof__(PyTypeObject *self, PyObject *Py_UNUSED(ignored))
{
    return type___sizeof___impl(self);
}

PyDoc_STRVAR(object___reduce____doc__,
"__reduce__($self, /)\n"
"--\n"
"\n"
"Helper for pickle.");

#define OBJECT___REDUCE___METHODDEF    \
    {"__reduce__", (PyCFunction)object___reduce__, METH_NOARGS, object___reduce____doc__},

static PyObject *
object___reduce___impl(PyObject *self);

static PyObject *
object___reduce__(PyObject *self, PyObject *Py_UNUSED(ignored))
{
    return object___reduce___impl(self);
}

PyDoc_STRVAR(object___reduce_ex____doc__,
"__reduce_ex__($self, protocol, /)\n"
"--\n"
"\n"
"Helper for pickle.");

#define OBJECT___REDUCE_EX___METHODDEF    \
    {"__reduce_ex__", (PyCFunction)object___reduce_ex__, METH_O, object___reduce_ex____doc__},

static PyObject *
object___reduce_ex___impl(PyObject *self, int protocol);

static PyObject *
object___reduce_ex__(PyObject *self, PyObject *arg)
{
    PyObject *return_value = NULL;
    int protocol;

    if (!PyLong_CheckExact(arg) && PyFloat_Check(arg)) {
        PyErr_SetString(PyExc_TypeError,
                        "integer argument expected, got float" );
        goto exit;
    }
    protocol = _PyLong_AsInt(arg);
    if (protocol == -1 && PyErr_Occurred()) {
        goto exit;
    }
    return_value = object___reduce_ex___impl(self, protocol);

exit:
    return return_value;
}

PyDoc_STRVAR(object___format____doc__,
"__format__($self, format_spec, /)\n"
"--\n"
"\n"
"Default object formatter.");

#define OBJECT___FORMAT___METHODDEF    \
    {"__format__", (PyCFunction)object___format__, METH_O, object___format____doc__},

static PyObject *
object___format___impl(PyObject *self, PyObject *format_spec);

static PyObject *
object___format__(PyObject *self, PyObject *arg)
{
    PyObject *return_value = NULL;
    PyObject *format_spec;

    if (!PyUnicode_Check(arg)) {
        _PyArg_BadArgument("__format__", "argument", "str", arg);
        goto exit;
    }
    if (PyUnicode_READY(arg) == -1) {
        goto exit;
    }
    format_spec = arg;
    return_value = object___format___impl(self, format_spec);

exit:
    return return_value;
}

PyDoc_STRVAR(object___sizeof____doc__,
"__sizeof__($self, /)\n"
"--\n"
"\n"
"Size of object in memory, in bytes.");

#define OBJECT___SIZEOF___METHODDEF    \
    {"__sizeof__", (PyCFunction)object___sizeof__, METH_NOARGS, object___sizeof____doc__},

static PyObject *
object___sizeof___impl(PyObject *self);

static PyObject *
object___sizeof__(PyObject *self, PyObject *Py_UNUSED(ignored))
{
    return object___sizeof___impl(self);
}

PyDoc_STRVAR(object___dir____doc__,
"__dir__($self, /)\n"
"--\n"
"\n"
"Default dir() implementation.");

#define OBJECT___DIR___METHODDEF    \
    {"__dir__", (PyCFunction)object___dir__, METH_NOARGS, object___dir____doc__},

static PyObject *
object___dir___impl(PyObject *self);

static PyObject *
object___dir__(PyObject *self, PyObject *Py_UNUSED(ignored))
{
    return object___dir___impl(self);
}

#if (PYSTON_SPEEDUPS)

static int
super_init_impl(superobject *su, PyTypeObject *type, PyObject *obj);

static int
super_init(PyObject *su, PyObject *args, PyObject *kwargs)
{
    int return_value = -1;
    PyTypeObject *type = NULL;
    PyObject *obj = NULL;

    if ((Py_TYPE(su) == &PySuper_Type) &&
        !_PyArg_NoKeywords("super", kwargs)) {
        goto exit;
    }
    if (!_PyArg_CheckPositional("super", PyTuple_GET_SIZE(args), 0, 2)) {
        goto exit;
    }
    if (PyTuple_GET_SIZE(args) < 1) {
        goto skip_optional;
    }
    if (!PyObject_TypeCheck(PyTuple_GET_ITEM(args, 0), &PyType_Type)) {
        _PyArg_BadArgument("super", "argument 1", (&PyType_Type)->tp_name, PyTuple_GET_ITEM(args, 0));
        goto exit;
    }
    type = (PyTypeObject *)PyTuple_GET_ITEM(args, 0);
    if (PyTuple_GET_SIZE(args) < 2) {
        goto skip_optional;
    }
    obj = PyTuple_GET_ITEM(args, 1);
skip_optional:
    return_value = super_init_impl((superobject *)su, type, obj);

exit:
    return return_value;
}

#endif /* (PYSTON_SPEEDUPS) */
/*[clinic end generated code: output=a6a08b7c60fa2edb input=a9049054013a1b77]*/
