/* Generated code for Python module 'urllib3.util.wait'
 * created by Nuitka version 0.6.8.4
 *
 * This code is in part copyright 2020 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The "_module_urllib3$util$wait" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$wait;
PyDictObject *moduledict_urllib3$util$wait;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_poll_obj_tuple;
extern PyObject *const_str_plain_args;
extern PyObject *const_tuple_int_pos_3_int_pos_5_tuple;
extern PyObject *const_str_plain_fn;
static PyObject *const_tuple_str_plain_partial_tuple;
extern PyObject *const_int_pos_5;
extern PyObject *const_str_plain_read;
static PyObject *const_tuple_str_plain_monotonic_tuple;
static PyObject *const_str_plain_wait_for_socket;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_errno;
extern PyObject *const_str_plain_time;
static PyObject *const_str_plain_select_wait_for_socket;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_digest_09d63a5a61044765cbef1a09e46446f1;
extern PyObject *const_str_plain_wait_for_read;
extern PyObject *const_str_plain_t;
static PyObject *const_str_digest_d4b4230713465b3db317e462a98dc2e6;
extern PyObject *const_str_plain_sock;
static PyObject *const_str_plain_do_poll;
extern PyObject *const_tuple_str_plain_args_str_plain_kwargs_tuple;
static PyObject *const_str_plain__have_working_poll;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_plain_wait_for_write;
extern PyObject *const_str_plain_mask;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_rcheck;
extern PyObject *const_str_plain_append;
static PyObject *const_str_plain_POLLIN;
static PyObject *const_str_digest_4b56500d01b3fee5d65c9e1ca5d7a24b;
static PyObject *const_str_digest_d971e987b803540088bf5c2f9c8029d3;
static PyObject *const_str_digest_53b15aa7e0ea17f618d5cd4425d9a1e0;
static PyObject *const_tuple_type_AttributeError_type_OSError_tuple;
static PyObject *const_tuple_0a581e0828f6626b1928e3628d6a5a98_tuple;
extern PyObject *const_str_plain_error;
static PyObject *const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple;
static PyObject *const_str_digest_9fee63ab089d8ffa84a45aa3db97c377;
extern PyObject *const_float_inf;
extern PyObject *const_str_plain_False;
static PyObject *const_str_plain_POLLOUT;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain___all__;
static PyObject *const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple;
extern PyObject *const_str_plain_deadline;
static PyObject *const_tuple_str_plain_sock_str_plain_timeout_tuple;
static PyObject *const_list_0f3719a68b319eac70aa05da51950d41_list;
extern PyObject *const_int_0;
static PyObject *const_str_plain_EINTR;
extern PyObject *const_str_plain_NoWayToWaitForSocketError;
extern PyObject *const_int_pos_1000;
extern PyObject *const_str_plain_register;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_select;
static PyObject *const_str_plain_wready;
extern PyObject *const_str_plain_monotonic;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_c21f3ba11788d793953e7f6f01c16ac0;
extern PyObject *const_tuple_type_Exception_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_functools;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_plain_poll_wait_for_socket;
extern PyObject *const_str_plain_partial;
static PyObject *const_str_digest_d47e372f7598b75180e9e0f6f1e0d266;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_plain_version_info;
static PyObject *const_str_plain_null_wait_for_socket;
static PyObject *const_str_plain__retry_on_intr;
static PyObject *const_str_plain_poll_obj;
static PyObject *const_tuple_false_false_none_tuple;
static PyObject *const_str_plain_wcheck;
static PyObject *const_str_plain_xready;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_poll;
static PyObject *const_tuple_str_plain_fn_str_plain_timeout_tuple;
static PyObject *const_str_plain_rready;
static PyObject *const_str_digest_2793acd2a9eb309196b14c7196b7f975;
static PyObject *const_tuple_str_plain_t_str_plain_poll_obj_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_tuple_str_plain_poll_obj_tuple = PyTuple_New(1);
    const_str_plain_poll_obj = UNSTREAM_STRING_ASCII(&constant_bin[ 724140 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_poll_obj_tuple, 0, const_str_plain_poll_obj); Py_INCREF(const_str_plain_poll_obj);
    const_tuple_str_plain_partial_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_partial_tuple, 0, const_str_plain_partial); Py_INCREF(const_str_plain_partial);
    const_tuple_str_plain_monotonic_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_monotonic_tuple, 0, const_str_plain_monotonic); Py_INCREF(const_str_plain_monotonic);
    const_str_plain_wait_for_socket = UNSTREAM_STRING_ASCII(&constant_bin[ 25291 ], 15, 1);
    const_str_plain_select_wait_for_socket = UNSTREAM_STRING_ASCII(&constant_bin[ 25328 ], 22, 1);
    const_str_digest_d4b4230713465b3db317e462a98dc2e6 = UNSTREAM_STRING_ASCII(&constant_bin[ 724148 ], 37, 0);
    const_str_plain_do_poll = UNSTREAM_STRING_ASCII(&constant_bin[ 724178 ], 7, 1);
    const_str_plain__have_working_poll = UNSTREAM_STRING_ASCII(&constant_bin[ 25246 ], 18, 1);
    const_str_plain_rcheck = UNSTREAM_STRING_ASCII(&constant_bin[ 724185 ], 6, 1);
    const_str_plain_POLLIN = UNSTREAM_STRING_ASCII(&constant_bin[ 724191 ], 6, 1);
    const_str_digest_4b56500d01b3fee5d65c9e1ca5d7a24b = UNSTREAM_STRING_ASCII(&constant_bin[ 724197 ], 135, 0);
    const_str_digest_d971e987b803540088bf5c2f9c8029d3 = UNSTREAM_STRING_ASCII(&constant_bin[ 724332 ], 30, 0);
    const_str_digest_53b15aa7e0ea17f618d5cd4425d9a1e0 = UNSTREAM_STRING_ASCII(&constant_bin[ 724362 ], 95, 0);
    const_tuple_type_AttributeError_type_OSError_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_type_AttributeError_type_OSError_tuple, 0, (PyObject *)PyExc_AttributeError); Py_INCREF((PyObject *)PyExc_AttributeError);
    PyTuple_SET_ITEM(const_tuple_type_AttributeError_type_OSError_tuple, 1, (PyObject *)PyExc_OSError); Py_INCREF((PyObject *)PyExc_OSError);
    const_tuple_0a581e0828f6626b1928e3628d6a5a98_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_0a581e0828f6626b1928e3628d6a5a98_tuple, 0, const_str_plain_fn); Py_INCREF(const_str_plain_fn);
    PyTuple_SET_ITEM(const_tuple_0a581e0828f6626b1928e3628d6a5a98_tuple, 1, const_str_plain_timeout); Py_INCREF(const_str_plain_timeout);
    PyTuple_SET_ITEM(const_tuple_0a581e0828f6626b1928e3628d6a5a98_tuple, 2, const_str_plain_deadline); Py_INCREF(const_str_plain_deadline);
    PyTuple_SET_ITEM(const_tuple_0a581e0828f6626b1928e3628d6a5a98_tuple, 3, const_str_plain_e); Py_INCREF(const_str_plain_e);
    const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple = PyTuple_New(7);
    PyTuple_SET_ITEM(const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 0, const_str_plain_sock); Py_INCREF(const_str_plain_sock);
    PyTuple_SET_ITEM(const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 1, const_str_plain_read); Py_INCREF(const_str_plain_read);
    PyTuple_SET_ITEM(const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 2, const_str_plain_write); Py_INCREF(const_str_plain_write);
    PyTuple_SET_ITEM(const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 3, const_str_plain_timeout); Py_INCREF(const_str_plain_timeout);
    PyTuple_SET_ITEM(const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 4, const_str_plain_mask); Py_INCREF(const_str_plain_mask);
    PyTuple_SET_ITEM(const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 5, const_str_plain_poll_obj); Py_INCREF(const_str_plain_poll_obj);
    PyTuple_SET_ITEM(const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 6, const_str_plain_do_poll); Py_INCREF(const_str_plain_do_poll);
    const_str_digest_9fee63ab089d8ffa84a45aa3db97c377 = UNSTREAM_STRING_ASCII(&constant_bin[ 724457 ], 17, 0);
    const_str_plain_POLLOUT = UNSTREAM_STRING_ASCII(&constant_bin[ 724474 ], 7, 1);
    const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple = PyTuple_New(10);
    PyTuple_SET_ITEM(const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple, 0, const_str_plain_sock); Py_INCREF(const_str_plain_sock);
    PyTuple_SET_ITEM(const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple, 1, const_str_plain_read); Py_INCREF(const_str_plain_read);
    PyTuple_SET_ITEM(const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple, 2, const_str_plain_write); Py_INCREF(const_str_plain_write);
    PyTuple_SET_ITEM(const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple, 3, const_str_plain_timeout); Py_INCREF(const_str_plain_timeout);
    PyTuple_SET_ITEM(const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple, 4, const_str_plain_rcheck); Py_INCREF(const_str_plain_rcheck);
    const_str_plain_wcheck = UNSTREAM_STRING_ASCII(&constant_bin[ 724481 ], 6, 1);
    PyTuple_SET_ITEM(const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple, 5, const_str_plain_wcheck); Py_INCREF(const_str_plain_wcheck);
    PyTuple_SET_ITEM(const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple, 6, const_str_plain_fn); Py_INCREF(const_str_plain_fn);
    const_str_plain_rready = UNSTREAM_STRING_ASCII(&constant_bin[ 724487 ], 6, 1);
    PyTuple_SET_ITEM(const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple, 7, const_str_plain_rready); Py_INCREF(const_str_plain_rready);
    const_str_plain_wready = UNSTREAM_STRING_ASCII(&constant_bin[ 724493 ], 6, 1);
    PyTuple_SET_ITEM(const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple, 8, const_str_plain_wready); Py_INCREF(const_str_plain_wready);
    const_str_plain_xready = UNSTREAM_STRING_ASCII(&constant_bin[ 724499 ], 6, 1);
    PyTuple_SET_ITEM(const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple, 9, const_str_plain_xready); Py_INCREF(const_str_plain_xready);
    const_tuple_str_plain_sock_str_plain_timeout_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_sock_str_plain_timeout_tuple, 0, const_str_plain_sock); Py_INCREF(const_str_plain_sock);
    PyTuple_SET_ITEM(const_tuple_str_plain_sock_str_plain_timeout_tuple, 1, const_str_plain_timeout); Py_INCREF(const_str_plain_timeout);
    const_list_0f3719a68b319eac70aa05da51950d41_list = PyList_New(3);
    PyList_SET_ITEM(const_list_0f3719a68b319eac70aa05da51950d41_list, 0, const_str_plain_NoWayToWaitForSocketError); Py_INCREF(const_str_plain_NoWayToWaitForSocketError);
    PyList_SET_ITEM(const_list_0f3719a68b319eac70aa05da51950d41_list, 1, const_str_plain_wait_for_read); Py_INCREF(const_str_plain_wait_for_read);
    PyList_SET_ITEM(const_list_0f3719a68b319eac70aa05da51950d41_list, 2, const_str_plain_wait_for_write); Py_INCREF(const_str_plain_wait_for_write);
    const_str_plain_EINTR = UNSTREAM_STRING_ASCII(&constant_bin[ 724505 ], 5, 1);
    const_str_digest_c21f3ba11788d793953e7f6f01c16ac0 = UNSTREAM_STRING_ASCII(&constant_bin[ 724510 ], 135, 0);
    const_str_plain_poll_wait_for_socket = UNSTREAM_STRING_ASCII(&constant_bin[ 25286 ], 20, 1);
    const_str_digest_d47e372f7598b75180e9e0f6f1e0d266 = UNSTREAM_STRING_ASCII(&constant_bin[ 724645 ], 50, 0);
    const_str_plain_null_wait_for_socket = UNSTREAM_STRING_ASCII(&constant_bin[ 25372 ], 20, 1);
    const_str_plain__retry_on_intr = UNSTREAM_STRING_ASCII(&constant_bin[ 25210 ], 14, 1);
    const_tuple_false_false_none_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_false_false_none_tuple, 0, Py_False); Py_INCREF(Py_False);
    PyTuple_SET_ITEM(const_tuple_false_false_none_tuple, 1, Py_False); Py_INCREF(Py_False);
    PyTuple_SET_ITEM(const_tuple_false_false_none_tuple, 2, Py_None); Py_INCREF(Py_None);
    const_str_plain_poll = UNSTREAM_STRING_ASCII(&constant_bin[ 25260 ], 4, 1);
    const_tuple_str_plain_fn_str_plain_timeout_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_fn_str_plain_timeout_tuple, 0, const_str_plain_fn); Py_INCREF(const_str_plain_fn);
    PyTuple_SET_ITEM(const_tuple_str_plain_fn_str_plain_timeout_tuple, 1, const_str_plain_timeout); Py_INCREF(const_str_plain_timeout);
    const_str_digest_2793acd2a9eb309196b14c7196b7f975 = UNSTREAM_STRING_ASCII(&constant_bin[ 724695 ], 26, 0);
    const_tuple_str_plain_t_str_plain_poll_obj_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_t_str_plain_poll_obj_tuple, 0, const_str_plain_t); Py_INCREF(const_str_plain_t);
    PyTuple_SET_ITEM(const_tuple_str_plain_t_str_plain_poll_obj_tuple, 1, const_str_plain_poll_obj); Py_INCREF(const_str_plain_poll_obj);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$util$wait(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_6601d9dd13fb0b779cb7351ed0831d0c;
static PyCodeObject *codeobj_3243a1bc627419d9c35e356f1b6b1ddf;
static PyCodeObject *codeobj_c6e3f1b5a5a72b31ca4891d571e113c0;
static PyCodeObject *codeobj_95b60b65fab89e05fbc63fa2d93f43c4;
static PyCodeObject *codeobj_c27f4f4fec9b915bedf42af266ff04ce;
static PyCodeObject *codeobj_eebe593b1628c0f4cbff81fb386029c8;
static PyCodeObject *codeobj_5efe5287b0f40c1b2c469a132677541b;
static PyCodeObject *codeobj_3d58422e7b370b7fa7cf29dce0095e71;
static PyCodeObject *codeobj_064a30e0e255e4b75df79d5ad00e55aa;
static PyCodeObject *codeobj_1225835df83aa020b870aca32a534028;
static PyCodeObject *codeobj_4ad94d5a25bb9cbf4618f00a362dc350;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_53b15aa7e0ea17f618d5cd4425d9a1e0;
    codeobj_6601d9dd13fb0b779cb7351ed0831d0c = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_2793acd2a9eb309196b14c7196b7f975, const_tuple_empty, 0, 0, 0);
    codeobj_3243a1bc627419d9c35e356f1b6b1ddf = MAKE_CODEOBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__have_working_poll, const_tuple_str_plain_poll_obj_tuple, 0, 0, 0);
    codeobj_c6e3f1b5a5a72b31ca4891d571e113c0 = MAKE_CODEOBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__retry_on_intr, const_tuple_str_plain_fn_str_plain_timeout_tuple, 2, 0, 0);
    codeobj_95b60b65fab89e05fbc63fa2d93f43c4 = MAKE_CODEOBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__retry_on_intr, const_tuple_0a581e0828f6626b1928e3628d6a5a98_tuple, 2, 0, 0);
    codeobj_c27f4f4fec9b915bedf42af266ff04ce = MAKE_CODEOBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_do_poll, const_tuple_str_plain_t_str_plain_poll_obj_tuple, 1, 0, 0);
    codeobj_eebe593b1628c0f4cbff81fb386029c8 = MAKE_CODEOBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_null_wait_for_socket, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, 0, 0);
    codeobj_5efe5287b0f40c1b2c469a132677541b = MAKE_CODEOBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_poll_wait_for_socket, const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, 4, 0, 0);
    codeobj_3d58422e7b370b7fa7cf29dce0095e71 = MAKE_CODEOBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_select_wait_for_socket, const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple, 4, 0, 0);
    codeobj_064a30e0e255e4b75df79d5ad00e55aa = MAKE_CODEOBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_wait_for_read, const_tuple_str_plain_sock_str_plain_timeout_tuple, 2, 0, 0);
    codeobj_1225835df83aa020b870aca32a534028 = MAKE_CODEOBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_wait_for_socket, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, 0, 0);
    codeobj_4ad94d5a25bb9cbf4618f00a362dc350 = MAKE_CODEOBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_wait_for_write, const_tuple_str_plain_sock_str_plain_timeout_tuple, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_1__retry_on_intr();


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_2__retry_on_intr();


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_3_select_wait_for_socket(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_4_poll_wait_for_socket(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_4_poll_wait_for_socket$$$function_1_do_poll();


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_5_null_wait_for_socket();


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_6__have_working_poll();


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_7_wait_for_socket();


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_8_wait_for_read(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_9_wait_for_write(PyObject *defaults);


// The module function definitions.
static PyObject *impl_urllib3$util$wait$$$function_1__retry_on_intr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fn = python_pars[0];
    PyObject *par_timeout = python_pars[1];
    struct Nuitka_FrameObject *frame_c6e3f1b5a5a72b31ca4891d571e113c0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c6e3f1b5a5a72b31ca4891d571e113c0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c6e3f1b5a5a72b31ca4891d571e113c0)) {
        Py_XDECREF(cache_frame_c6e3f1b5a5a72b31ca4891d571e113c0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c6e3f1b5a5a72b31ca4891d571e113c0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c6e3f1b5a5a72b31ca4891d571e113c0 = MAKE_FUNCTION_FRAME(codeobj_c6e3f1b5a5a72b31ca4891d571e113c0, module_urllib3$util$wait, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c6e3f1b5a5a72b31ca4891d571e113c0->m_type_description == NULL);
    frame_c6e3f1b5a5a72b31ca4891d571e113c0 = cache_frame_c6e3f1b5a5a72b31ca4891d571e113c0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c6e3f1b5a5a72b31ca4891d571e113c0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c6e3f1b5a5a72b31ca4891d571e113c0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_fn);
        tmp_called_name_1 = par_fn;
        CHECK_OBJECT(par_timeout);
        tmp_args_element_name_1 = par_timeout;
        frame_c6e3f1b5a5a72b31ca4891d571e113c0->m_frame.f_lineno = 43;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c6e3f1b5a5a72b31ca4891d571e113c0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c6e3f1b5a5a72b31ca4891d571e113c0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c6e3f1b5a5a72b31ca4891d571e113c0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c6e3f1b5a5a72b31ca4891d571e113c0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c6e3f1b5a5a72b31ca4891d571e113c0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c6e3f1b5a5a72b31ca4891d571e113c0, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c6e3f1b5a5a72b31ca4891d571e113c0,
        type_description_1,
        par_fn,
        par_timeout
    );


    // Release cached frame.
    if (frame_c6e3f1b5a5a72b31ca4891d571e113c0 == cache_frame_c6e3f1b5a5a72b31ca4891d571e113c0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_c6e3f1b5a5a72b31ca4891d571e113c0);
    }
    cache_frame_c6e3f1b5a5a72b31ca4891d571e113c0 = NULL;

    assertFrameObject(frame_c6e3f1b5a5a72b31ca4891d571e113c0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_fn);
    Py_DECREF(par_fn);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fn);
    Py_DECREF(par_fn);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$wait$$$function_2__retry_on_intr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fn = python_pars[0];
    PyObject *par_timeout = python_pars[1];
    PyObject *var_deadline = NULL;
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_95b60b65fab89e05fbc63fa2d93f43c4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_95b60b65fab89e05fbc63fa2d93f43c4 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_95b60b65fab89e05fbc63fa2d93f43c4)) {
        Py_XDECREF(cache_frame_95b60b65fab89e05fbc63fa2d93f43c4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_95b60b65fab89e05fbc63fa2d93f43c4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_95b60b65fab89e05fbc63fa2d93f43c4 = MAKE_FUNCTION_FRAME(codeobj_95b60b65fab89e05fbc63fa2d93f43c4, module_urllib3$util$wait, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_95b60b65fab89e05fbc63fa2d93f43c4->m_type_description == NULL);
    frame_95b60b65fab89e05fbc63fa2d93f43c4 = cache_frame_95b60b65fab89e05fbc63fa2d93f43c4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_95b60b65fab89e05fbc63fa2d93f43c4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_95b60b65fab89e05fbc63fa2d93f43c4) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_timeout);
        tmp_compexpr_left_1 = par_timeout;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_float_inf;
        assert(var_deadline == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_deadline = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_monotonic);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_monotonic);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25116 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 52;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_95b60b65fab89e05fbc63fa2d93f43c4->m_frame.f_lineno = 52;
        tmp_left_name_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_timeout);
        tmp_right_name_1 = par_timeout;
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_deadline == NULL);
        var_deadline = tmp_assign_source_2;
    }
    branch_end_1:;
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_fn);
        tmp_called_name_2 = par_fn;
        if (par_timeout == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "timeout");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_1 = par_timeout;
        frame_95b60b65fab89e05fbc63fa2d93f43c4->m_frame.f_lineno = 56;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_95b60b65fab89e05fbc63fa2d93f43c4, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_95b60b65fab89e05fbc63fa2d93f43c4, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    PyException_SetTraceback(exception_keeper_value_1, (PyObject *)exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_mvar_value_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_1 = PyExc_OSError;
        tmp_compexpr_right_2 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_compexpr_right_2, 0, tmp_tuple_element_1);
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_select);
        }

        if (tmp_mvar_value_2 == NULL) {
            Py_DECREF(tmp_compexpr_right_2);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25147 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 58;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_1 = tmp_mvar_value_2;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_error);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_right_2);

            exception_lineno = 58;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        PyTuple_SET_ITEM(tmp_compexpr_right_2, 1, tmp_tuple_element_1);
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_3;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT(var_e);
        tmp_expression_name_3 = var_e;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain_args);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_errno);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_errno);
        }

        if (tmp_mvar_value_3 == NULL) {
            Py_DECREF(tmp_compexpr_left_3);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19642 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 60;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_4 = tmp_mvar_value_3;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain_EINTR);
        if (tmp_compexpr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_3);

            exception_lineno = 60;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_left_3);
        Py_DECREF(tmp_compexpr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 61;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_95b60b65fab89e05fbc63fa2d93f43c4->m_frame) frame_95b60b65fab89e05fbc63fa2d93f43c4->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_4;
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT(var_deadline);
        tmp_left_name_2 = var_deadline;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_monotonic);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_monotonic);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25116 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 63;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        frame_95b60b65fab89e05fbc63fa2d93f43c4->m_frame.f_lineno = 63;
        tmp_right_name_2 = CALL_FUNCTION_NO_ARGS(tmp_called_name_3);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_timeout;
            par_timeout = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_tmp_condition_result_4_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_timeout);
        tmp_compexpr_left_4 = par_timeout;
        tmp_compexpr_right_4 = const_int_0;
        tmp_tmp_condition_result_4_object_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_tmp_condition_result_4_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_4_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_4_object_1);

            exception_lineno = 64;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_4_object_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_int_0;
        {
            PyObject *old = par_timeout;
            assert(old != NULL);
            par_timeout = tmp_assign_source_5;
            Py_INCREF(par_timeout);
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT(par_timeout);
        tmp_compexpr_left_5 = par_timeout;
        tmp_compexpr_right_5 = const_float_inf;
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_FLOAT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_None;
        {
            PyObject *old = par_timeout;
            assert(old != NULL);
            par_timeout = tmp_assign_source_6;
            Py_INCREF(par_timeout);
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    goto try_continue_handler_4;
    branch_end_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // try continue handler code:
    try_continue_handler_4:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto try_continue_handler_3;
    // End of try:
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 55;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_95b60b65fab89e05fbc63fa2d93f43c4->m_frame) frame_95b60b65fab89e05fbc63fa2d93f43c4->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // try continue handler code:
    try_continue_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto loop_start_1;
    // End of try:
    // End of try:
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 54;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_95b60b65fab89e05fbc63fa2d93f43c4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_95b60b65fab89e05fbc63fa2d93f43c4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_95b60b65fab89e05fbc63fa2d93f43c4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_95b60b65fab89e05fbc63fa2d93f43c4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_95b60b65fab89e05fbc63fa2d93f43c4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_95b60b65fab89e05fbc63fa2d93f43c4, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_95b60b65fab89e05fbc63fa2d93f43c4,
        type_description_1,
        par_fn,
        par_timeout,
        var_deadline,
        var_e
    );


    // Release cached frame.
    if (frame_95b60b65fab89e05fbc63fa2d93f43c4 == cache_frame_95b60b65fab89e05fbc63fa2d93f43c4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_95b60b65fab89e05fbc63fa2d93f43c4);
    }
    cache_frame_95b60b65fab89e05fbc63fa2d93f43c4 = NULL;

    assertFrameObject(frame_95b60b65fab89e05fbc63fa2d93f43c4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_timeout);
    par_timeout = NULL;

    CHECK_OBJECT(var_deadline);
    Py_DECREF(var_deadline);
    var_deadline = NULL;

    Py_XDECREF(var_e);
    var_e = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_timeout);
    par_timeout = NULL;

    Py_XDECREF(var_deadline);
    var_deadline = NULL;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_fn);
    Py_DECREF(par_fn);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fn);
    Py_DECREF(par_fn);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$wait$$$function_3_select_wait_for_socket(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[0];
    PyObject *par_read = python_pars[1];
    PyObject *par_write = python_pars[2];
    PyObject *par_timeout = python_pars[3];
    PyObject *var_rcheck = NULL;
    PyObject *var_wcheck = NULL;
    PyObject *var_fn = NULL;
    PyObject *var_rready = NULL;
    PyObject *var_wready = NULL;
    PyObject *var_xready = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3d58422e7b370b7fa7cf29dce0095e71;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3d58422e7b370b7fa7cf29dce0095e71 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3d58422e7b370b7fa7cf29dce0095e71)) {
        Py_XDECREF(cache_frame_3d58422e7b370b7fa7cf29dce0095e71);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3d58422e7b370b7fa7cf29dce0095e71 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3d58422e7b370b7fa7cf29dce0095e71 = MAKE_FUNCTION_FRAME(codeobj_3d58422e7b370b7fa7cf29dce0095e71, module_urllib3$util$wait, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3d58422e7b370b7fa7cf29dce0095e71->m_type_description == NULL);
    frame_3d58422e7b370b7fa7cf29dce0095e71 = cache_frame_3d58422e7b370b7fa7cf29dce0095e71;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3d58422e7b370b7fa7cf29dce0095e71);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3d58422e7b370b7fa7cf29dce0095e71) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT(par_read);
        tmp_operand_name_1 = par_read;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_write);
        tmp_operand_name_2 = par_write;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_str_digest_d47e372f7598b75180e9e0f6f1e0d266;
        frame_3d58422e7b370b7fa7cf29dce0095e71->m_frame.f_lineno = 73;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 73;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_rcheck == NULL);
        var_rcheck = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New(0);
        assert(var_wcheck == NULL);
        var_wcheck = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_read);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_read);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(var_rcheck);
        tmp_called_instance_1 = var_rcheck;
        CHECK_OBJECT(par_sock);
        tmp_args_element_name_1 = par_sock;
        frame_3d58422e7b370b7fa7cf29dce0095e71->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_append, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_write);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_write);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(var_wcheck);
        tmp_called_instance_2 = var_wcheck;
        CHECK_OBJECT(par_sock);
        tmp_args_element_name_2 = par_sock;
        frame_3d58422e7b370b7fa7cf29dce0095e71->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = {tmp_args_element_name_2};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_append, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_partial);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_partial);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25175 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_select);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25147 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = tmp_mvar_value_2;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_select);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rcheck);
        tmp_args_element_name_4 = var_rcheck;
        CHECK_OBJECT(var_wcheck);
        tmp_args_element_name_5 = var_wcheck;
        CHECK_OBJECT(var_wcheck);
        tmp_args_element_name_6 = var_wcheck;
        frame_3d58422e7b370b7fa7cf29dce0095e71->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fn == NULL);
        var_fn = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__retry_on_intr);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__retry_on_intr);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25204 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 86;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT(var_fn);
        tmp_args_element_name_7 = var_fn;
        CHECK_OBJECT(par_timeout);
        tmp_args_element_name_8 = par_timeout;
        frame_3d58422e7b370b7fa7cf29dce0095e71->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 86;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 86;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 86;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooo";
                    exception_lineno = 86;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = const_str_digest_09d63a5a61044765cbef1a09e46446f1;
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 86;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        assert(var_rready == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_rready = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert(var_wready == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_wready = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;
        assert(var_xready == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_xready = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_value_name_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        CHECK_OBJECT(var_rready);
        tmp_or_left_value_1 = var_rready;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_wready);
        tmp_or_left_value_2 = var_wready;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(var_xready);
        tmp_or_right_value_2 = var_xready;
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_value_name_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_value_name_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_value_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3d58422e7b370b7fa7cf29dce0095e71);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3d58422e7b370b7fa7cf29dce0095e71);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3d58422e7b370b7fa7cf29dce0095e71);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3d58422e7b370b7fa7cf29dce0095e71, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3d58422e7b370b7fa7cf29dce0095e71->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3d58422e7b370b7fa7cf29dce0095e71, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3d58422e7b370b7fa7cf29dce0095e71,
        type_description_1,
        par_sock,
        par_read,
        par_write,
        par_timeout,
        var_rcheck,
        var_wcheck,
        var_fn,
        var_rready,
        var_wready,
        var_xready
    );


    // Release cached frame.
    if (frame_3d58422e7b370b7fa7cf29dce0095e71 == cache_frame_3d58422e7b370b7fa7cf29dce0095e71) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_3d58422e7b370b7fa7cf29dce0095e71);
    }
    cache_frame_3d58422e7b370b7fa7cf29dce0095e71 = NULL;

    assertFrameObject(frame_3d58422e7b370b7fa7cf29dce0095e71);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_rcheck);
    Py_DECREF(var_rcheck);
    var_rcheck = NULL;

    CHECK_OBJECT(var_wcheck);
    Py_DECREF(var_wcheck);
    var_wcheck = NULL;

    CHECK_OBJECT(var_fn);
    Py_DECREF(var_fn);
    var_fn = NULL;

    CHECK_OBJECT(var_rready);
    Py_DECREF(var_rready);
    var_rready = NULL;

    CHECK_OBJECT(var_wready);
    Py_DECREF(var_wready);
    var_wready = NULL;

    CHECK_OBJECT(var_xready);
    Py_DECREF(var_xready);
    var_xready = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_rcheck);
    var_rcheck = NULL;

    Py_XDECREF(var_wcheck);
    var_wcheck = NULL;

    Py_XDECREF(var_fn);
    var_fn = NULL;

    Py_XDECREF(var_rready);
    var_rready = NULL;

    Py_XDECREF(var_wready);
    var_wready = NULL;

    Py_XDECREF(var_xready);
    var_xready = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    CHECK_OBJECT(par_read);
    Py_DECREF(par_read);
    CHECK_OBJECT(par_write);
    Py_DECREF(par_write);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    CHECK_OBJECT(par_read);
    Py_DECREF(par_read);
    CHECK_OBJECT(par_write);
    Py_DECREF(par_write);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$wait$$$function_4_poll_wait_for_socket(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[0];
    PyObject *par_read = python_pars[1];
    PyObject *par_write = python_pars[2];
    PyObject *par_timeout = python_pars[3];
    PyObject *var_mask = NULL;
    struct Nuitka_CellObject *var_poll_obj = PyCell_EMPTY();
    PyObject *var_do_poll = NULL;
    struct Nuitka_FrameObject *frame_5efe5287b0f40c1b2c469a132677541b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5efe5287b0f40c1b2c469a132677541b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5efe5287b0f40c1b2c469a132677541b)) {
        Py_XDECREF(cache_frame_5efe5287b0f40c1b2c469a132677541b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5efe5287b0f40c1b2c469a132677541b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5efe5287b0f40c1b2c469a132677541b = MAKE_FUNCTION_FRAME(codeobj_5efe5287b0f40c1b2c469a132677541b, module_urllib3$util$wait, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5efe5287b0f40c1b2c469a132677541b->m_type_description == NULL);
    frame_5efe5287b0f40c1b2c469a132677541b = cache_frame_5efe5287b0f40c1b2c469a132677541b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5efe5287b0f40c1b2c469a132677541b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5efe5287b0f40c1b2c469a132677541b) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT(par_read);
        tmp_operand_name_1 = par_read;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_write);
        tmp_operand_name_2 = par_write;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_str_digest_d47e372f7598b75180e9e0f6f1e0d266;
        frame_5efe5287b0f40c1b2c469a132677541b->m_frame.f_lineno = 92;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 92;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooco";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_int_0;
        assert(var_mask == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_mask = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_read);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_read);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_left_name_1 = const_int_0;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_select);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25147 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 95;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = tmp_mvar_value_1;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_POLLIN);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_left_name_1);
        tmp_result = BINARY_OPERATION_BITOR_LONG_OBJECT_INPLACE(&tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_left_name_1;
        {
            PyObject *old = var_mask;
            assert(old != NULL);
            var_mask = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_write);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_write);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT(var_mask);
        tmp_left_name_2 = var_mask;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_select);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25147 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 97;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = tmp_mvar_value_2;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_POLLOUT);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_BITOR_OBJECT_OBJECT_INPLACE(&tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_left_name_2;
        var_mask = tmp_assign_source_3;

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_select);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25147 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 98;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        frame_5efe5287b0f40c1b2c469a132677541b->m_frame.f_lineno = 98;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_poll);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }
        assert(PyCell_GET(var_poll_obj) == NULL);
        PyCell_SET(var_poll_obj, tmp_assign_source_4);

    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(PyCell_GET(var_poll_obj));
        tmp_expression_name_3 = PyCell_GET(var_poll_obj);
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain_register);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_sock);
        tmp_args_element_name_1 = par_sock;
        if (var_mask == NULL) {
            Py_DECREF(tmp_called_name_1);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "mask");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 99;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = var_mask;
        frame_5efe5287b0f40c1b2c469a132677541b->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_FUNCTION_urllib3$util$wait$$$function_4_poll_wait_for_socket$$$function_1_do_poll();

        ((struct Nuitka_FunctionObject *)tmp_assign_source_5)->m_closure[0] = var_poll_obj;
        Py_INCREF(((struct Nuitka_FunctionObject *)tmp_assign_source_5)->m_closure[0]);


        assert(var_do_poll == NULL);
        var_do_poll = tmp_assign_source_5;
    }
    {
        PyObject *tmp_value_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__retry_on_intr);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__retry_on_intr);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25204 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 107;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        CHECK_OBJECT(var_do_poll);
        tmp_args_element_name_3 = var_do_poll;
        CHECK_OBJECT(par_timeout);
        tmp_args_element_name_4 = par_timeout;
        frame_5efe5287b0f40c1b2c469a132677541b->m_frame.f_lineno = 107;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_value_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        if (tmp_value_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_name_1);
        Py_DECREF(tmp_value_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooco";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5efe5287b0f40c1b2c469a132677541b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5efe5287b0f40c1b2c469a132677541b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5efe5287b0f40c1b2c469a132677541b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5efe5287b0f40c1b2c469a132677541b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5efe5287b0f40c1b2c469a132677541b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5efe5287b0f40c1b2c469a132677541b, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5efe5287b0f40c1b2c469a132677541b,
        type_description_1,
        par_sock,
        par_read,
        par_write,
        par_timeout,
        var_mask,
        var_poll_obj,
        var_do_poll
    );


    // Release cached frame.
    if (frame_5efe5287b0f40c1b2c469a132677541b == cache_frame_5efe5287b0f40c1b2c469a132677541b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_5efe5287b0f40c1b2c469a132677541b);
    }
    cache_frame_5efe5287b0f40c1b2c469a132677541b = NULL;

    assertFrameObject(frame_5efe5287b0f40c1b2c469a132677541b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_mask);
    var_mask = NULL;

    CHECK_OBJECT(var_poll_obj);
    Py_DECREF(var_poll_obj);
    var_poll_obj = NULL;

    CHECK_OBJECT(var_do_poll);
    Py_DECREF(var_do_poll);
    var_do_poll = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_mask);
    var_mask = NULL;

    CHECK_OBJECT(var_poll_obj);
    Py_DECREF(var_poll_obj);
    var_poll_obj = NULL;

    Py_XDECREF(var_do_poll);
    var_do_poll = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    CHECK_OBJECT(par_read);
    Py_DECREF(par_read);
    CHECK_OBJECT(par_write);
    Py_DECREF(par_write);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    CHECK_OBJECT(par_read);
    Py_DECREF(par_read);
    CHECK_OBJECT(par_write);
    Py_DECREF(par_write);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$wait$$$function_4_poll_wait_for_socket$$$function_1_do_poll(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_c27f4f4fec9b915bedf42af266ff04ce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c27f4f4fec9b915bedf42af266ff04ce = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c27f4f4fec9b915bedf42af266ff04ce)) {
        Py_XDECREF(cache_frame_c27f4f4fec9b915bedf42af266ff04ce);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c27f4f4fec9b915bedf42af266ff04ce == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c27f4f4fec9b915bedf42af266ff04ce = MAKE_FUNCTION_FRAME(codeobj_c27f4f4fec9b915bedf42af266ff04ce, module_urllib3$util$wait, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c27f4f4fec9b915bedf42af266ff04ce->m_type_description == NULL);
    frame_c27f4f4fec9b915bedf42af266ff04ce = cache_frame_c27f4f4fec9b915bedf42af266ff04ce;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c27f4f4fec9b915bedf42af266ff04ce);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c27f4f4fec9b915bedf42af266ff04ce) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_t);
        tmp_compexpr_left_1 = par_t;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_t);
        tmp_left_name_1 = par_t;
        tmp_right_name_1 = const_int_pos_1000;
        tmp_result = BINARY_OPERATION_MULT_OBJECT_LONG_INPLACE(&tmp_left_name_1, tmp_right_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = tmp_left_name_1;
        par_t = tmp_assign_source_1;

    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        if (PyCell_GET(self->m_closure[0]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "poll_obj");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 105;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_t);
        tmp_args_element_name_1 = par_t;
        frame_c27f4f4fec9b915bedf42af266ff04ce->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_poll, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c27f4f4fec9b915bedf42af266ff04ce);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c27f4f4fec9b915bedf42af266ff04ce);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c27f4f4fec9b915bedf42af266ff04ce);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c27f4f4fec9b915bedf42af266ff04ce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c27f4f4fec9b915bedf42af266ff04ce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c27f4f4fec9b915bedf42af266ff04ce, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c27f4f4fec9b915bedf42af266ff04ce,
        type_description_1,
        par_t,
        self->m_closure[0]
    );


    // Release cached frame.
    if (frame_c27f4f4fec9b915bedf42af266ff04ce == cache_frame_c27f4f4fec9b915bedf42af266ff04ce) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_c27f4f4fec9b915bedf42af266ff04ce);
    }
    cache_frame_c27f4f4fec9b915bedf42af266ff04ce = NULL;

    assertFrameObject(frame_c27f4f4fec9b915bedf42af266ff04ce);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    par_t = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_t);
    par_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$wait$$$function_5_null_wait_for_socket(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    struct Nuitka_FrameObject *frame_eebe593b1628c0f4cbff81fb386029c8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eebe593b1628c0f4cbff81fb386029c8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eebe593b1628c0f4cbff81fb386029c8)) {
        Py_XDECREF(cache_frame_eebe593b1628c0f4cbff81fb386029c8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eebe593b1628c0f4cbff81fb386029c8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eebe593b1628c0f4cbff81fb386029c8 = MAKE_FUNCTION_FRAME(codeobj_eebe593b1628c0f4cbff81fb386029c8, module_urllib3$util$wait, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_eebe593b1628c0f4cbff81fb386029c8->m_type_description == NULL);
    frame_eebe593b1628c0f4cbff81fb386029c8 = cache_frame_eebe593b1628c0f4cbff81fb386029c8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_eebe593b1628c0f4cbff81fb386029c8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_eebe593b1628c0f4cbff81fb386029c8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_NoWayToWaitForSocketError);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NoWayToWaitForSocketError);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 22823 ], 47, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 111;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_eebe593b1628c0f4cbff81fb386029c8->m_frame.f_lineno = 111;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, const_str_digest_d971e987b803540088bf5c2f9c8029d3);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 111;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_eebe593b1628c0f4cbff81fb386029c8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_eebe593b1628c0f4cbff81fb386029c8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_eebe593b1628c0f4cbff81fb386029c8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eebe593b1628c0f4cbff81fb386029c8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eebe593b1628c0f4cbff81fb386029c8, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eebe593b1628c0f4cbff81fb386029c8,
        type_description_1,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if (frame_eebe593b1628c0f4cbff81fb386029c8 == cache_frame_eebe593b1628c0f4cbff81fb386029c8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_eebe593b1628c0f4cbff81fb386029c8);
    }
    cache_frame_eebe593b1628c0f4cbff81fb386029c8 = NULL;

    assertFrameObject(frame_eebe593b1628c0f4cbff81fb386029c8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_urllib3$util$wait$$$function_6__have_working_poll(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_poll_obj = NULL;
    struct Nuitka_FrameObject *frame_3243a1bc627419d9c35e356f1b6b1ddf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_3243a1bc627419d9c35e356f1b6b1ddf = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3243a1bc627419d9c35e356f1b6b1ddf)) {
        Py_XDECREF(cache_frame_3243a1bc627419d9c35e356f1b6b1ddf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3243a1bc627419d9c35e356f1b6b1ddf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3243a1bc627419d9c35e356f1b6b1ddf = MAKE_FUNCTION_FRAME(codeobj_3243a1bc627419d9c35e356f1b6b1ddf, module_urllib3$util$wait, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3243a1bc627419d9c35e356f1b6b1ddf->m_type_description == NULL);
    frame_3243a1bc627419d9c35e356f1b6b1ddf = cache_frame_3243a1bc627419d9c35e356f1b6b1ddf;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3243a1bc627419d9c35e356f1b6b1ddf);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3243a1bc627419d9c35e356f1b6b1ddf) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_select);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25147 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 119;
            type_description_1 = "o";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_3243a1bc627419d9c35e356f1b6b1ddf->m_frame.f_lineno = 119;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_poll);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        assert(var_poll_obj == NULL);
        var_poll_obj = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__retry_on_intr);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__retry_on_intr);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25204 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 120;
            type_description_1 = "o";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT(var_poll_obj);
        tmp_expression_name_1 = var_poll_obj;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_poll);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_args_element_name_2 = const_int_0;
        frame_3243a1bc627419d9c35e356f1b6b1ddf->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_3243a1bc627419d9c35e356f1b6b1ddf, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_3243a1bc627419d9c35e356f1b6b1ddf, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    PyException_SetTraceback(exception_keeper_value_1, (PyObject *)exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = const_tuple_type_AttributeError_type_OSError_tuple;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 118;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_3243a1bc627419d9c35e356f1b6b1ddf->m_frame) frame_3243a1bc627419d9c35e356f1b6b1ddf->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3243a1bc627419d9c35e356f1b6b1ddf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3243a1bc627419d9c35e356f1b6b1ddf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3243a1bc627419d9c35e356f1b6b1ddf);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3243a1bc627419d9c35e356f1b6b1ddf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3243a1bc627419d9c35e356f1b6b1ddf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3243a1bc627419d9c35e356f1b6b1ddf, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3243a1bc627419d9c35e356f1b6b1ddf,
        type_description_1,
        var_poll_obj
    );


    // Release cached frame.
    if (frame_3243a1bc627419d9c35e356f1b6b1ddf == cache_frame_3243a1bc627419d9c35e356f1b6b1ddf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_3243a1bc627419d9c35e356f1b6b1ddf);
    }
    cache_frame_3243a1bc627419d9c35e356f1b6b1ddf = NULL;

    assertFrameObject(frame_3243a1bc627419d9c35e356f1b6b1ddf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_poll_obj);
    var_poll_obj = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_poll_obj);
    var_poll_obj = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$wait$$$function_7_wait_for_socket(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    struct Nuitka_FrameObject *frame_1225835df83aa020b870aca32a534028;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1225835df83aa020b870aca32a534028 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1225835df83aa020b870aca32a534028)) {
        Py_XDECREF(cache_frame_1225835df83aa020b870aca32a534028);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1225835df83aa020b870aca32a534028 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1225835df83aa020b870aca32a534028 = MAKE_FUNCTION_FRAME(codeobj_1225835df83aa020b870aca32a534028, module_urllib3$util$wait, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1225835df83aa020b870aca32a534028->m_type_description == NULL);
    frame_1225835df83aa020b870aca32a534028 = cache_frame_1225835df83aa020b870aca32a534028;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1225835df83aa020b870aca32a534028);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1225835df83aa020b870aca32a534028) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__have_working_poll);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__have_working_poll);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25240 ], 40, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_1225835df83aa020b870aca32a534028->m_frame.f_lineno = 133;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_poll_wait_for_socket);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_poll_wait_for_socket);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25280 ], 42, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_1 = tmp_mvar_value_2;
        UPDATE_STRING_DICT0(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_socket, tmp_assign_source_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_attribute_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_select);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25147 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 135;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = tmp_mvar_value_3;
        tmp_attribute_name_1 = const_str_plain_select;
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_name_1, tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select_wait_for_socket);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_select_wait_for_socket);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25322 ], 44, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 136;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_2 = tmp_mvar_value_4;
        UPDATE_STRING_DICT0(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_socket, tmp_assign_source_2);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_null_wait_for_socket);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_null_wait_for_socket);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25366 ], 42, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 138;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_3 = tmp_mvar_value_5;
        UPDATE_STRING_DICT0(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_socket, tmp_assign_source_3);
    }
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_socket);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_wait_for_socket);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25408 ], 37, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 139;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_6;
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_5_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1225835df83aa020b870aca32a534028);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1225835df83aa020b870aca32a534028);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1225835df83aa020b870aca32a534028);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1225835df83aa020b870aca32a534028, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1225835df83aa020b870aca32a534028->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1225835df83aa020b870aca32a534028, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1225835df83aa020b870aca32a534028,
        type_description_1,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if (frame_1225835df83aa020b870aca32a534028 == cache_frame_1225835df83aa020b870aca32a534028) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_1225835df83aa020b870aca32a534028);
    }
    cache_frame_1225835df83aa020b870aca32a534028 = NULL;

    assertFrameObject(frame_1225835df83aa020b870aca32a534028);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$wait$$$function_8_wait_for_read(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[0];
    PyObject *par_timeout = python_pars[1];
    struct Nuitka_FrameObject *frame_064a30e0e255e4b75df79d5ad00e55aa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_064a30e0e255e4b75df79d5ad00e55aa = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_064a30e0e255e4b75df79d5ad00e55aa)) {
        Py_XDECREF(cache_frame_064a30e0e255e4b75df79d5ad00e55aa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_064a30e0e255e4b75df79d5ad00e55aa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_064a30e0e255e4b75df79d5ad00e55aa = MAKE_FUNCTION_FRAME(codeobj_064a30e0e255e4b75df79d5ad00e55aa, module_urllib3$util$wait, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_064a30e0e255e4b75df79d5ad00e55aa->m_type_description == NULL);
    frame_064a30e0e255e4b75df79d5ad00e55aa = cache_frame_064a30e0e255e4b75df79d5ad00e55aa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_064a30e0e255e4b75df79d5ad00e55aa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_064a30e0e255e4b75df79d5ad00e55aa) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_socket);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_wait_for_socket);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25408 ], 37, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 146;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_sock);
        tmp_tuple_element_1 = par_sock;
        tmp_args_name_1 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = const_str_plain_read;
        tmp_dict_value_1 = Py_True;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_timeout;
        CHECK_OBJECT(par_timeout);
        tmp_dict_value_2 = par_timeout;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_064a30e0e255e4b75df79d5ad00e55aa->m_frame.f_lineno = 146;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_064a30e0e255e4b75df79d5ad00e55aa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_064a30e0e255e4b75df79d5ad00e55aa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_064a30e0e255e4b75df79d5ad00e55aa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_064a30e0e255e4b75df79d5ad00e55aa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_064a30e0e255e4b75df79d5ad00e55aa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_064a30e0e255e4b75df79d5ad00e55aa, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_064a30e0e255e4b75df79d5ad00e55aa,
        type_description_1,
        par_sock,
        par_timeout
    );


    // Release cached frame.
    if (frame_064a30e0e255e4b75df79d5ad00e55aa == cache_frame_064a30e0e255e4b75df79d5ad00e55aa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_064a30e0e255e4b75df79d5ad00e55aa);
    }
    cache_frame_064a30e0e255e4b75df79d5ad00e55aa = NULL;

    assertFrameObject(frame_064a30e0e255e4b75df79d5ad00e55aa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$wait$$$function_9_wait_for_write(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[0];
    PyObject *par_timeout = python_pars[1];
    struct Nuitka_FrameObject *frame_4ad94d5a25bb9cbf4618f00a362dc350;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4ad94d5a25bb9cbf4618f00a362dc350 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4ad94d5a25bb9cbf4618f00a362dc350)) {
        Py_XDECREF(cache_frame_4ad94d5a25bb9cbf4618f00a362dc350);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4ad94d5a25bb9cbf4618f00a362dc350 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4ad94d5a25bb9cbf4618f00a362dc350 = MAKE_FUNCTION_FRAME(codeobj_4ad94d5a25bb9cbf4618f00a362dc350, module_urllib3$util$wait, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4ad94d5a25bb9cbf4618f00a362dc350->m_type_description == NULL);
    frame_4ad94d5a25bb9cbf4618f00a362dc350 = cache_frame_4ad94d5a25bb9cbf4618f00a362dc350;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4ad94d5a25bb9cbf4618f00a362dc350);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4ad94d5a25bb9cbf4618f00a362dc350) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_socket);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_wait_for_socket);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25408 ], 37, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 153;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_sock);
        tmp_tuple_element_1 = par_sock;
        tmp_args_name_1 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = const_str_plain_write;
        tmp_dict_value_1 = Py_True;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_timeout;
        CHECK_OBJECT(par_timeout);
        tmp_dict_value_2 = par_timeout;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_4ad94d5a25bb9cbf4618f00a362dc350->m_frame.f_lineno = 153;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4ad94d5a25bb9cbf4618f00a362dc350);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4ad94d5a25bb9cbf4618f00a362dc350);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4ad94d5a25bb9cbf4618f00a362dc350);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4ad94d5a25bb9cbf4618f00a362dc350, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4ad94d5a25bb9cbf4618f00a362dc350->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4ad94d5a25bb9cbf4618f00a362dc350, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4ad94d5a25bb9cbf4618f00a362dc350,
        type_description_1,
        par_sock,
        par_timeout
    );


    // Release cached frame.
    if (frame_4ad94d5a25bb9cbf4618f00a362dc350 == cache_frame_4ad94d5a25bb9cbf4618f00a362dc350) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_4ad94d5a25bb9cbf4618f00a362dc350);
    }
    cache_frame_4ad94d5a25bb9cbf4618f00a362dc350 = NULL;

    assertFrameObject(frame_4ad94d5a25bb9cbf4618f00a362dc350);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_1__retry_on_intr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_1__retry_on_intr,
        const_str_plain__retry_on_intr,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c6e3f1b5a5a72b31ca4891d571e113c0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$wait,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_2__retry_on_intr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_2__retry_on_intr,
        const_str_plain__retry_on_intr,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_95b60b65fab89e05fbc63fa2d93f43c4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$wait,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_3_select_wait_for_socket(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_3_select_wait_for_socket,
        const_str_plain_select_wait_for_socket,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3d58422e7b370b7fa7cf29dce0095e71,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$wait,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_4_poll_wait_for_socket(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_4_poll_wait_for_socket,
        const_str_plain_poll_wait_for_socket,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5efe5287b0f40c1b2c469a132677541b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$wait,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_4_poll_wait_for_socket$$$function_1_do_poll() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_4_poll_wait_for_socket$$$function_1_do_poll,
        const_str_plain_do_poll,
#if PYTHON_VERSION >= 300
        const_str_digest_d4b4230713465b3db317e462a98dc2e6,
#endif
        codeobj_c27f4f4fec9b915bedf42af266ff04ce,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$wait,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_5_null_wait_for_socket() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_5_null_wait_for_socket,
        const_str_plain_null_wait_for_socket,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_eebe593b1628c0f4cbff81fb386029c8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$wait,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_6__have_working_poll() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_6__have_working_poll,
        const_str_plain__have_working_poll,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3243a1bc627419d9c35e356f1b6b1ddf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$wait,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_7_wait_for_socket() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_7_wait_for_socket,
        const_str_plain_wait_for_socket,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1225835df83aa020b870aca32a534028,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$wait,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_8_wait_for_read(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_8_wait_for_read,
        const_str_plain_wait_for_read,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_064a30e0e255e4b75df79d5ad00e55aa,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$wait,
        const_str_digest_4b56500d01b3fee5d65c9e1ca5d7a24b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_9_wait_for_write(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_9_wait_for_write,
        const_str_plain_wait_for_write,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4ad94d5a25bb9cbf4618f00a362dc350,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$wait,
        const_str_digest_c21f3ba11788d793953e7f6f01c16ac0,
        0
    );

    return (PyObject *)result;
}


extern PyObject *const_str_plain___compiled__;

extern PyObject *const_str_plain___package__;
extern PyObject *const_str_empty;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___loader__;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
extern PyObject *const_str_plain_submodule_search_locations;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill

function_impl_code functable_urllib3$util$wait[] = {
    impl_urllib3$util$wait$$$function_4_poll_wait_for_socket$$$function_1_do_poll,
    impl_urllib3$util$wait$$$function_1__retry_on_intr,
    impl_urllib3$util$wait$$$function_2__retry_on_intr,
    impl_urllib3$util$wait$$$function_3_select_wait_for_socket,
    impl_urllib3$util$wait$$$function_4_poll_wait_for_socket,
    impl_urllib3$util$wait$$$function_5_null_wait_for_socket,
    impl_urllib3$util$wait$$$function_6__have_working_poll,
    impl_urllib3$util$wait$$$function_7_wait_for_socket,
    impl_urllib3$util$wait$$$function_8_wait_for_read,
    impl_urllib3$util$wait$$$function_9_wait_for_write,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_urllib3$util$wait;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_urllib3$util$wait) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    // TODO: More stuff needed for Python3, best to re-order arguments of MAKE_CODEOBJECT.
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_urllib3$util$wait[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_urllib3$util$wait,
        doc,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_urllib3$util$wait(PyObject *module) {
    module_urllib3$util$wait = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_urllib3$util$wait;
    } else {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // May have to activate constants blob.
#if defined(_NUITKA_CONSTANTS_FROM_RESOURCE)
    loadConstantsResource();
#endif

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("urllib3.util.wait: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("urllib3.util.wait: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("urllib3.util.wait: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initurllib3$util$wait\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_urllib3$util$wait = MODULE_DICT(module_urllib3$util$wait);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        PyObject *function_tables = PyObject_GetAttrString((PyObject *)builtin_module, "compiled_function_tables");
        if (function_tables == NULL)
        {
            DROP_ERROR_OCCURRED();
            function_tables = PyDict_New();
        }
        PyObject_SetAttrString((PyObject *)builtin_module, "compiled_function_tables", function_tables);
        PyObject *funcs = PyTuple_New(2);
        PyTuple_SET_ITEM(funcs, 0, PyCFunction_New(&_method_def_reduce_compiled_function, NULL));
        PyTuple_SET_ITEM(funcs, 1, PyCFunction_New(&_method_def_create_compiled_function, NULL));
        PyDict_SetItemString(function_tables, module_full_name, funcs);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_urllib3$util$wait,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$wait,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$wait,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$wait,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$wait,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_urllib3$util$wait);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___name__),
            (PyObject *)&Nuitka_Loader_Type
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );
        Py_DECREF(module_spec_class);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// For packages set the submodule search locations as well, even if to empty
// list, so investigating code will consider it a package.
#if 0
        SET_ATTRIBUTE(spec_value, const_str_plain_submodule_search_locations, PyList_New(0));
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_6601d9dd13fb0b779cb7351ed0831d0c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_urllib3$util$wait_14 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_53b15aa7e0ea17f618d5cd4425d9a1e0;
        UPDATE_STRING_DICT0(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_6601d9dd13fb0b779cb7351ed0831d0c = MAKE_MODULE_FRAME(codeobj_6601d9dd13fb0b779cb7351ed0831d0c, module_urllib3$util$wait);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_6601d9dd13fb0b779cb7351ed0831d0c);
    assert(Py_REFCNT(frame_6601d9dd13fb0b779cb7351ed0831d0c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_53b15aa7e0ea17f618d5cd4425d9a1e0;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___spec__);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
        }

        CHECK_OBJECT(tmp_mvar_value_1);
        tmp_assattr_target_1 = tmp_mvar_value_1;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_origin, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_mvar_value_2;
        tmp_assattr_name_2 = Py_True;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___spec__);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
        }

        CHECK_OBJECT(tmp_mvar_value_2);
        tmp_assattr_target_2 = tmp_mvar_value_2;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_has_location, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_errno;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$util$wait;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_6601d9dd13fb0b779cb7351ed0831d0c->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_errno, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_functools;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3$util$wait;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_partial_tuple;
        tmp_level_name_2 = const_int_0;
        frame_6601d9dd13fb0b779cb7351ed0831d0c->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
           tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_urllib3$util$wait,
                const_str_plain_partial,
                const_int_0
            );
        } else {
           tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_partial);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_partial, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_select;
        tmp_globals_name_3 = (PyObject *)moduledict_urllib3$util$wait;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_6601d9dd13fb0b779cb7351ed0831d0c->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_sys;
        tmp_globals_name_4 = (PyObject *)moduledict_urllib3$util$wait;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_6601d9dd13fb0b779cb7351ed0831d0c->m_frame.f_lineno = 4;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_time;
        tmp_globals_name_5 = (PyObject *)moduledict_urllib3$util$wait;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_monotonic_tuple;
        tmp_level_name_5 = const_int_0;
        frame_6601d9dd13fb0b779cb7351ed0831d0c->m_frame.f_lineno = 7;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        assert(!(tmp_import_name_from_2 == NULL));
        if (PyModule_Check(tmp_import_name_from_2)) {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_urllib3$util$wait,
                const_str_plain_monotonic,
                const_int_0
            );
        } else {
           tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_monotonic);
        }

        Py_DECREF(tmp_import_name_from_2);
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_monotonic, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = LIST_COPY(const_list_0f3719a68b319eac70aa05da51950d41_list);
        UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_Exception_tuple;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_10 = impl___internal__$$$function_4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_1, tmp_key_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = const_str_plain_metaclass;
        tmp_metaclass_name_1 = DICT_GET_ITEM(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = const_int_0;
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_12 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_12;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        tmp_key_name_3 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_3, tmp_key_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 14;

        goto try_except_handler_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_2 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr(tmp_expression_name_2, const_str_plain___prepare__);
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_3 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain___prepare__);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = const_str_plain_NoWayToWaitForSocketError;
        tmp_args_name_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_6601d9dd13fb0b779cb7351ed0831d0c->m_frame.f_lineno = 14;
        tmp_assign_source_13 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_4 = tmp_class_creation_1__prepared;
        tmp_res = PyObject_HasAttr(tmp_expression_name_4, const_str_plain___getitem__);
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_type_arg_2;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = const_str_plain___name__;
        tmp_getattr_default_1 = const_str_angle_metaclass;
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_type_arg_2 = tmp_class_creation_1__prepared;
        tmp_expression_name_5 = BUILTIN_TYPE1(tmp_type_arg_2);
        assert(!(tmp_expression_name_5 == NULL));
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, const_str_plain___name__);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_right_name_1);

            exception_lineno = 14;

            goto try_except_handler_1;
        }
        PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_2);
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 14;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_14;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_urllib3$util$wait_14 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9fee63ab089d8ffa84a45aa3db97c377;
        tmp_res = PyObject_SetItem(locals_urllib3$util$wait_14, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_NoWayToWaitForSocketError;
        tmp_res = PyObject_SetItem(locals_urllib3$util$wait_14, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            tmp_compexpr_right_1 = const_tuple_type_Exception_tuple;
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        tmp_dictset_value = const_tuple_type_Exception_tuple;
        tmp_res = PyObject_SetItem(locals_urllib3$util$wait_14, const_str_plain___orig_bases__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = const_str_plain_NoWayToWaitForSocketError;
            tmp_args_name_2 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_urllib3$util$wait_14;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_6601d9dd13fb0b779cb7351ed0831d0c->m_frame.f_lineno = 14;
            tmp_assign_source_16 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_16;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_15 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_urllib3$util$wait_14);
        locals_urllib3$util$wait_14 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_urllib3$util$wait_14);
        locals_urllib3$util$wait_14 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;

        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 14;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_NoWayToWaitForSocketError, tmp_assign_source_15);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_sys);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 5751 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = tmp_mvar_value_3;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, const_str_plain_version_info);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_tuple_int_pos_3_int_pos_5_tuple;
        tmp_condition_result_7 = RICH_COMPARE_GE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_urllib3$util$wait$$$function_1__retry_on_intr();



        UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__retry_on_intr, tmp_assign_source_17);
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_urllib3$util$wait$$$function_2__retry_on_intr();



        UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__retry_on_intr, tmp_assign_source_18);
    }
    branch_end_5:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6601d9dd13fb0b779cb7351ed0831d0c);
#endif
    popFrameStack();

    assertFrameObject(frame_6601d9dd13fb0b779cb7351ed0831d0c);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6601d9dd13fb0b779cb7351ed0831d0c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6601d9dd13fb0b779cb7351ed0831d0c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6601d9dd13fb0b779cb7351ed0831d0c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6601d9dd13fb0b779cb7351ed0831d0c, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_false_false_none_tuple;
        Py_INCREF(tmp_defaults_1);
        tmp_assign_source_19 = MAKE_FUNCTION_urllib3$util$wait$$$function_3_select_wait_for_socket(tmp_defaults_1);



        UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_select_wait_for_socket, tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_false_false_none_tuple;
        Py_INCREF(tmp_defaults_2);
        tmp_assign_source_20 = MAKE_FUNCTION_urllib3$util$wait$$$function_4_poll_wait_for_socket(tmp_defaults_2);



        UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_poll_wait_for_socket, tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_FUNCTION_urllib3$util$wait$$$function_5_null_wait_for_socket();



        UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_null_wait_for_socket, tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_urllib3$util$wait$$$function_6__have_working_poll();



        UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__have_working_poll, tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_FUNCTION_urllib3$util$wait$$$function_7_wait_for_socket();



        UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_socket, tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_none_tuple;
        Py_INCREF(tmp_defaults_3);
        tmp_assign_source_24 = MAKE_FUNCTION_urllib3$util$wait$$$function_8_wait_for_read(tmp_defaults_3);



        UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_read, tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_none_tuple;
        Py_INCREF(tmp_defaults_4);
        tmp_assign_source_25 = MAKE_FUNCTION_urllib3$util$wait$$$function_9_wait_for_write(tmp_defaults_4);



        UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_write, tmp_assign_source_25);
    }

    return module_urllib3$util$wait;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
