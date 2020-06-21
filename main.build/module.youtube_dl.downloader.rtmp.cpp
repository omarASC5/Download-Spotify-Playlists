/* Generated code for Python module 'youtube_dl.downloader.rtmp'
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

/* The "_module_youtube_dl$downloader$rtmp" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_youtube_dl$downloader$rtmp;
PyDictObject *moduledict_youtube_dl$downloader$rtmp;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_str_plain_flash_version_tuple;
extern PyObject *const_str_digest_c74b8fc24b688b8525cf2e0b3a7db16d;
static PyObject *const_str_digest_d27d8ebf718f6f4aa13c0754e749fdfb;
extern PyObject *const_str_plain_rtmp_real_time;
static PyObject *const_tuple_str_digest_592e216c7376d7d3896695100014bec7_tuple;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain__hook_progress;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_test;
extern PyObject *const_str_plain_to_screen;
static PyObject *const_str_plain_resume_percent;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_try_rename;
extern PyObject *const_str_plain_downloading;
static PyObject *const_bytes_chr_13;
extern PyObject *const_str_plain_eta;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_compat_str;
extern PyObject *const_str_digest_103511b2d15f4b9dd33ac43d29126685;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_group;
extern PyObject *const_str_plain_args;
static PyObject *const_list_str_digest_c0f26da8d5d91071ff203b7c7b36a338_list;
static PyObject *const_str_digest_a04eae9dec4c3ccb80c8b6ca44fe3ce9;
static PyObject *const_str_digest_86676082f7fc4886fdd30a2bd1396528;
static PyObject *const_tuple_str_digest_2e4dfbca2cdf29340738a7f4af192d6c_tuple;
extern PyObject *const_str_plain_total_bytes_estimate;
static PyObject *const_tuple_str_plain_rtmp_protocol_tuple;
extern PyObject *const_str_plain_RtmpFD;
static PyObject *const_str_plain_proc;
extern PyObject *const_str_plain_a;
static PyObject *const_list_bytes_chr_13_bytes_chr_10_list;
extern PyObject *const_str_plain__debug_cmd;
extern PyObject *const_str_plain_os;
static PyObject *const_str_digest_3b699e71bc69ea337dcf2d227e07d11c;
extern PyObject *const_str_plain_elapsed;
extern PyObject *const_str_plain_report_error;
extern PyObject *const_tuple_str_plain_continuedl_true_tuple;
static PyObject *const_str_digest_ff5dec7a86e3e3a1caed92ee76728543;
extern PyObject *const_str_plain_is_live;
extern PyObject *const_str_plain_sleep;
extern PyObject *const_str_plain_data_len;
extern PyObject *const_int_pos_1024;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_plain_start;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain_PIPE;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain_Popen;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_total_bytes;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_time;
static PyObject *const_str_digest_c0f26da8d5d91071ff203b7c7b36a338;
static PyObject *const_list_str_digest_8d59ec5d0c8183565418d3338842ee7d_list;
static PyObject *const_str_plain_cursor_in_new_line;
extern PyObject *const_tuple_str_plain_test_false_tuple;
extern PyObject *const_str_plain_status;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_play_path;
static PyObject *const_tuple_str_digest_50411c7a8133bf0482177e4a275cfbb4_tuple;
extern PyObject *const_str_plain_continuedl;
static PyObject *const_str_digest_68f8b24bd67fac796ede595fb331da1e;
static PyObject *const_str_digest_592e216c7376d7d3896695100014bec7;
extern PyObject *const_str_plain_rtmpdump_version;
extern PyObject *const_str_plain_player_url;
extern PyObject *const_str_plain_path;
extern PyObject *const_tuple_str_plain_play_path_tuple;
extern PyObject *const_str_digest_8d9a7968bdcf97bf89ecd9cc70ce5a60;
extern PyObject *const_tuple_str_plain_page_url_tuple;
extern PyObject *const_str_plain_downloaded_bytes;
static PyObject *const_list_str_digest_70d71d8185661d7dc1f9114ff3f49291_str_plain_1_list;
extern PyObject *const_str_plain_time_now;
static PyObject *const_tuple_str_plain_no_resume_false_tuple;
extern PyObject *const_str_plain_wait;
extern PyObject *const_str_plain_line;
extern PyObject *const_str_plain_subprocess;
extern PyObject *const_str_plain_flash_version;
extern PyObject *const_str_digest_e82553f663df8dab605e0971ec523cc1;
extern PyObject *const_tuple_str_newline_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_4eddc8dbabe34ca58915a4c5f173f46f;
static PyObject *const_str_digest_50411c7a8133bf0482177e4a275cfbb4;
static PyObject *const_str_digest_6984ecf82ee346a980379309a892d16f;
extern PyObject *const_str_plain_stderr;
extern PyObject *const_tuple_str_plain_verbose_false_tuple;
static PyObject *const_str_digest_70d71d8185661d7dc1f9114ff3f49291;
extern PyObject *const_tuple_str_plain_is_live_tuple;
static PyObject *const_list_str_digest_4e4a9664bf4f3f3682c520ad2ee742d1_list;
static PyObject *const_tuple_12ea1f003236ae93b797fcd487843c82_tuple;
static PyObject *const_str_digest_cdfafb0577d67221938717e2a5aa6efd;
static PyObject *const_tuple_da98f21499c8748b65ea704528ae45d6_tuple;
extern PyObject *const_str_plain_percent;
extern PyObject *const_str_plain_returncode;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_verbose;
static PyObject *const_str_digest_73567074a2b202b9dcc688d30c50d278;
extern PyObject *const_tuple_str_empty_tuple;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_plain_FileDownloader;
extern PyObject *const_str_plain_char;
extern PyObject *const_tuple_str_plain_rtmp_live_false_tuple;
extern PyObject *const_str_plain_calc_speed;
static PyObject *const_str_digest_8bcbd8db10da641dee7454aeab18b1bc;
extern PyObject *const_float_5_0;
extern PyObject *const_str_plain_tc_url;
extern PyObject *const_str_plain_rtmpdump;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_digest_ce06e31f613ed5832661ebc50f6f9612_tuple;
static PyObject *const_str_digest_d675c1001a384895f2e7099304b1e491;
extern PyObject *const_tuple_int_pos_2_tuple;
static PyObject *const_str_digest_3c4ac29844f1863aa0310a751d83b281;
extern PyObject *const_str_plain_rtmp_conn;
extern PyObject *const_str_plain_search;
static PyObject *const_dict_be9c7f7b6fd926e30d3fce08913b005b;
extern PyObject *const_str_plain_calc_eta;
extern PyObject *const_str_plain_origin;
extern PyObject *const_tuple_str_plain_rtmp_conn_tuple;
extern PyObject *const_bytes_chr_10;
extern PyObject *const_tuple_float_5_0_tuple;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_digest_ff84610118178f8c4061c05c505dd2cb;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_str_plain_real_download;
extern PyObject *const_str_plain_no_resume;
extern PyObject *const_str_plain_to_stderr;
static PyObject *const_str_digest_2e4dfbca2cdf29340738a7f4af192d6c;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_digest_4e4a9664bf4f3f3682c520ad2ee742d1;
extern PyObject *const_tuple_str_plain_player_url_tuple;
extern PyObject *const_str_plain_app;
static PyObject *const_list_str_digest_86676082f7fc4886fdd30a2bd1396528_list;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_mobj;
static PyObject *const_str_digest_ce06e31f613ed5832661ebc50f6f9612;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_run_rtmpdump;
extern PyObject *const_str_plain_encodeFilename;
extern PyObject *const_tuple_str_plain_app_tuple;
extern PyObject *const_str_plain_filename;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_tuple_str_plain_tc_url_tuple;
extern PyObject *const_str_plain_params;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_str_plain_rtmp_real_time_false_tuple;
extern PyObject *const_tuple_str_plain_ascii_str_plain_replace_tuple;
extern PyObject *const_str_plain_tmpfilename;
extern PyObject *const_str_plain_temp_name;
extern PyObject *const_tuple_str_plain_compat_str_tuple;
extern PyObject *const_str_plain_exe;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_1;
extern PyObject *const_str_plain_check_executable;
extern PyObject *const_str_newline;
extern PyObject *const_str_plain_getsize;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_digest_e064ce4a29271a3565d38aa56993a1f4;
extern PyObject *const_str_plain_finished;
static PyObject *const_str_digest_40f19e742a84b4a9d774ed78df09d7dc;
static PyObject *const_str_digest_39ed484318283066546eda0a8e6df402;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_rtmp_protocol;
static PyObject *const_str_digest_da75dc9d4f4a3d0b0220873e49f9e7ef;
static PyObject *const_list_str_digest_73567074a2b202b9dcc688d30c50d278_str_plain_1_list;
extern PyObject *const_tuple_str_plain_a_tuple;
static PyObject *const_str_plain_resume_downloaded_data_len;
extern PyObject *const_list_str_digest_e82553f663df8dab605e0971ec523cc1_list;
static PyObject *const_str_digest_8d59ec5d0c8183565418d3338842ee7d;
static PyObject *const_str_plain_downloaded_data_len;
static PyObject *const_str_digest_1dc2236f36f30c653fa6d1e22a8633a7;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_proc_stderr_closed;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_compat;
extern PyObject *const_tuple_str_plain_FileDownloader_tuple;
extern PyObject *const_str_plain_report_destination;
extern PyObject *const_str_plain_page_url;
extern PyObject *const_str_plain_ascii;
static PyObject *const_tuple_int_pos_2_int_pos_1_tuple;
static PyObject *const_str_digest_7deece9000233777c26a1eeebccb3540;
static PyObject *const_str_digest_ae903a8eefb5ef5a5abd01809153e46a;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_speed;
extern PyObject *const_str_plain_common;
static PyObject *const_tuple_3462f28e9988f7d78689440a357b6eed_tuple;
extern PyObject *const_str_plain_rtmp_live;
extern PyObject *const_int_pos_100;
extern PyObject *const_str_plain_get_exe_version;
extern PyObject *const_str_plain_encodeArgument;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_d27d8ebf718f6f4aa13c0754e749fdfb = UNSTREAM_STRING_ASCII(&constant_bin[ 822126 ], 6, 0);
    const_tuple_str_digest_592e216c7376d7d3896695100014bec7_tuple = PyTuple_New(1);
    const_str_digest_592e216c7376d7d3896695100014bec7 = UNSTREAM_STRING_ASCII(&constant_bin[ 822132 ], 87, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_592e216c7376d7d3896695100014bec7_tuple, 0, const_str_digest_592e216c7376d7d3896695100014bec7); Py_INCREF(const_str_digest_592e216c7376d7d3896695100014bec7);
    const_str_plain_resume_percent = UNSTREAM_STRING_ASCII(&constant_bin[ 822219 ], 14, 1);
    const_bytes_chr_13 = UNSTREAM_BYTES(&constant_bin[ 62013 ], 1);
    const_list_str_digest_c0f26da8d5d91071ff203b7c7b36a338_list = PyList_New(1);
    const_str_digest_c0f26da8d5d91071ff203b7c7b36a338 = UNSTREAM_STRING_ASCII(&constant_bin[ 822233 ], 10, 0);
    PyList_SET_ITEM(const_list_str_digest_c0f26da8d5d91071ff203b7c7b36a338_list, 0, const_str_digest_c0f26da8d5d91071ff203b7c7b36a338); Py_INCREF(const_str_digest_c0f26da8d5d91071ff203b7c7b36a338);
    const_str_digest_a04eae9dec4c3ccb80c8b6ca44fe3ce9 = UNSTREAM_STRING_ASCII(&constant_bin[ 822243 ], 28, 0);
    const_str_digest_86676082f7fc4886fdd30a2bd1396528 = UNSTREAM_STRING_ASCII(&constant_bin[ 822271 ], 6, 0);
    const_tuple_str_digest_2e4dfbca2cdf29340738a7f4af192d6c_tuple = PyTuple_New(1);
    const_str_digest_2e4dfbca2cdf29340738a7f4af192d6c = UNSTREAM_STRING_ASCII(&constant_bin[ 822277 ], 44, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_2e4dfbca2cdf29340738a7f4af192d6c_tuple, 0, const_str_digest_2e4dfbca2cdf29340738a7f4af192d6c); Py_INCREF(const_str_digest_2e4dfbca2cdf29340738a7f4af192d6c);
    const_tuple_str_plain_rtmp_protocol_tuple = PyTuple_New(1);
    const_str_plain_rtmp_protocol = UNSTREAM_STRING_ASCII(&constant_bin[ 822321 ], 13, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_rtmp_protocol_tuple, 0, const_str_plain_rtmp_protocol); Py_INCREF(const_str_plain_rtmp_protocol);
    const_str_plain_proc = UNSTREAM_STRING_ASCII(&constant_bin[ 25503 ], 4, 1);
    const_list_bytes_chr_13_bytes_chr_10_list = PyList_New(2);
    PyList_SET_ITEM(const_list_bytes_chr_13_bytes_chr_10_list, 0, const_bytes_chr_13); Py_INCREF(const_bytes_chr_13);
    PyList_SET_ITEM(const_list_bytes_chr_13_bytes_chr_10_list, 1, const_bytes_chr_10); Py_INCREF(const_bytes_chr_10);
    const_str_digest_3b699e71bc69ea337dcf2d227e07d11c = UNSTREAM_STRING_ASCII(&constant_bin[ 822334 ], 10, 0);
    const_str_digest_ff5dec7a86e3e3a1caed92ee76728543 = UNSTREAM_STRING_ASCII(&constant_bin[ 822344 ], 9, 0);
    const_list_str_digest_8d59ec5d0c8183565418d3338842ee7d_list = PyList_New(1);
    const_str_digest_8d59ec5d0c8183565418d3338842ee7d = UNSTREAM_STRING_ASCII(&constant_bin[ 822353 ], 8, 0);
    PyList_SET_ITEM(const_list_str_digest_8d59ec5d0c8183565418d3338842ee7d_list, 0, const_str_digest_8d59ec5d0c8183565418d3338842ee7d); Py_INCREF(const_str_digest_8d59ec5d0c8183565418d3338842ee7d);
    const_str_plain_cursor_in_new_line = UNSTREAM_STRING_ASCII(&constant_bin[ 822361 ], 18, 1);
    const_tuple_str_digest_50411c7a8133bf0482177e4a275cfbb4_tuple = PyTuple_New(1);
    const_str_digest_50411c7a8133bf0482177e4a275cfbb4 = UNSTREAM_STRING_ASCII(&constant_bin[ 822379 ], 31, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_50411c7a8133bf0482177e4a275cfbb4_tuple, 0, const_str_digest_50411c7a8133bf0482177e4a275cfbb4); Py_INCREF(const_str_digest_50411c7a8133bf0482177e4a275cfbb4);
    const_str_digest_68f8b24bd67fac796ede595fb331da1e = UNSTREAM_STRING_ASCII(&constant_bin[ 822410 ], 8, 0);
    const_list_str_digest_70d71d8185661d7dc1f9114ff3f49291_str_plain_1_list = PyList_New(2);
    const_str_digest_70d71d8185661d7dc1f9114ff3f49291 = UNSTREAM_STRING_ASCII(&constant_bin[ 822418 ], 6, 0);
    PyList_SET_ITEM(const_list_str_digest_70d71d8185661d7dc1f9114ff3f49291_str_plain_1_list, 0, const_str_digest_70d71d8185661d7dc1f9114ff3f49291); Py_INCREF(const_str_digest_70d71d8185661d7dc1f9114ff3f49291);
    PyList_SET_ITEM(const_list_str_digest_70d71d8185661d7dc1f9114ff3f49291_str_plain_1_list, 1, const_str_plain_1); Py_INCREF(const_str_plain_1);
    const_tuple_str_plain_no_resume_false_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_no_resume_false_tuple, 0, const_str_plain_no_resume); Py_INCREF(const_str_plain_no_resume);
    PyTuple_SET_ITEM(const_tuple_str_plain_no_resume_false_tuple, 1, Py_False); Py_INCREF(Py_False);
    const_str_digest_4eddc8dbabe34ca58915a4c5f173f46f = UNSTREAM_STRING_ASCII(&constant_bin[ 822424 ], 10, 0);
    const_str_digest_6984ecf82ee346a980379309a892d16f = UNSTREAM_STRING_ASCII(&constant_bin[ 822434 ], 69, 0);
    const_list_str_digest_4e4a9664bf4f3f3682c520ad2ee742d1_list = PyList_New(1);
    PyList_SET_ITEM(const_list_str_digest_4e4a9664bf4f3f3682c520ad2ee742d1_list, 0, const_str_digest_4e4a9664bf4f3f3682c520ad2ee742d1); Py_INCREF(const_str_digest_4e4a9664bf4f3f3682c520ad2ee742d1);
    const_tuple_12ea1f003236ae93b797fcd487843c82_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_12ea1f003236ae93b797fcd487843c82_tuple, 0, const_str_plain_check_executable); Py_INCREF(const_str_plain_check_executable);
    PyTuple_SET_ITEM(const_tuple_12ea1f003236ae93b797fcd487843c82_tuple, 1, const_str_plain_encodeFilename); Py_INCREF(const_str_plain_encodeFilename);
    PyTuple_SET_ITEM(const_tuple_12ea1f003236ae93b797fcd487843c82_tuple, 2, const_str_plain_encodeArgument); Py_INCREF(const_str_plain_encodeArgument);
    PyTuple_SET_ITEM(const_tuple_12ea1f003236ae93b797fcd487843c82_tuple, 3, const_str_plain_get_exe_version); Py_INCREF(const_str_plain_get_exe_version);
    const_str_digest_cdfafb0577d67221938717e2a5aa6efd = UNSTREAM_STRING_ASCII(&constant_bin[ 822503 ], 26, 0);
    const_tuple_da98f21499c8748b65ea704528ae45d6_tuple = PyTuple_New(19);
    PyTuple_SET_ITEM(const_tuple_da98f21499c8748b65ea704528ae45d6_tuple, 0, const_str_plain_args); Py_INCREF(const_str_plain_args);
    PyTuple_SET_ITEM(const_tuple_da98f21499c8748b65ea704528ae45d6_tuple, 1, const_str_plain_start); Py_INCREF(const_str_plain_start);
    PyTuple_SET_ITEM(const_tuple_da98f21499c8748b65ea704528ae45d6_tuple, 2, const_str_plain_resume_percent); Py_INCREF(const_str_plain_resume_percent);
    const_str_plain_resume_downloaded_data_len = UNSTREAM_STRING_ASCII(&constant_bin[ 822529 ], 26, 1);
    PyTuple_SET_ITEM(const_tuple_da98f21499c8748b65ea704528ae45d6_tuple, 3, const_str_plain_resume_downloaded_data_len); Py_INCREF(const_str_plain_resume_downloaded_data_len);
    PyTuple_SET_ITEM(const_tuple_da98f21499c8748b65ea704528ae45d6_tuple, 4, const_str_plain_proc); Py_INCREF(const_str_plain_proc);
    PyTuple_SET_ITEM(const_tuple_da98f21499c8748b65ea704528ae45d6_tuple, 5, const_str_plain_cursor_in_new_line); Py_INCREF(const_str_plain_cursor_in_new_line);
    const_str_plain_proc_stderr_closed = UNSTREAM_STRING_ASCII(&constant_bin[ 822555 ], 18, 1);
    PyTuple_SET_ITEM(const_tuple_da98f21499c8748b65ea704528ae45d6_tuple, 6, const_str_plain_proc_stderr_closed); Py_INCREF(const_str_plain_proc_stderr_closed);
    PyTuple_SET_ITEM(const_tuple_da98f21499c8748b65ea704528ae45d6_tuple, 7, const_str_plain_line); Py_INCREF(const_str_plain_line);
    PyTuple_SET_ITEM(const_tuple_da98f21499c8748b65ea704528ae45d6_tuple, 8, const_str_plain_char); Py_INCREF(const_str_plain_char);
    PyTuple_SET_ITEM(const_tuple_da98f21499c8748b65ea704528ae45d6_tuple, 9, const_str_plain_mobj); Py_INCREF(const_str_plain_mobj);
    const_str_plain_downloaded_data_len = UNSTREAM_STRING_ASCII(&constant_bin[ 822536 ], 19, 1);
    PyTuple_SET_ITEM(const_tuple_da98f21499c8748b65ea704528ae45d6_tuple, 10, const_str_plain_downloaded_data_len); Py_INCREF(const_str_plain_downloaded_data_len);
    PyTuple_SET_ITEM(const_tuple_da98f21499c8748b65ea704528ae45d6_tuple, 11, const_str_plain_percent); Py_INCREF(const_str_plain_percent);
    PyTuple_SET_ITEM(const_tuple_da98f21499c8748b65ea704528ae45d6_tuple, 12, const_str_plain_time_now); Py_INCREF(const_str_plain_time_now);
    PyTuple_SET_ITEM(const_tuple_da98f21499c8748b65ea704528ae45d6_tuple, 13, const_str_plain_eta); Py_INCREF(const_str_plain_eta);
    PyTuple_SET_ITEM(const_tuple_da98f21499c8748b65ea704528ae45d6_tuple, 14, const_str_plain_speed); Py_INCREF(const_str_plain_speed);
    PyTuple_SET_ITEM(const_tuple_da98f21499c8748b65ea704528ae45d6_tuple, 15, const_str_plain_data_len); Py_INCREF(const_str_plain_data_len);
    PyTuple_SET_ITEM(const_tuple_da98f21499c8748b65ea704528ae45d6_tuple, 16, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_da98f21499c8748b65ea704528ae45d6_tuple, 17, const_str_plain_tmpfilename); Py_INCREF(const_str_plain_tmpfilename);
    PyTuple_SET_ITEM(const_tuple_da98f21499c8748b65ea704528ae45d6_tuple, 18, const_str_plain_filename); Py_INCREF(const_str_plain_filename);
    const_str_digest_73567074a2b202b9dcc688d30c50d278 = UNSTREAM_STRING_ASCII(&constant_bin[ 822573 ], 6, 0);
    const_str_digest_8bcbd8db10da641dee7454aeab18b1bc = UNSTREAM_STRING_ASCII(&constant_bin[ 822579 ], 35, 0);
    const_tuple_str_digest_ce06e31f613ed5832661ebc50f6f9612_tuple = PyTuple_New(1);
    const_str_digest_ce06e31f613ed5832661ebc50f6f9612 = UNSTREAM_STRING_ASCII(&constant_bin[ 822614 ], 74, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_ce06e31f613ed5832661ebc50f6f9612_tuple, 0, const_str_digest_ce06e31f613ed5832661ebc50f6f9612); Py_INCREF(const_str_digest_ce06e31f613ed5832661ebc50f6f9612);
    const_str_digest_d675c1001a384895f2e7099304b1e491 = UNSTREAM_STRING_ASCII(&constant_bin[ 822688 ], 10, 0);
    const_str_digest_3c4ac29844f1863aa0310a751d83b281 = UNSTREAM_STRING_ASCII(&constant_bin[ 822132 ], 11, 0);
    const_dict_be9c7f7b6fd926e30d3fce08913b005b = _PyDict_NewPresized( 1 );
    PyDict_SetItem(const_dict_be9c7f7b6fd926e30d3fce08913b005b, const_str_plain_exe, const_str_plain_rtmpdump);
    assert(PyDict_Size(const_dict_be9c7f7b6fd926e30d3fce08913b005b) == 1);
    const_str_digest_ff84610118178f8c4061c05c505dd2cb = UNSTREAM_STRING_ASCII(&constant_bin[ 822434 ], 44, 0);
    const_list_str_digest_86676082f7fc4886fdd30a2bd1396528_list = PyList_New(1);
    PyList_SET_ITEM(const_list_str_digest_86676082f7fc4886fdd30a2bd1396528_list, 0, const_str_digest_86676082f7fc4886fdd30a2bd1396528); Py_INCREF(const_str_digest_86676082f7fc4886fdd30a2bd1396528);
    const_str_plain_run_rtmpdump = UNSTREAM_STRING_ASCII(&constant_bin[ 822698 ], 12, 1);
    const_tuple_str_plain_rtmp_real_time_false_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_rtmp_real_time_false_tuple, 0, const_str_plain_rtmp_real_time); Py_INCREF(const_str_plain_rtmp_real_time);
    PyTuple_SET_ITEM(const_tuple_str_plain_rtmp_real_time_false_tuple, 1, Py_False); Py_INCREF(Py_False);
    const_str_digest_e064ce4a29271a3565d38aa56993a1f4 = UNSTREAM_STRING_ASCII(&constant_bin[ 822710 ], 42, 0);
    const_str_digest_40f19e742a84b4a9d774ed78df09d7dc = UNSTREAM_STRING_ASCII(&constant_bin[ 822752 ], 30, 0);
    const_str_digest_39ed484318283066546eda0a8e6df402 = UNSTREAM_STRING_ASCII(&constant_bin[ 822710 ], 20, 0);
    const_str_digest_da75dc9d4f4a3d0b0220873e49f9e7ef = UNSTREAM_STRING_ASCII(&constant_bin[ 822782 ], 5, 0);
    const_list_str_digest_73567074a2b202b9dcc688d30c50d278_str_plain_1_list = PyList_New(2);
    PyList_SET_ITEM(const_list_str_digest_73567074a2b202b9dcc688d30c50d278_str_plain_1_list, 0, const_str_digest_73567074a2b202b9dcc688d30c50d278); Py_INCREF(const_str_digest_73567074a2b202b9dcc688d30c50d278);
    PyList_SET_ITEM(const_list_str_digest_73567074a2b202b9dcc688d30c50d278_str_plain_1_list, 1, const_str_plain_1); Py_INCREF(const_str_plain_1);
    const_str_digest_1dc2236f36f30c653fa6d1e22a8633a7 = UNSTREAM_STRING_ASCII(&constant_bin[ 822787 ], 104, 0);
    const_tuple_int_pos_2_int_pos_1_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_int_pos_2_int_pos_1_tuple, 0, const_int_pos_2); Py_INCREF(const_int_pos_2);
    PyTuple_SET_ITEM(const_tuple_int_pos_2_int_pos_1_tuple, 1, const_int_pos_1); Py_INCREF(const_int_pos_1);
    const_str_digest_7deece9000233777c26a1eeebccb3540 = UNSTREAM_STRING_ASCII(&constant_bin[ 822891 ], 34, 0);
    const_str_digest_ae903a8eefb5ef5a5abd01809153e46a = UNSTREAM_STRING_ASCII(&constant_bin[ 822925 ], 7, 0);
    const_tuple_3462f28e9988f7d78689440a357b6eed_tuple = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 822932 ], 306);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_youtube_dl$downloader$rtmp(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_eb8aee52d3fa079adfcf21b526d0b132;
static PyCodeObject *codeobj_1445a00c2d4f874060de944c36a3ba97;
static PyCodeObject *codeobj_c5713f6e64cb9c54b251e0a1f3533134;
static PyCodeObject *codeobj_98efc4595d1157b1ef160dae4e637a36;
static PyCodeObject *codeobj_b6d030258f8346854f33fe89a5ab7c12;
static PyCodeObject *codeobj_d9484f7f23e4bb29f41fb85b2f39ba16;
static PyCodeObject *codeobj_99a5d0108b0d26db1b7768f228aadd8d;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_1dc2236f36f30c653fa6d1e22a8633a7;
    codeobj_eb8aee52d3fa079adfcf21b526d0b132 = MAKE_CODEOBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_angle_listcomp, const_tuple_str_plain_a_tuple, 1, 0, 0);
    codeobj_1445a00c2d4f874060de944c36a3ba97 = MAKE_CODEOBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_angle_listcomp, const_tuple_str_plain_a_tuple, 1, 0, 0);
    codeobj_c5713f6e64cb9c54b251e0a1f3533134 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_digest_8bcbd8db10da641dee7454aeab18b1bc, const_tuple_empty, 0, 0, 0);
    codeobj_98efc4595d1157b1ef160dae4e637a36 = MAKE_CODEOBJECT(module_filename_obj, 23, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain_RtmpFD, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_b6d030258f8346854f33fe89a5ab7c12 = MAKE_CODEOBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain_real_download, const_tuple_3462f28e9988f7d78689440a357b6eed_tuple, 3, 0, 0);
    codeobj_d9484f7f23e4bb29f41fb85b2f39ba16 = MAKE_CODEOBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain_rtmpdump_version, const_tuple_empty, 0, 0, 0);
    codeobj_99a5d0108b0d26db1b7768f228aadd8d = MAKE_CODEOBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS, const_str_plain_run_rtmpdump, const_tuple_da98f21499c8748b65ea704528ae45d6_tuple, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_youtube_dl$downloader$rtmp$$$function_1_rtmpdump_version();


static PyObject *MAKE_FUNCTION_youtube_dl$downloader$rtmp$$$function_2_real_download();


static PyObject *MAKE_FUNCTION_youtube_dl$downloader$rtmp$$$function_2_real_download$$$function_1_run_rtmpdump();


// The module function definitions.
static PyObject *impl_youtube_dl$downloader$rtmp$$$function_1_rtmpdump_version(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_d9484f7f23e4bb29f41fb85b2f39ba16;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d9484f7f23e4bb29f41fb85b2f39ba16 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d9484f7f23e4bb29f41fb85b2f39ba16)) {
        Py_XDECREF(cache_frame_d9484f7f23e4bb29f41fb85b2f39ba16);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d9484f7f23e4bb29f41fb85b2f39ba16 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d9484f7f23e4bb29f41fb85b2f39ba16 = MAKE_FUNCTION_FRAME(codeobj_d9484f7f23e4bb29f41fb85b2f39ba16, module_youtube_dl$downloader$rtmp, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d9484f7f23e4bb29f41fb85b2f39ba16->m_type_description == NULL);
    frame_d9484f7f23e4bb29f41fb85b2f39ba16 = cache_frame_d9484f7f23e4bb29f41fb85b2f39ba16;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d9484f7f23e4bb29f41fb85b2f39ba16);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d9484f7f23e4bb29f41fb85b2f39ba16) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        PyObject *tmp_call_arg_element_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_get_exe_version);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_get_exe_version);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 33265 ], 37, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_call_arg_element_1 = const_str_plain_rtmpdump;
        tmp_call_arg_element_2 = LIST_COPY(const_list_str_digest_4e4a9664bf4f3f3682c520ad2ee742d1_list);
        tmp_call_arg_element_3 = const_str_digest_7deece9000233777c26a1eeebccb3540;
        frame_d9484f7f23e4bb29f41fb85b2f39ba16->m_frame.f_lineno = 19;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d9484f7f23e4bb29f41fb85b2f39ba16);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d9484f7f23e4bb29f41fb85b2f39ba16);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d9484f7f23e4bb29f41fb85b2f39ba16);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d9484f7f23e4bb29f41fb85b2f39ba16, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d9484f7f23e4bb29f41fb85b2f39ba16->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d9484f7f23e4bb29f41fb85b2f39ba16, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d9484f7f23e4bb29f41fb85b2f39ba16,
        type_description_1
    );


    // Release cached frame.
    if (frame_d9484f7f23e4bb29f41fb85b2f39ba16 == cache_frame_d9484f7f23e4bb29f41fb85b2f39ba16) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_d9484f7f23e4bb29f41fb85b2f39ba16);
    }
    cache_frame_d9484f7f23e4bb29f41fb85b2f39ba16 = NULL;

    assertFrameObject(frame_d9484f7f23e4bb29f41fb85b2f39ba16);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

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


static PyObject *impl_youtube_dl$downloader$rtmp$$$function_2_real_download(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1(python_pars[0]);
    struct Nuitka_CellObject *par_filename = PyCell_NEW1(python_pars[1]);
    PyObject *par_info_dict = python_pars[2];
    PyObject *var_run_rtmpdump = NULL;
    PyObject *var_url = NULL;
    PyObject *var_player_url = NULL;
    PyObject *var_page_url = NULL;
    PyObject *var_app = NULL;
    PyObject *var_play_path = NULL;
    PyObject *var_tc_url = NULL;
    PyObject *var_flash_version = NULL;
    PyObject *var_live = NULL;
    PyObject *var_conn = NULL;
    PyObject *var_protocol = NULL;
    PyObject *var_real_time = NULL;
    PyObject *var_no_resume = NULL;
    PyObject *var_continue_dl = NULL;
    struct Nuitka_CellObject *var_tmpfilename = PyCell_EMPTY();
    PyObject *var_test = NULL;
    PyObject *var_basic_args = NULL;
    PyObject *var_entry = NULL;
    PyObject *var_args = NULL;
    PyObject *var_started = NULL;
    PyObject *var_retval = NULL;
    PyObject *var_prevsize = NULL;
    PyObject *var_cursize = NULL;
    PyObject *var_fsize = NULL;
    PyObject *outline_0_var_a = NULL;
    PyObject *outline_1_var_a = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_b6d030258f8346854f33fe89a5ab7c12;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_FrameObject *frame_eb8aee52d3fa079adfcf21b526d0b132_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_eb8aee52d3fa079adfcf21b526d0b132_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_FrameObject *frame_1445a00c2d4f874060de944c36a3ba97_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_1445a00c2d4f874060de944c36a3ba97_3 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_b6d030258f8346854f33fe89a5ab7c12 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_FUNCTION_youtube_dl$downloader$rtmp$$$function_2_real_download$$$function_1_run_rtmpdump();

        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] = par_filename;
        Py_INCREF(((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0]);
        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[1] = par_self;
        Py_INCREF(((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[1]);
        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[2] = var_tmpfilename;
        Py_INCREF(((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[2]);


        assert(var_run_rtmpdump == NULL);
        var_run_rtmpdump = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_b6d030258f8346854f33fe89a5ab7c12)) {
        Py_XDECREF(cache_frame_b6d030258f8346854f33fe89a5ab7c12);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b6d030258f8346854f33fe89a5ab7c12 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b6d030258f8346854f33fe89a5ab7c12 = MAKE_FUNCTION_FRAME(codeobj_b6d030258f8346854f33fe89a5ab7c12, module_youtube_dl$downloader$rtmp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b6d030258f8346854f33fe89a5ab7c12->m_type_description == NULL);
    frame_b6d030258f8346854f33fe89a5ab7c12 = cache_frame_b6d030258f8346854f33fe89a5ab7c12;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b6d030258f8346854f33fe89a5ab7c12);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b6d030258f8346854f33fe89a5ab7c12) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_info_dict);
        tmp_expression_name_1 = par_info_dict;
        tmp_subscript_name_1 = const_str_plain_url;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_url == NULL);
        var_url = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_info_dict);
        tmp_called_instance_1 = par_info_dict;
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 99;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_player_url_tuple, 0));

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_player_url == NULL);
        var_player_url = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_info_dict);
        tmp_called_instance_2 = par_info_dict;
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 100;
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_page_url_tuple, 0));

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_page_url == NULL);
        var_page_url = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_info_dict);
        tmp_called_instance_3 = par_info_dict;
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 101;
        tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_app_tuple, 0));

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_app == NULL);
        var_app = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(par_info_dict);
        tmp_called_instance_4 = par_info_dict;
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 102;
        tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_play_path_tuple, 0));

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_play_path == NULL);
        var_play_path = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(par_info_dict);
        tmp_called_instance_5 = par_info_dict;
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 103;
        tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_tc_url_tuple, 0));

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tc_url == NULL);
        var_tc_url = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(par_info_dict);
        tmp_called_instance_6 = par_info_dict;
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 104;
        tmp_assign_source_8 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_flash_version_tuple, 0));

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_flash_version == NULL);
        var_flash_version = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_7;
        CHECK_OBJECT(par_info_dict);
        tmp_called_instance_7 = par_info_dict;
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 105;
        tmp_assign_source_9 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_7, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_rtmp_live_false_tuple, 0));

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_live == NULL);
        var_live = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_8;
        CHECK_OBJECT(par_info_dict);
        tmp_called_instance_8 = par_info_dict;
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 106;
        tmp_assign_source_10 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_8, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_rtmp_conn_tuple, 0));

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_conn == NULL);
        var_conn = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_9;
        CHECK_OBJECT(par_info_dict);
        tmp_called_instance_9 = par_info_dict;
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 107;
        tmp_assign_source_11 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_9, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_rtmp_protocol_tuple, 0));

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_protocol == NULL);
        var_protocol = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_10;
        CHECK_OBJECT(par_info_dict);
        tmp_called_instance_10 = par_info_dict;
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 108;
        tmp_assign_source_12 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_10, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_rtmp_real_time_false_tuple, 0));

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_real_time == NULL);
        var_real_time = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_11;
        CHECK_OBJECT(par_info_dict);
        tmp_called_instance_11 = par_info_dict;
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 109;
        tmp_assign_source_13 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_11, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_no_resume_false_tuple, 0));

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_no_resume == NULL);
        var_no_resume = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_expression_name_2 = PyCell_GET(par_self);
        tmp_called_instance_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_params);
        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 110;
        tmp_assign_source_14 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_12, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_continuedl_true_tuple, 0));

        Py_DECREF(tmp_called_instance_12);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_continue_dl == NULL);
        var_continue_dl = tmp_assign_source_14;
    }
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_called_instance_13 = PyCell_GET(par_self);
        CHECK_OBJECT(PyCell_GET(par_filename));
        tmp_args_element_name_1 = PyCell_GET(par_filename);
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_13, const_str_plain_report_destination, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_called_instance_14 = PyCell_GET(par_self);
        CHECK_OBJECT(PyCell_GET(par_filename));
        tmp_args_element_name_2 = PyCell_GET(par_filename);
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_name_2};
            tmp_assign_source_15 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_14, const_str_plain_temp_name, call_args);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        assert(PyCell_GET(var_tmpfilename) == NULL);
        PyCell_SET(var_tmpfilename, tmp_assign_source_15);

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_expression_name_3 = PyCell_GET(par_self);
        tmp_called_instance_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain_params);
        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 114;
        tmp_assign_source_16 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_15, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_test_false_tuple, 0));

        Py_DECREF(tmp_called_instance_15);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_test == NULL);
        var_test = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_check_executable);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_check_executable);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 31229 ], 38, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 117;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_call_arg_element_1 = const_str_plain_rtmpdump;
        tmp_call_arg_element_2 = LIST_COPY(const_list_str_digest_e82553f663df8dab605e0971ec523cc1_list);
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
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
        PyObject *tmp_called_instance_16;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_called_instance_16 = PyCell_GET(par_self);
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 118;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_16, const_str_plain_report_error, &PyTuple_GET_ITEM(const_tuple_str_digest_ce06e31f613ed5832661ebc50f6f9612_tuple, 0));

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_list_element_1;
        tmp_list_element_1 = const_str_plain_rtmpdump;
        tmp_assign_source_17 = PyList_New(6);
        Py_INCREF(tmp_list_element_1);
        PyList_SET_ITEM(tmp_assign_source_17, 0, tmp_list_element_1);
        tmp_list_element_1 = const_str_digest_8d9a7968bdcf97bf89ecd9cc70ce5a60;
        Py_INCREF(tmp_list_element_1);
        PyList_SET_ITEM(tmp_assign_source_17, 1, tmp_list_element_1);
        tmp_list_element_1 = const_str_digest_103511b2d15f4b9dd33ac43d29126685;
        Py_INCREF(tmp_list_element_1);
        PyList_SET_ITEM(tmp_assign_source_17, 2, tmp_list_element_1);
        CHECK_OBJECT(var_url);
        tmp_list_element_1 = var_url;
        Py_INCREF(tmp_list_element_1);
        PyList_SET_ITEM(tmp_assign_source_17, 3, tmp_list_element_1);
        tmp_list_element_1 = const_str_digest_c74b8fc24b688b8525cf2e0b3a7db16d;
        Py_INCREF(tmp_list_element_1);
        PyList_SET_ITEM(tmp_assign_source_17, 4, tmp_list_element_1);
        CHECK_OBJECT(PyCell_GET(var_tmpfilename));
        tmp_list_element_1 = PyCell_GET(var_tmpfilename);
        Py_INCREF(tmp_list_element_1);
        PyList_SET_ITEM(tmp_assign_source_17, 5, tmp_list_element_1);
        assert(var_basic_args == NULL);
        var_basic_args = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_player_url);
        tmp_compexpr_left_1 = var_player_url;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_list_element_2;
        CHECK_OBJECT(var_basic_args);
        tmp_left_name_1 = var_basic_args;
        tmp_list_element_2 = const_str_digest_68f8b24bd67fac796ede595fb331da1e;
        tmp_right_name_1 = PyList_New(2);
        Py_INCREF(tmp_list_element_2);
        PyList_SET_ITEM(tmp_right_name_1, 0, tmp_list_element_2);
        CHECK_OBJECT(var_player_url);
        tmp_list_element_2 = var_player_url;
        Py_INCREF(tmp_list_element_2);
        PyList_SET_ITEM(tmp_right_name_1, 1, tmp_list_element_2);
        tmp_result = BINARY_OPERATION_ADD_LIST_LIST_INPLACE(&tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        assert(!(tmp_result == false));
        tmp_assign_source_18 = tmp_left_name_1;
        var_basic_args = tmp_assign_source_18;

    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_page_url);
        tmp_compexpr_left_2 = var_page_url;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_list_element_3;
        CHECK_OBJECT(var_basic_args);
        tmp_left_name_2 = var_basic_args;
        tmp_list_element_3 = const_str_digest_ff5dec7a86e3e3a1caed92ee76728543;
        tmp_right_name_2 = PyList_New(2);
        Py_INCREF(tmp_list_element_3);
        PyList_SET_ITEM(tmp_right_name_2, 0, tmp_list_element_3);
        CHECK_OBJECT(var_page_url);
        tmp_list_element_3 = var_page_url;
        Py_INCREF(tmp_list_element_3);
        PyList_SET_ITEM(tmp_right_name_2, 1, tmp_list_element_3);
        tmp_result = BINARY_OPERATION_ADD_LIST_LIST_INPLACE(&tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        assert(!(tmp_result == false));
        tmp_assign_source_19 = tmp_left_name_2;
        var_basic_args = tmp_assign_source_19;

    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(var_app);
        tmp_compexpr_left_3 = var_app;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_4 = (tmp_compexpr_left_3 != tmp_compexpr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_list_element_4;
        if (var_basic_args == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "basic_args");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_3 = var_basic_args;
        tmp_list_element_4 = const_str_digest_da75dc9d4f4a3d0b0220873e49f9e7ef;
        tmp_right_name_3 = PyList_New(2);
        Py_INCREF(tmp_list_element_4);
        PyList_SET_ITEM(tmp_right_name_3, 0, tmp_list_element_4);
        CHECK_OBJECT(var_app);
        tmp_list_element_4 = var_app;
        Py_INCREF(tmp_list_element_4);
        PyList_SET_ITEM(tmp_right_name_3, 1, tmp_list_element_4);
        tmp_result = BINARY_OPERATION_ADD_LIST_LIST_INPLACE(&tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        assert(!(tmp_result == false));
        tmp_assign_source_20 = tmp_left_name_3;
        var_basic_args = tmp_assign_source_20;

    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(var_play_path);
        tmp_compexpr_left_4 = var_play_path;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_5 = (tmp_compexpr_left_4 != tmp_compexpr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_list_element_5;
        if (var_basic_args == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "basic_args");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_4 = var_basic_args;
        tmp_list_element_5 = const_str_digest_4eddc8dbabe34ca58915a4c5f173f46f;
        tmp_right_name_4 = PyList_New(2);
        Py_INCREF(tmp_list_element_5);
        PyList_SET_ITEM(tmp_right_name_4, 0, tmp_list_element_5);
        CHECK_OBJECT(var_play_path);
        tmp_list_element_5 = var_play_path;
        Py_INCREF(tmp_list_element_5);
        PyList_SET_ITEM(tmp_right_name_4, 1, tmp_list_element_5);
        tmp_result = BINARY_OPERATION_ADD_LIST_LIST_INPLACE(&tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        assert(!(tmp_result == false));
        tmp_assign_source_21 = tmp_left_name_4;
        var_basic_args = tmp_assign_source_21;

    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT(var_tc_url);
        tmp_compexpr_left_5 = var_tc_url;
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_6 = (tmp_compexpr_left_5 != tmp_compexpr_right_5) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_list_element_6;
        if (var_basic_args == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "basic_args");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 136;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_5 = var_basic_args;
        tmp_list_element_6 = const_str_digest_ae903a8eefb5ef5a5abd01809153e46a;
        tmp_right_name_5 = PyList_New(2);
        Py_INCREF(tmp_list_element_6);
        PyList_SET_ITEM(tmp_right_name_5, 0, tmp_list_element_6);
        CHECK_OBJECT(var_tc_url);
        tmp_list_element_6 = var_tc_url;
        Py_INCREF(tmp_list_element_6);
        PyList_SET_ITEM(tmp_right_name_5, 1, tmp_list_element_6);
        tmp_result = BINARY_OPERATION_ADD_LIST_LIST_INPLACE(&tmp_left_name_5, tmp_right_name_5);
        Py_DECREF(tmp_right_name_5);
        assert(!(tmp_result == false));
        tmp_assign_source_22 = tmp_left_name_5;
        var_basic_args = tmp_assign_source_22;

    }
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_test);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_test);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
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
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        if (var_basic_args == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "basic_args");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 138;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_6 = var_basic_args;
        tmp_right_name_6 = LIST_COPY(const_list_str_digest_73567074a2b202b9dcc688d30c50d278_str_plain_1_list);
        tmp_result = BINARY_OPERATION_ADD_LIST_LIST_INPLACE(&tmp_left_name_6, tmp_right_name_6);
        Py_DECREF(tmp_right_name_6);
        assert(!(tmp_result == false));
        tmp_assign_source_23 = tmp_left_name_6;
        var_basic_args = tmp_assign_source_23;

    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT(var_flash_version);
        tmp_compexpr_left_6 = var_flash_version;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_8 = (tmp_compexpr_left_6 != tmp_compexpr_right_6) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_list_element_7;
        if (var_basic_args == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "basic_args");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 140;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_7 = var_basic_args;
        tmp_list_element_7 = const_str_digest_3b699e71bc69ea337dcf2d227e07d11c;
        tmp_right_name_7 = PyList_New(2);
        Py_INCREF(tmp_list_element_7);
        PyList_SET_ITEM(tmp_right_name_7, 0, tmp_list_element_7);
        CHECK_OBJECT(var_flash_version);
        tmp_list_element_7 = var_flash_version;
        Py_INCREF(tmp_list_element_7);
        PyList_SET_ITEM(tmp_right_name_7, 1, tmp_list_element_7);
        tmp_result = BINARY_OPERATION_ADD_LIST_LIST_INPLACE(&tmp_left_name_7, tmp_right_name_7);
        Py_DECREF(tmp_right_name_7);
        assert(!(tmp_result == false));
        tmp_assign_source_24 = tmp_left_name_7;
        var_basic_args = tmp_assign_source_24;

    }
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_live);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_live);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        if (var_basic_args == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "basic_args");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 142;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_8 = var_basic_args;
        tmp_right_name_8 = LIST_COPY(const_list_str_digest_86676082f7fc4886fdd30a2bd1396528_list);
        tmp_result = BINARY_OPERATION_ADD_LIST_LIST_INPLACE(&tmp_left_name_8, tmp_right_name_8);
        Py_DECREF(tmp_right_name_8);
        assert(!(tmp_result == false));
        tmp_assign_source_25 = tmp_left_name_8;
        var_basic_args = tmp_assign_source_25;

    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_conn);
        tmp_isinstance_inst_1 = var_conn;
        tmp_isinstance_cls_1 = (PyObject *)&PyList_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_conn);
        tmp_iter_arg_1 = var_conn;
        tmp_assign_source_26 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_26;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_27 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_27 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ccooooooooooooooocooooNNNNooooo";
                exception_lineno = 144;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_28 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_entry;
            var_entry = tmp_assign_source_28;
            Py_INCREF(var_entry);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_list_element_8;
        if (var_basic_args == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "basic_args");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 145;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_9 = var_basic_args;
        tmp_list_element_8 = const_str_digest_d27d8ebf718f6f4aa13c0754e749fdfb;
        tmp_right_name_9 = PyList_New(2);
        Py_INCREF(tmp_list_element_8);
        PyList_SET_ITEM(tmp_right_name_9, 0, tmp_list_element_8);
        CHECK_OBJECT(var_entry);
        tmp_list_element_8 = var_entry;
        Py_INCREF(tmp_list_element_8);
        PyList_SET_ITEM(tmp_right_name_9, 1, tmp_list_element_8);
        tmp_result = BINARY_OPERATION_ADD_LIST_LIST_INPLACE(&tmp_left_name_9, tmp_right_name_9);
        Py_DECREF(tmp_right_name_9);
        assert(!(tmp_result == false));
        tmp_assign_source_29 = tmp_left_name_9;
        var_basic_args = tmp_assign_source_29;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 144;
        type_description_1 = "ccooooooooooooooocooooNNNNooooo";
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

    goto branch_end_10;
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT(var_conn);
        tmp_isinstance_inst_2 = var_conn;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_compat_str);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_compat_str);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 26637 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 146;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_2 = tmp_mvar_value_2;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_list_element_9;
        if (var_basic_args == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "basic_args");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 147;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_10 = var_basic_args;
        tmp_list_element_9 = const_str_digest_d27d8ebf718f6f4aa13c0754e749fdfb;
        tmp_right_name_10 = PyList_New(2);
        Py_INCREF(tmp_list_element_9);
        PyList_SET_ITEM(tmp_right_name_10, 0, tmp_list_element_9);
        CHECK_OBJECT(var_conn);
        tmp_list_element_9 = var_conn;
        Py_INCREF(tmp_list_element_9);
        PyList_SET_ITEM(tmp_right_name_10, 1, tmp_list_element_9);
        tmp_result = BINARY_OPERATION_ADD_LIST_LIST_INPLACE(&tmp_left_name_10, tmp_right_name_10);
        Py_DECREF(tmp_right_name_10);
        assert(!(tmp_result == false));
        tmp_assign_source_30 = tmp_left_name_10;
        var_basic_args = tmp_assign_source_30;

    }
    branch_no_11:;
    branch_end_10:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT(var_protocol);
        tmp_compexpr_left_7 = var_protocol;
        tmp_compexpr_right_7 = Py_None;
        tmp_condition_result_12 = (tmp_compexpr_left_7 != tmp_compexpr_right_7) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_list_element_10;
        if (var_basic_args == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "basic_args");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 149;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_11 = var_basic_args;
        tmp_list_element_10 = const_str_digest_d675c1001a384895f2e7099304b1e491;
        tmp_right_name_11 = PyList_New(2);
        Py_INCREF(tmp_list_element_10);
        PyList_SET_ITEM(tmp_right_name_11, 0, tmp_list_element_10);
        CHECK_OBJECT(var_protocol);
        tmp_list_element_10 = var_protocol;
        Py_INCREF(tmp_list_element_10);
        PyList_SET_ITEM(tmp_right_name_11, 1, tmp_list_element_10);
        tmp_result = BINARY_OPERATION_ADD_LIST_LIST_INPLACE(&tmp_left_name_11, tmp_right_name_11);
        Py_DECREF(tmp_right_name_11);
        assert(!(tmp_result == false));
        tmp_assign_source_31 = tmp_left_name_11;
        var_basic_args = tmp_assign_source_31;

    }
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_real_time);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_real_time);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        if (var_basic_args == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "basic_args");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 151;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_12 = var_basic_args;
        tmp_right_name_12 = LIST_COPY(const_list_str_digest_c0f26da8d5d91071ff203b7c7b36a338_list);
        tmp_result = BINARY_OPERATION_ADD_LIST_LIST_INPLACE(&tmp_left_name_12, tmp_right_name_12);
        Py_DECREF(tmp_right_name_12);
        assert(!(tmp_result == false));
        tmp_assign_source_32 = tmp_left_name_12;
        var_basic_args = tmp_assign_source_32;

    }
    branch_no_13:;
    {
        PyObject *tmp_assign_source_33;
        if (var_basic_args == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "basic_args");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 153;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_33 = var_basic_args;
        assert(var_args == NULL);
        Py_INCREF(tmp_assign_source_33);
        var_args = tmp_assign_source_33;
    }
    {
        nuitka_bool tmp_condition_result_14;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_name_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_4;
        PyObject *tmp_operand_name_3;
        CHECK_OBJECT(var_no_resume);
        tmp_operand_name_2 = var_no_resume;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
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
        CHECK_OBJECT(var_continue_dl);
        tmp_truth_name_4 = CHECK_IF_TRUE(var_continue_dl);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_live);
        tmp_operand_name_3 = var_live;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_14 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_14 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        CHECK_OBJECT(var_args);
        tmp_left_name_13 = var_args;
        tmp_right_name_13 = LIST_COPY(const_list_str_digest_8d59ec5d0c8183565418d3338842ee7d_list);
        tmp_result = BINARY_OPERATION_ADD_LIST_LIST_INPLACE(&tmp_left_name_13, tmp_right_name_13);
        Py_DECREF(tmp_right_name_13);
        assert(!(tmp_result == false));
        tmp_assign_source_34 = tmp_left_name_13;
        var_args = tmp_assign_source_34;

    }
    branch_no_14:;
    {
        nuitka_bool tmp_condition_result_15;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_operand_name_4;
        int tmp_truth_name_5;
        CHECK_OBJECT(var_live);
        tmp_operand_name_4 = var_live;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(var_continue_dl);
        tmp_truth_name_5 = CHECK_IF_TRUE(var_continue_dl);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_15 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_15 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        CHECK_OBJECT(var_args);
        tmp_left_name_14 = var_args;
        tmp_right_name_14 = LIST_COPY(const_list_str_digest_70d71d8185661d7dc1f9114ff3f49291_str_plain_1_list);
        tmp_result = BINARY_OPERATION_ADD_LIST_LIST_INPLACE(&tmp_left_name_14, tmp_right_name_14);
        Py_DECREF(tmp_right_name_14);
        assert(!(tmp_result == false));
        tmp_assign_source_35 = tmp_left_name_14;
        var_args = tmp_assign_source_35;

    }
    branch_no_15:;
    {
        PyObject *tmp_assign_source_36;
        // Tried code:
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_iter_arg_2;
            if (var_args == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "args");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 159;
                type_description_1 = "ccooooooooooooooocooooNNNNooooo";
                goto try_except_handler_3;
            }

            tmp_iter_arg_2 = var_args;
            tmp_assign_source_37 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_1 = "ccooooooooooooooocooooNNNNooooo";
                goto try_except_handler_3;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_37;
        }
        {
            PyObject *tmp_assign_source_38;
            tmp_assign_source_38 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_38;
        }
        if (isFrameUnusable(cache_frame_eb8aee52d3fa079adfcf21b526d0b132_2)) {
            Py_XDECREF(cache_frame_eb8aee52d3fa079adfcf21b526d0b132_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_eb8aee52d3fa079adfcf21b526d0b132_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_eb8aee52d3fa079adfcf21b526d0b132_2 = MAKE_FUNCTION_FRAME(codeobj_eb8aee52d3fa079adfcf21b526d0b132, module_youtube_dl$downloader$rtmp, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_eb8aee52d3fa079adfcf21b526d0b132_2->m_type_description == NULL);
        frame_eb8aee52d3fa079adfcf21b526d0b132_2 = cache_frame_eb8aee52d3fa079adfcf21b526d0b132_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_eb8aee52d3fa079adfcf21b526d0b132_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_eb8aee52d3fa079adfcf21b526d0b132_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_39;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_39 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_39 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 159;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_39;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_40;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_40 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_a;
                outline_0_var_a = tmp_assign_source_40;
                Py_INCREF(outline_0_var_a);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_encodeArgument);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_encodeArgument);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 31422 ], 36, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 159;
                type_description_2 = "o";
                goto try_except_handler_4;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT(outline_0_var_a);
            tmp_args_element_name_3 = outline_0_var_a;
            frame_eb8aee52d3fa079adfcf21b526d0b132_2->m_frame.f_lineno = 159;
            tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_res = PyList_Append(tmp_append_list_1, tmp_append_value_1);
            Py_DECREF(tmp_append_value_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_36 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_36);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;

        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;

        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;

        goto frame_return_exit_2;
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;

        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;

        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_eb8aee52d3fa079adfcf21b526d0b132_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_eb8aee52d3fa079adfcf21b526d0b132_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_3;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_eb8aee52d3fa079adfcf21b526d0b132_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_eb8aee52d3fa079adfcf21b526d0b132_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_eb8aee52d3fa079adfcf21b526d0b132_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_eb8aee52d3fa079adfcf21b526d0b132_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_eb8aee52d3fa079adfcf21b526d0b132_2,
            type_description_2,
            outline_0_var_a
        );


        // Release cached frame.
        if (frame_eb8aee52d3fa079adfcf21b526d0b132_2 == cache_frame_eb8aee52d3fa079adfcf21b526d0b132_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(frame_eb8aee52d3fa079adfcf21b526d0b132_2);
        }
        cache_frame_eb8aee52d3fa079adfcf21b526d0b132_2 = NULL;

        assertFrameObject(frame_eb8aee52d3fa079adfcf21b526d0b132_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ccooooooooooooooocooooNNNNooooo";
        goto try_except_handler_3;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(outline_0_var_a);
        outline_0_var_a = NULL;

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

        Py_XDECREF(outline_0_var_a);
        outline_0_var_a = NULL;

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
        exception_lineno = 159;
        goto frame_exception_exit_1;
        outline_result_1:;
        {
            PyObject *old = var_args;
            var_args = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_expression_name_4 = PyCell_GET(par_self);
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain__debug_cmd);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_args);
        tmp_tuple_element_1 = var_args;
        tmp_args_name_1 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_kw_name_1 = PyDict_Copy(const_dict_be9c7f7b6fd926e30d3fce08913b005b);
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 161;
        tmp_call_result_3 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_time);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_time);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10359 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 168;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_17 = tmp_mvar_value_4;
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 168;
        tmp_assign_source_41 = CALL_METHOD_NO_ARGS(tmp_called_instance_17, const_str_plain_time);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_started == NULL);
        var_started = tmp_assign_source_41;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(var_run_rtmpdump);
        tmp_called_name_4 = var_run_rtmpdump;
        CHECK_OBJECT(var_args);
        tmp_args_element_name_4 = var_args;
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 171;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto try_except_handler_5;
        }
        assert(var_retval == NULL);
        var_retval = tmp_assign_source_42;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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

    if (exception_keeper_tb_4 == NULL) {
        exception_keeper_tb_4 = MAKE_TRACEBACK(frame_b6d030258f8346854f33fe89a5ab7c12, exception_keeper_lineno_4);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_b6d030258f8346854f33fe89a5ab7c12, exception_keeper_lineno_4);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    PyException_SetTraceback(exception_keeper_value_4, (PyObject *)exception_keeper_tb_4);
    PUBLISH_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        tmp_compexpr_left_8 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_8 = PyExc_KeyboardInterrupt;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_8, tmp_compexpr_right_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_16 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_operand_name_5;
        PyObject *tmp_called_instance_18;
        CHECK_OBJECT(par_info_dict);
        tmp_called_instance_18 = par_info_dict;
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 173;
        tmp_operand_name_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_18, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_is_live_tuple, 0));

        if (tmp_operand_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto try_except_handler_6;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_5);
        Py_DECREF(tmp_operand_name_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_17 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 174;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b6d030258f8346854f33fe89a5ab7c12->m_frame) frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ccooooooooooooooocooooNNNNooooo";
    goto try_except_handler_6;
    branch_no_17:;
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = const_int_0;
        assert(var_retval == NULL);
        Py_INCREF(tmp_assign_source_43);
        var_retval = tmp_assign_source_43;
    }
    {
        PyObject *tmp_called_instance_19;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_called_instance_19 = PyCell_GET(par_self);
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 176;
        tmp_call_result_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_19, const_str_plain_to_screen, &PyTuple_GET_ITEM(const_tuple_str_digest_50411c7a8133bf0482177e4a275cfbb4_tuple, 0));

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_16;
    branch_no_16:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 170;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b6d030258f8346854f33fe89a5ab7c12->m_frame) frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ccooooooooooooooocooooNNNNooooo";
    goto try_except_handler_6;
    branch_end_16:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_tmp_condition_result_18_object_1;
        int tmp_truth_name_6;
        if (var_retval == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "retval");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 178;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_9 = var_retval;
        tmp_compexpr_right_9 = const_int_pos_3;
        tmp_tmp_condition_result_18_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_9, tmp_compexpr_right_9);
        if (tmp_tmp_condition_result_18_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_tmp_condition_result_18_object_1);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_18_object_1);

            exception_lineno = 178;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_18_object_1);
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_called_instance_20;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_called_instance_20 = PyCell_GET(par_self);
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 179;
        tmp_call_result_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_20, const_str_plain_report_error, &PyTuple_GET_ITEM(const_tuple_str_digest_2e4dfbca2cdf29340738a7f4af192d6c_tuple, 0));

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_18:;
    loop_start_3:;
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_operand_name_6;
        int tmp_and_left_truth_4;
        PyObject *tmp_and_left_value_4;
        PyObject *tmp_and_right_value_4;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        int tmp_and_left_truth_5;
        PyObject *tmp_and_left_value_5;
        PyObject *tmp_and_right_value_5;
        PyObject *tmp_operand_name_7;
        PyObject *tmp_operand_name_8;
        if (var_retval == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "retval");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 182;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_10 = var_retval;
        tmp_compexpr_right_10 = const_tuple_int_pos_2_int_pos_1_tuple;
        tmp_res = PySequence_Contains(tmp_compexpr_right_10, tmp_compexpr_left_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_4 = (tmp_res == 1) ? Py_True : Py_False;
        tmp_and_left_truth_4 = CHECK_IF_TRUE(tmp_and_left_value_4);
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        CHECK_OBJECT(var_test);
        tmp_operand_name_7 = var_test;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_5 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_and_left_truth_5 = CHECK_IF_TRUE(tmp_and_left_value_5);
        if (tmp_and_left_truth_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_5 == 1) {
            goto and_right_5;
        } else {
            goto and_left_5;
        }
        and_right_5:;
        CHECK_OBJECT(var_live);
        tmp_operand_name_8 = var_live;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_5 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_and_right_value_4 = tmp_and_right_value_5;
        goto and_end_5;
        and_left_5:;
        tmp_and_right_value_4 = tmp_and_left_value_5;
        and_end_5:;
        tmp_operand_name_6 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_operand_name_6 = tmp_and_left_value_4;
        and_end_4:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_19 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    goto loop_end_3;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_os);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_os);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 695 ], 24, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 183;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = tmp_mvar_value_5;
        tmp_expression_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, const_str_plain_path);
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, const_str_plain_getsize);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_encodeFilename);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_encodeFilename);
        }

        if (tmp_mvar_value_6 == NULL) {
            Py_DECREF(tmp_called_name_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 26838 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 183;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_6;
        CHECK_OBJECT(PyCell_GET(var_tmpfilename));
        tmp_args_element_name_6 = PyCell_GET(var_tmpfilename);
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 183;
        tmp_args_element_name_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_6);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 183;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 183;
        tmp_assign_source_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_prevsize;
            var_prevsize = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_15;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_expression_name_7 = PyCell_GET(par_self);
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, const_str_plain_to_screen);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_15 = const_str_digest_40f19e742a84b4a9d774ed78df09d7dc;
        CHECK_OBJECT(var_prevsize);
        tmp_right_name_15 = var_prevsize;
        tmp_args_element_name_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_15, tmp_right_name_15);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 184;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 184;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_7);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_instance_21;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_call_result_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_time);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_time);
        }

        if (tmp_mvar_value_7 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10359 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 185;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_21 = tmp_mvar_value_7;
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 185;
        tmp_call_result_7 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_21, const_str_plain_sleep, &PyTuple_GET_ITEM(const_tuple_float_5_0_tuple, 0));

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        if (var_basic_args == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "basic_args");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_16 = var_basic_args;
        tmp_right_name_16 = LIST_COPY(const_list_str_digest_8d59ec5d0c8183565418d3338842ee7d_list);
        tmp_assign_source_45 = BINARY_OPERATION_ADD_OBJECT_LIST_LIST(tmp_left_name_16, tmp_right_name_16);
        Py_DECREF(tmp_right_name_16);
        assert(!(tmp_assign_source_45 == NULL));
        {
            PyObject *old = var_args;
            assert(old != NULL);
            var_args = tmp_assign_source_45;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        PyObject *tmp_tmp_condition_result_20_object_1;
        int tmp_truth_name_7;
        if (var_retval == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "retval");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 187;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_11 = var_retval;
        tmp_compexpr_right_11 = const_int_pos_1;
        tmp_tmp_condition_result_20_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_11, tmp_compexpr_right_11);
        if (tmp_tmp_condition_result_20_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_tmp_condition_result_20_object_1);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_20_object_1);

            exception_lineno = 187;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_20 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_20_object_1);
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_17;
        CHECK_OBJECT(var_args);
        tmp_left_name_17 = var_args;
        tmp_right_name_17 = LIST_COPY(const_list_str_digest_70d71d8185661d7dc1f9114ff3f49291_str_plain_1_list);
        tmp_result = BINARY_OPERATION_ADD_LIST_LIST_INPLACE(&tmp_left_name_17, tmp_right_name_17);
        Py_DECREF(tmp_right_name_17);
        assert(!(tmp_result == false));
        tmp_assign_source_46 = tmp_left_name_17;
        var_args = tmp_assign_source_46;

    }
    branch_no_20:;
    {
        PyObject *tmp_assign_source_47;
        // Tried code:
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(var_args);
            tmp_iter_arg_3 = var_args;
            tmp_assign_source_48 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_1 = "ccooooooooooooooocooooNNNNooooo";
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_listcomp_2__$0;
                tmp_listcomp_2__$0 = tmp_assign_source_48;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_49;
            tmp_assign_source_49 = PyList_New(0);
            {
                PyObject *old = tmp_listcomp_2__contraction;
                tmp_listcomp_2__contraction = tmp_assign_source_49;
                Py_XDECREF(old);
            }

        }
        if (isFrameUnusable(cache_frame_1445a00c2d4f874060de944c36a3ba97_3)) {
            Py_XDECREF(cache_frame_1445a00c2d4f874060de944c36a3ba97_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_1445a00c2d4f874060de944c36a3ba97_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_1445a00c2d4f874060de944c36a3ba97_3 = MAKE_FUNCTION_FRAME(codeobj_1445a00c2d4f874060de944c36a3ba97, module_youtube_dl$downloader$rtmp, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_1445a00c2d4f874060de944c36a3ba97_3->m_type_description == NULL);
        frame_1445a00c2d4f874060de944c36a3ba97_3 = cache_frame_1445a00c2d4f874060de944c36a3ba97_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_1445a00c2d4f874060de944c36a3ba97_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_1445a00c2d4f874060de944c36a3ba97_3) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_4:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_50;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_3 = tmp_listcomp_2__$0;
            tmp_assign_source_50 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_50 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_4;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 189;
                    goto try_except_handler_8;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_50;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_51;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_51 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_a;
                outline_1_var_a = tmp_assign_source_51;
                Py_INCREF(outline_1_var_a);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_name_8;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_8;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_encodeArgument);

            if (unlikely(tmp_mvar_value_8 == NULL)) {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_encodeArgument);
            }

            if (tmp_mvar_value_8 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 31422 ], 36, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 189;
                type_description_2 = "o";
                goto try_except_handler_8;
            }

            tmp_called_name_8 = tmp_mvar_value_8;
            CHECK_OBJECT(outline_1_var_a);
            tmp_args_element_name_8 = outline_1_var_a;
            frame_1445a00c2d4f874060de944c36a3ba97_3->m_frame.f_lineno = 189;
            tmp_append_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_8);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            assert(PyList_Check(tmp_append_list_2));
            tmp_res = PyList_Append(tmp_append_list_2, tmp_append_value_2);
            Py_DECREF(tmp_append_value_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_2 = "o";
            goto try_except_handler_8;
        }
        goto loop_start_4;
        loop_end_4:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_47 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_47);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;

        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;

        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;

        goto frame_return_exit_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;

        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;

        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_3;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_1445a00c2d4f874060de944c36a3ba97_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_3:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_1445a00c2d4f874060de944c36a3ba97_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_7;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_1445a00c2d4f874060de944c36a3ba97_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1445a00c2d4f874060de944c36a3ba97_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1445a00c2d4f874060de944c36a3ba97_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1445a00c2d4f874060de944c36a3ba97_3, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1445a00c2d4f874060de944c36a3ba97_3,
            type_description_2,
            outline_1_var_a
        );


        // Release cached frame.
        if (frame_1445a00c2d4f874060de944c36a3ba97_3 == cache_frame_1445a00c2d4f874060de944c36a3ba97_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(frame_1445a00c2d4f874060de944c36a3ba97_3);
        }
        cache_frame_1445a00c2d4f874060de944c36a3ba97_3 = NULL;

        assertFrameObject(frame_1445a00c2d4f874060de944c36a3ba97_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ccooooooooooooooocooooNNNNooooo";
        goto try_except_handler_7;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_XDECREF(outline_1_var_a);
        outline_1_var_a = NULL;

        goto outline_result_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_a);
        outline_1_var_a = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 189;
        goto frame_exception_exit_1;
        outline_result_2:;
        {
            PyObject *old = var_args;
            assert(old != NULL);
            var_args = tmp_assign_source_47;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT(var_run_rtmpdump);
        tmp_called_name_9 = var_run_rtmpdump;
        CHECK_OBJECT(var_args);
        tmp_args_element_name_9 = var_args;
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 190;
        tmp_assign_source_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_9);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_retval;
            var_retval = tmp_assign_source_52;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_name_10;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_os);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_os);
        }

        if (tmp_mvar_value_9 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 695 ], 24, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_9 = tmp_mvar_value_9;
        tmp_expression_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, const_str_plain_path);
        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, const_str_plain_getsize);
        Py_DECREF(tmp_expression_name_8);
        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_encodeFilename);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_encodeFilename);
        }

        if (tmp_mvar_value_10 == NULL) {
            Py_DECREF(tmp_called_name_10);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 26838 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = tmp_mvar_value_10;
        CHECK_OBJECT(PyCell_GET(var_tmpfilename));
        tmp_args_element_name_11 = PyCell_GET(var_tmpfilename);
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 191;
        tmp_args_element_name_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_11);
        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_10);

            exception_lineno = 191;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 191;
        tmp_assign_source_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_10);
        Py_DECREF(tmp_called_name_10);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_cursize;
            var_cursize = tmp_assign_source_53;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_21;
        int tmp_and_left_truth_6;
        nuitka_bool tmp_and_left_value_6;
        nuitka_bool tmp_and_right_value_6;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        PyObject *tmp_tmp_and_right_value_6_object_1;
        int tmp_truth_name_8;
        CHECK_OBJECT(var_prevsize);
        tmp_compexpr_left_12 = var_prevsize;
        CHECK_OBJECT(var_cursize);
        tmp_compexpr_right_12 = var_cursize;
        tmp_and_left_value_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_12, tmp_compexpr_right_12);
        if (tmp_and_left_value_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_6 = tmp_and_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_6 == 1) {
            goto and_right_6;
        } else {
            goto and_left_6;
        }
        and_right_6:;
        CHECK_OBJECT(var_retval);
        tmp_compexpr_left_13 = var_retval;
        tmp_compexpr_right_13 = const_int_pos_1;
        tmp_tmp_and_right_value_6_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_13, tmp_compexpr_right_13);
        if (tmp_tmp_and_right_value_6_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_tmp_and_right_value_6_object_1);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_right_value_6_object_1);

            exception_lineno = 192;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_6 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_and_right_value_6_object_1);
        tmp_condition_result_21 = tmp_and_right_value_6;
        goto and_end_6;
        and_left_6:;
        tmp_condition_result_21 = tmp_and_left_value_6;
        and_end_6:;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    goto loop_end_3;
    branch_no_21:;
    {
        nuitka_bool tmp_condition_result_22;
        int tmp_and_left_truth_7;
        nuitka_bool tmp_and_left_value_7;
        nuitka_bool tmp_and_right_value_7;
        PyObject *tmp_compexpr_left_14;
        PyObject *tmp_compexpr_right_14;
        int tmp_and_left_truth_8;
        nuitka_bool tmp_and_left_value_8;
        nuitka_bool tmp_and_right_value_8;
        PyObject *tmp_compexpr_left_15;
        PyObject *tmp_compexpr_right_15;
        PyObject *tmp_tmp_and_left_value_8_object_1;
        int tmp_truth_name_9;
        PyObject *tmp_compexpr_left_16;
        PyObject *tmp_compexpr_right_16;
        PyObject *tmp_tmp_and_right_value_8_object_1;
        int tmp_truth_name_10;
        CHECK_OBJECT(var_prevsize);
        tmp_compexpr_left_14 = var_prevsize;
        CHECK_OBJECT(var_cursize);
        tmp_compexpr_right_14 = var_cursize;
        tmp_and_left_value_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_14, tmp_compexpr_right_14);
        if (tmp_and_left_value_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_7 = tmp_and_left_value_7 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_7 == 1) {
            goto and_right_7;
        } else {
            goto and_left_7;
        }
        and_right_7:;
        CHECK_OBJECT(var_retval);
        tmp_compexpr_left_15 = var_retval;
        tmp_compexpr_right_15 = const_int_pos_2;
        tmp_tmp_and_left_value_8_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_15, tmp_compexpr_right_15);
        if (tmp_tmp_and_left_value_8_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_tmp_and_left_value_8_object_1);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_left_value_8_object_1);

            exception_lineno = 195;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_8 = tmp_truth_name_9 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_and_left_value_8_object_1);
        tmp_and_left_truth_8 = tmp_and_left_value_8 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_8 == 1) {
            goto and_right_8;
        } else {
            goto and_left_8;
        }
        and_right_8:;
        CHECK_OBJECT(var_cursize);
        tmp_compexpr_left_16 = var_cursize;
        tmp_compexpr_right_16 = const_int_pos_1024;
        tmp_tmp_and_right_value_8_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_16, tmp_compexpr_right_16);
        if (tmp_tmp_and_right_value_8_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_tmp_and_right_value_8_object_1);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_right_value_8_object_1);

            exception_lineno = 195;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_8 = tmp_truth_name_10 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_and_right_value_8_object_1);
        tmp_and_right_value_7 = tmp_and_right_value_8;
        goto and_end_8;
        and_left_8:;
        tmp_and_right_value_7 = tmp_and_left_value_8;
        and_end_8:;
        tmp_condition_result_22 = tmp_and_right_value_7;
        goto and_end_7;
        and_left_7:;
        tmp_condition_result_22 = tmp_and_left_value_7;
        and_end_7:;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_called_instance_22;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_called_instance_22 = PyCell_GET(par_self);
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 196;
        tmp_call_result_8 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_22, const_str_plain_to_screen, &PyTuple_GET_ITEM(const_tuple_str_digest_592e216c7376d7d3896695100014bec7_tuple, 0));

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = const_int_0;
        {
            PyObject *old = var_retval;
            assert(old != NULL);
            var_retval = tmp_assign_source_54;
            Py_INCREF(var_retval);
            Py_DECREF(old);
        }

    }
    goto loop_end_3;
    branch_no_22:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 182;
        type_description_1 = "ccooooooooooooooocooooNNNNooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_3;
    loop_end_3:;
    {
        nuitka_bool tmp_condition_result_23;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_17;
        PyObject *tmp_compexpr_right_17;
        PyObject *tmp_tmp_or_left_value_1_object_1;
        int tmp_truth_name_11;
        int tmp_and_left_truth_9;
        nuitka_bool tmp_and_left_value_9;
        nuitka_bool tmp_and_right_value_9;
        int tmp_truth_name_12;
        PyObject *tmp_compexpr_left_18;
        PyObject *tmp_compexpr_right_18;
        PyObject *tmp_tmp_and_right_value_9_object_1;
        int tmp_truth_name_13;
        if (var_retval == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "retval");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 199;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_17 = var_retval;
        tmp_compexpr_right_17 = const_int_0;
        tmp_tmp_or_left_value_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_17, tmp_compexpr_right_17);
        if (tmp_tmp_or_left_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_tmp_or_left_value_1_object_1);
        if (tmp_truth_name_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_left_value_1_object_1);

            exception_lineno = 199;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_11 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_or_left_value_1_object_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_test);
        tmp_truth_name_12 = CHECK_IF_TRUE(var_test);
        if (tmp_truth_name_12 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_9 = tmp_truth_name_12 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_9 = tmp_and_left_value_9 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_9 == 1) {
            goto and_right_9;
        } else {
            goto and_left_9;
        }
        and_right_9:;
        if (var_retval == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "retval");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 199;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_18 = var_retval;
        tmp_compexpr_right_18 = const_int_pos_2;
        tmp_tmp_and_right_value_9_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_18, tmp_compexpr_right_18);
        if (tmp_tmp_and_right_value_9_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_13 = CHECK_IF_TRUE(tmp_tmp_and_right_value_9_object_1);
        if (tmp_truth_name_13 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_right_value_9_object_1);

            exception_lineno = 199;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_9 = tmp_truth_name_13 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_and_right_value_9_object_1);
        tmp_or_right_value_1 = tmp_and_right_value_9;
        goto and_end_9;
        and_left_9:;
        tmp_or_right_value_1 = tmp_and_left_value_9;
        and_end_9:;
        tmp_condition_result_23 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_23 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_name_12;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_os);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_os);
        }

        if (tmp_mvar_value_11 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 695 ], 24, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 200;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_11 = tmp_mvar_value_11;
        tmp_expression_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, const_str_plain_path);
        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, const_str_plain_getsize);
        Py_DECREF(tmp_expression_name_10);
        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_encodeFilename);

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_encodeFilename);
        }

        if (tmp_mvar_value_12 == NULL) {
            Py_DECREF(tmp_called_name_12);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 26838 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 200;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_13 = tmp_mvar_value_12;
        CHECK_OBJECT(PyCell_GET(var_tmpfilename));
        tmp_args_element_name_13 = PyCell_GET(var_tmpfilename);
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 200;
        tmp_args_element_name_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, tmp_args_element_name_13);
        if (tmp_args_element_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);

            exception_lineno = 200;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 200;
        tmp_assign_source_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_12);
        Py_DECREF(tmp_called_name_12);
        Py_DECREF(tmp_args_element_name_12);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fsize == NULL);
        var_fsize = tmp_assign_source_55;
    }
    {
        PyObject *tmp_called_name_14;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_18;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_expression_name_12 = PyCell_GET(par_self);
        tmp_called_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, const_str_plain_to_screen);
        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_18 = const_str_digest_40f19e742a84b4a9d774ed78df09d7dc;
        CHECK_OBJECT(var_fsize);
        tmp_right_name_18 = var_fsize;
        tmp_args_element_name_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_18, tmp_right_name_18);
        if (tmp_args_element_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_14);

            exception_lineno = 201;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 201;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, tmp_args_element_name_14);
        Py_DECREF(tmp_called_name_14);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_instance_23;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_called_instance_23 = PyCell_GET(par_self);
        CHECK_OBJECT(PyCell_GET(var_tmpfilename));
        tmp_args_element_name_15 = PyCell_GET(var_tmpfilename);
        CHECK_OBJECT(PyCell_GET(par_filename));
        tmp_args_element_name_16 = PyCell_GET(par_filename);
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = {tmp_args_element_name_15, tmp_args_element_name_16};
            tmp_call_result_10 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_23, const_str_plain_try_rename, call_args);
        }

        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_name_15;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_left_name_19;
        PyObject *tmp_called_instance_24;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_right_name_19;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_expression_name_13 = PyCell_GET(par_self);
        tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, const_str_plain__hook_progress);
        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_downloaded_bytes;
        CHECK_OBJECT(var_fsize);
        tmp_dict_value_1 = var_fsize;
        tmp_args_element_name_17 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_17, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_total_bytes;
        CHECK_OBJECT(var_fsize);
        tmp_dict_value_2 = var_fsize;
        tmp_res = PyDict_SetItem(tmp_args_element_name_17, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_filename;
        CHECK_OBJECT(PyCell_GET(par_filename));
        tmp_dict_value_3 = PyCell_GET(par_filename);
        tmp_res = PyDict_SetItem(tmp_args_element_name_17, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_status;
        tmp_dict_value_4 = const_str_plain_finished;
        tmp_res = PyDict_SetItem(tmp_args_element_name_17, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = const_str_plain_elapsed;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_time);

        if (unlikely(tmp_mvar_value_13 == NULL)) {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_time);
        }

        if (tmp_mvar_value_13 == NULL) {
            Py_DECREF(tmp_called_name_15);
            Py_DECREF(tmp_args_element_name_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10359 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_24 = tmp_mvar_value_13;
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 208;
        tmp_left_name_19 = CALL_METHOD_NO_ARGS(tmp_called_instance_24, const_str_plain_time);
        if (tmp_left_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);
            Py_DECREF(tmp_args_element_name_17);

            exception_lineno = 208;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_started);
        tmp_right_name_19 = var_started;
        tmp_dict_value_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_19, tmp_right_name_19);
        Py_DECREF(tmp_left_name_19);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);
            Py_DECREF(tmp_args_element_name_17);

            exception_lineno = 208;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_17, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 203;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, tmp_args_element_name_17);
        Py_DECREF(tmp_called_name_15);
        Py_DECREF(tmp_args_element_name_17);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_23;
    branch_no_23:;
    {
        PyObject *tmp_called_instance_25;
        PyObject *tmp_call_result_12;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_called_instance_25 = PyCell_GET(par_self);
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 212;
        tmp_call_result_12 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_25, const_str_plain_to_stderr, &PyTuple_GET_ITEM(const_tuple_str_newline_tuple, 0));

        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_name_16;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_left_name_20;
        PyObject *tmp_right_name_20;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_expression_name_14 = PyCell_GET(par_self);
        tmp_called_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, const_str_plain_report_error);
        if (tmp_called_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_20 = const_str_digest_a04eae9dec4c3ccb80c8b6ca44fe3ce9;
        if (var_retval == NULL) {
            Py_DECREF(tmp_called_name_16);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "retval");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 213;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_20 = var_retval;
        tmp_args_element_name_18 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_20, tmp_right_name_20);
        if (tmp_args_element_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_16);

            exception_lineno = 213;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        frame_b6d030258f8346854f33fe89a5ab7c12->m_frame.f_lineno = 213;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_16, tmp_args_element_name_18);
        Py_DECREF(tmp_called_name_16);
        Py_DECREF(tmp_args_element_name_18);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ccooooooooooooooocooooNNNNooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_23:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b6d030258f8346854f33fe89a5ab7c12);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b6d030258f8346854f33fe89a5ab7c12);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b6d030258f8346854f33fe89a5ab7c12);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b6d030258f8346854f33fe89a5ab7c12, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b6d030258f8346854f33fe89a5ab7c12->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b6d030258f8346854f33fe89a5ab7c12, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b6d030258f8346854f33fe89a5ab7c12,
        type_description_1,
        par_self,
        par_filename,
        par_info_dict,
        var_run_rtmpdump,
        var_url,
        var_player_url,
        var_page_url,
        var_app,
        var_play_path,
        var_tc_url,
        var_flash_version,
        var_live,
        var_conn,
        var_protocol,
        var_real_time,
        var_no_resume,
        var_continue_dl,
        var_tmpfilename,
        var_test,
        var_basic_args,
        var_entry,
        var_args,
        NULL,
        NULL,
        NULL,
        NULL,
        var_started,
        var_retval,
        var_prevsize,
        var_cursize,
        var_fsize
    );


    // Release cached frame.
    if (frame_b6d030258f8346854f33fe89a5ab7c12 == cache_frame_b6d030258f8346854f33fe89a5ab7c12) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_b6d030258f8346854f33fe89a5ab7c12);
    }
    cache_frame_b6d030258f8346854f33fe89a5ab7c12 = NULL;

    assertFrameObject(frame_b6d030258f8346854f33fe89a5ab7c12);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_run_rtmpdump);
    Py_DECREF(var_run_rtmpdump);
    var_run_rtmpdump = NULL;

    CHECK_OBJECT(var_url);
    Py_DECREF(var_url);
    var_url = NULL;

    CHECK_OBJECT(var_player_url);
    Py_DECREF(var_player_url);
    var_player_url = NULL;

    CHECK_OBJECT(var_page_url);
    Py_DECREF(var_page_url);
    var_page_url = NULL;

    CHECK_OBJECT(var_app);
    Py_DECREF(var_app);
    var_app = NULL;

    CHECK_OBJECT(var_play_path);
    Py_DECREF(var_play_path);
    var_play_path = NULL;

    CHECK_OBJECT(var_tc_url);
    Py_DECREF(var_tc_url);
    var_tc_url = NULL;

    CHECK_OBJECT(var_flash_version);
    Py_DECREF(var_flash_version);
    var_flash_version = NULL;

    CHECK_OBJECT(var_live);
    Py_DECREF(var_live);
    var_live = NULL;

    CHECK_OBJECT(var_conn);
    Py_DECREF(var_conn);
    var_conn = NULL;

    CHECK_OBJECT(var_protocol);
    Py_DECREF(var_protocol);
    var_protocol = NULL;

    CHECK_OBJECT(var_real_time);
    Py_DECREF(var_real_time);
    var_real_time = NULL;

    CHECK_OBJECT(var_no_resume);
    Py_DECREF(var_no_resume);
    var_no_resume = NULL;

    CHECK_OBJECT(var_continue_dl);
    Py_DECREF(var_continue_dl);
    var_continue_dl = NULL;

    CHECK_OBJECT(var_tmpfilename);
    Py_DECREF(var_tmpfilename);
    var_tmpfilename = NULL;

    CHECK_OBJECT(var_test);
    Py_DECREF(var_test);
    var_test = NULL;

    Py_XDECREF(var_basic_args);
    var_basic_args = NULL;

    Py_XDECREF(var_entry);
    var_entry = NULL;

    Py_XDECREF(var_args);
    var_args = NULL;

    Py_XDECREF(var_started);
    var_started = NULL;

    Py_XDECREF(var_retval);
    var_retval = NULL;

    Py_XDECREF(var_prevsize);
    var_prevsize = NULL;

    Py_XDECREF(var_cursize);
    var_cursize = NULL;

    Py_XDECREF(var_fsize);
    var_fsize = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_run_rtmpdump);
    Py_DECREF(var_run_rtmpdump);
    var_run_rtmpdump = NULL;

    Py_XDECREF(var_url);
    var_url = NULL;

    Py_XDECREF(var_player_url);
    var_player_url = NULL;

    Py_XDECREF(var_page_url);
    var_page_url = NULL;

    Py_XDECREF(var_app);
    var_app = NULL;

    Py_XDECREF(var_play_path);
    var_play_path = NULL;

    Py_XDECREF(var_tc_url);
    var_tc_url = NULL;

    Py_XDECREF(var_flash_version);
    var_flash_version = NULL;

    Py_XDECREF(var_live);
    var_live = NULL;

    Py_XDECREF(var_conn);
    var_conn = NULL;

    Py_XDECREF(var_protocol);
    var_protocol = NULL;

    Py_XDECREF(var_real_time);
    var_real_time = NULL;

    Py_XDECREF(var_no_resume);
    var_no_resume = NULL;

    Py_XDECREF(var_continue_dl);
    var_continue_dl = NULL;

    CHECK_OBJECT(var_tmpfilename);
    Py_DECREF(var_tmpfilename);
    var_tmpfilename = NULL;

    Py_XDECREF(var_test);
    var_test = NULL;

    Py_XDECREF(var_basic_args);
    var_basic_args = NULL;

    Py_XDECREF(var_entry);
    var_entry = NULL;

    Py_XDECREF(var_args);
    var_args = NULL;

    Py_XDECREF(var_started);
    var_started = NULL;

    Py_XDECREF(var_retval);
    var_retval = NULL;

    Py_XDECREF(var_prevsize);
    var_prevsize = NULL;

    Py_XDECREF(var_cursize);
    var_cursize = NULL;

    Py_XDECREF(var_fsize);
    var_fsize = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    CHECK_OBJECT(par_info_dict);
    Py_DECREF(par_info_dict);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    CHECK_OBJECT(par_info_dict);
    Py_DECREF(par_info_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$downloader$rtmp$$$function_2_real_download$$$function_1_run_rtmpdump(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *var_start = NULL;
    PyObject *var_resume_percent = NULL;
    PyObject *var_resume_downloaded_data_len = NULL;
    PyObject *var_proc = NULL;
    PyObject *var_cursor_in_new_line = NULL;
    PyObject *var_proc_stderr_closed = NULL;
    PyObject *var_line = NULL;
    PyObject *var_char = NULL;
    PyObject *var_mobj = NULL;
    PyObject *var_downloaded_data_len = NULL;
    PyObject *var_percent = NULL;
    PyObject *var_time_now = NULL;
    PyObject *var_eta = NULL;
    PyObject *var_speed = NULL;
    PyObject *var_data_len = NULL;
    struct Nuitka_FrameObject *frame_99a5d0108b0d26db1b7768f228aadd8d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_99a5d0108b0d26db1b7768f228aadd8d = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_99a5d0108b0d26db1b7768f228aadd8d)) {
        Py_XDECREF(cache_frame_99a5d0108b0d26db1b7768f228aadd8d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_99a5d0108b0d26db1b7768f228aadd8d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_99a5d0108b0d26db1b7768f228aadd8d = MAKE_FUNCTION_FRAME(codeobj_99a5d0108b0d26db1b7768f228aadd8d, module_youtube_dl$downloader$rtmp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_99a5d0108b0d26db1b7768f228aadd8d->m_type_description == NULL);
    frame_99a5d0108b0d26db1b7768f228aadd8d = cache_frame_99a5d0108b0d26db1b7768f228aadd8d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_99a5d0108b0d26db1b7768f228aadd8d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_99a5d0108b0d26db1b7768f228aadd8d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_time);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_time);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10359 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 26;
            type_description_1 = "ooooooooooooooooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame.f_lineno = 26;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_time);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooooooooooooccc";
            goto frame_exception_exit_1;
        }
        assert(var_start == NULL);
        var_start = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_None;
        assert(var_resume_percent == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_resume_percent = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        assert(var_resume_downloaded_data_len == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_resume_downloaded_data_len = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_subprocess);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_subprocess);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 26369 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 29;
            type_description_1 = "ooooooooooooooooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_Popen);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooooooooooooccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_args);
        tmp_tuple_element_1 = par_args;
        tmp_args_name_1 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = const_str_plain_stderr;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_subprocess);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_subprocess);
        }

        if (tmp_mvar_value_3 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 26369 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 29;
            type_description_1 = "ooooooooooooooooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = tmp_mvar_value_3;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_PIPE);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);

            exception_lineno = 29;
            type_description_1 = "ooooooooooooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame.f_lineno = 29;
        tmp_assign_source_4 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooooooooooooccc";
            goto frame_exception_exit_1;
        }
        assert(var_proc == NULL);
        var_proc = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Py_True;
        assert(var_cursor_in_new_line == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_cursor_in_new_line = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_False;
        assert(var_proc_stderr_closed == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_proc_stderr_closed = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_operand_name_2;
        if (var_proc_stderr_closed == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "proc_stderr_closed");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 33;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }

        tmp_operand_name_2 = var_proc_stderr_closed;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_operand_name_1 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = const_str_empty;
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_7;
            Py_INCREF(var_line);
            Py_XDECREF(old);
        }

    }
    loop_start_2:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(var_proc);
        tmp_expression_name_3 = var_proc;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain_stderr);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame.f_lineno = 37;
        tmp_assign_source_8 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_read, &PyTuple_GET_ITEM(const_tuple_int_pos_1_tuple, 0));

        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_char;
            var_char = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_3;
        CHECK_OBJECT(var_char);
        tmp_operand_name_3 = var_char;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = Py_True;
        {
            PyObject *old = var_proc_stderr_closed;
            var_proc_stderr_closed = tmp_assign_source_9;
            Py_INCREF(var_proc_stderr_closed);
            Py_XDECREF(old);
        }

    }
    goto loop_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_char);
        tmp_compexpr_left_1 = var_char;
        tmp_compexpr_right_1 = LIST_COPY(const_list_bytes_chr_13_bytes_chr_10_list);
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto loop_end_2;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_line);
        tmp_left_name_1 = var_line;
        CHECK_OBJECT(var_char);
        tmp_called_instance_3 = var_char;
        frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame.f_lineno = 43;
        tmp_right_name_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_3, const_str_plain_decode, &PyTuple_GET_ITEM(const_tuple_str_plain_ascii_str_plain_replace_tuple, 0));

        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_assign_source_10 = tmp_left_name_1;
        var_line = tmp_assign_source_10;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 36;
        type_description_1 = "ooooooooooooooooccc";
        goto try_except_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_4;
        CHECK_OBJECT(var_line);
        tmp_operand_name_4 = var_line;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooooooooooccc";
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_re);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2114 ], 24, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }

        tmp_called_instance_4 = tmp_mvar_value_4;
        tmp_args_element_name_1 = const_str_digest_6984ecf82ee346a980379309a892d16f;
        CHECK_OBJECT(var_line);
        tmp_args_element_name_2 = var_line;
        frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_11 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_4, const_str_plain_search, call_args);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_mobj;
            var_mobj = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_mobj);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_mobj);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(var_mobj);
        tmp_called_instance_5 = var_mobj;
        frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame.f_lineno = 49;
        tmp_float_arg_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_group, &PyTuple_GET_ITEM(const_tuple_int_pos_1_tuple, 0));

        if (tmp_float_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_left_name_2 = TO_FLOAT(tmp_float_arg_1);
        Py_DECREF(tmp_float_arg_1);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_right_name_2 = const_int_pos_1024;
        tmp_int_arg_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_left_name_2);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_assign_source_12 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_downloaded_data_len;
            var_downloaded_data_len = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_float_arg_2;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(var_mobj);
        tmp_called_instance_6 = var_mobj;
        frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame.f_lineno = 50;
        tmp_float_arg_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain_group, &PyTuple_GET_ITEM(const_tuple_int_pos_2_tuple, 0));

        if (tmp_float_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_assign_source_13 = TO_FLOAT(tmp_float_arg_2);
        Py_DECREF(tmp_float_arg_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_percent;
            var_percent = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_5;
        if (var_resume_percent == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "resume_percent");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 51;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }

        tmp_operand_name_5 = var_resume_percent;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(var_percent);
        tmp_assign_source_14 = var_percent;
        {
            PyObject *old = var_resume_percent;
            var_resume_percent = tmp_assign_source_14;
            Py_INCREF(var_resume_percent);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(var_downloaded_data_len);
        tmp_assign_source_15 = var_downloaded_data_len;
        {
            PyObject *old = var_resume_downloaded_data_len;
            var_resume_downloaded_data_len = tmp_assign_source_15;
            Py_INCREF(var_resume_downloaded_data_len);
            Py_XDECREF(old);
        }

    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_time);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_time);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10359 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }

        tmp_called_instance_7 = tmp_mvar_value_5;
        frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame.f_lineno = 54;
        tmp_assign_source_16 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, const_str_plain_time);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_time_now;
            var_time_now = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        if (PyCell_GET(self->m_closure[1]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }

        tmp_expression_name_4 = PyCell_GET(self->m_closure[1]);
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain_calc_eta);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_start);
        tmp_args_element_name_3 = var_start;
        CHECK_OBJECT(var_time_now);
        tmp_args_element_name_4 = var_time_now;
        tmp_left_name_3 = const_int_pos_100;
        if (var_resume_percent == NULL) {
            Py_DECREF(tmp_called_name_2);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "resume_percent");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }

        tmp_right_name_3 = var_resume_percent;
        tmp_args_element_name_5 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_left_name_3, tmp_right_name_3);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_percent);
        tmp_left_name_4 = var_percent;
        if (var_resume_percent == NULL) {
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_5);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "resume_percent");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }

        tmp_right_name_4 = var_resume_percent;
        tmp_args_element_name_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_4);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_5);

            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_5);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_eta;
            var_eta = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        if (PyCell_GET(self->m_closure[1]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }

        tmp_expression_name_5 = PyCell_GET(self->m_closure[1]);
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, const_str_plain_calc_speed);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_start);
        tmp_args_element_name_7 = var_start;
        CHECK_OBJECT(var_time_now);
        tmp_args_element_name_8 = var_time_now;
        CHECK_OBJECT(var_downloaded_data_len);
        tmp_left_name_5 = var_downloaded_data_len;
        if (var_resume_downloaded_data_len == NULL) {
            Py_DECREF(tmp_called_name_3);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "resume_downloaded_data_len");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }

        tmp_right_name_5 = var_resume_downloaded_data_len;
        tmp_args_element_name_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_5);
        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_9);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_speed;
            var_speed = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = Py_None;
        {
            PyObject *old = var_data_len;
            var_data_len = tmp_assign_source_19;
            Py_INCREF(var_data_len);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_7_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_percent);
        tmp_compexpr_left_2 = var_percent;
        tmp_compexpr_right_2 = const_int_0;
        tmp_tmp_condition_result_7_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_7_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_7_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_7_object_1);

            exception_lineno = 58;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_condition_result_7 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_7_object_1);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT(var_downloaded_data_len);
        tmp_left_name_7 = var_downloaded_data_len;
        tmp_right_name_6 = const_int_pos_100;
        tmp_left_name_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_name_7, tmp_right_name_6);
        if (tmp_left_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_percent);
        tmp_right_name_7 = var_percent;
        tmp_int_arg_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_6, tmp_right_name_7);
        Py_DECREF(tmp_left_name_6);
        if (tmp_int_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_assign_source_20 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_data_len;
            assert(old != NULL);
            var_data_len = tmp_assign_source_20;
            Py_DECREF(old);
        }

    }
    branch_no_7:;
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        if (PyCell_GET(self->m_closure[1]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }

        tmp_expression_name_6 = PyCell_GET(self->m_closure[1]);
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, const_str_plain__hook_progress);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_dict_key_2 = const_str_plain_status;
        tmp_dict_value_2 = const_str_plain_downloading;
        tmp_args_element_name_10 = _PyDict_NewPresized( 8 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_10, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_downloaded_bytes;
        CHECK_OBJECT(var_downloaded_data_len);
        tmp_dict_value_3 = var_downloaded_data_len;
        tmp_res = PyDict_SetItem(tmp_args_element_name_10, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_total_bytes_estimate;
        CHECK_OBJECT(var_data_len);
        tmp_dict_value_4 = var_data_len;
        tmp_res = PyDict_SetItem(tmp_args_element_name_10, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = const_str_plain_tmpfilename;
        if (PyCell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_element_name_10);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "tmpfilename");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }

        tmp_dict_value_5 = PyCell_GET(self->m_closure[2]);
        tmp_res = PyDict_SetItem(tmp_args_element_name_10, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = const_str_plain_filename;
        if (PyCell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_element_name_10);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "filename");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }

        tmp_dict_value_6 = PyCell_GET(self->m_closure[0]);
        tmp_res = PyDict_SetItem(tmp_args_element_name_10, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = const_str_plain_eta;
        CHECK_OBJECT(var_eta);
        tmp_dict_value_7 = var_eta;
        tmp_res = PyDict_SetItem(tmp_args_element_name_10, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = const_str_plain_elapsed;
        CHECK_OBJECT(var_time_now);
        tmp_left_name_8 = var_time_now;
        CHECK_OBJECT(var_start);
        tmp_right_name_8 = var_start;
        tmp_dict_value_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_8, tmp_right_name_8);
        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_element_name_10);

            exception_lineno = 67;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_10, tmp_dict_key_8, tmp_dict_value_8);
        Py_DECREF(tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = const_str_plain_speed;
        CHECK_OBJECT(var_speed);
        tmp_dict_value_9 = var_speed;
        tmp_res = PyDict_SetItem(tmp_args_element_name_10, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame.f_lineno = 60;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_10);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = Py_False;
        {
            PyObject *old = var_cursor_in_new_line;
            var_cursor_in_new_line = tmp_assign_source_21;
            Py_INCREF(var_cursor_in_new_line);
            Py_XDECREF(old);
        }

    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_re);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2114 ], 24, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }

        tmp_called_instance_8 = tmp_mvar_value_6;
        tmp_args_element_name_11 = const_str_digest_ff84610118178f8c4061c05c505dd2cb;
        CHECK_OBJECT(var_line);
        tmp_args_element_name_12 = var_line;
        frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = {tmp_args_element_name_11, tmp_args_element_name_12};
            tmp_assign_source_22 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_8, const_str_plain_search, call_args);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_mobj;
            assert(old != NULL);
            var_mobj = tmp_assign_source_22;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_mobj);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_mobj);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_condition_result_8 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_int_arg_3;
        PyObject *tmp_left_name_9;
        PyObject *tmp_float_arg_3;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_right_name_9;
        CHECK_OBJECT(var_mobj);
        tmp_called_instance_9 = var_mobj;
        frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame.f_lineno = 75;
        tmp_float_arg_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_9, const_str_plain_group, &PyTuple_GET_ITEM(const_tuple_int_pos_1_tuple, 0));

        if (tmp_float_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_left_name_9 = TO_FLOAT(tmp_float_arg_3);
        Py_DECREF(tmp_float_arg_3);
        if (tmp_left_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_right_name_9 = const_int_pos_1024;
        tmp_int_arg_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_name_9, tmp_right_name_9);
        Py_DECREF(tmp_left_name_9);
        if (tmp_int_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_assign_source_23 = PyNumber_Int(tmp_int_arg_3);
        Py_DECREF(tmp_int_arg_3);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_downloaded_data_len;
            var_downloaded_data_len = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_time);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_time);
        }

        if (tmp_mvar_value_7 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10359 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }

        tmp_called_instance_10 = tmp_mvar_value_7;
        frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame.f_lineno = 76;
        tmp_assign_source_24 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, const_str_plain_time);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_time_now;
            var_time_now = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        if (PyCell_GET(self->m_closure[1]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 77;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }

        tmp_called_instance_11 = PyCell_GET(self->m_closure[1]);
        CHECK_OBJECT(var_start);
        tmp_args_element_name_13 = var_start;
        CHECK_OBJECT(var_time_now);
        tmp_args_element_name_14 = var_time_now;
        CHECK_OBJECT(var_downloaded_data_len);
        tmp_args_element_name_15 = var_downloaded_data_len;
        frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15};
            tmp_assign_source_25 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_11, const_str_plain_calc_speed, call_args);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_speed;
            var_speed = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        if (PyCell_GET(self->m_closure[1]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 78;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }

        tmp_expression_name_7 = PyCell_GET(self->m_closure[1]);
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, const_str_plain__hook_progress);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_dict_key_10 = const_str_plain_downloaded_bytes;
        CHECK_OBJECT(var_downloaded_data_len);
        tmp_dict_value_10 = var_downloaded_data_len;
        tmp_args_element_name_16 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_16, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = const_str_plain_tmpfilename;
        if (PyCell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_args_element_name_16);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "tmpfilename");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }

        tmp_dict_value_11 = PyCell_GET(self->m_closure[2]);
        tmp_res = PyDict_SetItem(tmp_args_element_name_16, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = const_str_plain_filename;
        if (PyCell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_args_element_name_16);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "filename");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }

        tmp_dict_value_12 = PyCell_GET(self->m_closure[0]);
        tmp_res = PyDict_SetItem(tmp_args_element_name_16, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = const_str_plain_status;
        tmp_dict_value_13 = const_str_plain_downloading;
        tmp_res = PyDict_SetItem(tmp_args_element_name_16, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = const_str_plain_elapsed;
        CHECK_OBJECT(var_time_now);
        tmp_left_name_10 = var_time_now;
        CHECK_OBJECT(var_start);
        tmp_right_name_10 = var_start;
        tmp_dict_value_14 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_10, tmp_right_name_10);
        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_args_element_name_16);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_16, tmp_dict_key_14, tmp_dict_value_14);
        Py_DECREF(tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = const_str_plain_speed;
        CHECK_OBJECT(var_speed);
        tmp_dict_value_15 = var_speed;
        tmp_res = PyDict_SetItem(tmp_args_element_name_16, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame.f_lineno = 78;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_16);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_16);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = Py_False;
        {
            PyObject *old = var_cursor_in_new_line;
            var_cursor_in_new_line = tmp_assign_source_26;
            Py_INCREF(var_cursor_in_new_line);
            Py_XDECREF(old);
        }

    }
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_4;
        if (PyCell_GET(self->m_closure[1]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 87;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }

        tmp_expression_name_8 = PyCell_GET(self->m_closure[1]);
        tmp_called_instance_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, const_str_plain_params);
        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame.f_lineno = 87;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_12, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_verbose_false_tuple, 0));

        Py_DECREF(tmp_called_instance_12);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 87;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_condition_result_9 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_operand_name_6;
        if (var_cursor_in_new_line == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "cursor_in_new_line");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }

        tmp_operand_name_6 = var_cursor_in_new_line;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_condition_result_10 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_result_4;
        if (PyCell_GET(self->m_closure[1]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 89;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }

        tmp_called_instance_13 = PyCell_GET(self->m_closure[1]);
        frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame.f_lineno = 89;
        tmp_call_result_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_13, const_str_plain_to_screen, &PyTuple_GET_ITEM(const_tuple_str_empty_tuple, 0));

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_10:;
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = Py_True;
        {
            PyObject *old = var_cursor_in_new_line;
            var_cursor_in_new_line = tmp_assign_source_27;
            Py_INCREF(var_cursor_in_new_line);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        if (PyCell_GET(self->m_closure[1]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 91;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }

        tmp_expression_name_9 = PyCell_GET(self->m_closure[1]);
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, const_str_plain_to_screen);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        tmp_left_name_11 = const_str_digest_3c4ac29844f1863aa0310a751d83b281;
        CHECK_OBJECT(var_line);
        tmp_right_name_11 = var_line;
        tmp_args_element_name_17 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_11, tmp_right_name_11);
        if (tmp_args_element_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 91;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame.f_lineno = 91;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_17);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_17);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_9:;
    branch_end_8:;
    branch_end_5:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 33;
        type_description_1 = "ooooooooooooooooccc";
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_99a5d0108b0d26db1b7768f228aadd8d, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_99a5d0108b0d26db1b7768f228aadd8d, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    PyException_SetTraceback(exception_keeper_value_1, (PyObject *)exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        PyObject *tmp_called_instance_14;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(var_proc);
        tmp_called_instance_14 = var_proc;
        frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame.f_lineno = 93;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_14, const_str_plain_wait);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooooooccc";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_6);
    }
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 32;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame) frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooccc";
    goto try_except_handler_3;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
    {
        PyObject *tmp_called_instance_15;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(var_proc);
        tmp_called_instance_15 = var_proc;
        frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame.f_lineno = 93;
        tmp_call_result_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_15, const_str_plain_wait);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooooooccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_operand_name_7;
        if (var_cursor_in_new_line == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "cursor_in_new_line");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;
            type_description_1 = "ooooooooooooooooccc";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_7 = var_cursor_in_new_line;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooooooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_called_instance_16;
        PyObject *tmp_call_result_8;
        if (PyCell_GET(self->m_closure[1]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_16 = PyCell_GET(self->m_closure[1]);
        frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame.f_lineno = 95;
        tmp_call_result_8 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_16, const_str_plain_to_screen, &PyTuple_GET_ITEM(const_tuple_str_empty_tuple, 0));

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_11:;
    {
        PyObject *tmp_expression_name_10;
        CHECK_OBJECT(var_proc);
        tmp_expression_name_10 = var_proc;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_10, const_str_plain_returncode);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooooooccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_99a5d0108b0d26db1b7768f228aadd8d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_99a5d0108b0d26db1b7768f228aadd8d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_99a5d0108b0d26db1b7768f228aadd8d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_99a5d0108b0d26db1b7768f228aadd8d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_99a5d0108b0d26db1b7768f228aadd8d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_99a5d0108b0d26db1b7768f228aadd8d, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_99a5d0108b0d26db1b7768f228aadd8d,
        type_description_1,
        par_args,
        var_start,
        var_resume_percent,
        var_resume_downloaded_data_len,
        var_proc,
        var_cursor_in_new_line,
        var_proc_stderr_closed,
        var_line,
        var_char,
        var_mobj,
        var_downloaded_data_len,
        var_percent,
        var_time_now,
        var_eta,
        var_speed,
        var_data_len,
        self->m_closure[1],
        self->m_closure[2],
        self->m_closure[0]
    );


    // Release cached frame.
    if (frame_99a5d0108b0d26db1b7768f228aadd8d == cache_frame_99a5d0108b0d26db1b7768f228aadd8d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_99a5d0108b0d26db1b7768f228aadd8d);
    }
    cache_frame_99a5d0108b0d26db1b7768f228aadd8d = NULL;

    assertFrameObject(frame_99a5d0108b0d26db1b7768f228aadd8d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_start);
    Py_DECREF(var_start);
    var_start = NULL;

    Py_XDECREF(var_resume_percent);
    var_resume_percent = NULL;

    Py_XDECREF(var_resume_downloaded_data_len);
    var_resume_downloaded_data_len = NULL;

    CHECK_OBJECT(var_proc);
    Py_DECREF(var_proc);
    var_proc = NULL;

    Py_XDECREF(var_cursor_in_new_line);
    var_cursor_in_new_line = NULL;

    Py_XDECREF(var_proc_stderr_closed);
    var_proc_stderr_closed = NULL;

    Py_XDECREF(var_line);
    var_line = NULL;

    Py_XDECREF(var_char);
    var_char = NULL;

    Py_XDECREF(var_mobj);
    var_mobj = NULL;

    Py_XDECREF(var_downloaded_data_len);
    var_downloaded_data_len = NULL;

    Py_XDECREF(var_percent);
    var_percent = NULL;

    Py_XDECREF(var_time_now);
    var_time_now = NULL;

    Py_XDECREF(var_eta);
    var_eta = NULL;

    Py_XDECREF(var_speed);
    var_speed = NULL;

    Py_XDECREF(var_data_len);
    var_data_len = NULL;

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

    Py_XDECREF(var_start);
    var_start = NULL;

    Py_XDECREF(var_resume_percent);
    var_resume_percent = NULL;

    Py_XDECREF(var_resume_downloaded_data_len);
    var_resume_downloaded_data_len = NULL;

    Py_XDECREF(var_proc);
    var_proc = NULL;

    Py_XDECREF(var_cursor_in_new_line);
    var_cursor_in_new_line = NULL;

    Py_XDECREF(var_proc_stderr_closed);
    var_proc_stderr_closed = NULL;

    Py_XDECREF(var_line);
    var_line = NULL;

    Py_XDECREF(var_char);
    var_char = NULL;

    Py_XDECREF(var_mobj);
    var_mobj = NULL;

    Py_XDECREF(var_downloaded_data_len);
    var_downloaded_data_len = NULL;

    Py_XDECREF(var_percent);
    var_percent = NULL;

    Py_XDECREF(var_time_now);
    var_time_now = NULL;

    Py_XDECREF(var_eta);
    var_eta = NULL;

    Py_XDECREF(var_speed);
    var_speed = NULL;

    Py_XDECREF(var_data_len);
    var_data_len = NULL;

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
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_youtube_dl$downloader$rtmp$$$function_1_rtmpdump_version() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$downloader$rtmp$$$function_1_rtmpdump_version,
        const_str_plain_rtmpdump_version,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d9484f7f23e4bb29f41fb85b2f39ba16,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$downloader$rtmp,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$downloader$rtmp$$$function_2_real_download() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$downloader$rtmp$$$function_2_real_download,
        const_str_plain_real_download,
#if PYTHON_VERSION >= 300
        const_str_digest_39ed484318283066546eda0a8e6df402,
#endif
        codeobj_b6d030258f8346854f33fe89a5ab7c12,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$downloader$rtmp,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$downloader$rtmp$$$function_2_real_download$$$function_1_run_rtmpdump() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$downloader$rtmp$$$function_2_real_download$$$function_1_run_rtmpdump,
        const_str_plain_run_rtmpdump,
#if PYTHON_VERSION >= 300
        const_str_digest_e064ce4a29271a3565d38aa56993a1f4,
#endif
        codeobj_99a5d0108b0d26db1b7768f228aadd8d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$downloader$rtmp,
        NULL,
        3
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

function_impl_code functable_youtube_dl$downloader$rtmp[] = {
    impl_youtube_dl$downloader$rtmp$$$function_2_real_download$$$function_1_run_rtmpdump,
    impl_youtube_dl$downloader$rtmp$$$function_1_rtmpdump_version,
    impl_youtube_dl$downloader$rtmp$$$function_2_real_download,
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

    function_impl_code *current = functable_youtube_dl$downloader$rtmp;
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

    if (offset > sizeof(functable_youtube_dl$downloader$rtmp) || offset < 0) {
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
        functable_youtube_dl$downloader$rtmp[offset],
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
        module_youtube_dl$downloader$rtmp,
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
PyObject *modulecode_youtube_dl$downloader$rtmp(PyObject *module) {
    module_youtube_dl$downloader$rtmp = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_youtube_dl$downloader$rtmp;
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
    PRINT_STRING("youtube_dl.downloader.rtmp: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("youtube_dl.downloader.rtmp: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("youtube_dl.downloader.rtmp: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in inityoutube_dl$downloader$rtmp\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_youtube_dl$downloader$rtmp = MODULE_DICT(module_youtube_dl$downloader$rtmp);

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
        moduledict_youtube_dl$downloader$rtmp,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$downloader$rtmp,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$downloader$rtmp,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$downloader$rtmp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$downloader$rtmp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_youtube_dl$downloader$rtmp);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_c5713f6e64cb9c54b251e0a1f3533134;
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
    PyObject *locals_youtube_dl$downloader$rtmp_23 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_98efc4595d1157b1ef160dae4e637a36_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_98efc4595d1157b1ef160dae4e637a36_2 = NULL;
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
        UPDATE_STRING_DICT0(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_1dc2236f36f30c653fa6d1e22a8633a7;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_c5713f6e64cb9c54b251e0a1f3533134 = MAKE_MODULE_FRAME(codeobj_c5713f6e64cb9c54b251e0a1f3533134, module_youtube_dl$downloader$rtmp);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_c5713f6e64cb9c54b251e0a1f3533134);
    assert(Py_REFCNT(frame_c5713f6e64cb9c54b251e0a1f3533134) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_1dc2236f36f30c653fa6d1e22a8633a7;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        frame_c5713f6e64cb9c54b251e0a1f3533134->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
           tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_youtube_dl$downloader$rtmp,
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
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_os;
        tmp_globals_name_1 = (PyObject *)moduledict_youtube_dl$downloader$rtmp;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_c5713f6e64cb9c54b251e0a1f3533134->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_re;
        tmp_globals_name_2 = (PyObject *)moduledict_youtube_dl$downloader$rtmp;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_c5713f6e64cb9c54b251e0a1f3533134->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_subprocess;
        tmp_globals_name_3 = (PyObject *)moduledict_youtube_dl$downloader$rtmp;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_c5713f6e64cb9c54b251e0a1f3533134->m_frame.f_lineno = 5;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_subprocess, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_time;
        tmp_globals_name_4 = (PyObject *)moduledict_youtube_dl$downloader$rtmp;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_c5713f6e64cb9c54b251e0a1f3533134->m_frame.f_lineno = 6;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_common;
        tmp_globals_name_5 = (PyObject *)moduledict_youtube_dl$downloader$rtmp;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_FileDownloader_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_c5713f6e64cb9c54b251e0a1f3533134->m_frame.f_lineno = 8;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_youtube_dl$downloader$rtmp,
                const_str_plain_FileDownloader,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_FileDownloader);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_FileDownloader, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_compat;
        tmp_globals_name_6 = (PyObject *)moduledict_youtube_dl$downloader$rtmp;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_compat_str_tuple;
        tmp_level_name_6 = const_int_pos_2;
        frame_c5713f6e64cb9c54b251e0a1f3533134->m_frame.f_lineno = 9;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_youtube_dl$downloader$rtmp,
                const_str_plain_compat_str,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_compat_str);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_compat_str, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_utils;
        tmp_globals_name_7 = (PyObject *)moduledict_youtube_dl$downloader$rtmp;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_12ea1f003236ae93b797fcd487843c82_tuple;
        tmp_level_name_7 = const_int_pos_2;
        frame_c5713f6e64cb9c54b251e0a1f3533134->m_frame.f_lineno = 10;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_youtube_dl$downloader$rtmp,
                const_str_plain_check_executable,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_check_executable);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_check_executable, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_youtube_dl$downloader$rtmp,
                const_str_plain_encodeFilename,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_encodeFilename);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_encodeFilename, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_youtube_dl$downloader$rtmp,
                const_str_plain_encodeArgument,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_encodeArgument);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_encodeArgument, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_youtube_dl$downloader$rtmp,
                const_str_plain_get_exe_version,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_get_exe_version);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_get_exe_version, tmp_assign_source_15);
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
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_FUNCTION_youtube_dl$downloader$rtmp$$$function_1_rtmpdump_version();



        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_rtmpdump_version, tmp_assign_source_16);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_FileDownloader);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_FileDownloader);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25872 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 23;

            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_assign_source_17 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_17, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_18 = impl___internal__$$$function_4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
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


            exception_lineno = 23;

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


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

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


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

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
        tmp_assign_source_20 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_20;
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


            exception_lineno = 23;

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


        exception_lineno = 23;

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
        PyObject *tmp_assign_source_21;
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


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = const_str_plain_RtmpFD;
        tmp_args_name_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_c5713f6e64cb9c54b251e0a1f3533134->m_frame.f_lineno = 23;
        tmp_assign_source_21 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_21;
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


            exception_lineno = 23;

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


            exception_lineno = 23;

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

            exception_lineno = 23;

            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_3);
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 23;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_22;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_23;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_youtube_dl$downloader$rtmp_23 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_cdfafb0577d67221938717e2a5aa6efd;
        tmp_res = PyObject_SetItem(locals_youtube_dl$downloader$rtmp_23, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_RtmpFD;
        tmp_res = PyObject_SetItem(locals_youtube_dl$downloader$rtmp_23, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_98efc4595d1157b1ef160dae4e637a36_2)) {
            Py_XDECREF(cache_frame_98efc4595d1157b1ef160dae4e637a36_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_98efc4595d1157b1ef160dae4e637a36_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_98efc4595d1157b1ef160dae4e637a36_2 = MAKE_FUNCTION_FRAME(codeobj_98efc4595d1157b1ef160dae4e637a36, module_youtube_dl$downloader$rtmp, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_98efc4595d1157b1ef160dae4e637a36_2->m_type_description == NULL);
        frame_98efc4595d1157b1ef160dae4e637a36_2 = cache_frame_98efc4595d1157b1ef160dae4e637a36_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_98efc4595d1157b1ef160dae4e637a36_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_98efc4595d1157b1ef160dae4e637a36_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$downloader$rtmp$$$function_2_real_download();



        tmp_res = PyObject_SetItem(locals_youtube_dl$downloader$rtmp_23, const_str_plain_real_download, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_98efc4595d1157b1ef160dae4e637a36_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_98efc4595d1157b1ef160dae4e637a36_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_98efc4595d1157b1ef160dae4e637a36_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_98efc4595d1157b1ef160dae4e637a36_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_98efc4595d1157b1ef160dae4e637a36_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_98efc4595d1157b1ef160dae4e637a36_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if (frame_98efc4595d1157b1ef160dae4e637a36_2 == cache_frame_98efc4595d1157b1ef160dae4e637a36_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(frame_98efc4595d1157b1ef160dae4e637a36_2);
        }
        cache_frame_98efc4595d1157b1ef160dae4e637a36_2 = NULL;

        assertFrameObject(frame_98efc4595d1157b1ef160dae4e637a36_2);

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


                exception_lineno = 23;

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
        tmp_res = PyObject_SetItem(locals_youtube_dl$downloader$rtmp_23, const_str_plain___orig_bases__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_RtmpFD;
            tmp_args_name_2 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_youtube_dl$downloader$rtmp_23;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_c5713f6e64cb9c54b251e0a1f3533134->m_frame.f_lineno = 23;
            tmp_assign_source_24 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_24;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_23 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_23);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_youtube_dl$downloader$rtmp_23);
        locals_youtube_dl$downloader$rtmp_23 = NULL;
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

        Py_DECREF(locals_youtube_dl$downloader$rtmp_23);
        locals_youtube_dl$downloader$rtmp_23 = NULL;
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
        exception_lineno = 23;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$downloader$rtmp, (Nuitka_StringObject *)const_str_plain_RtmpFD, tmp_assign_source_23);
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
    RESTORE_FRAME_EXCEPTION(frame_c5713f6e64cb9c54b251e0a1f3533134);
#endif
    popFrameStack();

    assertFrameObject(frame_c5713f6e64cb9c54b251e0a1f3533134);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c5713f6e64cb9c54b251e0a1f3533134);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c5713f6e64cb9c54b251e0a1f3533134, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c5713f6e64cb9c54b251e0a1f3533134->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c5713f6e64cb9c54b251e0a1f3533134, exception_lineno);
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


    return module_youtube_dl$downloader$rtmp;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
