/* Generated code for Python module 'youtube_dl.extractor.deezer'
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

/* The "_module_youtube_dl$extractor$deezer" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_youtube_dl$extractor$deezer;
PyDictObject *moduledict_youtube_dl$extractor$deezer;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_playlist_uploader;
static PyObject *const_str_plain_EXPLICIT_LYRICS;
static PyObject *const_tuple_str_plain_TITLE_tuple;
static PyObject *const_str_digest_278af271803cf9034c55c73313c2e62e;
static PyObject *const_str_digest_de5b823965fea12b128fe5e2494727f9;
extern PyObject *const_str_plain_age_limit;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_test;
static PyObject *const_str_plain_PARENT_USERNAME;
static PyObject *const_str_digest_1d5c8c48060fa8540f867955061655fb;
static PyObject *const_str_digest_ab782d5cd3bf7f9d4a63631249f855f3;
extern PyObject *const_str_plain___name__;
extern PyObject *const_tuple_str_plain_DURATION_tuple;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_tuple_str_plain_id_tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_dict_f95321192b139e241e1ec13397bf5b8f;
extern PyObject *const_str_plain__sort_formats;
extern PyObject *const_str_plain___file__;
extern PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_a_tuple;
static PyObject *const_tuple_str_plain_PARENT_USERNAME_tuple;
extern PyObject *const_str_plain_group;
static PyObject *const_str_digest_534952e6859be859a768d9e7eb85c528;
extern PyObject *const_str_plain_json;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_default;
static PyObject *const_str_plain_preview_video_url;
static PyObject *const_str_plain_ART_ID;
extern PyObject *const_str_plain_fatal;
extern PyObject *const_str_plain_webpage;
static PyObject *const_str_digest_2aa619239ef0a1dc7b98d879fe966e26;
extern PyObject *const_str_plain_id;
static PyObject *const_tuple_15ed7cf9b802cf787df85aecc90eba88_tuple;
static PyObject *const_str_digest_8c8e93f05b588b01cef78b9f9c569f88;
extern PyObject *const_int_neg_100;
static PyObject *const_str_digest_17b70046bba266ef0e1d38db88704c69;
static PyObject *const_str_plain_176747451;
extern PyObject *const_str_digest_ff5e3b1ae0d95ffe8b3d72657a27de19;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_duration;
static PyObject *const_str_plain_DATA;
static PyObject *const_str_digest_35ee2ed4ca4e1b9ae1f0cec78447be26;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_plain_report_warning;
static PyObject *const_str_digest_91e93f45106840a7760a3602d61cbfe3;
extern PyObject *const_int_pos_16;
extern PyObject *const_int_pos_30;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_preview;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_int_or_none;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_tuple_f9cd3b9b491cc44ec08e3f445cb108f2_tuple;
extern PyObject *const_str_plain__VALID_URL;
extern PyObject *const_str_plain_ext;
extern PyObject *const_tuple_str_plain_InfoExtractor_tuple;
extern PyObject *const_str_plain__download_webpage;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_format_id;
static PyObject *const_dict_582a28ae1bb8854ca0f12e41abf9d457;
static PyObject *const_str_plain_geoblocking_msg;
extern PyObject *const_str_plain__search_regex;
static PyObject *const_str_digest_621f84c6b0a839c5fd130381ab40c93b;
extern PyObject *const_str_plain_playlist_id;
static PyObject *const_str_plain_ART_NAME;
extern PyObject *const_str_plain_TITLE;
static PyObject *const_str_plain_ARTISTS;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_88d5684244d57b7859cdc6ecbde5fc0d_tuple;
static PyObject *const_str_digest_ca66bb8fb0688dd6dd5ec4c3fe12a1a4;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_data_json;
extern PyObject *const_str_plain_title;
extern PyObject *const_str_plain_thumbnail;
extern PyObject *const_str_plain_uploader;
extern PyObject *const_str_plain_mp3;
static PyObject *const_str_digest_9b7ee298bb6598f4017dc2d2d59519eb;
static PyObject *const_str_digest_8f26cb01d80372287b4383f15b976d56;
extern PyObject *const_str_plain__TEST;
static PyObject *const_str_plain_SNG_ID;
static PyObject *const_str_plain_MD5_ORIGIN;
extern PyObject *const_str_plain_DeezerPlaylistIE;
static PyObject *const_str_plain_Anonymous;
static PyObject *const_str_plain_playlist_thumbnail;
extern PyObject *const_str_plain_match;
extern PyObject *const_str_plain_expected;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_skip;
extern PyObject *const_str_plain__real_extract;
static PyObject *const_str_digest_68d06343bab3e718f74a10bcfa44956c;
extern PyObject *const_str_plain_formats;
static PyObject *const_str_digest_90fe7030cf4991b7ade3e41b176839e2;
static PyObject *const_str_plain_puid;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_artists;
extern PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
static PyObject *const_str_digest_62e28460b0ea9a695b7187b83b0c2142;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_preview_pattern;
extern PyObject *const_str_plain_preference;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_playlist_count;
extern PyObject *const_str_plain__html_search_regex;
static PyObject *const_str_digest_2689a131c0f6566de3234b483307c6f7;
static PyObject *const_str_plain_MEDIA_VERSION;
static PyObject *const_dict_c31a93fdc020ea978d1c9175cc46604c;
extern PyObject *const_str_plain_orderedSet;
extern PyObject *const_str_plain__type;
extern PyObject *const_str_plain__downloader;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_638513a71c402bf60ff39d57d67bab83;
extern PyObject *const_str_plain_DURATION;
static PyObject *const_tuple_str_digest_ab782d5cd3bf7f9d4a63631249f855f3_tuple;
extern PyObject *const_dict_5a4b43d9442068c8ed68fb42270f3fd3;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_InfoExtractor;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_playlist_title;
extern PyObject *const_str_plain_mobj;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_plain_params;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_replace;
static PyObject *const_tuple_str_plain_EXPLICIT_LYRICS_tuple;
extern PyObject *const_str_plain_1;
extern PyObject *const_str_plain_entries;
static PyObject *const_str_plain_SONGS;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_3952f89becca68531be326c3866cd2d7;
extern PyObject *const_dict_6dc2f89fb2b035a2c0a0ed28a753f1c8;
static PyObject *const_str_digest_100ac9066f2299633530e561a0bab2db;
static PyObject *const_str_digest_f3829c4a80d69e2419b26962fca40529;
extern PyObject *const_str_plain_ExtractorError;
extern PyObject *const_str_plain_loads;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_a36adad7fc0109fe6a6e588dc008cd76;
extern PyObject *const_str_plain_uploader_id;
static PyObject *const_str_plain_SNG_TITLE;
extern PyObject *const_str_plain_common;
static PyObject *const_str_digest_9e68bba1e9e530ac269978eabd0976c1;
extern PyObject *const_str_plain_playlist;
extern PyObject *const_str_plain_info_dict;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_EXPLICIT_LYRICS = UNSTREAM_STRING_ASCII(&constant_bin[ 1138088 ], 15, 1);
    const_tuple_str_plain_TITLE_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_TITLE_tuple, 0, const_str_plain_TITLE); Py_INCREF(const_str_plain_TITLE);
    const_str_digest_278af271803cf9034c55c73313c2e62e = UNSTREAM_STRING_ASCII(&constant_bin[ 1138103 ], 19, 0);
    const_str_digest_de5b823965fea12b128fe5e2494727f9 = UNSTREAM_STRING_ASCII(&constant_bin[ 1138122 ], 21, 0);
    const_str_plain_PARENT_USERNAME = UNSTREAM_STRING_ASCII(&constant_bin[ 1138143 ], 15, 1);
    const_str_digest_1d5c8c48060fa8540f867955061655fb = UNSTREAM_STRING_ASCII(&constant_bin[ 376167 ], 3, 0);
    const_str_digest_ab782d5cd3bf7f9d4a63631249f855f3 = UNSTREAM_STRING_ASCII(&constant_bin[ 1138158 ], 78, 0);
    const_tuple_str_plain_PARENT_USERNAME_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_PARENT_USERNAME_tuple, 0, const_str_plain_PARENT_USERNAME); Py_INCREF(const_str_plain_PARENT_USERNAME);
    const_str_digest_534952e6859be859a768d9e7eb85c528 = UNSTREAM_STRING_ASCII(&constant_bin[ 1138236 ], 36, 0);
    const_str_plain_preview_video_url = UNSTREAM_STRING_ASCII(&constant_bin[ 1138272 ], 17, 1);
    const_str_plain_ART_ID = UNSTREAM_STRING_ASCII(&constant_bin[ 1138289 ], 6, 1);
    const_str_digest_2aa619239ef0a1dc7b98d879fe966e26 = UNSTREAM_STRING_ASCII(&constant_bin[ 1138295 ], 5, 0);
    const_tuple_15ed7cf9b802cf787df85aecc90eba88_tuple = PyTuple_New(18);
    PyTuple_SET_ITEM(const_tuple_15ed7cf9b802cf787df85aecc90eba88_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_15ed7cf9b802cf787df85aecc90eba88_tuple, 1, const_str_plain_url); Py_INCREF(const_str_plain_url);
    PyTuple_SET_ITEM(const_tuple_15ed7cf9b802cf787df85aecc90eba88_tuple, 2, const_str_plain_mobj); Py_INCREF(const_str_plain_mobj);
    PyTuple_SET_ITEM(const_tuple_15ed7cf9b802cf787df85aecc90eba88_tuple, 3, const_str_plain_playlist_id); Py_INCREF(const_str_plain_playlist_id);
    PyTuple_SET_ITEM(const_tuple_15ed7cf9b802cf787df85aecc90eba88_tuple, 4, const_str_plain_webpage); Py_INCREF(const_str_plain_webpage);
    const_str_plain_geoblocking_msg = UNSTREAM_STRING_ASCII(&constant_bin[ 1138300 ], 15, 1);
    PyTuple_SET_ITEM(const_tuple_15ed7cf9b802cf787df85aecc90eba88_tuple, 5, const_str_plain_geoblocking_msg); Py_INCREF(const_str_plain_geoblocking_msg);
    PyTuple_SET_ITEM(const_tuple_15ed7cf9b802cf787df85aecc90eba88_tuple, 6, const_str_plain_data_json); Py_INCREF(const_str_plain_data_json);
    PyTuple_SET_ITEM(const_tuple_15ed7cf9b802cf787df85aecc90eba88_tuple, 7, const_str_plain_data); Py_INCREF(const_str_plain_data);
    PyTuple_SET_ITEM(const_tuple_15ed7cf9b802cf787df85aecc90eba88_tuple, 8, const_str_plain_playlist_title); Py_INCREF(const_str_plain_playlist_title);
    PyTuple_SET_ITEM(const_tuple_15ed7cf9b802cf787df85aecc90eba88_tuple, 9, const_str_plain_playlist_uploader); Py_INCREF(const_str_plain_playlist_uploader);
    const_str_plain_playlist_thumbnail = UNSTREAM_STRING_ASCII(&constant_bin[ 1138315 ], 18, 1);
    PyTuple_SET_ITEM(const_tuple_15ed7cf9b802cf787df85aecc90eba88_tuple, 10, const_str_plain_playlist_thumbnail); Py_INCREF(const_str_plain_playlist_thumbnail);
    const_str_plain_preview_pattern = UNSTREAM_STRING_ASCII(&constant_bin[ 1138333 ], 15, 1);
    PyTuple_SET_ITEM(const_tuple_15ed7cf9b802cf787df85aecc90eba88_tuple, 11, const_str_plain_preview_pattern); Py_INCREF(const_str_plain_preview_pattern);
    PyTuple_SET_ITEM(const_tuple_15ed7cf9b802cf787df85aecc90eba88_tuple, 12, const_str_plain_entries); Py_INCREF(const_str_plain_entries);
    PyTuple_SET_ITEM(const_tuple_15ed7cf9b802cf787df85aecc90eba88_tuple, 13, const_str_plain_s); Py_INCREF(const_str_plain_s);
    const_str_plain_puid = UNSTREAM_STRING_ASCII(&constant_bin[ 1138348 ], 4, 1);
    PyTuple_SET_ITEM(const_tuple_15ed7cf9b802cf787df85aecc90eba88_tuple, 14, const_str_plain_puid); Py_INCREF(const_str_plain_puid);
    PyTuple_SET_ITEM(const_tuple_15ed7cf9b802cf787df85aecc90eba88_tuple, 15, const_str_plain_preview_video_url); Py_INCREF(const_str_plain_preview_video_url);
    PyTuple_SET_ITEM(const_tuple_15ed7cf9b802cf787df85aecc90eba88_tuple, 16, const_str_plain_formats); Py_INCREF(const_str_plain_formats);
    PyTuple_SET_ITEM(const_tuple_15ed7cf9b802cf787df85aecc90eba88_tuple, 17, const_str_plain_artists); Py_INCREF(const_str_plain_artists);
    const_str_digest_8c8e93f05b588b01cef78b9f9c569f88 = UNSTREAM_STRING_ASCII(&constant_bin[ 1138352 ], 42, 0);
    const_str_digest_17b70046bba266ef0e1d38db88704c69 = UNSTREAM_STRING_ASCII(&constant_bin[ 61571 ], 3, 0);
    const_str_plain_176747451 = UNSTREAM_STRING_ASCII(&constant_bin[ 1138394 ], 9, 0);
    const_str_plain_DATA = UNSTREAM_STRING_ASCII(&constant_bin[ 89473 ], 4, 1);
    const_str_digest_35ee2ed4ca4e1b9ae1f0cec78447be26 = UNSTREAM_STRING_ASCII(&constant_bin[ 1138244 ], 27, 0);
    const_str_digest_91e93f45106840a7760a3602d61cbfe3 = UNSTREAM_STRING_ASCII(&constant_bin[ 1138403 ], 29, 0);
    const_tuple_f9cd3b9b491cc44ec08e3f445cb108f2_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_f9cd3b9b491cc44ec08e3f445cb108f2_tuple, 0, const_str_plain_ExtractorError); Py_INCREF(const_str_plain_ExtractorError);
    PyTuple_SET_ITEM(const_tuple_f9cd3b9b491cc44ec08e3f445cb108f2_tuple, 1, const_str_plain_int_or_none); Py_INCREF(const_str_plain_int_or_none);
    PyTuple_SET_ITEM(const_tuple_f9cd3b9b491cc44ec08e3f445cb108f2_tuple, 2, const_str_plain_orderedSet); Py_INCREF(const_str_plain_orderedSet);
    const_dict_582a28ae1bb8854ca0f12e41abf9d457 = _PyDict_NewPresized( 4 );
    const_str_digest_621f84c6b0a839c5fd130381ab40c93b = UNSTREAM_STRING_ASCII(&constant_bin[ 1138432 ], 40, 0);
    PyDict_SetItem(const_dict_582a28ae1bb8854ca0f12e41abf9d457, const_str_plain_url, const_str_digest_621f84c6b0a839c5fd130381ab40c93b);
    const_dict_c31a93fdc020ea978d1c9175cc46604c = _PyDict_NewPresized( 4 );
    PyDict_SetItem(const_dict_c31a93fdc020ea978d1c9175cc46604c, const_str_plain_id, const_str_plain_176747451);
    PyDict_SetItem(const_dict_c31a93fdc020ea978d1c9175cc46604c, const_str_plain_title, const_str_digest_2aa619239ef0a1dc7b98d879fe966e26);
    const_str_plain_Anonymous = UNSTREAM_STRING_ASCII(&constant_bin[ 1138472 ], 9, 1);
    PyDict_SetItem(const_dict_c31a93fdc020ea978d1c9175cc46604c, const_str_plain_uploader, const_str_plain_Anonymous);
    const_str_digest_8f26cb01d80372287b4383f15b976d56 = UNSTREAM_STRING_ASCII(&constant_bin[ 1138481 ], 58, 0);
    PyDict_SetItem(const_dict_c31a93fdc020ea978d1c9175cc46604c, const_str_plain_thumbnail, const_str_digest_8f26cb01d80372287b4383f15b976d56);
    assert(PyDict_Size(const_dict_c31a93fdc020ea978d1c9175cc46604c) == 4);
    PyDict_SetItem(const_dict_582a28ae1bb8854ca0f12e41abf9d457, const_str_plain_info_dict, const_dict_c31a93fdc020ea978d1c9175cc46604c);
    PyDict_SetItem(const_dict_582a28ae1bb8854ca0f12e41abf9d457, const_str_plain_playlist_count, const_int_pos_30);
    PyDict_SetItem(const_dict_582a28ae1bb8854ca0f12e41abf9d457, const_str_plain_skip, const_str_digest_de5b823965fea12b128fe5e2494727f9);
    assert(PyDict_Size(const_dict_582a28ae1bb8854ca0f12e41abf9d457) == 4);
    const_str_plain_ART_NAME = UNSTREAM_STRING_ASCII(&constant_bin[ 1138539 ], 8, 1);
    const_str_plain_ARTISTS = UNSTREAM_STRING_ASCII(&constant_bin[ 1138547 ], 7, 1);
    const_tuple_88d5684244d57b7859cdc6ecbde5fc0d_tuple = PyTuple_New(2);
    const_str_digest_a36adad7fc0109fe6a6e588dc008cd76 = UNSTREAM_STRING_ASCII(&constant_bin[ 1138554 ], 43, 0);
    PyTuple_SET_ITEM(const_tuple_88d5684244d57b7859cdc6ecbde5fc0d_tuple, 0, const_str_digest_a36adad7fc0109fe6a6e588dc008cd76); Py_INCREF(const_str_digest_a36adad7fc0109fe6a6e588dc008cd76);
    const_str_digest_2689a131c0f6566de3234b483307c6f7 = UNSTREAM_STRING_ASCII(&constant_bin[ 1138597 ], 40, 0);
    PyTuple_SET_ITEM(const_tuple_88d5684244d57b7859cdc6ecbde5fc0d_tuple, 1, const_str_digest_2689a131c0f6566de3234b483307c6f7); Py_INCREF(const_str_digest_2689a131c0f6566de3234b483307c6f7);
    const_str_digest_ca66bb8fb0688dd6dd5ec4c3fe12a1a4 = UNSTREAM_STRING_ASCII(&constant_bin[ 1138637 ], 18, 0);
    const_str_digest_9b7ee298bb6598f4017dc2d2d59519eb = UNSTREAM_STRING_ASCII(&constant_bin[ 1138655 ], 49, 0);
    const_str_plain_SNG_ID = UNSTREAM_STRING_ASCII(&constant_bin[ 1138704 ], 6, 1);
    const_str_plain_MD5_ORIGIN = UNSTREAM_STRING_ASCII(&constant_bin[ 1138710 ], 10, 1);
    const_str_digest_68d06343bab3e718f74a10bcfa44956c = UNSTREAM_STRING_ASCII(&constant_bin[ 1138720 ], 46, 0);
    const_str_digest_90fe7030cf4991b7ade3e41b176839e2 = UNSTREAM_STRING_ASCII(&constant_bin[ 1138655 ], 30, 0);
    const_str_digest_62e28460b0ea9a695b7187b83b0c2142 = UNSTREAM_STRING_ASCII(&constant_bin[ 376160 ], 3, 0);
    const_str_plain_MEDIA_VERSION = UNSTREAM_STRING_ASCII(&constant_bin[ 1138766 ], 13, 1);
    const_str_digest_638513a71c402bf60ff39d57d67bab83 = UNSTREAM_STRING_ASCII(&constant_bin[ 1138779 ], 54, 0);
    const_tuple_str_digest_ab782d5cd3bf7f9d4a63631249f855f3_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_ab782d5cd3bf7f9d4a63631249f855f3_tuple, 0, const_str_digest_ab782d5cd3bf7f9d4a63631249f855f3); Py_INCREF(const_str_digest_ab782d5cd3bf7f9d4a63631249f855f3);
    const_tuple_str_plain_EXPLICIT_LYRICS_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_EXPLICIT_LYRICS_tuple, 0, const_str_plain_EXPLICIT_LYRICS); Py_INCREF(const_str_plain_EXPLICIT_LYRICS);
    const_str_plain_SONGS = UNSTREAM_STRING_ASCII(&constant_bin[ 1138833 ], 5, 1);
    const_str_digest_3952f89becca68531be326c3866cd2d7 = UNSTREAM_STRING_ASCII(&constant_bin[ 1138838 ], 9, 0);
    const_str_digest_100ac9066f2299633530e561a0bab2db = UNSTREAM_STRING_ASCII(&constant_bin[ 1138847 ], 19, 0);
    const_str_digest_f3829c4a80d69e2419b26962fca40529 = UNSTREAM_STRING_ASCII(&constant_bin[ 1138866 ], 105, 0);
    const_str_plain_SNG_TITLE = UNSTREAM_STRING_ASCII(&constant_bin[ 1138971 ], 9, 1);
    const_str_digest_9e68bba1e9e530ac269978eabd0976c1 = UNSTREAM_STRING_ASCII(&constant_bin[ 1138980 ], 15, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_youtube_dl$extractor$deezer(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a468f7bf8a97b03fad17f74a7870a176;
static PyCodeObject *codeobj_4d8eda2702eb7c6cc587f35416c918f9;
static PyCodeObject *codeobj_82cb302e5a3bf2741722d3f0d0c57483;
static PyCodeObject *codeobj_db0e389af919a6e6d7280b94e7b3b966;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_f3829c4a80d69e2419b26962fca40529;
    codeobj_a468f7bf8a97b03fad17f74a7870a176 = MAKE_CODEOBJECT(module_filename_obj, 73, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_angle_genexpr, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_a_tuple, 1, 0, 0);
    codeobj_4d8eda2702eb7c6cc587f35416c918f9 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_digest_534952e6859be859a768d9e7eb85c528, const_tuple_empty, 0, 0, 0);
    codeobj_82cb302e5a3bf2741722d3f0d0c57483 = MAKE_CODEOBJECT(module_filename_obj, 14, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain_DeezerPlaylistIE, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_db0e389af919a6e6d7280b94e7b3b966 = MAKE_CODEOBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain__real_extract, const_tuple_15ed7cf9b802cf787df85aecc90eba88_tuple, 2, 0, 0);
}

// The module function declarations.
static PyObject *youtube_dl$extractor$deezer$$$function_1__real_extract$$$genexpr_1_genexpr_maker(void);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$deezer$$$function_1__real_extract();


// The module function definitions.
static PyObject *impl_youtube_dl$extractor$deezer$$$function_1__real_extract(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *var_mobj = NULL;
    PyObject *var_playlist_id = NULL;
    PyObject *var_webpage = NULL;
    PyObject *var_geoblocking_msg = NULL;
    PyObject *var_data_json = NULL;
    PyObject *var_data = NULL;
    PyObject *var_playlist_title = NULL;
    PyObject *var_playlist_uploader = NULL;
    PyObject *var_playlist_thumbnail = NULL;
    PyObject *var_preview_pattern = NULL;
    PyObject *var_entries = NULL;
    PyObject *var_s = NULL;
    PyObject *var_puid = NULL;
    PyObject *var_preview_video_url = NULL;
    PyObject *var_formats = NULL;
    PyObject *var_artists = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_db0e389af919a6e6d7280b94e7b3b966;
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
    static struct Nuitka_FrameObject *cache_frame_db0e389af919a6e6d7280b94e7b3b966 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_db0e389af919a6e6d7280b94e7b3b966)) {
        Py_XDECREF(cache_frame_db0e389af919a6e6d7280b94e7b3b966);

#if _DEBUG_REFCOUNTS
        if (cache_frame_db0e389af919a6e6d7280b94e7b3b966 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_db0e389af919a6e6d7280b94e7b3b966 = MAKE_FUNCTION_FRAME(codeobj_db0e389af919a6e6d7280b94e7b3b966, module_youtube_dl$extractor$deezer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_db0e389af919a6e6d7280b94e7b3b966->m_type_description == NULL);
    frame_db0e389af919a6e6d7280b94e7b3b966 = cache_frame_db0e389af919a6e6d7280b94e7b3b966;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_db0e389af919a6e6d7280b94e7b3b966);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_db0e389af919a6e6d7280b94e7b3b966) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        tmp_compexpr_left_1 = const_str_plain_test;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain__downloader);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_params);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooooooooooooo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain__downloader);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 30;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_report_warning, &PyTuple_GET_ITEM(const_tuple_str_digest_ab782d5cd3bf7f9d4a63631249f855f3_tuple, 0));

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain_re);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2114 ], 24, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 32;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain_match);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_5 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, const_str_plain__VALID_URL);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 32;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_url);
        tmp_args_element_name_2 = par_url;
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 32;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mobj == NULL);
        var_mobj = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_mobj);
        tmp_called_instance_2 = var_mobj;
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 33;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_group, &PyTuple_GET_ITEM(const_tuple_str_plain_id_tuple, 0));

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_playlist_id == NULL);
        var_playlist_id = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_3 = par_url;
        CHECK_OBJECT(var_playlist_id);
        tmp_args_element_name_4 = var_playlist_id;
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_3, const_str_plain__download_webpage, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_webpage == NULL);
        var_webpage = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_6 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, const_str_plain__html_search_regex);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = const_str_digest_91e93f45106840a7760a3602d61cbfe3;
        tmp_args_name_1 = PyTuple_New(3);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_webpage);
        tmp_tuple_element_1 = var_webpage;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_str_digest_100ac9066f2299633530e561a0bab2db;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 2, tmp_tuple_element_1);
        tmp_kw_name_1 = PyDict_Copy(const_dict_6dc2f89fb2b035a2c0a0ed28a753f1c8);
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 36;
        tmp_assign_source_4 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_geoblocking_msg == NULL);
        var_geoblocking_msg = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_geoblocking_msg);
        tmp_compexpr_left_2 = var_geoblocking_msg;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain_ExtractorError);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtractorError);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27135 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 40;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_2;
        tmp_left_name_1 = const_str_digest_9e68bba1e9e530ac269978eabd0976c1;
        CHECK_OBJECT(var_geoblocking_msg);
        tmp_right_name_1 = var_geoblocking_msg;
        tmp_tuple_element_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_2);
        tmp_kw_name_2 = PyDict_Copy(const_dict_5a4b43d9442068c8ed68fb42270f3fd3);
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 40;
        tmp_raise_type_1 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 40;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        tmp_args_element_name_5 = const_tuple_88d5684244d57b7859cdc6ecbde5fc0d_tuple;
        CHECK_OBJECT(var_webpage);
        tmp_args_element_name_6 = var_webpage;
        tmp_args_element_name_7 = const_str_digest_3952f89becca68531be326c3866cd2d7;
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_4, const_str_plain__search_regex, call_args);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_data_json == NULL);
        var_data_json = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain_json);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_json);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 16783 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_3;
        CHECK_OBJECT(var_data_json);
        tmp_args_element_name_8 = var_data_json;
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = {tmp_args_element_name_8};
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_loads, call_args);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        CHECK_OBJECT(var_data);
        tmp_called_instance_7 = var_data;
        tmp_call_arg_element_1 = const_str_plain_DATA;
        tmp_call_arg_element_2 = PyDict_New();
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_called_instance_6 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_7, const_str_plain_get, call_args);
        }

        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 49;
        tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_TITLE_tuple, 0));

        Py_DECREF(tmp_called_instance_6);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_playlist_title == NULL);
        var_playlist_title = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_arg_element_3;
        PyObject *tmp_call_arg_element_4;
        CHECK_OBJECT(var_data);
        tmp_called_instance_9 = var_data;
        tmp_call_arg_element_3 = const_str_plain_DATA;
        tmp_call_arg_element_4 = PyDict_New();
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 50;
        {
            PyObject *call_args[] = {tmp_call_arg_element_3, tmp_call_arg_element_4};
            tmp_called_instance_8 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_9, const_str_plain_get, call_args);
        }

        Py_DECREF(tmp_call_arg_element_4);
        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 50;
        tmp_assign_source_8 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_8, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_PARENT_USERNAME_tuple, 0));

        Py_DECREF(tmp_called_instance_8);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_playlist_uploader == NULL);
        var_playlist_uploader = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        CHECK_OBJECT(par_self);
        tmp_called_instance_10 = par_self;
        tmp_args_element_name_9 = const_str_digest_68d06343bab3e718f74a10bcfa44956c;
        CHECK_OBJECT(var_webpage);
        tmp_args_element_name_10 = var_webpage;
        tmp_args_element_name_11 = const_str_digest_ca66bb8fb0688dd6dd5ec4c3fe12a1a4;
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11};
            tmp_assign_source_9 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_10, const_str_plain__search_regex, call_args);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_playlist_thumbnail == NULL);
        var_playlist_thumbnail = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_3;
        CHECK_OBJECT(par_self);
        tmp_expression_name_7 = par_self;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, const_str_plain__search_regex);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = const_str_digest_8c8e93f05b588b01cef78b9f9c569f88;
        tmp_args_name_3 = PyTuple_New(3);
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_args_name_3, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_webpage);
        tmp_tuple_element_3 = var_webpage;
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_args_name_3, 1, tmp_tuple_element_3);
        tmp_tuple_element_3 = const_str_digest_278af271803cf9034c55c73313c2e62e;
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_args_name_3, 2, tmp_tuple_element_3);
        tmp_kw_name_3 = PyDict_Copy(const_dict_f95321192b139e241e1ec13397bf5b8f);
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 55;
        tmp_assign_source_10 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_name_3);
        Py_DECREF(tmp_kw_name_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_preview_pattern == NULL);
        var_preview_pattern = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = PyList_New(0);
        assert(var_entries == NULL);
        var_entries = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(var_data);
        tmp_expression_name_9 = var_data;
        tmp_subscript_name_1 = const_str_plain_SONGS;
        tmp_expression_name_8 = LOOKUP_SUBSCRIPT(tmp_expression_name_9, tmp_subscript_name_1);
        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_str_plain_data;
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_8, tmp_subscript_name_2);
        Py_DECREF(tmp_expression_name_8);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_12;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_13 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooo";
                exception_lineno = 59;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_14 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_s;
            var_s = tmp_assign_source_14;
            Py_INCREF(var_s);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT(var_s);
        tmp_expression_name_10 = var_s;
        tmp_subscript_name_3 = const_str_plain_MD5_ORIGIN;
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tmp_expression_name_10, tmp_subscript_name_3);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_puid;
            var_puid = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT(var_preview_pattern);
        tmp_expression_name_12 = var_preview_pattern;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, const_str_plain_replace);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_12 = const_str_digest_17b70046bba266ef0e1d38db88704c69;
        CHECK_OBJECT(var_puid);
        tmp_expression_name_13 = var_puid;
        tmp_subscript_name_4 = const_int_0;
        tmp_args_element_name_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_13, tmp_subscript_name_4, 0);
        if (tmp_args_element_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 62;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = {tmp_args_element_name_12, tmp_args_element_name_13};
            tmp_called_instance_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_6, call_args);
        }

        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_13);
        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_14 = const_str_digest_62e28460b0ea9a695b7187b83b0c2142;
        CHECK_OBJECT(var_puid);
        tmp_args_element_name_15 = var_puid;
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = {tmp_args_element_name_14, tmp_args_element_name_15};
            tmp_expression_name_11 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_11, const_str_plain_replace, call_args);
        }

        Py_DECREF(tmp_called_instance_11);
        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, const_str_plain_replace);
        Py_DECREF(tmp_expression_name_11);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_16 = const_str_digest_1d5c8c48060fa8540f867955061655fb;
        CHECK_OBJECT(var_s);
        tmp_expression_name_14 = var_s;
        tmp_subscript_name_5 = const_str_plain_MEDIA_VERSION;
        tmp_args_element_name_17 = LOOKUP_SUBSCRIPT(tmp_expression_name_14, tmp_subscript_name_5);
        if (tmp_args_element_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 64;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = {tmp_args_element_name_16, tmp_args_element_name_17};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
        }

        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_17);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_preview_video_url;
            var_preview_video_url = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_list_element_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_dict_key_1 = const_str_plain_format_id;
        tmp_dict_value_1 = const_str_plain_preview;
        tmp_list_element_1 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_url;
        CHECK_OBJECT(var_preview_video_url);
        tmp_dict_value_2 = var_preview_video_url;
        tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_preference;
        tmp_dict_value_3 = const_int_neg_100;
        tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_ext;
        tmp_dict_value_4 = const_str_plain_mp3;
        tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_assign_source_17 = PyList_New(1);
        PyList_SET_ITEM(tmp_assign_source_17, 0, tmp_list_element_1);
        {
            PyObject *old = var_formats;
            var_formats = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_18;
        CHECK_OBJECT(par_self);
        tmp_called_instance_12 = par_self;
        CHECK_OBJECT(var_formats);
        tmp_args_element_name_18 = var_formats;
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = {tmp_args_element_name_18};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_12, const_str_plain__sort_formats, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_20;
        tmp_expression_name_15 = const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, const_str_plain_join);
        assert(!(tmp_called_name_7 == NULL));
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain_orderedSet);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_orderedSet);
        }

        if (tmp_mvar_value_4 == NULL) {
            Py_DECREF(tmp_called_name_7);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27280 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 73;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_8 = tmp_mvar_value_4;
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_expression_name_16;
            PyObject *tmp_subscript_name_6;
            CHECK_OBJECT(var_s);
            tmp_expression_name_16 = var_s;
            tmp_subscript_name_6 = const_str_plain_ARTISTS;
            tmp_iter_arg_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_16, tmp_subscript_name_6);
            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_19 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_genexpr_1__$0;
                tmp_genexpr_1__$0 = tmp_assign_source_19;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        tmp_args_element_name_20 = youtube_dl$extractor$deezer$$$function_1__real_extract$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_20)->m_closure[0] = PyCell_NEW0(tmp_genexpr_1__$0);


        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_1;
        // End of try:
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;

        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 73;
        tmp_args_element_name_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_20);
        Py_DECREF(tmp_args_element_name_20);
        if (tmp_args_element_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 73;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 72;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_19);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_19);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_artists;
            var_artists = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_1;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        CHECK_OBJECT(var_entries);
        tmp_expression_name_17 = var_entries;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, const_str_plain_append);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_dict_key_5 = const_str_plain_id;
        CHECK_OBJECT(var_s);
        tmp_expression_name_18 = var_s;
        tmp_subscript_name_7 = const_str_plain_SNG_ID;
        tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_name_18, tmp_subscript_name_7);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 75;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_21 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_21, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = const_str_plain_duration;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain_int_or_none);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int_or_none);
        }

        if (tmp_mvar_value_5 == NULL) {
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_21);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27635 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_10 = tmp_mvar_value_5;
        CHECK_OBJECT(var_s);
        tmp_called_instance_13 = var_s;
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 76;
        tmp_args_element_name_22 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_13, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_DURATION_tuple, 0));

        if (tmp_args_element_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_21);

            exception_lineno = 76;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 76;
        tmp_dict_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_22);
        Py_DECREF(tmp_args_element_name_22);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_21);

            exception_lineno = 76;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_21, tmp_dict_key_6, tmp_dict_value_6);
        Py_DECREF(tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = const_str_plain_title;
        tmp_left_name_2 = const_str_digest_ff5e3b1ae0d95ffe8b3d72657a27de19;
        CHECK_OBJECT(var_artists);
        tmp_tuple_element_4 = var_artists;
        tmp_right_name_2 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_4);
        PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_4);
        CHECK_OBJECT(var_s);
        tmp_expression_name_19 = var_s;
        tmp_subscript_name_8 = const_str_plain_SNG_TITLE;
        tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_19, tmp_subscript_name_8);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_21);
            Py_DECREF(tmp_right_name_2);

            exception_lineno = 77;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_4);
        tmp_dict_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_21);

            exception_lineno = 77;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_21, tmp_dict_key_7, tmp_dict_value_7);
        Py_DECREF(tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = const_str_plain_uploader;
        CHECK_OBJECT(var_s);
        tmp_expression_name_20 = var_s;
        tmp_subscript_name_9 = const_str_plain_ART_NAME;
        tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_name_20, tmp_subscript_name_9);
        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_21);

            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_21, tmp_dict_key_8, tmp_dict_value_8);
        Py_DECREF(tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = const_str_plain_uploader_id;
        CHECK_OBJECT(var_s);
        tmp_expression_name_21 = var_s;
        tmp_subscript_name_10 = const_str_plain_ART_ID;
        tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_name_21, tmp_subscript_name_10);
        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_21);

            exception_lineno = 79;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_21, tmp_dict_key_9, tmp_dict_value_9);
        Py_DECREF(tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = const_str_plain_age_limit;
        CHECK_OBJECT(var_s);
        tmp_called_instance_14 = var_s;
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 80;
        tmp_compexpr_left_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_14, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_EXPLICIT_LYRICS_tuple, 0));

        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_21);

            exception_lineno = 80;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_3 = const_str_plain_1;
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_left_3);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_21);

            exception_lineno = 80;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_21);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            exception_lineno = 80;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_dict_value_10 = const_int_pos_16;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_dict_value_10 = const_int_0;
        condexpr_end_1:;
        tmp_res = PyDict_SetItem(tmp_args_element_name_21, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = const_str_plain_formats;
        CHECK_OBJECT(var_formats);
        tmp_dict_value_11 = var_formats;
        tmp_res = PyDict_SetItem(tmp_args_element_name_21, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        frame_db0e389af919a6e6d7280b94e7b3b966->m_frame.f_lineno = 74;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_21);
        Py_DECREF(tmp_called_name_9);
        Py_DECREF(tmp_args_element_name_21);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 59;
        type_description_1 = "oooooooooooooooooo";
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

#if 0
    RESTORE_FRAME_EXCEPTION(frame_db0e389af919a6e6d7280b94e7b3b966);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_db0e389af919a6e6d7280b94e7b3b966);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_db0e389af919a6e6d7280b94e7b3b966, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_db0e389af919a6e6d7280b94e7b3b966->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_db0e389af919a6e6d7280b94e7b3b966, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_db0e389af919a6e6d7280b94e7b3b966,
        type_description_1,
        par_self,
        par_url,
        var_mobj,
        var_playlist_id,
        var_webpage,
        var_geoblocking_msg,
        var_data_json,
        var_data,
        var_playlist_title,
        var_playlist_uploader,
        var_playlist_thumbnail,
        var_preview_pattern,
        var_entries,
        var_s,
        var_puid,
        var_preview_video_url,
        var_formats,
        var_artists
    );


    // Release cached frame.
    if (frame_db0e389af919a6e6d7280b94e7b3b966 == cache_frame_db0e389af919a6e6d7280b94e7b3b966) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_db0e389af919a6e6d7280b94e7b3b966);
    }
    cache_frame_db0e389af919a6e6d7280b94e7b3b966 = NULL;

    assertFrameObject(frame_db0e389af919a6e6d7280b94e7b3b966);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        tmp_dict_key_12 = const_str_plain__type;
        tmp_dict_value_12 = const_str_plain_playlist;
        tmp_return_value = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = const_str_plain_id;
        CHECK_OBJECT(var_playlist_id);
        tmp_dict_value_13 = var_playlist_id;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = const_str_plain_title;
        CHECK_OBJECT(var_playlist_title);
        tmp_dict_value_14 = var_playlist_title;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = const_str_plain_uploader;
        CHECK_OBJECT(var_playlist_uploader);
        tmp_dict_value_15 = var_playlist_uploader;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_16 = const_str_plain_thumbnail;
        CHECK_OBJECT(var_playlist_thumbnail);
        tmp_dict_value_16 = var_playlist_thumbnail;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = const_str_plain_entries;
        CHECK_OBJECT(var_entries);
        tmp_dict_value_17 = var_entries;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_mobj);
    Py_DECREF(var_mobj);
    var_mobj = NULL;

    CHECK_OBJECT(var_playlist_id);
    Py_DECREF(var_playlist_id);
    var_playlist_id = NULL;

    CHECK_OBJECT(var_webpage);
    Py_DECREF(var_webpage);
    var_webpage = NULL;

    CHECK_OBJECT(var_geoblocking_msg);
    Py_DECREF(var_geoblocking_msg);
    var_geoblocking_msg = NULL;

    CHECK_OBJECT(var_data_json);
    Py_DECREF(var_data_json);
    var_data_json = NULL;

    CHECK_OBJECT(var_data);
    Py_DECREF(var_data);
    var_data = NULL;

    CHECK_OBJECT(var_playlist_title);
    Py_DECREF(var_playlist_title);
    var_playlist_title = NULL;

    CHECK_OBJECT(var_playlist_uploader);
    Py_DECREF(var_playlist_uploader);
    var_playlist_uploader = NULL;

    CHECK_OBJECT(var_playlist_thumbnail);
    Py_DECREF(var_playlist_thumbnail);
    var_playlist_thumbnail = NULL;

    CHECK_OBJECT(var_preview_pattern);
    Py_DECREF(var_preview_pattern);
    var_preview_pattern = NULL;

    CHECK_OBJECT(var_entries);
    Py_DECREF(var_entries);
    var_entries = NULL;

    Py_XDECREF(var_s);
    var_s = NULL;

    Py_XDECREF(var_puid);
    var_puid = NULL;

    Py_XDECREF(var_preview_video_url);
    var_preview_video_url = NULL;

    Py_XDECREF(var_formats);
    var_formats = NULL;

    Py_XDECREF(var_artists);
    var_artists = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_mobj);
    var_mobj = NULL;

    Py_XDECREF(var_playlist_id);
    var_playlist_id = NULL;

    Py_XDECREF(var_webpage);
    var_webpage = NULL;

    Py_XDECREF(var_geoblocking_msg);
    var_geoblocking_msg = NULL;

    Py_XDECREF(var_data_json);
    var_data_json = NULL;

    Py_XDECREF(var_data);
    var_data = NULL;

    Py_XDECREF(var_playlist_title);
    var_playlist_title = NULL;

    Py_XDECREF(var_playlist_uploader);
    var_playlist_uploader = NULL;

    Py_XDECREF(var_playlist_thumbnail);
    var_playlist_thumbnail = NULL;

    Py_XDECREF(var_preview_pattern);
    var_preview_pattern = NULL;

    Py_XDECREF(var_entries);
    var_entries = NULL;

    Py_XDECREF(var_s);
    var_s = NULL;

    Py_XDECREF(var_puid);
    var_puid = NULL;

    Py_XDECREF(var_preview_video_url);
    var_preview_video_url = NULL;

    Py_XDECREF(var_formats);
    var_formats = NULL;

    Py_XDECREF(var_artists);
    var_artists = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

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



struct youtube_dl$extractor$deezer$$$function_1__real_extract$$$genexpr_1_genexpr_locals {
    PyObject *var_a;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *youtube_dl$extractor$deezer$$$function_1__real_extract$$$genexpr_1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check( (PyObject *)generator ));

    // Heap access if used.
    struct youtube_dl$extractor$deezer$$$function_1__real_extract$$$genexpr_1_genexpr_locals *generator_heap = (struct youtube_dl$extractor$deezer$$$function_1__real_extract$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_a = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_a468f7bf8a97b03fad17f74a7870a176, module_youtube_dl$extractor$deezer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(PyCell_GET(generator->m_closure[0]));
        tmp_next_source_1 = PyCell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 73;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_a;
            generator_heap->var_a = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_a);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_a);
        tmp_expression_name_2 = generator_heap->var_a;
        tmp_subscript_name_1 = const_str_plain_ART_NAME;
        tmp_expression_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 73;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_name_2, sizeof(PyObject *), &tmp_subscript_name_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_name_2, sizeof(PyObject *), &tmp_subscript_name_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 73;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 73;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_a
        );


        // Release cached frame.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(generator->m_frame);
        }
        cache_m_frame = NULL;

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_a);
    generator_heap->var_a = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF(generator_heap->var_a);
    generator_heap->var_a = NULL;



    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *youtube_dl$extractor$deezer$$$function_1__real_extract$$$genexpr_1_genexpr_maker(void) {
    return Nuitka_Generator_New(
        youtube_dl$extractor$deezer$$$function_1__real_extract$$$genexpr_1_genexpr_context,
        module_youtube_dl$extractor$deezer,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_9b7ee298bb6598f4017dc2d2d59519eb,
#endif
        codeobj_a468f7bf8a97b03fad17f74a7870a176,
        1,
        sizeof(struct youtube_dl$extractor$deezer$$$function_1__real_extract$$$genexpr_1_genexpr_locals)
    );
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$deezer$$$function_1__real_extract() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$deezer$$$function_1__real_extract,
        const_str_plain__real_extract,
#if PYTHON_VERSION >= 300
        const_str_digest_90fe7030cf4991b7ade3e41b176839e2,
#endif
        codeobj_db0e389af919a6e6d7280b94e7b3b966,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$deezer,
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

function_impl_code functable_youtube_dl$extractor$deezer[] = {
    impl_youtube_dl$extractor$deezer$$$function_1__real_extract,
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

    function_impl_code *current = functable_youtube_dl$extractor$deezer;
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

    if (offset > sizeof(functable_youtube_dl$extractor$deezer) || offset < 0) {
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
        functable_youtube_dl$extractor$deezer[offset],
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
        module_youtube_dl$extractor$deezer,
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
PyObject *modulecode_youtube_dl$extractor$deezer(PyObject *module) {
    module_youtube_dl$extractor$deezer = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_youtube_dl$extractor$deezer;
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
    PRINT_STRING("youtube_dl.extractor.deezer: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("youtube_dl.extractor.deezer: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("youtube_dl.extractor.deezer: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in inityoutube_dl$extractor$deezer\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_youtube_dl$extractor$deezer = MODULE_DICT(module_youtube_dl$extractor$deezer);

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
        moduledict_youtube_dl$extractor$deezer,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$extractor$deezer,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$extractor$deezer,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$extractor$deezer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$extractor$deezer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_youtube_dl$extractor$deezer);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_4d8eda2702eb7c6cc587f35416c918f9;
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
    PyObject *locals_youtube_dl$extractor$deezer_14 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_82cb302e5a3bf2741722d3f0d0c57483_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_82cb302e5a3bf2741722d3f0d0c57483_2 = NULL;
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
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_f3829c4a80d69e2419b26962fca40529;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_4d8eda2702eb7c6cc587f35416c918f9 = MAKE_MODULE_FRAME(codeobj_4d8eda2702eb7c6cc587f35416c918f9, module_youtube_dl$extractor$deezer);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_4d8eda2702eb7c6cc587f35416c918f9);
    assert(Py_REFCNT(frame_4d8eda2702eb7c6cc587f35416c918f9) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_f3829c4a80d69e2419b26962fca40529;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        frame_4d8eda2702eb7c6cc587f35416c918f9->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
           tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_youtube_dl$extractor$deezer,
                const_str_plain_unicode_literals,
                const_int_0
            );
        } else {
           tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_unicode_literals);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_json;
        tmp_globals_name_1 = (PyObject *)moduledict_youtube_dl$extractor$deezer;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_4d8eda2702eb7c6cc587f35416c918f9->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain_json, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_re;
        tmp_globals_name_2 = (PyObject *)moduledict_youtube_dl$extractor$deezer;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_4d8eda2702eb7c6cc587f35416c918f9->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_common;
        tmp_globals_name_3 = (PyObject *)moduledict_youtube_dl$extractor$deezer;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_InfoExtractor_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_4d8eda2702eb7c6cc587f35416c918f9->m_frame.f_lineno = 6;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
           tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_youtube_dl$extractor$deezer,
                const_str_plain_InfoExtractor,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_InfoExtractor);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain_InfoExtractor, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_utils;
        tmp_globals_name_4 = (PyObject *)moduledict_youtube_dl$extractor$deezer;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_f9cd3b9b491cc44ec08e3f445cb108f2_tuple;
        tmp_level_name_4 = const_int_pos_2;
        frame_4d8eda2702eb7c6cc587f35416c918f9->m_frame.f_lineno = 7;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_youtube_dl$extractor$deezer,
                const_str_plain_ExtractorError,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_ExtractorError);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain_ExtractorError, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_youtube_dl$extractor$deezer,
                const_str_plain_int_or_none,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_int_or_none);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain_int_or_none, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_youtube_dl$extractor$deezer,
                const_str_plain_orderedSet,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_orderedSet);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain_orderedSet, tmp_assign_source_11);
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain_InfoExtractor);

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

            exception_lineno = 14;

            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_assign_source_12 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_12, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_13 = impl___internal__$$$function_4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
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


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

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


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

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
        tmp_assign_source_15 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_15;
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


        exception_lineno = 14;

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
        PyObject *tmp_assign_source_16;
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


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = const_str_plain_DeezerPlaylistIE;
        tmp_args_name_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_4d8eda2702eb7c6cc587f35416c918f9->m_frame.f_lineno = 14;
        tmp_assign_source_16 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_16;
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


            exception_lineno = 14;

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

            exception_lineno = 14;

            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_3);
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 14;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_17;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_youtube_dl$extractor$deezer_14 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_35ee2ed4ca4e1b9ae1f0cec78447be26;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$deezer_14, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_DeezerPlaylistIE;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$deezer_14, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_82cb302e5a3bf2741722d3f0d0c57483_2)) {
            Py_XDECREF(cache_frame_82cb302e5a3bf2741722d3f0d0c57483_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_82cb302e5a3bf2741722d3f0d0c57483_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_82cb302e5a3bf2741722d3f0d0c57483_2 = MAKE_FUNCTION_FRAME(codeobj_82cb302e5a3bf2741722d3f0d0c57483, module_youtube_dl$extractor$deezer, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_82cb302e5a3bf2741722d3f0d0c57483_2->m_type_description == NULL);
        frame_82cb302e5a3bf2741722d3f0d0c57483_2 = cache_frame_82cb302e5a3bf2741722d3f0d0c57483_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_82cb302e5a3bf2741722d3f0d0c57483_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_82cb302e5a3bf2741722d3f0d0c57483_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = const_str_digest_638513a71c402bf60ff39d57d67bab83;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$deezer_14, const_str_plain__VALID_URL, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = DEEP_COPY(const_dict_582a28ae1bb8854ca0f12e41abf9d457);
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$deezer_14, const_str_plain__TEST, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$deezer$$$function_1__real_extract();



        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$deezer_14, const_str_plain__real_extract, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_82cb302e5a3bf2741722d3f0d0c57483_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_82cb302e5a3bf2741722d3f0d0c57483_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_82cb302e5a3bf2741722d3f0d0c57483_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_82cb302e5a3bf2741722d3f0d0c57483_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_82cb302e5a3bf2741722d3f0d0c57483_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_82cb302e5a3bf2741722d3f0d0c57483_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if (frame_82cb302e5a3bf2741722d3f0d0c57483_2 == cache_frame_82cb302e5a3bf2741722d3f0d0c57483_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(frame_82cb302e5a3bf2741722d3f0d0c57483_2);
        }
        cache_frame_82cb302e5a3bf2741722d3f0d0c57483_2 = NULL;

        assertFrameObject(frame_82cb302e5a3bf2741722d3f0d0c57483_2);

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


                exception_lineno = 14;

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
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$deezer_14, const_str_plain___orig_bases__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_DeezerPlaylistIE;
            tmp_args_name_2 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_youtube_dl$extractor$deezer_14;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_4d8eda2702eb7c6cc587f35416c918f9->m_frame.f_lineno = 14;
            tmp_assign_source_19 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_19;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_18 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_18);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_youtube_dl$extractor$deezer_14);
        locals_youtube_dl$extractor$deezer_14 = NULL;
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

        Py_DECREF(locals_youtube_dl$extractor$deezer_14);
        locals_youtube_dl$extractor$deezer_14 = NULL;
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
        exception_lineno = 14;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$deezer, (Nuitka_StringObject *)const_str_plain_DeezerPlaylistIE, tmp_assign_source_18);
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
    RESTORE_FRAME_EXCEPTION(frame_4d8eda2702eb7c6cc587f35416c918f9);
#endif
    popFrameStack();

    assertFrameObject(frame_4d8eda2702eb7c6cc587f35416c918f9);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4d8eda2702eb7c6cc587f35416c918f9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4d8eda2702eb7c6cc587f35416c918f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4d8eda2702eb7c6cc587f35416c918f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4d8eda2702eb7c6cc587f35416c918f9, exception_lineno);
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


    return module_youtube_dl$extractor$deezer;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
