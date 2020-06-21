/* Generated code for Python module 'youtube_dl.extractor.turner'
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

/* The "_module_youtube_dl$extractor$turner" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_youtube_dl$extractor$turner;
PyDictObject *moduledict_youtube_dl$extractor$turner;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_start_time;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_str_plain_secureUrl_tuple;
static PyObject *const_str_digest_e883bca007c83a919ab719e430b1c07a;
extern PyObject *const_str_plain_smil;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_digest_72a520b33405f7adf554e310b6266356;
extern PyObject *const_tuple_str_plain___class___tuple;
static PyObject *const_str_plain_trt;
extern PyObject *const_str_plain__extract_cvp_info;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_dict_f95321192b139e241e1ec13397bf5b8f;
extern PyObject *const_str_plain_compat_str;
extern PyObject *const_str_plain__sort_formats;
extern PyObject *const_str_plain_poster;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_TurnerBaseIE;
static PyObject *const_tuple_ebab68d9dfeed1e3daf4a81d86eb5fa8_tuple;
extern PyObject *const_str_plain_error_msg;
extern PyObject *const_str_plain_group;
extern PyObject *const_str_plain_m3u8_id;
static PyObject *const_str_digest_eb8d1eb66dcf973dfaf0a87878e86f30;
extern PyObject *const_str_plain_default;
extern PyObject *const_dict_7e1d509d9f0adef67df7fa8dd2e83c7a;
extern PyObject *const_str_plain_media;
extern PyObject *const_str_plain_contentId;
static PyObject *const_str_plain_smptett;
static PyObject *const_tuple_str_plain_media_src_tuple;
static PyObject *const_str_plain_totalRuntime;
extern PyObject *const_str_plain_media_src;
extern PyObject *const_str_plain_fatal;
extern PyObject *const_str_plain_image;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_id;
extern PyObject *const_str_plain_hdcore;
extern PyObject *const_str_plain_media_id;
extern PyObject *const_str_plain_stream_data;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_plain_is_live;
static PyObject *const_str_digest_d8b9c1a68397c03c9ccd84e9451428ac;
static PyObject *const_str_digest_48012f5d8fda4277162632d73743b3d3;
static PyObject *const_str_plain_playlistProtection;
static PyObject *const_str_plain_bulkaes;
extern PyObject *const_str_plain_duration;
static PyObject *const_str_plain_secure_path;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_plain_start;
extern PyObject *const_tuple_str_plain_height_tuple;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_description;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_digest_ef96d5b0821d5d2d73b1669644c609ae;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_audio;
extern PyObject *const_str_plain__extract_m3u8_formats;
extern PyObject *const_str_plain_int_or_none;
extern PyObject *const_str_plain_parse_duration;
extern PyObject *const_str_plain_tv;
extern PyObject *const_str_plain_bitrate;
static PyObject *const_str_plain_unprotected;
extern PyObject *const_tuple_str_plain_track_tuple;
static PyObject *const_str_plain_tokenizer_src;
extern PyObject *const_str_plain_label;
extern PyObject *const_str_plain_tbr;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_xpath_text;
extern PyObject *const_str_plain_none;
extern PyObject *const_str_plain_ext;
extern PyObject *const_str_plain_isdigit;
extern PyObject *const_tuple_str_plain_bitrate_tuple;
static PyObject *const_str_digest_8b4c2f003fdff272f4cd6900066b514e;
static PyObject *const_str_digest_077aa892a3f78462cf0d1065c48b65b9;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_format_id;
extern PyObject *const_str_plain__live_title;
static PyObject *const_tuple_str_digest_db378dce4fe8e2de3777a0ec39740057_tuple;
static PyObject *const_str_plain_supported_type;
extern PyObject *const_str_plain_hls;
extern PyObject *const_str_plain_timestamp;
static PyObject *const_str_digest_4b891f58c6c7b3312190a88211a909a0;
extern PyObject *const_str_plain_query;
extern PyObject *const_str_plain_chapters;
extern PyObject *const_str_plain__search_regex;
extern PyObject *const_str_plain_videoId;
extern PyObject *const_str_plain_mp4;
extern PyObject *const_str_plain_strip_or_none;
extern PyObject *const_str_plain_height;
extern PyObject *const_str_plain_episodeNumber;
extern PyObject *const_str_plain_chapter;
extern PyObject *const_str_plain_subtitles;
extern PyObject *const_str_plain_m4a;
static PyObject *const_str_plain_uts;
static PyObject *const_str_plain_chapter_duration;
extern PyObject *const_str_plain__extract_timestamp;
extern PyObject *const_str_plain_headline;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_f4m_id;
static PyObject *const_dict_ddd29883bcc845931a8c1efe063223f2;
static PyObject *const_str_digest_cd5b8f48cd7beb5f5ff5bdb01d4197bc;
extern PyObject *const_str_plain_title;
extern PyObject *const_str_plain_thumbnail;
extern PyObject *const_tuple_str_plain_label_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_video_data_tuple;
extern PyObject *const_str_plain_scc;
static PyObject *const_str_digest_1643a356b9398f5ce79449feb8f5f3d6;
extern PyObject *const_str_plain_endswith;
extern PyObject *const_str_plain_auth_required;
extern PyObject *const_str_plain_en;
extern PyObject *const_tuple_str_plain_url_tuple;
extern PyObject *const_str_plain_vcodec;
extern PyObject *const_tuple_str_plain_width_tuple;
extern PyObject *const_str_plain_compile;
static PyObject *const_tuple_str_plain_cut_tuple;
extern PyObject *const_str_plain_match;
extern PyObject *const_str_plain_token;
extern PyObject *const_str_plain_float_or_none;
extern PyObject *const_str_plain_expected;
extern PyObject *const_str_plain__download_xml;
extern PyObject *const_str_plain_xpath_attr;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_video_url;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_tt;
static PyObject *const_tuple_345b67501cd46fb1917a59e027485db7_tuple;
extern PyObject *const_str_plain__extract_mvpd_auth;
static PyObject *const_tuple_str_digest_e883bca007c83a919ab719e430b1c07a_tuple;
extern PyObject *const_str_plain_lang;
extern PyObject *const_str_digest_9793aff992aa4095bf103dce76bfa1a8;
extern PyObject *const_str_plain_formats;
extern PyObject *const_str_plain_m3u8_url;
static PyObject *const_tuple_str_plain_unprotected_str_plain_bulkaes_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_vtt;
extern PyObject *const_str_plain_m3u8;
extern PyObject *const_str_plain_update_url_query;
extern PyObject *const_str_plain_episode_number;
static PyObject *const_tuple_str_digest_e511be0c5a7fb961102e5866a54e248a_tuple;
static PyObject *const_tuple_72448ac7319afc3b4aa8cccf0e058581_tuple;
extern PyObject *const_str_plain_text;
static PyObject *const_tuple_str_plain_secure_tuple;
extern PyObject *const_str_plain_secureUrl;
extern PyObject *const_str_plain_site_name;
extern PyObject *const_str_plain_search;
extern PyObject *const_tuple_str_plain_lang_tuple;
extern PyObject *const_str_plain_seasonNumber;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_length;
static PyObject *const_str_digest_87e33dfc32ac378cb036e4d479708a86;
extern PyObject *const_str_plain_f4m;
static PyObject *const_dict_775f6489ec0c86e867f6cbd585e8a1b5;
static PyObject *const_tuple_str_digest_077aa892a3f78462cf0d1065c48b65b9_tuple;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_tuple_str_plain_auth_required_tuple;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_str_plain_dateCreated;
extern PyObject *const_str_plain_video_data;
extern PyObject *const_str_digest_0168e94d2937ecac0372558bb248b5fb;
static PyObject *const_str_digest_e511be0c5a7fb961102e5866a54e248a;
static PyObject *const_tuple_str_digest_1643a356b9398f5ce79449feb8f5f3d6_tuple;
static PyObject *const_str_digest_5ed199c50092a7a3f0f174fa6e1a01f6;
extern PyObject *const_str_plain_setdefault;
extern PyObject *const_tuple_str_plain_image_tuple;
static PyObject *const_tuple_61df781411a9487879e29d9810b405c2_tuple;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain__download_json;
extern PyObject *const_dict_a963d82ead3eee96783c188d5867b151;
extern PyObject *const_tuple_str_plain_duration_tuple;
extern PyObject *const_dict_5a4b43d9442068c8ed68fb42270f3fd3;
static PyObject *const_str_plain_contentSegments;
extern PyObject *const_str_plain_hds;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_url_or_none;
extern PyObject *const_str_plain___class__;
extern PyObject *const_tuple_str_plain_AdobePassIE_tuple;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_plain_cut;
extern PyObject *const_str_plain_upload_date;
extern PyObject *const_str_plain_true;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_tokenizer_query;
static PyObject *const_str_plain_custom_tokenizer_query;
static PyObject *const_tuple_str_plain_totalRuntime_tuple;
static PyObject *const_str_plain_spe;
extern PyObject *const_str_plain_unicode_literals;
static PyObject *const_str_plain_streams_data;
extern PyObject *const_str_plain_AdobePassIE;
extern PyObject *const_str_plain_season_number;
extern PyObject *const_str_plain_update;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_findall;
extern PyObject *const_str_plain_determine_ext;
extern PyObject *const_str_plain__seekable;
extern PyObject *const_tuple_str_plain_compat_str_tuple;
static PyObject *const_tuple_str_plain_playlistProtection_tuple;
extern PyObject *const_str_plain_accessToken;
extern PyObject *const_str_plain__extract_smil_formats;
extern PyObject *const_str_plain_width;
extern PyObject *const_str_plain_metas;
static PyObject *const_str_plain_ap_data;
extern PyObject *const_str_plain_attrib;
extern PyObject *const_str_plain_series;
extern PyObject *const_tuple_str_plain_start_tuple;
extern PyObject *const_str_plain_auth;
extern PyObject *const_str_plain__extract_f4m_formats;
extern PyObject *const_str_plain_webvtt;
extern PyObject *const_str_plain_thumbnails;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_digest_30db7040b77d807146fa83bae61f35b3;
extern PyObject *const_str_plain_url;
static PyObject *const_tuple_str_digest_fb55880256e567b1ce9958e7a230af92_tuple;
extern PyObject *const_str_plain_isLive;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_0084b0f9d66d985442b7003e6ad6ff29;
static PyObject *const_str_plain__add_akamai_spe_token;
static PyObject *const_str_digest_db378dce4fe8e2de3777a0ec39740057;
extern PyObject *const_str_plain_ExtractorError;
extern PyObject *const_str_plain_adobepass;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_version;
static PyObject *const_str_plain__AKAMAI_SPE_TOKEN_CACHE;
extern PyObject *const_str_plain_showTitle;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_compat;
static PyObject *const_str_digest_e8e27f0e4d2e934e0e6af81b86cb0def;
extern PyObject *const_str_plain_track;
extern PyObject *const_str_plain_secure;
extern PyObject *const_dict_6ddf79e3d402bb13f3beb7fee131be0c;
static PyObject *const_str_digest_fb55880256e567b1ce9958e7a230af92;
extern PyObject *const_tuple_str_plain_format_tuple;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_digest_df3d7aa8c3bb2595f4f5852ae8c16add;
extern PyObject *const_str_plain_startswith;
static PyObject *const_str_digest_a3b3433ee93cf1020d42578410f67163;
extern PyObject *const_str_plain_content_id;
extern PyObject *const_tuple_str_digest_df3d7aa8c3bb2595f4f5852ae8c16add_tuple;
extern PyObject *const_str_plain_end_time;
extern PyObject *const_str_plain__extract_ngtv_info;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_e883bca007c83a919ab719e430b1c07a = UNSTREAM_STRING_ASCII(&constant_bin[ 1996452 ], 8, 0);
    const_str_digest_72a520b33405f7adf554e310b6266356 = UNSTREAM_STRING_ASCII(&constant_bin[ 1996460 ], 31, 0);
    const_str_plain_trt = UNSTREAM_STRING_ASCII(&constant_bin[ 1371307 ], 3, 1);
    const_tuple_ebab68d9dfeed1e3daf4a81d86eb5fa8_tuple = PyTuple_New(11);
    PyTuple_SET_ITEM(const_tuple_ebab68d9dfeed1e3daf4a81d86eb5fa8_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain_tokenizer_src = UNSTREAM_STRING_ASCII(&constant_bin[ 1996491 ], 13, 1);
    PyTuple_SET_ITEM(const_tuple_ebab68d9dfeed1e3daf4a81d86eb5fa8_tuple, 1, const_str_plain_tokenizer_src); Py_INCREF(const_str_plain_tokenizer_src);
    PyTuple_SET_ITEM(const_tuple_ebab68d9dfeed1e3daf4a81d86eb5fa8_tuple, 2, const_str_plain_video_url); Py_INCREF(const_str_plain_video_url);
    PyTuple_SET_ITEM(const_tuple_ebab68d9dfeed1e3daf4a81d86eb5fa8_tuple, 3, const_str_plain_content_id); Py_INCREF(const_str_plain_content_id);
    const_str_plain_ap_data = UNSTREAM_STRING_ASCII(&constant_bin[ 1148905 ], 7, 1);
    PyTuple_SET_ITEM(const_tuple_ebab68d9dfeed1e3daf4a81d86eb5fa8_tuple, 4, const_str_plain_ap_data); Py_INCREF(const_str_plain_ap_data);
    const_str_plain_custom_tokenizer_query = UNSTREAM_STRING_ASCII(&constant_bin[ 1996504 ], 22, 1);
    PyTuple_SET_ITEM(const_tuple_ebab68d9dfeed1e3daf4a81d86eb5fa8_tuple, 5, const_str_plain_custom_tokenizer_query); Py_INCREF(const_str_plain_custom_tokenizer_query);
    const_str_plain_secure_path = UNSTREAM_STRING_ASCII(&constant_bin[ 1996526 ], 11, 1);
    PyTuple_SET_ITEM(const_tuple_ebab68d9dfeed1e3daf4a81d86eb5fa8_tuple, 6, const_str_plain_secure_path); Py_INCREF(const_str_plain_secure_path);
    PyTuple_SET_ITEM(const_tuple_ebab68d9dfeed1e3daf4a81d86eb5fa8_tuple, 7, const_str_plain_token); Py_INCREF(const_str_plain_token);
    PyTuple_SET_ITEM(const_tuple_ebab68d9dfeed1e3daf4a81d86eb5fa8_tuple, 8, const_str_plain_query); Py_INCREF(const_str_plain_query);
    PyTuple_SET_ITEM(const_tuple_ebab68d9dfeed1e3daf4a81d86eb5fa8_tuple, 9, const_str_plain_auth); Py_INCREF(const_str_plain_auth);
    PyTuple_SET_ITEM(const_tuple_ebab68d9dfeed1e3daf4a81d86eb5fa8_tuple, 10, const_str_plain_error_msg); Py_INCREF(const_str_plain_error_msg);
    const_str_digest_eb8d1eb66dcf973dfaf0a87878e86f30 = UNSTREAM_STRING_ASCII(&constant_bin[ 1996537 ], 36, 0);
    const_str_plain_smptett = UNSTREAM_STRING_ASCII(&constant_bin[ 1996573 ], 7, 1);
    const_tuple_str_plain_media_src_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_media_src_tuple, 0, const_str_plain_media_src); Py_INCREF(const_str_plain_media_src);
    const_str_plain_totalRuntime = UNSTREAM_STRING_ASCII(&constant_bin[ 1996580 ], 12, 1);
    const_str_digest_d8b9c1a68397c03c9ccd84e9451428ac = UNSTREAM_STRING_ASCII(&constant_bin[ 1412360 ], 7, 0);
    const_str_digest_48012f5d8fda4277162632d73743b3d3 = UNSTREAM_STRING_ASCII(&constant_bin[ 1996592 ], 19, 0);
    const_str_plain_playlistProtection = UNSTREAM_STRING_ASCII(&constant_bin[ 1996611 ], 18, 1);
    const_str_plain_bulkaes = UNSTREAM_STRING_ASCII(&constant_bin[ 1996629 ], 7, 1);
    const_str_digest_ef96d5b0821d5d2d73b1669644c609ae = UNSTREAM_STRING_ASCII(&constant_bin[ 1996636 ], 34, 0);
    const_str_plain_unprotected = UNSTREAM_STRING_ASCII(&constant_bin[ 1996670 ], 11, 1);
    const_str_digest_8b4c2f003fdff272f4cd6900066b514e = UNSTREAM_STRING_ASCII(&constant_bin[ 1996681 ], 36, 0);
    const_str_digest_077aa892a3f78462cf0d1065c48b65b9 = UNSTREAM_STRING_ASCII(&constant_bin[ 1996717 ], 61, 0);
    const_tuple_str_digest_db378dce4fe8e2de3777a0ec39740057_tuple = PyTuple_New(1);
    const_str_digest_db378dce4fe8e2de3777a0ec39740057 = UNSTREAM_STRING_ASCII(&constant_bin[ 1053703 ], 4, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_db378dce4fe8e2de3777a0ec39740057_tuple, 0, const_str_digest_db378dce4fe8e2de3777a0ec39740057); Py_INCREF(const_str_digest_db378dce4fe8e2de3777a0ec39740057);
    const_str_plain_supported_type = UNSTREAM_STRING_ASCII(&constant_bin[ 1996778 ], 14, 1);
    const_str_digest_4b891f58c6c7b3312190a88211a909a0 = UNSTREAM_STRING_ASCII(&constant_bin[ 1996545 ], 27, 0);
    const_str_plain_uts = UNSTREAM_STRING_ASCII(&constant_bin[ 5617 ], 3, 1);
    const_str_plain_chapter_duration = UNSTREAM_STRING_ASCII(&constant_bin[ 1996792 ], 16, 1);
    const_dict_ddd29883bcc845931a8c1efe063223f2 = _PyDict_NewPresized( 2 );
    PyDict_SetItem(const_dict_ddd29883bcc845931a8c1efe063223f2, const_str_plain_vcodec, const_str_plain_none);
    PyDict_SetItem(const_dict_ddd29883bcc845931a8c1efe063223f2, const_str_plain_ext, const_str_plain_m4a);
    assert(PyDict_Size(const_dict_ddd29883bcc845931a8c1efe063223f2) == 2);
    const_str_digest_cd5b8f48cd7beb5f5ff5bdb01d4197bc = UNSTREAM_STRING_ASCII(&constant_bin[ 1996808 ], 11, 0);
    const_str_digest_1643a356b9398f5ce79449feb8f5f3d6 = UNSTREAM_STRING_ASCII(&constant_bin[ 1996819 ], 7, 0);
    const_tuple_str_plain_cut_tuple = PyTuple_New(1);
    const_str_plain_cut = UNSTREAM_STRING_ASCII(&constant_bin[ 31244 ], 3, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_cut_tuple, 0, const_str_plain_cut); Py_INCREF(const_str_plain_cut);
    const_tuple_345b67501cd46fb1917a59e027485db7_tuple = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 1996826 ], 270);
    const_tuple_str_digest_e883bca007c83a919ab719e430b1c07a_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_e883bca007c83a919ab719e430b1c07a_tuple, 0, const_str_digest_e883bca007c83a919ab719e430b1c07a); Py_INCREF(const_str_digest_e883bca007c83a919ab719e430b1c07a);
    const_tuple_str_plain_unprotected_str_plain_bulkaes_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_unprotected_str_plain_bulkaes_tuple, 0, const_str_plain_unprotected); Py_INCREF(const_str_plain_unprotected);
    PyTuple_SET_ITEM(const_tuple_str_plain_unprotected_str_plain_bulkaes_tuple, 1, const_str_plain_bulkaes); Py_INCREF(const_str_plain_bulkaes);
    const_tuple_str_digest_e511be0c5a7fb961102e5866a54e248a_tuple = PyTuple_New(1);
    const_str_digest_e511be0c5a7fb961102e5866a54e248a = UNSTREAM_STRING_ASCII(&constant_bin[ 1997096 ], 21, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_e511be0c5a7fb961102e5866a54e248a_tuple, 0, const_str_digest_e511be0c5a7fb961102e5866a54e248a); Py_INCREF(const_str_digest_e511be0c5a7fb961102e5866a54e248a);
    const_tuple_72448ac7319afc3b4aa8cccf0e058581_tuple = PyTuple_New(10);
    PyTuple_SET_ITEM(const_tuple_72448ac7319afc3b4aa8cccf0e058581_tuple, 0, const_str_plain_xpath_text); Py_INCREF(const_str_plain_xpath_text);
    PyTuple_SET_ITEM(const_tuple_72448ac7319afc3b4aa8cccf0e058581_tuple, 1, const_str_plain_int_or_none); Py_INCREF(const_str_plain_int_or_none);
    PyTuple_SET_ITEM(const_tuple_72448ac7319afc3b4aa8cccf0e058581_tuple, 2, const_str_plain_determine_ext); Py_INCREF(const_str_plain_determine_ext);
    PyTuple_SET_ITEM(const_tuple_72448ac7319afc3b4aa8cccf0e058581_tuple, 3, const_str_plain_float_or_none); Py_INCREF(const_str_plain_float_or_none);
    PyTuple_SET_ITEM(const_tuple_72448ac7319afc3b4aa8cccf0e058581_tuple, 4, const_str_plain_parse_duration); Py_INCREF(const_str_plain_parse_duration);
    PyTuple_SET_ITEM(const_tuple_72448ac7319afc3b4aa8cccf0e058581_tuple, 5, const_str_plain_xpath_attr); Py_INCREF(const_str_plain_xpath_attr);
    PyTuple_SET_ITEM(const_tuple_72448ac7319afc3b4aa8cccf0e058581_tuple, 6, const_str_plain_update_url_query); Py_INCREF(const_str_plain_update_url_query);
    PyTuple_SET_ITEM(const_tuple_72448ac7319afc3b4aa8cccf0e058581_tuple, 7, const_str_plain_ExtractorError); Py_INCREF(const_str_plain_ExtractorError);
    PyTuple_SET_ITEM(const_tuple_72448ac7319afc3b4aa8cccf0e058581_tuple, 8, const_str_plain_strip_or_none); Py_INCREF(const_str_plain_strip_or_none);
    PyTuple_SET_ITEM(const_tuple_72448ac7319afc3b4aa8cccf0e058581_tuple, 9, const_str_plain_url_or_none); Py_INCREF(const_str_plain_url_or_none);
    const_tuple_str_plain_secure_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_secure_tuple, 0, const_str_plain_secure); Py_INCREF(const_str_plain_secure);
    const_str_digest_87e33dfc32ac378cb036e4d479708a86 = UNSTREAM_STRING_ASCII(&constant_bin[ 1997117 ], 9, 0);
    const_dict_775f6489ec0c86e867f6cbd585e8a1b5 = _PyDict_NewPresized( 3 );
    PyDict_SetItem(const_dict_775f6489ec0c86e867f6cbd585e8a1b5, const_str_plain_scc, const_str_plain_scc);
    PyDict_SetItem(const_dict_775f6489ec0c86e867f6cbd585e8a1b5, const_str_plain_webvtt, const_str_plain_vtt);
    PyDict_SetItem(const_dict_775f6489ec0c86e867f6cbd585e8a1b5, const_str_plain_smptett, const_str_plain_tt);
    assert(PyDict_Size(const_dict_775f6489ec0c86e867f6cbd585e8a1b5) == 3);
    const_tuple_str_digest_077aa892a3f78462cf0d1065c48b65b9_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_077aa892a3f78462cf0d1065c48b65b9_tuple, 0, const_str_digest_077aa892a3f78462cf0d1065c48b65b9); Py_INCREF(const_str_digest_077aa892a3f78462cf0d1065c48b65b9);
    const_tuple_str_plain_auth_required_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_auth_required_tuple, 0, const_str_plain_auth_required); Py_INCREF(const_str_plain_auth_required);
    const_tuple_str_digest_1643a356b9398f5ce79449feb8f5f3d6_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_1643a356b9398f5ce79449feb8f5f3d6_tuple, 0, const_str_digest_1643a356b9398f5ce79449feb8f5f3d6); Py_INCREF(const_str_digest_1643a356b9398f5ce79449feb8f5f3d6);
    const_str_digest_5ed199c50092a7a3f0f174fa6e1a01f6 = UNSTREAM_STRING_ASCII(&constant_bin[ 1997126 ], 19, 0);
    const_tuple_61df781411a9487879e29d9810b405c2_tuple = PyTuple_New(14);
    PyTuple_SET_ITEM(const_tuple_61df781411a9487879e29d9810b405c2_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_61df781411a9487879e29d9810b405c2_tuple, 1, const_str_plain_media_id); Py_INCREF(const_str_plain_media_id);
    PyTuple_SET_ITEM(const_tuple_61df781411a9487879e29d9810b405c2_tuple, 2, const_str_plain_tokenizer_query); Py_INCREF(const_str_plain_tokenizer_query);
    PyTuple_SET_ITEM(const_tuple_61df781411a9487879e29d9810b405c2_tuple, 3, const_str_plain_ap_data); Py_INCREF(const_str_plain_ap_data);
    const_str_plain_streams_data = UNSTREAM_STRING_ASCII(&constant_bin[ 1997145 ], 12, 1);
    PyTuple_SET_ITEM(const_tuple_61df781411a9487879e29d9810b405c2_tuple, 4, const_str_plain_streams_data); Py_INCREF(const_str_plain_streams_data);
    PyTuple_SET_ITEM(const_tuple_61df781411a9487879e29d9810b405c2_tuple, 5, const_str_plain_duration); Py_INCREF(const_str_plain_duration);
    PyTuple_SET_ITEM(const_tuple_61df781411a9487879e29d9810b405c2_tuple, 6, const_str_plain_chapters); Py_INCREF(const_str_plain_chapters);
    PyTuple_SET_ITEM(const_tuple_61df781411a9487879e29d9810b405c2_tuple, 7, const_str_plain_formats); Py_INCREF(const_str_plain_formats);
    PyTuple_SET_ITEM(const_tuple_61df781411a9487879e29d9810b405c2_tuple, 8, const_str_plain_supported_type); Py_INCREF(const_str_plain_supported_type);
    PyTuple_SET_ITEM(const_tuple_61df781411a9487879e29d9810b405c2_tuple, 9, const_str_plain_stream_data); Py_INCREF(const_str_plain_stream_data);
    PyTuple_SET_ITEM(const_tuple_61df781411a9487879e29d9810b405c2_tuple, 10, const_str_plain_m3u8_url); Py_INCREF(const_str_plain_m3u8_url);
    PyTuple_SET_ITEM(const_tuple_61df781411a9487879e29d9810b405c2_tuple, 11, const_str_plain_chapter); Py_INCREF(const_str_plain_chapter);
    PyTuple_SET_ITEM(const_tuple_61df781411a9487879e29d9810b405c2_tuple, 12, const_str_plain_start_time); Py_INCREF(const_str_plain_start_time);
    PyTuple_SET_ITEM(const_tuple_61df781411a9487879e29d9810b405c2_tuple, 13, const_str_plain_chapter_duration); Py_INCREF(const_str_plain_chapter_duration);
    const_str_plain_contentSegments = UNSTREAM_STRING_ASCII(&constant_bin[ 1997157 ], 15, 1);
    const_tuple_str_plain_totalRuntime_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_totalRuntime_tuple, 0, const_str_plain_totalRuntime); Py_INCREF(const_str_plain_totalRuntime);
    const_str_plain_spe = UNSTREAM_STRING_ASCII(&constant_bin[ 92645 ], 3, 1);
    const_tuple_str_plain_playlistProtection_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_playlistProtection_tuple, 0, const_str_plain_playlistProtection); Py_INCREF(const_str_plain_playlistProtection);
    const_str_digest_30db7040b77d807146fa83bae61f35b3 = UNSTREAM_STRING_ASCII(&constant_bin[ 1997172 ], 105, 0);
    const_tuple_str_digest_fb55880256e567b1ce9958e7a230af92_tuple = PyTuple_New(1);
    const_str_digest_fb55880256e567b1ce9958e7a230af92 = UNSTREAM_STRING_ASCII(&constant_bin[ 1997277 ], 12, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_fb55880256e567b1ce9958e7a230af92_tuple, 0, const_str_digest_fb55880256e567b1ce9958e7a230af92); Py_INCREF(const_str_digest_fb55880256e567b1ce9958e7a230af92);
    const_str_digest_0084b0f9d66d985442b7003e6ad6ff29 = UNSTREAM_STRING_ASCII(&constant_bin[ 1997289 ], 33, 0);
    const_str_plain__add_akamai_spe_token = UNSTREAM_STRING_ASCII(&constant_bin[ 1996649 ], 21, 1);
    const_str_plain__AKAMAI_SPE_TOKEN_CACHE = UNSTREAM_STRING_ASCII(&constant_bin[ 1997322 ], 23, 1);
    const_str_digest_e8e27f0e4d2e934e0e6af81b86cb0def = UNSTREAM_STRING_ASCII(&constant_bin[ 1997345 ], 30, 0);
    const_str_digest_a3b3433ee93cf1020d42578410f67163 = UNSTREAM_STRING_ASCII(&constant_bin[ 1997375 ], 31, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_youtube_dl$extractor$turner(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a3398bb0468fe41b314c0fdcb8d64437;
static PyCodeObject *codeobj_1a35e63b13df57c9fe789f974bfaa5d6;
static PyCodeObject *codeobj_95ecd32c345e9b9222f41be6670fa3e5;
static PyCodeObject *codeobj_1e2e491c030f724601053c4ec4442500;
static PyCodeObject *codeobj_392b24dccf4092361f4d7243d09ead14;
static PyCodeObject *codeobj_0a50bed5ac3634045d68950105ade64b;
static PyCodeObject *codeobj_ffe23f65438fa40b09270508f6e03b6a;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_30db7040b77d807146fa83bae61f35b3;
    codeobj_a3398bb0468fe41b314c0fdcb8d64437 = MAKE_CODEOBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_angle_listcomp, const_tuple_str_plain_image_tuple, 1, 0, 0);
    codeobj_1a35e63b13df57c9fe789f974bfaa5d6 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_digest_eb8d1eb66dcf973dfaf0a87878e86f30, const_tuple_empty, 0, 0, 0);
    codeobj_95ecd32c345e9b9222f41be6670fa3e5 = MAKE_CODEOBJECT(module_filename_obj, 22, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain_TurnerBaseIE, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_1e2e491c030f724601053c4ec4442500 = MAKE_CODEOBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain__add_akamai_spe_token, const_tuple_ebab68d9dfeed1e3daf4a81d86eb5fa8_tuple, 6, 0, 0);
    codeobj_392b24dccf4092361f4d7243d09ead14 = MAKE_CODEOBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain__extract_cvp_info, const_tuple_345b67501cd46fb1917a59e027485db7_tuple, 5, 0, 0);
    codeobj_0a50bed5ac3634045d68950105ade64b = MAKE_CODEOBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain__extract_ngtv_info, const_tuple_61df781411a9487879e29d9810b405c2_tuple, 4, 0, 0);
    codeobj_ffe23f65438fa40b09270508f6e03b6a = MAKE_CODEOBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain__extract_timestamp, const_tuple_str_plain_self_str_plain_video_data_tuple, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$turner$$$function_1__extract_timestamp();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$turner$$$function_2__add_akamai_spe_token(PyObject *defaults);


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$turner$$$function_3__extract_cvp_info(PyObject *defaults);


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$turner$$$function_4__extract_ngtv_info(PyObject *defaults);


// The module function definitions.
static PyObject *impl_youtube_dl$extractor$turner$$$function_1__extract_timestamp(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_video_data = python_pars[1];
    struct Nuitka_FrameObject *frame_ffe23f65438fa40b09270508f6e03b6a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ffe23f65438fa40b09270508f6e03b6a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ffe23f65438fa40b09270508f6e03b6a)) {
        Py_XDECREF(cache_frame_ffe23f65438fa40b09270508f6e03b6a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ffe23f65438fa40b09270508f6e03b6a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ffe23f65438fa40b09270508f6e03b6a = MAKE_FUNCTION_FRAME(codeobj_ffe23f65438fa40b09270508f6e03b6a, module_youtube_dl$extractor$turner, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ffe23f65438fa40b09270508f6e03b6a->m_type_description == NULL);
    frame_ffe23f65438fa40b09270508f6e03b6a = cache_frame_ffe23f65438fa40b09270508f6e03b6a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ffe23f65438fa40b09270508f6e03b6a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ffe23f65438fa40b09270508f6e03b6a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_int_or_none);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int_or_none);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27635 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_xpath_attr);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_xpath_attr);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 42930 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT(par_video_data);
        tmp_args_element_name_2 = par_video_data;
        tmp_args_element_name_3 = const_str_plain_dateCreated;
        tmp_args_element_name_4 = const_str_plain_uts;
        frame_ffe23f65438fa40b09270508f6e03b6a->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, call_args);
        }

        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ffe23f65438fa40b09270508f6e03b6a->m_frame.f_lineno = 26;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ffe23f65438fa40b09270508f6e03b6a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ffe23f65438fa40b09270508f6e03b6a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ffe23f65438fa40b09270508f6e03b6a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ffe23f65438fa40b09270508f6e03b6a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ffe23f65438fa40b09270508f6e03b6a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ffe23f65438fa40b09270508f6e03b6a, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ffe23f65438fa40b09270508f6e03b6a,
        type_description_1,
        par_self,
        par_video_data
    );


    // Release cached frame.
    if (frame_ffe23f65438fa40b09270508f6e03b6a == cache_frame_ffe23f65438fa40b09270508f6e03b6a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_ffe23f65438fa40b09270508f6e03b6a);
    }
    cache_frame_ffe23f65438fa40b09270508f6e03b6a = NULL;

    assertFrameObject(frame_ffe23f65438fa40b09270508f6e03b6a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_video_data);
    Py_DECREF(par_video_data);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_video_data);
    Py_DECREF(par_video_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$turner$$$function_2__add_akamai_spe_token(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_tokenizer_src = python_pars[1];
    PyObject *par_video_url = python_pars[2];
    PyObject *par_content_id = python_pars[3];
    PyObject *par_ap_data = python_pars[4];
    PyObject *par_custom_tokenizer_query = python_pars[5];
    PyObject *var_secure_path = NULL;
    PyObject *var_token = NULL;
    PyObject *var_query = NULL;
    PyObject *var_auth = NULL;
    PyObject *var_error_msg = NULL;
    struct Nuitka_FrameObject *frame_1e2e491c030f724601053c4ec4442500;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1e2e491c030f724601053c4ec4442500 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1e2e491c030f724601053c4ec4442500)) {
        Py_XDECREF(cache_frame_1e2e491c030f724601053c4ec4442500);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e2e491c030f724601053c4ec4442500 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e2e491c030f724601053c4ec4442500 = MAKE_FUNCTION_FRAME(codeobj_1e2e491c030f724601053c4ec4442500, module_youtube_dl$extractor$turner, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1e2e491c030f724601053c4ec4442500->m_type_description == NULL);
    frame_1e2e491c030f724601053c4ec4442500 = cache_frame_1e2e491c030f724601053c4ec4442500;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1e2e491c030f724601053c4ec4442500);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1e2e491c030f724601053c4ec4442500) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_name_1 = const_str_digest_5ed199c50092a7a3f0f174fa6e1a01f6;
        CHECK_OBJECT(par_video_url);
        tmp_args_element_name_2 = par_video_url;
        tmp_args_element_name_3 = const_str_digest_cd5b8f48cd7beb5f5ff5bdb01d4197bc;
        frame_1e2e491c030f724601053c4ec4442500->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_1, const_str_plain__search_regex, call_args);
        }

        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_str_chr_42;
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_secure_path == NULL);
        var_secure_path = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain__AKAMAI_SPE_TOKEN_CACHE);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_secure_path);
        tmp_args_element_name_4 = var_secure_path;
        frame_1e2e491c030f724601053c4ec4442500->m_frame.f_lineno = 30;
        {
            PyObject *call_args[] = {tmp_args_element_name_4};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_get, call_args);
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_token == NULL);
        var_token = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(var_token);
        tmp_operand_name_1 = var_token;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooooooooo";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = const_str_plain_path;
        CHECK_OBJECT(var_secure_path);
        tmp_dict_value_1 = var_secure_path;
        tmp_assign_source_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(var_query == NULL);
        var_query = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_custom_tokenizer_query);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_custom_tokenizer_query);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooooooooo";
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT(var_query);
        tmp_called_instance_3 = var_query;
        CHECK_OBJECT(par_custom_tokenizer_query);
        tmp_args_element_name_5 = par_custom_tokenizer_query;
        frame_1e2e491c030f724601053c4ec4442500->m_frame.f_lineno = 36;
        {
            PyObject *call_args[] = {tmp_args_element_name_5};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_update, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_2;
    branch_no_2:;
    CHECK_OBJECT(par_content_id);
    tmp_dictset_value = par_content_id;
    CHECK_OBJECT(var_query);
    tmp_dictset_dict = var_query;
    tmp_dictset_key = const_str_plain_videoId;
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
    assert(!(tmp_res != 0));
    branch_end_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_ap_data);
        tmp_called_instance_4 = par_ap_data;
        frame_1e2e491c030f724601053c4ec4442500->m_frame.f_lineno = 39;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_auth_required_tuple, 0));

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 39;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain__extract_mvpd_auth);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ap_data);
        tmp_expression_name_3 = par_ap_data;
        tmp_subscript_name_1 = const_str_plain_url;
        tmp_args_element_name_6 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_1);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 40;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_content_id);
        tmp_args_element_name_7 = par_content_id;
        CHECK_OBJECT(par_ap_data);
        tmp_expression_name_4 = par_ap_data;
        tmp_subscript_name_2 = const_str_plain_site_name;
        tmp_args_element_name_8 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_2);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_6);

            exception_lineno = 40;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ap_data);
        tmp_expression_name_5 = par_ap_data;
        tmp_subscript_name_3 = const_str_plain_site_name;
        tmp_args_element_name_9 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_3);
        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_6);
            Py_DECREF(tmp_args_element_name_8);

            exception_lineno = 40;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e2e491c030f724601053c4ec4442500->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_dictset_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_6);
        Py_DECREF(tmp_args_element_name_8);
        Py_DECREF(tmp_args_element_name_9);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_query);
        tmp_dictset_dict = var_query;
        tmp_dictset_key = const_str_plain_accessToken;
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_6 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, const_str_plain__download_xml);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tokenizer_src);
        tmp_tuple_element_1 = par_tokenizer_src;
        tmp_args_name_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_content_id);
        tmp_tuple_element_1 = par_content_id;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_dict_key_2 = const_str_plain_query;
        CHECK_OBJECT(var_query);
        tmp_dict_value_2 = var_query;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_1e2e491c030f724601053c4ec4442500->m_frame.f_lineno = 41;
        tmp_assign_source_4 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_auth == NULL);
        var_auth = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_xpath_text);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_xpath_text);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 31918 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_1;
        CHECK_OBJECT(var_auth);
        tmp_args_element_name_10 = var_auth;
        tmp_args_element_name_11 = const_str_digest_87e33dfc32ac378cb036e4d479708a86;
        frame_1e2e491c030f724601053c4ec4442500->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = {tmp_args_element_name_10, tmp_args_element_name_11};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_error_msg == NULL);
        var_error_msg = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_error_msg);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_error_msg);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_ExtractorError);

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

            exception_lineno = 45;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_2;
        CHECK_OBJECT(var_error_msg);
        tmp_tuple_element_2 = var_error_msg;
        tmp_args_name_2 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_2);
        tmp_kw_name_2 = PyDict_Copy(const_dict_5a4b43d9442068c8ed68fb42270f3fd3);
        frame_1e2e491c030f724601053c4ec4442500->m_frame.f_lineno = 45;
        tmp_raise_type_1 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 45;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_xpath_text);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_xpath_text);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 31918 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_3;
        CHECK_OBJECT(var_auth);
        tmp_args_element_name_12 = var_auth;
        tmp_args_element_name_13 = const_str_plain_token;
        frame_1e2e491c030f724601053c4ec4442500->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = {tmp_args_element_name_12, tmp_args_element_name_13};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_token;
            assert(old != NULL);
            var_token = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT(var_token);
        tmp_operand_name_2 = var_token;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooo";
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
    CHECK_OBJECT(par_video_url);
    tmp_return_value = par_video_url;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_5:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_token);
        tmp_ass_subvalue_1 = var_token;
        CHECK_OBJECT(par_self);
        tmp_expression_name_7 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, const_str_plain__AKAMAI_SPE_TOKEN_CACHE);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_secure_path);
        tmp_ass_subscript_1 = var_secure_path;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT(par_video_url);
        tmp_left_name_3 = par_video_url;
        tmp_right_name_2 = const_str_digest_d8b9c1a68397c03c9ccd84e9451428ac;
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_3, tmp_right_name_2);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_token);
        tmp_right_name_3 = var_token;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_3);
        Py_DECREF(tmp_left_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1e2e491c030f724601053c4ec4442500);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1e2e491c030f724601053c4ec4442500);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1e2e491c030f724601053c4ec4442500);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1e2e491c030f724601053c4ec4442500, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e2e491c030f724601053c4ec4442500->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e2e491c030f724601053c4ec4442500, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e2e491c030f724601053c4ec4442500,
        type_description_1,
        par_self,
        par_tokenizer_src,
        par_video_url,
        par_content_id,
        par_ap_data,
        par_custom_tokenizer_query,
        var_secure_path,
        var_token,
        var_query,
        var_auth,
        var_error_msg
    );


    // Release cached frame.
    if (frame_1e2e491c030f724601053c4ec4442500 == cache_frame_1e2e491c030f724601053c4ec4442500) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_1e2e491c030f724601053c4ec4442500);
    }
    cache_frame_1e2e491c030f724601053c4ec4442500 = NULL;

    assertFrameObject(frame_1e2e491c030f724601053c4ec4442500);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_secure_path);
    Py_DECREF(var_secure_path);
    var_secure_path = NULL;

    Py_XDECREF(var_token);
    var_token = NULL;

    Py_XDECREF(var_query);
    var_query = NULL;

    Py_XDECREF(var_auth);
    var_auth = NULL;

    Py_XDECREF(var_error_msg);
    var_error_msg = NULL;

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

    Py_XDECREF(var_secure_path);
    var_secure_path = NULL;

    Py_XDECREF(var_token);
    var_token = NULL;

    Py_XDECREF(var_query);
    var_query = NULL;

    Py_XDECREF(var_auth);
    var_auth = NULL;

    Py_XDECREF(var_error_msg);
    var_error_msg = NULL;

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_tokenizer_src);
    Py_DECREF(par_tokenizer_src);
    CHECK_OBJECT(par_video_url);
    Py_DECREF(par_video_url);
    CHECK_OBJECT(par_content_id);
    Py_DECREF(par_content_id);
    CHECK_OBJECT(par_ap_data);
    Py_DECREF(par_ap_data);
    CHECK_OBJECT(par_custom_tokenizer_query);
    Py_DECREF(par_custom_tokenizer_query);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_tokenizer_src);
    Py_DECREF(par_tokenizer_src);
    CHECK_OBJECT(par_video_url);
    Py_DECREF(par_video_url);
    CHECK_OBJECT(par_content_id);
    Py_DECREF(par_content_id);
    CHECK_OBJECT(par_ap_data);
    Py_DECREF(par_ap_data);
    CHECK_OBJECT(par_custom_tokenizer_query);
    Py_DECREF(par_custom_tokenizer_query);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$turner$$$function_3__extract_cvp_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data_src = python_pars[1];
    PyObject *par_video_id = python_pars[2];
    PyObject *par_path_data = python_pars[3];
    PyObject *par_ap_data = python_pars[4];
    PyObject *var_video_data = NULL;
    PyObject *var_title = NULL;
    PyObject *var_content_id = NULL;
    PyObject *var_urls = NULL;
    PyObject *var_formats = NULL;
    PyObject *var_rex = NULL;
    PyObject *var_video_file = NULL;
    PyObject *var_video_url = NULL;
    PyObject *var_ext = NULL;
    PyObject *var_secure_path_data = NULL;
    PyObject *var_base_path_data = NULL;
    PyObject *var_media_src = NULL;
    PyObject *var_format_id = NULL;
    PyObject *var_m3u8_formats = NULL;
    PyObject *var_f = NULL;
    PyObject *var_mobj = NULL;
    PyObject *var_subtitles = NULL;
    PyObject *var_source = NULL;
    PyObject *var_track = NULL;
    PyObject *var_track_url = NULL;
    PyObject *var_lang = NULL;
    PyObject *var_thumbnails = NULL;
    PyObject *var_is_live = NULL;
    PyObject *outline_0_var_image = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_392b24dccf4092361f4d7243d09ead14;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
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
    struct Nuitka_FrameObject *frame_a3398bb0468fe41b314c0fdcb8d64437_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_a3398bb0468fe41b314c0fdcb8d64437_2 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_392b24dccf4092361f4d7243d09ead14 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_392b24dccf4092361f4d7243d09ead14)) {
        Py_XDECREF(cache_frame_392b24dccf4092361f4d7243d09ead14);

#if _DEBUG_REFCOUNTS
        if (cache_frame_392b24dccf4092361f4d7243d09ead14 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_392b24dccf4092361f4d7243d09ead14 = MAKE_FUNCTION_FRAME(codeobj_392b24dccf4092361f4d7243d09ead14, module_youtube_dl$extractor$turner, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_392b24dccf4092361f4d7243d09ead14->m_type_description == NULL);
    frame_392b24dccf4092361f4d7243d09ead14 = cache_frame_392b24dccf4092361f4d7243d09ead14;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_392b24dccf4092361f4d7243d09ead14);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_392b24dccf4092361f4d7243d09ead14) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_data_src);
        tmp_args_element_name_1 = par_data_src;
        CHECK_OBJECT(par_video_id);
        tmp_args_element_name_2 = par_video_id;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain__download_xml, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_video_data == NULL);
        var_video_data = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(var_video_data);
        tmp_expression_name_2 = var_video_data;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_attrib);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_str_plain_id;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_video_id;
            assert(old != NULL);
            par_video_id = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_xpath_text);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_xpath_text);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 31918 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 55;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(var_video_data);
        tmp_tuple_element_1 = var_video_data;
        tmp_args_name_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_str_plain_headline;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_kw_name_1 = PyDict_Copy(const_dict_a963d82ead3eee96783c188d5867b151);
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 55;
        tmp_assign_source_3 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_title == NULL);
        var_title = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_xpath_text);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_xpath_text);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 31918 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT(var_video_data);
        tmp_args_element_name_3 = var_video_data;
        tmp_args_element_name_4 = const_str_plain_contentId;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_or_left_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 56;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        CHECK_OBJECT(par_video_id);
        tmp_or_right_value_1 = par_video_id;
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_4 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_content_id == NULL);
        var_content_id = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = PyList_New(0);
        assert(var_urls == NULL);
        var_urls = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = PyList_New(0);
        assert(var_formats == NULL);
        var_formats = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_re);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2114 ], 24, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_3;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 66;
        tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_compile, &PyTuple_GET_ITEM(const_tuple_str_digest_077aa892a3f78462cf0d1065c48b65b9_tuple, 0));

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rex == NULL);
        var_rex = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_video_data);
        tmp_called_instance_3 = var_video_data;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 70;
        tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_findall, &PyTuple_GET_ITEM(const_tuple_str_digest_1643a356b9398f5ce79449feb8f5f3d6_tuple, 0));

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooooooooooooooooooooo";
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
                type_description_1 = "oooooooooooooooooooooooooooo";
                exception_lineno = 70;
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
            PyObject *old = var_video_file;
            var_video_file = tmp_assign_source_10;
            Py_INCREF(var_video_file);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(var_video_file);
        tmp_expression_name_3 = var_video_file;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain_text);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 71;
        tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, const_str_plain_strip);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_video_url;
            var_video_url = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(var_video_url);
        tmp_operand_name_1 = var_video_url;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooooooooooo";
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
    goto loop_start_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_determine_ext);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_determine_ext);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27560 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 74;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT(var_video_url);
        tmp_args_element_name_5 = var_video_url;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 74;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_5);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_ext;
            var_ext = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_video_url);
        tmp_called_instance_5 = var_video_url;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 75;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_startswith, &PyTuple_GET_ITEM(const_tuple_str_digest_df3d7aa8c3bb2595f4f5852ae8c16add_tuple, 0));

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 75;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_start_1;
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_video_url);
        tmp_called_instance_6 = var_video_url;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 93;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain_startswith, &PyTuple_GET_ITEM(const_tuple_str_digest_e883bca007c83a919ab719e430b1c07a_tuple, 0));

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_7;
        CHECK_OBJECT(par_path_data);
        tmp_called_instance_7 = par_path_data;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 94;
        tmp_assign_source_13 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_secure_tuple, 0));

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_secure_path_data;
            var_secure_path_data = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT(var_secure_path_data);
        tmp_operand_name_2 = var_secure_path_data;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_1;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT(par_self);
        tmp_expression_name_4 = par_self;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain__add_akamai_spe_token);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_secure_path_data);
        tmp_expression_name_5 = var_secure_path_data;
        tmp_subscript_name_2 = const_str_plain_tokenizer_src;
        tmp_args_element_name_6 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_2);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_secure_path_data);
        tmp_expression_name_6 = var_secure_path_data;
        tmp_subscript_name_3 = const_str_plain_media_src;
        tmp_left_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_6, tmp_subscript_name_3);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_element_name_6);

            exception_lineno = 99;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_video_url);
        tmp_right_name_1 = var_video_url;
        tmp_args_element_name_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_element_name_6);

            exception_lineno = 99;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_content_id);
        tmp_args_element_name_8 = var_content_id;
        CHECK_OBJECT(par_ap_data);
        tmp_args_element_name_9 = par_ap_data;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_6);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_video_url;
            assert(old != NULL);
            var_video_url = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_re);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2114 ], 24, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 101;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_8 = tmp_mvar_value_5;
        tmp_args_element_name_10 = const_str_digest_9793aff992aa4095bf103dce76bfa1a8;
        CHECK_OBJECT(var_video_url);
        tmp_args_element_name_11 = var_video_url;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 101;
        {
            PyObject *call_args[] = {tmp_args_element_name_10, tmp_args_element_name_11};
            tmp_operand_name_3 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_8, const_str_plain_match, call_args);
        }

        if (tmp_operand_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        Py_DECREF(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        CHECK_OBJECT(par_path_data);
        tmp_expression_name_7 = par_path_data;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, const_str_plain_get);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_ext);
        tmp_args_element_name_12 = var_ext;
        CHECK_OBJECT(par_path_data);
        tmp_called_instance_9 = par_path_data;
        tmp_call_arg_element_1 = const_str_plain_default;
        tmp_call_arg_element_2 = PyDict_New();
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_args_element_name_13 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_9, const_str_plain_get, call_args);
        }

        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_args_element_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 102;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = {tmp_args_element_name_12, tmp_args_element_name_13};
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
        }

        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_13);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_base_path_data;
            var_base_path_data = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_10;
        CHECK_OBJECT(var_base_path_data);
        tmp_called_instance_10 = var_base_path_data;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 103;
        tmp_assign_source_16 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_10, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_media_src_tuple, 0));

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_media_src;
            var_media_src = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_4;
        CHECK_OBJECT(var_media_src);
        tmp_operand_name_4 = var_media_src;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooooooooooo";
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
    goto loop_start_1;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(var_media_src);
        tmp_left_name_2 = var_media_src;
        CHECK_OBJECT(var_video_url);
        tmp_right_name_2 = var_video_url;
        tmp_assign_source_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_video_url;
            assert(old != NULL);
            var_video_url = tmp_assign_source_17;
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    branch_end_3:;
    branch_end_2:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        if (var_video_url == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "video_url");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_compexpr_left_1 = var_video_url;
        CHECK_OBJECT(var_urls);
        tmp_compexpr_right_1 = var_urls;
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_7 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    goto loop_start_1;
    branch_no_7:;
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_14;
        CHECK_OBJECT(var_urls);
        tmp_expression_name_8 = var_urls;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, const_str_plain_append);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_video_url == NULL) {
            Py_DECREF(tmp_called_name_6);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "video_url");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_14 = var_video_url;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 109;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_14);
        Py_DECREF(tmp_called_name_6);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_instance_11;
        CHECK_OBJECT(var_video_file);
        tmp_called_instance_11 = var_video_file;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 110;
        tmp_assign_source_18 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_11, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_bitrate_tuple, 0));

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_format_id;
            var_format_id = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_8_object_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_ext);
        tmp_compexpr_left_2 = var_ext;
        tmp_compexpr_right_2 = const_str_plain_smil;
        tmp_tmp_condition_result_8_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_8_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_condition_result_8_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_8_object_1);

            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_8 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_8_object_1);
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        CHECK_OBJECT(var_formats);
        tmp_expression_name_9 = var_formats;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, const_str_plain_extend);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_10 = par_self;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, const_str_plain__extract_smil_formats);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_video_url == NULL) {
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_called_name_8);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "video_url");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_tuple_element_2 = var_video_url;
        tmp_args_name_2 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_video_id);
        tmp_tuple_element_2 = par_video_id;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_2);
        tmp_kw_name_2 = PyDict_Copy(const_dict_f95321192b139e241e1ec13397bf5b8f);
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 112;
        tmp_args_element_name_15 = CALL_FUNCTION(tmp_called_name_8, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 112;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_15);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_15);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_tmp_condition_result_9_object_1;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_ext);
        tmp_compexpr_left_3 = var_ext;
        tmp_compexpr_right_3 = const_str_plain_m3u8;
        tmp_tmp_condition_result_9_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_tmp_condition_result_9_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_tmp_condition_result_9_object_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_9_object_1);

            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_9 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_9_object_1);
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_9;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_11 = par_self;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, const_str_plain__extract_m3u8_formats);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_video_url == NULL) {
            Py_DECREF(tmp_called_name_9);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "video_url");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_tuple_element_3 = var_video_url;
        tmp_args_name_3 = PyTuple_New(3);
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_args_name_3, 0, tmp_tuple_element_3);
        CHECK_OBJECT(par_video_id);
        tmp_tuple_element_3 = par_video_id;
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_args_name_3, 1, tmp_tuple_element_3);
        tmp_tuple_element_3 = const_str_plain_mp4;
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_args_name_3, 2, tmp_tuple_element_3);
        tmp_dict_key_1 = const_str_plain_m3u8_id;
        CHECK_OBJECT(var_format_id);
        tmp_or_left_value_2 = var_format_id;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_name_3);

            exception_lineno = 117;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        tmp_or_right_value_2 = const_str_plain_hls;
        tmp_dict_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_dict_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_kw_name_3 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_fatal;
        tmp_dict_value_2 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 115;
        tmp_assign_source_19 = CALL_FUNCTION(tmp_called_name_9, tmp_args_name_3, tmp_kw_name_3);
        Py_DECREF(tmp_called_name_9);
        Py_DECREF(tmp_args_name_3);
        Py_DECREF(tmp_kw_name_3);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_m3u8_formats;
            var_m3u8_formats = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        tmp_compexpr_left_4 = const_str_digest_e883bca007c83a919ab719e430b1c07a;
        if (var_video_url == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "video_url");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_compexpr_right_4 = var_video_url;
        tmp_res = PySequence_Contains(tmp_compexpr_right_4, tmp_compexpr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_compexpr_left_5 = const_str_digest_d8b9c1a68397c03c9ccd84e9451428ac;
        if (var_video_url == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "video_url");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_compexpr_right_5 = var_video_url;
        tmp_res = PySequence_Contains(tmp_compexpr_right_5, tmp_compexpr_left_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_10 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_10 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_m3u8_formats);
        tmp_iter_arg_2 = var_m3u8_formats;
        tmp_assign_source_20 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_21 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_21 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooooo";
                exception_lineno = 119;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_22 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_f;
            var_f = tmp_assign_source_22;
            Py_INCREF(var_f);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = Py_False;
        CHECK_OBJECT(var_f);
        tmp_ass_subscribed_1 = var_f;
        tmp_ass_subscript_1 = const_str_plain__seekable;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 119;
        type_description_1 = "oooooooooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;

    branch_no_10:;
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_16;
        CHECK_OBJECT(var_formats);
        tmp_called_instance_12 = var_formats;
        CHECK_OBJECT(var_m3u8_formats);
        tmp_args_element_name_16 = var_m3u8_formats;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 121;
        {
            PyObject *call_args[] = {tmp_args_element_name_16};
            tmp_call_result_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_12, const_str_plain_extend, call_args);
        }

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    goto branch_end_9;
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_tmp_condition_result_11_object_1;
        int tmp_truth_name_5;
        CHECK_OBJECT(var_ext);
        tmp_compexpr_left_6 = var_ext;
        tmp_compexpr_right_6 = const_str_plain_f4m;
        tmp_tmp_condition_result_11_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
        if (tmp_tmp_condition_result_11_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_tmp_condition_result_11_object_1);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_11_object_1);

            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_11 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_11_object_1);
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_called_name_10;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_kw_name_4;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        CHECK_OBJECT(var_formats);
        tmp_expression_name_12 = var_formats;
        tmp_called_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, const_str_plain_extend);
        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_13 = par_self;
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, const_str_plain__extract_f4m_formats);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_10);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_update_url_query);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_update_url_query);
        }

        if (tmp_mvar_value_6 == NULL) {
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_11);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 32504 ], 38, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_12 = tmp_mvar_value_6;
        if (var_video_url == NULL) {
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_11);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "video_url");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_18 = var_video_url;
        tmp_args_element_name_19 = PyDict_Copy(const_dict_6ddf79e3d402bb13f3beb7fee131be0c);
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = {tmp_args_element_name_18, tmp_args_element_name_19};
            tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_12, call_args);
        }

        Py_DECREF(tmp_args_element_name_19);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_name_4 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_name_4, 0, tmp_tuple_element_4);
        CHECK_OBJECT(par_video_id);
        tmp_tuple_element_4 = par_video_id;
        Py_INCREF(tmp_tuple_element_4);
        PyTuple_SET_ITEM(tmp_args_name_4, 1, tmp_tuple_element_4);
        tmp_dict_key_3 = const_str_plain_f4m_id;
        CHECK_OBJECT(var_format_id);
        tmp_or_left_value_3 = var_format_id;
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_called_name_11);
            Py_DECREF(tmp_args_name_4);

            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        tmp_or_right_value_3 = const_str_plain_hds;
        tmp_dict_value_3 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_dict_value_3 = tmp_or_left_value_3;
        or_end_3:;
        tmp_kw_name_4 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kw_name_4, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_fatal;
        tmp_dict_value_4 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_name_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 123;
        tmp_args_element_name_17 = CALL_FUNCTION(tmp_called_name_11, tmp_args_name_4, tmp_kw_name_4);
        Py_DECREF(tmp_called_name_11);
        Py_DECREF(tmp_args_name_4);
        Py_DECREF(tmp_kw_name_4);
        if (tmp_args_element_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_10);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 123;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_17);
        Py_DECREF(tmp_called_name_10);
        Py_DECREF(tmp_args_element_name_17);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_6);
    }
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        tmp_dict_key_5 = const_str_plain_format_id;
        CHECK_OBJECT(var_format_id);
        tmp_dict_value_5 = var_format_id;
        tmp_assign_source_23 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_assign_source_23, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = const_str_plain_url;
        if (var_video_url == NULL) {
            Py_DECREF(tmp_assign_source_23);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "video_url");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_dict_value_6 = var_video_url;
        tmp_res = PyDict_SetItem(tmp_assign_source_23, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = const_str_plain_ext;
        CHECK_OBJECT(var_ext);
        tmp_dict_value_7 = var_ext;
        tmp_res = PyDict_SetItem(tmp_assign_source_23, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        {
            PyObject *old = var_f;
            var_f = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_13;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT(var_rex);
        tmp_expression_name_14 = var_rex;
        tmp_called_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, const_str_plain_search);
        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_format_id);
        tmp_left_name_3 = var_format_id;
        if (var_video_url == NULL) {
            Py_DECREF(tmp_called_name_13);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "video_url");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_right_name_3 = var_video_url;
        tmp_args_element_name_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_3);
        if (tmp_args_element_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_13);

            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 132;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, tmp_args_element_name_20);
        Py_DECREF(tmp_called_name_13);
        Py_DECREF(tmp_args_element_name_20);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_mobj;
            var_mobj = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_6;
        CHECK_OBJECT(var_mobj);
        tmp_truth_name_6 = CHECK_IF_TRUE(var_mobj);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_12 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_called_name_14;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_called_name_15;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_called_instance_15;
        CHECK_OBJECT(var_f);
        tmp_expression_name_15 = var_f;
        tmp_called_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, const_str_plain_update);
        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_dict_key_8 = const_str_plain_width;
        CHECK_OBJECT(var_mobj);
        tmp_called_instance_13 = var_mobj;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 135;
        tmp_int_arg_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_13, const_str_plain_group, &PyTuple_GET_ITEM(const_tuple_str_plain_width_tuple, 0));

        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_14);

            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_dict_value_8 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_14);

            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_21 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_21, tmp_dict_key_8, tmp_dict_value_8);
        Py_DECREF(tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = const_str_plain_height;
        CHECK_OBJECT(var_mobj);
        tmp_called_instance_14 = var_mobj;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 136;
        tmp_int_arg_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_14, const_str_plain_group, &PyTuple_GET_ITEM(const_tuple_str_plain_height_tuple, 0));

        if (tmp_int_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_args_element_name_21);

            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_dict_value_9 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_args_element_name_21);

            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_21, tmp_dict_key_9, tmp_dict_value_9);
        Py_DECREF(tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = const_str_plain_tbr;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_int_or_none);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int_or_none);
        }

        if (tmp_mvar_value_7 == NULL) {
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_args_element_name_21);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27635 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_15 = tmp_mvar_value_7;
        CHECK_OBJECT(var_mobj);
        tmp_called_instance_15 = var_mobj;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 137;
        tmp_args_element_name_22 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_15, const_str_plain_group, &PyTuple_GET_ITEM(const_tuple_str_plain_bitrate_tuple, 0));

        if (tmp_args_element_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_args_element_name_21);

            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 137;
        tmp_dict_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, tmp_args_element_name_22);
        Py_DECREF(tmp_args_element_name_22);
        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_args_element_name_21);

            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_21, tmp_dict_key_10, tmp_dict_value_10);
        Py_DECREF(tmp_dict_value_10);
        assert(!(tmp_res != 0));
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 134;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, tmp_args_element_name_21);
        Py_DECREF(tmp_called_name_14);
        Py_DECREF(tmp_args_element_name_21);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_7);
    }
    goto branch_end_12;
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_8;
        CHECK_OBJECT(var_format_id);
        tmp_isinstance_inst_1 = var_format_id;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_compat_str);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_compat_str);
        }

        if (tmp_mvar_value_8 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 26637 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_8;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_13 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_call_result_8;
        int tmp_truth_name_7;
        CHECK_OBJECT(var_format_id);
        tmp_called_instance_16 = var_format_id;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 140;
        tmp_call_result_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_16, const_str_plain_isdigit);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_call_result_8);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_8);

            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_14 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_8);
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_int_arg_3;
        CHECK_OBJECT(var_format_id);
        tmp_int_arg_3 = var_format_id;
        tmp_dictset_value = PyNumber_Int(tmp_int_arg_3);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_f);
        tmp_dictset_dict = var_f;
        tmp_dictset_key = const_str_plain_tbr;
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_re);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
        }

        if (tmp_mvar_value_9 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2114 ], 24, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 143;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_17 = tmp_mvar_value_9;
        tmp_args_element_name_23 = const_str_digest_48012f5d8fda4277162632d73743b3d3;
        CHECK_OBJECT(var_format_id);
        tmp_args_element_name_24 = var_format_id;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 143;
        {
            PyObject *call_args[] = {tmp_args_element_name_23, tmp_args_element_name_24};
            tmp_assign_source_25 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_17, const_str_plain_match, call_args);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_mobj;
            assert(old != NULL);
            var_mobj = tmp_assign_source_25;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_15;
        int tmp_truth_name_8;
        CHECK_OBJECT(var_mobj);
        tmp_truth_name_8 = CHECK_IF_TRUE(var_mobj);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_15 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_tmp_condition_result_16_object_1;
        int tmp_truth_name_9;
        CHECK_OBJECT(var_mobj);
        tmp_called_instance_18 = var_mobj;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 145;
        tmp_compexpr_left_7 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_18, const_str_plain_group, &PyTuple_GET_ITEM(const_tuple_int_pos_1_tuple, 0));

        if (tmp_compexpr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_7 = const_str_plain_audio;
        tmp_tmp_condition_result_16_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_7, tmp_compexpr_right_7);
        Py_DECREF(tmp_compexpr_left_7);
        if (tmp_tmp_condition_result_16_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_tmp_condition_result_16_object_1);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_16_object_1);

            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_16 = tmp_truth_name_9 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_16_object_1);
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_called_instance_19;
        PyObject *tmp_call_result_9;
        PyObject *tmp_call_arg_element_3;
        CHECK_OBJECT(var_f);
        tmp_called_instance_19 = var_f;
        tmp_call_arg_element_3 = PyDict_Copy(const_dict_ddd29883bcc845931a8c1efe063223f2);
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 146;
        {
            PyObject *call_args[] = {tmp_call_arg_element_3};
            tmp_call_result_9 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_19, const_str_plain_update, call_args);
        }

        Py_DECREF(tmp_call_arg_element_3);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_9);
    }
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_int_arg_4;
        PyObject *tmp_called_instance_20;
        CHECK_OBJECT(var_mobj);
        tmp_called_instance_20 = var_mobj;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 151;
        tmp_int_arg_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_20, const_str_plain_group, &PyTuple_GET_ITEM(const_tuple_int_pos_1_tuple, 0));

        if (tmp_int_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_dictset_value = PyNumber_Int(tmp_int_arg_4);
        Py_DECREF(tmp_int_arg_4);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_f);
        tmp_dictset_dict = var_f;
        tmp_dictset_key = const_str_plain_tbr;
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    branch_end_16:;
    branch_no_15:;
    branch_end_14:;
    branch_no_13:;
    branch_end_12:;
    {
        PyObject *tmp_called_instance_21;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_name_25;
        CHECK_OBJECT(var_formats);
        tmp_called_instance_21 = var_formats;
        CHECK_OBJECT(var_f);
        tmp_args_element_name_25 = var_f;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 152;
        {
            PyObject *call_args[] = {tmp_args_element_name_25};
            tmp_call_result_10 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_21, const_str_plain_append, call_args);
        }

        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_10);
    }
    branch_end_11:;
    branch_end_9:;
    branch_end_8:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 70;
        type_description_1 = "oooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_called_instance_22;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_name_26;
        CHECK_OBJECT(par_self);
        tmp_called_instance_22 = par_self;
        CHECK_OBJECT(var_formats);
        tmp_args_element_name_26 = var_formats;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 153;
        {
            PyObject *call_args[] = {tmp_args_element_name_26};
            tmp_call_result_11 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_22, const_str_plain__sort_formats, call_args);
        }

        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = PyDict_New();
        assert(var_subtitles == NULL);
        var_subtitles = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_instance_23;
        CHECK_OBJECT(var_video_data);
        tmp_called_instance_23 = var_video_data;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 156;
        tmp_iter_arg_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_23, const_str_plain_findall, &PyTuple_GET_ITEM(const_tuple_str_digest_e511be0c5a7fb961102e5866a54e248a_tuple, 0));

        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_27;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_28 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_28 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooooo";
                exception_lineno = 156;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_29 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_source;
            var_source = tmp_assign_source_29;
            Py_INCREF(var_source);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_instance_24;
        CHECK_OBJECT(var_source);
        tmp_called_instance_24 = var_source;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 157;
        tmp_iter_arg_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_24, const_str_plain_findall, &PyTuple_GET_ITEM(const_tuple_str_plain_track_tuple, 0));

        if (tmp_iter_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_30 = MAKE_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_for_loop_4__for_iterator;
            tmp_for_loop_4__for_iterator = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_31 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_31 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooooo";
                exception_lineno = 157;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_32 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_track;
            var_track = tmp_assign_source_32;
            Py_INCREF(var_track);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_name_16;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_called_instance_25;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_url_or_none);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_url_or_none);
        }

        if (tmp_mvar_value_10 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 34867 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_name_16 = tmp_mvar_value_10;
        CHECK_OBJECT(var_track);
        tmp_called_instance_25 = var_track;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 158;
        tmp_args_element_name_27 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_25, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_url_tuple, 0));

        if (tmp_args_element_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 158;
        tmp_assign_source_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_16, tmp_args_element_name_27);
        Py_DECREF(tmp_args_element_name_27);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_track_url;
            var_track_url = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_17;
        int tmp_or_left_truth_4;
        nuitka_bool tmp_or_left_value_4;
        nuitka_bool tmp_or_right_value_4;
        PyObject *tmp_operand_name_5;
        PyObject *tmp_called_instance_26;
        PyObject *tmp_call_result_12;
        int tmp_truth_name_10;
        CHECK_OBJECT(var_track_url);
        tmp_operand_name_5 = var_track_url;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_or_left_value_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_4 = tmp_or_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_4 == 1) {
            goto or_left_4;
        } else {
            goto or_right_4;
        }
        or_right_4:;
        CHECK_OBJECT(var_track_url);
        tmp_called_instance_26 = var_track_url;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 159;
        tmp_call_result_12 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_26, const_str_plain_endswith, &PyTuple_GET_ITEM(const_tuple_str_digest_db378dce4fe8e2de3777a0ec39740057_tuple, 0));

        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_call_result_12);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_12);

            exception_lineno = 159;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_or_right_value_4 = tmp_truth_name_10 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_12);
        tmp_condition_result_17 = tmp_or_right_value_4;
        goto or_end_4;
        or_left_4:;
        tmp_condition_result_17 = tmp_or_left_value_4;
        or_end_4:;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    goto loop_start_4;
    branch_no_17:;
    {
        PyObject *tmp_assign_source_34;
        int tmp_or_left_truth_5;
        PyObject *tmp_or_left_value_5;
        PyObject *tmp_or_right_value_5;
        PyObject *tmp_called_instance_27;
        int tmp_or_left_truth_6;
        PyObject *tmp_or_left_value_6;
        PyObject *tmp_or_right_value_6;
        PyObject *tmp_called_instance_28;
        CHECK_OBJECT(var_track);
        tmp_called_instance_27 = var_track;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 161;
        tmp_or_left_value_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_27, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_lang_tuple, 0));

        if (tmp_or_left_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_or_left_truth_5 = CHECK_IF_TRUE(tmp_or_left_value_5);
        if (tmp_or_left_truth_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_5);

            exception_lineno = 161;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_or_left_truth_5 == 1) {
            goto or_left_5;
        } else {
            goto or_right_5;
        }
        or_right_5:;
        Py_DECREF(tmp_or_left_value_5);
        CHECK_OBJECT(var_track);
        tmp_called_instance_28 = var_track;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 161;
        tmp_or_left_value_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_28, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_label_tuple, 0));

        if (tmp_or_left_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_or_left_truth_6 = CHECK_IF_TRUE(tmp_or_left_value_6);
        if (tmp_or_left_truth_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_6);

            exception_lineno = 161;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_or_left_truth_6 == 1) {
            goto or_left_6;
        } else {
            goto or_right_6;
        }
        or_right_6:;
        Py_DECREF(tmp_or_left_value_6);
        tmp_or_right_value_6 = const_str_plain_en;
        Py_INCREF(tmp_or_right_value_6);
        tmp_or_right_value_5 = tmp_or_right_value_6;
        goto or_end_6;
        or_left_6:;
        tmp_or_right_value_5 = tmp_or_left_value_6;
        or_end_6:;
        tmp_assign_source_34 = tmp_or_right_value_5;
        goto or_end_5;
        or_left_5:;
        tmp_assign_source_34 = tmp_or_left_value_5;
        or_end_5:;
        {
            PyObject *old = var_lang;
            var_lang = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_17;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_called_instance_29;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_called_name_18;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_called_instance_30;
        CHECK_OBJECT(var_subtitles);
        tmp_called_instance_29 = var_subtitles;
        CHECK_OBJECT(var_lang);
        tmp_args_element_name_28 = var_lang;
        tmp_args_element_name_29 = PyList_New(0);
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 162;
        {
            PyObject *call_args[] = {tmp_args_element_name_28, tmp_args_element_name_29};
            tmp_expression_name_16 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_29, const_str_plain_setdefault, call_args);
        }

        Py_DECREF(tmp_args_element_name_29);
        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, const_str_plain_append);
        Py_DECREF(tmp_expression_name_16);
        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_dict_key_11 = const_str_plain_url;
        CHECK_OBJECT(var_track_url);
        tmp_dict_value_11 = var_track_url;
        tmp_args_element_name_30 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_30, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = const_str_plain_ext;
        tmp_expression_name_17 = PyDict_Copy(const_dict_775f6489ec0c86e867f6cbd585e8a1b5);
        tmp_called_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, const_str_plain_get);
        Py_DECREF(tmp_expression_name_17);
        assert(!(tmp_called_name_18 == NULL));
        CHECK_OBJECT(var_source);
        tmp_called_instance_30 = var_source;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 168;
        tmp_args_element_name_31 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_30, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_format_tuple, 0));

        if (tmp_args_element_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_17);
            Py_DECREF(tmp_args_element_name_30);
            Py_DECREF(tmp_called_name_18);

            exception_lineno = 168;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 164;
        tmp_dict_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_18, tmp_args_element_name_31);
        Py_DECREF(tmp_called_name_18);
        Py_DECREF(tmp_args_element_name_31);
        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_17);
            Py_DECREF(tmp_args_element_name_30);

            exception_lineno = 164;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_30, tmp_dict_key_12, tmp_dict_value_12);
        Py_DECREF(tmp_dict_value_12);
        assert(!(tmp_res != 0));
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 162;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, tmp_args_element_name_30);
        Py_DECREF(tmp_called_name_17);
        Py_DECREF(tmp_args_element_name_30);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_13);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 157;
        type_description_1 = "oooooooooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;

    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 156;
        type_description_1 = "oooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_35;
        // Tried code:
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_iter_arg_5;
            PyObject *tmp_called_instance_31;
            CHECK_OBJECT(var_video_data);
            tmp_called_instance_31 = var_video_data;
            frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 176;
            tmp_iter_arg_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_31, const_str_plain_findall, &PyTuple_GET_ITEM(const_tuple_str_digest_fb55880256e567b1ce9958e7a230af92_tuple, 0));

            if (tmp_iter_arg_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_36 = MAKE_ITERATOR(tmp_iter_arg_5);
            Py_DECREF(tmp_iter_arg_5);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_36;
        }
        {
            PyObject *tmp_assign_source_37;
            tmp_assign_source_37 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_37;
        }
        if (isFrameUnusable(cache_frame_a3398bb0468fe41b314c0fdcb8d64437_2)) {
            Py_XDECREF(cache_frame_a3398bb0468fe41b314c0fdcb8d64437_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_a3398bb0468fe41b314c0fdcb8d64437_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_a3398bb0468fe41b314c0fdcb8d64437_2 = MAKE_FUNCTION_FRAME(codeobj_a3398bb0468fe41b314c0fdcb8d64437, module_youtube_dl$extractor$turner, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_a3398bb0468fe41b314c0fdcb8d64437_2->m_type_description == NULL);
        frame_a3398bb0468fe41b314c0fdcb8d64437_2 = cache_frame_a3398bb0468fe41b314c0fdcb8d64437_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_a3398bb0468fe41b314c0fdcb8d64437_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_a3398bb0468fe41b314c0fdcb8d64437_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_5:;
        {
            PyObject *tmp_next_source_5;
            PyObject *tmp_assign_source_38;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_5 = tmp_listcomp_1__$0;
            tmp_assign_source_38 = ITERATOR_NEXT(tmp_next_source_5);
            if (tmp_assign_source_38 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_5;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 171;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_38;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_39;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_39 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_image;
                outline_0_var_image = tmp_assign_source_39;
                Py_INCREF(outline_0_var_image);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_called_instance_32;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_expression_name_18;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_called_name_19;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_args_element_name_32;
            PyObject *tmp_called_instance_33;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            PyObject *tmp_called_name_20;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_args_element_name_33;
            PyObject *tmp_called_instance_34;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_dict_key_13 = const_str_plain_id;
            CHECK_OBJECT(outline_0_var_image);
            tmp_called_instance_32 = outline_0_var_image;
            frame_a3398bb0468fe41b314c0fdcb8d64437_2->m_frame.f_lineno = 172;
            tmp_dict_value_13 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_32, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_cut_tuple, 0));

            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_append_value_1 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_append_value_1, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = const_str_plain_url;
            CHECK_OBJECT(outline_0_var_image);
            tmp_expression_name_18 = outline_0_var_image;
            tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, const_str_plain_text);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_append_value_1);

                exception_lineno = 173;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_res = PyDict_SetItem(tmp_append_value_1, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = const_str_plain_width;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_int_or_none);

            if (unlikely(tmp_mvar_value_11 == NULL)) {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int_or_none);
            }

            if (tmp_mvar_value_11 == NULL) {
                Py_DECREF(tmp_append_value_1);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 27635 ], 33, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 174;
                type_description_2 = "o";
                goto try_except_handler_7;
            }

            tmp_called_name_19 = tmp_mvar_value_11;
            CHECK_OBJECT(outline_0_var_image);
            tmp_called_instance_33 = outline_0_var_image;
            frame_a3398bb0468fe41b314c0fdcb8d64437_2->m_frame.f_lineno = 174;
            tmp_args_element_name_32 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_33, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_width_tuple, 0));

            if (tmp_args_element_name_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_append_value_1);

                exception_lineno = 174;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            frame_a3398bb0468fe41b314c0fdcb8d64437_2->m_frame.f_lineno = 174;
            tmp_dict_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_19, tmp_args_element_name_32);
            Py_DECREF(tmp_args_element_name_32);
            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_append_value_1);

                exception_lineno = 174;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_res = PyDict_SetItem(tmp_append_value_1, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = const_str_plain_height;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_int_or_none);

            if (unlikely(tmp_mvar_value_12 == NULL)) {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int_or_none);
            }

            if (tmp_mvar_value_12 == NULL) {
                Py_DECREF(tmp_append_value_1);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 27635 ], 33, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 175;
                type_description_2 = "o";
                goto try_except_handler_7;
            }

            tmp_called_name_20 = tmp_mvar_value_12;
            CHECK_OBJECT(outline_0_var_image);
            tmp_called_instance_34 = outline_0_var_image;
            frame_a3398bb0468fe41b314c0fdcb8d64437_2->m_frame.f_lineno = 175;
            tmp_args_element_name_33 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_34, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_height_tuple, 0));

            if (tmp_args_element_name_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_append_value_1);

                exception_lineno = 175;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            frame_a3398bb0468fe41b314c0fdcb8d64437_2->m_frame.f_lineno = 175;
            tmp_dict_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_20, tmp_args_element_name_33);
            Py_DECREF(tmp_args_element_name_33);
            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_append_value_1);

                exception_lineno = 175;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_res = PyDict_SetItem(tmp_append_value_1, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            assert(PyList_Check(tmp_append_list_1));
            tmp_res = PyList_Append(tmp_append_list_1, tmp_append_value_1);
            Py_DECREF(tmp_append_value_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_2 = "o";
            goto try_except_handler_7;
        }
        goto loop_start_5;
        loop_end_5:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_35 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_35);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
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
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
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
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a3398bb0468fe41b314c0fdcb8d64437_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_a3398bb0468fe41b314c0fdcb8d64437_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_6;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a3398bb0468fe41b314c0fdcb8d64437_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a3398bb0468fe41b314c0fdcb8d64437_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a3398bb0468fe41b314c0fdcb8d64437_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a3398bb0468fe41b314c0fdcb8d64437_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a3398bb0468fe41b314c0fdcb8d64437_2,
            type_description_2,
            outline_0_var_image
        );


        // Release cached frame.
        if (frame_a3398bb0468fe41b314c0fdcb8d64437_2 == cache_frame_a3398bb0468fe41b314c0fdcb8d64437_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(frame_a3398bb0468fe41b314c0fdcb8d64437_2);
        }
        cache_frame_a3398bb0468fe41b314c0fdcb8d64437_2 = NULL;

        assertFrameObject(frame_a3398bb0468fe41b314c0fdcb8d64437_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooooooooooooooooooooooo";
        goto try_except_handler_6;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF(outline_0_var_image);
        outline_0_var_image = NULL;

        goto outline_result_1;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_image);
        outline_0_var_image = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 171;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_thumbnails == NULL);
        var_thumbnails = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_called_name_21;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_args_element_name_35;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_xpath_text);

        if (unlikely(tmp_mvar_value_13 == NULL)) {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_xpath_text);
        }

        if (tmp_mvar_value_13 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 31918 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_21 = tmp_mvar_value_13;
        CHECK_OBJECT(var_video_data);
        tmp_args_element_name_34 = var_video_data;
        tmp_args_element_name_35 = const_str_plain_isLive;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = {tmp_args_element_name_34, tmp_args_element_name_35};
            tmp_compexpr_left_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_21, call_args);
        }

        if (tmp_compexpr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_8 = const_str_plain_true;
        tmp_assign_source_40 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
        Py_DECREF(tmp_compexpr_left_8);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_is_live == NULL);
        var_is_live = tmp_assign_source_40;
    }
    {
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        nuitka_bool tmp_condition_result_18;
        int tmp_truth_name_11;
        PyObject *tmp_called_instance_35;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        PyObject *tmp_dict_key_22;
        PyObject *tmp_dict_value_22;
        PyObject *tmp_called_name_22;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_dict_key_23;
        PyObject *tmp_dict_value_23;
        PyObject *tmp_called_name_23;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_39;
        PyObject *tmp_called_name_24;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_40;
        PyObject *tmp_args_element_name_41;
        PyObject *tmp_dict_key_24;
        PyObject *tmp_dict_value_24;
        PyObject *tmp_called_name_25;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_args_element_name_42;
        int tmp_or_left_truth_7;
        PyObject *tmp_or_left_value_7;
        PyObject *tmp_or_right_value_7;
        PyObject *tmp_called_name_26;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_args_element_name_44;
        PyObject *tmp_called_name_27;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_45;
        PyObject *tmp_args_element_name_46;
        PyObject *tmp_dict_key_25;
        PyObject *tmp_dict_value_25;
        PyObject *tmp_called_instance_36;
        PyObject *tmp_args_element_name_47;
        PyObject *tmp_dict_key_26;
        PyObject *tmp_dict_value_26;
        PyObject *tmp_called_name_28;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_args_element_name_48;
        PyObject *tmp_args_element_name_49;
        PyObject *tmp_args_element_name_50;
        PyObject *tmp_dict_key_27;
        PyObject *tmp_dict_value_27;
        PyObject *tmp_called_name_29;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_element_name_51;
        PyObject *tmp_args_element_name_52;
        PyObject *tmp_dict_key_28;
        PyObject *tmp_dict_value_28;
        PyObject *tmp_called_name_30;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_element_name_53;
        PyObject *tmp_called_name_31;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_args_element_name_54;
        PyObject *tmp_args_element_name_55;
        PyObject *tmp_dict_key_29;
        PyObject *tmp_dict_value_29;
        PyObject *tmp_called_name_32;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_args_element_name_56;
        PyObject *tmp_called_name_33;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_args_element_name_57;
        PyObject *tmp_args_element_name_58;
        PyObject *tmp_dict_key_30;
        PyObject *tmp_dict_value_30;
        tmp_dict_key_17 = const_str_plain_id;
        CHECK_OBJECT(par_video_id);
        tmp_dict_value_17 = par_video_id;
        tmp_return_value = _PyDict_NewPresized( 14 );
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = const_str_plain_title;
        CHECK_OBJECT(var_is_live);
        tmp_truth_name_11 = CHECK_IF_TRUE(var_is_live);
        if (tmp_truth_name_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);

            exception_lineno = 182;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = tmp_truth_name_11 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_self);
        tmp_called_instance_35 = par_self;
        CHECK_OBJECT(var_title);
        tmp_args_element_name_36 = var_title;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = {tmp_args_element_name_36};
            tmp_dict_value_18 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_35, const_str_plain__live_title, call_args);
        }

        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);

            exception_lineno = 182;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(var_title);
        tmp_dict_value_18 = var_title;
        Py_INCREF(tmp_dict_value_18);
        condexpr_end_1:;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_18, tmp_dict_value_18);
        Py_DECREF(tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = const_str_plain_formats;
        CHECK_OBJECT(var_formats);
        tmp_dict_value_19 = var_formats;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_key_20 = const_str_plain_subtitles;
        CHECK_OBJECT(var_subtitles);
        tmp_dict_value_20 = var_subtitles;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = const_str_plain_thumbnails;
        CHECK_OBJECT(var_thumbnails);
        tmp_dict_value_21 = var_thumbnails;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = const_str_plain_thumbnail;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_xpath_text);

        if (unlikely(tmp_mvar_value_14 == NULL)) {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_xpath_text);
        }

        if (tmp_mvar_value_14 == NULL) {
            Py_DECREF(tmp_return_value);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 31918 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_22 = tmp_mvar_value_14;
        CHECK_OBJECT(var_video_data);
        tmp_args_element_name_37 = var_video_data;
        tmp_args_element_name_38 = const_str_plain_poster;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = {tmp_args_element_name_37, tmp_args_element_name_38};
            tmp_dict_value_22 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_22, call_args);
        }

        if (tmp_dict_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);

            exception_lineno = 186;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_22, tmp_dict_value_22);
        Py_DECREF(tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_23 = const_str_plain_description;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_strip_or_none);

        if (unlikely(tmp_mvar_value_15 == NULL)) {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_strip_or_none);
        }

        if (tmp_mvar_value_15 == NULL) {
            Py_DECREF(tmp_return_value);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 34189 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 187;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_23 = tmp_mvar_value_15;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_xpath_text);

        if (unlikely(tmp_mvar_value_16 == NULL)) {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_xpath_text);
        }

        if (tmp_mvar_value_16 == NULL) {
            Py_DECREF(tmp_return_value);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 31918 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 187;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_24 = tmp_mvar_value_16;
        CHECK_OBJECT(var_video_data);
        tmp_args_element_name_40 = var_video_data;
        tmp_args_element_name_41 = const_str_plain_description;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 187;
        {
            PyObject *call_args[] = {tmp_args_element_name_40, tmp_args_element_name_41};
            tmp_args_element_name_39 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_24, call_args);
        }

        if (tmp_args_element_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);

            exception_lineno = 187;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 187;
        tmp_dict_value_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_23, tmp_args_element_name_39);
        Py_DECREF(tmp_args_element_name_39);
        if (tmp_dict_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);

            exception_lineno = 187;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_23, tmp_dict_value_23);
        Py_DECREF(tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_key_24 = const_str_plain_duration;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_parse_duration);

        if (unlikely(tmp_mvar_value_17 == NULL)) {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_duration);
        }

        if (tmp_mvar_value_17 == NULL) {
            Py_DECREF(tmp_return_value);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 34436 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 188;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_25 = tmp_mvar_value_17;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_xpath_text);

        if (unlikely(tmp_mvar_value_18 == NULL)) {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_xpath_text);
        }

        if (tmp_mvar_value_18 == NULL) {
            Py_DECREF(tmp_return_value);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 31918 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 188;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_26 = tmp_mvar_value_18;
        CHECK_OBJECT(var_video_data);
        tmp_args_element_name_43 = var_video_data;
        tmp_args_element_name_44 = const_str_plain_length;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 188;
        {
            PyObject *call_args[] = {tmp_args_element_name_43, tmp_args_element_name_44};
            tmp_or_left_value_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_26, call_args);
        }

        if (tmp_or_left_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);

            exception_lineno = 188;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_7 = CHECK_IF_TRUE(tmp_or_left_value_7);
        if (tmp_or_left_truth_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);
            Py_DECREF(tmp_or_left_value_7);

            exception_lineno = 188;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_7 == 1) {
            goto or_left_7;
        } else {
            goto or_right_7;
        }
        or_right_7:;
        Py_DECREF(tmp_or_left_value_7);
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_xpath_text);

        if (unlikely(tmp_mvar_value_19 == NULL)) {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_xpath_text);
        }

        if (tmp_mvar_value_19 == NULL) {
            Py_DECREF(tmp_return_value);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 31918 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 188;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_27 = tmp_mvar_value_19;
        CHECK_OBJECT(var_video_data);
        tmp_args_element_name_45 = var_video_data;
        tmp_args_element_name_46 = const_str_plain_trt;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 188;
        {
            PyObject *call_args[] = {tmp_args_element_name_45, tmp_args_element_name_46};
            tmp_or_right_value_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_27, call_args);
        }

        if (tmp_or_right_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);

            exception_lineno = 188;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_42 = tmp_or_right_value_7;
        goto or_end_7;
        or_left_7:;
        tmp_args_element_name_42 = tmp_or_left_value_7;
        or_end_7:;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 188;
        tmp_dict_value_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_25, tmp_args_element_name_42);
        Py_DECREF(tmp_args_element_name_42);
        if (tmp_dict_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);

            exception_lineno = 188;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_24, tmp_dict_value_24);
        Py_DECREF(tmp_dict_value_24);
        assert(!(tmp_res != 0));
        tmp_dict_key_25 = const_str_plain_timestamp;
        CHECK_OBJECT(par_self);
        tmp_called_instance_36 = par_self;
        CHECK_OBJECT(var_video_data);
        tmp_args_element_name_47 = var_video_data;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = {tmp_args_element_name_47};
            tmp_dict_value_25 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_36, const_str_plain__extract_timestamp, call_args);
        }

        if (tmp_dict_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);

            exception_lineno = 189;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_25, tmp_dict_value_25);
        Py_DECREF(tmp_dict_value_25);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = const_str_plain_upload_date;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_xpath_attr);

        if (unlikely(tmp_mvar_value_20 == NULL)) {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_xpath_attr);
        }

        if (tmp_mvar_value_20 == NULL) {
            Py_DECREF(tmp_return_value);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 42930 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_28 = tmp_mvar_value_20;
        CHECK_OBJECT(var_video_data);
        tmp_args_element_name_48 = var_video_data;
        tmp_args_element_name_49 = const_str_plain_metas;
        tmp_args_element_name_50 = const_str_plain_version;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_name_48, tmp_args_element_name_49, tmp_args_element_name_50};
            tmp_dict_value_26 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_28, call_args);
        }

        if (tmp_dict_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);

            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_26, tmp_dict_value_26);
        Py_DECREF(tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_27 = const_str_plain_series;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_xpath_text);

        if (unlikely(tmp_mvar_value_21 == NULL)) {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_xpath_text);
        }

        if (tmp_mvar_value_21 == NULL) {
            Py_DECREF(tmp_return_value);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 31918 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_29 = tmp_mvar_value_21;
        CHECK_OBJECT(var_video_data);
        tmp_args_element_name_51 = var_video_data;
        tmp_args_element_name_52 = const_str_plain_showTitle;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 191;
        {
            PyObject *call_args[] = {tmp_args_element_name_51, tmp_args_element_name_52};
            tmp_dict_value_27 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_29, call_args);
        }

        if (tmp_dict_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);

            exception_lineno = 191;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_27, tmp_dict_value_27);
        Py_DECREF(tmp_dict_value_27);
        assert(!(tmp_res != 0));
        tmp_dict_key_28 = const_str_plain_season_number;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_int_or_none);

        if (unlikely(tmp_mvar_value_22 == NULL)) {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int_or_none);
        }

        if (tmp_mvar_value_22 == NULL) {
            Py_DECREF(tmp_return_value);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27635 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_30 = tmp_mvar_value_22;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_xpath_text);

        if (unlikely(tmp_mvar_value_23 == NULL)) {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_xpath_text);
        }

        if (tmp_mvar_value_23 == NULL) {
            Py_DECREF(tmp_return_value);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 31918 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_31 = tmp_mvar_value_23;
        CHECK_OBJECT(var_video_data);
        tmp_args_element_name_54 = var_video_data;
        tmp_args_element_name_55 = const_str_plain_seasonNumber;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 192;
        {
            PyObject *call_args[] = {tmp_args_element_name_54, tmp_args_element_name_55};
            tmp_args_element_name_53 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_31, call_args);
        }

        if (tmp_args_element_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);

            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 192;
        tmp_dict_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_30, tmp_args_element_name_53);
        Py_DECREF(tmp_args_element_name_53);
        if (tmp_dict_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);

            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_28, tmp_dict_value_28);
        Py_DECREF(tmp_dict_value_28);
        assert(!(tmp_res != 0));
        tmp_dict_key_29 = const_str_plain_episode_number;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_int_or_none);

        if (unlikely(tmp_mvar_value_24 == NULL)) {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int_or_none);
        }

        if (tmp_mvar_value_24 == NULL) {
            Py_DECREF(tmp_return_value);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27635 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 193;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_32 = tmp_mvar_value_24;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_xpath_text);

        if (unlikely(tmp_mvar_value_25 == NULL)) {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_xpath_text);
        }

        if (tmp_mvar_value_25 == NULL) {
            Py_DECREF(tmp_return_value);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 31918 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 193;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_33 = tmp_mvar_value_25;
        CHECK_OBJECT(var_video_data);
        tmp_args_element_name_57 = var_video_data;
        tmp_args_element_name_58 = const_str_plain_episodeNumber;
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = {tmp_args_element_name_57, tmp_args_element_name_58};
            tmp_args_element_name_56 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_33, call_args);
        }

        if (tmp_args_element_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);

            exception_lineno = 193;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_392b24dccf4092361f4d7243d09ead14->m_frame.f_lineno = 193;
        tmp_dict_value_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_32, tmp_args_element_name_56);
        Py_DECREF(tmp_args_element_name_56);
        if (tmp_dict_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);

            exception_lineno = 193;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_29, tmp_dict_value_29);
        Py_DECREF(tmp_dict_value_29);
        assert(!(tmp_res != 0));
        tmp_dict_key_30 = const_str_plain_is_live;
        CHECK_OBJECT(var_is_live);
        tmp_dict_value_30 = var_is_live;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_30, tmp_dict_value_30);
        assert(!(tmp_res != 0));
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_392b24dccf4092361f4d7243d09ead14);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_392b24dccf4092361f4d7243d09ead14);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_392b24dccf4092361f4d7243d09ead14);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_392b24dccf4092361f4d7243d09ead14, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_392b24dccf4092361f4d7243d09ead14->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_392b24dccf4092361f4d7243d09ead14, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_392b24dccf4092361f4d7243d09ead14,
        type_description_1,
        par_self,
        par_data_src,
        par_video_id,
        par_path_data,
        par_ap_data,
        var_video_data,
        var_title,
        var_content_id,
        var_urls,
        var_formats,
        var_rex,
        var_video_file,
        var_video_url,
        var_ext,
        var_secure_path_data,
        var_base_path_data,
        var_media_src,
        var_format_id,
        var_m3u8_formats,
        var_f,
        var_mobj,
        var_subtitles,
        var_source,
        var_track,
        var_track_url,
        var_lang,
        var_thumbnails,
        var_is_live
    );


    // Release cached frame.
    if (frame_392b24dccf4092361f4d7243d09ead14 == cache_frame_392b24dccf4092361f4d7243d09ead14) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_392b24dccf4092361f4d7243d09ead14);
    }
    cache_frame_392b24dccf4092361f4d7243d09ead14 = NULL;

    assertFrameObject(frame_392b24dccf4092361f4d7243d09ead14);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_video_id);
    Py_DECREF(par_video_id);
    par_video_id = NULL;

    CHECK_OBJECT(var_video_data);
    Py_DECREF(var_video_data);
    var_video_data = NULL;

    CHECK_OBJECT(var_title);
    Py_DECREF(var_title);
    var_title = NULL;

    CHECK_OBJECT(var_content_id);
    Py_DECREF(var_content_id);
    var_content_id = NULL;

    CHECK_OBJECT(var_urls);
    Py_DECREF(var_urls);
    var_urls = NULL;

    CHECK_OBJECT(var_formats);
    Py_DECREF(var_formats);
    var_formats = NULL;

    CHECK_OBJECT(var_rex);
    Py_DECREF(var_rex);
    var_rex = NULL;

    Py_XDECREF(var_video_file);
    var_video_file = NULL;

    Py_XDECREF(var_video_url);
    var_video_url = NULL;

    Py_XDECREF(var_ext);
    var_ext = NULL;

    Py_XDECREF(var_secure_path_data);
    var_secure_path_data = NULL;

    Py_XDECREF(var_base_path_data);
    var_base_path_data = NULL;

    Py_XDECREF(var_media_src);
    var_media_src = NULL;

    Py_XDECREF(var_format_id);
    var_format_id = NULL;

    Py_XDECREF(var_m3u8_formats);
    var_m3u8_formats = NULL;

    Py_XDECREF(var_f);
    var_f = NULL;

    Py_XDECREF(var_mobj);
    var_mobj = NULL;

    CHECK_OBJECT(var_subtitles);
    Py_DECREF(var_subtitles);
    var_subtitles = NULL;

    Py_XDECREF(var_source);
    var_source = NULL;

    Py_XDECREF(var_track);
    var_track = NULL;

    Py_XDECREF(var_track_url);
    var_track_url = NULL;

    Py_XDECREF(var_lang);
    var_lang = NULL;

    CHECK_OBJECT(var_thumbnails);
    Py_DECREF(var_thumbnails);
    var_thumbnails = NULL;

    CHECK_OBJECT(var_is_live);
    Py_DECREF(var_is_live);
    var_is_live = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_video_id);
    Py_DECREF(par_video_id);
    par_video_id = NULL;

    Py_XDECREF(var_video_data);
    var_video_data = NULL;

    Py_XDECREF(var_title);
    var_title = NULL;

    Py_XDECREF(var_content_id);
    var_content_id = NULL;

    Py_XDECREF(var_urls);
    var_urls = NULL;

    Py_XDECREF(var_formats);
    var_formats = NULL;

    Py_XDECREF(var_rex);
    var_rex = NULL;

    Py_XDECREF(var_video_file);
    var_video_file = NULL;

    Py_XDECREF(var_video_url);
    var_video_url = NULL;

    Py_XDECREF(var_ext);
    var_ext = NULL;

    Py_XDECREF(var_secure_path_data);
    var_secure_path_data = NULL;

    Py_XDECREF(var_base_path_data);
    var_base_path_data = NULL;

    Py_XDECREF(var_media_src);
    var_media_src = NULL;

    Py_XDECREF(var_format_id);
    var_format_id = NULL;

    Py_XDECREF(var_m3u8_formats);
    var_m3u8_formats = NULL;

    Py_XDECREF(var_f);
    var_f = NULL;

    Py_XDECREF(var_mobj);
    var_mobj = NULL;

    Py_XDECREF(var_subtitles);
    var_subtitles = NULL;

    Py_XDECREF(var_source);
    var_source = NULL;

    Py_XDECREF(var_track);
    var_track = NULL;

    Py_XDECREF(var_track_url);
    var_track_url = NULL;

    Py_XDECREF(var_lang);
    var_lang = NULL;

    Py_XDECREF(var_thumbnails);
    var_thumbnails = NULL;

    Py_XDECREF(var_is_live);
    var_is_live = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data_src);
    Py_DECREF(par_data_src);
    CHECK_OBJECT(par_path_data);
    Py_DECREF(par_path_data);
    CHECK_OBJECT(par_ap_data);
    Py_DECREF(par_ap_data);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data_src);
    Py_DECREF(par_data_src);
    CHECK_OBJECT(par_path_data);
    Py_DECREF(par_path_data);
    CHECK_OBJECT(par_ap_data);
    Py_DECREF(par_ap_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$turner$$$function_4__extract_ngtv_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_media_id = python_pars[1];
    PyObject *par_tokenizer_query = python_pars[2];
    PyObject *par_ap_data = python_pars[3];
    PyObject *var_streams_data = NULL;
    PyObject *var_duration = NULL;
    PyObject *var_chapters = NULL;
    PyObject *var_formats = NULL;
    PyObject *var_supported_type = NULL;
    PyObject *var_stream_data = NULL;
    PyObject *var_m3u8_url = NULL;
    PyObject *var_chapter = NULL;
    PyObject *var_start_time = NULL;
    PyObject *var_chapter_duration = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_0a50bed5ac3634045d68950105ade64b;
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
    static struct Nuitka_FrameObject *cache_frame_0a50bed5ac3634045d68950105ade64b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0a50bed5ac3634045d68950105ade64b)) {
        Py_XDECREF(cache_frame_0a50bed5ac3634045d68950105ade64b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0a50bed5ac3634045d68950105ade64b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0a50bed5ac3634045d68950105ade64b = MAKE_FUNCTION_FRAME(codeobj_0a50bed5ac3634045d68950105ade64b, module_youtube_dl$extractor$turner, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0a50bed5ac3634045d68950105ade64b->m_type_description == NULL);
    frame_0a50bed5ac3634045d68950105ade64b = cache_frame_0a50bed5ac3634045d68950105ade64b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0a50bed5ac3634045d68950105ade64b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0a50bed5ac3634045d68950105ade64b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain__download_json);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = const_str_digest_0084b0f9d66d985442b7003e6ad6ff29;
        CHECK_OBJECT(par_media_id);
        tmp_right_name_1 = par_media_id;
        tmp_args_element_name_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 199;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_media_id);
        tmp_args_element_name_2 = par_media_id;
        frame_0a50bed5ac3634045d68950105ade64b->m_frame.f_lineno = 198;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_expression_name_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_str_plain_media;
        tmp_expression_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_str_plain_tv;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_2);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_streams_data == NULL);
        var_streams_data = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_None;
        assert(var_duration == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_duration = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyList_New(0);
        assert(var_chapters == NULL);
        var_chapters = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyList_New(0);
        assert(var_formats == NULL);
        var_formats = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = const_tuple_str_plain_unprotected_str_plain_bulkaes_tuple;
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        assert(!(tmp_assign_source_5 == NULL));
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooo";
                exception_lineno = 204;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_supported_type;
            var_supported_type = tmp_assign_source_7;
            Py_INCREF(var_supported_type);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(var_streams_data);
        tmp_called_instance_1 = var_streams_data;
        CHECK_OBJECT(var_supported_type);
        tmp_args_element_name_3 = var_supported_type;
        tmp_args_element_name_4 = PyDict_New();
        frame_0a50bed5ac3634045d68950105ade64b->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_assign_source_8 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_get, call_args);
        }

        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_stream_data;
            var_stream_data = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_stream_data);
        tmp_called_instance_2 = var_stream_data;
        frame_0a50bed5ac3634045d68950105ade64b->m_frame.f_lineno = 206;
        tmp_or_left_value_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_secureUrl_tuple, 0));

        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 206;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        CHECK_OBJECT(var_stream_data);
        tmp_called_instance_3 = var_stream_data;
        frame_0a50bed5ac3634045d68950105ade64b->m_frame.f_lineno = 206;
        tmp_or_right_value_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_url_tuple, 0));

        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_9 = tmp_or_left_value_1;
        or_end_1:;
        {
            PyObject *old = var_m3u8_url;
            var_m3u8_url = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(var_m3u8_url);
        tmp_operand_name_1 = var_m3u8_url;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooo";
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
    goto loop_start_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_stream_data);
        tmp_called_instance_4 = var_stream_data;
        frame_0a50bed5ac3634045d68950105ade64b->m_frame.f_lineno = 209;
        tmp_compexpr_left_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_playlistProtection_tuple, 0));

        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = const_str_plain_spe;
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 209;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT(par_self);
        tmp_expression_name_4 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain__add_akamai_spe_token);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_5 = const_str_digest_8b4c2f003fdff272f4cd6900066b514e;
        CHECK_OBJECT(var_m3u8_url);
        tmp_args_element_name_6 = var_m3u8_url;
        CHECK_OBJECT(par_media_id);
        tmp_args_element_name_7 = par_media_id;
        CHECK_OBJECT(par_ap_data);
        tmp_or_left_value_2 = par_ap_data;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 212;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        tmp_or_right_value_2 = PyDict_New();
        tmp_args_element_name_8 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        Py_INCREF(tmp_or_left_value_2);
        tmp_args_element_name_8 = tmp_or_left_value_2;
        or_end_2:;
        CHECK_OBJECT(par_tokenizer_query);
        tmp_args_element_name_9 = par_tokenizer_query;
        frame_0a50bed5ac3634045d68950105ade64b->m_frame.f_lineno = 210;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_m3u8_url;
            assert(old != NULL);
            var_m3u8_url = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT(var_formats);
        tmp_expression_name_5 = var_formats;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, const_str_plain_extend);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_6 = par_self;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, const_str_plain__extract_m3u8_formats);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 213;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_m3u8_url);
        tmp_tuple_element_1 = var_m3u8_url;
        tmp_args_name_1 = PyTuple_New(3);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_media_id);
        tmp_tuple_element_1 = par_media_id;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_str_plain_mp4;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 2, tmp_tuple_element_1);
        tmp_kw_name_1 = PyDict_Copy(const_dict_7e1d509d9f0adef67df7fa8dd2e83c7a);
        frame_0a50bed5ac3634045d68950105ade64b->m_frame.f_lineno = 213;
        tmp_args_element_name_10 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 213;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        frame_0a50bed5ac3634045d68950105ade64b->m_frame.f_lineno = 213;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_10);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_called_instance_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_float_or_none);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_float_or_none);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 33881 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 216;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_5 = tmp_mvar_value_1;
        CHECK_OBJECT(var_stream_data);
        tmp_called_instance_5 = var_stream_data;
        frame_0a50bed5ac3634045d68950105ade64b->m_frame.f_lineno = 216;
        tmp_args_element_name_11 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_totalRuntime_tuple, 0));

        if (tmp_args_element_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        frame_0a50bed5ac3634045d68950105ade64b->m_frame.f_lineno = 216;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_11);
        Py_DECREF(tmp_args_element_name_11);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_duration;
            assert(old != NULL);
            var_duration = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT(var_chapters);
        tmp_operand_name_2 = var_chapters;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        CHECK_OBJECT(var_stream_data);
        tmp_called_instance_6 = var_stream_data;
        tmp_call_arg_element_1 = const_str_plain_contentSegments;
        tmp_call_arg_element_2 = PyList_New(0);
        frame_0a50bed5ac3634045d68950105ade64b->m_frame.f_lineno = 219;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_iter_arg_2 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_6, const_str_plain_get, call_args);
        }

        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_13 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooo";
                exception_lineno = 219;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_14 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_chapter;
            var_chapter = tmp_assign_source_14;
            Py_INCREF(var_chapter);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_called_instance_7;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_float_or_none);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_float_or_none);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 33881 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_name_6 = tmp_mvar_value_2;
        CHECK_OBJECT(var_chapter);
        tmp_called_instance_7 = var_chapter;
        frame_0a50bed5ac3634045d68950105ade64b->m_frame.f_lineno = 220;
        tmp_args_element_name_12 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_start_tuple, 0));

        if (tmp_args_element_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        frame_0a50bed5ac3634045d68950105ade64b->m_frame.f_lineno = 220;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_12);
        Py_DECREF(tmp_args_element_name_12);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_start_time;
            var_start_time = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_called_instance_8;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_float_or_none);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_float_or_none);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 33881 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 221;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_name_7 = tmp_mvar_value_3;
        CHECK_OBJECT(var_chapter);
        tmp_called_instance_8 = var_chapter;
        frame_0a50bed5ac3634045d68950105ade64b->m_frame.f_lineno = 221;
        tmp_args_element_name_13 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_8, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_duration_tuple, 0));

        if (tmp_args_element_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        frame_0a50bed5ac3634045d68950105ade64b->m_frame.f_lineno = 221;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_13);
        Py_DECREF(tmp_args_element_name_13);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_chapter_duration;
            var_chapter_duration = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_or_left_truth_3;
        nuitka_bool tmp_or_left_value_3;
        nuitka_bool tmp_or_right_value_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(var_start_time);
        tmp_compexpr_left_2 = var_start_time;
        tmp_compexpr_right_2 = Py_None;
        tmp_or_left_value_3 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        CHECK_OBJECT(var_chapter_duration);
        tmp_compexpr_left_3 = var_chapter_duration;
        tmp_compexpr_right_3 = Py_None;
        tmp_or_right_value_3 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_4 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_condition_result_4 = tmp_or_left_value_3;
        or_end_3:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    goto loop_start_2;
    branch_no_4:;
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(var_chapters);
        tmp_expression_name_7 = var_chapters;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, const_str_plain_append);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_dict_key_1 = const_str_plain_start_time;
        CHECK_OBJECT(var_start_time);
        tmp_dict_value_1 = var_start_time;
        tmp_args_element_name_14 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_14, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_end_time;
        CHECK_OBJECT(var_start_time);
        tmp_left_name_2 = var_start_time;
        CHECK_OBJECT(var_chapter_duration);
        tmp_right_name_2 = var_chapter_duration;
        tmp_dict_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_args_element_name_14);

            exception_lineno = 226;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_14, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_0a50bed5ac3634045d68950105ade64b->m_frame.f_lineno = 224;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_14);
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 219;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;

    branch_no_3:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 204;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_15;
        CHECK_OBJECT(par_self);
        tmp_called_instance_9 = par_self;
        CHECK_OBJECT(var_formats);
        tmp_args_element_name_15 = var_formats;
        frame_0a50bed5ac3634045d68950105ade64b->m_frame.f_lineno = 228;
        {
            PyObject *call_args[] = {tmp_args_element_name_15};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_9, const_str_plain__sort_formats, call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a50bed5ac3634045d68950105ade64b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a50bed5ac3634045d68950105ade64b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0a50bed5ac3634045d68950105ade64b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0a50bed5ac3634045d68950105ade64b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0a50bed5ac3634045d68950105ade64b, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0a50bed5ac3634045d68950105ade64b,
        type_description_1,
        par_self,
        par_media_id,
        par_tokenizer_query,
        par_ap_data,
        var_streams_data,
        var_duration,
        var_chapters,
        var_formats,
        var_supported_type,
        var_stream_data,
        var_m3u8_url,
        var_chapter,
        var_start_time,
        var_chapter_duration
    );


    // Release cached frame.
    if (frame_0a50bed5ac3634045d68950105ade64b == cache_frame_0a50bed5ac3634045d68950105ade64b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_0a50bed5ac3634045d68950105ade64b);
    }
    cache_frame_0a50bed5ac3634045d68950105ade64b = NULL;

    assertFrameObject(frame_0a50bed5ac3634045d68950105ade64b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_dict_key_3 = const_str_plain_formats;
        CHECK_OBJECT(var_formats);
        tmp_dict_value_3 = var_formats;
        tmp_return_value = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_chapters;
        CHECK_OBJECT(var_chapters);
        tmp_dict_value_4 = var_chapters;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = const_str_plain_duration;
        CHECK_OBJECT(var_duration);
        tmp_dict_value_5 = var_duration;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_streams_data);
    Py_DECREF(var_streams_data);
    var_streams_data = NULL;

    CHECK_OBJECT(var_duration);
    Py_DECREF(var_duration);
    var_duration = NULL;

    CHECK_OBJECT(var_chapters);
    Py_DECREF(var_chapters);
    var_chapters = NULL;

    CHECK_OBJECT(var_formats);
    Py_DECREF(var_formats);
    var_formats = NULL;

    Py_XDECREF(var_supported_type);
    var_supported_type = NULL;

    Py_XDECREF(var_stream_data);
    var_stream_data = NULL;

    Py_XDECREF(var_m3u8_url);
    var_m3u8_url = NULL;

    Py_XDECREF(var_chapter);
    var_chapter = NULL;

    Py_XDECREF(var_start_time);
    var_start_time = NULL;

    Py_XDECREF(var_chapter_duration);
    var_chapter_duration = NULL;

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

    Py_XDECREF(var_streams_data);
    var_streams_data = NULL;

    Py_XDECREF(var_duration);
    var_duration = NULL;

    Py_XDECREF(var_chapters);
    var_chapters = NULL;

    Py_XDECREF(var_formats);
    var_formats = NULL;

    Py_XDECREF(var_supported_type);
    var_supported_type = NULL;

    Py_XDECREF(var_stream_data);
    var_stream_data = NULL;

    Py_XDECREF(var_m3u8_url);
    var_m3u8_url = NULL;

    Py_XDECREF(var_chapter);
    var_chapter = NULL;

    Py_XDECREF(var_start_time);
    var_start_time = NULL;

    Py_XDECREF(var_chapter_duration);
    var_chapter_duration = NULL;

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_media_id);
    Py_DECREF(par_media_id);
    CHECK_OBJECT(par_tokenizer_query);
    Py_DECREF(par_tokenizer_query);
    CHECK_OBJECT(par_ap_data);
    Py_DECREF(par_ap_data);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_media_id);
    Py_DECREF(par_media_id);
    CHECK_OBJECT(par_tokenizer_query);
    Py_DECREF(par_tokenizer_query);
    CHECK_OBJECT(par_ap_data);
    Py_DECREF(par_ap_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$turner$$$function_1__extract_timestamp() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$turner$$$function_1__extract_timestamp,
        const_str_plain__extract_timestamp,
#if PYTHON_VERSION >= 300
        const_str_digest_a3b3433ee93cf1020d42578410f67163,
#endif
        codeobj_ffe23f65438fa40b09270508f6e03b6a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$turner,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$turner$$$function_2__add_akamai_spe_token(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$turner$$$function_2__add_akamai_spe_token,
        const_str_plain__add_akamai_spe_token,
#if PYTHON_VERSION >= 300
        const_str_digest_ef96d5b0821d5d2d73b1669644c609ae,
#endif
        codeobj_1e2e491c030f724601053c4ec4442500,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$turner,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$turner$$$function_3__extract_cvp_info(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$turner$$$function_3__extract_cvp_info,
        const_str_plain__extract_cvp_info,
#if PYTHON_VERSION >= 300
        const_str_digest_e8e27f0e4d2e934e0e6af81b86cb0def,
#endif
        codeobj_392b24dccf4092361f4d7243d09ead14,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$turner,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$turner$$$function_4__extract_ngtv_info(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$turner$$$function_4__extract_ngtv_info,
        const_str_plain__extract_ngtv_info,
#if PYTHON_VERSION >= 300
        const_str_digest_72a520b33405f7adf554e310b6266356,
#endif
        codeobj_0a50bed5ac3634045d68950105ade64b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$turner,
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

function_impl_code functable_youtube_dl$extractor$turner[] = {
    impl_youtube_dl$extractor$turner$$$function_1__extract_timestamp,
    impl_youtube_dl$extractor$turner$$$function_2__add_akamai_spe_token,
    impl_youtube_dl$extractor$turner$$$function_3__extract_cvp_info,
    impl_youtube_dl$extractor$turner$$$function_4__extract_ngtv_info,
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

    function_impl_code *current = functable_youtube_dl$extractor$turner;
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

    if (offset > sizeof(functable_youtube_dl$extractor$turner) || offset < 0) {
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
        functable_youtube_dl$extractor$turner[offset],
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
        module_youtube_dl$extractor$turner,
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
PyObject *modulecode_youtube_dl$extractor$turner(PyObject *module) {
    module_youtube_dl$extractor$turner = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_youtube_dl$extractor$turner;
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
    PRINT_STRING("youtube_dl.extractor.turner: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("youtube_dl.extractor.turner: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("youtube_dl.extractor.turner: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in inityoutube_dl$extractor$turner\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_youtube_dl$extractor$turner = MODULE_DICT(module_youtube_dl$extractor$turner);

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
        moduledict_youtube_dl$extractor$turner,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$extractor$turner,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$extractor$turner,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$extractor$turner,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$extractor$turner,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_youtube_dl$extractor$turner);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_1a35e63b13df57c9fe789f974bfaa5d6;
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
    PyObject *locals_youtube_dl$extractor$turner_22 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_95ecd32c345e9b9222f41be6670fa3e5_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_95ecd32c345e9b9222f41be6670fa3e5_2 = NULL;
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
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_30db7040b77d807146fa83bae61f35b3;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_1a35e63b13df57c9fe789f974bfaa5d6 = MAKE_MODULE_FRAME(codeobj_1a35e63b13df57c9fe789f974bfaa5d6, module_youtube_dl$extractor$turner);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_1a35e63b13df57c9fe789f974bfaa5d6);
    assert(Py_REFCNT(frame_1a35e63b13df57c9fe789f974bfaa5d6) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_30db7040b77d807146fa83bae61f35b3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        frame_1a35e63b13df57c9fe789f974bfaa5d6->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
           tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_youtube_dl$extractor$turner,
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
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_re;
        tmp_globals_name_1 = (PyObject *)moduledict_youtube_dl$extractor$turner;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_1a35e63b13df57c9fe789f974bfaa5d6->m_frame.f_lineno = 4;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_adobepass;
        tmp_globals_name_2 = (PyObject *)moduledict_youtube_dl$extractor$turner;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_AdobePassIE_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_1a35e63b13df57c9fe789f974bfaa5d6->m_frame.f_lineno = 6;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
           tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_youtube_dl$extractor$turner,
                const_str_plain_AdobePassIE,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_AdobePassIE);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_AdobePassIE, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_compat;
        tmp_globals_name_3 = (PyObject *)moduledict_youtube_dl$extractor$turner;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_compat_str_tuple;
        tmp_level_name_3 = const_int_pos_2;
        frame_1a35e63b13df57c9fe789f974bfaa5d6->m_frame.f_lineno = 7;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
           tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_youtube_dl$extractor$turner,
                const_str_plain_compat_str,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_compat_str);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_compat_str, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_utils;
        tmp_globals_name_4 = (PyObject *)moduledict_youtube_dl$extractor$turner;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_72448ac7319afc3b4aa8cccf0e058581_tuple;
        tmp_level_name_4 = const_int_pos_2;
        frame_1a35e63b13df57c9fe789f974bfaa5d6->m_frame.f_lineno = 8;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_youtube_dl$extractor$turner,
                const_str_plain_xpath_text,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_xpath_text);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_xpath_text, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_youtube_dl$extractor$turner,
                const_str_plain_int_or_none,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_int_or_none);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_int_or_none, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_youtube_dl$extractor$turner,
                const_str_plain_determine_ext,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_determine_ext);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_determine_ext, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_youtube_dl$extractor$turner,
                const_str_plain_float_or_none,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_float_or_none);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_float_or_none, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_youtube_dl$extractor$turner,
                const_str_plain_parse_duration,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_parse_duration);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_parse_duration, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_youtube_dl$extractor$turner,
                const_str_plain_xpath_attr,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_xpath_attr);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_xpath_attr, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_youtube_dl$extractor$turner,
                const_str_plain_update_url_query,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain_update_url_query);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_update_url_query, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_11 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
           tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_youtube_dl$extractor$turner,
                const_str_plain_ExtractorError,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_11, const_str_plain_ExtractorError);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_ExtractorError, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_12 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_youtube_dl$extractor$turner,
                const_str_plain_strip_or_none,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_12, const_str_plain_strip_or_none);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_strip_or_none, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_13 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
           tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_youtube_dl$extractor$turner,
                const_str_plain_url_or_none,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_13, const_str_plain_url_or_none);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_url_or_none, tmp_assign_source_18);
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_AdobePassIE);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_AdobePassIE);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 34261 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 22;

            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_assign_source_19 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_19, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_20 = impl___internal__$$$function_4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
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


            exception_lineno = 22;

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


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

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


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

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
        tmp_assign_source_22 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_22;
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


            exception_lineno = 22;

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


        exception_lineno = 22;

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
        PyObject *tmp_assign_source_23;
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


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = const_str_plain_TurnerBaseIE;
        tmp_args_name_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_1a35e63b13df57c9fe789f974bfaa5d6->m_frame.f_lineno = 22;
        tmp_assign_source_23 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_23;
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


            exception_lineno = 22;

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


            exception_lineno = 22;

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

            exception_lineno = 22;

            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_3);
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 22;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_24;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_25;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_youtube_dl$extractor$turner_22 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_4b891f58c6c7b3312190a88211a909a0;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$turner_22, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_TurnerBaseIE;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$turner_22, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_95ecd32c345e9b9222f41be6670fa3e5_2)) {
            Py_XDECREF(cache_frame_95ecd32c345e9b9222f41be6670fa3e5_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_95ecd32c345e9b9222f41be6670fa3e5_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_95ecd32c345e9b9222f41be6670fa3e5_2 = MAKE_FUNCTION_FRAME(codeobj_95ecd32c345e9b9222f41be6670fa3e5, module_youtube_dl$extractor$turner, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_95ecd32c345e9b9222f41be6670fa3e5_2->m_type_description == NULL);
        frame_95ecd32c345e9b9222f41be6670fa3e5_2 = cache_frame_95ecd32c345e9b9222f41be6670fa3e5_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_95ecd32c345e9b9222f41be6670fa3e5_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_95ecd32c345e9b9222f41be6670fa3e5_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = PyDict_New();
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$turner_22, const_str_plain__AKAMAI_SPE_TOKEN_CACHE, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$turner$$$function_1__extract_timestamp();



        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$turner_22, const_str_plain__extract_timestamp, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_tuple;
            Py_INCREF(tmp_defaults_1);
            tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$turner$$$function_2__add_akamai_spe_token(tmp_defaults_1);



            tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$turner_22, const_str_plain__add_akamai_spe_token, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_tuple_element_4;
            tmp_tuple_element_4 = PyDict_New();
            tmp_defaults_2 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_defaults_2, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = PyDict_New();
            PyTuple_SET_ITEM(tmp_defaults_2, 1, tmp_tuple_element_4);
            tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$turner$$$function_3__extract_cvp_info(tmp_defaults_2);



            tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$turner_22, const_str_plain__extract_cvp_info, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_none_tuple;
            Py_INCREF(tmp_defaults_3);
            tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$turner$$$function_4__extract_ngtv_info(tmp_defaults_3);



            tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$turner_22, const_str_plain__extract_ngtv_info, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_95ecd32c345e9b9222f41be6670fa3e5_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_95ecd32c345e9b9222f41be6670fa3e5_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_95ecd32c345e9b9222f41be6670fa3e5_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_95ecd32c345e9b9222f41be6670fa3e5_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_95ecd32c345e9b9222f41be6670fa3e5_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_95ecd32c345e9b9222f41be6670fa3e5_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if (frame_95ecd32c345e9b9222f41be6670fa3e5_2 == cache_frame_95ecd32c345e9b9222f41be6670fa3e5_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(frame_95ecd32c345e9b9222f41be6670fa3e5_2);
        }
        cache_frame_95ecd32c345e9b9222f41be6670fa3e5_2 = NULL;

        assertFrameObject(frame_95ecd32c345e9b9222f41be6670fa3e5_2);

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


                exception_lineno = 22;

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
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$turner_22, const_str_plain___orig_bases__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = const_str_plain_TurnerBaseIE;
            tmp_args_name_2 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_5);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_5);
            PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_youtube_dl$extractor$turner_22;
            Py_INCREF(tmp_tuple_element_5);
            PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_1a35e63b13df57c9fe789f974bfaa5d6->m_frame.f_lineno = 22;
            tmp_assign_source_26 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_26;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_25 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_25);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_youtube_dl$extractor$turner_22);
        locals_youtube_dl$extractor$turner_22 = NULL;
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

        Py_DECREF(locals_youtube_dl$extractor$turner_22);
        locals_youtube_dl$extractor$turner_22 = NULL;
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
        exception_lineno = 22;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$turner, (Nuitka_StringObject *)const_str_plain_TurnerBaseIE, tmp_assign_source_25);
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
    RESTORE_FRAME_EXCEPTION(frame_1a35e63b13df57c9fe789f974bfaa5d6);
#endif
    popFrameStack();

    assertFrameObject(frame_1a35e63b13df57c9fe789f974bfaa5d6);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1a35e63b13df57c9fe789f974bfaa5d6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1a35e63b13df57c9fe789f974bfaa5d6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a35e63b13df57c9fe789f974bfaa5d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a35e63b13df57c9fe789f974bfaa5d6, exception_lineno);
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


    return module_youtube_dl$extractor$turner;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
