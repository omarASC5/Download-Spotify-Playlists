/* Generated code for Python module 'urllib3'
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

/* The "_module_urllib3" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3;
PyDictObject *moduledict_urllib3;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_setLevel;
extern PyObject *const_str_plain_SubjectAltNameWarning;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain_proxy_from_url;
static PyObject *const_tuple_8867a986f001c831bce500d134c983ea_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple;
extern PyObject *const_dict_9d1be102e274ebd5d21e13e40f132db0;
static PyObject *const_tuple_str_plain_get_host_tuple;
static PyObject *const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple;
static PyObject *const_str_plain_Formatter;
extern PyObject *const_str_plain_default;
static PyObject *const_str_plain_MIT;
extern PyObject *const_str_plain_filepost;
extern PyObject *const_str_plain_NullHandler;
static PyObject *const_str_plain_add_stderr_logger;
extern PyObject *const_str_plain_ignore;
extern PyObject *const_str_plain___license__;
extern PyObject *const_str_plain_category;
static PyObject *const_str_digest_b0632bca22c128e5156e5d8ae22de6c6;
extern PyObject *const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d;
extern PyObject *const_str_digest_eec49d283d20cbc4ed650539d1524272;
extern PyObject *const_str_digest_522bfd5e75e11cb6ec433673b0570303;
extern PyObject *const_str_plain_SecurityWarning;
extern PyObject *const_str_plain_get_host;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_str_plain_exceptions_tuple;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_tuple_str_plain_Retry_tuple;
extern PyObject *const_str_plain_addHandler;
extern PyObject *const_str_plain_SNIMissingWarning;
extern PyObject *const_str_digest_e68800bfc0da117494aca4ca9d48e152;
extern PyObject *const_str_plain_simplefilter;
extern PyObject *const_str_plain_connection_from_url;
static PyObject *const_str_plain_StreamHandler;
extern PyObject *const_str_plain_poolmanager;
extern PyObject *const_str_plain_ProxyManager;
static PyObject *const_str_digest_23f90efde940ba2256d04ce7ac5cea70;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_81b98f1a8ecf97715642eb1142269402;
static PyObject *const_str_plain_setFormatter;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_HTTPWarning;
static PyObject *const_str_digest_9488daec0a222fa96a0806e8bb41d02a;
extern PyObject *const_tuple_str_plain_encode_multipart_formdata_tuple;
static PyObject *const_str_plain_disable_warnings;
extern PyObject *const_str_plain_exceptions;
static PyObject *const_str_plain_always;
static PyObject *const_str_digest_7dc1703e3069add65e77b6192eab87b6;
static PyObject *const_str_digest_7bdf8e47bc8c12ac53c20d22eac56e2c;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_urllib3;
extern PyObject *const_str_plain_HTTPSConnectionPool;
extern PyObject *const_str_plain___version__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_HTTPResponse;
extern PyObject *const_str_plain_response;
extern PyObject *const_str_plain_connectionpool;
extern PyObject *const_str_plain_PoolManager;
extern PyObject *const_str_plain___author__;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_Timeout;
static PyObject *const_list_str_digest_7dc1703e3069add65e77b6192eab87b6_list;
static PyObject *const_str_digest_ea831918d2ed965690de4946fe258c62;
extern PyObject *const_tuple_str_plain_make_headers_tuple;
static PyObject *const_tuple_a8b5457a455379132108111c71bf3ec5_tuple;
static PyObject *const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple;
static PyObject *const_str_digest_c8c857b5729e0b378286ccbd91c95cae;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_tuple_str_plain_NullHandler_tuple;
static PyObject *const_tuple_str_plain_urllib3_tuple;
extern PyObject *const_tuple_str_plain_category_tuple;
extern PyObject *const_str_plain_debug;
static PyObject *const_str_digest_6d27c09f2576ba9e7aaeed9738d5cae8;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_logger;
static PyObject *const_tuple_str_digest_9488daec0a222fa96a0806e8bb41d02a_tuple;
extern PyObject *const_tuple_str_plain_HTTPResponse_tuple;
extern PyObject *const_str_plain_level;
static PyObject *const_str_digest_c2a5aae7bb235405ed8e87579bccaea2;
extern PyObject *const_tuple_str_plain_Timeout_tuple;
extern PyObject *const_str_plain_HTTPConnectionPool;
extern PyObject *const_str_plain_encode_multipart_formdata;
extern PyObject *const_str_plain_DEBUG;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_make_headers;
extern PyObject *const_str_plain_Retry;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_InsecurePlatformWarning;
extern PyObject *const_str_plain_handler;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_setLevel = UNSTREAM_STRING_ASCII(&constant_bin[ 634991 ], 8, 1);
    const_tuple_8867a986f001c831bce500d134c983ea_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_8867a986f001c831bce500d134c983ea_tuple, 0, const_str_plain_PoolManager); Py_INCREF(const_str_plain_PoolManager);
    PyTuple_SET_ITEM(const_tuple_8867a986f001c831bce500d134c983ea_tuple, 1, const_str_plain_ProxyManager); Py_INCREF(const_str_plain_ProxyManager);
    PyTuple_SET_ITEM(const_tuple_8867a986f001c831bce500d134c983ea_tuple, 2, const_str_plain_proxy_from_url); Py_INCREF(const_str_plain_proxy_from_url);
    const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple, 0, const_str_plain_HTTPConnectionPool); Py_INCREF(const_str_plain_HTTPConnectionPool);
    PyTuple_SET_ITEM(const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple, 1, const_str_plain_HTTPSConnectionPool); Py_INCREF(const_str_plain_HTTPSConnectionPool);
    PyTuple_SET_ITEM(const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple, 2, const_str_plain_connection_from_url); Py_INCREF(const_str_plain_connection_from_url);
    const_tuple_str_plain_get_host_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_get_host_tuple, 0, const_str_plain_get_host); Py_INCREF(const_str_plain_get_host);
    const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple = PyTuple_New(14);
    PyTuple_SET_ITEM(const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 0, const_str_plain_HTTPConnectionPool); Py_INCREF(const_str_plain_HTTPConnectionPool);
    PyTuple_SET_ITEM(const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 1, const_str_plain_HTTPSConnectionPool); Py_INCREF(const_str_plain_HTTPSConnectionPool);
    PyTuple_SET_ITEM(const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 2, const_str_plain_PoolManager); Py_INCREF(const_str_plain_PoolManager);
    PyTuple_SET_ITEM(const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 3, const_str_plain_ProxyManager); Py_INCREF(const_str_plain_ProxyManager);
    PyTuple_SET_ITEM(const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 4, const_str_plain_HTTPResponse); Py_INCREF(const_str_plain_HTTPResponse);
    PyTuple_SET_ITEM(const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 5, const_str_plain_Retry); Py_INCREF(const_str_plain_Retry);
    PyTuple_SET_ITEM(const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 6, const_str_plain_Timeout); Py_INCREF(const_str_plain_Timeout);
    const_str_plain_add_stderr_logger = UNSTREAM_STRING_ASCII(&constant_bin[ 634999 ], 17, 1);
    PyTuple_SET_ITEM(const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 7, const_str_plain_add_stderr_logger); Py_INCREF(const_str_plain_add_stderr_logger);
    PyTuple_SET_ITEM(const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 8, const_str_plain_connection_from_url); Py_INCREF(const_str_plain_connection_from_url);
    const_str_plain_disable_warnings = UNSTREAM_STRING_ASCII(&constant_bin[ 635016 ], 16, 1);
    PyTuple_SET_ITEM(const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 9, const_str_plain_disable_warnings); Py_INCREF(const_str_plain_disable_warnings);
    PyTuple_SET_ITEM(const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 10, const_str_plain_encode_multipart_formdata); Py_INCREF(const_str_plain_encode_multipart_formdata);
    PyTuple_SET_ITEM(const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 11, const_str_plain_get_host); Py_INCREF(const_str_plain_get_host);
    PyTuple_SET_ITEM(const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 12, const_str_plain_make_headers); Py_INCREF(const_str_plain_make_headers);
    PyTuple_SET_ITEM(const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 13, const_str_plain_proxy_from_url); Py_INCREF(const_str_plain_proxy_from_url);
    const_str_plain_Formatter = UNSTREAM_STRING_ASCII(&constant_bin[ 635032 ], 9, 1);
    const_str_plain_MIT = UNSTREAM_STRING_ASCII(&constant_bin[ 13067 ], 3, 1);
    const_str_digest_b0632bca22c128e5156e5d8ae22de6c6 = UNSTREAM_STRING_ASCII(&constant_bin[ 635041 ], 134, 0);
    const_tuple_str_plain_exceptions_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_exceptions_tuple, 0, const_str_plain_exceptions); Py_INCREF(const_str_plain_exceptions);
    const_str_plain_StreamHandler = UNSTREAM_STRING_ASCII(&constant_bin[ 635074 ], 13, 1);
    const_str_digest_23f90efde940ba2256d04ce7ac5cea70 = UNSTREAM_STRING_ASCII(&constant_bin[ 635175 ], 44, 0);
    const_str_digest_81b98f1a8ecf97715642eb1142269402 = UNSTREAM_STRING_ASCII(&constant_bin[ 635219 ], 40, 0);
    const_str_plain_setFormatter = UNSTREAM_STRING_ASCII(&constant_bin[ 635259 ], 12, 1);
    const_str_digest_9488daec0a222fa96a0806e8bb41d02a = UNSTREAM_STRING_ASCII(&constant_bin[ 635271 ], 37, 0);
    const_str_plain_always = UNSTREAM_STRING_ASCII(&constant_bin[ 374211 ], 6, 1);
    const_str_digest_7dc1703e3069add65e77b6192eab87b6 = UNSTREAM_STRING_ASCII(&constant_bin[ 635308 ], 82, 0);
    const_str_digest_7bdf8e47bc8c12ac53c20d22eac56e2c = UNSTREAM_STRING_ASCII(&constant_bin[ 635390 ], 94, 0);
    const_list_str_digest_7dc1703e3069add65e77b6192eab87b6_list = PyList_New(1);
    PyList_SET_ITEM(const_list_str_digest_7dc1703e3069add65e77b6192eab87b6_list, 0, const_str_digest_7dc1703e3069add65e77b6192eab87b6); Py_INCREF(const_str_digest_7dc1703e3069add65e77b6192eab87b6);
    const_str_digest_ea831918d2ed965690de4946fe258c62 = UNSTREAM_STRING_ASCII(&constant_bin[ 635484 ], 6, 0);
    const_tuple_a8b5457a455379132108111c71bf3ec5_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_a8b5457a455379132108111c71bf3ec5_tuple, 0, const_str_digest_23f90efde940ba2256d04ce7ac5cea70); Py_INCREF(const_str_digest_23f90efde940ba2256d04ce7ac5cea70);
    PyTuple_SET_ITEM(const_tuple_a8b5457a455379132108111c71bf3ec5_tuple, 1, const_str_plain_urllib3); Py_INCREF(const_str_plain_urllib3);
    const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple, 0, const_str_plain_level); Py_INCREF(const_str_plain_level);
    PyTuple_SET_ITEM(const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple, 1, const_str_plain_logger); Py_INCREF(const_str_plain_logger);
    PyTuple_SET_ITEM(const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple, 2, const_str_plain_handler); Py_INCREF(const_str_plain_handler);
    const_str_digest_c8c857b5729e0b378286ccbd91c95cae = UNSTREAM_STRING_ASCII(&constant_bin[ 635490 ], 56, 0);
    const_tuple_str_plain_urllib3_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_urllib3_tuple, 0, const_str_plain_urllib3); Py_INCREF(const_str_plain_urllib3);
    const_str_digest_6d27c09f2576ba9e7aaeed9738d5cae8 = UNSTREAM_STRING_ASCII(&constant_bin[ 635546 ], 60, 0);
    const_tuple_str_digest_9488daec0a222fa96a0806e8bb41d02a_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_9488daec0a222fa96a0806e8bb41d02a_tuple, 0, const_str_digest_9488daec0a222fa96a0806e8bb41d02a); Py_INCREF(const_str_digest_9488daec0a222fa96a0806e8bb41d02a);
    const_str_digest_c2a5aae7bb235405ed8e87579bccaea2 = UNSTREAM_STRING_ASCII(&constant_bin[ 635606 ], 16, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_40144350525ec996f780399a38f6d710;
static PyCodeObject *codeobj_eaf33f6ba0402a0db2a70cb8c2cb77a0;
static PyCodeObject *codeobj_a0174774aab8f54230b9a3a0efae4d38;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_7bdf8e47bc8c12ac53c20d22eac56e2c;
    codeobj_40144350525ec996f780399a38f6d710 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_c2a5aae7bb235405ed8e87579bccaea2, const_tuple_empty, 0, 0, 0);
    codeobj_eaf33f6ba0402a0db2a70cb8c2cb77a0 = MAKE_CODEOBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_add_stderr_logger, const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple, 1, 0, 0);
    codeobj_a0174774aab8f54230b9a3a0efae4d38 = MAKE_CODEOBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_disable_warnings, const_tuple_str_plain_category_tuple, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_urllib3$$$function_1_add_stderr_logger(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$$$function_2_disable_warnings(PyObject *defaults);


// The module function definitions.
static PyObject *impl_urllib3$$$function_1_add_stderr_logger(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_level = python_pars[0];
    PyObject *var_logger = NULL;
    PyObject *var_handler = NULL;
    struct Nuitka_FrameObject *frame_eaf33f6ba0402a0db2a70cb8c2cb77a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_eaf33f6ba0402a0db2a70cb8c2cb77a0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_eaf33f6ba0402a0db2a70cb8c2cb77a0)) {
        Py_XDECREF(cache_frame_eaf33f6ba0402a0db2a70cb8c2cb77a0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eaf33f6ba0402a0db2a70cb8c2cb77a0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eaf33f6ba0402a0db2a70cb8c2cb77a0 = MAKE_FUNCTION_FRAME(codeobj_eaf33f6ba0402a0db2a70cb8c2cb77a0, module_urllib3, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_eaf33f6ba0402a0db2a70cb8c2cb77a0->m_type_description == NULL);
    frame_eaf33f6ba0402a0db2a70cb8c2cb77a0 = cache_frame_eaf33f6ba0402a0db2a70cb8c2cb77a0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_eaf33f6ba0402a0db2a70cb8c2cb77a0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_eaf33f6ba0402a0db2a70cb8c2cb77a0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_logging);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_logging);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2085 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_eaf33f6ba0402a0db2a70cb8c2cb77a0->m_frame.f_lineno = 56;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM(const_tuple_str_plain_urllib3_tuple, 0));

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_logger == NULL);
        var_logger = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_logging);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_logging);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2085 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        frame_eaf33f6ba0402a0db2a70cb8c2cb77a0->m_frame.f_lineno = 57;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_StreamHandler);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_handler == NULL);
        var_handler = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT(var_handler);
        tmp_expression_name_1 = var_handler;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_setFormatter);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_logging);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_logging);
        }

        if (tmp_mvar_value_3 == NULL) {
            Py_DECREF(tmp_called_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2085 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 58;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        frame_eaf33f6ba0402a0db2a70cb8c2cb77a0->m_frame.f_lineno = 58;
        tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_Formatter, &PyTuple_GET_ITEM(const_tuple_str_digest_9488daec0a222fa96a0806e8bb41d02a_tuple, 0));

        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 58;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_eaf33f6ba0402a0db2a70cb8c2cb77a0->m_frame.f_lineno = 58;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(var_logger);
        tmp_called_instance_4 = var_logger;
        CHECK_OBJECT(var_handler);
        tmp_args_element_name_2 = var_handler;
        frame_eaf33f6ba0402a0db2a70cb8c2cb77a0->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = {tmp_args_element_name_2};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_addHandler, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(var_logger);
        tmp_called_instance_5 = var_logger;
        CHECK_OBJECT(par_level);
        tmp_args_element_name_3 = par_level;
        frame_eaf33f6ba0402a0db2a70cb8c2cb77a0->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = {tmp_args_element_name_3};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_setLevel, call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(var_logger);
        tmp_called_instance_6 = var_logger;
        frame_eaf33f6ba0402a0db2a70cb8c2cb77a0->m_frame.f_lineno = 61;
        tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_6, const_str_plain_debug, &PyTuple_GET_ITEM(const_tuple_a8b5457a455379132108111c71bf3ec5_tuple, 0));

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_eaf33f6ba0402a0db2a70cb8c2cb77a0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_eaf33f6ba0402a0db2a70cb8c2cb77a0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_eaf33f6ba0402a0db2a70cb8c2cb77a0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eaf33f6ba0402a0db2a70cb8c2cb77a0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eaf33f6ba0402a0db2a70cb8c2cb77a0, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eaf33f6ba0402a0db2a70cb8c2cb77a0,
        type_description_1,
        par_level,
        var_logger,
        var_handler
    );


    // Release cached frame.
    if (frame_eaf33f6ba0402a0db2a70cb8c2cb77a0 == cache_frame_eaf33f6ba0402a0db2a70cb8c2cb77a0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_eaf33f6ba0402a0db2a70cb8c2cb77a0);
    }
    cache_frame_eaf33f6ba0402a0db2a70cb8c2cb77a0 = NULL;

    assertFrameObject(frame_eaf33f6ba0402a0db2a70cb8c2cb77a0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_handler);
    tmp_return_value = var_handler;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_logger);
    Py_DECREF(var_logger);
    var_logger = NULL;

    CHECK_OBJECT(var_handler);
    Py_DECREF(var_handler);
    var_handler = NULL;

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

    Py_XDECREF(var_logger);
    var_logger = NULL;

    Py_XDECREF(var_handler);
    var_handler = NULL;

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
    CHECK_OBJECT(par_level);
    Py_DECREF(par_level);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_level);
    Py_DECREF(par_level);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$$$function_2_disable_warnings(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_category = python_pars[0];
    struct Nuitka_FrameObject *frame_a0174774aab8f54230b9a3a0efae4d38;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a0174774aab8f54230b9a3a0efae4d38 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a0174774aab8f54230b9a3a0efae4d38)) {
        Py_XDECREF(cache_frame_a0174774aab8f54230b9a3a0efae4d38);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a0174774aab8f54230b9a3a0efae4d38 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a0174774aab8f54230b9a3a0efae4d38 = MAKE_FUNCTION_FRAME(codeobj_a0174774aab8f54230b9a3a0efae4d38, module_urllib3, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a0174774aab8f54230b9a3a0efae4d38->m_type_description == NULL);
    frame_a0174774aab8f54230b9a3a0efae4d38 = cache_frame_a0174774aab8f54230b9a3a0efae4d38;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a0174774aab8f54230b9a3a0efae4d38);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a0174774aab8f54230b9a3a0efae4d38) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_warnings);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 8128 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = const_str_plain_ignore;
        CHECK_OBJECT(par_category);
        tmp_args_element_name_2 = par_category;
        frame_a0174774aab8f54230b9a3a0efae4d38->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_simplefilter, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a0174774aab8f54230b9a3a0efae4d38);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a0174774aab8f54230b9a3a0efae4d38);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a0174774aab8f54230b9a3a0efae4d38, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a0174774aab8f54230b9a3a0efae4d38->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a0174774aab8f54230b9a3a0efae4d38, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a0174774aab8f54230b9a3a0efae4d38,
        type_description_1,
        par_category
    );


    // Release cached frame.
    if (frame_a0174774aab8f54230b9a3a0efae4d38 == cache_frame_a0174774aab8f54230b9a3a0efae4d38) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_a0174774aab8f54230b9a3a0efae4d38);
    }
    cache_frame_a0174774aab8f54230b9a3a0efae4d38 = NULL;

    assertFrameObject(frame_a0174774aab8f54230b9a3a0efae4d38);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_urllib3$$$function_1_add_stderr_logger(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$$$function_1_add_stderr_logger,
        const_str_plain_add_stderr_logger,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_eaf33f6ba0402a0db2a70cb8c2cb77a0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3,
        const_str_digest_b0632bca22c128e5156e5d8ae22de6c6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$$$function_2_disable_warnings(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$$$function_2_disable_warnings,
        const_str_plain_disable_warnings,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a0174774aab8f54230b9a3a0efae4d38,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3,
        const_str_digest_6d27c09f2576ba9e7aaeed9738d5cae8,
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

function_impl_code functable_urllib3[] = {
    impl_urllib3$$$function_1_add_stderr_logger,
    impl_urllib3$$$function_2_disable_warnings,
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

    function_impl_code *current = functable_urllib3;
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

    if (offset > sizeof(functable_urllib3) || offset < 0) {
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
        functable_urllib3[offset],
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
        module_urllib3,
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
PyObject *modulecode_urllib3(PyObject *module) {
    module_urllib3 = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_urllib3;
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
    PRINT_STRING("urllib3: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("urllib3: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("urllib3: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initurllib3\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_urllib3 = MODULE_DICT(module_urllib3);

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
        moduledict_urllib3,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_urllib3,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_urllib3,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_urllib3);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___name__),
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
#if 1
        SET_ATTRIBUTE(spec_value, const_str_plain_submodule_search_locations, PyList_New(0));
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_40144350525ec996f780399a38f6d710;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_c8c857b5729e0b378286ccbd91c95cae;
        UPDATE_STRING_DICT0(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_7bdf8e47bc8c12ac53c20d22eac56e2c;
        UPDATE_STRING_DICT0(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY(const_list_str_digest_7dc1703e3069add65e77b6192eab87b6_list);
        UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
    }
    // Frame without reuse.
    frame_40144350525ec996f780399a38f6d710 = MAKE_MODULE_FRAME(codeobj_40144350525ec996f780399a38f6d710, module_urllib3);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_40144350525ec996f780399a38f6d710);
    assert(Py_REFCNT(frame_40144350525ec996f780399a38f6d710) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_7bdf8e47bc8c12ac53c20d22eac56e2c;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___spec__);

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
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        frame_40144350525ec996f780399a38f6d710->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
           tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_urllib3,
                const_str_plain_absolute_import,
                const_int_0
            );
        } else {
           tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_absolute_import);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_warnings;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_40144350525ec996f780399a38f6d710->m_frame.f_lineno = 5;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_connectionpool;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_40144350525ec996f780399a38f6d710->m_frame.f_lineno = 7;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_urllib3,
                const_str_plain_HTTPConnectionPool,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_HTTPConnectionPool);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_urllib3,
                const_str_plain_HTTPSConnectionPool,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_HTTPSConnectionPool);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_HTTPSConnectionPool, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_urllib3,
                const_str_plain_connection_from_url,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_connection_from_url);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_connection_from_url, tmp_assign_source_10);
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_empty;
        tmp_globals_name_3 = (PyObject *)moduledict_urllib3;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_exceptions_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_40144350525ec996f780399a38f6d710->m_frame.f_lineno = 9;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_urllib3,
                const_str_plain_exceptions,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_exceptions);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_exceptions, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_filepost;
        tmp_globals_name_4 = (PyObject *)moduledict_urllib3;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_encode_multipart_formdata_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_40144350525ec996f780399a38f6d710->m_frame.f_lineno = 10;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_urllib3,
                const_str_plain_encode_multipart_formdata,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_encode_multipart_formdata);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_encode_multipart_formdata, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_poolmanager;
        tmp_globals_name_5 = (PyObject *)moduledict_urllib3;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_8867a986f001c831bce500d134c983ea_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_40144350525ec996f780399a38f6d710->m_frame.f_lineno = 11;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_urllib3,
                const_str_plain_PoolManager,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_PoolManager);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_PoolManager, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_urllib3,
                const_str_plain_ProxyManager,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_ProxyManager);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_ProxyManager, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
           tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_urllib3,
                const_str_plain_proxy_from_url,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_proxy_from_url);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_proxy_from_url, tmp_assign_source_16);
    }
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

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_response;
        tmp_globals_name_6 = (PyObject *)moduledict_urllib3;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_HTTPResponse_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_40144350525ec996f780399a38f6d710->m_frame.f_lineno = 12;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_urllib3,
                const_str_plain_HTTPResponse,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain_HTTPResponse);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_HTTPResponse, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_digest_eec49d283d20cbc4ed650539d1524272;
        tmp_globals_name_7 = (PyObject *)moduledict_urllib3;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_make_headers_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_40144350525ec996f780399a38f6d710->m_frame.f_lineno = 13;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
           tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_urllib3,
                const_str_plain_make_headers,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_11, const_str_plain_make_headers);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_make_headers, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d;
        tmp_globals_name_8 = (PyObject *)moduledict_urllib3;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_get_host_tuple;
        tmp_level_name_8 = const_int_pos_1;
        frame_40144350525ec996f780399a38f6d710->m_frame.f_lineno = 14;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
           tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_urllib3,
                const_str_plain_get_host,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_12, const_str_plain_get_host);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_get_host, tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_digest_522bfd5e75e11cb6ec433673b0570303;
        tmp_globals_name_9 = (PyObject *)moduledict_urllib3;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_Timeout_tuple;
        tmp_level_name_9 = const_int_pos_1;
        frame_40144350525ec996f780399a38f6d710->m_frame.f_lineno = 15;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
           tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_urllib3,
                const_str_plain_Timeout,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_13, const_str_plain_Timeout);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_Timeout, tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_digest_e68800bfc0da117494aca4ca9d48e152;
        tmp_globals_name_10 = (PyObject *)moduledict_urllib3;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = const_tuple_str_plain_Retry_tuple;
        tmp_level_name_10 = const_int_pos_1;
        frame_40144350525ec996f780399a38f6d710->m_frame.f_lineno = 16;
        tmp_import_name_from_14 = IMPORT_MODULE5(tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10);
        if (tmp_import_name_from_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
           tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_urllib3,
                const_str_plain_Retry,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_14, const_str_plain_Retry);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_Retry, tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_plain_logging;
        tmp_globals_name_11 = (PyObject *)moduledict_urllib3;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = Py_None;
        tmp_level_name_11 = const_int_0;
        frame_40144350525ec996f780399a38f6d710->m_frame.f_lineno = 20;
        tmp_assign_source_22 = IMPORT_MODULE5(tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_name_12;
        PyObject *tmp_locals_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = const_str_plain_logging;
        tmp_globals_name_12 = (PyObject *)moduledict_urllib3;
        tmp_locals_name_12 = Py_None;
        tmp_fromlist_name_12 = const_tuple_str_plain_NullHandler_tuple;
        tmp_level_name_12 = const_int_0;
        frame_40144350525ec996f780399a38f6d710->m_frame.f_lineno = 21;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
           tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_urllib3,
                const_str_plain_NullHandler,
                const_int_0
            );
        } else {
           tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_15, const_str_plain_NullHandler);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_NullHandler, tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = const_str_digest_81b98f1a8ecf97715642eb1142269402;
        UPDATE_STRING_DICT0(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = const_str_plain_MIT;
        UPDATE_STRING_DICT0(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___license__, tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = const_str_digest_ea831918d2ed965690de4946fe258c62;
        UPDATE_STRING_DICT0(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple;
        UPDATE_STRING_DICT0(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_27);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_logging);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_logging);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2085 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        frame_40144350525ec996f780399a38f6d710->m_frame.f_lineno = 44;
        tmp_expression_name_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM(const_tuple_str_plain_urllib3_tuple, 0));

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_addHandler);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_NullHandler);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NullHandler);
        }

        if (tmp_mvar_value_4 == NULL) {
            Py_DECREF(tmp_called_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 8343 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        frame_40144350525ec996f780399a38f6d710->m_frame.f_lineno = 44;
        tmp_args_element_name_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        frame_40144350525ec996f780399a38f6d710->m_frame.f_lineno = 44;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_logging);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_logging);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2085 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = tmp_mvar_value_5;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_DEBUG);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_1);
        tmp_assign_source_28 = MAKE_FUNCTION_urllib3$$$function_1_add_stderr_logger(tmp_defaults_1);



        UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_add_stderr_logger, tmp_assign_source_28);
    }
    tmp_res = PyDict_DelItem((PyObject *)moduledict_urllib3, const_str_plain_NullHandler);
    tmp_result = tmp_res != -1;
    if (tmp_result == false) CLEAR_ERROR_OCCURRED();

    if (tmp_result == false) {

        exception_type = PyExc_NameError;
        Py_INCREF(exception_type);
        exception_value = UNSTREAM_STRING(&constant_bin[ 8343 ], 33, 0);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 66;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_warnings);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 8128 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 73;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = tmp_mvar_value_6;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain_simplefilter);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = const_str_plain_always;
        tmp_args_name_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_2);
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_exceptions);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_exceptions);
        }

        if (tmp_mvar_value_7 == NULL) {
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17683 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 73;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = tmp_mvar_value_7;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain_SecurityWarning);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_name_1);

            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_2);
        tmp_kw_name_1 = PyDict_Copy(const_dict_9d1be102e274ebd5d21e13e40f132db0);
        frame_40144350525ec996f780399a38f6d710->m_frame.f_lineno = 73;
        tmp_call_result_2 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_warnings);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings);
        }

        if (tmp_mvar_value_8 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 8128 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 75;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = tmp_mvar_value_8;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, const_str_plain_simplefilter);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = const_str_plain_default;
        tmp_args_name_2 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_3);
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_exceptions);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_exceptions);
        }

        if (tmp_mvar_value_9 == NULL) {
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_name_2);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17683 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 75;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = tmp_mvar_value_9;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, const_str_plain_SubjectAltNameWarning);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_name_2);

            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_3);
        tmp_kw_name_2 = PyDict_Copy(const_dict_9d1be102e274ebd5d21e13e40f132db0);
        frame_40144350525ec996f780399a38f6d710->m_frame.f_lineno = 75;
        tmp_call_result_3 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_kw_name_3;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_warnings);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings);
        }

        if (tmp_mvar_value_10 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 8128 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = tmp_mvar_value_10;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, const_str_plain_simplefilter);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = const_str_plain_default;
        tmp_args_name_3 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_4);
        PyTuple_SET_ITEM(tmp_args_name_3, 0, tmp_tuple_element_4);
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_exceptions);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_exceptions);
        }

        if (tmp_mvar_value_11 == NULL) {
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_args_name_3);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17683 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = tmp_mvar_value_11;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, const_str_plain_InsecurePlatformWarning);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_args_name_3);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_args_name_3, 1, tmp_tuple_element_4);
        tmp_kw_name_3 = PyDict_Copy(const_dict_9d1be102e274ebd5d21e13e40f132db0);
        frame_40144350525ec996f780399a38f6d710->m_frame.f_lineno = 77;
        tmp_call_result_4 = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_3, tmp_kw_name_3);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_name_3);
        Py_DECREF(tmp_kw_name_3);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_kw_name_4;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_warnings);

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings);
        }

        if (tmp_mvar_value_12 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 8128 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_9 = tmp_mvar_value_12;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, const_str_plain_simplefilter);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = const_str_plain_default;
        tmp_args_name_4 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_5);
        PyTuple_SET_ITEM(tmp_args_name_4, 0, tmp_tuple_element_5);
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_exceptions);

        if (unlikely(tmp_mvar_value_13 == NULL)) {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_exceptions);
        }

        if (tmp_mvar_value_13 == NULL) {
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_name_4);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17683 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_10 = tmp_mvar_value_13;
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, const_str_plain_SNIMissingWarning);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_name_4);

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_args_name_4, 1, tmp_tuple_element_5);
        tmp_kw_name_4 = PyDict_Copy(const_dict_9d1be102e274ebd5d21e13e40f132db0);
        frame_40144350525ec996f780399a38f6d710->m_frame.f_lineno = 79;
        tmp_call_result_5 = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_4, tmp_kw_name_4);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_name_4);
        Py_DECREF(tmp_kw_name_4);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_mvar_value_14;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_exceptions);

        if (unlikely(tmp_mvar_value_14 == NULL)) {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_exceptions);
        }

        if (tmp_mvar_value_14 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17683 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 82;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_11 = tmp_mvar_value_14;
        tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, const_str_plain_HTTPWarning);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_defaults_2, 0, tmp_tuple_element_6);
        tmp_assign_source_29 = MAKE_FUNCTION_urllib3$$$function_2_disable_warnings(tmp_defaults_2);



        UPDATE_STRING_DICT1(moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_disable_warnings, tmp_assign_source_29);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_40144350525ec996f780399a38f6d710);
#endif
    popFrameStack();

    assertFrameObject(frame_40144350525ec996f780399a38f6d710);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_40144350525ec996f780399a38f6d710);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_40144350525ec996f780399a38f6d710, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_40144350525ec996f780399a38f6d710->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_40144350525ec996f780399a38f6d710, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_urllib3;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
