/* Generated code for Python module 'youtube_dl.extractor.amp'
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

/* The "_module_youtube_dl$extractor$amp" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_youtube_dl$extractor$amp;
PyDictObject *moduledict_youtube_dl$extractor$amp;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain__proto_relative_url;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_dict;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_digest_7c01a876b716d7f9f492e86c81328527;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain__sort_formats;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_m3u8_id;
extern PyObject *const_dict_7e1d509d9f0adef67df7fa8dd2e83c7a;
extern PyObject *const_str_plain_default;
extern PyObject *const_str_plain_fatal;
extern PyObject *const_str_plain_id;
static PyObject *const_str_plain_get_media_node;
extern PyObject *const_str_plain_pubDate;
static PyObject *const_tuple_b6ea7d24b28e2771ebec67c3d25c245a_tuple;
extern PyObject *const_str_plain_duration;
static PyObject *const_str_digest_f38daa1f5170d7f92feb4c0e315fcf17;
extern PyObject *const_str_plain_utils;
extern PyObject *const_tuple_str_plain_height_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_description;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_str_digest_7eade2e8b5aec3030b242b35440c82b7;
extern PyObject *const_str_plain_guid;
extern PyObject *const_str_plain__extract_m3u8_formats;
extern PyObject *const_str_plain_int_or_none;
extern PyObject *const_str_plain_bitrate;
extern PyObject *const_str_plain_label;
extern PyObject *const_str_plain_tbr;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_ext;
extern PyObject *const_tuple_str_plain_InfoExtractor_tuple;
extern PyObject *const_tuple_str_plain_bitrate_tuple;
extern PyObject *const_str_plain_href;
extern PyObject *const_str_plain_item;
extern PyObject *const_str_plain_format_id;
extern PyObject *const_str_plain_timestamp;
extern PyObject *const_str_plain_hls;
extern PyObject *const_str_plain_mp4;
extern PyObject *const_str_plain_height;
extern PyObject *const_str_plain_subtitles;
static PyObject *const_str_digest_5e228c3360ad3c78f2e0933a701803e7;
extern PyObject *const_str_plain_IE_NAME;
extern PyObject *const_tuple_str_plain_fileSize_tuple;
extern PyObject *const_tuple_str_plain_item_tuple;
static PyObject *const_tuple_str_digest_5e228c3360ad3c78f2e0933a701803e7_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_space;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_f4m_id;
extern PyObject *const_str_plain_title;
extern PyObject *const_str_plain_thumbnail;
extern PyObject *const_tuple_str_plain_label_tuple;
extern PyObject *const_str_plain_name;
static PyObject *const_str_digest_0fb80ab925eab95fb9760bf3386f33ef;
extern PyObject *const_str_plain_filesize;
extern PyObject *const_str_plain_en;
extern PyObject *const_tuple_str_plain_url_tuple;
extern PyObject *const_tuple_str_plain_width_tuple;
extern PyObject *const_str_plain_channel;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_parse_iso8601;
static PyObject *const_str_digest_b2b3f92e7ded298a780d1df15d4940b5;
static PyObject *const_tuple_0f6ca47f0aed97a548a883420636f17d_tuple;
static PyObject *const_str_digest_9f2ad938ca5789da097a82ab5ae573ba;
static PyObject *const_tuple_8355dc0c2f41c56e26a9a42e161f6717_tuple;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_AMPIE;
static PyObject *const_str_plain_media_name;
extern PyObject *const_str_plain_lang;
extern PyObject *const_str_plain_mimetype2ext;
extern PyObject *const_str_plain_formats;
extern PyObject *const_str_plain_content;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_m3u8;
extern PyObject *const_str_plain__extract_feed_info;
extern PyObject *const_str_plain_media_group;
extern PyObject *const_dict_f5ca6a18a8136d81193ff1ee2f9d02a4;
static PyObject *const_str_plain_subTitle;
extern PyObject *const_tuple_str_plain_lang_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_f4m;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_digest_96a022731d3b8eb231faedb8a4666cfc;
extern PyObject *const_str_plain_setdefault;
extern PyObject *const_tuple_str_plain_href_tuple;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain__download_json;
extern PyObject *const_tuple_str_plain_pubDate_tuple;
static PyObject *const_str_digest_a5f4f71b25fcf0a50c5ffa6b5c43ac3e;
extern PyObject *const_tuple_str_plain_duration_tuple;
extern PyObject *const_str_plain_hds;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_InfoExtractor;
extern PyObject *const_str_plain_url_or_none;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_digest_3df648a24a0274f70dd08e35d85adda5;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_unicode_literals;
static PyObject *const_tuple_str_digest_9f2ad938ca5789da097a82ab5ae573ba_tuple;
static PyObject *const_str_digest_ba3cc52cf1334ffcde3772f5004bf702;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_determine_ext;
extern PyObject *const_str_plain_width;
static PyObject *const_str_digest_6fdf8d25a49653599b890dd97fb74b50;
extern PyObject *const_str_plain__extract_f4m_formats;
extern PyObject *const_str_plain_thumbnails;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_fileSize;
extern PyObject *const_str_digest_1f107b5592452b1ca3d9912cb6908233;
extern PyObject *const_str_plain_ExtractorError;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_757170c5bf388392b8d215ddf048f46a;
extern PyObject *const_str_digest_4dc4471c7c393ac6b1a78672dd58bf4e;
extern PyObject *const_tuple_str_plain_type_tuple;
extern PyObject *const_str_plain_common;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_7c01a876b716d7f9f492e86c81328527 = UNSTREAM_STRING_ASCII(&constant_bin[ 878414 ], 33, 0);
    const_str_plain_get_media_node = UNSTREAM_STRING_ASCII(&constant_bin[ 878447 ], 14, 1);
    const_tuple_b6ea7d24b28e2771ebec67c3d25c245a_tuple = PyTuple_New(6);
    PyTuple_SET_ITEM(const_tuple_b6ea7d24b28e2771ebec67c3d25c245a_tuple, 0, const_str_plain_determine_ext); Py_INCREF(const_str_plain_determine_ext);
    PyTuple_SET_ITEM(const_tuple_b6ea7d24b28e2771ebec67c3d25c245a_tuple, 1, const_str_plain_ExtractorError); Py_INCREF(const_str_plain_ExtractorError);
    PyTuple_SET_ITEM(const_tuple_b6ea7d24b28e2771ebec67c3d25c245a_tuple, 2, const_str_plain_int_or_none); Py_INCREF(const_str_plain_int_or_none);
    PyTuple_SET_ITEM(const_tuple_b6ea7d24b28e2771ebec67c3d25c245a_tuple, 3, const_str_plain_mimetype2ext); Py_INCREF(const_str_plain_mimetype2ext);
    PyTuple_SET_ITEM(const_tuple_b6ea7d24b28e2771ebec67c3d25c245a_tuple, 4, const_str_plain_parse_iso8601); Py_INCREF(const_str_plain_parse_iso8601);
    PyTuple_SET_ITEM(const_tuple_b6ea7d24b28e2771ebec67c3d25c245a_tuple, 5, const_str_plain_url_or_none); Py_INCREF(const_str_plain_url_or_none);
    const_str_digest_f38daa1f5170d7f92feb4c0e315fcf17 = UNSTREAM_STRING_ASCII(&constant_bin[ 878461 ], 48, 0);
    const_str_digest_7eade2e8b5aec3030b242b35440c82b7 = UNSTREAM_STRING_ASCII(&constant_bin[ 878509 ], 27, 0);
    const_str_digest_5e228c3360ad3c78f2e0933a701803e7 = UNSTREAM_STRING_ASCII(&constant_bin[ 878536 ], 11, 0);
    const_tuple_str_digest_5e228c3360ad3c78f2e0933a701803e7_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_5e228c3360ad3c78f2e0933a701803e7_tuple, 0, const_str_digest_5e228c3360ad3c78f2e0933a701803e7); Py_INCREF(const_str_digest_5e228c3360ad3c78f2e0933a701803e7);
    const_str_digest_0fb80ab925eab95fb9760bf3386f33ef = UNSTREAM_STRING_ASCII(&constant_bin[ 878547 ], 102, 0);
    const_str_digest_b2b3f92e7ded298a780d1df15d4940b5 = UNSTREAM_STRING_ASCII(&constant_bin[ 878649 ], 11, 0);
    const_tuple_0f6ca47f0aed97a548a883420636f17d_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_0f6ca47f0aed97a548a883420636f17d_tuple, 0, const_str_plain_name); Py_INCREF(const_str_plain_name);
    PyTuple_SET_ITEM(const_tuple_0f6ca47f0aed97a548a883420636f17d_tuple, 1, const_str_plain_default); Py_INCREF(const_str_plain_default);
    const_str_plain_media_name = UNSTREAM_STRING_ASCII(&constant_bin[ 878660 ], 10, 1);
    PyTuple_SET_ITEM(const_tuple_0f6ca47f0aed97a548a883420636f17d_tuple, 2, const_str_plain_media_name); Py_INCREF(const_str_plain_media_name);
    PyTuple_SET_ITEM(const_tuple_0f6ca47f0aed97a548a883420636f17d_tuple, 3, const_str_plain_media_group); Py_INCREF(const_str_plain_media_group);
    PyTuple_SET_ITEM(const_tuple_0f6ca47f0aed97a548a883420636f17d_tuple, 4, const_str_plain_item); Py_INCREF(const_str_plain_item);
    const_str_digest_9f2ad938ca5789da097a82ab5ae573ba = UNSTREAM_STRING_ASCII(&constant_bin[ 878670 ], 7, 0);
    const_tuple_8355dc0c2f41c56e26a9a42e161f6717_tuple = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 878677 ], 259);
    const_str_plain_subTitle = UNSTREAM_STRING_ASCII(&constant_bin[ 878936 ], 8, 1);
    const_str_digest_96a022731d3b8eb231faedb8a4666cfc = UNSTREAM_STRING_ASCII(&constant_bin[ 878461 ], 24, 0);
    const_str_digest_a5f4f71b25fcf0a50c5ffa6b5c43ac3e = UNSTREAM_STRING_ASCII(&constant_bin[ 878944 ], 34, 0);
    const_str_digest_3df648a24a0274f70dd08e35d85adda5 = UNSTREAM_STRING_ASCII(&constant_bin[ 878978 ], 14, 0);
    const_tuple_str_digest_9f2ad938ca5789da097a82ab5ae573ba_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_9f2ad938ca5789da097a82ab5ae573ba_tuple, 0, const_str_digest_9f2ad938ca5789da097a82ab5ae573ba); Py_INCREF(const_str_digest_9f2ad938ca5789da097a82ab5ae573ba);
    const_str_digest_ba3cc52cf1334ffcde3772f5004bf702 = UNSTREAM_STRING_ASCII(&constant_bin[ 878422 ], 24, 0);
    const_str_digest_6fdf8d25a49653599b890dd97fb74b50 = UNSTREAM_STRING_ASCII(&constant_bin[ 878992 ], 39, 0);
    const_str_digest_757170c5bf388392b8d215ddf048f46a = UNSTREAM_STRING_ASCII(&constant_bin[ 879031 ], 8, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_youtube_dl$extractor$amp(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_bc337b01d977fa77bf3bbee5bbb15f0e;
static PyCodeObject *codeobj_012ce7f280c65f1944062f8bf54488e7;
static PyCodeObject *codeobj_f81175faa21827591750fd957a754744;
static PyCodeObject *codeobj_a0d60bf76b3e4967817f3360ec96ded4;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_0fb80ab925eab95fb9760bf3386f33ef;
    codeobj_bc337b01d977fa77bf3bbee5bbb15f0e = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_digest_7c01a876b716d7f9f492e86c81328527, const_tuple_empty, 0, 0, 0);
    codeobj_012ce7f280c65f1944062f8bf54488e7 = MAKE_CODEOBJECT(module_filename_obj, 15, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain_AMPIE, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_f81175faa21827591750fd957a754744 = MAKE_CODEOBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain__extract_feed_info, const_tuple_8355dc0c2f41c56e26a9a42e161f6717_tuple, 2, 0, 0);
    codeobj_a0d60bf76b3e4967817f3360ec96ded4 = MAKE_CODEOBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS, const_str_plain_get_media_node, const_tuple_0f6ca47f0aed97a548a883420636f17d_tuple, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$amp$$$function_1__extract_feed_info();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$amp$$$function_1__extract_feed_info$$$function_1_get_media_node(PyObject *defaults);


// The module function definitions.
static PyObject *impl_youtube_dl$extractor$amp$$$function_1__extract_feed_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *var_feed = NULL;
    struct Nuitka_CellObject *var_item = PyCell_EMPTY();
    PyObject *var_video_id = NULL;
    PyObject *var_get_media_node = NULL;
    PyObject *var_thumbnails = NULL;
    PyObject *var_media_thumbnail = NULL;
    PyObject *var_thumbnail_data = NULL;
    PyObject *var_thumbnail = NULL;
    PyObject *var_thumbnail_url = NULL;
    PyObject *var_subtitles = NULL;
    PyObject *var_media_subtitle = NULL;
    PyObject *var_subtitle_data = NULL;
    PyObject *var_subtitle = NULL;
    PyObject *var_subtitle_href = NULL;
    PyObject *var_formats = NULL;
    PyObject *var_media_content = NULL;
    PyObject *var_media_data = NULL;
    PyObject *var_media = NULL;
    PyObject *var_media_url = NULL;
    PyObject *var_ext = NULL;
    PyObject *var_timestamp = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    struct Nuitka_FrameObject *frame_f81175faa21827591750fd957a754744;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f81175faa21827591750fd957a754744 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f81175faa21827591750fd957a754744)) {
        Py_XDECREF(cache_frame_f81175faa21827591750fd957a754744);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f81175faa21827591750fd957a754744 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f81175faa21827591750fd957a754744 = MAKE_FUNCTION_FRAME(codeobj_f81175faa21827591750fd957a754744, module_youtube_dl$extractor$amp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f81175faa21827591750fd957a754744->m_type_description == NULL);
    frame_f81175faa21827591750fd957a754744 = cache_frame_f81175faa21827591750fd957a754744;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f81175faa21827591750fd957a754744);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f81175faa21827591750fd957a754744) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_1 = par_url;
        tmp_args_element_name_2 = Py_None;
        tmp_args_element_name_3 = const_str_digest_7eade2e8b5aec3030b242b35440c82b7;
        tmp_args_element_name_4 = const_str_digest_a5f4f71b25fcf0a50c5ffa6b5c43ac3e;
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 18;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_1, const_str_plain__download_json, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_feed == NULL);
        var_feed = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        CHECK_OBJECT(var_feed);
        tmp_called_instance_3 = var_feed;
        tmp_call_arg_element_1 = const_str_plain_channel;
        tmp_call_arg_element_2 = PyDict_New();
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 21;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_called_instance_2 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_3, const_str_plain_get, call_args);
        }

        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 21;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_item_tuple, 0));

        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(PyCell_GET(var_item) == NULL);
        PyCell_SET(var_item, tmp_assign_source_2);

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(PyCell_GET(var_item));
        tmp_operand_name_1 = PyCell_GET(var_item);
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooocooooooooooooooooooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_ExtractorError);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtractorError);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27135 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 23;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_left_name_1 = const_str_digest_4dc4471c7c393ac6b1a78672dd58bf4e;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_IE_NAME);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_feed);
        tmp_expression_name_2 = var_feed;
        tmp_subscript_name_1 = const_str_plain_error;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_right_name_1);

            exception_lineno = 23;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        tmp_args_element_name_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 23;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_5);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 23;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooocooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(PyCell_GET(var_item));
        tmp_expression_name_3 = PyCell_GET(var_item);
        tmp_subscript_name_2 = const_str_plain_guid;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_video_id == NULL);
        var_video_id = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_tuple;
        Py_INCREF(tmp_defaults_1);
        tmp_assign_source_4 = MAKE_FUNCTION_youtube_dl$extractor$amp$$$function_1__extract_feed_info$$$function_1_get_media_node(tmp_defaults_1);

        ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[0] = var_item;
        Py_INCREF(((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[0]);


        assert(var_get_media_node == NULL);
        var_get_media_node = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = PyList_New(0);
        assert(var_thumbnails == NULL);
        var_thumbnails = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_2;
        CHECK_OBJECT(var_get_media_node);
        tmp_called_name_2 = var_get_media_node;
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 33;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, const_str_plain_thumbnail);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_media_thumbnail == NULL);
        var_media_thumbnail = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_media_thumbnail);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_media_thumbnail);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooocooooooooooooooooooo";
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
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_media_thumbnail);
        tmp_isinstance_inst_1 = var_media_thumbnail;
        tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(var_media_thumbnail);
        tmp_list_element_1 = var_media_thumbnail;
        tmp_assign_source_7 = PyList_New(1);
        Py_INCREF(tmp_list_element_1);
        PyList_SET_ITEM(tmp_assign_source_7, 0, tmp_list_element_1);
        {
            PyObject *old = var_media_thumbnail;
            assert(old != NULL);
            var_media_thumbnail = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_media_thumbnail);
        tmp_iter_arg_1 = var_media_thumbnail;
        tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_9 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooocooooooooooooooooooo";
                exception_lineno = 37;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_10 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_thumbnail_data;
            var_thumbnail_data = tmp_assign_source_10;
            Py_INCREF(var_thumbnail_data);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_arg_element_3;
        PyObject *tmp_call_arg_element_4;
        CHECK_OBJECT(var_thumbnail_data);
        tmp_called_instance_4 = var_thumbnail_data;
        tmp_call_arg_element_3 = const_str_digest_b2b3f92e7ded298a780d1df15d4940b5;
        tmp_call_arg_element_4 = PyDict_New();
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 38;
        {
            PyObject *call_args[] = {tmp_call_arg_element_3, tmp_call_arg_element_4};
            tmp_assign_source_11 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_4, const_str_plain_get, call_args);
        }

        Py_DECREF(tmp_call_arg_element_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_thumbnail;
            var_thumbnail = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_instance_5;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_url_or_none);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_url_or_none);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 34867 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 39;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_3 = tmp_mvar_value_2;
        CHECK_OBJECT(var_thumbnail);
        tmp_called_instance_5 = var_thumbnail;
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 39;
        tmp_args_element_name_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_url_tuple, 0));

        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 39;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_6);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_thumbnail_url;
            var_thumbnail_url = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT(var_thumbnail_url);
        tmp_operand_name_2 = var_thumbnail_url;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    goto loop_start_1;
    branch_no_4:;
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_called_instance_8;
        CHECK_OBJECT(var_thumbnails);
        tmp_expression_name_4 = var_thumbnails;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain_append);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_dict_key_1 = const_str_plain_url;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        CHECK_OBJECT(var_thumbnail_url);
        tmp_args_element_name_8 = var_thumbnail_url;
        tmp_args_element_name_9 = const_str_digest_1f107b5592452b1ca3d9912cb6908233;
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_dict_value_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_6, const_str_plain__proto_relative_url, call_args);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 43;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_7 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_7, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_width;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_int_or_none);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int_or_none);
        }

        if (tmp_mvar_value_3 == NULL) {
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_element_name_7);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27635 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_5 = tmp_mvar_value_3;
        CHECK_OBJECT(var_thumbnail);
        tmp_called_instance_7 = var_thumbnail;
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 44;
        tmp_args_element_name_10 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_width_tuple, 0));

        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_element_name_7);

            exception_lineno = 44;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 44;
        tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_10);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_element_name_7);

            exception_lineno = 44;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_7, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_height;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_int_or_none);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int_or_none);
        }

        if (tmp_mvar_value_4 == NULL) {
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_element_name_7);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27635 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 45;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_6 = tmp_mvar_value_4;
        CHECK_OBJECT(var_thumbnail);
        tmp_called_instance_8 = var_thumbnail;
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 45;
        tmp_args_element_name_11 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_8, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_height_tuple, 0));

        if (tmp_args_element_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_element_name_7);

            exception_lineno = 45;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 45;
        tmp_dict_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_11);
        Py_DECREF(tmp_args_element_name_11);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_element_name_7);

            exception_lineno = 45;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_7, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 42;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_7);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 37;
        type_description_1 = "ooocooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    branch_no_2:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = PyDict_New();
        assert(var_subtitles == NULL);
        var_subtitles = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_7;
        CHECK_OBJECT(var_get_media_node);
        tmp_called_name_7 = var_get_media_node;
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 49;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, const_str_plain_subTitle);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_media_subtitle == NULL);
        var_media_subtitle = tmp_assign_source_14;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_media_subtitle);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_media_subtitle);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(var_media_subtitle);
        tmp_isinstance_inst_2 = var_media_subtitle;
        tmp_isinstance_cls_2 = (PyObject *)&PyDict_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_list_element_2;
        CHECK_OBJECT(var_media_subtitle);
        tmp_list_element_2 = var_media_subtitle;
        tmp_assign_source_15 = PyList_New(1);
        Py_INCREF(tmp_list_element_2);
        PyList_SET_ITEM(tmp_assign_source_15, 0, tmp_list_element_2);
        {
            PyObject *old = var_media_subtitle;
            assert(old != NULL);
            var_media_subtitle = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_media_subtitle);
        tmp_iter_arg_2 = var_media_subtitle;
        tmp_assign_source_16 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_16;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_17 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooocooooooooooooooooooo";
                exception_lineno = 53;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_18 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_subtitle_data;
            var_subtitle_data = tmp_assign_source_18;
            Py_INCREF(var_subtitle_data);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_arg_element_5;
        PyObject *tmp_call_arg_element_6;
        CHECK_OBJECT(var_subtitle_data);
        tmp_called_instance_9 = var_subtitle_data;
        tmp_call_arg_element_5 = const_str_digest_b2b3f92e7ded298a780d1df15d4940b5;
        tmp_call_arg_element_6 = PyDict_New();
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = {tmp_call_arg_element_5, tmp_call_arg_element_6};
            tmp_assign_source_19 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_9, const_str_plain_get, call_args);
        }

        Py_DECREF(tmp_call_arg_element_6);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_subtitle;
            var_subtitle = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_called_instance_10;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_url_or_none);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_url_or_none);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 34867 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 55;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_name_8 = tmp_mvar_value_5;
        CHECK_OBJECT(var_subtitle);
        tmp_called_instance_10 = var_subtitle;
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 55;
        tmp_args_element_name_12 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_10, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_href_tuple, 0));

        if (tmp_args_element_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 55;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_12);
        Py_DECREF(tmp_args_element_name_12);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_subtitle_href;
            var_subtitle_href = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_operand_name_3;
        CHECK_OBJECT(var_subtitle_href);
        tmp_operand_name_3 = var_subtitle_href;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    goto loop_start_2;
    branch_no_7:;
    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_called_name_10;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_13;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_17;
        CHECK_OBJECT(var_subtitles);
        tmp_expression_name_6 = var_subtitles;
        tmp_called_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, const_str_plain_setdefault);
        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_subtitle);
        tmp_called_instance_11 = var_subtitle;
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 58;
        tmp_or_left_value_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_11, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_lang_tuple, 0));

        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_10);

            exception_lineno = 58;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 58;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = const_str_plain_en;
        Py_INCREF(tmp_or_right_value_1);
        tmp_args_element_name_13 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_name_13 = tmp_or_left_value_1;
        or_end_1:;
        tmp_args_element_name_14 = PyList_New(0);
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = {tmp_args_element_name_13, tmp_args_element_name_14};
            tmp_expression_name_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_10, call_args);
        }

        Py_DECREF(tmp_called_name_10);
        Py_DECREF(tmp_args_element_name_13);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, const_str_plain_append);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_dict_key_4 = const_str_plain_url;
        CHECK_OBJECT(var_subtitle_href);
        tmp_dict_value_4 = var_subtitle_href;
        tmp_args_element_name_15 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_15, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = const_str_plain_ext;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_mimetype2ext);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_mimetype2ext);
        }

        if (tmp_mvar_value_6 == NULL) {
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_15);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 34619 ], 34, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 60;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_name_11 = tmp_mvar_value_6;
        CHECK_OBJECT(var_subtitle);
        tmp_called_instance_12 = var_subtitle;
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 60;
        tmp_args_element_name_16 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_12, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_type_tuple, 0));

        if (tmp_args_element_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_15);

            exception_lineno = 60;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 60;
        tmp_or_left_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_16);
        Py_DECREF(tmp_args_element_name_16);
        if (tmp_or_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_15);

            exception_lineno = 60;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_15);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 60;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_determine_ext);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_determine_ext);
        }

        if (tmp_mvar_value_7 == NULL) {
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_15);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27560 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 60;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_name_12 = tmp_mvar_value_7;
        CHECK_OBJECT(var_subtitle_href);
        tmp_args_element_name_17 = var_subtitle_href;
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 60;
        tmp_or_right_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_17);
        if (tmp_or_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_15);

            exception_lineno = 60;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_dict_value_5 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_dict_value_5 = tmp_or_left_value_2;
        or_end_2:;
        tmp_res = PyDict_SetItem(tmp_args_element_name_15, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 58;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_15);
        Py_DECREF(tmp_called_name_9);
        Py_DECREF(tmp_args_element_name_15);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 53;
        type_description_1 = "ooocooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_2;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;

    branch_no_5:;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = PyList_New(0);
        assert(var_formats == NULL);
        var_formats = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_13;
        CHECK_OBJECT(var_get_media_node);
        tmp_called_name_13 = var_get_media_node;
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 64;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, const_str_plain_content);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_media_content == NULL);
        var_media_content = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT(var_media_content);
        tmp_isinstance_inst_3 = var_media_content;
        tmp_isinstance_cls_3 = (PyObject *)&PyDict_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_list_element_3;
        CHECK_OBJECT(var_media_content);
        tmp_list_element_3 = var_media_content;
        tmp_assign_source_23 = PyList_New(1);
        Py_INCREF(tmp_list_element_3);
        PyList_SET_ITEM(tmp_assign_source_23, 0, tmp_list_element_3);
        {
            PyObject *old = var_media_content;
            assert(old != NULL);
            var_media_content = tmp_assign_source_23;
            Py_DECREF(old);
        }

    }
    branch_no_8:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(var_media_content);
        tmp_iter_arg_3 = var_media_content;
        tmp_assign_source_24 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_24;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_25 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_25 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooocooooooooooooooooooo";
                exception_lineno = 67;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_26 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_media_data;
            var_media_data = tmp_assign_source_26;
            Py_INCREF(var_media_data);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_arg_element_7;
        PyObject *tmp_call_arg_element_8;
        CHECK_OBJECT(var_media_data);
        tmp_called_instance_13 = var_media_data;
        tmp_call_arg_element_7 = const_str_digest_b2b3f92e7ded298a780d1df15d4940b5;
        tmp_call_arg_element_8 = PyDict_New();
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = {tmp_call_arg_element_7, tmp_call_arg_element_8};
            tmp_assign_source_27 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_13, const_str_plain_get, call_args);
        }

        Py_DECREF(tmp_call_arg_element_8);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_media;
            var_media = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_14;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_called_instance_14;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_url_or_none);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_url_or_none);
        }

        if (tmp_mvar_value_8 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 34867 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 69;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_14 = tmp_mvar_value_8;
        CHECK_OBJECT(var_media);
        tmp_called_instance_14 = var_media;
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 69;
        tmp_args_element_name_18 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_14, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_url_tuple, 0));

        if (tmp_args_element_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 69;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, tmp_args_element_name_18);
        Py_DECREF(tmp_args_element_name_18);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_media_url;
            var_media_url = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_operand_name_4;
        CHECK_OBJECT(var_media_url);
        tmp_operand_name_4 = var_media_url;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_9 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    goto loop_start_3;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_29;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_called_name_15;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_called_name_16;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_20;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_mimetype2ext);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_mimetype2ext);
        }

        if (tmp_mvar_value_9 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 34619 ], 34, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 72;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_15 = tmp_mvar_value_9;
        CHECK_OBJECT(var_media);
        tmp_called_instance_15 = var_media;
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 72;
        tmp_args_element_name_19 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_15, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_type_tuple, 0));

        if (tmp_args_element_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 72;
        tmp_or_left_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, tmp_args_element_name_19);
        Py_DECREF(tmp_args_element_name_19);
        if (tmp_or_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_3);

            exception_lineno = 72;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        Py_DECREF(tmp_or_left_value_3);
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_determine_ext);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_determine_ext);
        }

        if (tmp_mvar_value_10 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27560 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 72;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_16 = tmp_mvar_value_10;
        CHECK_OBJECT(var_media_url);
        tmp_args_element_name_20 = var_media_url;
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 72;
        tmp_or_right_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_16, tmp_args_element_name_20);
        if (tmp_or_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_29 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_assign_source_29 = tmp_or_left_value_3;
        or_end_3:;
        {
            PyObject *old = var_ext;
            var_ext = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_10_object_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_ext);
        tmp_compexpr_left_1 = var_ext;
        tmp_compexpr_right_1 = const_str_plain_f4m;
        tmp_tmp_condition_result_10_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_10_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_condition_result_10_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_10_object_1);

            exception_lineno = 73;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_10 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_10_object_1);
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_name_17;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_called_name_18;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT(var_formats);
        tmp_expression_name_7 = var_formats;
        tmp_called_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, const_str_plain_extend);
        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_8 = par_self;
        tmp_called_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, const_str_plain__extract_f4m_formats);
        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_17);

            exception_lineno = 74;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_media_url);
        tmp_left_name_2 = var_media_url;
        tmp_right_name_2 = const_str_digest_6fdf8d25a49653599b890dd97fb74b50;
        tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_2, tmp_right_name_2);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_17);
            Py_DECREF(tmp_called_name_18);

            exception_lineno = 75;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_video_id);
        tmp_tuple_element_2 = var_video_id;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_2);
        tmp_kw_name_1 = PyDict_Copy(const_dict_f5ca6a18a8136d81193ff1ee2f9d02a4);
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 74;
        tmp_args_element_name_21 = CALL_FUNCTION(tmp_called_name_18, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_18);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_args_element_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_17);

            exception_lineno = 74;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 74;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, tmp_args_element_name_21);
        Py_DECREF(tmp_called_name_17);
        Py_DECREF(tmp_args_element_name_21);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_10;
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_11_object_1;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_ext);
        tmp_compexpr_left_2 = var_ext;
        tmp_compexpr_right_2 = const_str_plain_m3u8;
        tmp_tmp_condition_result_11_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_11_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_tmp_condition_result_11_object_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_11_object_1);

            exception_lineno = 77;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_11 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_11_object_1);
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_called_name_19;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_called_name_20;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_2;
        CHECK_OBJECT(var_formats);
        tmp_expression_name_9 = var_formats;
        tmp_called_name_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, const_str_plain_extend);
        if (tmp_called_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_10 = par_self;
        tmp_called_name_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, const_str_plain__extract_m3u8_formats);
        if (tmp_called_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_19);

            exception_lineno = 78;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_media_url);
        tmp_tuple_element_3 = var_media_url;
        tmp_args_name_2 = PyTuple_New(3);
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_video_id);
        tmp_tuple_element_3 = var_video_id;
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_3);
        tmp_tuple_element_3 = const_str_plain_mp4;
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_3);
        tmp_kw_name_2 = PyDict_Copy(const_dict_7e1d509d9f0adef67df7fa8dd2e83c7a);
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 78;
        tmp_args_element_name_22 = CALL_FUNCTION(tmp_called_name_20, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_20);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_args_element_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_19);

            exception_lineno = 78;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 78;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_19, tmp_args_element_name_22);
        Py_DECREF(tmp_called_name_19);
        Py_DECREF(tmp_args_element_name_22);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_called_name_21;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_call_arg_element_9;
        PyObject *tmp_call_arg_element_10;
        PyObject *tmp_call_arg_element_11;
        PyObject *tmp_call_arg_element_12;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_called_name_22;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_called_name_23;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_called_instance_20;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        CHECK_OBJECT(var_formats);
        tmp_expression_name_11 = var_formats;
        tmp_called_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, const_str_plain_append);
        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_dict_key_6 = const_str_plain_format_id;
        CHECK_OBJECT(var_media_data);
        tmp_called_instance_18 = var_media_data;
        tmp_call_arg_element_9 = const_str_digest_3df648a24a0274f70dd08e35d85adda5;
        tmp_call_arg_element_10 = PyDict_New();
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = {tmp_call_arg_element_9, tmp_call_arg_element_10};
            tmp_called_instance_17 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_18, const_str_plain_get, call_args);
        }

        Py_DECREF(tmp_call_arg_element_10);
        if (tmp_called_instance_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);

            exception_lineno = 82;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_call_arg_element_11 = const_str_digest_b2b3f92e7ded298a780d1df15d4940b5;
        tmp_call_arg_element_12 = PyDict_New();
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = {tmp_call_arg_element_11, tmp_call_arg_element_12};
            tmp_called_instance_16 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_17, const_str_plain_get, call_args);
        }

        Py_DECREF(tmp_called_instance_17);
        Py_DECREF(tmp_call_arg_element_12);
        if (tmp_called_instance_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);

            exception_lineno = 82;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 82;
        tmp_dict_value_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_16, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_label_tuple, 0));

        Py_DECREF(tmp_called_instance_16);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);

            exception_lineno = 82;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_name_23 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_23, tmp_dict_key_6, tmp_dict_value_6);
        Py_DECREF(tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = const_str_plain_url;
        CHECK_OBJECT(var_media_url);
        tmp_dict_value_7 = var_media_url;
        tmp_res = PyDict_SetItem(tmp_args_element_name_23, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = const_str_plain_tbr;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_int_or_none);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int_or_none);
        }

        if (tmp_mvar_value_11 == NULL) {
            Py_DECREF(tmp_called_name_21);
            Py_DECREF(tmp_args_element_name_23);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27635 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 84;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_22 = tmp_mvar_value_11;
        CHECK_OBJECT(var_media);
        tmp_called_instance_19 = var_media;
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 84;
        tmp_args_element_name_24 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_19, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_bitrate_tuple, 0));

        if (tmp_args_element_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);
            Py_DECREF(tmp_args_element_name_23);

            exception_lineno = 84;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 84;
        tmp_dict_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_22, tmp_args_element_name_24);
        Py_DECREF(tmp_args_element_name_24);
        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);
            Py_DECREF(tmp_args_element_name_23);

            exception_lineno = 84;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_23, tmp_dict_key_8, tmp_dict_value_8);
        Py_DECREF(tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = const_str_plain_filesize;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_int_or_none);

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int_or_none);
        }

        if (tmp_mvar_value_12 == NULL) {
            Py_DECREF(tmp_called_name_21);
            Py_DECREF(tmp_args_element_name_23);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27635 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_23 = tmp_mvar_value_12;
        CHECK_OBJECT(var_media);
        tmp_called_instance_20 = var_media;
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 85;
        tmp_args_element_name_25 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_20, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_fileSize_tuple, 0));

        if (tmp_args_element_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);
            Py_DECREF(tmp_args_element_name_23);

            exception_lineno = 85;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 85;
        tmp_dict_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_23, tmp_args_element_name_25);
        Py_DECREF(tmp_args_element_name_25);
        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);
            Py_DECREF(tmp_args_element_name_23);

            exception_lineno = 85;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_23, tmp_dict_key_9, tmp_dict_value_9);
        Py_DECREF(tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = const_str_plain_ext;
        CHECK_OBJECT(var_ext);
        tmp_dict_value_10 = var_ext;
        tmp_res = PyDict_SetItem(tmp_args_element_name_23, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 81;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_21, tmp_args_element_name_23);
        Py_DECREF(tmp_called_name_21);
        Py_DECREF(tmp_args_element_name_23);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooocooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_end_11:;
    branch_end_10:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 67;
        type_description_1 = "ooocooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;

    {
        PyObject *tmp_called_instance_21;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_26;
        CHECK_OBJECT(par_self);
        tmp_called_instance_21 = par_self;
        CHECK_OBJECT(var_formats);
        tmp_args_element_name_26 = var_formats;
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 89;
        {
            PyObject *call_args[] = {tmp_args_element_name_26};
            tmp_call_result_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_21, const_str_plain__sort_formats, call_args);
        }

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_30;
        int tmp_or_left_truth_4;
        PyObject *tmp_or_left_value_4;
        PyObject *tmp_or_right_value_4;
        PyObject *tmp_called_name_24;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_called_name_25;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_called_instance_23;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_parse_iso8601);

        if (unlikely(tmp_mvar_value_13 == NULL)) {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_iso8601);
        }

        if (tmp_mvar_value_13 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 33616 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 91;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_24 = tmp_mvar_value_13;
        CHECK_OBJECT(PyCell_GET(var_item));
        tmp_called_instance_22 = PyCell_GET(var_item);
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 91;
        tmp_args_element_name_27 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_22, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_pubDate_tuple, 0));

        if (tmp_args_element_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_28 = const_str_space;
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 91;
        {
            PyObject *call_args[] = {tmp_args_element_name_27, tmp_args_element_name_28};
            tmp_or_left_value_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_24, call_args);
        }

        Py_DECREF(tmp_args_element_name_27);
        if (tmp_or_left_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
        if (tmp_or_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_4);

            exception_lineno = 91;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_4 == 1) {
            goto or_left_4;
        } else {
            goto or_right_4;
        }
        or_right_4:;
        Py_DECREF(tmp_or_left_value_4);
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_parse_iso8601);

        if (unlikely(tmp_mvar_value_14 == NULL)) {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_iso8601);
        }

        if (tmp_mvar_value_14 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 33616 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 91;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_25 = tmp_mvar_value_14;
        CHECK_OBJECT(PyCell_GET(var_item));
        tmp_called_instance_23 = PyCell_GET(var_item);
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 91;
        tmp_args_element_name_29 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_23, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_digest_9f2ad938ca5789da097a82ab5ae573ba_tuple, 0));

        if (tmp_args_element_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 91;
        tmp_or_right_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_25, tmp_args_element_name_29);
        Py_DECREF(tmp_args_element_name_29);
        if (tmp_or_right_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_30 = tmp_or_right_value_4;
        goto or_end_4;
        or_left_4:;
        tmp_assign_source_30 = tmp_or_left_value_4;
        or_end_4:;
        assert(var_timestamp == NULL);
        var_timestamp = tmp_assign_source_30;
    }
    {
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_called_name_26;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_called_name_27;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_called_name_28;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_called_instance_24;
        PyObject *tmp_called_instance_25;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_call_arg_element_13;
        PyObject *tmp_call_arg_element_14;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        tmp_dict_key_11 = const_str_plain_id;
        CHECK_OBJECT(var_video_id);
        tmp_dict_value_11 = var_video_id;
        tmp_return_value = _PyDict_NewPresized( 8 );
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = const_str_plain_title;
        CHECK_OBJECT(var_get_media_node);
        tmp_called_name_26 = var_get_media_node;
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 95;
        tmp_dict_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_26, const_str_plain_title);
        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);

            exception_lineno = 95;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_12, tmp_dict_value_12);
        Py_DECREF(tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = const_str_plain_description;
        CHECK_OBJECT(var_get_media_node);
        tmp_called_name_27 = var_get_media_node;
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 96;
        tmp_dict_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_27, const_str_plain_description);
        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);

            exception_lineno = 96;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_13, tmp_dict_value_13);
        Py_DECREF(tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = const_str_plain_thumbnails;
        CHECK_OBJECT(var_thumbnails);
        tmp_dict_value_14 = var_thumbnails;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = const_str_plain_timestamp;
        CHECK_OBJECT(var_timestamp);
        tmp_dict_value_15 = var_timestamp;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_16 = const_str_plain_duration;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_int_or_none);

        if (unlikely(tmp_mvar_value_15 == NULL)) {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int_or_none);
        }

        if (tmp_mvar_value_15 == NULL) {
            Py_DECREF(tmp_return_value);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27635 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 99;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_28 = tmp_mvar_value_15;
        CHECK_OBJECT(var_media_content);
        tmp_expression_name_12 = var_media_content;
        tmp_subscript_name_3 = const_int_0;
        tmp_called_instance_25 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_12, tmp_subscript_name_3, 0);
        if (tmp_called_instance_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);

            exception_lineno = 99;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_13 = const_str_digest_b2b3f92e7ded298a780d1df15d4940b5;
        tmp_call_arg_element_14 = PyDict_New();
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = {tmp_call_arg_element_13, tmp_call_arg_element_14};
            tmp_called_instance_24 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_25, const_str_plain_get, call_args);
        }

        Py_DECREF(tmp_called_instance_25);
        Py_DECREF(tmp_call_arg_element_14);
        if (tmp_called_instance_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);

            exception_lineno = 99;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 99;
        tmp_args_element_name_30 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_24, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_duration_tuple, 0));

        Py_DECREF(tmp_called_instance_24);
        if (tmp_args_element_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);

            exception_lineno = 99;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f81175faa21827591750fd957a754744->m_frame.f_lineno = 99;
        tmp_dict_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_28, tmp_args_element_name_30);
        Py_DECREF(tmp_args_element_name_30);
        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);

            exception_lineno = 99;
            type_description_1 = "ooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_16, tmp_dict_value_16);
        Py_DECREF(tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = const_str_plain_subtitles;
        CHECK_OBJECT(var_subtitles);
        tmp_dict_value_17 = var_subtitles;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = const_str_plain_formats;
        CHECK_OBJECT(var_formats);
        tmp_dict_value_18 = var_formats;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f81175faa21827591750fd957a754744);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f81175faa21827591750fd957a754744);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f81175faa21827591750fd957a754744);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f81175faa21827591750fd957a754744, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f81175faa21827591750fd957a754744->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f81175faa21827591750fd957a754744, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f81175faa21827591750fd957a754744,
        type_description_1,
        par_self,
        par_url,
        var_feed,
        var_item,
        var_video_id,
        var_get_media_node,
        var_thumbnails,
        var_media_thumbnail,
        var_thumbnail_data,
        var_thumbnail,
        var_thumbnail_url,
        var_subtitles,
        var_media_subtitle,
        var_subtitle_data,
        var_subtitle,
        var_subtitle_href,
        var_formats,
        var_media_content,
        var_media_data,
        var_media,
        var_media_url,
        var_ext,
        var_timestamp
    );


    // Release cached frame.
    if (frame_f81175faa21827591750fd957a754744 == cache_frame_f81175faa21827591750fd957a754744) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_f81175faa21827591750fd957a754744);
    }
    cache_frame_f81175faa21827591750fd957a754744 = NULL;

    assertFrameObject(frame_f81175faa21827591750fd957a754744);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_feed);
    Py_DECREF(var_feed);
    var_feed = NULL;

    CHECK_OBJECT(var_item);
    Py_DECREF(var_item);
    var_item = NULL;

    CHECK_OBJECT(var_video_id);
    Py_DECREF(var_video_id);
    var_video_id = NULL;

    CHECK_OBJECT(var_get_media_node);
    Py_DECREF(var_get_media_node);
    var_get_media_node = NULL;

    CHECK_OBJECT(var_thumbnails);
    Py_DECREF(var_thumbnails);
    var_thumbnails = NULL;

    Py_XDECREF(var_media_thumbnail);
    var_media_thumbnail = NULL;

    Py_XDECREF(var_thumbnail_data);
    var_thumbnail_data = NULL;

    Py_XDECREF(var_thumbnail);
    var_thumbnail = NULL;

    Py_XDECREF(var_thumbnail_url);
    var_thumbnail_url = NULL;

    CHECK_OBJECT(var_subtitles);
    Py_DECREF(var_subtitles);
    var_subtitles = NULL;

    Py_XDECREF(var_media_subtitle);
    var_media_subtitle = NULL;

    Py_XDECREF(var_subtitle_data);
    var_subtitle_data = NULL;

    Py_XDECREF(var_subtitle);
    var_subtitle = NULL;

    Py_XDECREF(var_subtitle_href);
    var_subtitle_href = NULL;

    CHECK_OBJECT(var_formats);
    Py_DECREF(var_formats);
    var_formats = NULL;

    CHECK_OBJECT(var_media_content);
    Py_DECREF(var_media_content);
    var_media_content = NULL;

    Py_XDECREF(var_media_data);
    var_media_data = NULL;

    Py_XDECREF(var_media);
    var_media = NULL;

    Py_XDECREF(var_media_url);
    var_media_url = NULL;

    Py_XDECREF(var_ext);
    var_ext = NULL;

    CHECK_OBJECT(var_timestamp);
    Py_DECREF(var_timestamp);
    var_timestamp = NULL;

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

    Py_XDECREF(var_feed);
    var_feed = NULL;

    CHECK_OBJECT(var_item);
    Py_DECREF(var_item);
    var_item = NULL;

    Py_XDECREF(var_video_id);
    var_video_id = NULL;

    Py_XDECREF(var_get_media_node);
    var_get_media_node = NULL;

    Py_XDECREF(var_thumbnails);
    var_thumbnails = NULL;

    Py_XDECREF(var_media_thumbnail);
    var_media_thumbnail = NULL;

    Py_XDECREF(var_thumbnail_data);
    var_thumbnail_data = NULL;

    Py_XDECREF(var_thumbnail);
    var_thumbnail = NULL;

    Py_XDECREF(var_thumbnail_url);
    var_thumbnail_url = NULL;

    Py_XDECREF(var_subtitles);
    var_subtitles = NULL;

    Py_XDECREF(var_media_subtitle);
    var_media_subtitle = NULL;

    Py_XDECREF(var_subtitle_data);
    var_subtitle_data = NULL;

    Py_XDECREF(var_subtitle);
    var_subtitle = NULL;

    Py_XDECREF(var_subtitle_href);
    var_subtitle_href = NULL;

    Py_XDECREF(var_formats);
    var_formats = NULL;

    Py_XDECREF(var_media_content);
    var_media_content = NULL;

    Py_XDECREF(var_media_data);
    var_media_data = NULL;

    Py_XDECREF(var_media);
    var_media = NULL;

    Py_XDECREF(var_media_url);
    var_media_url = NULL;

    Py_XDECREF(var_ext);
    var_ext = NULL;

    Py_XDECREF(var_timestamp);
    var_timestamp = NULL;

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$amp$$$function_1__extract_feed_info$$$function_1_get_media_node(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    PyObject *par_default = python_pars[1];
    PyObject *var_media_name = NULL;
    PyObject *var_media_group = NULL;
    struct Nuitka_FrameObject *frame_a0d60bf76b3e4967817f3360ec96ded4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a0d60bf76b3e4967817f3360ec96ded4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a0d60bf76b3e4967817f3360ec96ded4)) {
        Py_XDECREF(cache_frame_a0d60bf76b3e4967817f3360ec96ded4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a0d60bf76b3e4967817f3360ec96ded4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a0d60bf76b3e4967817f3360ec96ded4 = MAKE_FUNCTION_FRAME(codeobj_a0d60bf76b3e4967817f3360ec96ded4, module_youtube_dl$extractor$amp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a0d60bf76b3e4967817f3360ec96ded4->m_type_description == NULL);
    frame_a0d60bf76b3e4967817f3360ec96ded4 = cache_frame_a0d60bf76b3e4967817f3360ec96ded4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a0d60bf76b3e4967817f3360ec96ded4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a0d60bf76b3e4967817f3360ec96ded4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = const_str_digest_757170c5bf388392b8d215ddf048f46a;
        CHECK_OBJECT(par_name);
        tmp_right_name_1 = par_name;
        tmp_assign_source_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        assert(var_media_name == NULL);
        var_media_name = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_instance_1;
        if (PyCell_GET(self->m_closure[0]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "item");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 29;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET(self->m_closure[0]);
        frame_a0d60bf76b3e4967817f3360ec96ded4->m_frame.f_lineno = 29;
        tmp_or_left_value_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_digest_5e228c3360ad3c78f2e0933a701803e7_tuple, 0));

        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 29;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        if (PyCell_GET(self->m_closure[0]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "item");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 29;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_or_right_value_1 = PyCell_GET(self->m_closure[0]);
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_2 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_media_group == NULL);
        var_media_group = tmp_assign_source_2;
    }
    {
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_1;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(var_media_group);
        tmp_called_instance_2 = var_media_group;
        CHECK_OBJECT(var_media_name);
        tmp_args_element_name_1 = var_media_name;
        frame_a0d60bf76b3e4967817f3360ec96ded4->m_frame.f_lineno = 30;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_or_left_value_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_get, call_args);
        }

        if (tmp_or_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 30;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        if (PyCell_GET(self->m_closure[0]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "item");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 30;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = PyCell_GET(self->m_closure[0]);
        CHECK_OBJECT(var_media_name);
        tmp_args_element_name_2 = var_media_name;
        frame_a0d60bf76b3e4967817f3360ec96ded4->m_frame.f_lineno = 30;
        {
            PyObject *call_args[] = {tmp_args_element_name_2};
            tmp_or_left_value_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_get, call_args);
        }

        if (tmp_or_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_3);

            exception_lineno = 30;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        Py_DECREF(tmp_or_left_value_3);
        if (PyCell_GET(self->m_closure[0]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "item");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 30;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = PyCell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_name);
        tmp_args_element_name_3 = par_name;
        CHECK_OBJECT(par_default);
        tmp_args_element_name_4 = par_default;
        frame_a0d60bf76b3e4967817f3360ec96ded4->m_frame.f_lineno = 30;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_or_right_value_3 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_4, const_str_plain_get, call_args);
        }

        if (tmp_or_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_or_right_value_2 = tmp_or_left_value_3;
        or_end_3:;
        tmp_return_value = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_return_value = tmp_or_left_value_2;
        or_end_2:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a0d60bf76b3e4967817f3360ec96ded4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a0d60bf76b3e4967817f3360ec96ded4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a0d60bf76b3e4967817f3360ec96ded4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a0d60bf76b3e4967817f3360ec96ded4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a0d60bf76b3e4967817f3360ec96ded4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a0d60bf76b3e4967817f3360ec96ded4, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a0d60bf76b3e4967817f3360ec96ded4,
        type_description_1,
        par_name,
        par_default,
        var_media_name,
        var_media_group,
        self->m_closure[0]
    );


    // Release cached frame.
    if (frame_a0d60bf76b3e4967817f3360ec96ded4 == cache_frame_a0d60bf76b3e4967817f3360ec96ded4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_a0d60bf76b3e4967817f3360ec96ded4);
    }
    cache_frame_a0d60bf76b3e4967817f3360ec96ded4 = NULL;

    assertFrameObject(frame_a0d60bf76b3e4967817f3360ec96ded4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_media_name);
    Py_DECREF(var_media_name);
    var_media_name = NULL;

    CHECK_OBJECT(var_media_group);
    Py_DECREF(var_media_group);
    var_media_group = NULL;

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

    Py_XDECREF(var_media_name);
    var_media_name = NULL;

    Py_XDECREF(var_media_group);
    var_media_group = NULL;

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$amp$$$function_1__extract_feed_info() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$amp$$$function_1__extract_feed_info,
        const_str_plain__extract_feed_info,
#if PYTHON_VERSION >= 300
        const_str_digest_96a022731d3b8eb231faedb8a4666cfc,
#endif
        codeobj_f81175faa21827591750fd957a754744,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$amp,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$amp$$$function_1__extract_feed_info$$$function_1_get_media_node(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$amp$$$function_1__extract_feed_info$$$function_1_get_media_node,
        const_str_plain_get_media_node,
#if PYTHON_VERSION >= 300
        const_str_digest_f38daa1f5170d7f92feb4c0e315fcf17,
#endif
        codeobj_a0d60bf76b3e4967817f3360ec96ded4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$amp,
        NULL,
        1
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

function_impl_code functable_youtube_dl$extractor$amp[] = {
    impl_youtube_dl$extractor$amp$$$function_1__extract_feed_info$$$function_1_get_media_node,
    impl_youtube_dl$extractor$amp$$$function_1__extract_feed_info,
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

    function_impl_code *current = functable_youtube_dl$extractor$amp;
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

    if (offset > sizeof(functable_youtube_dl$extractor$amp) || offset < 0) {
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
        functable_youtube_dl$extractor$amp[offset],
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
        module_youtube_dl$extractor$amp,
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
PyObject *modulecode_youtube_dl$extractor$amp(PyObject *module) {
    module_youtube_dl$extractor$amp = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_youtube_dl$extractor$amp;
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
    PRINT_STRING("youtube_dl.extractor.amp: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("youtube_dl.extractor.amp: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("youtube_dl.extractor.amp: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in inityoutube_dl$extractor$amp\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_youtube_dl$extractor$amp = MODULE_DICT(module_youtube_dl$extractor$amp);

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
        moduledict_youtube_dl$extractor$amp,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$extractor$amp,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$extractor$amp,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$extractor$amp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$extractor$amp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_youtube_dl$extractor$amp);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_bc337b01d977fa77bf3bbee5bbb15f0e;
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
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_youtube_dl$extractor$amp_15 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_012ce7f280c65f1944062f8bf54488e7_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_012ce7f280c65f1944062f8bf54488e7_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_0fb80ab925eab95fb9760bf3386f33ef;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_bc337b01d977fa77bf3bbee5bbb15f0e = MAKE_MODULE_FRAME(codeobj_bc337b01d977fa77bf3bbee5bbb15f0e, module_youtube_dl$extractor$amp);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_bc337b01d977fa77bf3bbee5bbb15f0e);
    assert(Py_REFCNT(frame_bc337b01d977fa77bf3bbee5bbb15f0e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_0fb80ab925eab95fb9760bf3386f33ef;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        frame_bc337b01d977fa77bf3bbee5bbb15f0e->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
           tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_youtube_dl$extractor$amp,
                const_str_plain_unicode_literals,
                const_int_0
            );
        } else {
           tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_unicode_literals);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_common;
        tmp_globals_name_1 = (PyObject *)moduledict_youtube_dl$extractor$amp;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_InfoExtractor_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_bc337b01d977fa77bf3bbee5bbb15f0e->m_frame.f_lineno = 4;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
           tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_youtube_dl$extractor$amp,
                const_str_plain_InfoExtractor,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_InfoExtractor);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_InfoExtractor, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_utils;
        tmp_globals_name_2 = (PyObject *)moduledict_youtube_dl$extractor$amp;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_b6ea7d24b28e2771ebec67c3d25c245a_tuple;
        tmp_level_name_2 = const_int_pos_2;
        frame_bc337b01d977fa77bf3bbee5bbb15f0e->m_frame.f_lineno = 5;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
           tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_youtube_dl$extractor$amp,
                const_str_plain_determine_ext,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_determine_ext);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_determine_ext, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_youtube_dl$extractor$amp,
                const_str_plain_ExtractorError,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_ExtractorError);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_ExtractorError, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_youtube_dl$extractor$amp,
                const_str_plain_int_or_none,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_int_or_none);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_int_or_none, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_youtube_dl$extractor$amp,
                const_str_plain_mimetype2ext,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_mimetype2ext);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_mimetype2ext, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_youtube_dl$extractor$amp,
                const_str_plain_parse_iso8601,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_parse_iso8601);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_parse_iso8601, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_youtube_dl$extractor$amp,
                const_str_plain_url_or_none,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_url_or_none);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_url_or_none, tmp_assign_source_12);
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

    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_InfoExtractor);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_InfoExtractor);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 33651 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 15;

            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_assign_source_13 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_13, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_14 = impl___internal__$$$function_4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
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


            exception_lineno = 15;

            goto try_except_handler_2;
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


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
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


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_16 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_16;
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


            exception_lineno = 15;

            goto try_except_handler_2;
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


        exception_lineno = 15;

        goto try_except_handler_2;
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_3 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain___prepare__);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = const_str_plain_AMPIE;
        tmp_args_name_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_bc337b01d977fa77bf3bbee5bbb15f0e->m_frame.f_lineno = 15;
        tmp_assign_source_17 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_17;
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


            exception_lineno = 15;

            goto try_except_handler_2;
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
        PyObject *tmp_tuple_element_3;
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
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        tmp_right_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_type_arg_2 = tmp_class_creation_1__prepared;
        tmp_expression_name_5 = BUILTIN_TYPE1(tmp_type_arg_2);
        assert(!(tmp_expression_name_5 == NULL));
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, const_str_plain___name__);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_right_name_1);

            exception_lineno = 15;

            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_3);
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 15;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_18;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_19;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_youtube_dl$extractor$amp_15 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_ba3cc52cf1334ffcde3772f5004bf702;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$amp_15, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_AMPIE;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$amp_15, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_012ce7f280c65f1944062f8bf54488e7_2)) {
            Py_XDECREF(cache_frame_012ce7f280c65f1944062f8bf54488e7_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_012ce7f280c65f1944062f8bf54488e7_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_012ce7f280c65f1944062f8bf54488e7_2 = MAKE_FUNCTION_FRAME(codeobj_012ce7f280c65f1944062f8bf54488e7, module_youtube_dl$extractor$amp, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_012ce7f280c65f1944062f8bf54488e7_2->m_type_description == NULL);
        frame_012ce7f280c65f1944062f8bf54488e7_2 = cache_frame_012ce7f280c65f1944062f8bf54488e7_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_012ce7f280c65f1944062f8bf54488e7_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_012ce7f280c65f1944062f8bf54488e7_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$amp$$$function_1__extract_feed_info();



        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$amp_15, const_str_plain__extract_feed_info, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_012ce7f280c65f1944062f8bf54488e7_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_012ce7f280c65f1944062f8bf54488e7_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_012ce7f280c65f1944062f8bf54488e7_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_012ce7f280c65f1944062f8bf54488e7_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_012ce7f280c65f1944062f8bf54488e7_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_012ce7f280c65f1944062f8bf54488e7_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if (frame_012ce7f280c65f1944062f8bf54488e7_2 == cache_frame_012ce7f280c65f1944062f8bf54488e7_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(frame_012ce7f280c65f1944062f8bf54488e7_2);
        }
        cache_frame_012ce7f280c65f1944062f8bf54488e7_2 = NULL;

        assertFrameObject(frame_012ce7f280c65f1944062f8bf54488e7_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_compexpr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$amp_15, const_str_plain___orig_bases__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_AMPIE;
            tmp_args_name_2 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_youtube_dl$extractor$amp_15;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_bc337b01d977fa77bf3bbee5bbb15f0e->m_frame.f_lineno = 15;
            tmp_assign_source_20 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_20;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_19 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_19);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_youtube_dl$extractor$amp_15);
        locals_youtube_dl$extractor$amp_15 = NULL;
        goto try_return_handler_3;
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

        Py_DECREF(locals_youtube_dl$extractor$amp_15);
        locals_youtube_dl$extractor$amp_15 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 15;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$amp, (Nuitka_StringObject *)const_str_plain_AMPIE, tmp_assign_source_19);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bc337b01d977fa77bf3bbee5bbb15f0e);
#endif
    popFrameStack();

    assertFrameObject(frame_bc337b01d977fa77bf3bbee5bbb15f0e);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bc337b01d977fa77bf3bbee5bbb15f0e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bc337b01d977fa77bf3bbee5bbb15f0e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bc337b01d977fa77bf3bbee5bbb15f0e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bc337b01d977fa77bf3bbee5bbb15f0e, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;

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


    return module_youtube_dl$extractor$amp;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
