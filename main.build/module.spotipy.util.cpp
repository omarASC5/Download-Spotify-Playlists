/* Generated code for Python module 'spotipy.util'
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

/* The "_module_spotipy$util" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_spotipy$util;
PyDictObject *moduledict_spotipy$util;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_client_username;
extern PyObject *const_str_plain_spotipy;
extern PyObject *const_str_plain_split;
static PyObject *const_str_plain_SPOTIPY_CLIENT_SECRET;
static PyObject *const_tuple_str_plain_netloc_str_plain_host_str_plain_port_tuple;
extern PyObject *const_str_plain_token;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_digest_4ef5cbf075fc1b7fb3980eeb524c801b;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_getLogger;
static PyObject *const_str_digest_2e0bac1623a49f94fc9802ab7a78cf2f;
extern PyObject *const_str_plain_client_secret;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_host;
extern PyObject *const_int_pos_550;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_port;
static PyObject *const_tuple_str_digest_a90991fb88a80ce483efbe11cd8c5d60_tuple;
extern PyObject *const_str_plain_cache_path;
static PyObject *const_tuple_str_plain_SPOTIPY_CLIENT_SECRET_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_107daea3b808e6264b25e5d758e450de;
static PyObject *const_tuple_725818acc66cffa126a8c07d9c1b118c_tuple;
static PyObject *const_str_plain_sp_oauth;
extern PyObject *const_str_plain_get_cached_token;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_SpotifyException;
static PyObject *const_str_digest_39b7084ed140d79d15607511df4eebc4;
static PyObject *const_tuple_str_digest_39b7084ed140d79d15607511df4eebc4_tuple;
extern PyObject *const_str_plain_show_dialog;
static PyObject *const_str_plain_prompt_for_user_token;
extern PyObject *const_str_plain_code;
extern PyObject *const_str_digest_fcf040720b88d60da4ce975010c44a3a;
extern PyObject *const_str_plain_getenv;
extern PyObject *const_str_plain_CLIENT_CREDS_ENV_VARS;
extern PyObject *const_int_neg_1;
extern PyObject *const_dict_79c040486cc871a74ef4d9ecc0ccc16f;
extern PyObject *const_str_plain_SpotifyOAuth;
static PyObject *const_str_digest_cf7b9759ee5dc0ed51229cdc09785f24;
extern PyObject *const_str_plain_oauth_manager;
extern PyObject *const_str_plain_access_token;
extern PyObject *const_str_chr_58;
extern PyObject *const_tuple_str_chr_58_int_pos_1_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_netloc;
extern PyObject *const_str_digest_a90991fb88a80ce483efbe11cd8c5d60;
extern PyObject *const_str_plain_as_dict;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_scope;
extern PyObject *const_str_plain_get_auth_response;
static PyObject *const_str_digest_49d078fd308cd254835afa56f04f3def;
extern PyObject *const_str_plain_client_id;
static PyObject *const_str_plain_SPOTIPY_REDIRECT_URI;
extern PyObject *const_str_plain_token_info;
static PyObject *const_str_plain_SPOTIPY_CLIENT_ID;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_warning;
static PyObject *const_tuple_str_plain_SPOTIPY_REDIRECT_URI_tuple;
static PyObject *const_tuple_29dde2ed0951ca254554097989aee556_tuple;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_username;
static PyObject *const_list_1c238fffc96251bfde8520c7803bc62a_list;
static PyObject *const_tuple_none_none_none_none_none_none_false_tuple;
static PyObject *const_str_plain_SPOTIPY_CLIENT_USERNAME;
extern PyObject *const_str_plain_logging;
static PyObject *const_str_digest_d9a6ed12652a8654931ae3fba3d3ffe1;
extern PyObject *const_str_plain_redirect_uri;
static PyObject *const_str_plain_LOGGER;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_tuple_str_plain_SPOTIPY_CLIENT_ID_tuple;
static PyObject *const_dict_bc2a958a4f29f48d96343f9390eb1877;
extern PyObject *const_str_plain_get_access_token;
extern PyObject *const_str_plain_get_host_port;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_SPOTIPY_CLIENT_SECRET = UNSTREAM_STRING_ASCII(&constant_bin[ 632658 ], 21, 1);
    const_tuple_str_plain_netloc_str_plain_host_str_plain_port_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_netloc_str_plain_host_str_plain_port_tuple, 0, const_str_plain_netloc); Py_INCREF(const_str_plain_netloc);
    PyTuple_SET_ITEM(const_tuple_str_plain_netloc_str_plain_host_str_plain_port_tuple, 1, const_str_plain_host); Py_INCREF(const_str_plain_host);
    PyTuple_SET_ITEM(const_tuple_str_plain_netloc_str_plain_host_str_plain_port_tuple, 2, const_str_plain_port); Py_INCREF(const_str_plain_port);
    const_str_digest_2e0bac1623a49f94fc9802ab7a78cf2f = UNSTREAM_STRING_ASCII(&constant_bin[ 633757 ], 18, 0);
    const_tuple_str_digest_a90991fb88a80ce483efbe11cd8c5d60_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_a90991fb88a80ce483efbe11cd8c5d60_tuple, 0, const_str_digest_a90991fb88a80ce483efbe11cd8c5d60); Py_INCREF(const_str_digest_a90991fb88a80ce483efbe11cd8c5d60);
    const_tuple_str_plain_SPOTIPY_CLIENT_SECRET_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_SPOTIPY_CLIENT_SECRET_tuple, 0, const_str_plain_SPOTIPY_CLIENT_SECRET); Py_INCREF(const_str_plain_SPOTIPY_CLIENT_SECRET);
    const_str_digest_107daea3b808e6264b25e5d758e450de = UNSTREAM_STRING_ASCII(&constant_bin[ 633775 ], 90, 0);
    const_tuple_725818acc66cffa126a8c07d9c1b118c_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_725818acc66cffa126a8c07d9c1b118c_tuple, 0, const_int_pos_550); Py_INCREF(const_int_pos_550);
    PyTuple_SET_ITEM(const_tuple_725818acc66cffa126a8c07d9c1b118c_tuple, 1, const_int_neg_1); Py_INCREF(const_int_neg_1);
    PyTuple_SET_ITEM(const_tuple_725818acc66cffa126a8c07d9c1b118c_tuple, 2, const_str_digest_2e0bac1623a49f94fc9802ab7a78cf2f); Py_INCREF(const_str_digest_2e0bac1623a49f94fc9802ab7a78cf2f);
    const_str_plain_sp_oauth = UNSTREAM_STRING_ASCII(&constant_bin[ 633865 ], 8, 1);
    const_str_digest_39b7084ed140d79d15607511df4eebc4 = UNSTREAM_STRING_ASCII(&constant_bin[ 633873 ], 465, 0);
    const_tuple_str_digest_39b7084ed140d79d15607511df4eebc4_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_39b7084ed140d79d15607511df4eebc4_tuple, 0, const_str_digest_39b7084ed140d79d15607511df4eebc4); Py_INCREF(const_str_digest_39b7084ed140d79d15607511df4eebc4);
    const_str_plain_prompt_for_user_token = UNSTREAM_STRING_ASCII(&constant_bin[ 634338 ], 21, 1);
    const_str_digest_cf7b9759ee5dc0ed51229cdc09785f24 = UNSTREAM_STRING_ASCII(&constant_bin[ 634359 ], 525, 0);
    const_str_digest_49d078fd308cd254835afa56f04f3def = UNSTREAM_STRING_ASCII(&constant_bin[ 634884 ], 63, 0);
    const_str_plain_SPOTIPY_REDIRECT_URI = UNSTREAM_STRING_ASCII(&constant_bin[ 634174 ], 20, 1);
    const_str_plain_SPOTIPY_CLIENT_ID = UNSTREAM_STRING_ASCII(&constant_bin[ 632636 ], 17, 1);
    const_tuple_str_plain_SPOTIPY_REDIRECT_URI_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_SPOTIPY_REDIRECT_URI_tuple, 0, const_str_plain_SPOTIPY_REDIRECT_URI); Py_INCREF(const_str_plain_SPOTIPY_REDIRECT_URI);
    const_tuple_29dde2ed0951ca254554097989aee556_tuple = PyTuple_New(12);
    PyTuple_SET_ITEM(const_tuple_29dde2ed0951ca254554097989aee556_tuple, 0, const_str_plain_username); Py_INCREF(const_str_plain_username);
    PyTuple_SET_ITEM(const_tuple_29dde2ed0951ca254554097989aee556_tuple, 1, const_str_plain_scope); Py_INCREF(const_str_plain_scope);
    PyTuple_SET_ITEM(const_tuple_29dde2ed0951ca254554097989aee556_tuple, 2, const_str_plain_client_id); Py_INCREF(const_str_plain_client_id);
    PyTuple_SET_ITEM(const_tuple_29dde2ed0951ca254554097989aee556_tuple, 3, const_str_plain_client_secret); Py_INCREF(const_str_plain_client_secret);
    PyTuple_SET_ITEM(const_tuple_29dde2ed0951ca254554097989aee556_tuple, 4, const_str_plain_redirect_uri); Py_INCREF(const_str_plain_redirect_uri);
    PyTuple_SET_ITEM(const_tuple_29dde2ed0951ca254554097989aee556_tuple, 5, const_str_plain_cache_path); Py_INCREF(const_str_plain_cache_path);
    PyTuple_SET_ITEM(const_tuple_29dde2ed0951ca254554097989aee556_tuple, 6, const_str_plain_oauth_manager); Py_INCREF(const_str_plain_oauth_manager);
    PyTuple_SET_ITEM(const_tuple_29dde2ed0951ca254554097989aee556_tuple, 7, const_str_plain_show_dialog); Py_INCREF(const_str_plain_show_dialog);
    PyTuple_SET_ITEM(const_tuple_29dde2ed0951ca254554097989aee556_tuple, 8, const_str_plain_sp_oauth); Py_INCREF(const_str_plain_sp_oauth);
    PyTuple_SET_ITEM(const_tuple_29dde2ed0951ca254554097989aee556_tuple, 9, const_str_plain_token_info); Py_INCREF(const_str_plain_token_info);
    PyTuple_SET_ITEM(const_tuple_29dde2ed0951ca254554097989aee556_tuple, 10, const_str_plain_code); Py_INCREF(const_str_plain_code);
    PyTuple_SET_ITEM(const_tuple_29dde2ed0951ca254554097989aee556_tuple, 11, const_str_plain_token); Py_INCREF(const_str_plain_token);
    const_list_1c238fffc96251bfde8520c7803bc62a_list = PyList_New(2);
    PyList_SET_ITEM(const_list_1c238fffc96251bfde8520c7803bc62a_list, 0, const_str_plain_CLIENT_CREDS_ENV_VARS); Py_INCREF(const_str_plain_CLIENT_CREDS_ENV_VARS);
    PyList_SET_ITEM(const_list_1c238fffc96251bfde8520c7803bc62a_list, 1, const_str_plain_prompt_for_user_token); Py_INCREF(const_str_plain_prompt_for_user_token);
    const_tuple_none_none_none_none_none_none_false_tuple = PyTuple_New(7);
    PyTuple_SET_ITEM(const_tuple_none_none_none_none_none_none_false_tuple, 0, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_none_none_none_none_none_none_false_tuple, 1, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_none_none_none_none_none_none_false_tuple, 2, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_none_none_none_none_none_none_false_tuple, 3, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_none_none_none_none_none_none_false_tuple, 4, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_none_none_none_none_none_none_false_tuple, 5, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_none_none_none_none_none_none_false_tuple, 6, Py_False); Py_INCREF(Py_False);
    const_str_plain_SPOTIPY_CLIENT_USERNAME = UNSTREAM_STRING_ASCII(&constant_bin[ 634947 ], 23, 1);
    const_str_digest_d9a6ed12652a8654931ae3fba3d3ffe1 = UNSTREAM_STRING_ASCII(&constant_bin[ 634970 ], 21, 0);
    const_str_plain_LOGGER = UNSTREAM_STRING_ASCII(&constant_bin[ 17661 ], 6, 1);
    const_tuple_str_plain_SPOTIPY_CLIENT_ID_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_SPOTIPY_CLIENT_ID_tuple, 0, const_str_plain_SPOTIPY_CLIENT_ID); Py_INCREF(const_str_plain_SPOTIPY_CLIENT_ID);
    const_dict_bc2a958a4f29f48d96343f9390eb1877 = _PyDict_NewPresized( 4 );
    PyDict_SetItem(const_dict_bc2a958a4f29f48d96343f9390eb1877, const_str_plain_client_id, const_str_plain_SPOTIPY_CLIENT_ID);
    PyDict_SetItem(const_dict_bc2a958a4f29f48d96343f9390eb1877, const_str_plain_client_secret, const_str_plain_SPOTIPY_CLIENT_SECRET);
    PyDict_SetItem(const_dict_bc2a958a4f29f48d96343f9390eb1877, const_str_plain_client_username, const_str_plain_SPOTIPY_CLIENT_USERNAME);
    PyDict_SetItem(const_dict_bc2a958a4f29f48d96343f9390eb1877, const_str_plain_redirect_uri, const_str_plain_SPOTIPY_REDIRECT_URI);
    assert(PyDict_Size(const_dict_bc2a958a4f29f48d96343f9390eb1877) == 4);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_spotipy$util(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_87b4f2a34f745ac3900f5eb7293d1115;
static PyCodeObject *codeobj_df915e45f25da7c0ceb17b1925885c37;
static PyCodeObject *codeobj_9ef5fdb905f7946c29073b382b17e650;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_107daea3b808e6264b25e5d758e450de;
    codeobj_87b4f2a34f745ac3900f5eb7293d1115 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_d9a6ed12652a8654931ae3fba3d3ffe1, const_tuple_empty, 0, 0, 0);
    codeobj_df915e45f25da7c0ceb17b1925885c37 = MAKE_CODEOBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_get_host_port, const_tuple_str_plain_netloc_str_plain_host_str_plain_port_tuple, 1, 0, 0);
    codeobj_9ef5fdb905f7946c29073b382b17e650 = MAKE_CODEOBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_prompt_for_user_token, const_tuple_29dde2ed0951ca254554097989aee556_tuple, 8, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_spotipy$util$$$function_1_prompt_for_user_token(PyObject *defaults);


static PyObject *MAKE_FUNCTION_spotipy$util$$$function_2_get_host_port();


// The module function definitions.
static PyObject *impl_spotipy$util$$$function_1_prompt_for_user_token(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_username = python_pars[0];
    PyObject *par_scope = python_pars[1];
    PyObject *par_client_id = python_pars[2];
    PyObject *par_client_secret = python_pars[3];
    PyObject *par_redirect_uri = python_pars[4];
    PyObject *par_cache_path = python_pars[5];
    PyObject *par_oauth_manager = python_pars[6];
    PyObject *par_show_dialog = python_pars[7];
    PyObject *var_sp_oauth = NULL;
    PyObject *var_token_info = NULL;
    PyObject *var_code = NULL;
    PyObject *var_token = NULL;
    struct Nuitka_FrameObject *frame_9ef5fdb905f7946c29073b382b17e650;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9ef5fdb905f7946c29073b382b17e650 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9ef5fdb905f7946c29073b382b17e650)) {
        Py_XDECREF(cache_frame_9ef5fdb905f7946c29073b382b17e650);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9ef5fdb905f7946c29073b382b17e650 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9ef5fdb905f7946c29073b382b17e650 = MAKE_FUNCTION_FRAME(codeobj_9ef5fdb905f7946c29073b382b17e650, module_spotipy$util, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9ef5fdb905f7946c29073b382b17e650->m_type_description == NULL);
    frame_9ef5fdb905f7946c29073b382b17e650 = cache_frame_9ef5fdb905f7946c29073b382b17e650;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9ef5fdb905f7946c29073b382b17e650);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9ef5fdb905f7946c29073b382b17e650) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(par_oauth_manager);
        tmp_operand_name_1 = par_oauth_manager;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT(par_client_id);
        tmp_operand_name_2 = par_client_id;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain_os);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_os);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 695 ], 24, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_9ef5fdb905f7946c29073b382b17e650->m_frame.f_lineno = 49;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_getenv, &PyTuple_GET_ITEM(const_tuple_str_plain_SPOTIPY_CLIENT_ID_tuple, 0));

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_client_id;
            assert(old != NULL);
            par_client_id = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_3;
        CHECK_OBJECT(par_client_secret);
        tmp_operand_name_3 = par_client_secret;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain_os);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_os);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 695 ], 24, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 52;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        frame_9ef5fdb905f7946c29073b382b17e650->m_frame.f_lineno = 52;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_getenv, &PyTuple_GET_ITEM(const_tuple_str_plain_SPOTIPY_CLIENT_SECRET_tuple, 0));

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_client_secret;
            assert(old != NULL);
            par_client_secret = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_4;
        CHECK_OBJECT(par_redirect_uri);
        tmp_operand_name_4 = par_redirect_uri;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain_os);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_os);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 695 ], 24, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 55;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        frame_9ef5fdb905f7946c29073b382b17e650->m_frame.f_lineno = 55;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_getenv, &PyTuple_GET_ITEM(const_tuple_str_plain_SPOTIPY_REDIRECT_URI_tuple, 0));

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_redirect_uri;
            assert(old != NULL);
            par_redirect_uri = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_5;
        CHECK_OBJECT(par_client_id);
        tmp_operand_name_5 = par_client_id;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain_LOGGER);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LOGGER);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17655 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 58;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_4;
        frame_9ef5fdb905f7946c29073b382b17e650->m_frame.f_lineno = 58;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_warning, &PyTuple_GET_ITEM(const_tuple_str_digest_39b7084ed140d79d15607511df4eebc4_tuple, 0));

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain_spotipy);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_spotipy);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 515 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_5;
        frame_9ef5fdb905f7946c29073b382b17e650->m_frame.f_lineno = 71;
        tmp_raise_type_1 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_5, const_str_plain_SpotifyException, &PyTuple_GET_ITEM(const_tuple_725818acc66cffa126a8c07d9c1b118c_tuple, 0));

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 71;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_4;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_cache_path);
        tmp_or_left_value_1 = par_cache_path;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_left_name_1 = const_str_digest_4ef5cbf075fc1b7fb3980eeb524c801b;
        CHECK_OBJECT(par_username);
        tmp_right_name_1 = par_username;
        tmp_or_right_value_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_assign_source_4 = tmp_or_left_value_1;
        or_end_1:;
        {
            PyObject *old = par_cache_path;
            assert(old != NULL);
            par_cache_path = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        CHECK_OBJECT(par_oauth_manager);
        tmp_or_left_value_2 = par_oauth_manager;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain_spotipy);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_spotipy);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 515 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 75;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = tmp_mvar_value_6;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_SpotifyOAuth);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_client_id == NULL) {
            Py_DECREF(tmp_called_name_1);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "client_id");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = par_client_id;
        tmp_args_name_1 = PyTuple_New(3);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        if (par_client_secret == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "client_secret");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 77;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = par_client_secret;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        if (par_redirect_uri == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "redirect_uri");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 78;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = par_redirect_uri;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 2, tmp_tuple_element_1);
        tmp_dict_key_1 = const_str_plain_scope;
        CHECK_OBJECT(par_scope);
        tmp_dict_value_1 = par_scope;
        tmp_kw_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_cache_path;
        CHECK_OBJECT(par_cache_path);
        tmp_dict_value_2 = par_cache_path;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_show_dialog;
        CHECK_OBJECT(par_show_dialog);
        tmp_dict_value_3 = par_show_dialog;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        frame_9ef5fdb905f7946c29073b382b17e650->m_frame.f_lineno = 75;
        tmp_or_right_value_2 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_or_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        Py_INCREF(tmp_or_left_value_2);
        tmp_assign_source_5 = tmp_or_left_value_2;
        or_end_2:;
        assert(var_sp_oauth == NULL);
        var_sp_oauth = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(var_sp_oauth);
        tmp_called_instance_6 = var_sp_oauth;
        frame_9ef5fdb905f7946c29073b382b17e650->m_frame.f_lineno = 88;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, const_str_plain_get_cached_token);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_token_info == NULL);
        var_token_info = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_6;
        CHECK_OBJECT(var_token_info);
        tmp_operand_name_6 = var_token_info;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_7;
        CHECK_OBJECT(var_sp_oauth);
        tmp_called_instance_7 = var_sp_oauth;
        frame_9ef5fdb905f7946c29073b382b17e650->m_frame.f_lineno = 91;
        tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, const_str_plain_get_auth_response);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_code == NULL);
        var_code = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        CHECK_OBJECT(var_sp_oauth);
        tmp_expression_name_2 = var_sp_oauth;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_get_access_token);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_code);
        tmp_tuple_element_2 = var_code;
        tmp_args_name_2 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_2);
        tmp_kw_name_2 = PyDict_Copy(const_dict_79c040486cc871a74ef4d9ecc0ccc16f);
        frame_9ef5fdb905f7946c29073b382b17e650->m_frame.f_lineno = 92;
        tmp_assign_source_8 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_token == NULL);
        var_token = tmp_assign_source_8;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(var_token_info);
        tmp_expression_name_3 = var_token_info;
        tmp_subscript_name_1 = const_str_plain_access_token;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_6:;
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_1;
        if (var_token == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "token");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 97;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(var_token);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    if (var_token == NULL) {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF(exception_type);
        exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "token");
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 98;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_token;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_7;
    branch_no_7:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_7:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9ef5fdb905f7946c29073b382b17e650);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9ef5fdb905f7946c29073b382b17e650);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9ef5fdb905f7946c29073b382b17e650);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9ef5fdb905f7946c29073b382b17e650, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ef5fdb905f7946c29073b382b17e650->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ef5fdb905f7946c29073b382b17e650, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9ef5fdb905f7946c29073b382b17e650,
        type_description_1,
        par_username,
        par_scope,
        par_client_id,
        par_client_secret,
        par_redirect_uri,
        par_cache_path,
        par_oauth_manager,
        par_show_dialog,
        var_sp_oauth,
        var_token_info,
        var_code,
        var_token
    );


    // Release cached frame.
    if (frame_9ef5fdb905f7946c29073b382b17e650 == cache_frame_9ef5fdb905f7946c29073b382b17e650) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_9ef5fdb905f7946c29073b382b17e650);
    }
    cache_frame_9ef5fdb905f7946c29073b382b17e650 = NULL;

    assertFrameObject(frame_9ef5fdb905f7946c29073b382b17e650);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_client_id);
    par_client_id = NULL;

    Py_XDECREF(par_client_secret);
    par_client_secret = NULL;

    Py_XDECREF(par_redirect_uri);
    par_redirect_uri = NULL;

    CHECK_OBJECT(par_cache_path);
    Py_DECREF(par_cache_path);
    par_cache_path = NULL;

    CHECK_OBJECT(var_sp_oauth);
    Py_DECREF(var_sp_oauth);
    var_sp_oauth = NULL;

    CHECK_OBJECT(var_token_info);
    Py_DECREF(var_token_info);
    var_token_info = NULL;

    Py_XDECREF(var_code);
    var_code = NULL;

    Py_XDECREF(var_token);
    var_token = NULL;

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

    Py_XDECREF(par_client_id);
    par_client_id = NULL;

    Py_XDECREF(par_client_secret);
    par_client_secret = NULL;

    Py_XDECREF(par_redirect_uri);
    par_redirect_uri = NULL;

    Py_XDECREF(par_cache_path);
    par_cache_path = NULL;

    Py_XDECREF(var_sp_oauth);
    var_sp_oauth = NULL;

    Py_XDECREF(var_token_info);
    var_token_info = NULL;

    Py_XDECREF(var_code);
    var_code = NULL;

    Py_XDECREF(var_token);
    var_token = NULL;

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
    CHECK_OBJECT(par_username);
    Py_DECREF(par_username);
    CHECK_OBJECT(par_scope);
    Py_DECREF(par_scope);
    CHECK_OBJECT(par_oauth_manager);
    Py_DECREF(par_oauth_manager);
    CHECK_OBJECT(par_show_dialog);
    Py_DECREF(par_show_dialog);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_username);
    Py_DECREF(par_username);
    CHECK_OBJECT(par_scope);
    Py_DECREF(par_scope);
    CHECK_OBJECT(par_oauth_manager);
    Py_DECREF(par_oauth_manager);
    CHECK_OBJECT(par_show_dialog);
    Py_DECREF(par_show_dialog);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_spotipy$util$$$function_2_get_host_port(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_netloc = python_pars[0];
    PyObject *var_host = NULL;
    PyObject *var_port = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_df915e45f25da7c0ceb17b1925885c37;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_df915e45f25da7c0ceb17b1925885c37 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_df915e45f25da7c0ceb17b1925885c37)) {
        Py_XDECREF(cache_frame_df915e45f25da7c0ceb17b1925885c37);

#if _DEBUG_REFCOUNTS
        if (cache_frame_df915e45f25da7c0ceb17b1925885c37 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_df915e45f25da7c0ceb17b1925885c37 = MAKE_FUNCTION_FRAME(codeobj_df915e45f25da7c0ceb17b1925885c37, module_spotipy$util, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_df915e45f25da7c0ceb17b1925885c37->m_type_description == NULL);
    frame_df915e45f25da7c0ceb17b1925885c37 = cache_frame_df915e45f25da7c0ceb17b1925885c37;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_df915e45f25da7c0ceb17b1925885c37);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_df915e45f25da7c0ceb17b1925885c37) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = const_str_chr_58;
        CHECK_OBJECT(par_netloc);
        tmp_compexpr_right_1 = par_netloc;
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_netloc);
        tmp_called_instance_1 = par_netloc;
        frame_df915e45f25da7c0ceb17b1925885c37->m_frame.f_lineno = 105;
        tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_split, &PyTuple_GET_ITEM(const_tuple_str_chr_58_int_pos_1_tuple, 0));

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooo";
            exception_lineno = 105;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooo";
            exception_lineno = 105;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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

                    type_description_1 = "ooo";
                    exception_lineno = 105;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = const_str_digest_fcf040720b88d60da4ce975010c44a3a;
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooo";
            exception_lineno = 105;
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
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_host == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_host = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_port == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_port = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(var_port);
        tmp_int_arg_1 = var_port;
        tmp_assign_source_6 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_port;
            assert(old != NULL);
            var_port = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(par_netloc);
        tmp_assign_source_7 = par_netloc;
        assert(var_host == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_host = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_None;
        assert(var_port == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_port = tmp_assign_source_8;
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_df915e45f25da7c0ceb17b1925885c37);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_df915e45f25da7c0ceb17b1925885c37);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_df915e45f25da7c0ceb17b1925885c37, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_df915e45f25da7c0ceb17b1925885c37->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_df915e45f25da7c0ceb17b1925885c37, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_df915e45f25da7c0ceb17b1925885c37,
        type_description_1,
        par_netloc,
        var_host,
        var_port
    );


    // Release cached frame.
    if (frame_df915e45f25da7c0ceb17b1925885c37 == cache_frame_df915e45f25da7c0ceb17b1925885c37) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_df915e45f25da7c0ceb17b1925885c37);
    }
    cache_frame_df915e45f25da7c0ceb17b1925885c37 = NULL;

    assertFrameObject(frame_df915e45f25da7c0ceb17b1925885c37);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_host);
        tmp_tuple_element_1 = var_host;
        tmp_return_value = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_port);
        tmp_tuple_element_1 = var_port;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_host);
    Py_DECREF(var_host);
    var_host = NULL;

    CHECK_OBJECT(var_port);
    Py_DECREF(var_port);
    var_port = NULL;

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

    Py_XDECREF(var_host);
    var_host = NULL;

    Py_XDECREF(var_port);
    var_port = NULL;

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
    CHECK_OBJECT(par_netloc);
    Py_DECREF(par_netloc);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_netloc);
    Py_DECREF(par_netloc);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_spotipy$util$$$function_1_prompt_for_user_token(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_spotipy$util$$$function_1_prompt_for_user_token,
        const_str_plain_prompt_for_user_token,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9ef5fdb905f7946c29073b382b17e650,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_spotipy$util,
        const_str_digest_cf7b9759ee5dc0ed51229cdc09785f24,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_spotipy$util$$$function_2_get_host_port() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_spotipy$util$$$function_2_get_host_port,
        const_str_plain_get_host_port,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_df915e45f25da7c0ceb17b1925885c37,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_spotipy$util,
        NULL,
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

function_impl_code functable_spotipy$util[] = {
    impl_spotipy$util$$$function_1_prompt_for_user_token,
    impl_spotipy$util$$$function_2_get_host_port,
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

    function_impl_code *current = functable_spotipy$util;
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

    if (offset > sizeof(functable_spotipy$util) || offset < 0) {
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
        functable_spotipy$util[offset],
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
        module_spotipy$util,
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
PyObject *modulecode_spotipy$util(PyObject *module) {
    module_spotipy$util = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_spotipy$util;
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
    PRINT_STRING("spotipy.util: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("spotipy.util: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("spotipy.util: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initspotipy$util\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_spotipy$util = MODULE_DICT(module_spotipy$util);

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
        moduledict_spotipy$util,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_spotipy$util,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_spotipy$util,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_spotipy$util,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_spotipy$util,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_spotipy$util);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_87b4f2a34f745ac3900f5eb7293d1115;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_49d078fd308cd254835afa56f04f3def;
        UPDATE_STRING_DICT0(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_107daea3b808e6264b25e5d758e450de;
        UPDATE_STRING_DICT0(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_87b4f2a34f745ac3900f5eb7293d1115 = MAKE_MODULE_FRAME(codeobj_87b4f2a34f745ac3900f5eb7293d1115, module_spotipy$util);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_87b4f2a34f745ac3900f5eb7293d1115);
    assert(Py_REFCNT(frame_87b4f2a34f745ac3900f5eb7293d1115) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_107daea3b808e6264b25e5d758e450de;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = LIST_COPY(const_list_1c238fffc96251bfde8520c7803bc62a_list);
        UPDATE_STRING_DICT1(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_logging;
        tmp_globals_name_1 = (PyObject *)moduledict_spotipy$util;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_87b4f2a34f745ac3900f5eb7293d1115->m_frame.f_lineno = 7;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_os;
        tmp_globals_name_2 = (PyObject *)moduledict_spotipy$util;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_87b4f2a34f745ac3900f5eb7293d1115->m_frame.f_lineno = 8;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_spotipy;
        tmp_globals_name_3 = (PyObject *)moduledict_spotipy$util;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_87b4f2a34f745ac3900f5eb7293d1115->m_frame.f_lineno = 10;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain_spotipy, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain_logging);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_logging);
        }

        CHECK_OBJECT(tmp_mvar_value_3);
        tmp_called_instance_1 = tmp_mvar_value_3;
        frame_87b4f2a34f745ac3900f5eb7293d1115->m_frame.f_lineno = 12;
        tmp_assign_source_8 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM(const_tuple_str_digest_a90991fb88a80ce483efbe11cd8c5d60_tuple, 0));

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain_LOGGER, tmp_assign_source_8);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_87b4f2a34f745ac3900f5eb7293d1115);
#endif
    popFrameStack();

    assertFrameObject(frame_87b4f2a34f745ac3900f5eb7293d1115);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_87b4f2a34f745ac3900f5eb7293d1115);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_87b4f2a34f745ac3900f5eb7293d1115, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_87b4f2a34f745ac3900f5eb7293d1115->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_87b4f2a34f745ac3900f5eb7293d1115, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = PyDict_Copy(const_dict_bc2a958a4f29f48d96343f9390eb1877);
        UPDATE_STRING_DICT1(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain_CLIENT_CREDS_ENV_VARS, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_none_none_none_none_none_false_tuple;
        Py_INCREF(tmp_defaults_1);
        tmp_assign_source_10 = MAKE_FUNCTION_spotipy$util$$$function_1_prompt_for_user_token(tmp_defaults_1);



        UPDATE_STRING_DICT1(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain_prompt_for_user_token, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_spotipy$util$$$function_2_get_host_port();



        UPDATE_STRING_DICT1(moduledict_spotipy$util, (Nuitka_StringObject *)const_str_plain_get_host_port, tmp_assign_source_11);
    }

    return module_spotipy$util;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
