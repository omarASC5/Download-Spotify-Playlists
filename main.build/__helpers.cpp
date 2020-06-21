// This file contains helper functions that are automatically created from
// templates.

#include "nuitka/prelude.h"

extern PyObject *callPythonFunction( PyObject *func, PyObject **args, int count );


PyObject *CALL_FUNCTION_WITH_ARGS1(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 1; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 1 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 1; i++) {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 1 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 1 * sizeof(PyObject *));
            memcpy(python_pars + 1, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 1)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL) {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 1 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 1; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 1 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 1 * sizeof(PyObject *));
                memcpy(python_pars+1 + 1, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 1)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 1 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (1 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 1 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (1 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 1);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 1, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 1);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            1
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 1);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS2(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 2; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 2 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 2; i++) {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 2 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 2 * sizeof(PyObject *));
            memcpy(python_pars + 2, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 2)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL) {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 2 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 2; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 2 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 2 * sizeof(PyObject *));
                memcpy(python_pars+1 + 2, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 2)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 2 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (2 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 2 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (2 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 2);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 2, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 2);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            2
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 2);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS3(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 3; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 3 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 3; i++) {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 3 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 3 * sizeof(PyObject *));
            memcpy(python_pars + 3, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 3)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL) {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 3 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 3; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 3 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 3 * sizeof(PyObject *));
                memcpy(python_pars+1 + 3, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 3)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 3 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (3 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 3 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (3 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 3);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 3, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 3);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            3
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 3);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS4(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 4; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 4 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 4; i++) {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 4 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 4 * sizeof(PyObject *));
            memcpy(python_pars + 4, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 4)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL) {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 4 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 4; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 4 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 4 * sizeof(PyObject *));
                memcpy(python_pars+1 + 4, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 4)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 4 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (4 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 4 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (4 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 4);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 4, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 4);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            4
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 4);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS5(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 5; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 5 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 5; i++) {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 5 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 5 * sizeof(PyObject *));
            memcpy(python_pars + 5, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 5)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL) {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 5 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 5; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 5 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 5 * sizeof(PyObject *));
                memcpy(python_pars+1 + 5, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 5)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 5 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (5 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 5 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (5 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 5);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 5, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 5);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            5
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 5);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS6(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 6; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 6 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 6; i++) {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 6 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 6 * sizeof(PyObject *));
            memcpy(python_pars + 6, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 6)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL) {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 6 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 6; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 6 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 6 * sizeof(PyObject *));
                memcpy(python_pars+1 + 6, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 6)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 6 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (6 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 6 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (6 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 6);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 6, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 6);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            6
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 6);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS7(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 7; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 7 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 7; i++) {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 7 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 7 * sizeof(PyObject *));
            memcpy(python_pars + 7, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 7)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL) {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 7 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 7; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 7 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 7 * sizeof(PyObject *));
                memcpy(python_pars+1 + 7, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 7)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 7 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (7 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 7 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (7 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 7);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 7, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 7);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            7
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 7);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS8(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 8; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 8 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 8; i++) {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 8 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 8 * sizeof(PyObject *));
            memcpy(python_pars + 8, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 8)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL) {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 8 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 8; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 8 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 8 * sizeof(PyObject *));
                memcpy(python_pars+1 + 8, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 8)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 8 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (8 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 8 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (8 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 8);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 8, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 8);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            8
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 8);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS9(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 9; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 9 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 9; i++) {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 9 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 9 * sizeof(PyObject *));
            memcpy(python_pars + 9, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 9)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL) {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 9 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 9; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 9 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 9 * sizeof(PyObject *));
                memcpy(python_pars+1 + 9, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 9)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 9 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (9 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 9 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (9 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 9);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 9, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 9);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            9
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 9);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS13(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 13; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 13 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 13; i++) {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 13 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 13 * sizeof(PyObject *));
            memcpy(python_pars + 13, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 13)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL) {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 13 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 13; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 13 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 13 * sizeof(PyObject *));
                memcpy(python_pars+1 + 13, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 13)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 13 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (13 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 13 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (13 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 13);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 13, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 13);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            13
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 13);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS16(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 16; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 16 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 16; i++) {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 16 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 16 * sizeof(PyObject *));
            memcpy(python_pars + 16, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 16)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL) {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 16 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 16; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 16 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 16 * sizeof(PyObject *));
                memcpy(python_pars+1 + 16, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 16)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 16 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (16 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 16 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (16 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 16);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 16, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 16);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            16
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 16);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_METHOD_WITH_ARGS1(PyObject *source, PyObject *attr_name, PyObject **args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 1; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    PyTypeObject *type = Py_TYPE(source);

    if (type->tp_getattro == PyObject_GenericGetAttr) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL)
        {
            Py_INCREF(descr);

#if PYTHON_VERSION < 300
            if (PyType_HasFeature(Py_TYPE(descr), Py_TPFLAGS_HAVE_CLASS)) {
#endif
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr))
                {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                        called_object,
                        args
                    );
                    Py_DECREF(called_object);
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL)
        {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = PyDict_GetItem(dict, attr_name);

            if (called_object != NULL)
            {
                Py_INCREF(called_object);
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    1
                );

                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF(called_object);

                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                descr,
                args
            );
            Py_DECREF(descr);

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS1(called_object, args);
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    1
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(method, args);
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS1(called_object, args);
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                called_object,
                args
            );
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS2(PyObject *source, PyObject *attr_name, PyObject **args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 2; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    PyTypeObject *type = Py_TYPE(source);

    if (type->tp_getattro == PyObject_GenericGetAttr) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL)
        {
            Py_INCREF(descr);

#if PYTHON_VERSION < 300
            if (PyType_HasFeature(Py_TYPE(descr), Py_TPFLAGS_HAVE_CLASS)) {
#endif
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr))
                {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                        called_object,
                        args
                    );
                    Py_DECREF(called_object);
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL)
        {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = PyDict_GetItem(dict, attr_name);

            if (called_object != NULL)
            {
                Py_INCREF(called_object);
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    2
                );

                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF(called_object);

                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                descr,
                args
            );
            Py_DECREF(descr);

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS2(called_object, args);
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    2
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(method, args);
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS2(called_object, args);
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                called_object,
                args
            );
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS3(PyObject *source, PyObject *attr_name, PyObject **args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 3; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    PyTypeObject *type = Py_TYPE(source);

    if (type->tp_getattro == PyObject_GenericGetAttr) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL)
        {
            Py_INCREF(descr);

#if PYTHON_VERSION < 300
            if (PyType_HasFeature(Py_TYPE(descr), Py_TPFLAGS_HAVE_CLASS)) {
#endif
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr))
                {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                        called_object,
                        args
                    );
                    Py_DECREF(called_object);
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL)
        {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = PyDict_GetItem(dict, attr_name);

            if (called_object != NULL)
            {
                Py_INCREF(called_object);
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    3
                );

                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF(called_object);

                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                descr,
                args
            );
            Py_DECREF(descr);

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS3(called_object, args);
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    3
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(method, args);
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS3(called_object, args);
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                called_object,
                args
            );
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS4(PyObject *source, PyObject *attr_name, PyObject **args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 4; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    PyTypeObject *type = Py_TYPE(source);

    if (type->tp_getattro == PyObject_GenericGetAttr) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL)
        {
            Py_INCREF(descr);

#if PYTHON_VERSION < 300
            if (PyType_HasFeature(Py_TYPE(descr), Py_TPFLAGS_HAVE_CLASS)) {
#endif
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr))
                {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                        called_object,
                        args
                    );
                    Py_DECREF(called_object);
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL)
        {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = PyDict_GetItem(dict, attr_name);

            if (called_object != NULL)
            {
                Py_INCREF(called_object);
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                    called_object,
                    args
                );
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    4
                );

                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                    called_object,
                    args
                );
                Py_DECREF(called_object);

                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                descr,
                args
            );
            Py_DECREF(descr);

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS4(called_object, args);
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    4
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS4(method, args);
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS4(called_object, args);
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                called_object,
                args
            );
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS4(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS4(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS5(PyObject *source, PyObject *attr_name, PyObject **args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 5; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    PyTypeObject *type = Py_TYPE(source);

    if (type->tp_getattro == PyObject_GenericGetAttr) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL)
        {
            Py_INCREF(descr);

#if PYTHON_VERSION < 300
            if (PyType_HasFeature(Py_TYPE(descr), Py_TPFLAGS_HAVE_CLASS)) {
#endif
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr))
                {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                        called_object,
                        args
                    );
                    Py_DECREF(called_object);
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL)
        {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = PyDict_GetItem(dict, attr_name);

            if (called_object != NULL)
            {
                Py_INCREF(called_object);
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                    called_object,
                    args
                );
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    5
                );

                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                    called_object,
                    args
                );
                Py_DECREF(called_object);

                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                descr,
                args
            );
            Py_DECREF(descr);

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS5(called_object, args);
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    5
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS5(method, args);
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS5(called_object, args);
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                called_object,
                args
            );
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS5(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS5(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS6(PyObject *source, PyObject *attr_name, PyObject **args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 6; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    PyTypeObject *type = Py_TYPE(source);

    if (type->tp_getattro == PyObject_GenericGetAttr) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL)
        {
            Py_INCREF(descr);

#if PYTHON_VERSION < 300
            if (PyType_HasFeature(Py_TYPE(descr), Py_TPFLAGS_HAVE_CLASS)) {
#endif
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr))
                {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                        called_object,
                        args
                    );
                    Py_DECREF(called_object);
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL)
        {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = PyDict_GetItem(dict, attr_name);

            if (called_object != NULL)
            {
                Py_INCREF(called_object);
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                    called_object,
                    args
                );
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    6
                );

                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                    called_object,
                    args
                );
                Py_DECREF(called_object);

                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                descr,
                args
            );
            Py_DECREF(descr);

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS6(called_object, args);
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    6
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS6(method, args);
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS6(called_object, args);
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                called_object,
                args
            );
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS6(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS6(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS7(PyObject *source, PyObject *attr_name, PyObject **args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 7; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    PyTypeObject *type = Py_TYPE(source);

    if (type->tp_getattro == PyObject_GenericGetAttr) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL)
        {
            Py_INCREF(descr);

#if PYTHON_VERSION < 300
            if (PyType_HasFeature(Py_TYPE(descr), Py_TPFLAGS_HAVE_CLASS)) {
#endif
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr))
                {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                        called_object,
                        args
                    );
                    Py_DECREF(called_object);
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL)
        {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = PyDict_GetItem(dict, attr_name);

            if (called_object != NULL)
            {
                Py_INCREF(called_object);
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                    called_object,
                    args
                );
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    7
                );

                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                    called_object,
                    args
                );
                Py_DECREF(called_object);

                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                descr,
                args
            );
            Py_DECREF(descr);

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS7(called_object, args);
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    7
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS7(method, args);
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS7(called_object, args);
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS7(
                called_object,
                args
            );
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS7(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS7(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS8(PyObject *source, PyObject *attr_name, PyObject **args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 8; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    PyTypeObject *type = Py_TYPE(source);

    if (type->tp_getattro == PyObject_GenericGetAttr) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL)
        {
            Py_INCREF(descr);

#if PYTHON_VERSION < 300
            if (PyType_HasFeature(Py_TYPE(descr), Py_TPFLAGS_HAVE_CLASS)) {
#endif
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr))
                {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                        called_object,
                        args
                    );
                    Py_DECREF(called_object);
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL)
        {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = PyDict_GetItem(dict, attr_name);

            if (called_object != NULL)
            {
                Py_INCREF(called_object);
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                    called_object,
                    args
                );
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    8
                );

                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                    called_object,
                    args
                );
                Py_DECREF(called_object);

                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                descr,
                args
            );
            Py_DECREF(descr);

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS8(called_object, args);
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    8
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS8(method, args);
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS8(called_object, args);
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS8(
                called_object,
                args
            );
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS8(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS8(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS13(PyObject *source, PyObject *attr_name, PyObject **args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 13; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    PyTypeObject *type = Py_TYPE(source);

    if (type->tp_getattro == PyObject_GenericGetAttr) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL)
        {
            Py_INCREF(descr);

#if PYTHON_VERSION < 300
            if (PyType_HasFeature(Py_TYPE(descr), Py_TPFLAGS_HAVE_CLASS)) {
#endif
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr))
                {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS13(
                        called_object,
                        args
                    );
                    Py_DECREF(called_object);
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL)
        {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = PyDict_GetItem(dict, attr_name);

            if (called_object != NULL)
            {
                Py_INCREF(called_object);
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS13(
                    called_object,
                    args
                );
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    13
                );

                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS13(
                    called_object,
                    args
                );
                Py_DECREF(called_object);

                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS13(
                descr,
                args
            );
            Py_DECREF(descr);

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS13(called_object, args);
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    13
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS13(method, args);
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS13(called_object, args);
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS13(
                called_object,
                args
            );
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS13(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS13(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}
/* Code to register embedded modules for meta path based loading if any. */

#include "nuitka/unfreezing.h"

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode_App(PyObject *);
extern PyObject *modulecode_Music(PyObject *);
extern PyObject *modulecode_SpotifyProcessor(PyObject *);
extern PyObject *modulecode___main__(PyObject *);
extern PyObject *modulecode_certifi(PyObject *);
extern PyObject *modulecode_certifi$core(PyObject *);
extern PyObject *modulecode_chardet(PyObject *);
extern PyObject *modulecode_chardet$big5freq(PyObject *);
extern PyObject *modulecode_chardet$big5prober(PyObject *);
extern PyObject *modulecode_chardet$chardistribution(PyObject *);
extern PyObject *modulecode_chardet$charsetgroupprober(PyObject *);
extern PyObject *modulecode_chardet$charsetprober(PyObject *);
extern PyObject *modulecode_chardet$codingstatemachine(PyObject *);
extern PyObject *modulecode_chardet$compat(PyObject *);
extern PyObject *modulecode_chardet$cp949prober(PyObject *);
extern PyObject *modulecode_chardet$enums(PyObject *);
extern PyObject *modulecode_chardet$escprober(PyObject *);
extern PyObject *modulecode_chardet$escsm(PyObject *);
extern PyObject *modulecode_chardet$eucjpprober(PyObject *);
extern PyObject *modulecode_chardet$euckrfreq(PyObject *);
extern PyObject *modulecode_chardet$euckrprober(PyObject *);
extern PyObject *modulecode_chardet$euctwfreq(PyObject *);
extern PyObject *modulecode_chardet$euctwprober(PyObject *);
extern PyObject *modulecode_chardet$gb2312freq(PyObject *);
extern PyObject *modulecode_chardet$gb2312prober(PyObject *);
extern PyObject *modulecode_chardet$hebrewprober(PyObject *);
extern PyObject *modulecode_chardet$jisfreq(PyObject *);
extern PyObject *modulecode_chardet$jpcntx(PyObject *);
extern PyObject *modulecode_chardet$langbulgarianmodel(PyObject *);
extern PyObject *modulecode_chardet$langcyrillicmodel(PyObject *);
extern PyObject *modulecode_chardet$langgreekmodel(PyObject *);
extern PyObject *modulecode_chardet$langhebrewmodel(PyObject *);
extern PyObject *modulecode_chardet$langthaimodel(PyObject *);
extern PyObject *modulecode_chardet$langturkishmodel(PyObject *);
extern PyObject *modulecode_chardet$latin1prober(PyObject *);
extern PyObject *modulecode_chardet$mbcharsetprober(PyObject *);
extern PyObject *modulecode_chardet$mbcsgroupprober(PyObject *);
extern PyObject *modulecode_chardet$mbcssm(PyObject *);
extern PyObject *modulecode_chardet$sbcharsetprober(PyObject *);
extern PyObject *modulecode_chardet$sbcsgroupprober(PyObject *);
extern PyObject *modulecode_chardet$sjisprober(PyObject *);
extern PyObject *modulecode_chardet$universaldetector(PyObject *);
extern PyObject *modulecode_chardet$utf8prober(PyObject *);
extern PyObject *modulecode_chardet$version(PyObject *);
extern PyObject *modulecode_config(PyObject *);
extern PyObject *modulecode_idna(PyObject *);
extern PyObject *modulecode_idna$core(PyObject *);
extern PyObject *modulecode_idna$idnadata(PyObject *);
extern PyObject *modulecode_idna$intranges(PyObject *);
extern PyObject *modulecode_idna$package_data(PyObject *);
extern PyObject *modulecode_idna$uts46data(PyObject *);
extern PyObject *modulecode_requests(PyObject *);
extern PyObject *modulecode_requests$__version__(PyObject *);
extern PyObject *modulecode_requests$_internal_utils(PyObject *);
extern PyObject *modulecode_requests$adapters(PyObject *);
extern PyObject *modulecode_requests$api(PyObject *);
extern PyObject *modulecode_requests$auth(PyObject *);
extern PyObject *modulecode_requests$certs(PyObject *);
extern PyObject *modulecode_requests$compat(PyObject *);
extern PyObject *modulecode_requests$cookies(PyObject *);
extern PyObject *modulecode_requests$exceptions(PyObject *);
extern PyObject *modulecode_requests$hooks(PyObject *);
extern PyObject *modulecode_requests$models(PyObject *);
extern PyObject *modulecode_requests$packages(PyObject *);
extern PyObject *modulecode_requests$sessions(PyObject *);
extern PyObject *modulecode_requests$status_codes(PyObject *);
extern PyObject *modulecode_requests$structures(PyObject *);
extern PyObject *modulecode_requests$utils(PyObject *);
extern PyObject *modulecode_six(PyObject *);
extern PyObject *modulecode_spotipy(PyObject *);
extern PyObject *modulecode_spotipy$client(PyObject *);
extern PyObject *modulecode_spotipy$exceptions(PyObject *);
extern PyObject *modulecode_spotipy$oauth2(PyObject *);
extern PyObject *modulecode_spotipy$util(PyObject *);
extern PyObject *modulecode_urllib3(PyObject *);
extern PyObject *modulecode_urllib3$_collections(PyObject *);
extern PyObject *modulecode_urllib3$connection(PyObject *);
extern PyObject *modulecode_urllib3$connectionpool(PyObject *);
extern PyObject *modulecode_urllib3$contrib(PyObject *);
extern PyObject *modulecode_urllib3$contrib$_appengine_environ(PyObject *);
extern PyObject *modulecode_urllib3$contrib$appengine(PyObject *);
extern PyObject *modulecode_urllib3$contrib$pyopenssl(PyObject *);
extern PyObject *modulecode_urllib3$contrib$socks(PyObject *);
extern PyObject *modulecode_urllib3$exceptions(PyObject *);
extern PyObject *modulecode_urllib3$fields(PyObject *);
extern PyObject *modulecode_urllib3$filepost(PyObject *);
extern PyObject *modulecode_urllib3$packages(PyObject *);
extern PyObject *modulecode_urllib3$packages$backports(PyObject *);
extern PyObject *modulecode_urllib3$packages$backports$makefile(PyObject *);
extern PyObject *modulecode_urllib3$packages$six(PyObject *);
extern PyObject *modulecode_urllib3$packages$ssl_match_hostname(PyObject *);
extern PyObject *modulecode_urllib3$packages$ssl_match_hostname$_implementation(PyObject *);
extern PyObject *modulecode_urllib3$poolmanager(PyObject *);
extern PyObject *modulecode_urllib3$request(PyObject *);
extern PyObject *modulecode_urllib3$response(PyObject *);
extern PyObject *modulecode_urllib3$util(PyObject *);
extern PyObject *modulecode_urllib3$util$connection(PyObject *);
extern PyObject *modulecode_urllib3$util$queue(PyObject *);
extern PyObject *modulecode_urllib3$util$request(PyObject *);
extern PyObject *modulecode_urllib3$util$response(PyObject *);
extern PyObject *modulecode_urllib3$util$retry(PyObject *);
extern PyObject *modulecode_urllib3$util$ssl_(PyObject *);
extern PyObject *modulecode_urllib3$util$timeout(PyObject *);
extern PyObject *modulecode_urllib3$util$url(PyObject *);
extern PyObject *modulecode_urllib3$util$wait(PyObject *);
extern PyObject *modulecode_youtube_dl(PyObject *);
extern PyObject *modulecode_youtube_dl$YoutubeDL(PyObject *);
extern PyObject *modulecode_youtube_dl$aes(PyObject *);
extern PyObject *modulecode_youtube_dl$cache(PyObject *);
extern PyObject *modulecode_youtube_dl$compat(PyObject *);
extern PyObject *modulecode_youtube_dl$downloader(PyObject *);
extern PyObject *modulecode_youtube_dl$downloader$common(PyObject *);
extern PyObject *modulecode_youtube_dl$downloader$dash(PyObject *);
extern PyObject *modulecode_youtube_dl$downloader$external(PyObject *);
extern PyObject *modulecode_youtube_dl$downloader$f4m(PyObject *);
extern PyObject *modulecode_youtube_dl$downloader$fragment(PyObject *);
extern PyObject *modulecode_youtube_dl$downloader$hls(PyObject *);
extern PyObject *modulecode_youtube_dl$downloader$http(PyObject *);
extern PyObject *modulecode_youtube_dl$downloader$ism(PyObject *);
extern PyObject *modulecode_youtube_dl$downloader$rtmp(PyObject *);
extern PyObject *modulecode_youtube_dl$downloader$rtsp(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$abc(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$abcnews(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$abcotvs(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$academicearth(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$acast(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$adn(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$adobeconnect(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$adobepass(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$adobetv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$adultswim(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$aenetworks(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$afreecatv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$airmozilla(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$aliexpress(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$aljazeera(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$allocine(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$alphaporno(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$amcnetworks(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$americastestkitchen(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$amp(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$animeondemand(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$anvato(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$aol(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$apa(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$aparat(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$appleconnect(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$appletrailers(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$archiveorg(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ard(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$arkena(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$arte(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$asiancrush(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$atresplayer(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$atttechchannel(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$atvat(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$audimedia(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$audioboom(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$audiomack(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$awaan(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$aws(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$azmedien(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$baidu(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$bandcamp(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$bbc(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$beampro(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$beatport(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$beeg(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$behindkink(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$bellmedia(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$bet(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$bfi(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$bigflix(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$bild(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$bilibili(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$biobiochiletv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$biqle(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$bitchute(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$bleacherreport(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$blinkx(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$bloomberg(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$bokecc(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$bostonglobe(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$bpb(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$br(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$bravotv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$breakcom(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$brightcove(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$businessinsider(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$buzzfeed(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$byutv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$c56(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$camdemy(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cammodels(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$camtube(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$camwithher(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$canalc2(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$canalplus(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$canvas(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$carambatv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cartoonnetwork(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cbc(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cbs(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cbsinteractive(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cbslocal(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cbsnews(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cbssports(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ccc(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ccma(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cctv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cda(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ceskatelevize(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$channel9(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$charlierose(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$chaturbate(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$chilloutzone(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$chirbit(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cinchcast(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cinemax(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ciscolive(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cjsw(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cliphunter(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$clippit(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cliprs(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$clipsyndicate(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$closertotruth(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cloudflarestream(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cloudy(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$clubic(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$clyp(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cmt(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cnbc(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cnn(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$comedycentral(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$common(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$commonmistakes(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$commonprotocols(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$condenast(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$contv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$corus(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$coub(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cracked(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$crackle(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$crooksandliars(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$crunchyroll(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cspan(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ctsnews(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ctvnews(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cultureunplugged(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$curiositystream(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$cwtv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$dailymail(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$dailymotion(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$daum(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$dbtv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$dctp(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$deezer(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$defense(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$democracynow(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$dfb(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$dhm(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$digg(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$digiteka(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$discovery(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$discoverygo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$discoverynetworks(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$discoveryvr(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$disney(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$dispeak(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$dlive(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$dotsub(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$douyutv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$dplay(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$drbonanza(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$dreisat(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$dropbox(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$drtuber(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$drtv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$dtube(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$dumpert(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$dvtv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$dw(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$eagleplatform(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ebaumsworld(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$echomsk(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$egghead(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ehow(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$eighttracks(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$einthusan(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$eitb(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ellentube(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$elpais(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$embedly(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$engadget(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$eporner(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$eroprofile(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$escapist(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$espn(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$esri(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$europa(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$everyonesmixtape(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$expotv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$expressen(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$extractors(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$extremetube(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$eyedotv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$facebook(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$faz(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$fc2(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$fczenit(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$filmon(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$filmweb(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$firsttv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$fivemin(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$fivetv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$flickr(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$folketinget(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$footyroom(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$formula1(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$fourtube(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$fox(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$fox9(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$foxgay(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$foxnews(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$foxsports(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$franceculture(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$franceinter(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$francetv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$freesound(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$freespeech(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$freshlive(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$frontendmasters(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$funimation(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$funk(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$fusion(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$fxnetworks(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$gaia(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$gameinformer(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$gamespot(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$gamestar(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$gaskrank(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$gazeta(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$gdcvault(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$generic(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$gfycat(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$giantbomb(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$giga(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$gigya(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$glide(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$globo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$go(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$godtube(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$golem(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$googledrive(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$googleplus(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$googlesearch(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$goshgay(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$gputechconf(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$groupon(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$hbo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$hearthisat(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$heise(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$hellporno(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$helsinki(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$hentaistigma(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$hgtv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$hidive(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$historicfilms(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$hitbox(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$hitrecord(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$hketv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$hornbunny(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$hotnewhiphop(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$hotstar(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$howcast(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$howstuffworks(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$hrti(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$huajiao(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$huffpost(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$hungama(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$hypem(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ign(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$imdb(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$imggaming(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$imgur(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ina(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$inc(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$indavideo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$infoq(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$instagram(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$internazionale(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$internetvideoarchive(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$iprima(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$iqiyi(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ir90tv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$itv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ivi(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ivideon(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$iwara(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$izlesene(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$jamendo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$jeuxvideo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$joj(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$jove(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$jwplatform(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$kakao(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$kaltura(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$kanalplay(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$kankan(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$karaoketv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$karrierevideos(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$keezmovies(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ketnet(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$khanacademy(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$kickstarter(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$kinja(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$kinopoisk(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$konserthusetplay(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$krasview(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ku6(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$kusi(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$kuwo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$la7(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$laola1tv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$lci(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$lcp(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$lecture2go(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$lecturio(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$leeco(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$lego(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$lemonde(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$lenta(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$libraryofcongress(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$libsyn(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$lifenews(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$limelight(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$line(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$linkedin(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$linuxacademy(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$litv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$livejournal(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$liveleak(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$livestream(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$lnkgo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$localnews8(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$lovehomeporn(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$lrt(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$lynda(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$m6(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$mailru(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$malltv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$mangomolo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$manyvids(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$markiza(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$massengeschmacktv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$matchtv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$mdr(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$medialaan(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$mediaset(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$mediasite(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$medici(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$megaphone(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$meipai(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$melonvod(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$meta(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$metacafe(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$metacritic(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$mgoon(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$mgtv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$miaopai(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$microsoftvirtualacademy(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ministrygrid(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$minoto(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$miomio(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$mit(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$mitele(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$mixcloud(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$mlb(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$mnet(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$moevideo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$mofosex(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$mojvideo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$morningstar(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$motherless(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$motorsport(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$movieclips(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$moviezine(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$movingimage(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$msn(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$mtv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$muenchentv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$mwave(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$mychannels(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$myspace(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$myspass(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$myvi(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$myvidster(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$nationalgeographic(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$naver(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$nba(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$nbc(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ndr(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ndtv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$nerdcubed(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$neteasemusic(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$netzkino(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$newgrounds(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$newstube(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$nextmedia(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$nexx(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$nfl(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$nhk(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$nhl(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$nick(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$niconico(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ninecninemedia(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ninegag(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ninenow(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$nintendo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$njpwworld(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$nobelprize(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$noco(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$nonktube(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$noovo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$normalboots(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$nosvideo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$nova(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$nowness(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$noz(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$npo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$npr(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$nrk(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$nrl(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ntvcojp(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ntvde(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ntvru(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$nuevo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$nuvid(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$nytimes(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$nzz(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$odatv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$odnoklassniki(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$oktoberfesttv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$once(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ondemandkorea(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$onet(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$onionstudios(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ooyala(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$openload(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ora(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$orf(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$outsidetv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$packtpub(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$pandoratv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$parliamentliveuk(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$patreon(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$pbs(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$pearvideo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$peertube(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$people(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$performgroup(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$periscope(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$philharmoniedeparis(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$phoenix(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$photobucket(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$picarto(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$piksel(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$pinkbike(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$pladform(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$platzi(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$playfm(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$playplustv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$plays(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$playtvak(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$playvid(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$playwire(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$pluralsight(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$podomatic(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$pokemon(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$polskieradio(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$popcorntimes(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$popcorntv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$porn91(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$porncom(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$pornhd(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$pornhub(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$pornotube(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$pornovoisines(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$pornoxo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$presstv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$prosiebensat1(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$puhutv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$puls4(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$pyvideo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$qqmusic(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$r7(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$radiobremen(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$radiocanada(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$radiode(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$radiofrance(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$radiojavan(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$rai(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$raywenderlich(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$rbmaradio(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$rds(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$redbulltv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$reddit(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$redtube(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$regiotv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$rentv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$restudy(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$reuters(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$reverbnation(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$rice(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$rmcdecouverte(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ro220(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$rockstargames(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$roosterteeth(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$rottentomatoes(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$roxwel(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$rozhlas(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$rtbf(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$rte(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$rtl2(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$rtlnl(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$rtp(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$rts(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$rtve(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$rtvnh(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$rtvs(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ruhd(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$rutube(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$rutv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ruutu(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ruv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$safari(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$sapo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$savefrom(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$sbs(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$screencast(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$screencastomatic(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$scrippsnetworks(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$scte(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$seeker(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$senateisvp(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$sendtonews(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$servus(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$sevenplus(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$sexu(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$seznamzpravy(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$shahid(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$shared(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$showroomlive(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$sina(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$sixplay(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$sky(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$skylinewebcams(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$skynewsarabia(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$slideshare(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$slideslive(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$slutload(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$smotri(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$snotr(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$sohu(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$sonyliv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$soundcloud(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$soundgasm(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$southpark(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$spankbang(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$spankwire(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$spiegel(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$spiegeltv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$spike(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$sport5(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$sportbox(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$sportdeutschland(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$springboardplatform(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$sprout(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$srgssr(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$srmediathek(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$stanfordoc(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$steam(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$stitcher(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$streamable(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$streamcloud(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$streamcz(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$streetvoice(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$stretchinternet(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$stv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$sunporno(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$sverigesradio(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$svt(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$swrmediathek(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$syfy(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$sztvhu(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tagesschau(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tass(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tastytrade(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tbs(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tdslifeway(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$teachable(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$teachertube(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$teachingchannel(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$teamcoco(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$teamtreehouse(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$techtalks(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ted(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tele13(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tele5(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$telebruxelles(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$telecinco(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$telegraaf(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$telemb(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$telequebec(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$teletask(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$telewebion(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tennistv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tenplay(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$testurl(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tf1(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tfo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$theintercept(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$theplatform(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$thescene(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$thestar(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$thesun(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$theweatherchannel(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$thisamericanlife(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$thisav(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$thisoldhouse(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$threeqsdn(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tiktok(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tinypic(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tmz(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tnaflix(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$toggle(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tonline(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$toongoggles(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$toutv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$toypics(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$traileraddict(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$trilulilu(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$trunews(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$trutv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tube8(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tubitv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tumblr(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tunein(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tunepk(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$turbo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$turner(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tv2(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tv2dk(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tv2hu(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tv4(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tv5mondeplus(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tva(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tvanouvelles(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tvc(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tvigle(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tvland(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tvn24(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tvnet(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tvnoe(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tvnow(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tvp(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tvplay(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tvplayer(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$tweakers(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$twentyfourvideo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$twentymin(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$twentythreevideo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$twitcasting(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$twitch(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$twitter(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$udemy(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$udn(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ufctv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$uktvplay(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$umg(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$unistra(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$unity(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$uol(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$uplynk(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$urort(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$urplay(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$usanetwork(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$usatoday(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ustream(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ustudio(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$varzesh3(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vbox7(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$veehd(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$veoh(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vesti(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vevo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vgtv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vh1(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vice(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vidbit(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$viddler(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$videa(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$videodetective(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$videofyme(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$videomore(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$videopress(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vidio(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vidlii(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vidme(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vidzi(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vier(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$viewlift(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$viidea(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$viki(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vimeo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vimple(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vine(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$viqeo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$viu(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vk(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vlive(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vodlocker(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vodpl(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vodplatform(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$voicerepublic(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$voot(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$voxmedia(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vrak(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vrt(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vrv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vshare(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vube(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vuclip(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vvvvid(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vyborymos(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$vzaar(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$wakanim(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$walla(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$washingtonpost(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$wat(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$watchbox(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$watchindianporn(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$wdr(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$webcaster(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$webofstories(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$weibo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$weiqitv(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$wistia(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$worldstarhiphop(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$wsj(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$wwe(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$xbef(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$xboxclips(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$xfileshare(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$xhamster(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$xiami(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ximalaya(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$xminus(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$xnxx(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$xstream(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$xtube(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$xuite(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$xvideos(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$xxxymovies(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$yahoo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$yandexdisk(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$yandexmusic(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$yandexvideo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$yapfiles(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$yesjapan(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$yinyuetai(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$ynet(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$youjizz(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$youku(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$younow(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$youporn(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$yourporn(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$yourupload(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$youtube(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$zapiks(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$zaq1(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$zattoo(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$zdf(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$zingmp3(PyObject *);
extern PyObject *modulecode_youtube_dl$extractor$zype(PyObject *);
extern PyObject *modulecode_youtube_dl$jsinterp(PyObject *);
extern PyObject *modulecode_youtube_dl$options(PyObject *);
extern PyObject *modulecode_youtube_dl$postprocessor(PyObject *);
extern PyObject *modulecode_youtube_dl$postprocessor$common(PyObject *);
extern PyObject *modulecode_youtube_dl$postprocessor$embedthumbnail(PyObject *);
extern PyObject *modulecode_youtube_dl$postprocessor$execafterdownload(PyObject *);
extern PyObject *modulecode_youtube_dl$postprocessor$ffmpeg(PyObject *);
extern PyObject *modulecode_youtube_dl$postprocessor$metadatafromtitle(PyObject *);
extern PyObject *modulecode_youtube_dl$postprocessor$xattrpp(PyObject *);
extern PyObject *modulecode_youtube_dl$socks(PyObject *);
extern PyObject *modulecode_youtube_dl$swfinterp(PyObject *);
extern PyObject *modulecode_youtube_dl$update(PyObject *);
extern PyObject *modulecode_youtube_dl$utils(PyObject *);
extern PyObject *modulecode_youtube_dl$version(PyObject *);
static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"App", modulecode_App, 0, 0, },
    {"Music", modulecode_Music, 0, 0, },
    {"SpotifyProcessor", modulecode_SpotifyProcessor, 0, 0, },
    {"__main__", modulecode___main__, 0, 0, },
    {"certifi", modulecode_certifi, 0, 0, NUITKA_PACKAGE_FLAG},
    {"certifi.core", modulecode_certifi$core, 0, 0, },
    {"chardet", modulecode_chardet, 0, 0, NUITKA_PACKAGE_FLAG},
    {"chardet.big5freq", modulecode_chardet$big5freq, 0, 0, },
    {"chardet.big5prober", modulecode_chardet$big5prober, 0, 0, },
    {"chardet.chardistribution", modulecode_chardet$chardistribution, 0, 0, },
    {"chardet.charsetgroupprober", modulecode_chardet$charsetgroupprober, 0, 0, },
    {"chardet.charsetprober", modulecode_chardet$charsetprober, 0, 0, },
    {"chardet.codingstatemachine", modulecode_chardet$codingstatemachine, 0, 0, },
    {"chardet.compat", modulecode_chardet$compat, 0, 0, },
    {"chardet.cp949prober", modulecode_chardet$cp949prober, 0, 0, },
    {"chardet.enums", modulecode_chardet$enums, 0, 0, },
    {"chardet.escprober", modulecode_chardet$escprober, 0, 0, },
    {"chardet.escsm", modulecode_chardet$escsm, 0, 0, },
    {"chardet.eucjpprober", modulecode_chardet$eucjpprober, 0, 0, },
    {"chardet.euckrfreq", modulecode_chardet$euckrfreq, 0, 0, },
    {"chardet.euckrprober", modulecode_chardet$euckrprober, 0, 0, },
    {"chardet.euctwfreq", modulecode_chardet$euctwfreq, 0, 0, },
    {"chardet.euctwprober", modulecode_chardet$euctwprober, 0, 0, },
    {"chardet.gb2312freq", modulecode_chardet$gb2312freq, 0, 0, },
    {"chardet.gb2312prober", modulecode_chardet$gb2312prober, 0, 0, },
    {"chardet.hebrewprober", modulecode_chardet$hebrewprober, 0, 0, },
    {"chardet.jisfreq", modulecode_chardet$jisfreq, 0, 0, },
    {"chardet.jpcntx", modulecode_chardet$jpcntx, 0, 0, },
    {"chardet.langbulgarianmodel", modulecode_chardet$langbulgarianmodel, 0, 0, },
    {"chardet.langcyrillicmodel", modulecode_chardet$langcyrillicmodel, 0, 0, },
    {"chardet.langgreekmodel", modulecode_chardet$langgreekmodel, 0, 0, },
    {"chardet.langhebrewmodel", modulecode_chardet$langhebrewmodel, 0, 0, },
    {"chardet.langthaimodel", modulecode_chardet$langthaimodel, 0, 0, },
    {"chardet.langturkishmodel", modulecode_chardet$langturkishmodel, 0, 0, },
    {"chardet.latin1prober", modulecode_chardet$latin1prober, 0, 0, },
    {"chardet.mbcharsetprober", modulecode_chardet$mbcharsetprober, 0, 0, },
    {"chardet.mbcsgroupprober", modulecode_chardet$mbcsgroupprober, 0, 0, },
    {"chardet.mbcssm", modulecode_chardet$mbcssm, 0, 0, },
    {"chardet.sbcharsetprober", modulecode_chardet$sbcharsetprober, 0, 0, },
    {"chardet.sbcsgroupprober", modulecode_chardet$sbcsgroupprober, 0, 0, },
    {"chardet.sjisprober", modulecode_chardet$sjisprober, 0, 0, },
    {"chardet.universaldetector", modulecode_chardet$universaldetector, 0, 0, },
    {"chardet.utf8prober", modulecode_chardet$utf8prober, 0, 0, },
    {"chardet.version", modulecode_chardet$version, 0, 0, },
    {"config", modulecode_config, 0, 0, },
    {"idna", modulecode_idna, 0, 0, NUITKA_PACKAGE_FLAG},
    {"idna.core", modulecode_idna$core, 0, 0, },
    {"idna.idnadata", modulecode_idna$idnadata, 0, 0, },
    {"idna.intranges", modulecode_idna$intranges, 0, 0, },
    {"idna.package_data", modulecode_idna$package_data, 0, 0, },
    {"idna.uts46data", modulecode_idna$uts46data, 0, 0, },
    {"requests", modulecode_requests, 0, 0, NUITKA_PACKAGE_FLAG},
    {"requests.__version__", modulecode_requests$__version__, 0, 0, },
    {"requests._internal_utils", modulecode_requests$_internal_utils, 0, 0, },
    {"requests.adapters", modulecode_requests$adapters, 0, 0, },
    {"requests.api", modulecode_requests$api, 0, 0, },
    {"requests.auth", modulecode_requests$auth, 0, 0, },
    {"requests.certs", modulecode_requests$certs, 0, 0, },
    {"requests.compat", modulecode_requests$compat, 0, 0, },
    {"requests.cookies", modulecode_requests$cookies, 0, 0, },
    {"requests.exceptions", modulecode_requests$exceptions, 0, 0, },
    {"requests.hooks", modulecode_requests$hooks, 0, 0, },
    {"requests.models", modulecode_requests$models, 0, 0, },
    {"requests.packages", modulecode_requests$packages, 0, 0, },
    {"requests.sessions", modulecode_requests$sessions, 0, 0, },
    {"requests.status_codes", modulecode_requests$status_codes, 0, 0, },
    {"requests.structures", modulecode_requests$structures, 0, 0, },
    {"requests.utils", modulecode_requests$utils, 0, 0, },
    {"six", modulecode_six, 0, 0, },
    {"spotipy", modulecode_spotipy, 0, 0, NUITKA_PACKAGE_FLAG},
    {"spotipy.client", modulecode_spotipy$client, 0, 0, },
    {"spotipy.exceptions", modulecode_spotipy$exceptions, 0, 0, },
    {"spotipy.oauth2", modulecode_spotipy$oauth2, 0, 0, },
    {"spotipy.util", modulecode_spotipy$util, 0, 0, },
    {"urllib3", modulecode_urllib3, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3._collections", modulecode_urllib3$_collections, 0, 0, },
    {"urllib3.connection", modulecode_urllib3$connection, 0, 0, },
    {"urllib3.connectionpool", modulecode_urllib3$connectionpool, 0, 0, },
    {"urllib3.contrib", modulecode_urllib3$contrib, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.contrib._appengine_environ", modulecode_urllib3$contrib$_appengine_environ, 0, 0, },
    {"urllib3.contrib.appengine", modulecode_urllib3$contrib$appengine, 0, 0, },
    {"urllib3.contrib.pyopenssl", modulecode_urllib3$contrib$pyopenssl, 0, 0, },
    {"urllib3.contrib.socks", modulecode_urllib3$contrib$socks, 0, 0, },
    {"urllib3.exceptions", modulecode_urllib3$exceptions, 0, 0, },
    {"urllib3.fields", modulecode_urllib3$fields, 0, 0, },
    {"urllib3.filepost", modulecode_urllib3$filepost, 0, 0, },
    {"urllib3.packages", modulecode_urllib3$packages, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.backports", modulecode_urllib3$packages$backports, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.backports.makefile", modulecode_urllib3$packages$backports$makefile, 0, 0, },
    {"urllib3.packages.six", modulecode_urllib3$packages$six, 0, 0, },
    {"urllib3.packages.ssl_match_hostname", modulecode_urllib3$packages$ssl_match_hostname, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.ssl_match_hostname._implementation", modulecode_urllib3$packages$ssl_match_hostname$_implementation, 0, 0, },
    {"urllib3.poolmanager", modulecode_urllib3$poolmanager, 0, 0, },
    {"urllib3.request", modulecode_urllib3$request, 0, 0, },
    {"urllib3.response", modulecode_urllib3$response, 0, 0, },
    {"urllib3.util", modulecode_urllib3$util, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.util.connection", modulecode_urllib3$util$connection, 0, 0, },
    {"urllib3.util.queue", modulecode_urllib3$util$queue, 0, 0, },
    {"urllib3.util.request", modulecode_urllib3$util$request, 0, 0, },
    {"urllib3.util.response", modulecode_urllib3$util$response, 0, 0, },
    {"urllib3.util.retry", modulecode_urllib3$util$retry, 0, 0, },
    {"urllib3.util.ssl_", modulecode_urllib3$util$ssl_, 0, 0, },
    {"urllib3.util.timeout", modulecode_urllib3$util$timeout, 0, 0, },
    {"urllib3.util.url", modulecode_urllib3$util$url, 0, 0, },
    {"urllib3.util.wait", modulecode_urllib3$util$wait, 0, 0, },
    {"youtube_dl", modulecode_youtube_dl, 0, 0, NUITKA_PACKAGE_FLAG},
    {"youtube_dl.YoutubeDL", modulecode_youtube_dl$YoutubeDL, 0, 0, },
    {"youtube_dl.aes", modulecode_youtube_dl$aes, 0, 0, },
    {"youtube_dl.cache", modulecode_youtube_dl$cache, 0, 0, },
    {"youtube_dl.compat", modulecode_youtube_dl$compat, 0, 0, },
    {"youtube_dl.downloader", modulecode_youtube_dl$downloader, 0, 0, NUITKA_PACKAGE_FLAG},
    {"youtube_dl.downloader.common", modulecode_youtube_dl$downloader$common, 0, 0, },
    {"youtube_dl.downloader.dash", modulecode_youtube_dl$downloader$dash, 0, 0, },
    {"youtube_dl.downloader.external", modulecode_youtube_dl$downloader$external, 0, 0, },
    {"youtube_dl.downloader.f4m", modulecode_youtube_dl$downloader$f4m, 0, 0, },
    {"youtube_dl.downloader.fragment", modulecode_youtube_dl$downloader$fragment, 0, 0, },
    {"youtube_dl.downloader.hls", modulecode_youtube_dl$downloader$hls, 0, 0, },
    {"youtube_dl.downloader.http", modulecode_youtube_dl$downloader$http, 0, 0, },
    {"youtube_dl.downloader.ism", modulecode_youtube_dl$downloader$ism, 0, 0, },
    {"youtube_dl.downloader.rtmp", modulecode_youtube_dl$downloader$rtmp, 0, 0, },
    {"youtube_dl.downloader.rtsp", modulecode_youtube_dl$downloader$rtsp, 0, 0, },
    {"youtube_dl.extractor", modulecode_youtube_dl$extractor, 0, 0, NUITKA_PACKAGE_FLAG},
    {"youtube_dl.extractor.abc", modulecode_youtube_dl$extractor$abc, 0, 0, },
    {"youtube_dl.extractor.abcnews", modulecode_youtube_dl$extractor$abcnews, 0, 0, },
    {"youtube_dl.extractor.abcotvs", modulecode_youtube_dl$extractor$abcotvs, 0, 0, },
    {"youtube_dl.extractor.academicearth", modulecode_youtube_dl$extractor$academicearth, 0, 0, },
    {"youtube_dl.extractor.acast", modulecode_youtube_dl$extractor$acast, 0, 0, },
    {"youtube_dl.extractor.adn", modulecode_youtube_dl$extractor$adn, 0, 0, },
    {"youtube_dl.extractor.adobeconnect", modulecode_youtube_dl$extractor$adobeconnect, 0, 0, },
    {"youtube_dl.extractor.adobepass", modulecode_youtube_dl$extractor$adobepass, 0, 0, },
    {"youtube_dl.extractor.adobetv", modulecode_youtube_dl$extractor$adobetv, 0, 0, },
    {"youtube_dl.extractor.adultswim", modulecode_youtube_dl$extractor$adultswim, 0, 0, },
    {"youtube_dl.extractor.aenetworks", modulecode_youtube_dl$extractor$aenetworks, 0, 0, },
    {"youtube_dl.extractor.afreecatv", modulecode_youtube_dl$extractor$afreecatv, 0, 0, },
    {"youtube_dl.extractor.airmozilla", modulecode_youtube_dl$extractor$airmozilla, 0, 0, },
    {"youtube_dl.extractor.aliexpress", modulecode_youtube_dl$extractor$aliexpress, 0, 0, },
    {"youtube_dl.extractor.aljazeera", modulecode_youtube_dl$extractor$aljazeera, 0, 0, },
    {"youtube_dl.extractor.allocine", modulecode_youtube_dl$extractor$allocine, 0, 0, },
    {"youtube_dl.extractor.alphaporno", modulecode_youtube_dl$extractor$alphaporno, 0, 0, },
    {"youtube_dl.extractor.amcnetworks", modulecode_youtube_dl$extractor$amcnetworks, 0, 0, },
    {"youtube_dl.extractor.americastestkitchen", modulecode_youtube_dl$extractor$americastestkitchen, 0, 0, },
    {"youtube_dl.extractor.amp", modulecode_youtube_dl$extractor$amp, 0, 0, },
    {"youtube_dl.extractor.animeondemand", modulecode_youtube_dl$extractor$animeondemand, 0, 0, },
    {"youtube_dl.extractor.anvato", modulecode_youtube_dl$extractor$anvato, 0, 0, },
    {"youtube_dl.extractor.aol", modulecode_youtube_dl$extractor$aol, 0, 0, },
    {"youtube_dl.extractor.apa", modulecode_youtube_dl$extractor$apa, 0, 0, },
    {"youtube_dl.extractor.aparat", modulecode_youtube_dl$extractor$aparat, 0, 0, },
    {"youtube_dl.extractor.appleconnect", modulecode_youtube_dl$extractor$appleconnect, 0, 0, },
    {"youtube_dl.extractor.appletrailers", modulecode_youtube_dl$extractor$appletrailers, 0, 0, },
    {"youtube_dl.extractor.archiveorg", modulecode_youtube_dl$extractor$archiveorg, 0, 0, },
    {"youtube_dl.extractor.ard", modulecode_youtube_dl$extractor$ard, 0, 0, },
    {"youtube_dl.extractor.arkena", modulecode_youtube_dl$extractor$arkena, 0, 0, },
    {"youtube_dl.extractor.arte", modulecode_youtube_dl$extractor$arte, 0, 0, },
    {"youtube_dl.extractor.asiancrush", modulecode_youtube_dl$extractor$asiancrush, 0, 0, },
    {"youtube_dl.extractor.atresplayer", modulecode_youtube_dl$extractor$atresplayer, 0, 0, },
    {"youtube_dl.extractor.atttechchannel", modulecode_youtube_dl$extractor$atttechchannel, 0, 0, },
    {"youtube_dl.extractor.atvat", modulecode_youtube_dl$extractor$atvat, 0, 0, },
    {"youtube_dl.extractor.audimedia", modulecode_youtube_dl$extractor$audimedia, 0, 0, },
    {"youtube_dl.extractor.audioboom", modulecode_youtube_dl$extractor$audioboom, 0, 0, },
    {"youtube_dl.extractor.audiomack", modulecode_youtube_dl$extractor$audiomack, 0, 0, },
    {"youtube_dl.extractor.awaan", modulecode_youtube_dl$extractor$awaan, 0, 0, },
    {"youtube_dl.extractor.aws", modulecode_youtube_dl$extractor$aws, 0, 0, },
    {"youtube_dl.extractor.azmedien", modulecode_youtube_dl$extractor$azmedien, 0, 0, },
    {"youtube_dl.extractor.baidu", modulecode_youtube_dl$extractor$baidu, 0, 0, },
    {"youtube_dl.extractor.bandcamp", modulecode_youtube_dl$extractor$bandcamp, 0, 0, },
    {"youtube_dl.extractor.bbc", modulecode_youtube_dl$extractor$bbc, 0, 0, },
    {"youtube_dl.extractor.beampro", modulecode_youtube_dl$extractor$beampro, 0, 0, },
    {"youtube_dl.extractor.beatport", modulecode_youtube_dl$extractor$beatport, 0, 0, },
    {"youtube_dl.extractor.beeg", modulecode_youtube_dl$extractor$beeg, 0, 0, },
    {"youtube_dl.extractor.behindkink", modulecode_youtube_dl$extractor$behindkink, 0, 0, },
    {"youtube_dl.extractor.bellmedia", modulecode_youtube_dl$extractor$bellmedia, 0, 0, },
    {"youtube_dl.extractor.bet", modulecode_youtube_dl$extractor$bet, 0, 0, },
    {"youtube_dl.extractor.bfi", modulecode_youtube_dl$extractor$bfi, 0, 0, },
    {"youtube_dl.extractor.bigflix", modulecode_youtube_dl$extractor$bigflix, 0, 0, },
    {"youtube_dl.extractor.bild", modulecode_youtube_dl$extractor$bild, 0, 0, },
    {"youtube_dl.extractor.bilibili", modulecode_youtube_dl$extractor$bilibili, 0, 0, },
    {"youtube_dl.extractor.biobiochiletv", modulecode_youtube_dl$extractor$biobiochiletv, 0, 0, },
    {"youtube_dl.extractor.biqle", modulecode_youtube_dl$extractor$biqle, 0, 0, },
    {"youtube_dl.extractor.bitchute", modulecode_youtube_dl$extractor$bitchute, 0, 0, },
    {"youtube_dl.extractor.bleacherreport", modulecode_youtube_dl$extractor$bleacherreport, 0, 0, },
    {"youtube_dl.extractor.blinkx", modulecode_youtube_dl$extractor$blinkx, 0, 0, },
    {"youtube_dl.extractor.bloomberg", modulecode_youtube_dl$extractor$bloomberg, 0, 0, },
    {"youtube_dl.extractor.bokecc", modulecode_youtube_dl$extractor$bokecc, 0, 0, },
    {"youtube_dl.extractor.bostonglobe", modulecode_youtube_dl$extractor$bostonglobe, 0, 0, },
    {"youtube_dl.extractor.bpb", modulecode_youtube_dl$extractor$bpb, 0, 0, },
    {"youtube_dl.extractor.br", modulecode_youtube_dl$extractor$br, 0, 0, },
    {"youtube_dl.extractor.bravotv", modulecode_youtube_dl$extractor$bravotv, 0, 0, },
    {"youtube_dl.extractor.breakcom", modulecode_youtube_dl$extractor$breakcom, 0, 0, },
    {"youtube_dl.extractor.brightcove", modulecode_youtube_dl$extractor$brightcove, 0, 0, },
    {"youtube_dl.extractor.businessinsider", modulecode_youtube_dl$extractor$businessinsider, 0, 0, },
    {"youtube_dl.extractor.buzzfeed", modulecode_youtube_dl$extractor$buzzfeed, 0, 0, },
    {"youtube_dl.extractor.byutv", modulecode_youtube_dl$extractor$byutv, 0, 0, },
    {"youtube_dl.extractor.c56", modulecode_youtube_dl$extractor$c56, 0, 0, },
    {"youtube_dl.extractor.camdemy", modulecode_youtube_dl$extractor$camdemy, 0, 0, },
    {"youtube_dl.extractor.cammodels", modulecode_youtube_dl$extractor$cammodels, 0, 0, },
    {"youtube_dl.extractor.camtube", modulecode_youtube_dl$extractor$camtube, 0, 0, },
    {"youtube_dl.extractor.camwithher", modulecode_youtube_dl$extractor$camwithher, 0, 0, },
    {"youtube_dl.extractor.canalc2", modulecode_youtube_dl$extractor$canalc2, 0, 0, },
    {"youtube_dl.extractor.canalplus", modulecode_youtube_dl$extractor$canalplus, 0, 0, },
    {"youtube_dl.extractor.canvas", modulecode_youtube_dl$extractor$canvas, 0, 0, },
    {"youtube_dl.extractor.carambatv", modulecode_youtube_dl$extractor$carambatv, 0, 0, },
    {"youtube_dl.extractor.cartoonnetwork", modulecode_youtube_dl$extractor$cartoonnetwork, 0, 0, },
    {"youtube_dl.extractor.cbc", modulecode_youtube_dl$extractor$cbc, 0, 0, },
    {"youtube_dl.extractor.cbs", modulecode_youtube_dl$extractor$cbs, 0, 0, },
    {"youtube_dl.extractor.cbsinteractive", modulecode_youtube_dl$extractor$cbsinteractive, 0, 0, },
    {"youtube_dl.extractor.cbslocal", modulecode_youtube_dl$extractor$cbslocal, 0, 0, },
    {"youtube_dl.extractor.cbsnews", modulecode_youtube_dl$extractor$cbsnews, 0, 0, },
    {"youtube_dl.extractor.cbssports", modulecode_youtube_dl$extractor$cbssports, 0, 0, },
    {"youtube_dl.extractor.ccc", modulecode_youtube_dl$extractor$ccc, 0, 0, },
    {"youtube_dl.extractor.ccma", modulecode_youtube_dl$extractor$ccma, 0, 0, },
    {"youtube_dl.extractor.cctv", modulecode_youtube_dl$extractor$cctv, 0, 0, },
    {"youtube_dl.extractor.cda", modulecode_youtube_dl$extractor$cda, 0, 0, },
    {"youtube_dl.extractor.ceskatelevize", modulecode_youtube_dl$extractor$ceskatelevize, 0, 0, },
    {"youtube_dl.extractor.channel9", modulecode_youtube_dl$extractor$channel9, 0, 0, },
    {"youtube_dl.extractor.charlierose", modulecode_youtube_dl$extractor$charlierose, 0, 0, },
    {"youtube_dl.extractor.chaturbate", modulecode_youtube_dl$extractor$chaturbate, 0, 0, },
    {"youtube_dl.extractor.chilloutzone", modulecode_youtube_dl$extractor$chilloutzone, 0, 0, },
    {"youtube_dl.extractor.chirbit", modulecode_youtube_dl$extractor$chirbit, 0, 0, },
    {"youtube_dl.extractor.cinchcast", modulecode_youtube_dl$extractor$cinchcast, 0, 0, },
    {"youtube_dl.extractor.cinemax", modulecode_youtube_dl$extractor$cinemax, 0, 0, },
    {"youtube_dl.extractor.ciscolive", modulecode_youtube_dl$extractor$ciscolive, 0, 0, },
    {"youtube_dl.extractor.cjsw", modulecode_youtube_dl$extractor$cjsw, 0, 0, },
    {"youtube_dl.extractor.cliphunter", modulecode_youtube_dl$extractor$cliphunter, 0, 0, },
    {"youtube_dl.extractor.clippit", modulecode_youtube_dl$extractor$clippit, 0, 0, },
    {"youtube_dl.extractor.cliprs", modulecode_youtube_dl$extractor$cliprs, 0, 0, },
    {"youtube_dl.extractor.clipsyndicate", modulecode_youtube_dl$extractor$clipsyndicate, 0, 0, },
    {"youtube_dl.extractor.closertotruth", modulecode_youtube_dl$extractor$closertotruth, 0, 0, },
    {"youtube_dl.extractor.cloudflarestream", modulecode_youtube_dl$extractor$cloudflarestream, 0, 0, },
    {"youtube_dl.extractor.cloudy", modulecode_youtube_dl$extractor$cloudy, 0, 0, },
    {"youtube_dl.extractor.clubic", modulecode_youtube_dl$extractor$clubic, 0, 0, },
    {"youtube_dl.extractor.clyp", modulecode_youtube_dl$extractor$clyp, 0, 0, },
    {"youtube_dl.extractor.cmt", modulecode_youtube_dl$extractor$cmt, 0, 0, },
    {"youtube_dl.extractor.cnbc", modulecode_youtube_dl$extractor$cnbc, 0, 0, },
    {"youtube_dl.extractor.cnn", modulecode_youtube_dl$extractor$cnn, 0, 0, },
    {"youtube_dl.extractor.comedycentral", modulecode_youtube_dl$extractor$comedycentral, 0, 0, },
    {"youtube_dl.extractor.common", modulecode_youtube_dl$extractor$common, 0, 0, },
    {"youtube_dl.extractor.commonmistakes", modulecode_youtube_dl$extractor$commonmistakes, 0, 0, },
    {"youtube_dl.extractor.commonprotocols", modulecode_youtube_dl$extractor$commonprotocols, 0, 0, },
    {"youtube_dl.extractor.condenast", modulecode_youtube_dl$extractor$condenast, 0, 0, },
    {"youtube_dl.extractor.contv", modulecode_youtube_dl$extractor$contv, 0, 0, },
    {"youtube_dl.extractor.corus", modulecode_youtube_dl$extractor$corus, 0, 0, },
    {"youtube_dl.extractor.coub", modulecode_youtube_dl$extractor$coub, 0, 0, },
    {"youtube_dl.extractor.cracked", modulecode_youtube_dl$extractor$cracked, 0, 0, },
    {"youtube_dl.extractor.crackle", modulecode_youtube_dl$extractor$crackle, 0, 0, },
    {"youtube_dl.extractor.crooksandliars", modulecode_youtube_dl$extractor$crooksandliars, 0, 0, },
    {"youtube_dl.extractor.crunchyroll", modulecode_youtube_dl$extractor$crunchyroll, 0, 0, },
    {"youtube_dl.extractor.cspan", modulecode_youtube_dl$extractor$cspan, 0, 0, },
    {"youtube_dl.extractor.ctsnews", modulecode_youtube_dl$extractor$ctsnews, 0, 0, },
    {"youtube_dl.extractor.ctvnews", modulecode_youtube_dl$extractor$ctvnews, 0, 0, },
    {"youtube_dl.extractor.cultureunplugged", modulecode_youtube_dl$extractor$cultureunplugged, 0, 0, },
    {"youtube_dl.extractor.curiositystream", modulecode_youtube_dl$extractor$curiositystream, 0, 0, },
    {"youtube_dl.extractor.cwtv", modulecode_youtube_dl$extractor$cwtv, 0, 0, },
    {"youtube_dl.extractor.dailymail", modulecode_youtube_dl$extractor$dailymail, 0, 0, },
    {"youtube_dl.extractor.dailymotion", modulecode_youtube_dl$extractor$dailymotion, 0, 0, },
    {"youtube_dl.extractor.daum", modulecode_youtube_dl$extractor$daum, 0, 0, },
    {"youtube_dl.extractor.dbtv", modulecode_youtube_dl$extractor$dbtv, 0, 0, },
    {"youtube_dl.extractor.dctp", modulecode_youtube_dl$extractor$dctp, 0, 0, },
    {"youtube_dl.extractor.deezer", modulecode_youtube_dl$extractor$deezer, 0, 0, },
    {"youtube_dl.extractor.defense", modulecode_youtube_dl$extractor$defense, 0, 0, },
    {"youtube_dl.extractor.democracynow", modulecode_youtube_dl$extractor$democracynow, 0, 0, },
    {"youtube_dl.extractor.dfb", modulecode_youtube_dl$extractor$dfb, 0, 0, },
    {"youtube_dl.extractor.dhm", modulecode_youtube_dl$extractor$dhm, 0, 0, },
    {"youtube_dl.extractor.digg", modulecode_youtube_dl$extractor$digg, 0, 0, },
    {"youtube_dl.extractor.digiteka", modulecode_youtube_dl$extractor$digiteka, 0, 0, },
    {"youtube_dl.extractor.discovery", modulecode_youtube_dl$extractor$discovery, 0, 0, },
    {"youtube_dl.extractor.discoverygo", modulecode_youtube_dl$extractor$discoverygo, 0, 0, },
    {"youtube_dl.extractor.discoverynetworks", modulecode_youtube_dl$extractor$discoverynetworks, 0, 0, },
    {"youtube_dl.extractor.discoveryvr", modulecode_youtube_dl$extractor$discoveryvr, 0, 0, },
    {"youtube_dl.extractor.disney", modulecode_youtube_dl$extractor$disney, 0, 0, },
    {"youtube_dl.extractor.dispeak", modulecode_youtube_dl$extractor$dispeak, 0, 0, },
    {"youtube_dl.extractor.dlive", modulecode_youtube_dl$extractor$dlive, 0, 0, },
    {"youtube_dl.extractor.dotsub", modulecode_youtube_dl$extractor$dotsub, 0, 0, },
    {"youtube_dl.extractor.douyutv", modulecode_youtube_dl$extractor$douyutv, 0, 0, },
    {"youtube_dl.extractor.dplay", modulecode_youtube_dl$extractor$dplay, 0, 0, },
    {"youtube_dl.extractor.drbonanza", modulecode_youtube_dl$extractor$drbonanza, 0, 0, },
    {"youtube_dl.extractor.dreisat", modulecode_youtube_dl$extractor$dreisat, 0, 0, },
    {"youtube_dl.extractor.dropbox", modulecode_youtube_dl$extractor$dropbox, 0, 0, },
    {"youtube_dl.extractor.drtuber", modulecode_youtube_dl$extractor$drtuber, 0, 0, },
    {"youtube_dl.extractor.drtv", modulecode_youtube_dl$extractor$drtv, 0, 0, },
    {"youtube_dl.extractor.dtube", modulecode_youtube_dl$extractor$dtube, 0, 0, },
    {"youtube_dl.extractor.dumpert", modulecode_youtube_dl$extractor$dumpert, 0, 0, },
    {"youtube_dl.extractor.dvtv", modulecode_youtube_dl$extractor$dvtv, 0, 0, },
    {"youtube_dl.extractor.dw", modulecode_youtube_dl$extractor$dw, 0, 0, },
    {"youtube_dl.extractor.eagleplatform", modulecode_youtube_dl$extractor$eagleplatform, 0, 0, },
    {"youtube_dl.extractor.ebaumsworld", modulecode_youtube_dl$extractor$ebaumsworld, 0, 0, },
    {"youtube_dl.extractor.echomsk", modulecode_youtube_dl$extractor$echomsk, 0, 0, },
    {"youtube_dl.extractor.egghead", modulecode_youtube_dl$extractor$egghead, 0, 0, },
    {"youtube_dl.extractor.ehow", modulecode_youtube_dl$extractor$ehow, 0, 0, },
    {"youtube_dl.extractor.eighttracks", modulecode_youtube_dl$extractor$eighttracks, 0, 0, },
    {"youtube_dl.extractor.einthusan", modulecode_youtube_dl$extractor$einthusan, 0, 0, },
    {"youtube_dl.extractor.eitb", modulecode_youtube_dl$extractor$eitb, 0, 0, },
    {"youtube_dl.extractor.ellentube", modulecode_youtube_dl$extractor$ellentube, 0, 0, },
    {"youtube_dl.extractor.elpais", modulecode_youtube_dl$extractor$elpais, 0, 0, },
    {"youtube_dl.extractor.embedly", modulecode_youtube_dl$extractor$embedly, 0, 0, },
    {"youtube_dl.extractor.engadget", modulecode_youtube_dl$extractor$engadget, 0, 0, },
    {"youtube_dl.extractor.eporner", modulecode_youtube_dl$extractor$eporner, 0, 0, },
    {"youtube_dl.extractor.eroprofile", modulecode_youtube_dl$extractor$eroprofile, 0, 0, },
    {"youtube_dl.extractor.escapist", modulecode_youtube_dl$extractor$escapist, 0, 0, },
    {"youtube_dl.extractor.espn", modulecode_youtube_dl$extractor$espn, 0, 0, },
    {"youtube_dl.extractor.esri", modulecode_youtube_dl$extractor$esri, 0, 0, },
    {"youtube_dl.extractor.europa", modulecode_youtube_dl$extractor$europa, 0, 0, },
    {"youtube_dl.extractor.everyonesmixtape", modulecode_youtube_dl$extractor$everyonesmixtape, 0, 0, },
    {"youtube_dl.extractor.expotv", modulecode_youtube_dl$extractor$expotv, 0, 0, },
    {"youtube_dl.extractor.expressen", modulecode_youtube_dl$extractor$expressen, 0, 0, },
    {"youtube_dl.extractor.extractors", modulecode_youtube_dl$extractor$extractors, 0, 0, },
    {"youtube_dl.extractor.extremetube", modulecode_youtube_dl$extractor$extremetube, 0, 0, },
    {"youtube_dl.extractor.eyedotv", modulecode_youtube_dl$extractor$eyedotv, 0, 0, },
    {"youtube_dl.extractor.facebook", modulecode_youtube_dl$extractor$facebook, 0, 0, },
    {"youtube_dl.extractor.faz", modulecode_youtube_dl$extractor$faz, 0, 0, },
    {"youtube_dl.extractor.fc2", modulecode_youtube_dl$extractor$fc2, 0, 0, },
    {"youtube_dl.extractor.fczenit", modulecode_youtube_dl$extractor$fczenit, 0, 0, },
    {"youtube_dl.extractor.filmon", modulecode_youtube_dl$extractor$filmon, 0, 0, },
    {"youtube_dl.extractor.filmweb", modulecode_youtube_dl$extractor$filmweb, 0, 0, },
    {"youtube_dl.extractor.firsttv", modulecode_youtube_dl$extractor$firsttv, 0, 0, },
    {"youtube_dl.extractor.fivemin", modulecode_youtube_dl$extractor$fivemin, 0, 0, },
    {"youtube_dl.extractor.fivetv", modulecode_youtube_dl$extractor$fivetv, 0, 0, },
    {"youtube_dl.extractor.flickr", modulecode_youtube_dl$extractor$flickr, 0, 0, },
    {"youtube_dl.extractor.folketinget", modulecode_youtube_dl$extractor$folketinget, 0, 0, },
    {"youtube_dl.extractor.footyroom", modulecode_youtube_dl$extractor$footyroom, 0, 0, },
    {"youtube_dl.extractor.formula1", modulecode_youtube_dl$extractor$formula1, 0, 0, },
    {"youtube_dl.extractor.fourtube", modulecode_youtube_dl$extractor$fourtube, 0, 0, },
    {"youtube_dl.extractor.fox", modulecode_youtube_dl$extractor$fox, 0, 0, },
    {"youtube_dl.extractor.fox9", modulecode_youtube_dl$extractor$fox9, 0, 0, },
    {"youtube_dl.extractor.foxgay", modulecode_youtube_dl$extractor$foxgay, 0, 0, },
    {"youtube_dl.extractor.foxnews", modulecode_youtube_dl$extractor$foxnews, 0, 0, },
    {"youtube_dl.extractor.foxsports", modulecode_youtube_dl$extractor$foxsports, 0, 0, },
    {"youtube_dl.extractor.franceculture", modulecode_youtube_dl$extractor$franceculture, 0, 0, },
    {"youtube_dl.extractor.franceinter", modulecode_youtube_dl$extractor$franceinter, 0, 0, },
    {"youtube_dl.extractor.francetv", modulecode_youtube_dl$extractor$francetv, 0, 0, },
    {"youtube_dl.extractor.freesound", modulecode_youtube_dl$extractor$freesound, 0, 0, },
    {"youtube_dl.extractor.freespeech", modulecode_youtube_dl$extractor$freespeech, 0, 0, },
    {"youtube_dl.extractor.freshlive", modulecode_youtube_dl$extractor$freshlive, 0, 0, },
    {"youtube_dl.extractor.frontendmasters", modulecode_youtube_dl$extractor$frontendmasters, 0, 0, },
    {"youtube_dl.extractor.funimation", modulecode_youtube_dl$extractor$funimation, 0, 0, },
    {"youtube_dl.extractor.funk", modulecode_youtube_dl$extractor$funk, 0, 0, },
    {"youtube_dl.extractor.fusion", modulecode_youtube_dl$extractor$fusion, 0, 0, },
    {"youtube_dl.extractor.fxnetworks", modulecode_youtube_dl$extractor$fxnetworks, 0, 0, },
    {"youtube_dl.extractor.gaia", modulecode_youtube_dl$extractor$gaia, 0, 0, },
    {"youtube_dl.extractor.gameinformer", modulecode_youtube_dl$extractor$gameinformer, 0, 0, },
    {"youtube_dl.extractor.gamespot", modulecode_youtube_dl$extractor$gamespot, 0, 0, },
    {"youtube_dl.extractor.gamestar", modulecode_youtube_dl$extractor$gamestar, 0, 0, },
    {"youtube_dl.extractor.gaskrank", modulecode_youtube_dl$extractor$gaskrank, 0, 0, },
    {"youtube_dl.extractor.gazeta", modulecode_youtube_dl$extractor$gazeta, 0, 0, },
    {"youtube_dl.extractor.gdcvault", modulecode_youtube_dl$extractor$gdcvault, 0, 0, },
    {"youtube_dl.extractor.generic", modulecode_youtube_dl$extractor$generic, 0, 0, },
    {"youtube_dl.extractor.gfycat", modulecode_youtube_dl$extractor$gfycat, 0, 0, },
    {"youtube_dl.extractor.giantbomb", modulecode_youtube_dl$extractor$giantbomb, 0, 0, },
    {"youtube_dl.extractor.giga", modulecode_youtube_dl$extractor$giga, 0, 0, },
    {"youtube_dl.extractor.gigya", modulecode_youtube_dl$extractor$gigya, 0, 0, },
    {"youtube_dl.extractor.glide", modulecode_youtube_dl$extractor$glide, 0, 0, },
    {"youtube_dl.extractor.globo", modulecode_youtube_dl$extractor$globo, 0, 0, },
    {"youtube_dl.extractor.go", modulecode_youtube_dl$extractor$go, 0, 0, },
    {"youtube_dl.extractor.godtube", modulecode_youtube_dl$extractor$godtube, 0, 0, },
    {"youtube_dl.extractor.golem", modulecode_youtube_dl$extractor$golem, 0, 0, },
    {"youtube_dl.extractor.googledrive", modulecode_youtube_dl$extractor$googledrive, 0, 0, },
    {"youtube_dl.extractor.googleplus", modulecode_youtube_dl$extractor$googleplus, 0, 0, },
    {"youtube_dl.extractor.googlesearch", modulecode_youtube_dl$extractor$googlesearch, 0, 0, },
    {"youtube_dl.extractor.goshgay", modulecode_youtube_dl$extractor$goshgay, 0, 0, },
    {"youtube_dl.extractor.gputechconf", modulecode_youtube_dl$extractor$gputechconf, 0, 0, },
    {"youtube_dl.extractor.groupon", modulecode_youtube_dl$extractor$groupon, 0, 0, },
    {"youtube_dl.extractor.hbo", modulecode_youtube_dl$extractor$hbo, 0, 0, },
    {"youtube_dl.extractor.hearthisat", modulecode_youtube_dl$extractor$hearthisat, 0, 0, },
    {"youtube_dl.extractor.heise", modulecode_youtube_dl$extractor$heise, 0, 0, },
    {"youtube_dl.extractor.hellporno", modulecode_youtube_dl$extractor$hellporno, 0, 0, },
    {"youtube_dl.extractor.helsinki", modulecode_youtube_dl$extractor$helsinki, 0, 0, },
    {"youtube_dl.extractor.hentaistigma", modulecode_youtube_dl$extractor$hentaistigma, 0, 0, },
    {"youtube_dl.extractor.hgtv", modulecode_youtube_dl$extractor$hgtv, 0, 0, },
    {"youtube_dl.extractor.hidive", modulecode_youtube_dl$extractor$hidive, 0, 0, },
    {"youtube_dl.extractor.historicfilms", modulecode_youtube_dl$extractor$historicfilms, 0, 0, },
    {"youtube_dl.extractor.hitbox", modulecode_youtube_dl$extractor$hitbox, 0, 0, },
    {"youtube_dl.extractor.hitrecord", modulecode_youtube_dl$extractor$hitrecord, 0, 0, },
    {"youtube_dl.extractor.hketv", modulecode_youtube_dl$extractor$hketv, 0, 0, },
    {"youtube_dl.extractor.hornbunny", modulecode_youtube_dl$extractor$hornbunny, 0, 0, },
    {"youtube_dl.extractor.hotnewhiphop", modulecode_youtube_dl$extractor$hotnewhiphop, 0, 0, },
    {"youtube_dl.extractor.hotstar", modulecode_youtube_dl$extractor$hotstar, 0, 0, },
    {"youtube_dl.extractor.howcast", modulecode_youtube_dl$extractor$howcast, 0, 0, },
    {"youtube_dl.extractor.howstuffworks", modulecode_youtube_dl$extractor$howstuffworks, 0, 0, },
    {"youtube_dl.extractor.hrti", modulecode_youtube_dl$extractor$hrti, 0, 0, },
    {"youtube_dl.extractor.huajiao", modulecode_youtube_dl$extractor$huajiao, 0, 0, },
    {"youtube_dl.extractor.huffpost", modulecode_youtube_dl$extractor$huffpost, 0, 0, },
    {"youtube_dl.extractor.hungama", modulecode_youtube_dl$extractor$hungama, 0, 0, },
    {"youtube_dl.extractor.hypem", modulecode_youtube_dl$extractor$hypem, 0, 0, },
    {"youtube_dl.extractor.ign", modulecode_youtube_dl$extractor$ign, 0, 0, },
    {"youtube_dl.extractor.imdb", modulecode_youtube_dl$extractor$imdb, 0, 0, },
    {"youtube_dl.extractor.imggaming", modulecode_youtube_dl$extractor$imggaming, 0, 0, },
    {"youtube_dl.extractor.imgur", modulecode_youtube_dl$extractor$imgur, 0, 0, },
    {"youtube_dl.extractor.ina", modulecode_youtube_dl$extractor$ina, 0, 0, },
    {"youtube_dl.extractor.inc", modulecode_youtube_dl$extractor$inc, 0, 0, },
    {"youtube_dl.extractor.indavideo", modulecode_youtube_dl$extractor$indavideo, 0, 0, },
    {"youtube_dl.extractor.infoq", modulecode_youtube_dl$extractor$infoq, 0, 0, },
    {"youtube_dl.extractor.instagram", modulecode_youtube_dl$extractor$instagram, 0, 0, },
    {"youtube_dl.extractor.internazionale", modulecode_youtube_dl$extractor$internazionale, 0, 0, },
    {"youtube_dl.extractor.internetvideoarchive", modulecode_youtube_dl$extractor$internetvideoarchive, 0, 0, },
    {"youtube_dl.extractor.iprima", modulecode_youtube_dl$extractor$iprima, 0, 0, },
    {"youtube_dl.extractor.iqiyi", modulecode_youtube_dl$extractor$iqiyi, 0, 0, },
    {"youtube_dl.extractor.ir90tv", modulecode_youtube_dl$extractor$ir90tv, 0, 0, },
    {"youtube_dl.extractor.itv", modulecode_youtube_dl$extractor$itv, 0, 0, },
    {"youtube_dl.extractor.ivi", modulecode_youtube_dl$extractor$ivi, 0, 0, },
    {"youtube_dl.extractor.ivideon", modulecode_youtube_dl$extractor$ivideon, 0, 0, },
    {"youtube_dl.extractor.iwara", modulecode_youtube_dl$extractor$iwara, 0, 0, },
    {"youtube_dl.extractor.izlesene", modulecode_youtube_dl$extractor$izlesene, 0, 0, },
    {"youtube_dl.extractor.jamendo", modulecode_youtube_dl$extractor$jamendo, 0, 0, },
    {"youtube_dl.extractor.jeuxvideo", modulecode_youtube_dl$extractor$jeuxvideo, 0, 0, },
    {"youtube_dl.extractor.joj", modulecode_youtube_dl$extractor$joj, 0, 0, },
    {"youtube_dl.extractor.jove", modulecode_youtube_dl$extractor$jove, 0, 0, },
    {"youtube_dl.extractor.jwplatform", modulecode_youtube_dl$extractor$jwplatform, 0, 0, },
    {"youtube_dl.extractor.kakao", modulecode_youtube_dl$extractor$kakao, 0, 0, },
    {"youtube_dl.extractor.kaltura", modulecode_youtube_dl$extractor$kaltura, 0, 0, },
    {"youtube_dl.extractor.kanalplay", modulecode_youtube_dl$extractor$kanalplay, 0, 0, },
    {"youtube_dl.extractor.kankan", modulecode_youtube_dl$extractor$kankan, 0, 0, },
    {"youtube_dl.extractor.karaoketv", modulecode_youtube_dl$extractor$karaoketv, 0, 0, },
    {"youtube_dl.extractor.karrierevideos", modulecode_youtube_dl$extractor$karrierevideos, 0, 0, },
    {"youtube_dl.extractor.keezmovies", modulecode_youtube_dl$extractor$keezmovies, 0, 0, },
    {"youtube_dl.extractor.ketnet", modulecode_youtube_dl$extractor$ketnet, 0, 0, },
    {"youtube_dl.extractor.khanacademy", modulecode_youtube_dl$extractor$khanacademy, 0, 0, },
    {"youtube_dl.extractor.kickstarter", modulecode_youtube_dl$extractor$kickstarter, 0, 0, },
    {"youtube_dl.extractor.kinja", modulecode_youtube_dl$extractor$kinja, 0, 0, },
    {"youtube_dl.extractor.kinopoisk", modulecode_youtube_dl$extractor$kinopoisk, 0, 0, },
    {"youtube_dl.extractor.konserthusetplay", modulecode_youtube_dl$extractor$konserthusetplay, 0, 0, },
    {"youtube_dl.extractor.krasview", modulecode_youtube_dl$extractor$krasview, 0, 0, },
    {"youtube_dl.extractor.ku6", modulecode_youtube_dl$extractor$ku6, 0, 0, },
    {"youtube_dl.extractor.kusi", modulecode_youtube_dl$extractor$kusi, 0, 0, },
    {"youtube_dl.extractor.kuwo", modulecode_youtube_dl$extractor$kuwo, 0, 0, },
    {"youtube_dl.extractor.la7", modulecode_youtube_dl$extractor$la7, 0, 0, },
    {"youtube_dl.extractor.laola1tv", modulecode_youtube_dl$extractor$laola1tv, 0, 0, },
    {"youtube_dl.extractor.lci", modulecode_youtube_dl$extractor$lci, 0, 0, },
    {"youtube_dl.extractor.lcp", modulecode_youtube_dl$extractor$lcp, 0, 0, },
    {"youtube_dl.extractor.lecture2go", modulecode_youtube_dl$extractor$lecture2go, 0, 0, },
    {"youtube_dl.extractor.lecturio", modulecode_youtube_dl$extractor$lecturio, 0, 0, },
    {"youtube_dl.extractor.leeco", modulecode_youtube_dl$extractor$leeco, 0, 0, },
    {"youtube_dl.extractor.lego", modulecode_youtube_dl$extractor$lego, 0, 0, },
    {"youtube_dl.extractor.lemonde", modulecode_youtube_dl$extractor$lemonde, 0, 0, },
    {"youtube_dl.extractor.lenta", modulecode_youtube_dl$extractor$lenta, 0, 0, },
    {"youtube_dl.extractor.libraryofcongress", modulecode_youtube_dl$extractor$libraryofcongress, 0, 0, },
    {"youtube_dl.extractor.libsyn", modulecode_youtube_dl$extractor$libsyn, 0, 0, },
    {"youtube_dl.extractor.lifenews", modulecode_youtube_dl$extractor$lifenews, 0, 0, },
    {"youtube_dl.extractor.limelight", modulecode_youtube_dl$extractor$limelight, 0, 0, },
    {"youtube_dl.extractor.line", modulecode_youtube_dl$extractor$line, 0, 0, },
    {"youtube_dl.extractor.linkedin", modulecode_youtube_dl$extractor$linkedin, 0, 0, },
    {"youtube_dl.extractor.linuxacademy", modulecode_youtube_dl$extractor$linuxacademy, 0, 0, },
    {"youtube_dl.extractor.litv", modulecode_youtube_dl$extractor$litv, 0, 0, },
    {"youtube_dl.extractor.livejournal", modulecode_youtube_dl$extractor$livejournal, 0, 0, },
    {"youtube_dl.extractor.liveleak", modulecode_youtube_dl$extractor$liveleak, 0, 0, },
    {"youtube_dl.extractor.livestream", modulecode_youtube_dl$extractor$livestream, 0, 0, },
    {"youtube_dl.extractor.lnkgo", modulecode_youtube_dl$extractor$lnkgo, 0, 0, },
    {"youtube_dl.extractor.localnews8", modulecode_youtube_dl$extractor$localnews8, 0, 0, },
    {"youtube_dl.extractor.lovehomeporn", modulecode_youtube_dl$extractor$lovehomeporn, 0, 0, },
    {"youtube_dl.extractor.lrt", modulecode_youtube_dl$extractor$lrt, 0, 0, },
    {"youtube_dl.extractor.lynda", modulecode_youtube_dl$extractor$lynda, 0, 0, },
    {"youtube_dl.extractor.m6", modulecode_youtube_dl$extractor$m6, 0, 0, },
    {"youtube_dl.extractor.mailru", modulecode_youtube_dl$extractor$mailru, 0, 0, },
    {"youtube_dl.extractor.malltv", modulecode_youtube_dl$extractor$malltv, 0, 0, },
    {"youtube_dl.extractor.mangomolo", modulecode_youtube_dl$extractor$mangomolo, 0, 0, },
    {"youtube_dl.extractor.manyvids", modulecode_youtube_dl$extractor$manyvids, 0, 0, },
    {"youtube_dl.extractor.markiza", modulecode_youtube_dl$extractor$markiza, 0, 0, },
    {"youtube_dl.extractor.massengeschmacktv", modulecode_youtube_dl$extractor$massengeschmacktv, 0, 0, },
    {"youtube_dl.extractor.matchtv", modulecode_youtube_dl$extractor$matchtv, 0, 0, },
    {"youtube_dl.extractor.mdr", modulecode_youtube_dl$extractor$mdr, 0, 0, },
    {"youtube_dl.extractor.medialaan", modulecode_youtube_dl$extractor$medialaan, 0, 0, },
    {"youtube_dl.extractor.mediaset", modulecode_youtube_dl$extractor$mediaset, 0, 0, },
    {"youtube_dl.extractor.mediasite", modulecode_youtube_dl$extractor$mediasite, 0, 0, },
    {"youtube_dl.extractor.medici", modulecode_youtube_dl$extractor$medici, 0, 0, },
    {"youtube_dl.extractor.megaphone", modulecode_youtube_dl$extractor$megaphone, 0, 0, },
    {"youtube_dl.extractor.meipai", modulecode_youtube_dl$extractor$meipai, 0, 0, },
    {"youtube_dl.extractor.melonvod", modulecode_youtube_dl$extractor$melonvod, 0, 0, },
    {"youtube_dl.extractor.meta", modulecode_youtube_dl$extractor$meta, 0, 0, },
    {"youtube_dl.extractor.metacafe", modulecode_youtube_dl$extractor$metacafe, 0, 0, },
    {"youtube_dl.extractor.metacritic", modulecode_youtube_dl$extractor$metacritic, 0, 0, },
    {"youtube_dl.extractor.mgoon", modulecode_youtube_dl$extractor$mgoon, 0, 0, },
    {"youtube_dl.extractor.mgtv", modulecode_youtube_dl$extractor$mgtv, 0, 0, },
    {"youtube_dl.extractor.miaopai", modulecode_youtube_dl$extractor$miaopai, 0, 0, },
    {"youtube_dl.extractor.microsoftvirtualacademy", modulecode_youtube_dl$extractor$microsoftvirtualacademy, 0, 0, },
    {"youtube_dl.extractor.ministrygrid", modulecode_youtube_dl$extractor$ministrygrid, 0, 0, },
    {"youtube_dl.extractor.minoto", modulecode_youtube_dl$extractor$minoto, 0, 0, },
    {"youtube_dl.extractor.miomio", modulecode_youtube_dl$extractor$miomio, 0, 0, },
    {"youtube_dl.extractor.mit", modulecode_youtube_dl$extractor$mit, 0, 0, },
    {"youtube_dl.extractor.mitele", modulecode_youtube_dl$extractor$mitele, 0, 0, },
    {"youtube_dl.extractor.mixcloud", modulecode_youtube_dl$extractor$mixcloud, 0, 0, },
    {"youtube_dl.extractor.mlb", modulecode_youtube_dl$extractor$mlb, 0, 0, },
    {"youtube_dl.extractor.mnet", modulecode_youtube_dl$extractor$mnet, 0, 0, },
    {"youtube_dl.extractor.moevideo", modulecode_youtube_dl$extractor$moevideo, 0, 0, },
    {"youtube_dl.extractor.mofosex", modulecode_youtube_dl$extractor$mofosex, 0, 0, },
    {"youtube_dl.extractor.mojvideo", modulecode_youtube_dl$extractor$mojvideo, 0, 0, },
    {"youtube_dl.extractor.morningstar", modulecode_youtube_dl$extractor$morningstar, 0, 0, },
    {"youtube_dl.extractor.motherless", modulecode_youtube_dl$extractor$motherless, 0, 0, },
    {"youtube_dl.extractor.motorsport", modulecode_youtube_dl$extractor$motorsport, 0, 0, },
    {"youtube_dl.extractor.movieclips", modulecode_youtube_dl$extractor$movieclips, 0, 0, },
    {"youtube_dl.extractor.moviezine", modulecode_youtube_dl$extractor$moviezine, 0, 0, },
    {"youtube_dl.extractor.movingimage", modulecode_youtube_dl$extractor$movingimage, 0, 0, },
    {"youtube_dl.extractor.msn", modulecode_youtube_dl$extractor$msn, 0, 0, },
    {"youtube_dl.extractor.mtv", modulecode_youtube_dl$extractor$mtv, 0, 0, },
    {"youtube_dl.extractor.muenchentv", modulecode_youtube_dl$extractor$muenchentv, 0, 0, },
    {"youtube_dl.extractor.mwave", modulecode_youtube_dl$extractor$mwave, 0, 0, },
    {"youtube_dl.extractor.mychannels", modulecode_youtube_dl$extractor$mychannels, 0, 0, },
    {"youtube_dl.extractor.myspace", modulecode_youtube_dl$extractor$myspace, 0, 0, },
    {"youtube_dl.extractor.myspass", modulecode_youtube_dl$extractor$myspass, 0, 0, },
    {"youtube_dl.extractor.myvi", modulecode_youtube_dl$extractor$myvi, 0, 0, },
    {"youtube_dl.extractor.myvidster", modulecode_youtube_dl$extractor$myvidster, 0, 0, },
    {"youtube_dl.extractor.nationalgeographic", modulecode_youtube_dl$extractor$nationalgeographic, 0, 0, },
    {"youtube_dl.extractor.naver", modulecode_youtube_dl$extractor$naver, 0, 0, },
    {"youtube_dl.extractor.nba", modulecode_youtube_dl$extractor$nba, 0, 0, },
    {"youtube_dl.extractor.nbc", modulecode_youtube_dl$extractor$nbc, 0, 0, },
    {"youtube_dl.extractor.ndr", modulecode_youtube_dl$extractor$ndr, 0, 0, },
    {"youtube_dl.extractor.ndtv", modulecode_youtube_dl$extractor$ndtv, 0, 0, },
    {"youtube_dl.extractor.nerdcubed", modulecode_youtube_dl$extractor$nerdcubed, 0, 0, },
    {"youtube_dl.extractor.neteasemusic", modulecode_youtube_dl$extractor$neteasemusic, 0, 0, },
    {"youtube_dl.extractor.netzkino", modulecode_youtube_dl$extractor$netzkino, 0, 0, },
    {"youtube_dl.extractor.newgrounds", modulecode_youtube_dl$extractor$newgrounds, 0, 0, },
    {"youtube_dl.extractor.newstube", modulecode_youtube_dl$extractor$newstube, 0, 0, },
    {"youtube_dl.extractor.nextmedia", modulecode_youtube_dl$extractor$nextmedia, 0, 0, },
    {"youtube_dl.extractor.nexx", modulecode_youtube_dl$extractor$nexx, 0, 0, },
    {"youtube_dl.extractor.nfl", modulecode_youtube_dl$extractor$nfl, 0, 0, },
    {"youtube_dl.extractor.nhk", modulecode_youtube_dl$extractor$nhk, 0, 0, },
    {"youtube_dl.extractor.nhl", modulecode_youtube_dl$extractor$nhl, 0, 0, },
    {"youtube_dl.extractor.nick", modulecode_youtube_dl$extractor$nick, 0, 0, },
    {"youtube_dl.extractor.niconico", modulecode_youtube_dl$extractor$niconico, 0, 0, },
    {"youtube_dl.extractor.ninecninemedia", modulecode_youtube_dl$extractor$ninecninemedia, 0, 0, },
    {"youtube_dl.extractor.ninegag", modulecode_youtube_dl$extractor$ninegag, 0, 0, },
    {"youtube_dl.extractor.ninenow", modulecode_youtube_dl$extractor$ninenow, 0, 0, },
    {"youtube_dl.extractor.nintendo", modulecode_youtube_dl$extractor$nintendo, 0, 0, },
    {"youtube_dl.extractor.njpwworld", modulecode_youtube_dl$extractor$njpwworld, 0, 0, },
    {"youtube_dl.extractor.nobelprize", modulecode_youtube_dl$extractor$nobelprize, 0, 0, },
    {"youtube_dl.extractor.noco", modulecode_youtube_dl$extractor$noco, 0, 0, },
    {"youtube_dl.extractor.nonktube", modulecode_youtube_dl$extractor$nonktube, 0, 0, },
    {"youtube_dl.extractor.noovo", modulecode_youtube_dl$extractor$noovo, 0, 0, },
    {"youtube_dl.extractor.normalboots", modulecode_youtube_dl$extractor$normalboots, 0, 0, },
    {"youtube_dl.extractor.nosvideo", modulecode_youtube_dl$extractor$nosvideo, 0, 0, },
    {"youtube_dl.extractor.nova", modulecode_youtube_dl$extractor$nova, 0, 0, },
    {"youtube_dl.extractor.nowness", modulecode_youtube_dl$extractor$nowness, 0, 0, },
    {"youtube_dl.extractor.noz", modulecode_youtube_dl$extractor$noz, 0, 0, },
    {"youtube_dl.extractor.npo", modulecode_youtube_dl$extractor$npo, 0, 0, },
    {"youtube_dl.extractor.npr", modulecode_youtube_dl$extractor$npr, 0, 0, },
    {"youtube_dl.extractor.nrk", modulecode_youtube_dl$extractor$nrk, 0, 0, },
    {"youtube_dl.extractor.nrl", modulecode_youtube_dl$extractor$nrl, 0, 0, },
    {"youtube_dl.extractor.ntvcojp", modulecode_youtube_dl$extractor$ntvcojp, 0, 0, },
    {"youtube_dl.extractor.ntvde", modulecode_youtube_dl$extractor$ntvde, 0, 0, },
    {"youtube_dl.extractor.ntvru", modulecode_youtube_dl$extractor$ntvru, 0, 0, },
    {"youtube_dl.extractor.nuevo", modulecode_youtube_dl$extractor$nuevo, 0, 0, },
    {"youtube_dl.extractor.nuvid", modulecode_youtube_dl$extractor$nuvid, 0, 0, },
    {"youtube_dl.extractor.nytimes", modulecode_youtube_dl$extractor$nytimes, 0, 0, },
    {"youtube_dl.extractor.nzz", modulecode_youtube_dl$extractor$nzz, 0, 0, },
    {"youtube_dl.extractor.odatv", modulecode_youtube_dl$extractor$odatv, 0, 0, },
    {"youtube_dl.extractor.odnoklassniki", modulecode_youtube_dl$extractor$odnoklassniki, 0, 0, },
    {"youtube_dl.extractor.oktoberfesttv", modulecode_youtube_dl$extractor$oktoberfesttv, 0, 0, },
    {"youtube_dl.extractor.once", modulecode_youtube_dl$extractor$once, 0, 0, },
    {"youtube_dl.extractor.ondemandkorea", modulecode_youtube_dl$extractor$ondemandkorea, 0, 0, },
    {"youtube_dl.extractor.onet", modulecode_youtube_dl$extractor$onet, 0, 0, },
    {"youtube_dl.extractor.onionstudios", modulecode_youtube_dl$extractor$onionstudios, 0, 0, },
    {"youtube_dl.extractor.ooyala", modulecode_youtube_dl$extractor$ooyala, 0, 0, },
    {"youtube_dl.extractor.openload", modulecode_youtube_dl$extractor$openload, 0, 0, },
    {"youtube_dl.extractor.ora", modulecode_youtube_dl$extractor$ora, 0, 0, },
    {"youtube_dl.extractor.orf", modulecode_youtube_dl$extractor$orf, 0, 0, },
    {"youtube_dl.extractor.outsidetv", modulecode_youtube_dl$extractor$outsidetv, 0, 0, },
    {"youtube_dl.extractor.packtpub", modulecode_youtube_dl$extractor$packtpub, 0, 0, },
    {"youtube_dl.extractor.pandoratv", modulecode_youtube_dl$extractor$pandoratv, 0, 0, },
    {"youtube_dl.extractor.parliamentliveuk", modulecode_youtube_dl$extractor$parliamentliveuk, 0, 0, },
    {"youtube_dl.extractor.patreon", modulecode_youtube_dl$extractor$patreon, 0, 0, },
    {"youtube_dl.extractor.pbs", modulecode_youtube_dl$extractor$pbs, 0, 0, },
    {"youtube_dl.extractor.pearvideo", modulecode_youtube_dl$extractor$pearvideo, 0, 0, },
    {"youtube_dl.extractor.peertube", modulecode_youtube_dl$extractor$peertube, 0, 0, },
    {"youtube_dl.extractor.people", modulecode_youtube_dl$extractor$people, 0, 0, },
    {"youtube_dl.extractor.performgroup", modulecode_youtube_dl$extractor$performgroup, 0, 0, },
    {"youtube_dl.extractor.periscope", modulecode_youtube_dl$extractor$periscope, 0, 0, },
    {"youtube_dl.extractor.philharmoniedeparis", modulecode_youtube_dl$extractor$philharmoniedeparis, 0, 0, },
    {"youtube_dl.extractor.phoenix", modulecode_youtube_dl$extractor$phoenix, 0, 0, },
    {"youtube_dl.extractor.photobucket", modulecode_youtube_dl$extractor$photobucket, 0, 0, },
    {"youtube_dl.extractor.picarto", modulecode_youtube_dl$extractor$picarto, 0, 0, },
    {"youtube_dl.extractor.piksel", modulecode_youtube_dl$extractor$piksel, 0, 0, },
    {"youtube_dl.extractor.pinkbike", modulecode_youtube_dl$extractor$pinkbike, 0, 0, },
    {"youtube_dl.extractor.pladform", modulecode_youtube_dl$extractor$pladform, 0, 0, },
    {"youtube_dl.extractor.platzi", modulecode_youtube_dl$extractor$platzi, 0, 0, },
    {"youtube_dl.extractor.playfm", modulecode_youtube_dl$extractor$playfm, 0, 0, },
    {"youtube_dl.extractor.playplustv", modulecode_youtube_dl$extractor$playplustv, 0, 0, },
    {"youtube_dl.extractor.plays", modulecode_youtube_dl$extractor$plays, 0, 0, },
    {"youtube_dl.extractor.playtvak", modulecode_youtube_dl$extractor$playtvak, 0, 0, },
    {"youtube_dl.extractor.playvid", modulecode_youtube_dl$extractor$playvid, 0, 0, },
    {"youtube_dl.extractor.playwire", modulecode_youtube_dl$extractor$playwire, 0, 0, },
    {"youtube_dl.extractor.pluralsight", modulecode_youtube_dl$extractor$pluralsight, 0, 0, },
    {"youtube_dl.extractor.podomatic", modulecode_youtube_dl$extractor$podomatic, 0, 0, },
    {"youtube_dl.extractor.pokemon", modulecode_youtube_dl$extractor$pokemon, 0, 0, },
    {"youtube_dl.extractor.polskieradio", modulecode_youtube_dl$extractor$polskieradio, 0, 0, },
    {"youtube_dl.extractor.popcorntimes", modulecode_youtube_dl$extractor$popcorntimes, 0, 0, },
    {"youtube_dl.extractor.popcorntv", modulecode_youtube_dl$extractor$popcorntv, 0, 0, },
    {"youtube_dl.extractor.porn91", modulecode_youtube_dl$extractor$porn91, 0, 0, },
    {"youtube_dl.extractor.porncom", modulecode_youtube_dl$extractor$porncom, 0, 0, },
    {"youtube_dl.extractor.pornhd", modulecode_youtube_dl$extractor$pornhd, 0, 0, },
    {"youtube_dl.extractor.pornhub", modulecode_youtube_dl$extractor$pornhub, 0, 0, },
    {"youtube_dl.extractor.pornotube", modulecode_youtube_dl$extractor$pornotube, 0, 0, },
    {"youtube_dl.extractor.pornovoisines", modulecode_youtube_dl$extractor$pornovoisines, 0, 0, },
    {"youtube_dl.extractor.pornoxo", modulecode_youtube_dl$extractor$pornoxo, 0, 0, },
    {"youtube_dl.extractor.presstv", modulecode_youtube_dl$extractor$presstv, 0, 0, },
    {"youtube_dl.extractor.prosiebensat1", modulecode_youtube_dl$extractor$prosiebensat1, 0, 0, },
    {"youtube_dl.extractor.puhutv", modulecode_youtube_dl$extractor$puhutv, 0, 0, },
    {"youtube_dl.extractor.puls4", modulecode_youtube_dl$extractor$puls4, 0, 0, },
    {"youtube_dl.extractor.pyvideo", modulecode_youtube_dl$extractor$pyvideo, 0, 0, },
    {"youtube_dl.extractor.qqmusic", modulecode_youtube_dl$extractor$qqmusic, 0, 0, },
    {"youtube_dl.extractor.r7", modulecode_youtube_dl$extractor$r7, 0, 0, },
    {"youtube_dl.extractor.radiobremen", modulecode_youtube_dl$extractor$radiobremen, 0, 0, },
    {"youtube_dl.extractor.radiocanada", modulecode_youtube_dl$extractor$radiocanada, 0, 0, },
    {"youtube_dl.extractor.radiode", modulecode_youtube_dl$extractor$radiode, 0, 0, },
    {"youtube_dl.extractor.radiofrance", modulecode_youtube_dl$extractor$radiofrance, 0, 0, },
    {"youtube_dl.extractor.radiojavan", modulecode_youtube_dl$extractor$radiojavan, 0, 0, },
    {"youtube_dl.extractor.rai", modulecode_youtube_dl$extractor$rai, 0, 0, },
    {"youtube_dl.extractor.raywenderlich", modulecode_youtube_dl$extractor$raywenderlich, 0, 0, },
    {"youtube_dl.extractor.rbmaradio", modulecode_youtube_dl$extractor$rbmaradio, 0, 0, },
    {"youtube_dl.extractor.rds", modulecode_youtube_dl$extractor$rds, 0, 0, },
    {"youtube_dl.extractor.redbulltv", modulecode_youtube_dl$extractor$redbulltv, 0, 0, },
    {"youtube_dl.extractor.reddit", modulecode_youtube_dl$extractor$reddit, 0, 0, },
    {"youtube_dl.extractor.redtube", modulecode_youtube_dl$extractor$redtube, 0, 0, },
    {"youtube_dl.extractor.regiotv", modulecode_youtube_dl$extractor$regiotv, 0, 0, },
    {"youtube_dl.extractor.rentv", modulecode_youtube_dl$extractor$rentv, 0, 0, },
    {"youtube_dl.extractor.restudy", modulecode_youtube_dl$extractor$restudy, 0, 0, },
    {"youtube_dl.extractor.reuters", modulecode_youtube_dl$extractor$reuters, 0, 0, },
    {"youtube_dl.extractor.reverbnation", modulecode_youtube_dl$extractor$reverbnation, 0, 0, },
    {"youtube_dl.extractor.rice", modulecode_youtube_dl$extractor$rice, 0, 0, },
    {"youtube_dl.extractor.rmcdecouverte", modulecode_youtube_dl$extractor$rmcdecouverte, 0, 0, },
    {"youtube_dl.extractor.ro220", modulecode_youtube_dl$extractor$ro220, 0, 0, },
    {"youtube_dl.extractor.rockstargames", modulecode_youtube_dl$extractor$rockstargames, 0, 0, },
    {"youtube_dl.extractor.roosterteeth", modulecode_youtube_dl$extractor$roosterteeth, 0, 0, },
    {"youtube_dl.extractor.rottentomatoes", modulecode_youtube_dl$extractor$rottentomatoes, 0, 0, },
    {"youtube_dl.extractor.roxwel", modulecode_youtube_dl$extractor$roxwel, 0, 0, },
    {"youtube_dl.extractor.rozhlas", modulecode_youtube_dl$extractor$rozhlas, 0, 0, },
    {"youtube_dl.extractor.rtbf", modulecode_youtube_dl$extractor$rtbf, 0, 0, },
    {"youtube_dl.extractor.rte", modulecode_youtube_dl$extractor$rte, 0, 0, },
    {"youtube_dl.extractor.rtl2", modulecode_youtube_dl$extractor$rtl2, 0, 0, },
    {"youtube_dl.extractor.rtlnl", modulecode_youtube_dl$extractor$rtlnl, 0, 0, },
    {"youtube_dl.extractor.rtp", modulecode_youtube_dl$extractor$rtp, 0, 0, },
    {"youtube_dl.extractor.rts", modulecode_youtube_dl$extractor$rts, 0, 0, },
    {"youtube_dl.extractor.rtve", modulecode_youtube_dl$extractor$rtve, 0, 0, },
    {"youtube_dl.extractor.rtvnh", modulecode_youtube_dl$extractor$rtvnh, 0, 0, },
    {"youtube_dl.extractor.rtvs", modulecode_youtube_dl$extractor$rtvs, 0, 0, },
    {"youtube_dl.extractor.ruhd", modulecode_youtube_dl$extractor$ruhd, 0, 0, },
    {"youtube_dl.extractor.rutube", modulecode_youtube_dl$extractor$rutube, 0, 0, },
    {"youtube_dl.extractor.rutv", modulecode_youtube_dl$extractor$rutv, 0, 0, },
    {"youtube_dl.extractor.ruutu", modulecode_youtube_dl$extractor$ruutu, 0, 0, },
    {"youtube_dl.extractor.ruv", modulecode_youtube_dl$extractor$ruv, 0, 0, },
    {"youtube_dl.extractor.safari", modulecode_youtube_dl$extractor$safari, 0, 0, },
    {"youtube_dl.extractor.sapo", modulecode_youtube_dl$extractor$sapo, 0, 0, },
    {"youtube_dl.extractor.savefrom", modulecode_youtube_dl$extractor$savefrom, 0, 0, },
    {"youtube_dl.extractor.sbs", modulecode_youtube_dl$extractor$sbs, 0, 0, },
    {"youtube_dl.extractor.screencast", modulecode_youtube_dl$extractor$screencast, 0, 0, },
    {"youtube_dl.extractor.screencastomatic", modulecode_youtube_dl$extractor$screencastomatic, 0, 0, },
    {"youtube_dl.extractor.scrippsnetworks", modulecode_youtube_dl$extractor$scrippsnetworks, 0, 0, },
    {"youtube_dl.extractor.scte", modulecode_youtube_dl$extractor$scte, 0, 0, },
    {"youtube_dl.extractor.seeker", modulecode_youtube_dl$extractor$seeker, 0, 0, },
    {"youtube_dl.extractor.senateisvp", modulecode_youtube_dl$extractor$senateisvp, 0, 0, },
    {"youtube_dl.extractor.sendtonews", modulecode_youtube_dl$extractor$sendtonews, 0, 0, },
    {"youtube_dl.extractor.servus", modulecode_youtube_dl$extractor$servus, 0, 0, },
    {"youtube_dl.extractor.sevenplus", modulecode_youtube_dl$extractor$sevenplus, 0, 0, },
    {"youtube_dl.extractor.sexu", modulecode_youtube_dl$extractor$sexu, 0, 0, },
    {"youtube_dl.extractor.seznamzpravy", modulecode_youtube_dl$extractor$seznamzpravy, 0, 0, },
    {"youtube_dl.extractor.shahid", modulecode_youtube_dl$extractor$shahid, 0, 0, },
    {"youtube_dl.extractor.shared", modulecode_youtube_dl$extractor$shared, 0, 0, },
    {"youtube_dl.extractor.showroomlive", modulecode_youtube_dl$extractor$showroomlive, 0, 0, },
    {"youtube_dl.extractor.sina", modulecode_youtube_dl$extractor$sina, 0, 0, },
    {"youtube_dl.extractor.sixplay", modulecode_youtube_dl$extractor$sixplay, 0, 0, },
    {"youtube_dl.extractor.sky", modulecode_youtube_dl$extractor$sky, 0, 0, },
    {"youtube_dl.extractor.skylinewebcams", modulecode_youtube_dl$extractor$skylinewebcams, 0, 0, },
    {"youtube_dl.extractor.skynewsarabia", modulecode_youtube_dl$extractor$skynewsarabia, 0, 0, },
    {"youtube_dl.extractor.slideshare", modulecode_youtube_dl$extractor$slideshare, 0, 0, },
    {"youtube_dl.extractor.slideslive", modulecode_youtube_dl$extractor$slideslive, 0, 0, },
    {"youtube_dl.extractor.slutload", modulecode_youtube_dl$extractor$slutload, 0, 0, },
    {"youtube_dl.extractor.smotri", modulecode_youtube_dl$extractor$smotri, 0, 0, },
    {"youtube_dl.extractor.snotr", modulecode_youtube_dl$extractor$snotr, 0, 0, },
    {"youtube_dl.extractor.sohu", modulecode_youtube_dl$extractor$sohu, 0, 0, },
    {"youtube_dl.extractor.sonyliv", modulecode_youtube_dl$extractor$sonyliv, 0, 0, },
    {"youtube_dl.extractor.soundcloud", modulecode_youtube_dl$extractor$soundcloud, 0, 0, },
    {"youtube_dl.extractor.soundgasm", modulecode_youtube_dl$extractor$soundgasm, 0, 0, },
    {"youtube_dl.extractor.southpark", modulecode_youtube_dl$extractor$southpark, 0, 0, },
    {"youtube_dl.extractor.spankbang", modulecode_youtube_dl$extractor$spankbang, 0, 0, },
    {"youtube_dl.extractor.spankwire", modulecode_youtube_dl$extractor$spankwire, 0, 0, },
    {"youtube_dl.extractor.spiegel", modulecode_youtube_dl$extractor$spiegel, 0, 0, },
    {"youtube_dl.extractor.spiegeltv", modulecode_youtube_dl$extractor$spiegeltv, 0, 0, },
    {"youtube_dl.extractor.spike", modulecode_youtube_dl$extractor$spike, 0, 0, },
    {"youtube_dl.extractor.sport5", modulecode_youtube_dl$extractor$sport5, 0, 0, },
    {"youtube_dl.extractor.sportbox", modulecode_youtube_dl$extractor$sportbox, 0, 0, },
    {"youtube_dl.extractor.sportdeutschland", modulecode_youtube_dl$extractor$sportdeutschland, 0, 0, },
    {"youtube_dl.extractor.springboardplatform", modulecode_youtube_dl$extractor$springboardplatform, 0, 0, },
    {"youtube_dl.extractor.sprout", modulecode_youtube_dl$extractor$sprout, 0, 0, },
    {"youtube_dl.extractor.srgssr", modulecode_youtube_dl$extractor$srgssr, 0, 0, },
    {"youtube_dl.extractor.srmediathek", modulecode_youtube_dl$extractor$srmediathek, 0, 0, },
    {"youtube_dl.extractor.stanfordoc", modulecode_youtube_dl$extractor$stanfordoc, 0, 0, },
    {"youtube_dl.extractor.steam", modulecode_youtube_dl$extractor$steam, 0, 0, },
    {"youtube_dl.extractor.stitcher", modulecode_youtube_dl$extractor$stitcher, 0, 0, },
    {"youtube_dl.extractor.streamable", modulecode_youtube_dl$extractor$streamable, 0, 0, },
    {"youtube_dl.extractor.streamcloud", modulecode_youtube_dl$extractor$streamcloud, 0, 0, },
    {"youtube_dl.extractor.streamcz", modulecode_youtube_dl$extractor$streamcz, 0, 0, },
    {"youtube_dl.extractor.streetvoice", modulecode_youtube_dl$extractor$streetvoice, 0, 0, },
    {"youtube_dl.extractor.stretchinternet", modulecode_youtube_dl$extractor$stretchinternet, 0, 0, },
    {"youtube_dl.extractor.stv", modulecode_youtube_dl$extractor$stv, 0, 0, },
    {"youtube_dl.extractor.sunporno", modulecode_youtube_dl$extractor$sunporno, 0, 0, },
    {"youtube_dl.extractor.sverigesradio", modulecode_youtube_dl$extractor$sverigesradio, 0, 0, },
    {"youtube_dl.extractor.svt", modulecode_youtube_dl$extractor$svt, 0, 0, },
    {"youtube_dl.extractor.swrmediathek", modulecode_youtube_dl$extractor$swrmediathek, 0, 0, },
    {"youtube_dl.extractor.syfy", modulecode_youtube_dl$extractor$syfy, 0, 0, },
    {"youtube_dl.extractor.sztvhu", modulecode_youtube_dl$extractor$sztvhu, 0, 0, },
    {"youtube_dl.extractor.tagesschau", modulecode_youtube_dl$extractor$tagesschau, 0, 0, },
    {"youtube_dl.extractor.tass", modulecode_youtube_dl$extractor$tass, 0, 0, },
    {"youtube_dl.extractor.tastytrade", modulecode_youtube_dl$extractor$tastytrade, 0, 0, },
    {"youtube_dl.extractor.tbs", modulecode_youtube_dl$extractor$tbs, 0, 0, },
    {"youtube_dl.extractor.tdslifeway", modulecode_youtube_dl$extractor$tdslifeway, 0, 0, },
    {"youtube_dl.extractor.teachable", modulecode_youtube_dl$extractor$teachable, 0, 0, },
    {"youtube_dl.extractor.teachertube", modulecode_youtube_dl$extractor$teachertube, 0, 0, },
    {"youtube_dl.extractor.teachingchannel", modulecode_youtube_dl$extractor$teachingchannel, 0, 0, },
    {"youtube_dl.extractor.teamcoco", modulecode_youtube_dl$extractor$teamcoco, 0, 0, },
    {"youtube_dl.extractor.teamtreehouse", modulecode_youtube_dl$extractor$teamtreehouse, 0, 0, },
    {"youtube_dl.extractor.techtalks", modulecode_youtube_dl$extractor$techtalks, 0, 0, },
    {"youtube_dl.extractor.ted", modulecode_youtube_dl$extractor$ted, 0, 0, },
    {"youtube_dl.extractor.tele13", modulecode_youtube_dl$extractor$tele13, 0, 0, },
    {"youtube_dl.extractor.tele5", modulecode_youtube_dl$extractor$tele5, 0, 0, },
    {"youtube_dl.extractor.telebruxelles", modulecode_youtube_dl$extractor$telebruxelles, 0, 0, },
    {"youtube_dl.extractor.telecinco", modulecode_youtube_dl$extractor$telecinco, 0, 0, },
    {"youtube_dl.extractor.telegraaf", modulecode_youtube_dl$extractor$telegraaf, 0, 0, },
    {"youtube_dl.extractor.telemb", modulecode_youtube_dl$extractor$telemb, 0, 0, },
    {"youtube_dl.extractor.telequebec", modulecode_youtube_dl$extractor$telequebec, 0, 0, },
    {"youtube_dl.extractor.teletask", modulecode_youtube_dl$extractor$teletask, 0, 0, },
    {"youtube_dl.extractor.telewebion", modulecode_youtube_dl$extractor$telewebion, 0, 0, },
    {"youtube_dl.extractor.tennistv", modulecode_youtube_dl$extractor$tennistv, 0, 0, },
    {"youtube_dl.extractor.tenplay", modulecode_youtube_dl$extractor$tenplay, 0, 0, },
    {"youtube_dl.extractor.testurl", modulecode_youtube_dl$extractor$testurl, 0, 0, },
    {"youtube_dl.extractor.tf1", modulecode_youtube_dl$extractor$tf1, 0, 0, },
    {"youtube_dl.extractor.tfo", modulecode_youtube_dl$extractor$tfo, 0, 0, },
    {"youtube_dl.extractor.theintercept", modulecode_youtube_dl$extractor$theintercept, 0, 0, },
    {"youtube_dl.extractor.theplatform", modulecode_youtube_dl$extractor$theplatform, 0, 0, },
    {"youtube_dl.extractor.thescene", modulecode_youtube_dl$extractor$thescene, 0, 0, },
    {"youtube_dl.extractor.thestar", modulecode_youtube_dl$extractor$thestar, 0, 0, },
    {"youtube_dl.extractor.thesun", modulecode_youtube_dl$extractor$thesun, 0, 0, },
    {"youtube_dl.extractor.theweatherchannel", modulecode_youtube_dl$extractor$theweatherchannel, 0, 0, },
    {"youtube_dl.extractor.thisamericanlife", modulecode_youtube_dl$extractor$thisamericanlife, 0, 0, },
    {"youtube_dl.extractor.thisav", modulecode_youtube_dl$extractor$thisav, 0, 0, },
    {"youtube_dl.extractor.thisoldhouse", modulecode_youtube_dl$extractor$thisoldhouse, 0, 0, },
    {"youtube_dl.extractor.threeqsdn", modulecode_youtube_dl$extractor$threeqsdn, 0, 0, },
    {"youtube_dl.extractor.tiktok", modulecode_youtube_dl$extractor$tiktok, 0, 0, },
    {"youtube_dl.extractor.tinypic", modulecode_youtube_dl$extractor$tinypic, 0, 0, },
    {"youtube_dl.extractor.tmz", modulecode_youtube_dl$extractor$tmz, 0, 0, },
    {"youtube_dl.extractor.tnaflix", modulecode_youtube_dl$extractor$tnaflix, 0, 0, },
    {"youtube_dl.extractor.toggle", modulecode_youtube_dl$extractor$toggle, 0, 0, },
    {"youtube_dl.extractor.tonline", modulecode_youtube_dl$extractor$tonline, 0, 0, },
    {"youtube_dl.extractor.toongoggles", modulecode_youtube_dl$extractor$toongoggles, 0, 0, },
    {"youtube_dl.extractor.toutv", modulecode_youtube_dl$extractor$toutv, 0, 0, },
    {"youtube_dl.extractor.toypics", modulecode_youtube_dl$extractor$toypics, 0, 0, },
    {"youtube_dl.extractor.traileraddict", modulecode_youtube_dl$extractor$traileraddict, 0, 0, },
    {"youtube_dl.extractor.trilulilu", modulecode_youtube_dl$extractor$trilulilu, 0, 0, },
    {"youtube_dl.extractor.trunews", modulecode_youtube_dl$extractor$trunews, 0, 0, },
    {"youtube_dl.extractor.trutv", modulecode_youtube_dl$extractor$trutv, 0, 0, },
    {"youtube_dl.extractor.tube8", modulecode_youtube_dl$extractor$tube8, 0, 0, },
    {"youtube_dl.extractor.tubitv", modulecode_youtube_dl$extractor$tubitv, 0, 0, },
    {"youtube_dl.extractor.tumblr", modulecode_youtube_dl$extractor$tumblr, 0, 0, },
    {"youtube_dl.extractor.tunein", modulecode_youtube_dl$extractor$tunein, 0, 0, },
    {"youtube_dl.extractor.tunepk", modulecode_youtube_dl$extractor$tunepk, 0, 0, },
    {"youtube_dl.extractor.turbo", modulecode_youtube_dl$extractor$turbo, 0, 0, },
    {"youtube_dl.extractor.turner", modulecode_youtube_dl$extractor$turner, 0, 0, },
    {"youtube_dl.extractor.tv2", modulecode_youtube_dl$extractor$tv2, 0, 0, },
    {"youtube_dl.extractor.tv2dk", modulecode_youtube_dl$extractor$tv2dk, 0, 0, },
    {"youtube_dl.extractor.tv2hu", modulecode_youtube_dl$extractor$tv2hu, 0, 0, },
    {"youtube_dl.extractor.tv4", modulecode_youtube_dl$extractor$tv4, 0, 0, },
    {"youtube_dl.extractor.tv5mondeplus", modulecode_youtube_dl$extractor$tv5mondeplus, 0, 0, },
    {"youtube_dl.extractor.tva", modulecode_youtube_dl$extractor$tva, 0, 0, },
    {"youtube_dl.extractor.tvanouvelles", modulecode_youtube_dl$extractor$tvanouvelles, 0, 0, },
    {"youtube_dl.extractor.tvc", modulecode_youtube_dl$extractor$tvc, 0, 0, },
    {"youtube_dl.extractor.tvigle", modulecode_youtube_dl$extractor$tvigle, 0, 0, },
    {"youtube_dl.extractor.tvland", modulecode_youtube_dl$extractor$tvland, 0, 0, },
    {"youtube_dl.extractor.tvn24", modulecode_youtube_dl$extractor$tvn24, 0, 0, },
    {"youtube_dl.extractor.tvnet", modulecode_youtube_dl$extractor$tvnet, 0, 0, },
    {"youtube_dl.extractor.tvnoe", modulecode_youtube_dl$extractor$tvnoe, 0, 0, },
    {"youtube_dl.extractor.tvnow", modulecode_youtube_dl$extractor$tvnow, 0, 0, },
    {"youtube_dl.extractor.tvp", modulecode_youtube_dl$extractor$tvp, 0, 0, },
    {"youtube_dl.extractor.tvplay", modulecode_youtube_dl$extractor$tvplay, 0, 0, },
    {"youtube_dl.extractor.tvplayer", modulecode_youtube_dl$extractor$tvplayer, 0, 0, },
    {"youtube_dl.extractor.tweakers", modulecode_youtube_dl$extractor$tweakers, 0, 0, },
    {"youtube_dl.extractor.twentyfourvideo", modulecode_youtube_dl$extractor$twentyfourvideo, 0, 0, },
    {"youtube_dl.extractor.twentymin", modulecode_youtube_dl$extractor$twentymin, 0, 0, },
    {"youtube_dl.extractor.twentythreevideo", modulecode_youtube_dl$extractor$twentythreevideo, 0, 0, },
    {"youtube_dl.extractor.twitcasting", modulecode_youtube_dl$extractor$twitcasting, 0, 0, },
    {"youtube_dl.extractor.twitch", modulecode_youtube_dl$extractor$twitch, 0, 0, },
    {"youtube_dl.extractor.twitter", modulecode_youtube_dl$extractor$twitter, 0, 0, },
    {"youtube_dl.extractor.udemy", modulecode_youtube_dl$extractor$udemy, 0, 0, },
    {"youtube_dl.extractor.udn", modulecode_youtube_dl$extractor$udn, 0, 0, },
    {"youtube_dl.extractor.ufctv", modulecode_youtube_dl$extractor$ufctv, 0, 0, },
    {"youtube_dl.extractor.uktvplay", modulecode_youtube_dl$extractor$uktvplay, 0, 0, },
    {"youtube_dl.extractor.umg", modulecode_youtube_dl$extractor$umg, 0, 0, },
    {"youtube_dl.extractor.unistra", modulecode_youtube_dl$extractor$unistra, 0, 0, },
    {"youtube_dl.extractor.unity", modulecode_youtube_dl$extractor$unity, 0, 0, },
    {"youtube_dl.extractor.uol", modulecode_youtube_dl$extractor$uol, 0, 0, },
    {"youtube_dl.extractor.uplynk", modulecode_youtube_dl$extractor$uplynk, 0, 0, },
    {"youtube_dl.extractor.urort", modulecode_youtube_dl$extractor$urort, 0, 0, },
    {"youtube_dl.extractor.urplay", modulecode_youtube_dl$extractor$urplay, 0, 0, },
    {"youtube_dl.extractor.usanetwork", modulecode_youtube_dl$extractor$usanetwork, 0, 0, },
    {"youtube_dl.extractor.usatoday", modulecode_youtube_dl$extractor$usatoday, 0, 0, },
    {"youtube_dl.extractor.ustream", modulecode_youtube_dl$extractor$ustream, 0, 0, },
    {"youtube_dl.extractor.ustudio", modulecode_youtube_dl$extractor$ustudio, 0, 0, },
    {"youtube_dl.extractor.varzesh3", modulecode_youtube_dl$extractor$varzesh3, 0, 0, },
    {"youtube_dl.extractor.vbox7", modulecode_youtube_dl$extractor$vbox7, 0, 0, },
    {"youtube_dl.extractor.veehd", modulecode_youtube_dl$extractor$veehd, 0, 0, },
    {"youtube_dl.extractor.veoh", modulecode_youtube_dl$extractor$veoh, 0, 0, },
    {"youtube_dl.extractor.vesti", modulecode_youtube_dl$extractor$vesti, 0, 0, },
    {"youtube_dl.extractor.vevo", modulecode_youtube_dl$extractor$vevo, 0, 0, },
    {"youtube_dl.extractor.vgtv", modulecode_youtube_dl$extractor$vgtv, 0, 0, },
    {"youtube_dl.extractor.vh1", modulecode_youtube_dl$extractor$vh1, 0, 0, },
    {"youtube_dl.extractor.vice", modulecode_youtube_dl$extractor$vice, 0, 0, },
    {"youtube_dl.extractor.vidbit", modulecode_youtube_dl$extractor$vidbit, 0, 0, },
    {"youtube_dl.extractor.viddler", modulecode_youtube_dl$extractor$viddler, 0, 0, },
    {"youtube_dl.extractor.videa", modulecode_youtube_dl$extractor$videa, 0, 0, },
    {"youtube_dl.extractor.videodetective", modulecode_youtube_dl$extractor$videodetective, 0, 0, },
    {"youtube_dl.extractor.videofyme", modulecode_youtube_dl$extractor$videofyme, 0, 0, },
    {"youtube_dl.extractor.videomore", modulecode_youtube_dl$extractor$videomore, 0, 0, },
    {"youtube_dl.extractor.videopress", modulecode_youtube_dl$extractor$videopress, 0, 0, },
    {"youtube_dl.extractor.vidio", modulecode_youtube_dl$extractor$vidio, 0, 0, },
    {"youtube_dl.extractor.vidlii", modulecode_youtube_dl$extractor$vidlii, 0, 0, },
    {"youtube_dl.extractor.vidme", modulecode_youtube_dl$extractor$vidme, 0, 0, },
    {"youtube_dl.extractor.vidzi", modulecode_youtube_dl$extractor$vidzi, 0, 0, },
    {"youtube_dl.extractor.vier", modulecode_youtube_dl$extractor$vier, 0, 0, },
    {"youtube_dl.extractor.viewlift", modulecode_youtube_dl$extractor$viewlift, 0, 0, },
    {"youtube_dl.extractor.viidea", modulecode_youtube_dl$extractor$viidea, 0, 0, },
    {"youtube_dl.extractor.viki", modulecode_youtube_dl$extractor$viki, 0, 0, },
    {"youtube_dl.extractor.vimeo", modulecode_youtube_dl$extractor$vimeo, 0, 0, },
    {"youtube_dl.extractor.vimple", modulecode_youtube_dl$extractor$vimple, 0, 0, },
    {"youtube_dl.extractor.vine", modulecode_youtube_dl$extractor$vine, 0, 0, },
    {"youtube_dl.extractor.viqeo", modulecode_youtube_dl$extractor$viqeo, 0, 0, },
    {"youtube_dl.extractor.viu", modulecode_youtube_dl$extractor$viu, 0, 0, },
    {"youtube_dl.extractor.vk", modulecode_youtube_dl$extractor$vk, 0, 0, },
    {"youtube_dl.extractor.vlive", modulecode_youtube_dl$extractor$vlive, 0, 0, },
    {"youtube_dl.extractor.vodlocker", modulecode_youtube_dl$extractor$vodlocker, 0, 0, },
    {"youtube_dl.extractor.vodpl", modulecode_youtube_dl$extractor$vodpl, 0, 0, },
    {"youtube_dl.extractor.vodplatform", modulecode_youtube_dl$extractor$vodplatform, 0, 0, },
    {"youtube_dl.extractor.voicerepublic", modulecode_youtube_dl$extractor$voicerepublic, 0, 0, },
    {"youtube_dl.extractor.voot", modulecode_youtube_dl$extractor$voot, 0, 0, },
    {"youtube_dl.extractor.voxmedia", modulecode_youtube_dl$extractor$voxmedia, 0, 0, },
    {"youtube_dl.extractor.vrak", modulecode_youtube_dl$extractor$vrak, 0, 0, },
    {"youtube_dl.extractor.vrt", modulecode_youtube_dl$extractor$vrt, 0, 0, },
    {"youtube_dl.extractor.vrv", modulecode_youtube_dl$extractor$vrv, 0, 0, },
    {"youtube_dl.extractor.vshare", modulecode_youtube_dl$extractor$vshare, 0, 0, },
    {"youtube_dl.extractor.vube", modulecode_youtube_dl$extractor$vube, 0, 0, },
    {"youtube_dl.extractor.vuclip", modulecode_youtube_dl$extractor$vuclip, 0, 0, },
    {"youtube_dl.extractor.vvvvid", modulecode_youtube_dl$extractor$vvvvid, 0, 0, },
    {"youtube_dl.extractor.vyborymos", modulecode_youtube_dl$extractor$vyborymos, 0, 0, },
    {"youtube_dl.extractor.vzaar", modulecode_youtube_dl$extractor$vzaar, 0, 0, },
    {"youtube_dl.extractor.wakanim", modulecode_youtube_dl$extractor$wakanim, 0, 0, },
    {"youtube_dl.extractor.walla", modulecode_youtube_dl$extractor$walla, 0, 0, },
    {"youtube_dl.extractor.washingtonpost", modulecode_youtube_dl$extractor$washingtonpost, 0, 0, },
    {"youtube_dl.extractor.wat", modulecode_youtube_dl$extractor$wat, 0, 0, },
    {"youtube_dl.extractor.watchbox", modulecode_youtube_dl$extractor$watchbox, 0, 0, },
    {"youtube_dl.extractor.watchindianporn", modulecode_youtube_dl$extractor$watchindianporn, 0, 0, },
    {"youtube_dl.extractor.wdr", modulecode_youtube_dl$extractor$wdr, 0, 0, },
    {"youtube_dl.extractor.webcaster", modulecode_youtube_dl$extractor$webcaster, 0, 0, },
    {"youtube_dl.extractor.webofstories", modulecode_youtube_dl$extractor$webofstories, 0, 0, },
    {"youtube_dl.extractor.weibo", modulecode_youtube_dl$extractor$weibo, 0, 0, },
    {"youtube_dl.extractor.weiqitv", modulecode_youtube_dl$extractor$weiqitv, 0, 0, },
    {"youtube_dl.extractor.wistia", modulecode_youtube_dl$extractor$wistia, 0, 0, },
    {"youtube_dl.extractor.worldstarhiphop", modulecode_youtube_dl$extractor$worldstarhiphop, 0, 0, },
    {"youtube_dl.extractor.wsj", modulecode_youtube_dl$extractor$wsj, 0, 0, },
    {"youtube_dl.extractor.wwe", modulecode_youtube_dl$extractor$wwe, 0, 0, },
    {"youtube_dl.extractor.xbef", modulecode_youtube_dl$extractor$xbef, 0, 0, },
    {"youtube_dl.extractor.xboxclips", modulecode_youtube_dl$extractor$xboxclips, 0, 0, },
    {"youtube_dl.extractor.xfileshare", modulecode_youtube_dl$extractor$xfileshare, 0, 0, },
    {"youtube_dl.extractor.xhamster", modulecode_youtube_dl$extractor$xhamster, 0, 0, },
    {"youtube_dl.extractor.xiami", modulecode_youtube_dl$extractor$xiami, 0, 0, },
    {"youtube_dl.extractor.ximalaya", modulecode_youtube_dl$extractor$ximalaya, 0, 0, },
    {"youtube_dl.extractor.xminus", modulecode_youtube_dl$extractor$xminus, 0, 0, },
    {"youtube_dl.extractor.xnxx", modulecode_youtube_dl$extractor$xnxx, 0, 0, },
    {"youtube_dl.extractor.xstream", modulecode_youtube_dl$extractor$xstream, 0, 0, },
    {"youtube_dl.extractor.xtube", modulecode_youtube_dl$extractor$xtube, 0, 0, },
    {"youtube_dl.extractor.xuite", modulecode_youtube_dl$extractor$xuite, 0, 0, },
    {"youtube_dl.extractor.xvideos", modulecode_youtube_dl$extractor$xvideos, 0, 0, },
    {"youtube_dl.extractor.xxxymovies", modulecode_youtube_dl$extractor$xxxymovies, 0, 0, },
    {"youtube_dl.extractor.yahoo", modulecode_youtube_dl$extractor$yahoo, 0, 0, },
    {"youtube_dl.extractor.yandexdisk", modulecode_youtube_dl$extractor$yandexdisk, 0, 0, },
    {"youtube_dl.extractor.yandexmusic", modulecode_youtube_dl$extractor$yandexmusic, 0, 0, },
    {"youtube_dl.extractor.yandexvideo", modulecode_youtube_dl$extractor$yandexvideo, 0, 0, },
    {"youtube_dl.extractor.yapfiles", modulecode_youtube_dl$extractor$yapfiles, 0, 0, },
    {"youtube_dl.extractor.yesjapan", modulecode_youtube_dl$extractor$yesjapan, 0, 0, },
    {"youtube_dl.extractor.yinyuetai", modulecode_youtube_dl$extractor$yinyuetai, 0, 0, },
    {"youtube_dl.extractor.ynet", modulecode_youtube_dl$extractor$ynet, 0, 0, },
    {"youtube_dl.extractor.youjizz", modulecode_youtube_dl$extractor$youjizz, 0, 0, },
    {"youtube_dl.extractor.youku", modulecode_youtube_dl$extractor$youku, 0, 0, },
    {"youtube_dl.extractor.younow", modulecode_youtube_dl$extractor$younow, 0, 0, },
    {"youtube_dl.extractor.youporn", modulecode_youtube_dl$extractor$youporn, 0, 0, },
    {"youtube_dl.extractor.yourporn", modulecode_youtube_dl$extractor$yourporn, 0, 0, },
    {"youtube_dl.extractor.yourupload", modulecode_youtube_dl$extractor$yourupload, 0, 0, },
    {"youtube_dl.extractor.youtube", modulecode_youtube_dl$extractor$youtube, 0, 0, },
    {"youtube_dl.extractor.zapiks", modulecode_youtube_dl$extractor$zapiks, 0, 0, },
    {"youtube_dl.extractor.zaq1", modulecode_youtube_dl$extractor$zaq1, 0, 0, },
    {"youtube_dl.extractor.zattoo", modulecode_youtube_dl$extractor$zattoo, 0, 0, },
    {"youtube_dl.extractor.zdf", modulecode_youtube_dl$extractor$zdf, 0, 0, },
    {"youtube_dl.extractor.zingmp3", modulecode_youtube_dl$extractor$zingmp3, 0, 0, },
    {"youtube_dl.extractor.zype", modulecode_youtube_dl$extractor$zype, 0, 0, },
    {"youtube_dl.jsinterp", modulecode_youtube_dl$jsinterp, 0, 0, },
    {"youtube_dl.options", modulecode_youtube_dl$options, 0, 0, },
    {"youtube_dl.postprocessor", modulecode_youtube_dl$postprocessor, 0, 0, NUITKA_PACKAGE_FLAG},
    {"youtube_dl.postprocessor.common", modulecode_youtube_dl$postprocessor$common, 0, 0, },
    {"youtube_dl.postprocessor.embedthumbnail", modulecode_youtube_dl$postprocessor$embedthumbnail, 0, 0, },
    {"youtube_dl.postprocessor.execafterdownload", modulecode_youtube_dl$postprocessor$execafterdownload, 0, 0, },
    {"youtube_dl.postprocessor.ffmpeg", modulecode_youtube_dl$postprocessor$ffmpeg, 0, 0, },
    {"youtube_dl.postprocessor.metadatafromtitle", modulecode_youtube_dl$postprocessor$metadatafromtitle, 0, 0, },
    {"youtube_dl.postprocessor.xattrpp", modulecode_youtube_dl$postprocessor$xattrpp, 0, 0, },
    {"youtube_dl.socks", modulecode_youtube_dl$socks, 0, 0, },
    {"youtube_dl.swfinterp", modulecode_youtube_dl$swfinterp, 0, 0, },
    {"youtube_dl.update", modulecode_youtube_dl$update, 0, 0, },
    {"youtube_dl.utils", modulecode_youtube_dl$utils, 0, 0, },
    {"youtube_dl.version", modulecode_youtube_dl$version, 0, 0, },
    {NULL, NULL, 0, 0, 0}
};

void setupMetaPathBasedLoader(void) {
    static bool init_done = false;

    if (init_done == false) {
        registerMetaPathBasedUnfreezer(meta_path_loader_entries);
        init_done = true;
    }
}
