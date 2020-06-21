/* Generated code for Python module 'youtube_dl.extractor.prosiebensat1'
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

/* The "_module_youtube_dl$extractor$prosiebensat1" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_youtube_dl$extractor$prosiebensat1;
PyDictObject *moduledict_youtube_dl$extractor$prosiebensat1;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_rtmpe;
extern PyObject *const_str_plain_headers;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_clip;
extern PyObject *const_str_plain_dict;
extern PyObject *const_str_plain___name__;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_compat_str;
static PyObject *const_str_plain__V4_BASE_URL;
static PyObject *const_tuple_str_plain_rtmp_str_plain_rtmpe_tuple;
static PyObject *const_str_digest_5af98eb3c10d1d56e88dcea29b84c50f;
extern PyObject *const_str_plain_m3u8_id;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_plain__og_search_thumbnail;
extern PyObject *const_dict_7e1d509d9f0adef67df7fa8dd2e83c7a;
extern PyObject *const_str_plain_default;
static PyObject *const_str_digest_fb44b9cbf0fd6414ae3eacd0bb8b1d45;
extern PyObject *const_str_plain_access_token;
static PyObject *const_str_digest_54f03883be440df472ad648e929601ea;
extern PyObject *const_str_plain_video_id;
extern PyObject *const_str_plain_duration;
static PyObject *const_str_digest_8a2897f4d46713dd5e6086c9380a1c7f;
extern PyObject *const_str_plain_utils;
extern PyObject *const_slice_none_int_pos_2_none;
static PyObject *const_str_plain_tvShowTitle;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_digest_7e45ec587f6b7ebd6bf6a7cd48d01827;
static PyObject *const_tuple_str_plain_is_protected_tuple;
static PyObject *const_str_digest_881491fd5e70710485e20a65c86b238c;
static PyObject *const_str_digest_2d138515cc1316900655358617c6c6f7;
extern PyObject *const_str_plain_play_path;
extern PyObject *const_str_plain_hexdigest;
static PyObject *const_str_digest_0c8ed584f45ca1cf53ac191f1d8329e3;
extern PyObject *const_str_plain__VALID_URL;
extern PyObject *const_str_plain_hashlib;
static PyObject *const_str_digest_870532ceecd5e76c2d84587ba7f23c57;
extern PyObject *const_str_plain__download_webpage;
extern PyObject *const_str_plain_path;
extern PyObject *const_tuple_str_plain_headline_tuple;
static PyObject *const_str_plain_Aeluchoc6aevechuipiexeeboowedaok;
extern PyObject *const_str_plain__extract_video_info;
extern PyObject *const_str_plain__parse_json;
extern PyObject *const_tuple_str_plain_url_tuple;
static PyObject *const_tuple_str_plain_upc_tuple;
extern PyObject *const_str_plain_ids;
static PyObject *const_str_plain__CLIPID_REGEXES;
extern PyObject *const_str_plain_expected;
static PyObject *const_str_plain_f4mgenerator;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_str_plain_raise_geo_restricted;
extern PyObject *const_str_plain__real_extract;
extern PyObject *const_str_plain_formats;
extern PyObject *const_int_0;
static PyObject *const_str_digest_0dd27c0738d99365178b375ebf3f84c6;
extern PyObject *const_str_digest_0afc73cee89d938db0f35dde4d1c0891;
static PyObject *const_str_digest_b34a7348b50f7825cf83269d70dd5ba6;
static PyObject *const_tuple_dfae89dc6c5dc283f965c829ba8623d2_tuple;
static PyObject *const_str_plain_broadcastPublisher;
static PyObject *const_str_digest_364ac119eb692142977a501c336e93fe;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_client_token;
extern PyObject *const_str_plain_playlist_result;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain__DESCRIPTION_REGEXES;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_determine_ext;
static PyObject *const_tuple_str_plain_broadcastPublisher_tuple;
static PyObject *const_str_digest_0050cea561d42b6215ff7183e6359e11;
static PyObject *const_list_d79df2e347e18e39f8ac33cc41f0af20_list;
extern PyObject *const_str_digest_fcf040720b88d60da4ce975010c44a3a;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_digest_9286097557b9fa4516501d50d1e54276;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_digest_0d25277cb690620921ea9198bc861230;
extern PyObject *const_str_plain_ExtractorError;
extern PyObject *const_str_plain_page_url;
extern PyObject *const_tuple_str_plain_error_tuple;
extern PyObject *const_str_plain_common;
static PyObject *const_str_digest_7259dcef6e027c44316123fbe57f2858;
static PyObject *const_str_digest_5f48a16386a64af8c44a87d56c5c50bf;
extern PyObject *const_str_plain_playlist;
extern PyObject *const_str_plain__TOKEN;
static PyObject *const_str_digest_76a2f8226f291d131c6eb936f31209c2;
static PyObject *const_str_digest_c3034eea6720778d459a5797f735fd87;
extern PyObject *const_str_digest_3f6240938cc8b4c3691344def7c310a8;
static PyObject *const_str_digest_6641c74c9d0e94d405d6b0c5f960c346;
extern PyObject *const_tuple_str_plain_path_tuple;
extern PyObject *const_tuple_str_plain_id_tuple;
extern PyObject *const_str_plain_poster;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain__TITLE_REGEXES;
extern PyObject *const_str_digest_906ba8abdf863066592bcc2b9cddc9f3;
static PyObject *const_list_b86d176542f53e13deab2343c1f0780d_list;
static PyObject *const_str_plain_rfind;
extern PyObject *const_str_digest_12418a5efd7fc5b743c4fe5f9703e6d9;
extern PyObject *const_str_plain_fatal;
extern PyObject *const_str_plain_webpage;
extern PyObject *const_str_plain_client_id;
static PyObject *const_str_digest_05d5c2391d67c3b52773258d8aa5ff1b;
extern PyObject *const_str_plain_protocols;
static PyObject *const_str_digest_4983d4f059d65e027de0f5c4a7c2d2ab;
static PyObject *const_str_digest_4dcef55adc46409324dd0990bc845e7e;
static PyObject *const_str_plain_client_name;
extern PyObject *const_str_plain__TESTS;
static PyObject *const_str_digest_98a9a21597c8f0cec371a3b10276ad0a;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_str_digest_99679730b984150f6c23a5bca3a8d107;
static PyObject *const_list_584ad8fcc3e032578d34b9fd0b50ef42_list;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_e2310f03933c2553e9c38b370efa97ef;
static PyObject *const_list_52927430588523a114b63c024530019d_list;
extern PyObject *const_str_plain_player_url;
extern PyObject *const_str_plain_merge_dicts;
extern PyObject *const_str_plain_CH;
extern PyObject *const_str_plain__search_regex;
static PyObject *const_tuple_str_plain_status_code_tuple;
extern PyObject *const_str_plain_headline;
static PyObject *const_str_digest_2362ae2fdbabce5edecf7c07b364d2b0;
extern PyObject *const_str_plain_f4m_id;
extern PyObject *const_str_plain_dash;
extern PyObject *const_str_digest_5d7782bf1496982931cf17f365755f08;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_mpd_id;
static PyObject *const_str_plain__ACCESS_ID;
extern PyObject *const_str_plain__html_search_meta;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_f6c44edadf767f9d7977cb69a2546f42;
static PyObject *const_tuple_str_plain_server_token_tuple;
extern PyObject *const_str_digest_6d4a7e990461ff5ffdadd21349125549;
extern PyObject *const_str_plain__extract_mpd_formats;
extern PyObject *const_str_plain__og_search_description;
extern PyObject *const_str_plain__GEO_BYPASS;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_f4m;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_plain__IV;
static PyObject *const_str_plain__UPLOAD_DATE_REGEXES;
static PyObject *const_str_plain__ENCRYPTION_KEY;
static PyObject *const_tuple_bcd3663f36c14352830825cf17787b89_tuple;
extern PyObject *const_tuple_str_plain_source_tuple;
extern PyObject *const_tuple_str_digest_5d7782bf1496982931cf17f365755f08_tuple;
extern PyObject *const_tuple_str_plain_compat_str_tuple;
extern PyObject *const_str_plain_unified_strdate;
extern PyObject *const_str_plain__extract_f4m_formats;
extern PyObject *const_str_plain__search_json_ld;
static PyObject *const_str_digest_8b52d5900c3a812e90f0f45914134232;
static PyObject *const_str_plain_prosieben;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_compat;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_teaser;
static PyObject *const_str_digest_335693d30f7660f71434e9c427e8cedc;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
extern PyObject *const_str_plain_group;
static PyObject *const_str_digest_7c56e42c594c735c3a7a99521b5846ac;
extern PyObject *const_str_plain__match_id;
static PyObject *const_str_digest_01a21f4d4eb77f2fec554687f871a1c6;
extern PyObject *const_str_plain_sources;
static PyObject *const_tuple_str_plain_tvShowTitle_tuple;
static PyObject *const_str_plain_is_protected;
extern PyObject *const_str_plain_id;
static PyObject *const_tuple_int_pos_403_tuple;
static PyObject *const_str_digest_4e8dfd324ca0797dec76b7bcdd707c42;
extern PyObject *const_tuple_str_plain_title_tuple;
static PyObject *const_str_digest_0587a8f9e2dc30faa3f881d3d0210200;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain_flv;
static PyObject *const_str_digest_9cbe2ba06a14b776a7b275dab79a2815;
static PyObject *const_str_digest_75f156a18a08f2e53658a2bd9c62c0fc;
static PyObject *const_str_digest_6150ed5a2a12ad808b113b84bf00eca5;
extern PyObject *const_str_plain_tbr;
extern PyObject *const_dict_66e618b11765c2c81e7386f0ee91d3ba;
extern PyObject *const_tuple_str_plain_InfoExtractor_tuple;
static PyObject *const_tuple_f87814e7cee8d67cfe43c90586c6928c_tuple;
extern PyObject *const_str_plain_item;
extern PyObject *const_str_plain_format_id;
extern PyObject *const_str_plain_ProSiebenSat1BaseIE;
extern PyObject *const_str_plain_mp4;
extern PyObject *const_tuple_str_plain_description_tuple;
extern PyObject *const_str_plain_playlist_id;
extern PyObject *const_str_plain_IE_NAME;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_expected_status;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_thumbnail;
extern PyObject *const_str_plain_uploader;
static PyObject *const_str_digest_98678ba80ce3c7af24eab7b1f7dd34fe;
extern PyObject *const_tuple_str_plain_urls_tuple;
extern PyObject *const_str_plain__SALT;
static PyObject *const_str_digest_37200c989fcfd08ba658bccd6d6eb374;
extern PyObject *const_str_plain__CLIENT_NAME;
static PyObject *const_str_digest_94b305e7be334928666b15f5f3061367;
static PyObject *const_str_plain_source_ids;
extern PyObject *const_int_pos_1000;
extern PyObject *const_str_plain_server_id;
extern PyObject *const_dict_f5ca6a18a8136d81193ff1ee2f9d02a4;
static PyObject *const_list_ec3cdda834f5c939ef6e61338827dd0a_list;
static PyObject *const_str_digest_af1f8c7bac4f60b00eb008df65b1d964;
extern PyObject *const_str_plain__html_search_regex;
extern PyObject *const_tuple_str_digest_bd4790b842a7b9dc1ef23664b00b2df8_tuple;
static PyObject *const_str_digest_14c1bb41bd760705a16d2c78436ab8ae;
static PyObject *const_str_digest_71ba319d0b8bf042fcdc116512c6c895;
extern PyObject *const_str_plain_app;
static PyObject *const_str_digest_9ded76d687f448ec29c8f7c88e8cc557;
extern PyObject *const_str_plain_hds;
extern PyObject *const_tuple_str_plain_mimetype_tuple;
extern PyObject *const_str_plain_InfoExtractor;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_digest_c89ca863c4726dea88a930a02edba899;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_source;
extern PyObject *const_str_plain_page_type;
static PyObject *const_str_plain_Eeyeey9oquahthainoofashoyoikosag;
extern PyObject *const_str_plain__og_search_title;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_plain_prosiebensat1;
static PyObject *const_str_digest_34e780b476eea103a1911e2585e98015;
extern PyObject *const_str_digest_bd4790b842a7b9dc1ef23664b00b2df8;
static PyObject *const_str_plain_fix_bitrate;
extern PyObject *const_dict_6dc2f89fb2b035a2c0a0ed28a753f1c8;
extern PyObject *const_str_plain_urls;
static PyObject *const_str_digest_dd7d99ef5e9f6be344c58af9db978b78;
static PyObject *const_tuple_1d5548a7c2a64d03eb3e4a5ed9a133de_tuple;
extern PyObject *const_str_plain_get;
static PyObject *const_str_digest_d8497301652d636b2765822dd3825472;
static PyObject *const_str_digest_4f5cecf1c676ee43dc031eff507f2928;
static PyObject *const_tuple_str_digest_c3034eea6720778d459a5797f735fd87_tuple;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_rtmp;
extern PyObject *const_str_plain_DE;
static PyObject *const_str_plain__SUPPORTED_PROTOCOLS;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain__sort_formats;
static PyObject *const_str_digest_ad21d814422d4a330e7cba2a9e121718;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_protocol;
extern PyObject *const_str_plain_join;
static PyObject *const_dict_223f93ecf00bf67ac145a63c733ba47c;
static PyObject *const_str_digest_917e62b1990afff5d738e8d5f301e9fd;
extern PyObject *const_str_plain_description;
extern PyObject *const_str_plain__extract_m3u8_formats;
extern PyObject *const_str_plain_bitrate;
extern PyObject *const_str_plain_int_or_none;
extern PyObject *const_str_plain_IE_DESC;
extern PyObject *const_str_plain_ext;
extern PyObject *const_tuple_str_plain_bitrate_tuple;
extern PyObject *const_int_pos_403;
static PyObject *const_dict_da49fb6ecc58e3f25f9caf4bceacd05f;
extern PyObject *const_str_plain_hls;
extern PyObject *const_str_plain_mimetype;
extern PyObject *const_str_plain_query;
static PyObject *const_str_digest_11d78c545173844dde787df3a25bff38;
static PyObject *const_str_plain__PLAYLIST_CLIP_REGEXES;
extern PyObject *const_str_plain_geo_verification_headers;
extern PyObject *const_tuple_str_plain_poster_tuple;
extern PyObject *const_str_plain_title;
extern PyObject *const_str_plain_status_code;
static PyObject *const_str_digest_8712af1a7881c95c91d0cd8f73468623;
extern PyObject *const_str_digest_39462f6896118f7f5e54116468251318;
static PyObject *const_str_plain__PAGE_TYPE_REGEXES;
static PyObject *const_str_digest_6891bdcee387159920e92e856691620c;
extern PyObject *const_str_plain_float_or_none;
extern PyObject *const_str_plain__extract_playlist;
static PyObject *const_str_digest_7475f5bb3623974388fe4e26fdce3c34;
static PyObject *const_str_plain_access_id;
static PyObject *const_str_digest_8ecd5635ae60cbca32066968bd278d0d;
static PyObject *const_str_plain_client_location;
static PyObject *const_str_digest_ec12e085b90fb684e8c835e680e45683;
extern PyObject *const_str_plain_search;
static PyObject *const_str_digest_c22aa425ba1191650876bc16cabfe7e8;
extern PyObject *const_tuple_str_plain_sha1_tuple;
static PyObject *const_list_b3dc48e11efd815b5b774146fe684279_list;
extern PyObject *const_str_angle_listcomp;
static PyObject *const_str_digest_8710f4e90c4ec4873ef39011d90fa567;
static PyObject *const_str_digest_7153e1265da936730ccdb2c9f1d498f7;
extern PyObject *const_str_plain__download_json;
static PyObject *const_str_plain_upc;
extern PyObject *const_tuple_str_plain_duration_tuple;
extern PyObject *const_dict_5a4b43d9442068c8ed68fb42270f3fd3;
extern PyObject *const_str_digest_24777bbf4e8d7a9e91f7405fa6098ef8;
static PyObject *const_str_plain__extract_clip;
static PyObject *const_str_digest_a7eca0f30f6c0fd74a2c58b644d8e707;
static PyObject *const_str_digest_ef930f112242de2da543d9104286bf8d;
extern PyObject *const_str_plain_upload_date;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_plain_sha1;
extern PyObject *const_str_plain_values;
extern PyObject *const_dict_8fc357692d32e37b18c1bc5cb8987ab4;
extern PyObject *const_str_plain_series;
static PyObject *const_tuple_7bd5159f9bfc6d53a018afe2ac267b1f_tuple;
extern PyObject *const_str_plain_entries;
static PyObject *const_str_plain_server_token;
extern PyObject *const_str_plain_countries;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_clear;
extern PyObject *const_tuple_str_plain_protocol_tuple;
extern PyObject *const_str_plain_json_ld;
extern PyObject *const_str_plain_AT;
static PyObject *const_list_str_plain_AT_str_plain_CH_str_plain_DE_list;
extern PyObject *const_int_pos_2;
static PyObject *const_list_str_digest_8b52d5900c3a812e90f0f45914134232_list;
static PyObject *const_str_plain__PLAYLIST_ID_REGEXES;
static PyObject *const_str_digest_1e2126614d3c58cf67b8df20dc4311e9;
extern PyObject *const_str_plain_m3u8_native;
extern PyObject *const_str_plain_ProSiebenSat1IE;
static PyObject *const_list_d4f7390fc86f7b75813d526e7a5fd169_list;
extern PyObject *const_str_plain_clip_id;
extern PyObject *const_str_digest_13b423245a5f0346242d6b0a7e68c44f;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_rtmpe = UNSTREAM_STRING_ASCII(&constant_bin[ 880927 ], 5, 1);
    const_str_plain__V4_BASE_URL = UNSTREAM_STRING_ASCII(&constant_bin[ 1749248 ], 12, 1);
    const_tuple_str_plain_rtmp_str_plain_rtmpe_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_rtmp_str_plain_rtmpe_tuple, 0, const_str_plain_rtmp); Py_INCREF(const_str_plain_rtmp);
    PyTuple_SET_ITEM(const_tuple_str_plain_rtmp_str_plain_rtmpe_tuple, 1, const_str_plain_rtmpe); Py_INCREF(const_str_plain_rtmpe);
    const_str_digest_5af98eb3c10d1d56e88dcea29b84c50f = UNSTREAM_STRING_ASCII(&constant_bin[ 1749260 ], 112, 0);
    const_str_digest_fb44b9cbf0fd6414ae3eacd0bb8b1d45 = UNSTREAM_STRING_ASCII(&constant_bin[ 1749372 ], 23, 0);
    const_str_digest_54f03883be440df472ad648e929601ea = UNSTREAM_STRING_ASCII(&constant_bin[ 1749395 ], 55, 0);
    const_str_digest_8a2897f4d46713dd5e6086c9380a1c7f = UNSTREAM_STRING_ASCII(&constant_bin[ 1749450 ], 21, 0);
    const_str_plain_tvShowTitle = UNSTREAM_STRING_ASCII(&constant_bin[ 1749471 ], 11, 1);
    const_str_digest_7e45ec587f6b7ebd6bf6a7cd48d01827 = UNSTREAM_STRING_ASCII(&constant_bin[ 1749482 ], 64, 0);
    const_tuple_str_plain_is_protected_tuple = PyTuple_New(1);
    const_str_plain_is_protected = UNSTREAM_STRING_ASCII(&constant_bin[ 1749546 ], 12, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_is_protected_tuple, 0, const_str_plain_is_protected); Py_INCREF(const_str_plain_is_protected);
    const_str_digest_881491fd5e70710485e20a65c86b238c = UNSTREAM_STRING_ASCII(&constant_bin[ 1749558 ], 26, 0);
    const_str_digest_2d138515cc1316900655358617c6c6f7 = UNSTREAM_STRING_ASCII(&constant_bin[ 1749584 ], 24, 0);
    const_str_digest_0c8ed584f45ca1cf53ac191f1d8329e3 = UNSTREAM_STRING_ASCII(&constant_bin[ 1749608 ], 88, 0);
    const_str_digest_870532ceecd5e76c2d84587ba7f23c57 = UNSTREAM_STRING_ASCII(&constant_bin[ 1749696 ], 36, 0);
    const_str_plain_Aeluchoc6aevechuipiexeeboowedaok = UNSTREAM_STRING_ASCII(&constant_bin[ 1749732 ], 32, 1);
    const_tuple_str_plain_upc_tuple = PyTuple_New(1);
    const_str_plain_upc = UNSTREAM_STRING_ASCII(&constant_bin[ 770802 ], 3, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_upc_tuple, 0, const_str_plain_upc); Py_INCREF(const_str_plain_upc);
    const_str_plain__CLIPID_REGEXES = UNSTREAM_STRING_ASCII(&constant_bin[ 1749764 ], 15, 1);
    const_str_plain_f4mgenerator = UNSTREAM_STRING_ASCII(&constant_bin[ 1749779 ], 12, 1);
    const_str_digest_0dd27c0738d99365178b375ebf3f84c6 = UNSTREAM_STRING_ASCII(&constant_bin[ 1749791 ], 92, 0);
    const_str_digest_b34a7348b50f7825cf83269d70dd5ba6 = UNSTREAM_STRING_ASCII(&constant_bin[ 1749883 ], 26, 0);
    const_tuple_dfae89dc6c5dc283f965c829ba8623d2_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_dfae89dc6c5dc283f965c829ba8623d2_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_dfae89dc6c5dc283f965c829ba8623d2_tuple, 1, const_str_plain_url); Py_INCREF(const_str_plain_url);
    PyTuple_SET_ITEM(const_tuple_dfae89dc6c5dc283f965c829ba8623d2_tuple, 2, const_str_plain_video_id); Py_INCREF(const_str_plain_video_id);
    PyTuple_SET_ITEM(const_tuple_dfae89dc6c5dc283f965c829ba8623d2_tuple, 3, const_str_plain_webpage); Py_INCREF(const_str_plain_webpage);
    PyTuple_SET_ITEM(const_tuple_dfae89dc6c5dc283f965c829ba8623d2_tuple, 4, const_str_plain_page_type); Py_INCREF(const_str_plain_page_type);
    const_str_plain_broadcastPublisher = UNSTREAM_STRING_ASCII(&constant_bin[ 1749909 ], 18, 1);
    const_str_digest_364ac119eb692142977a501c336e93fe = UNSTREAM_STRING_ASCII(&constant_bin[ 1749927 ], 38, 0);
    const_str_plain__DESCRIPTION_REGEXES = UNSTREAM_STRING_ASCII(&constant_bin[ 1749965 ], 20, 1);
    const_tuple_str_plain_broadcastPublisher_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_broadcastPublisher_tuple, 0, const_str_plain_broadcastPublisher); Py_INCREF(const_str_plain_broadcastPublisher);
    const_str_digest_0050cea561d42b6215ff7183e6359e11 = UNSTREAM_STRING_ASCII(&constant_bin[ 1749985 ], 33, 0);
    const_list_d79df2e347e18e39f8ac33cc41f0af20_list = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 1750018 ], 4260);
    const_str_digest_9286097557b9fa4516501d50d1e54276 = UNSTREAM_STRING_ASCII(&constant_bin[ 1754278 ], 24, 0);
    const_str_digest_7259dcef6e027c44316123fbe57f2858 = UNSTREAM_STRING_ASCII(&constant_bin[ 1754302 ], 48, 0);
    const_str_digest_5f48a16386a64af8c44a87d56c5c50bf = UNSTREAM_STRING_ASCII(&constant_bin[ 1754350 ], 34, 0);
    const_str_digest_76a2f8226f291d131c6eb936f31209c2 = UNSTREAM_STRING_ASCII(&constant_bin[ 1754384 ], 61, 0);
    const_str_digest_c3034eea6720778d459a5797f735fd87 = UNSTREAM_STRING_ASCII(&constant_bin[ 1304059 ], 25, 0);
    const_str_digest_6641c74c9d0e94d405d6b0c5f960c346 = UNSTREAM_STRING_ASCII(&constant_bin[ 1754445 ], 11, 0);
    const_str_plain__TITLE_REGEXES = UNSTREAM_STRING_ASCII(&constant_bin[ 1754456 ], 14, 1);
    const_list_b86d176542f53e13deab2343c1f0780d_list = PyList_New(8);
    const_str_digest_9ded76d687f448ec29c8f7c88e8cc557 = UNSTREAM_STRING_ASCII(&constant_bin[ 1754470 ], 50, 0);
    PyList_SET_ITEM(const_list_b86d176542f53e13deab2343c1f0780d_list, 0, const_str_digest_9ded76d687f448ec29c8f7c88e8cc557); Py_INCREF(const_str_digest_9ded76d687f448ec29c8f7c88e8cc557);
    const_str_digest_ad21d814422d4a330e7cba2a9e121718 = UNSTREAM_STRING_ASCII(&constant_bin[ 1754520 ], 42, 0);
    PyList_SET_ITEM(const_list_b86d176542f53e13deab2343c1f0780d_list, 1, const_str_digest_ad21d814422d4a330e7cba2a9e121718); Py_INCREF(const_str_digest_ad21d814422d4a330e7cba2a9e121718);
    const_str_digest_01a21f4d4eb77f2fec554687f871a1c6 = UNSTREAM_STRING_ASCII(&constant_bin[ 1754562 ], 37, 0);
    PyList_SET_ITEM(const_list_b86d176542f53e13deab2343c1f0780d_list, 2, const_str_digest_01a21f4d4eb77f2fec554687f871a1c6); Py_INCREF(const_str_digest_01a21f4d4eb77f2fec554687f871a1c6);
    const_str_digest_f6c44edadf767f9d7977cb69a2546f42 = UNSTREAM_STRING_ASCII(&constant_bin[ 1754599 ], 34, 0);
    PyList_SET_ITEM(const_list_b86d176542f53e13deab2343c1f0780d_list, 3, const_str_digest_f6c44edadf767f9d7977cb69a2546f42); Py_INCREF(const_str_digest_f6c44edadf767f9d7977cb69a2546f42);
    PyList_SET_ITEM(const_list_b86d176542f53e13deab2343c1f0780d_list, 4, const_str_digest_76a2f8226f291d131c6eb936f31209c2); Py_INCREF(const_str_digest_76a2f8226f291d131c6eb936f31209c2);
    const_str_digest_1e2126614d3c58cf67b8df20dc4311e9 = UNSTREAM_STRING_ASCII(&constant_bin[ 1754633 ], 53, 0);
    PyList_SET_ITEM(const_list_b86d176542f53e13deab2343c1f0780d_list, 5, const_str_digest_1e2126614d3c58cf67b8df20dc4311e9); Py_INCREF(const_str_digest_1e2126614d3c58cf67b8df20dc4311e9);
    const_str_digest_335693d30f7660f71434e9c427e8cedc = UNSTREAM_STRING_ASCII(&constant_bin[ 1754686 ], 42, 0);
    PyList_SET_ITEM(const_list_b86d176542f53e13deab2343c1f0780d_list, 6, const_str_digest_335693d30f7660f71434e9c427e8cedc); Py_INCREF(const_str_digest_335693d30f7660f71434e9c427e8cedc);
    const_str_digest_c22aa425ba1191650876bc16cabfe7e8 = UNSTREAM_STRING_ASCII(&constant_bin[ 1754728 ], 42, 0);
    PyList_SET_ITEM(const_list_b86d176542f53e13deab2343c1f0780d_list, 7, const_str_digest_c22aa425ba1191650876bc16cabfe7e8); Py_INCREF(const_str_digest_c22aa425ba1191650876bc16cabfe7e8);
    const_str_plain_rfind = UNSTREAM_STRING_ASCII(&constant_bin[ 1754770 ], 5, 1);
    const_str_digest_05d5c2391d67c3b52773258d8aa5ff1b = UNSTREAM_STRING_ASCII(&constant_bin[ 1754775 ], 17, 0);
    const_str_digest_4983d4f059d65e027de0f5c4a7c2d2ab = UNSTREAM_STRING_ASCII(&constant_bin[ 1754792 ], 43, 0);
    const_str_digest_4dcef55adc46409324dd0990bc845e7e = UNSTREAM_STRING_ASCII(&constant_bin[ 1754835 ], 48, 0);
    const_str_plain_client_name = UNSTREAM_STRING_ASCII(&constant_bin[ 1754883 ], 11, 1);
    const_str_digest_98a9a21597c8f0cec371a3b10276ad0a = UNSTREAM_STRING_ASCII(&constant_bin[ 1754894 ], 21, 0);
    const_str_digest_99679730b984150f6c23a5bca3a8d107 = UNSTREAM_STRING_ASCII(&constant_bin[ 1754915 ], 24, 0);
    const_list_584ad8fcc3e032578d34b9fd0b50ef42_list = PyList_New(2);
    const_str_digest_ec12e085b90fb684e8c835e680e45683 = UNSTREAM_STRING_ASCII(&constant_bin[ 1754939 ], 41, 0);
    PyList_SET_ITEM(const_list_584ad8fcc3e032578d34b9fd0b50ef42_list, 0, const_str_digest_ec12e085b90fb684e8c835e680e45683); Py_INCREF(const_str_digest_ec12e085b90fb684e8c835e680e45683);
    PyList_SET_ITEM(const_list_584ad8fcc3e032578d34b9fd0b50ef42_list, 1, const_str_digest_b34a7348b50f7825cf83269d70dd5ba6); Py_INCREF(const_str_digest_b34a7348b50f7825cf83269d70dd5ba6);
    const_str_digest_e2310f03933c2553e9c38b370efa97ef = UNSTREAM_STRING_ASCII(&constant_bin[ 1754980 ], 60, 0);
    const_list_52927430588523a114b63c024530019d_list = PyList_New(4);
    const_str_digest_34e780b476eea103a1911e2585e98015 = UNSTREAM_STRING_ASCII(&constant_bin[ 1755040 ], 73, 0);
    PyList_SET_ITEM(const_list_52927430588523a114b63c024530019d_list, 0, const_str_digest_34e780b476eea103a1911e2585e98015); Py_INCREF(const_str_digest_34e780b476eea103a1911e2585e98015);
    PyList_SET_ITEM(const_list_52927430588523a114b63c024530019d_list, 1, const_str_digest_7259dcef6e027c44316123fbe57f2858); Py_INCREF(const_str_digest_7259dcef6e027c44316123fbe57f2858);
    PyList_SET_ITEM(const_list_52927430588523a114b63c024530019d_list, 2, const_str_digest_0dd27c0738d99365178b375ebf3f84c6); Py_INCREF(const_str_digest_0dd27c0738d99365178b375ebf3f84c6);
    const_str_digest_75f156a18a08f2e53658a2bd9c62c0fc = UNSTREAM_STRING_ASCII(&constant_bin[ 1755113 ], 45, 0);
    PyList_SET_ITEM(const_list_52927430588523a114b63c024530019d_list, 3, const_str_digest_75f156a18a08f2e53658a2bd9c62c0fc); Py_INCREF(const_str_digest_75f156a18a08f2e53658a2bd9c62c0fc);
    const_tuple_str_plain_status_code_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_status_code_tuple, 0, const_str_plain_status_code); Py_INCREF(const_str_plain_status_code);
    const_str_digest_2362ae2fdbabce5edecf7c07b364d2b0 = UNSTREAM_STRING_ASCII(&constant_bin[ 1755158 ], 29, 0);
    const_str_plain__ACCESS_ID = UNSTREAM_STRING_ASCII(&constant_bin[ 1755187 ], 10, 1);
    const_tuple_str_plain_server_token_tuple = PyTuple_New(1);
    const_str_plain_server_token = UNSTREAM_STRING_ASCII(&constant_bin[ 1755197 ], 12, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_server_token_tuple, 0, const_str_plain_server_token); Py_INCREF(const_str_plain_server_token);
    const_str_plain__IV = UNSTREAM_STRING_ASCII(&constant_bin[ 1755209 ], 3, 1);
    const_str_plain__UPLOAD_DATE_REGEXES = UNSTREAM_STRING_ASCII(&constant_bin[ 1755212 ], 20, 1);
    const_str_plain__ENCRYPTION_KEY = UNSTREAM_STRING_ASCII(&constant_bin[ 1336799 ], 15, 1);
    const_tuple_bcd3663f36c14352830825cf17787b89_tuple = PyTuple_New(9);
    PyTuple_SET_ITEM(const_tuple_bcd3663f36c14352830825cf17787b89_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_bcd3663f36c14352830825cf17787b89_tuple, 1, const_str_plain_url); Py_INCREF(const_str_plain_url);
    PyTuple_SET_ITEM(const_tuple_bcd3663f36c14352830825cf17787b89_tuple, 2, const_str_plain_webpage); Py_INCREF(const_str_plain_webpage);
    PyTuple_SET_ITEM(const_tuple_bcd3663f36c14352830825cf17787b89_tuple, 3, const_str_plain_playlist_id); Py_INCREF(const_str_plain_playlist_id);
    PyTuple_SET_ITEM(const_tuple_bcd3663f36c14352830825cf17787b89_tuple, 4, const_str_plain_playlist); Py_INCREF(const_str_plain_playlist);
    PyTuple_SET_ITEM(const_tuple_bcd3663f36c14352830825cf17787b89_tuple, 5, const_str_plain_entries); Py_INCREF(const_str_plain_entries);
    PyTuple_SET_ITEM(const_tuple_bcd3663f36c14352830825cf17787b89_tuple, 6, const_str_plain_item); Py_INCREF(const_str_plain_item);
    PyTuple_SET_ITEM(const_tuple_bcd3663f36c14352830825cf17787b89_tuple, 7, const_str_plain_clip_id); Py_INCREF(const_str_plain_clip_id);
    PyTuple_SET_ITEM(const_tuple_bcd3663f36c14352830825cf17787b89_tuple, 8, const_str_plain_info); Py_INCREF(const_str_plain_info);
    const_str_digest_8b52d5900c3a812e90f0f45914134232 = UNSTREAM_STRING_ASCII(&constant_bin[ 1755232 ], 33, 0);
    const_str_plain_prosieben = UNSTREAM_STRING_ASCII(&constant_bin[ 1749356 ], 9, 1);
    const_str_digest_7c56e42c594c735c3a7a99521b5846ac = UNSTREAM_STRING_ASCII(&constant_bin[ 1755265 ], 75, 0);
    const_tuple_str_plain_tvShowTitle_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_tvShowTitle_tuple, 0, const_str_plain_tvShowTitle); Py_INCREF(const_str_plain_tvShowTitle);
    const_tuple_int_pos_403_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_int_pos_403_tuple, 0, const_int_pos_403); Py_INCREF(const_int_pos_403);
    const_str_digest_4e8dfd324ca0797dec76b7bcdd707c42 = UNSTREAM_STRING_ASCII(&constant_bin[ 1755340 ], 38, 0);
    const_str_digest_0587a8f9e2dc30faa3f881d3d0210200 = UNSTREAM_STRING_ASCII(&constant_bin[ 1755378 ], 15, 0);
    const_str_digest_9cbe2ba06a14b776a7b275dab79a2815 = UNSTREAM_STRING_ASCII(&constant_bin[ 1755393 ], 22, 0);
    const_str_digest_6150ed5a2a12ad808b113b84bf00eca5 = UNSTREAM_STRING_ASCII(&constant_bin[ 1755415 ], 15, 0);
    const_tuple_f87814e7cee8d67cfe43c90586c6928c_tuple = PyTuple_New(6);
    PyTuple_SET_ITEM(const_tuple_f87814e7cee8d67cfe43c90586c6928c_tuple, 0, const_str_plain_ExtractorError); Py_INCREF(const_str_plain_ExtractorError);
    PyTuple_SET_ITEM(const_tuple_f87814e7cee8d67cfe43c90586c6928c_tuple, 1, const_str_plain_determine_ext); Py_INCREF(const_str_plain_determine_ext);
    PyTuple_SET_ITEM(const_tuple_f87814e7cee8d67cfe43c90586c6928c_tuple, 2, const_str_plain_float_or_none); Py_INCREF(const_str_plain_float_or_none);
    PyTuple_SET_ITEM(const_tuple_f87814e7cee8d67cfe43c90586c6928c_tuple, 3, const_str_plain_int_or_none); Py_INCREF(const_str_plain_int_or_none);
    PyTuple_SET_ITEM(const_tuple_f87814e7cee8d67cfe43c90586c6928c_tuple, 4, const_str_plain_merge_dicts); Py_INCREF(const_str_plain_merge_dicts);
    PyTuple_SET_ITEM(const_tuple_f87814e7cee8d67cfe43c90586c6928c_tuple, 5, const_str_plain_unified_strdate); Py_INCREF(const_str_plain_unified_strdate);
    const_str_digest_98678ba80ce3c7af24eab7b1f7dd34fe = UNSTREAM_STRING_ASCII(&constant_bin[ 1755430 ], 16, 0);
    const_str_digest_37200c989fcfd08ba658bccd6d6eb374 = UNSTREAM_STRING_ASCII(&constant_bin[ 1755446 ], 56, 0);
    const_str_digest_94b305e7be334928666b15f5f3061367 = UNSTREAM_STRING_ASCII(&constant_bin[ 1755502 ], 29, 0);
    const_str_plain_source_ids = UNSTREAM_STRING_ASCII(&constant_bin[ 1755531 ], 10, 1);
    const_list_ec3cdda834f5c939ef6e61338827dd0a_list = PyList_New(2);
    const_str_digest_7153e1265da936730ccdb2c9f1d498f7 = UNSTREAM_STRING_ASCII(&constant_bin[ 1755541 ], 18, 0);
    PyList_SET_ITEM(const_list_ec3cdda834f5c939ef6e61338827dd0a_list, 0, const_str_digest_7153e1265da936730ccdb2c9f1d498f7); Py_INCREF(const_str_digest_7153e1265da936730ccdb2c9f1d498f7);
    PyList_SET_ITEM(const_list_ec3cdda834f5c939ef6e61338827dd0a_list, 1, const_str_digest_2d138515cc1316900655358617c6c6f7); Py_INCREF(const_str_digest_2d138515cc1316900655358617c6c6f7);
    const_str_digest_af1f8c7bac4f60b00eb008df65b1d964 = UNSTREAM_STRING_ASCII(&constant_bin[ 1755559 ], 72, 0);
    const_str_digest_14c1bb41bd760705a16d2c78436ab8ae = UNSTREAM_STRING_ASCII(&constant_bin[ 1755631 ], 29, 0);
    const_str_digest_71ba319d0b8bf042fcdc116512c6c895 = UNSTREAM_STRING_ASCII(&constant_bin[ 1755660 ], 23, 0);
    const_str_digest_c89ca863c4726dea88a930a02edba899 = UNSTREAM_STRING_ASCII(&constant_bin[ 1755683 ], 23, 0);
    const_str_plain_Eeyeey9oquahthainoofashoyoikosag = UNSTREAM_STRING_ASCII(&constant_bin[ 1755706 ], 32, 1);
    const_str_plain_fix_bitrate = UNSTREAM_STRING_ASCII(&constant_bin[ 1755029 ], 11, 1);
    const_str_digest_dd7d99ef5e9f6be344c58af9db978b78 = UNSTREAM_STRING_ASCII(&constant_bin[ 1755738 ], 494, 0);
    const_tuple_1d5548a7c2a64d03eb3e4a5ed9a133de_tuple = PyTuple_New(10);
    PyTuple_SET_ITEM(const_tuple_1d5548a7c2a64d03eb3e4a5ed9a133de_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_1d5548a7c2a64d03eb3e4a5ed9a133de_tuple, 1, const_str_plain_url); Py_INCREF(const_str_plain_url);
    PyTuple_SET_ITEM(const_tuple_1d5548a7c2a64d03eb3e4a5ed9a133de_tuple, 2, const_str_plain_webpage); Py_INCREF(const_str_plain_webpage);
    PyTuple_SET_ITEM(const_tuple_1d5548a7c2a64d03eb3e4a5ed9a133de_tuple, 3, const_str_plain_clip_id); Py_INCREF(const_str_plain_clip_id);
    PyTuple_SET_ITEM(const_tuple_1d5548a7c2a64d03eb3e4a5ed9a133de_tuple, 4, const_str_plain_title); Py_INCREF(const_str_plain_title);
    PyTuple_SET_ITEM(const_tuple_1d5548a7c2a64d03eb3e4a5ed9a133de_tuple, 5, const_str_plain_info); Py_INCREF(const_str_plain_info);
    PyTuple_SET_ITEM(const_tuple_1d5548a7c2a64d03eb3e4a5ed9a133de_tuple, 6, const_str_plain_description); Py_INCREF(const_str_plain_description);
    PyTuple_SET_ITEM(const_tuple_1d5548a7c2a64d03eb3e4a5ed9a133de_tuple, 7, const_str_plain_thumbnail); Py_INCREF(const_str_plain_thumbnail);
    PyTuple_SET_ITEM(const_tuple_1d5548a7c2a64d03eb3e4a5ed9a133de_tuple, 8, const_str_plain_upload_date); Py_INCREF(const_str_plain_upload_date);
    PyTuple_SET_ITEM(const_tuple_1d5548a7c2a64d03eb3e4a5ed9a133de_tuple, 9, const_str_plain_json_ld); Py_INCREF(const_str_plain_json_ld);
    const_str_digest_d8497301652d636b2765822dd3825472 = UNSTREAM_STRING_ASCII(&constant_bin[ 1756232 ], 23, 0);
    const_str_digest_4f5cecf1c676ee43dc031eff507f2928 = UNSTREAM_STRING_ASCII(&constant_bin[ 1756255 ], 22, 0);
    const_tuple_str_digest_c3034eea6720778d459a5797f735fd87_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_c3034eea6720778d459a5797f735fd87_tuple, 0, const_str_digest_c3034eea6720778d459a5797f735fd87); Py_INCREF(const_str_digest_c3034eea6720778d459a5797f735fd87);
    const_str_plain__SUPPORTED_PROTOCOLS = UNSTREAM_STRING_ASCII(&constant_bin[ 1756277 ], 20, 1);
    const_dict_223f93ecf00bf67ac145a63c733ba47c = _PyDict_NewPresized( 1 );
    const_list_str_plain_AT_str_plain_CH_str_plain_DE_list = PyList_New(3);
    PyList_SET_ITEM(const_list_str_plain_AT_str_plain_CH_str_plain_DE_list, 0, const_str_plain_AT); Py_INCREF(const_str_plain_AT);
    PyList_SET_ITEM(const_list_str_plain_AT_str_plain_CH_str_plain_DE_list, 1, const_str_plain_CH); Py_INCREF(const_str_plain_CH);
    PyList_SET_ITEM(const_list_str_plain_AT_str_plain_CH_str_plain_DE_list, 2, const_str_plain_DE); Py_INCREF(const_str_plain_DE);
    PyDict_SetItem(const_dict_223f93ecf00bf67ac145a63c733ba47c, const_str_plain_countries, const_list_str_plain_AT_str_plain_CH_str_plain_DE_list);
    assert(PyDict_Size(const_dict_223f93ecf00bf67ac145a63c733ba47c) == 1);
    const_str_digest_917e62b1990afff5d738e8d5f301e9fd = UNSTREAM_STRING_ASCII(&constant_bin[ 1754980 ], 39, 0);
    const_dict_da49fb6ecc58e3f25f9caf4bceacd05f = _PyDict_NewPresized( 1 );
    PyDict_SetItem(const_dict_da49fb6ecc58e3f25f9caf4bceacd05f, const_str_plain_default, const_str_plain_clip);
    assert(PyDict_Size(const_dict_da49fb6ecc58e3f25f9caf4bceacd05f) == 1);
    const_str_digest_11d78c545173844dde787df3a25bff38 = UNSTREAM_STRING_ASCII(&constant_bin[ 1756297 ], 42, 0);
    const_str_plain__PLAYLIST_CLIP_REGEXES = UNSTREAM_STRING_ASCII(&constant_bin[ 1756339 ], 22, 1);
    const_str_digest_8712af1a7881c95c91d0cd8f73468623 = UNSTREAM_STRING_ASCII(&constant_bin[ 1756361 ], 18, 0);
    const_str_plain__PAGE_TYPE_REGEXES = UNSTREAM_STRING_ASCII(&constant_bin[ 1756379 ], 18, 1);
    const_str_digest_6891bdcee387159920e92e856691620c = UNSTREAM_STRING_ASCII(&constant_bin[ 1756397 ], 33, 0);
    const_str_digest_7475f5bb3623974388fe4e26fdce3c34 = UNSTREAM_STRING_ASCII(&constant_bin[ 1756430 ], 38, 0);
    const_str_plain_access_id = UNSTREAM_STRING_ASCII(&constant_bin[ 1756468 ], 9, 1);
    const_str_digest_8ecd5635ae60cbca32066968bd278d0d = UNSTREAM_STRING_ASCII(&constant_bin[ 1756477 ], 50, 0);
    const_str_plain_client_location = UNSTREAM_STRING_ASCII(&constant_bin[ 1756527 ], 15, 1);
    const_list_b3dc48e11efd815b5b774146fe684279_list = PyList_New(7);
    PyList_SET_ITEM(const_list_b3dc48e11efd815b5b774146fe684279_list, 0, const_str_digest_d8497301652d636b2765822dd3825472); Py_INCREF(const_str_digest_d8497301652d636b2765822dd3825472);
    PyList_SET_ITEM(const_list_b3dc48e11efd815b5b774146fe684279_list, 1, const_str_digest_0587a8f9e2dc30faa3f881d3d0210200); Py_INCREF(const_str_digest_0587a8f9e2dc30faa3f881d3d0210200);
    PyList_SET_ITEM(const_list_b3dc48e11efd815b5b774146fe684279_list, 2, const_str_digest_6150ed5a2a12ad808b113b84bf00eca5); Py_INCREF(const_str_digest_6150ed5a2a12ad808b113b84bf00eca5);
    PyList_SET_ITEM(const_list_b3dc48e11efd815b5b774146fe684279_list, 3, const_str_digest_14c1bb41bd760705a16d2c78436ab8ae); Py_INCREF(const_str_digest_14c1bb41bd760705a16d2c78436ab8ae);
    PyList_SET_ITEM(const_list_b3dc48e11efd815b5b774146fe684279_list, 4, const_str_digest_37200c989fcfd08ba658bccd6d6eb374); Py_INCREF(const_str_digest_37200c989fcfd08ba658bccd6d6eb374);
    PyList_SET_ITEM(const_list_b3dc48e11efd815b5b774146fe684279_list, 5, const_str_digest_0050cea561d42b6215ff7183e6359e11); Py_INCREF(const_str_digest_0050cea561d42b6215ff7183e6359e11);
    PyList_SET_ITEM(const_list_b3dc48e11efd815b5b774146fe684279_list, 6, const_str_digest_c89ca863c4726dea88a930a02edba899); Py_INCREF(const_str_digest_c89ca863c4726dea88a930a02edba899);
    const_str_digest_8710f4e90c4ec4873ef39011d90fa567 = UNSTREAM_STRING_ASCII(&constant_bin[ 1756542 ], 59, 0);
    const_str_plain__extract_clip = UNSTREAM_STRING_ASCII(&constant_bin[ 1755174 ], 13, 1);
    const_str_digest_a7eca0f30f6c0fd74a2c58b644d8e707 = UNSTREAM_STRING_ASCII(&constant_bin[ 1749395 ], 44, 0);
    const_str_digest_ef930f112242de2da543d9104286bf8d = UNSTREAM_STRING_ASCII(&constant_bin[ 1756601 ], 6, 0);
    const_tuple_7bd5159f9bfc6d53a018afe2ac267b1f_tuple = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 1756607 ], 280);
    const_list_str_digest_8b52d5900c3a812e90f0f45914134232_list = PyList_New(1);
    PyList_SET_ITEM(const_list_str_digest_8b52d5900c3a812e90f0f45914134232_list, 0, const_str_digest_8b52d5900c3a812e90f0f45914134232); Py_INCREF(const_str_digest_8b52d5900c3a812e90f0f45914134232);
    const_str_plain__PLAYLIST_ID_REGEXES = UNSTREAM_STRING_ASCII(&constant_bin[ 1756887 ], 20, 1);
    const_list_d4f7390fc86f7b75813d526e7a5fd169_list = PyList_New(6);
    PyList_SET_ITEM(const_list_d4f7390fc86f7b75813d526e7a5fd169_list, 0, const_str_digest_4e8dfd324ca0797dec76b7bcdd707c42); Py_INCREF(const_str_digest_4e8dfd324ca0797dec76b7bcdd707c42);
    PyList_SET_ITEM(const_list_d4f7390fc86f7b75813d526e7a5fd169_list, 1, const_str_digest_7c56e42c594c735c3a7a99521b5846ac); Py_INCREF(const_str_digest_7c56e42c594c735c3a7a99521b5846ac);
    PyList_SET_ITEM(const_list_d4f7390fc86f7b75813d526e7a5fd169_list, 2, const_str_digest_0c8ed584f45ca1cf53ac191f1d8329e3); Py_INCREF(const_str_digest_0c8ed584f45ca1cf53ac191f1d8329e3);
    PyList_SET_ITEM(const_list_d4f7390fc86f7b75813d526e7a5fd169_list, 3, const_str_digest_11d78c545173844dde787df3a25bff38); Py_INCREF(const_str_digest_11d78c545173844dde787df3a25bff38);
    PyList_SET_ITEM(const_list_d4f7390fc86f7b75813d526e7a5fd169_list, 4, const_str_digest_7e45ec587f6b7ebd6bf6a7cd48d01827); Py_INCREF(const_str_digest_7e45ec587f6b7ebd6bf6a7cd48d01827);
    PyList_SET_ITEM(const_list_d4f7390fc86f7b75813d526e7a5fd169_list, 5, const_str_digest_4dcef55adc46409324dd0990bc845e7e); Py_INCREF(const_str_digest_4dcef55adc46409324dd0990bc845e7e);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_youtube_dl$extractor$prosiebensat1(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_0ae9c1016c4bc4991327dd4245f1589d;
static PyCodeObject *codeobj_9a605f1538905c44bc0a6f767aa0ddc6;
static PyCodeObject *codeobj_56d15be450f070775cb471c0cd573161;
static PyCodeObject *codeobj_7c953c9d62cf727879612ba10d65fdd6;
static PyCodeObject *codeobj_2dd892cd029ad58520637adade8ea6db;
static PyCodeObject *codeobj_5376f22957d329c37c408b83ff1821a5;
static PyCodeObject *codeobj_8f1a222a64e7c48eb21e644afeeda133;
static PyCodeObject *codeobj_5199416edab4f75d205704471a45c402;
static PyCodeObject *codeobj_bb6716f0b0689653d937b885be7b0b09;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_5af98eb3c10d1d56e88dcea29b84c50f;
    codeobj_0ae9c1016c4bc4991327dd4245f1589d = MAKE_CODEOBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_angle_listcomp, const_tuple_str_plain_source_tuple, 1, 0, 0);
    codeobj_9a605f1538905c44bc0a6f767aa0ddc6 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_digest_4983d4f059d65e027de0f5c4a7c2d2ab, const_tuple_empty, 0, 0, 0);
    codeobj_56d15be450f070775cb471c0cd573161 = MAKE_CODEOBJECT(module_filename_obj, 19, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain_ProSiebenSat1BaseIE, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_7c953c9d62cf727879612ba10d65fdd6 = MAKE_CODEOBJECT(module_filename_obj, 170, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain_ProSiebenSat1IE, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_2dd892cd029ad58520637adade8ea6db = MAKE_CODEOBJECT(module_filename_obj, 434, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain__extract_clip, const_tuple_1d5548a7c2a64d03eb3e4a5ed9a133de_tuple, 3, 0, 0);
    codeobj_5376f22957d329c37c408b83ff1821a5 = MAKE_CODEOBJECT(module_filename_obj, 462, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain__extract_playlist, const_tuple_bcd3663f36c14352830825cf17787b89_tuple, 3, 0, 0);
    codeobj_8f1a222a64e7c48eb21e644afeeda133 = MAKE_CODEOBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain__extract_video_info, const_tuple_7bd5159f9bfc6d53a018afe2ac267b1f_tuple, 3, 0, 0);
    codeobj_5199416edab4f75d205704471a45c402 = MAKE_CODEOBJECT(module_filename_obj, 488, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain__real_extract, const_tuple_dfae89dc6c5dc283f965c829ba8623d2_tuple, 2, 0, 0);
    codeobj_bb6716f0b0689653d937b885be7b0b09 = MAKE_CODEOBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain_fix_bitrate, const_tuple_str_plain_bitrate_tuple, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$prosiebensat1$$$function_1__extract_video_info();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$prosiebensat1$$$function_1__extract_video_info$$$function_1_fix_bitrate();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$prosiebensat1$$$function_2__extract_clip();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$prosiebensat1$$$function_3__extract_playlist();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$prosiebensat1$$$function_4__real_extract();


// The module function definitions.
static PyObject *impl_youtube_dl$extractor$prosiebensat1$$$function_1__extract_video_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *par_clip_id = python_pars[2];
    PyObject *var_client_location = NULL;
    PyObject *var_video = NULL;
    PyObject *var_formats = NULL;
    PyObject *var_raw_ct = NULL;
    PyObject *var_protocols = NULL;
    PyObject *var_error = NULL;
    PyObject *var_server_token = NULL;
    PyObject *var_urls = NULL;
    PyObject *var_protocol = NULL;
    PyObject *var_variant = NULL;
    PyObject *var_source_url = NULL;
    PyObject *var_source_ids = NULL;
    PyObject *var_client_id = NULL;
    PyObject *var_sources = NULL;
    PyObject *var_server_id = NULL;
    PyObject *var_fix_bitrate = NULL;
    PyObject *var_source_id = NULL;
    PyObject *var_urls_sources = NULL;
    PyObject *var_source = NULL;
    PyObject *var_mimetype = NULL;
    PyObject *var_tbr = NULL;
    PyObject *var_mobj = NULL;
    PyObject *var_path = NULL;
    PyObject *var_mp4colon_index = NULL;
    PyObject *var_app = NULL;
    PyObject *var_play_path = NULL;
    PyObject *outline_0_var_source = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_8f1a222a64e7c48eb21e644afeeda133;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_FrameObject *frame_0ae9c1016c4bc4991327dd4245f1589d_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_0ae9c1016c4bc4991327dd4245f1589d_2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8f1a222a64e7c48eb21e644afeeda133 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_url);
        tmp_assign_source_1 = par_url;
        assert(var_client_location == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_client_location = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_8f1a222a64e7c48eb21e644afeeda133)) {
        Py_XDECREF(cache_frame_8f1a222a64e7c48eb21e644afeeda133);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8f1a222a64e7c48eb21e644afeeda133 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8f1a222a64e7c48eb21e644afeeda133 = MAKE_FUNCTION_FRAME(codeobj_8f1a222a64e7c48eb21e644afeeda133, module_youtube_dl$extractor$prosiebensat1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8f1a222a64e7c48eb21e644afeeda133->m_type_description == NULL);
    frame_8f1a222a64e7c48eb21e644afeeda133 = cache_frame_8f1a222a64e7c48eb21e644afeeda133;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8f1a222a64e7c48eb21e644afeeda133);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8f1a222a64e7c48eb21e644afeeda133) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain__download_json);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = const_str_digest_a7eca0f30f6c0fd74a2c58b644d8e707;
        tmp_args_name_1 = PyTuple_New(3);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_clip_id);
        tmp_tuple_element_1 = par_clip_id;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_str_digest_71ba319d0b8bf042fcdc116512c6c895;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 2, tmp_tuple_element_1);
        tmp_dict_key_1 = const_str_plain_query;
        tmp_dict_key_2 = const_str_plain_access_token;
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain__TOKEN);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);

            exception_lineno = 31;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_client_location;
        CHECK_OBJECT(var_client_location);
        tmp_dict_value_3 = var_client_location;
        tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_client_name;
        CHECK_OBJECT(par_self);
        tmp_expression_name_4 = par_self;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain__CLIENT_NAME);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);
            Py_DECREF(tmp_dict_value_1);

            exception_lineno = 33;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = const_str_plain_ids;
        CHECK_OBJECT(par_clip_id);
        tmp_dict_value_5 = par_clip_id;
        tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 28;
        tmp_expression_name_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_video == NULL);
        var_video = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_video);
        tmp_called_instance_1 = var_video;
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 37;
        tmp_compexpr_left_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_is_protected_tuple, 0));

        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_True;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_2;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_ExtractorError);

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

            exception_lineno = 38;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        tmp_args_name_2 = const_tuple_str_digest_5d7782bf1496982931cf17f365755f08_tuple;
        tmp_kw_name_2 = PyDict_Copy(const_dict_5a4b43d9442068c8ed68fb42270f3fd3);
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 38;
        tmp_raise_type_1 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 38;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyList_New(0);
        assert(var_formats == NULL);
        var_formats = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_5 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, const_str_plain__ACCESS_ID);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 41;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_right_name_3;
        PyObject *tmp_expression_name_8;
        CHECK_OBJECT(par_self);
        tmp_expression_name_6 = par_self;
        tmp_left_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, const_str_plain__ENCRYPTION_KEY);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_clip_id);
        tmp_right_name_1 = par_clip_id;
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_1);
        Py_DECREF(tmp_left_name_3);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_7 = par_self;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, const_str_plain__IV);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);

            exception_lineno = 42;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_left_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_8 = par_self;
        tmp_right_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, const_str_plain__ACCESS_ID);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 42;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_3);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_raw_ct == NULL);
        var_raw_ct = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_4;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_right_name_4;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        CHECK_OBJECT(par_self);
        tmp_expression_name_9 = par_self;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, const_str_plain__download_json);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_10 = par_self;
        tmp_left_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, const_str_plain__V4_BASE_URL);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 44;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_str_plain_protocols;
        tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_left_name_4);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 44;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_3 = PyTuple_New(3);
        PyTuple_SET_ITEM(tmp_args_name_3, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_clip_id);
        tmp_tuple_element_2 = par_clip_id;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_3, 1, tmp_tuple_element_2);
        tmp_tuple_element_2 = const_str_digest_881491fd5e70710485e20a65c86b238c;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_3, 2, tmp_tuple_element_2);
        tmp_dict_key_6 = const_str_plain_headers;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 46;
        tmp_dict_value_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_geo_verification_headers);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_name_3);

            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_3 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_6, tmp_dict_value_6);
        Py_DECREF(tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = const_str_plain_query;
        tmp_dict_key_8 = const_str_plain_access_id;
        CHECK_OBJECT(par_self);
        tmp_expression_name_11 = par_self;
        tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, const_str_plain__ACCESS_ID);
        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_name_3);
            Py_DECREF(tmp_kw_name_3);

            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_7 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_dict_value_7, tmp_dict_key_8, tmp_dict_value_8);
        Py_DECREF(tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = const_str_plain_client_token;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_sha1);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sha1);
        }

        if (tmp_mvar_value_2 == NULL) {
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_name_3);
            Py_DECREF(tmp_kw_name_3);
            Py_DECREF(tmp_dict_value_7);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23997 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_2;
        CHECK_OBJECT(var_raw_ct);
        tmp_called_instance_4 = var_raw_ct;
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 48;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, const_str_plain_encode);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_name_3);
            Py_DECREF(tmp_kw_name_3);
            Py_DECREF(tmp_dict_value_7);

            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 48;
        tmp_called_instance_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_name_3);
            Py_DECREF(tmp_kw_name_3);
            Py_DECREF(tmp_dict_value_7);

            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 48;
        tmp_dict_value_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_hexdigest);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_name_3);
            Py_DECREF(tmp_kw_name_3);
            Py_DECREF(tmp_dict_value_7);

            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_dict_value_7, tmp_dict_key_9, tmp_dict_value_9);
        Py_DECREF(tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = const_str_plain_video_id;
        CHECK_OBJECT(par_clip_id);
        tmp_dict_value_10 = par_clip_id;
        tmp_res = PyDict_SetItem(tmp_dict_value_7, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_7, tmp_dict_value_7);
        Py_DECREF(tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = const_str_plain_fatal;
        tmp_dict_value_11 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = const_str_plain_expected_status;
        tmp_dict_value_12 = const_tuple_int_pos_403_tuple;
        tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 43;
        tmp_or_left_value_1 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_3);
        Py_DECREF(tmp_kw_name_3);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 50;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = PyDict_New();
        tmp_assign_source_5 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_5 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_protocols == NULL);
        var_protocols = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(var_protocols);
        tmp_called_instance_5 = var_protocols;
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 51;
        tmp_or_left_value_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_error_tuple, 0));

        if (tmp_or_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 51;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        tmp_or_right_value_2 = PyDict_New();
        tmp_assign_source_6 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_assign_source_6 = tmp_or_left_value_2;
        or_end_2:;
        assert(var_error == NULL);
        var_error = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_error);
        tmp_called_instance_6 = var_error;
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 52;
        tmp_compexpr_left_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_title_tuple, 0));

        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_str_digest_98678ba80ce3c7af24eab7b1f7dd34fe;
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            exception_lineno = 52;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_name_4;
        CHECK_OBJECT(par_self);
        tmp_expression_name_12 = par_self;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, const_str_plain_raise_geo_restricted);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_4 = DEEP_COPY(const_dict_223f93ecf00bf67ac145a63c733ba47c);
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 53;
        tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_5, tmp_kw_name_4);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_kw_name_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_7;
        CHECK_OBJECT(var_protocols);
        tmp_called_instance_7 = var_protocols;
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 54;
        tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_server_token_tuple, 0));

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_server_token == NULL);
        var_server_token = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_server_token);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_server_token);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_8;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_called_instance_8;
        int tmp_or_left_truth_4;
        PyObject *tmp_or_left_value_4;
        PyObject *tmp_or_right_value_4;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_left_name_5;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_right_name_5;
        PyObject *tmp_kw_name_5;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        CHECK_OBJECT(par_self);
        tmp_expression_name_13 = par_self;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, const_str_plain__download_json);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_14 = par_self;
        tmp_left_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, const_str_plain__V4_BASE_URL);
        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 57;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = const_str_plain_urls;
        tmp_tuple_element_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_5, tmp_right_name_5);
        Py_DECREF(tmp_left_name_5);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 57;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_4 = PyTuple_New(3);
        PyTuple_SET_ITEM(tmp_args_name_4, 0, tmp_tuple_element_3);
        CHECK_OBJECT(par_clip_id);
        tmp_tuple_element_3 = par_clip_id;
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_args_name_4, 1, tmp_tuple_element_3);
        tmp_tuple_element_3 = const_str_digest_8a2897f4d46713dd5e6086c9380a1c7f;
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_args_name_4, 2, tmp_tuple_element_3);
        tmp_dict_key_13 = const_str_plain_query;
        tmp_dict_key_14 = const_str_plain_access_id;
        CHECK_OBJECT(par_self);
        tmp_expression_name_15 = par_self;
        tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, const_str_plain__ACCESS_ID);
        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_name_4);

            exception_lineno = 58;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_13 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_dict_value_13, tmp_dict_key_14, tmp_dict_value_14);
        Py_DECREF(tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = const_str_plain_client_token;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_sha1);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sha1);
        }

        if (tmp_mvar_value_3 == NULL) {
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_name_4);
            Py_DECREF(tmp_dict_value_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23997 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_3;
        CHECK_OBJECT(var_raw_ct);
        tmp_left_name_7 = var_raw_ct;
        CHECK_OBJECT(var_server_token);
        tmp_right_name_6 = var_server_token;
        tmp_left_name_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_7, tmp_right_name_6);
        if (tmp_left_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_name_4);
            Py_DECREF(tmp_dict_value_13);

            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_16 = par_self;
        tmp_right_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, const_str_plain__SUPPORTED_PROTOCOLS);
        if (tmp_right_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_name_4);
            Py_DECREF(tmp_dict_value_13);
            Py_DECREF(tmp_left_name_6);

            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_6, tmp_right_name_7);
        Py_DECREF(tmp_left_name_6);
        Py_DECREF(tmp_right_name_7);
        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_name_4);
            Py_DECREF(tmp_dict_value_13);

            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 59;
        tmp_args_element_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, const_str_plain_encode);
        Py_DECREF(tmp_called_instance_10);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_name_4);
            Py_DECREF(tmp_dict_value_13);

            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 59;
        tmp_called_instance_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_name_4);
            Py_DECREF(tmp_dict_value_13);

            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 59;
        tmp_dict_value_15 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, const_str_plain_hexdigest);
        Py_DECREF(tmp_called_instance_9);
        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_name_4);
            Py_DECREF(tmp_dict_value_13);

            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_dict_value_13, tmp_dict_key_15, tmp_dict_value_15);
        Py_DECREF(tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_16 = const_str_plain_protocols;
        CHECK_OBJECT(par_self);
        tmp_expression_name_17 = par_self;
        tmp_dict_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, const_str_plain__SUPPORTED_PROTOCOLS);
        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_name_4);
            Py_DECREF(tmp_dict_value_13);

            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_dict_value_13, tmp_dict_key_16, tmp_dict_value_16);
        Py_DECREF(tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = const_str_plain_server_token;
        CHECK_OBJECT(var_server_token);
        tmp_dict_value_17 = var_server_token;
        tmp_res = PyDict_SetItem(tmp_dict_value_13, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = const_str_plain_video_id;
        CHECK_OBJECT(par_clip_id);
        tmp_dict_value_18 = par_clip_id;
        tmp_res = PyDict_SetItem(tmp_dict_value_13, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_kw_name_5 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kw_name_5, tmp_dict_key_13, tmp_dict_value_13);
        Py_DECREF(tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = const_str_plain_fatal;
        tmp_dict_value_19 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_name_5, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 56;
        tmp_or_left_value_4 = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_4, tmp_kw_name_5);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_name_4);
        Py_DECREF(tmp_kw_name_5);
        if (tmp_or_left_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
        if (tmp_or_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_4);

            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_4 == 1) {
            goto or_left_4;
        } else {
            goto or_right_4;
        }
        or_right_4:;
        Py_DECREF(tmp_or_left_value_4);
        tmp_or_right_value_4 = PyDict_New();
        tmp_called_instance_8 = tmp_or_right_value_4;
        goto or_end_4;
        or_left_4:;
        tmp_called_instance_8 = tmp_or_left_value_4;
        or_end_4:;
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 56;
        tmp_or_left_value_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_8, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_urls_tuple, 0));

        Py_DECREF(tmp_called_instance_8);
        if (tmp_or_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_3);

            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        Py_DECREF(tmp_or_left_value_3);
        tmp_or_right_value_3 = PyDict_New();
        tmp_assign_source_8 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_assign_source_8 = tmp_or_left_value_3;
        or_end_3:;
        assert(var_urls == NULL);
        var_urls = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_11;
        CHECK_OBJECT(var_urls);
        tmp_called_instance_11 = var_urls;
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 64;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, const_str_plain_items);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_9;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_10 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 64;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 64;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 64;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    exception_lineno = 64;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = const_str_digest_fcf040720b88d60da4ce975010c44a3a;
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 64;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_protocol;
            var_protocol = tmp_assign_source_14;
            Py_INCREF(var_protocol);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_variant;
            var_variant = tmp_assign_source_15;
            Py_INCREF(var_variant);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        CHECK_OBJECT(var_variant);
        tmp_called_instance_13 = var_variant;
        tmp_call_arg_element_1 = const_str_plain_clear;
        tmp_call_arg_element_2 = PyDict_New();
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_called_instance_12 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_13, const_str_plain_get, call_args);
        }

        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 65;
        tmp_assign_source_16 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_12, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_url_tuple, 0));

        Py_DECREF(tmp_called_instance_12);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_source_url;
            var_source_url = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(var_source_url);
        tmp_operand_name_1 = var_source_url;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooooooooooooooo";
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
    goto loop_start_1;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_tmp_condition_result_6_object_1;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_protocol);
        tmp_compexpr_left_3 = var_protocol;
        tmp_compexpr_right_3 = const_str_plain_dash;
        tmp_tmp_condition_result_6_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_tmp_condition_result_6_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_tmp_condition_result_6_object_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_6_object_1);

            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_6 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_6_object_1);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_9;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_args_name_5;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_name_6;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        CHECK_OBJECT(var_formats);
        tmp_expression_name_18 = var_formats;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, const_str_plain_extend);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_19 = par_self;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, const_str_plain__extract_mpd_formats);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_source_url);
        tmp_tuple_element_4 = var_source_url;
        tmp_args_name_5 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_4);
        PyTuple_SET_ITEM(tmp_args_name_5, 0, tmp_tuple_element_4);
        CHECK_OBJECT(par_clip_id);
        tmp_tuple_element_4 = par_clip_id;
        Py_INCREF(tmp_tuple_element_4);
        PyTuple_SET_ITEM(tmp_args_name_5, 1, tmp_tuple_element_4);
        tmp_dict_key_20 = const_str_plain_mpd_id;
        CHECK_OBJECT(var_protocol);
        tmp_dict_value_20 = var_protocol;
        tmp_kw_name_6 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kw_name_6, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = const_str_plain_fatal;
        tmp_dict_value_21 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_name_6, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 69;
        tmp_args_element_name_3 = CALL_FUNCTION(tmp_called_name_9, tmp_args_name_5, tmp_kw_name_6);
        Py_DECREF(tmp_called_name_9);
        Py_DECREF(tmp_args_name_5);
        Py_DECREF(tmp_kw_name_6);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 69;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_tmp_condition_result_7_object_1;
        int tmp_truth_name_5;
        CHECK_OBJECT(var_protocol);
        tmp_compexpr_left_4 = var_protocol;
        tmp_compexpr_right_4 = const_str_plain_hls;
        tmp_tmp_condition_result_7_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_tmp_condition_result_7_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_tmp_condition_result_7_object_1);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_7_object_1);

            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_7 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_7_object_1);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_name_10;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_args_name_6;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kw_name_7;
        PyObject *tmp_dict_key_22;
        PyObject *tmp_dict_value_22;
        PyObject *tmp_dict_key_23;
        PyObject *tmp_dict_value_23;
        CHECK_OBJECT(var_formats);
        tmp_expression_name_20 = var_formats;
        tmp_called_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, const_str_plain_extend);
        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_21 = par_self;
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, const_str_plain__extract_m3u8_formats);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_10);

            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_source_url);
        tmp_tuple_element_5 = var_source_url;
        tmp_args_name_6 = PyTuple_New(4);
        Py_INCREF(tmp_tuple_element_5);
        PyTuple_SET_ITEM(tmp_args_name_6, 0, tmp_tuple_element_5);
        CHECK_OBJECT(par_clip_id);
        tmp_tuple_element_5 = par_clip_id;
        Py_INCREF(tmp_tuple_element_5);
        PyTuple_SET_ITEM(tmp_args_name_6, 1, tmp_tuple_element_5);
        tmp_tuple_element_5 = const_str_plain_mp4;
        Py_INCREF(tmp_tuple_element_5);
        PyTuple_SET_ITEM(tmp_args_name_6, 2, tmp_tuple_element_5);
        tmp_tuple_element_5 = const_str_plain_m3u8_native;
        Py_INCREF(tmp_tuple_element_5);
        PyTuple_SET_ITEM(tmp_args_name_6, 3, tmp_tuple_element_5);
        tmp_dict_key_22 = const_str_plain_m3u8_id;
        CHECK_OBJECT(var_protocol);
        tmp_dict_value_22 = var_protocol;
        tmp_kw_name_7 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kw_name_7, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_23 = const_str_plain_fatal;
        tmp_dict_value_23 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_name_7, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 72;
        tmp_args_element_name_4 = CALL_FUNCTION(tmp_called_name_11, tmp_args_name_6, tmp_kw_name_7);
        Py_DECREF(tmp_called_name_11);
        Py_DECREF(tmp_args_name_6);
        Py_DECREF(tmp_kw_name_7);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_10);

            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 72;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_10);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_called_instance_14;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_dict_key_24;
        PyObject *tmp_dict_value_24;
        PyObject *tmp_dict_key_25;
        PyObject *tmp_dict_value_25;
        CHECK_OBJECT(var_formats);
        tmp_called_instance_14 = var_formats;
        tmp_dict_key_24 = const_str_plain_url;
        CHECK_OBJECT(var_source_url);
        tmp_dict_value_24 = var_source_url;
        tmp_args_element_name_5 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_5, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        tmp_dict_key_25 = const_str_plain_format_id;
        CHECK_OBJECT(var_protocol);
        tmp_dict_value_25 = var_protocol;
        tmp_res = PyDict_SetItem(tmp_args_element_name_5, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = {tmp_args_element_name_5};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_14, const_str_plain_append, call_args);
        }

        Py_DECREF(tmp_args_element_name_5);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_end_7:;
    branch_end_6:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 64;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    branch_no_4:;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT(var_formats);
        tmp_operand_name_2 = var_formats;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_8 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_17;
        // Tried code:
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_expression_name_22;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT(var_video);
            tmp_expression_name_22 = var_video;
            tmp_subscript_name_2 = const_str_plain_sources;
            tmp_iter_arg_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_22, tmp_subscript_name_2);
            if (tmp_iter_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_18 = MAKE_ITERATOR(tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_18;
        }
        {
            PyObject *tmp_assign_source_19;
            tmp_assign_source_19 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_19;
        }
        if (isFrameUnusable(cache_frame_0ae9c1016c4bc4991327dd4245f1589d_2)) {
            Py_XDECREF(cache_frame_0ae9c1016c4bc4991327dd4245f1589d_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0ae9c1016c4bc4991327dd4245f1589d_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0ae9c1016c4bc4991327dd4245f1589d_2 = MAKE_FUNCTION_FRAME(codeobj_0ae9c1016c4bc4991327dd4245f1589d, module_youtube_dl$extractor$prosiebensat1, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_0ae9c1016c4bc4991327dd4245f1589d_2->m_type_description == NULL);
        frame_0ae9c1016c4bc4991327dd4245f1589d_2 = cache_frame_0ae9c1016c4bc4991327dd4245f1589d_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_0ae9c1016c4bc4991327dd4245f1589d_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_0ae9c1016c4bc4991327dd4245f1589d_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_20 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_20 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 81;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_20;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_21;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_21 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_source;
                outline_0_var_source = tmp_assign_source_21;
                Py_INCREF(outline_0_var_source);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_name_12;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_expression_name_23;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_compat_str);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_compat_str);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 26637 ], 32, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 81;
                type_description_2 = "o";
                goto try_except_handler_6;
            }

            tmp_called_name_12 = tmp_mvar_value_4;
            CHECK_OBJECT(outline_0_var_source);
            tmp_expression_name_23 = outline_0_var_source;
            tmp_subscript_name_3 = const_str_plain_id;
            tmp_args_element_name_6 = LOOKUP_SUBSCRIPT(tmp_expression_name_23, tmp_subscript_name_3);
            if (tmp_args_element_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            frame_0ae9c1016c4bc4991327dd4245f1589d_2->m_frame.f_lineno = 81;
            tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_6);
            Py_DECREF(tmp_args_element_name_6);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_res = PyList_Append(tmp_append_list_1, tmp_append_value_1);
            Py_DECREF(tmp_append_value_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_2 = "o";
            goto try_except_handler_6;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_17 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_17);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
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
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
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
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0ae9c1016c4bc4991327dd4245f1589d_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_0ae9c1016c4bc4991327dd4245f1589d_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_5;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0ae9c1016c4bc4991327dd4245f1589d_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0ae9c1016c4bc4991327dd4245f1589d_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0ae9c1016c4bc4991327dd4245f1589d_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0ae9c1016c4bc4991327dd4245f1589d_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0ae9c1016c4bc4991327dd4245f1589d_2,
            type_description_2,
            outline_0_var_source
        );


        // Release cached frame.
        if (frame_0ae9c1016c4bc4991327dd4245f1589d_2 == cache_frame_0ae9c1016c4bc4991327dd4245f1589d_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(frame_0ae9c1016c4bc4991327dd4245f1589d_2);
        }
        cache_frame_0ae9c1016c4bc4991327dd4245f1589d_2 = NULL;

        assertFrameObject(frame_0ae9c1016c4bc4991327dd4245f1589d_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_5;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(outline_0_var_source);
        outline_0_var_source = NULL;

        goto outline_result_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_source);
        outline_0_var_source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 81;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_source_ids == NULL);
        var_source_ids = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_8;
        PyObject *tmp_expression_name_24;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_right_name_8;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_called_name_14;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_expression_name_30;
        CHECK_OBJECT(par_self);
        tmp_expression_name_25 = par_self;
        tmp_expression_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, const_str_plain__SALT);
        if (tmp_expression_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_4 = const_slice_none_int_pos_2_none;
        tmp_left_name_8 = LOOKUP_SUBSCRIPT(tmp_expression_name_24, tmp_subscript_name_4);
        Py_DECREF(tmp_expression_name_24);
        if (tmp_left_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_sha1);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sha1);
        }

        if (tmp_mvar_value_5 == NULL) {
            Py_DECREF(tmp_left_name_8);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23997 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_13 = tmp_mvar_value_5;
        tmp_expression_name_26 = const_str_empty;
        tmp_called_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, const_str_plain_join);
        assert(!(tmp_called_name_14 == NULL));
        CHECK_OBJECT(par_clip_id);
        tmp_list_element_1 = par_clip_id;
        tmp_args_element_name_8 = PyList_New(6);
        Py_INCREF(tmp_list_element_1);
        PyList_SET_ITEM(tmp_args_element_name_8, 0, tmp_list_element_1);
        CHECK_OBJECT(par_self);
        tmp_expression_name_27 = par_self;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, const_str_plain__SALT);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_8);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_args_element_name_8);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_args_element_name_8, 1, tmp_list_element_1);
        CHECK_OBJECT(par_self);
        tmp_expression_name_28 = par_self;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, const_str_plain__TOKEN);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_8);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_args_element_name_8);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_args_element_name_8, 2, tmp_list_element_1);
        CHECK_OBJECT(var_client_location);
        tmp_list_element_1 = var_client_location;
        Py_INCREF(tmp_list_element_1);
        PyList_SET_ITEM(tmp_args_element_name_8, 3, tmp_list_element_1);
        CHECK_OBJECT(par_self);
        tmp_expression_name_29 = par_self;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, const_str_plain__SALT);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_8);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_args_element_name_8);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_args_element_name_8, 4, tmp_list_element_1);
        CHECK_OBJECT(par_self);
        tmp_expression_name_30 = par_self;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, const_str_plain__CLIENT_NAME);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_8);
            Py_DECREF(tmp_called_name_14);
            Py_DECREF(tmp_args_element_name_8);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_args_element_name_8, 5, tmp_list_element_1);
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 83;
        tmp_called_instance_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, tmp_args_element_name_8);
        Py_DECREF(tmp_called_name_14);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_called_instance_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_8);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 83;
        tmp_args_element_name_7 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_16, const_str_plain_encode, &PyTuple_GET_ITEM(const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0));

        Py_DECREF(tmp_called_instance_16);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_8);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 83;
        tmp_called_instance_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, tmp_args_element_name_7);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_8);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 83;
        tmp_right_name_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_15, const_str_plain_hexdigest);
        Py_DECREF(tmp_called_instance_15);
        if (tmp_right_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_8);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_8, tmp_right_name_8);
        Py_DECREF(tmp_left_name_8);
        Py_DECREF(tmp_right_name_8);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_client_id == NULL);
        var_client_id = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_15;
        PyObject *tmp_expression_name_31;
        PyObject *tmp_args_name_7;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_kw_name_8;
        PyObject *tmp_dict_key_26;
        PyObject *tmp_dict_value_26;
        PyObject *tmp_dict_key_27;
        PyObject *tmp_dict_value_27;
        PyObject *tmp_expression_name_32;
        PyObject *tmp_dict_key_28;
        PyObject *tmp_dict_value_28;
        PyObject *tmp_dict_key_29;
        PyObject *tmp_dict_value_29;
        PyObject *tmp_dict_key_30;
        PyObject *tmp_dict_value_30;
        PyObject *tmp_expression_name_33;
        CHECK_OBJECT(par_self);
        tmp_expression_name_31 = par_self;
        tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, const_str_plain__download_json);
        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_9 = const_str_digest_54f03883be440df472ad648e929601ea;
        CHECK_OBJECT(par_clip_id);
        tmp_right_name_9 = par_clip_id;
        tmp_tuple_element_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_9, tmp_right_name_9);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_7 = PyTuple_New(3);
        PyTuple_SET_ITEM(tmp_args_name_7, 0, tmp_tuple_element_6);
        CHECK_OBJECT(par_clip_id);
        tmp_tuple_element_6 = par_clip_id;
        Py_INCREF(tmp_tuple_element_6);
        PyTuple_SET_ITEM(tmp_args_name_7, 1, tmp_tuple_element_6);
        tmp_tuple_element_6 = const_str_digest_99679730b984150f6c23a5bca3a8d107;
        Py_INCREF(tmp_tuple_element_6);
        PyTuple_SET_ITEM(tmp_args_name_7, 2, tmp_tuple_element_6);
        tmp_dict_key_26 = const_str_plain_query;
        tmp_dict_key_27 = const_str_plain_access_token;
        CHECK_OBJECT(par_self);
        tmp_expression_name_32 = par_self;
        tmp_dict_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_32, const_str_plain__TOKEN);
        if (tmp_dict_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);
            Py_DECREF(tmp_args_name_7);

            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_26 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_dict_value_26, tmp_dict_key_27, tmp_dict_value_27);
        Py_DECREF(tmp_dict_value_27);
        assert(!(tmp_res != 0));
        tmp_dict_key_28 = const_str_plain_client_id;
        CHECK_OBJECT(var_client_id);
        tmp_dict_value_28 = var_client_id;
        tmp_res = PyDict_SetItem(tmp_dict_value_26, tmp_dict_key_28, tmp_dict_value_28);
        assert(!(tmp_res != 0));
        tmp_dict_key_29 = const_str_plain_client_location;
        CHECK_OBJECT(var_client_location);
        tmp_dict_value_29 = var_client_location;
        tmp_res = PyDict_SetItem(tmp_dict_value_26, tmp_dict_key_29, tmp_dict_value_29);
        assert(!(tmp_res != 0));
        tmp_dict_key_30 = const_str_plain_client_name;
        CHECK_OBJECT(par_self);
        tmp_expression_name_33 = par_self;
        tmp_dict_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, const_str_plain__CLIENT_NAME);
        if (tmp_dict_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);
            Py_DECREF(tmp_args_name_7);
            Py_DECREF(tmp_dict_value_26);

            exception_lineno = 91;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_dict_value_26, tmp_dict_key_30, tmp_dict_value_30);
        Py_DECREF(tmp_dict_value_30);
        assert(!(tmp_res != 0));
        tmp_kw_name_8 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_8, tmp_dict_key_26, tmp_dict_value_26);
        Py_DECREF(tmp_dict_value_26);
        assert(!(tmp_res != 0));
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 85;
        tmp_assign_source_23 = CALL_FUNCTION(tmp_called_name_15, tmp_args_name_7, tmp_kw_name_8);
        Py_DECREF(tmp_called_name_15);
        Py_DECREF(tmp_args_name_7);
        Py_DECREF(tmp_kw_name_8);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sources == NULL);
        var_sources = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_expression_name_34;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT(var_sources);
        tmp_expression_name_34 = var_sources;
        tmp_subscript_name_5 = const_str_plain_server_id;
        tmp_assign_source_24 = LOOKUP_SUBSCRIPT(tmp_expression_name_34, tmp_subscript_name_5);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_server_id == NULL);
        var_server_id = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_FUNCTION_youtube_dl$extractor$prosiebensat1$$$function_1__extract_video_info$$$function_1_fix_bitrate();



        assert(var_fix_bitrate == NULL);
        var_fix_bitrate = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(var_source_ids);
        tmp_iter_arg_4 = var_source_ids;
        tmp_assign_source_26 = MAKE_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_26;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_3 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_27 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_27 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 101;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_28 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_source_id;
            var_source_id = tmp_assign_source_28;
            Py_INCREF(var_source_id);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_left_name_10;
        PyObject *tmp_expression_name_35;
        PyObject *tmp_expression_name_36;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_right_name_10;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_called_name_16;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_called_name_17;
        PyObject *tmp_expression_name_37;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_list_element_2;
        PyObject *tmp_expression_name_38;
        PyObject *tmp_expression_name_39;
        PyObject *tmp_expression_name_40;
        PyObject *tmp_expression_name_41;
        CHECK_OBJECT(par_self);
        tmp_expression_name_36 = par_self;
        tmp_expression_name_35 = LOOKUP_ATTRIBUTE(tmp_expression_name_36, const_str_plain__SALT);
        if (tmp_expression_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_subscript_name_6 = const_slice_none_int_pos_2_none;
        tmp_left_name_10 = LOOKUP_SUBSCRIPT(tmp_expression_name_35, tmp_subscript_name_6);
        Py_DECREF(tmp_expression_name_35);
        if (tmp_left_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_sha1);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sha1);
        }

        if (tmp_mvar_value_6 == NULL) {
            Py_DECREF(tmp_left_name_10);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23997 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_name_16 = tmp_mvar_value_6;
        tmp_expression_name_37 = const_str_empty;
        tmp_called_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_37, const_str_plain_join);
        assert(!(tmp_called_name_17 == NULL));
        CHECK_OBJECT(par_self);
        tmp_expression_name_38 = par_self;
        tmp_list_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_38, const_str_plain__SALT);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_10);
            Py_DECREF(tmp_called_name_17);

            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_args_element_name_10 = PyList_New(8);
        PyList_SET_ITEM(tmp_args_element_name_10, 0, tmp_list_element_2);
        CHECK_OBJECT(par_clip_id);
        tmp_list_element_2 = par_clip_id;
        Py_INCREF(tmp_list_element_2);
        PyList_SET_ITEM(tmp_args_element_name_10, 1, tmp_list_element_2);
        CHECK_OBJECT(par_self);
        tmp_expression_name_39 = par_self;
        tmp_list_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_39, const_str_plain__TOKEN);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_10);
            Py_DECREF(tmp_called_name_17);
            Py_DECREF(tmp_args_element_name_10);

            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        PyList_SET_ITEM(tmp_args_element_name_10, 2, tmp_list_element_2);
        CHECK_OBJECT(var_server_id);
        tmp_list_element_2 = var_server_id;
        Py_INCREF(tmp_list_element_2);
        PyList_SET_ITEM(tmp_args_element_name_10, 3, tmp_list_element_2);
        CHECK_OBJECT(var_client_location);
        tmp_list_element_2 = var_client_location;
        Py_INCREF(tmp_list_element_2);
        PyList_SET_ITEM(tmp_args_element_name_10, 4, tmp_list_element_2);
        CHECK_OBJECT(var_source_id);
        tmp_list_element_2 = var_source_id;
        Py_INCREF(tmp_list_element_2);
        PyList_SET_ITEM(tmp_args_element_name_10, 5, tmp_list_element_2);
        CHECK_OBJECT(par_self);
        tmp_expression_name_40 = par_self;
        tmp_list_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_40, const_str_plain__SALT);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_10);
            Py_DECREF(tmp_called_name_17);
            Py_DECREF(tmp_args_element_name_10);

            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        PyList_SET_ITEM(tmp_args_element_name_10, 6, tmp_list_element_2);
        CHECK_OBJECT(par_self);
        tmp_expression_name_41 = par_self;
        tmp_list_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_41, const_str_plain__CLIENT_NAME);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_10);
            Py_DECREF(tmp_called_name_17);
            Py_DECREF(tmp_args_element_name_10);

            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        PyList_SET_ITEM(tmp_args_element_name_10, 7, tmp_list_element_2);
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 102;
        tmp_called_instance_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, tmp_args_element_name_10);
        Py_DECREF(tmp_called_name_17);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_called_instance_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_10);

            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 102;
        tmp_args_element_name_9 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_18, const_str_plain_encode, &PyTuple_GET_ITEM(const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0));

        Py_DECREF(tmp_called_instance_18);
        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_10);

            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 102;
        tmp_called_instance_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_16, tmp_args_element_name_9);
        Py_DECREF(tmp_args_element_name_9);
        if (tmp_called_instance_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_10);

            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 102;
        tmp_right_name_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_17, const_str_plain_hexdigest);
        Py_DECREF(tmp_called_instance_17);
        if (tmp_right_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_10);

            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_29 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_10, tmp_right_name_10);
        Py_DECREF(tmp_left_name_10);
        Py_DECREF(tmp_right_name_10);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_client_id;
            assert(old != NULL);
            var_client_id = tmp_assign_source_29;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_name_18;
        PyObject *tmp_expression_name_42;
        PyObject *tmp_args_name_8;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_kw_name_9;
        PyObject *tmp_dict_key_31;
        PyObject *tmp_dict_value_31;
        PyObject *tmp_dict_key_32;
        PyObject *tmp_dict_value_32;
        PyObject *tmp_dict_key_33;
        PyObject *tmp_dict_value_33;
        PyObject *tmp_expression_name_43;
        PyObject *tmp_dict_key_34;
        PyObject *tmp_dict_value_34;
        PyObject *tmp_dict_key_35;
        PyObject *tmp_dict_value_35;
        PyObject *tmp_dict_key_36;
        PyObject *tmp_dict_value_36;
        PyObject *tmp_expression_name_44;
        PyObject *tmp_dict_key_37;
        PyObject *tmp_dict_value_37;
        PyObject *tmp_dict_key_38;
        PyObject *tmp_dict_value_38;
        CHECK_OBJECT(par_self);
        tmp_expression_name_42 = par_self;
        tmp_called_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_42, const_str_plain__download_json);
        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_left_name_11 = const_str_digest_8710f4e90c4ec4873ef39011d90fa567;
        CHECK_OBJECT(par_clip_id);
        tmp_right_name_11 = par_clip_id;
        tmp_tuple_element_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_11, tmp_right_name_11);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);

            exception_lineno = 104;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_args_name_8 = PyTuple_New(3);
        PyTuple_SET_ITEM(tmp_args_name_8, 0, tmp_tuple_element_7);
        CHECK_OBJECT(par_clip_id);
        tmp_tuple_element_7 = par_clip_id;
        Py_INCREF(tmp_tuple_element_7);
        PyTuple_SET_ITEM(tmp_args_name_8, 1, tmp_tuple_element_7);
        tmp_tuple_element_7 = const_str_digest_8a2897f4d46713dd5e6086c9380a1c7f;
        Py_INCREF(tmp_tuple_element_7);
        PyTuple_SET_ITEM(tmp_args_name_8, 2, tmp_tuple_element_7);
        tmp_dict_key_31 = const_str_plain_fatal;
        tmp_dict_value_31 = Py_False;
        tmp_kw_name_9 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kw_name_9, tmp_dict_key_31, tmp_dict_value_31);
        assert(!(tmp_res != 0));
        tmp_dict_key_32 = const_str_plain_query;
        tmp_dict_key_33 = const_str_plain_access_token;
        CHECK_OBJECT(par_self);
        tmp_expression_name_43 = par_self;
        tmp_dict_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_name_43, const_str_plain__TOKEN);
        if (tmp_dict_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_args_name_8);
            Py_DECREF(tmp_kw_name_9);

            exception_lineno = 106;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_dict_value_32 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_dict_value_32, tmp_dict_key_33, tmp_dict_value_33);
        Py_DECREF(tmp_dict_value_33);
        assert(!(tmp_res != 0));
        tmp_dict_key_34 = const_str_plain_client_id;
        CHECK_OBJECT(var_client_id);
        tmp_dict_value_34 = var_client_id;
        tmp_res = PyDict_SetItem(tmp_dict_value_32, tmp_dict_key_34, tmp_dict_value_34);
        assert(!(tmp_res != 0));
        tmp_dict_key_35 = const_str_plain_client_location;
        CHECK_OBJECT(var_client_location);
        tmp_dict_value_35 = var_client_location;
        tmp_res = PyDict_SetItem(tmp_dict_value_32, tmp_dict_key_35, tmp_dict_value_35);
        assert(!(tmp_res != 0));
        tmp_dict_key_36 = const_str_plain_client_name;
        CHECK_OBJECT(par_self);
        tmp_expression_name_44 = par_self;
        tmp_dict_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_name_44, const_str_plain__CLIENT_NAME);
        if (tmp_dict_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_args_name_8);
            Py_DECREF(tmp_kw_name_9);
            Py_DECREF(tmp_dict_value_32);

            exception_lineno = 109;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_res = PyDict_SetItem(tmp_dict_value_32, tmp_dict_key_36, tmp_dict_value_36);
        Py_DECREF(tmp_dict_value_36);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = const_str_plain_server_id;
        CHECK_OBJECT(var_server_id);
        tmp_dict_value_37 = var_server_id;
        tmp_res = PyDict_SetItem(tmp_dict_value_32, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_38 = const_str_plain_source_ids;
        CHECK_OBJECT(var_source_id);
        tmp_dict_value_38 = var_source_id;
        tmp_res = PyDict_SetItem(tmp_dict_value_32, tmp_dict_key_38, tmp_dict_value_38);
        assert(!(tmp_res != 0));
        tmp_res = PyDict_SetItem(tmp_kw_name_9, tmp_dict_key_32, tmp_dict_value_32);
        Py_DECREF(tmp_dict_value_32);
        assert(!(tmp_res != 0));
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 103;
        tmp_assign_source_30 = CALL_FUNCTION(tmp_called_name_18, tmp_args_name_8, tmp_kw_name_9);
        Py_DECREF(tmp_called_name_18);
        Py_DECREF(tmp_args_name_8);
        Py_DECREF(tmp_kw_name_9);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_urls;
            var_urls = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_operand_name_3;
        CHECK_OBJECT(var_urls);
        tmp_operand_name_3 = var_urls;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
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
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_tmp_condition_result_10_object_1;
        int tmp_truth_name_6;
        CHECK_OBJECT(var_urls);
        tmp_called_instance_19 = var_urls;
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 115;
        tmp_compexpr_left_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_19, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_status_code_tuple, 0));

        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_compexpr_right_5 = const_int_0;
        tmp_tmp_condition_result_10_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_left_5);
        if (tmp_tmp_condition_result_10_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_tmp_condition_result_10_object_1);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_10_object_1);

            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_10 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_10_object_1);
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_name_19;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_name_9;
        PyObject *tmp_kw_name_10;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_ExtractorError);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtractorError);
        }

        if (tmp_mvar_value_7 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27135 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_name_19 = tmp_mvar_value_7;
        tmp_args_name_9 = const_tuple_str_digest_c3034eea6720778d459a5797f735fd87_tuple;
        tmp_kw_name_10 = PyDict_Copy(const_dict_5a4b43d9442068c8ed68fb42270f3fd3);
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 116;
        tmp_raise_type_2 = CALL_FUNCTION(tmp_called_name_19, tmp_args_name_9, tmp_kw_name_10);
        Py_DECREF(tmp_kw_name_10);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 116;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    branch_no_10:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_expression_name_45;
        PyObject *tmp_subscript_name_7;
        CHECK_OBJECT(var_urls);
        tmp_expression_name_45 = var_urls;
        tmp_subscript_name_7 = const_str_plain_sources;
        tmp_assign_source_31 = LOOKUP_SUBSCRIPT(tmp_expression_name_45, tmp_subscript_name_7);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_urls_sources;
            var_urls_sources = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_urls_sources);
        tmp_isinstance_inst_1 = var_urls_sources;
        tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
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
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_instance_20;
        CHECK_OBJECT(var_urls_sources);
        tmp_called_instance_20 = var_urls_sources;
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 119;
        tmp_assign_source_32 = CALL_METHOD_NO_ARGS(tmp_called_instance_20, const_str_plain_values);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_urls_sources;
            assert(old != NULL);
            var_urls_sources = tmp_assign_source_32;
            Py_DECREF(old);
        }

    }
    branch_no_11:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_iter_arg_5;
        CHECK_OBJECT(var_urls_sources);
        tmp_iter_arg_5 = var_urls_sources;
        tmp_assign_source_33 = MAKE_ITERATOR(tmp_iter_arg_5);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_4 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_34 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_34 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 120;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_35 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_source;
            var_source = tmp_assign_source_35;
            Py_INCREF(var_source);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_instance_21;
        CHECK_OBJECT(var_source);
        tmp_called_instance_21 = var_source;
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 121;
        tmp_assign_source_36 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_21, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_url_tuple, 0));

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_source_url;
            var_source_url = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_operand_name_4;
        CHECK_OBJECT(var_source_url);
        tmp_operand_name_4 = var_source_url;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    goto loop_start_4;
    branch_no_12:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_instance_22;
        CHECK_OBJECT(var_source);
        tmp_called_instance_22 = var_source;
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 124;
        tmp_assign_source_37 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_22, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_protocol_tuple, 0));

        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_protocol;
            var_protocol = tmp_assign_source_37;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_instance_23;
        CHECK_OBJECT(var_source);
        tmp_called_instance_23 = var_source;
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 125;
        tmp_assign_source_38 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_23, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_mimetype_tuple, 0));

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_mimetype;
            var_mimetype = tmp_assign_source_38;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_13;
        int tmp_or_left_truth_5;
        nuitka_bool tmp_or_left_value_5;
        nuitka_bool tmp_or_right_value_5;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_tmp_or_left_value_5_object_1;
        int tmp_truth_name_7;
        int tmp_or_left_truth_6;
        nuitka_bool tmp_or_left_value_6;
        nuitka_bool tmp_or_right_value_6;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_called_name_20;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_tmp_or_right_value_6_object_1;
        int tmp_truth_name_8;
        CHECK_OBJECT(var_mimetype);
        tmp_compexpr_left_6 = var_mimetype;
        tmp_compexpr_right_6 = const_str_digest_13b423245a5f0346242d6b0a7e68c44f;
        tmp_tmp_or_left_value_5_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
        if (tmp_tmp_or_left_value_5_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_tmp_or_left_value_5_object_1);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_left_value_5_object_1);

            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_or_left_value_5 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_or_left_value_5_object_1);
        tmp_or_left_truth_5 = tmp_or_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_5 == 1) {
            goto or_left_5;
        } else {
            goto or_right_5;
        }
        or_right_5:;
        tmp_compexpr_left_7 = const_str_plain_f4mgenerator;
        CHECK_OBJECT(var_source_url);
        tmp_compexpr_right_7 = var_source_url;
        tmp_res = PySequence_Contains(tmp_compexpr_right_7, tmp_compexpr_left_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_or_left_value_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_6 = tmp_or_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_6 == 1) {
            goto or_left_6;
        } else {
            goto or_right_6;
        }
        or_right_6:;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_determine_ext);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_determine_ext);
        }

        if (tmp_mvar_value_8 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27560 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_called_name_20 = tmp_mvar_value_8;
        CHECK_OBJECT(var_source_url);
        tmp_args_element_name_11 = var_source_url;
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 126;
        tmp_compexpr_left_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_20, tmp_args_element_name_11);
        if (tmp_compexpr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_compexpr_right_8 = const_str_plain_f4m;
        tmp_tmp_or_right_value_6_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
        Py_DECREF(tmp_compexpr_left_8);
        if (tmp_tmp_or_right_value_6_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_tmp_or_right_value_6_object_1);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_right_value_6_object_1);

            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_or_right_value_6 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_or_right_value_6_object_1);
        tmp_or_right_value_5 = tmp_or_right_value_6;
        goto or_end_6;
        or_left_6:;
        tmp_or_right_value_5 = tmp_or_left_value_6;
        or_end_6:;
        tmp_condition_result_13 = tmp_or_right_value_5;
        goto or_end_5;
        or_left_5:;
        tmp_condition_result_13 = tmp_or_left_value_5;
        or_end_5:;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_called_name_21;
        PyObject *tmp_expression_name_46;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_called_name_22;
        PyObject *tmp_expression_name_47;
        PyObject *tmp_args_name_10;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kw_name_11;
        CHECK_OBJECT(var_formats);
        tmp_expression_name_46 = var_formats;
        tmp_called_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_46, const_str_plain_extend);
        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_47 = par_self;
        tmp_called_name_22 = LOOKUP_ATTRIBUTE(tmp_expression_name_47, const_str_plain__extract_f4m_formats);
        if (tmp_called_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);

            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_source_url);
        tmp_tuple_element_8 = var_source_url;
        tmp_args_name_10 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_8);
        PyTuple_SET_ITEM(tmp_args_name_10, 0, tmp_tuple_element_8);
        CHECK_OBJECT(par_clip_id);
        tmp_tuple_element_8 = par_clip_id;
        Py_INCREF(tmp_tuple_element_8);
        PyTuple_SET_ITEM(tmp_args_name_10, 1, tmp_tuple_element_8);
        tmp_kw_name_11 = PyDict_Copy(const_dict_f5ca6a18a8136d81193ff1ee2f9d02a4);
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 127;
        tmp_args_element_name_12 = CALL_FUNCTION(tmp_called_name_22, tmp_args_name_10, tmp_kw_name_11);
        Py_DECREF(tmp_called_name_22);
        Py_DECREF(tmp_args_name_10);
        Py_DECREF(tmp_kw_name_11);
        if (tmp_args_element_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);

            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 127;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_21, tmp_args_element_name_12);
        Py_DECREF(tmp_called_name_21);
        Py_DECREF(tmp_args_element_name_12);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_5);
    }
    goto branch_end_13;
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_tmp_condition_result_14_object_1;
        int tmp_truth_name_9;
        CHECK_OBJECT(var_mimetype);
        tmp_compexpr_left_9 = var_mimetype;
        tmp_compexpr_right_9 = const_str_digest_6d4a7e990461ff5ffdadd21349125549;
        tmp_tmp_condition_result_14_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_9, tmp_compexpr_right_9);
        if (tmp_tmp_condition_result_14_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_tmp_condition_result_14_object_1);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_14_object_1);

            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_14 = tmp_truth_name_9 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_14_object_1);
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_called_name_23;
        PyObject *tmp_expression_name_48;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_called_name_24;
        PyObject *tmp_expression_name_49;
        PyObject *tmp_args_name_11;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kw_name_12;
        CHECK_OBJECT(var_formats);
        tmp_expression_name_48 = var_formats;
        tmp_called_name_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_48, const_str_plain_extend);
        if (tmp_called_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_49 = par_self;
        tmp_called_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_49, const_str_plain__extract_m3u8_formats);
        if (tmp_called_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_23);

            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_source_url);
        tmp_tuple_element_9 = var_source_url;
        tmp_args_name_11 = PyTuple_New(4);
        Py_INCREF(tmp_tuple_element_9);
        PyTuple_SET_ITEM(tmp_args_name_11, 0, tmp_tuple_element_9);
        CHECK_OBJECT(par_clip_id);
        tmp_tuple_element_9 = par_clip_id;
        Py_INCREF(tmp_tuple_element_9);
        PyTuple_SET_ITEM(tmp_args_name_11, 1, tmp_tuple_element_9);
        tmp_tuple_element_9 = const_str_plain_mp4;
        Py_INCREF(tmp_tuple_element_9);
        PyTuple_SET_ITEM(tmp_args_name_11, 2, tmp_tuple_element_9);
        tmp_tuple_element_9 = const_str_plain_m3u8_native;
        Py_INCREF(tmp_tuple_element_9);
        PyTuple_SET_ITEM(tmp_args_name_11, 3, tmp_tuple_element_9);
        tmp_kw_name_12 = PyDict_Copy(const_dict_7e1d509d9f0adef67df7fa8dd2e83c7a);
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 130;
        tmp_args_element_name_13 = CALL_FUNCTION(tmp_called_name_24, tmp_args_name_11, tmp_kw_name_12);
        Py_DECREF(tmp_called_name_24);
        Py_DECREF(tmp_args_name_11);
        Py_DECREF(tmp_kw_name_12);
        if (tmp_args_element_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_23);

            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 130;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_23, tmp_args_element_name_13);
        Py_DECREF(tmp_called_name_23);
        Py_DECREF(tmp_args_element_name_13);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_6);
    }
    goto branch_end_14;
    branch_no_14:;
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        PyObject *tmp_tmp_condition_result_15_object_1;
        int tmp_truth_name_10;
        CHECK_OBJECT(var_mimetype);
        tmp_compexpr_left_10 = var_mimetype;
        tmp_compexpr_right_10 = const_str_digest_0d25277cb690620921ea9198bc861230;
        tmp_tmp_condition_result_15_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_10, tmp_compexpr_right_10);
        if (tmp_tmp_condition_result_15_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_tmp_condition_result_15_object_1);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_15_object_1);

            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_15 = tmp_truth_name_10 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_15_object_1);
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_called_name_25;
        PyObject *tmp_expression_name_50;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_called_name_26;
        PyObject *tmp_expression_name_51;
        PyObject *tmp_args_name_12;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kw_name_13;
        CHECK_OBJECT(var_formats);
        tmp_expression_name_50 = var_formats;
        tmp_called_name_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_50, const_str_plain_extend);
        if (tmp_called_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_51 = par_self;
        tmp_called_name_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_51, const_str_plain__extract_mpd_formats);
        if (tmp_called_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_25);

            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_source_url);
        tmp_tuple_element_10 = var_source_url;
        tmp_args_name_12 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_10);
        PyTuple_SET_ITEM(tmp_args_name_12, 0, tmp_tuple_element_10);
        CHECK_OBJECT(par_clip_id);
        tmp_tuple_element_10 = par_clip_id;
        Py_INCREF(tmp_tuple_element_10);
        PyTuple_SET_ITEM(tmp_args_name_12, 1, tmp_tuple_element_10);
        tmp_kw_name_13 = PyDict_Copy(const_dict_8fc357692d32e37b18c1bc5cb8987ab4);
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 134;
        tmp_args_element_name_14 = CALL_FUNCTION(tmp_called_name_26, tmp_args_name_12, tmp_kw_name_13);
        Py_DECREF(tmp_called_name_26);
        Py_DECREF(tmp_args_name_12);
        Py_DECREF(tmp_kw_name_13);
        if (tmp_args_element_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_25);

            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 134;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_25, tmp_args_element_name_14);
        Py_DECREF(tmp_called_name_25);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_7);
    }
    goto branch_end_15;
    branch_no_15:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_name_27;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_expression_name_52;
        PyObject *tmp_subscript_name_8;
        CHECK_OBJECT(var_fix_bitrate);
        tmp_called_name_27 = var_fix_bitrate;
        CHECK_OBJECT(var_source);
        tmp_expression_name_52 = var_source;
        tmp_subscript_name_8 = const_str_plain_bitrate;
        tmp_args_element_name_15 = LOOKUP_SUBSCRIPT(tmp_expression_name_52, tmp_subscript_name_8);
        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 137;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_27, tmp_args_element_name_15);
        Py_DECREF(tmp_args_element_name_15);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_tbr;
            var_tbr = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        CHECK_OBJECT(var_protocol);
        tmp_compexpr_left_11 = var_protocol;
        tmp_compexpr_right_11 = const_tuple_str_plain_rtmp_str_plain_rtmpe_tuple;
        tmp_res = PySequence_Contains(tmp_compexpr_right_11, tmp_compexpr_left_11);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_16 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_instance_24;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_re);

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

            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_called_instance_24 = tmp_mvar_value_9;
        tmp_args_element_name_16 = const_str_digest_364ac119eb692142977a501c336e93fe;
        CHECK_OBJECT(var_source_url);
        tmp_args_element_name_17 = var_source_url;
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 139;
        {
            PyObject *call_args[] = {tmp_args_element_name_16, tmp_args_element_name_17};
            tmp_assign_source_40 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_24, const_str_plain_search, call_args);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_mobj;
            var_mobj = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_operand_name_5;
        CHECK_OBJECT(var_mobj);
        tmp_operand_name_5 = var_mobj;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_17 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_instance_25;
        CHECK_OBJECT(var_mobj);
        tmp_called_instance_25 = var_mobj;
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 142;
        tmp_assign_source_41 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_25, const_str_plain_group, &PyTuple_GET_ITEM(const_tuple_str_plain_path_tuple, 0));

        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_path;
            var_path = tmp_assign_source_41;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_instance_26;
        CHECK_OBJECT(var_path);
        tmp_called_instance_26 = var_path;
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 143;
        tmp_assign_source_42 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_26, const_str_plain_rfind, &PyTuple_GET_ITEM(const_tuple_str_digest_bd4790b842a7b9dc1ef23664b00b2df8_tuple, 0));

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_mp4colon_index;
            var_mp4colon_index = tmp_assign_source_42;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_expression_name_53;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT(var_path);
        tmp_expression_name_53 = var_path;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT(var_mp4colon_index);
        tmp_stop_name_1 = var_mp4colon_index;
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_9 = MAKE_SLICEOBJ3(tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1);
        assert(!(tmp_subscript_name_9 == NULL));
        tmp_assign_source_43 = LOOKUP_SUBSCRIPT(tmp_expression_name_53, tmp_subscript_name_9);
        Py_DECREF(tmp_subscript_name_9);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_app;
            var_app = tmp_assign_source_43;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_expression_name_54;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        CHECK_OBJECT(var_path);
        tmp_expression_name_54 = var_path;
        CHECK_OBJECT(var_mp4colon_index);
        tmp_start_name_2 = var_mp4colon_index;
        tmp_stop_name_2 = Py_None;
        tmp_step_name_2 = Py_None;
        tmp_subscript_name_10 = MAKE_SLICEOBJ3(tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2);
        assert(!(tmp_subscript_name_10 == NULL));
        tmp_assign_source_44 = LOOKUP_SUBSCRIPT(tmp_expression_name_54, tmp_subscript_name_10);
        Py_DECREF(tmp_subscript_name_10);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_play_path;
            var_play_path = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_28;
        PyObject *tmp_expression_name_55;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_dict_key_39;
        PyObject *tmp_dict_value_39;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_called_instance_27;
        PyObject *tmp_dict_key_40;
        PyObject *tmp_dict_value_40;
        PyObject *tmp_dict_key_41;
        PyObject *tmp_dict_value_41;
        PyObject *tmp_dict_key_42;
        PyObject *tmp_dict_value_42;
        PyObject *tmp_dict_key_43;
        PyObject *tmp_dict_value_43;
        PyObject *tmp_dict_key_44;
        PyObject *tmp_dict_value_44;
        PyObject *tmp_dict_key_45;
        PyObject *tmp_dict_value_45;
        PyObject *tmp_dict_key_46;
        PyObject *tmp_dict_value_46;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        nuitka_bool tmp_condition_result_18;
        int tmp_truth_name_11;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        CHECK_OBJECT(var_formats);
        tmp_expression_name_55 = var_formats;
        tmp_called_name_28 = LOOKUP_ATTRIBUTE(tmp_expression_name_55, const_str_plain_append);
        if (tmp_called_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_dict_key_39 = const_str_plain_url;
        tmp_left_name_12 = const_str_digest_3f6240938cc8b4c3691344def7c310a8;
        CHECK_OBJECT(var_mobj);
        tmp_called_instance_27 = var_mobj;
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 147;
        tmp_tuple_element_11 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_27, const_str_plain_group, &PyTuple_GET_ITEM(const_tuple_str_plain_url_tuple, 0));

        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_28);

            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_right_name_12 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_12, 0, tmp_tuple_element_11);
        CHECK_OBJECT(var_app);
        tmp_tuple_element_11 = var_app;
        Py_INCREF(tmp_tuple_element_11);
        PyTuple_SET_ITEM(tmp_right_name_12, 1, tmp_tuple_element_11);
        tmp_dict_value_39 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_12, tmp_right_name_12);
        Py_DECREF(tmp_right_name_12);
        if (tmp_dict_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_28);

            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_name_18 = _PyDict_NewPresized( 8 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_18, tmp_dict_key_39, tmp_dict_value_39);
        Py_DECREF(tmp_dict_value_39);
        assert(!(tmp_res != 0));
        tmp_dict_key_40 = const_str_plain_app;
        CHECK_OBJECT(var_app);
        tmp_dict_value_40 = var_app;
        tmp_res = PyDict_SetItem(tmp_args_element_name_18, tmp_dict_key_40, tmp_dict_value_40);
        assert(!(tmp_res != 0));
        tmp_dict_key_41 = const_str_plain_play_path;
        CHECK_OBJECT(var_play_path);
        tmp_dict_value_41 = var_play_path;
        tmp_res = PyDict_SetItem(tmp_args_element_name_18, tmp_dict_key_41, tmp_dict_value_41);
        assert(!(tmp_res != 0));
        tmp_dict_key_42 = const_str_plain_player_url;
        tmp_dict_value_42 = const_str_digest_af1f8c7bac4f60b00eb008df65b1d964;
        tmp_res = PyDict_SetItem(tmp_args_element_name_18, tmp_dict_key_42, tmp_dict_value_42);
        assert(!(tmp_res != 0));
        tmp_dict_key_43 = const_str_plain_page_url;
        tmp_dict_value_43 = const_str_digest_fb44b9cbf0fd6414ae3eacd0bb8b1d45;
        tmp_res = PyDict_SetItem(tmp_args_element_name_18, tmp_dict_key_43, tmp_dict_value_43);
        assert(!(tmp_res != 0));
        tmp_dict_key_44 = const_str_plain_tbr;
        CHECK_OBJECT(var_tbr);
        tmp_dict_value_44 = var_tbr;
        tmp_res = PyDict_SetItem(tmp_args_element_name_18, tmp_dict_key_44, tmp_dict_value_44);
        assert(!(tmp_res != 0));
        tmp_dict_key_45 = const_str_plain_ext;
        tmp_dict_value_45 = const_str_plain_flv;
        tmp_res = PyDict_SetItem(tmp_args_element_name_18, tmp_dict_key_45, tmp_dict_value_45);
        assert(!(tmp_res != 0));
        tmp_dict_key_46 = const_str_plain_format_id;
        tmp_left_name_13 = const_str_digest_ef930f112242de2da543d9104286bf8d;
        CHECK_OBJECT(var_tbr);
        tmp_truth_name_11 = CHECK_IF_TRUE(var_tbr);
        if (tmp_truth_name_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_args_element_name_18);

            exception_lineno = 154;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_18 = tmp_truth_name_11 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_left_name_14 = const_str_digest_12418a5efd7fc5b743c4fe5f9703e6d9;
        CHECK_OBJECT(var_tbr);
        tmp_right_name_14 = var_tbr;
        tmp_right_name_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_14, tmp_right_name_14);
        if (tmp_right_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_args_element_name_18);

            exception_lineno = 154;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_right_name_13 = const_str_empty;
        Py_INCREF(tmp_right_name_13);
        condexpr_end_1:;
        tmp_dict_value_46 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_13, tmp_right_name_13);
        Py_DECREF(tmp_right_name_13);
        if (tmp_dict_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_28);
            Py_DECREF(tmp_args_element_name_18);

            exception_lineno = 154;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_18, tmp_dict_key_46, tmp_dict_value_46);
        Py_DECREF(tmp_dict_value_46);
        assert(!(tmp_res != 0));
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 146;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_28, tmp_args_element_name_18);
        Py_DECREF(tmp_called_name_28);
        Py_DECREF(tmp_args_element_name_18);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_8);
    }
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_called_name_29;
        PyObject *tmp_expression_name_56;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_dict_key_47;
        PyObject *tmp_dict_value_47;
        PyObject *tmp_dict_key_48;
        PyObject *tmp_dict_value_48;
        PyObject *tmp_dict_key_49;
        PyObject *tmp_dict_value_49;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_15;
        nuitka_bool tmp_condition_result_19;
        int tmp_truth_name_12;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        CHECK_OBJECT(var_formats);
        tmp_expression_name_56 = var_formats;
        tmp_called_name_29 = LOOKUP_ATTRIBUTE(tmp_expression_name_56, const_str_plain_append);
        if (tmp_called_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_dict_key_47 = const_str_plain_url;
        CHECK_OBJECT(var_source_url);
        tmp_dict_value_47 = var_source_url;
        tmp_args_element_name_19 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_19, tmp_dict_key_47, tmp_dict_value_47);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = const_str_plain_tbr;
        CHECK_OBJECT(var_tbr);
        tmp_dict_value_48 = var_tbr;
        tmp_res = PyDict_SetItem(tmp_args_element_name_19, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_49 = const_str_plain_format_id;
        tmp_left_name_15 = const_str_digest_39462f6896118f7f5e54116468251318;
        CHECK_OBJECT(var_tbr);
        tmp_truth_name_12 = CHECK_IF_TRUE(var_tbr);
        if (tmp_truth_name_12 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_29);
            Py_DECREF(tmp_args_element_name_19);

            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_19 = tmp_truth_name_12 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_left_name_16 = const_str_digest_12418a5efd7fc5b743c4fe5f9703e6d9;
        CHECK_OBJECT(var_tbr);
        tmp_right_name_16 = var_tbr;
        tmp_right_name_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_16, tmp_right_name_16);
        if (tmp_right_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_29);
            Py_DECREF(tmp_args_element_name_19);

            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_right_name_15 = const_str_empty;
        Py_INCREF(tmp_right_name_15);
        condexpr_end_2:;
        tmp_dict_value_49 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_15, tmp_right_name_15);
        Py_DECREF(tmp_right_name_15);
        if (tmp_dict_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_29);
            Py_DECREF(tmp_args_element_name_19);

            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_19, tmp_dict_key_49, tmp_dict_value_49);
        Py_DECREF(tmp_dict_value_49);
        assert(!(tmp_res != 0));
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 157;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_29, tmp_args_element_name_19);
        Py_DECREF(tmp_called_name_29);
        Py_DECREF(tmp_args_element_name_19);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_9);
    }
    branch_end_16:;
    branch_end_15:;
    branch_end_14:;
    branch_end_13:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 120;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_4;
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

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;

    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 101;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_5;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;

    branch_no_8:;
    {
        PyObject *tmp_called_instance_28;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_name_20;
        CHECK_OBJECT(par_self);
        tmp_called_instance_28 = par_self;
        CHECK_OBJECT(var_formats);
        tmp_args_element_name_20 = var_formats;
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 162;
        {
            PyObject *call_args[] = {tmp_args_element_name_20};
            tmp_call_result_10 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_28, const_str_plain__sort_formats, call_args);
        }

        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_dict_key_50;
        PyObject *tmp_dict_value_50;
        PyObject *tmp_called_name_30;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_called_instance_29;
        PyObject *tmp_dict_key_51;
        PyObject *tmp_dict_value_51;
        tmp_dict_key_50 = const_str_plain_duration;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_float_or_none);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_float_or_none);
        }

        if (tmp_mvar_value_10 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 33881 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_30 = tmp_mvar_value_10;
        CHECK_OBJECT(var_video);
        tmp_called_instance_29 = var_video;
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 165;
        tmp_args_element_name_21 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_29, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_duration_tuple, 0));

        if (tmp_args_element_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8f1a222a64e7c48eb21e644afeeda133->m_frame.f_lineno = 165;
        tmp_dict_value_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_30, tmp_args_element_name_21);
        Py_DECREF(tmp_args_element_name_21);
        if (tmp_dict_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_50, tmp_dict_value_50);
        Py_DECREF(tmp_dict_value_50);
        assert(!(tmp_res != 0));
        tmp_dict_key_51 = const_str_plain_formats;
        CHECK_OBJECT(var_formats);
        tmp_dict_value_51 = var_formats;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_51, tmp_dict_value_51);
        assert(!(tmp_res != 0));
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8f1a222a64e7c48eb21e644afeeda133);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8f1a222a64e7c48eb21e644afeeda133);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8f1a222a64e7c48eb21e644afeeda133);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8f1a222a64e7c48eb21e644afeeda133, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8f1a222a64e7c48eb21e644afeeda133->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8f1a222a64e7c48eb21e644afeeda133, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8f1a222a64e7c48eb21e644afeeda133,
        type_description_1,
        par_self,
        par_url,
        par_clip_id,
        var_client_location,
        var_video,
        var_formats,
        var_raw_ct,
        var_protocols,
        var_error,
        var_server_token,
        var_urls,
        var_protocol,
        var_variant,
        var_source_url,
        var_source_ids,
        var_client_id,
        var_sources,
        var_server_id,
        var_fix_bitrate,
        var_source_id,
        var_urls_sources,
        var_source,
        var_mimetype,
        var_tbr,
        var_mobj,
        var_path,
        var_mp4colon_index,
        var_app,
        var_play_path
    );


    // Release cached frame.
    if (frame_8f1a222a64e7c48eb21e644afeeda133 == cache_frame_8f1a222a64e7c48eb21e644afeeda133) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_8f1a222a64e7c48eb21e644afeeda133);
    }
    cache_frame_8f1a222a64e7c48eb21e644afeeda133 = NULL;

    assertFrameObject(frame_8f1a222a64e7c48eb21e644afeeda133);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_client_location);
    Py_DECREF(var_client_location);
    var_client_location = NULL;

    CHECK_OBJECT(var_video);
    Py_DECREF(var_video);
    var_video = NULL;

    CHECK_OBJECT(var_formats);
    Py_DECREF(var_formats);
    var_formats = NULL;

    Py_XDECREF(var_raw_ct);
    var_raw_ct = NULL;

    Py_XDECREF(var_protocols);
    var_protocols = NULL;

    Py_XDECREF(var_error);
    var_error = NULL;

    Py_XDECREF(var_server_token);
    var_server_token = NULL;

    Py_XDECREF(var_urls);
    var_urls = NULL;

    Py_XDECREF(var_protocol);
    var_protocol = NULL;

    Py_XDECREF(var_variant);
    var_variant = NULL;

    Py_XDECREF(var_source_url);
    var_source_url = NULL;

    Py_XDECREF(var_source_ids);
    var_source_ids = NULL;

    Py_XDECREF(var_client_id);
    var_client_id = NULL;

    Py_XDECREF(var_sources);
    var_sources = NULL;

    Py_XDECREF(var_server_id);
    var_server_id = NULL;

    Py_XDECREF(var_fix_bitrate);
    var_fix_bitrate = NULL;

    Py_XDECREF(var_source_id);
    var_source_id = NULL;

    Py_XDECREF(var_urls_sources);
    var_urls_sources = NULL;

    Py_XDECREF(var_source);
    var_source = NULL;

    Py_XDECREF(var_mimetype);
    var_mimetype = NULL;

    Py_XDECREF(var_tbr);
    var_tbr = NULL;

    Py_XDECREF(var_mobj);
    var_mobj = NULL;

    Py_XDECREF(var_path);
    var_path = NULL;

    Py_XDECREF(var_mp4colon_index);
    var_mp4colon_index = NULL;

    Py_XDECREF(var_app);
    var_app = NULL;

    Py_XDECREF(var_play_path);
    var_play_path = NULL;

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

    CHECK_OBJECT(var_client_location);
    Py_DECREF(var_client_location);
    var_client_location = NULL;

    Py_XDECREF(var_video);
    var_video = NULL;

    Py_XDECREF(var_formats);
    var_formats = NULL;

    Py_XDECREF(var_raw_ct);
    var_raw_ct = NULL;

    Py_XDECREF(var_protocols);
    var_protocols = NULL;

    Py_XDECREF(var_error);
    var_error = NULL;

    Py_XDECREF(var_server_token);
    var_server_token = NULL;

    Py_XDECREF(var_urls);
    var_urls = NULL;

    Py_XDECREF(var_protocol);
    var_protocol = NULL;

    Py_XDECREF(var_variant);
    var_variant = NULL;

    Py_XDECREF(var_source_url);
    var_source_url = NULL;

    Py_XDECREF(var_source_ids);
    var_source_ids = NULL;

    Py_XDECREF(var_client_id);
    var_client_id = NULL;

    Py_XDECREF(var_sources);
    var_sources = NULL;

    Py_XDECREF(var_server_id);
    var_server_id = NULL;

    Py_XDECREF(var_fix_bitrate);
    var_fix_bitrate = NULL;

    Py_XDECREF(var_source_id);
    var_source_id = NULL;

    Py_XDECREF(var_urls_sources);
    var_urls_sources = NULL;

    Py_XDECREF(var_source);
    var_source = NULL;

    Py_XDECREF(var_mimetype);
    var_mimetype = NULL;

    Py_XDECREF(var_tbr);
    var_tbr = NULL;

    Py_XDECREF(var_mobj);
    var_mobj = NULL;

    Py_XDECREF(var_path);
    var_path = NULL;

    Py_XDECREF(var_mp4colon_index);
    var_mp4colon_index = NULL;

    Py_XDECREF(var_app);
    var_app = NULL;

    Py_XDECREF(var_play_path);
    var_play_path = NULL;

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
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_clip_id);
    Py_DECREF(par_clip_id);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_clip_id);
    Py_DECREF(par_clip_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$prosiebensat1$$$function_1__extract_video_info$$$function_1_fix_bitrate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_bitrate = python_pars[0];
    struct Nuitka_FrameObject *frame_bb6716f0b0689653d937b885be7b0b09;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bb6716f0b0689653d937b885be7b0b09 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bb6716f0b0689653d937b885be7b0b09)) {
        Py_XDECREF(cache_frame_bb6716f0b0689653d937b885be7b0b09);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bb6716f0b0689653d937b885be7b0b09 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bb6716f0b0689653d937b885be7b0b09 = MAKE_FUNCTION_FRAME(codeobj_bb6716f0b0689653d937b885be7b0b09, module_youtube_dl$extractor$prosiebensat1, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bb6716f0b0689653d937b885be7b0b09->m_type_description == NULL);
    frame_bb6716f0b0689653d937b885be7b0b09 = cache_frame_bb6716f0b0689653d937b885be7b0b09;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bb6716f0b0689653d937b885be7b0b09);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bb6716f0b0689653d937b885be7b0b09) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_int_or_none);

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

            exception_lineno = 96;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_bitrate);
        tmp_args_element_name_1 = par_bitrate;
        frame_bb6716f0b0689653d937b885be7b0b09->m_frame.f_lineno = 96;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_bitrate;
            assert(old != NULL);
            par_bitrate = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(par_bitrate);
        tmp_operand_name_1 = par_bitrate;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "o";
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(par_bitrate);
        tmp_left_name_1 = par_bitrate;
        tmp_right_name_1 = const_int_pos_1000;
        tmp_compexpr_left_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_bitrate);
        tmp_left_name_2 = par_bitrate;
        tmp_right_name_2 = const_int_pos_1000;
        tmp_return_value = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_left_name_2, tmp_right_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_bitrate);
        tmp_return_value = par_bitrate;
        Py_INCREF(tmp_return_value);
        condexpr_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bb6716f0b0689653d937b885be7b0b09);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bb6716f0b0689653d937b885be7b0b09);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bb6716f0b0689653d937b885be7b0b09);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bb6716f0b0689653d937b885be7b0b09, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bb6716f0b0689653d937b885be7b0b09->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bb6716f0b0689653d937b885be7b0b09, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bb6716f0b0689653d937b885be7b0b09,
        type_description_1,
        par_bitrate
    );


    // Release cached frame.
    if (frame_bb6716f0b0689653d937b885be7b0b09 == cache_frame_bb6716f0b0689653d937b885be7b0b09) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_bb6716f0b0689653d937b885be7b0b09);
    }
    cache_frame_bb6716f0b0689653d937b885be7b0b09 = NULL;

    assertFrameObject(frame_bb6716f0b0689653d937b885be7b0b09);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_bitrate);
    Py_DECREF(par_bitrate);
    par_bitrate = NULL;

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

    CHECK_OBJECT(par_bitrate);
    Py_DECREF(par_bitrate);
    par_bitrate = NULL;

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


static PyObject *impl_youtube_dl$extractor$prosiebensat1$$$function_2__extract_clip(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *par_webpage = python_pars[2];
    PyObject *var_clip_id = NULL;
    PyObject *var_title = NULL;
    PyObject *var_info = NULL;
    PyObject *var_description = NULL;
    PyObject *var_thumbnail = NULL;
    PyObject *var_upload_date = NULL;
    PyObject *var_json_ld = NULL;
    struct Nuitka_FrameObject *frame_2dd892cd029ad58520637adade8ea6db;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2dd892cd029ad58520637adade8ea6db = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2dd892cd029ad58520637adade8ea6db)) {
        Py_XDECREF(cache_frame_2dd892cd029ad58520637adade8ea6db);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2dd892cd029ad58520637adade8ea6db == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2dd892cd029ad58520637adade8ea6db = MAKE_FUNCTION_FRAME(codeobj_2dd892cd029ad58520637adade8ea6db, module_youtube_dl$extractor$prosiebensat1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2dd892cd029ad58520637adade8ea6db->m_type_description == NULL);
    frame_2dd892cd029ad58520637adade8ea6db = cache_frame_2dd892cd029ad58520637adade8ea6db;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2dd892cd029ad58520637adade8ea6db);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2dd892cd029ad58520637adade8ea6db) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain__html_search_regex);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain__CLIPID_REGEXES);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 436;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_webpage);
        tmp_args_element_name_2 = par_webpage;
        tmp_args_element_name_3 = const_str_digest_24777bbf4e8d7a9e91f7405fa6098ef8;
        frame_2dd892cd029ad58520637adade8ea6db->m_frame.f_lineno = 435;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_clip_id == NULL);
        var_clip_id = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain__html_search_regex);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_4 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain__TITLE_REGEXES);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 438;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(3);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_webpage);
        tmp_tuple_element_1 = par_webpage;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_str_plain_title;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 2, tmp_tuple_element_1);
        tmp_kw_name_1 = PyDict_Copy(const_dict_6dc2f89fb2b035a2c0a0ed28a753f1c8);
        frame_2dd892cd029ad58520637adade8ea6db->m_frame.f_lineno = 437;
        tmp_or_left_value_1 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 439;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_webpage);
        tmp_args_element_name_4 = par_webpage;
        frame_2dd892cd029ad58520637adade8ea6db->m_frame.f_lineno = 439;
        {
            PyObject *call_args[] = {tmp_args_element_name_4};
            tmp_or_right_value_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain__og_search_title, call_args);
        }

        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_2 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_title == NULL);
        var_title = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_5 = par_url;
        CHECK_OBJECT(var_clip_id);
        tmp_args_element_name_6 = var_clip_id;
        frame_2dd892cd029ad58520637adade8ea6db->m_frame.f_lineno = 440;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, const_str_plain__extract_video_info, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_info == NULL);
        var_info = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_kw_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_5 = par_self;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, const_str_plain__html_search_regex);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_6 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, const_str_plain__DESCRIPTION_REGEXES);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 442;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New(3);
        PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_webpage);
        tmp_tuple_element_2 = par_webpage;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_2);
        tmp_tuple_element_2 = const_str_plain_description;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_2);
        tmp_kw_name_2 = PyDict_Copy(const_dict_6dc2f89fb2b035a2c0a0ed28a753f1c8);
        frame_2dd892cd029ad58520637adade8ea6db->m_frame.f_lineno = 441;
        tmp_assign_source_4 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_description == NULL);
        var_description = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_description);
        tmp_compexpr_left_1 = var_description;
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(par_webpage);
        tmp_args_element_name_7 = par_webpage;
        frame_2dd892cd029ad58520637adade8ea6db->m_frame.f_lineno = 444;
        {
            PyObject *call_args[] = {tmp_args_element_name_7};
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain__og_search_description, call_args);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_description;
            assert(old != NULL);
            var_description = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(par_webpage);
        tmp_args_element_name_8 = par_webpage;
        frame_2dd892cd029ad58520637adade8ea6db->m_frame.f_lineno = 445;
        {
            PyObject *call_args[] = {tmp_args_element_name_8};
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain__og_search_thumbnail, call_args);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_thumbnail == NULL);
        var_thumbnail = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_9;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_kw_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_unified_strdate);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_unified_strdate);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 34399 ], 37, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 446;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_7 = par_self;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, const_str_plain__html_search_meta);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = const_str_digest_05d5c2391d67c3b52773258d8aa5ff1b;
        tmp_args_name_3 = PyTuple_New(3);
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_args_name_3, 0, tmp_tuple_element_3);
        CHECK_OBJECT(par_webpage);
        tmp_tuple_element_3 = par_webpage;
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_args_name_3, 1, tmp_tuple_element_3);
        tmp_tuple_element_3 = const_str_digest_906ba8abdf863066592bcc2b9cddc9f3;
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_args_name_3, 2, tmp_tuple_element_3);
        tmp_kw_name_3 = PyDict_Copy(const_dict_6dc2f89fb2b035a2c0a0ed28a753f1c8);
        frame_2dd892cd029ad58520637adade8ea6db->m_frame.f_lineno = 447;
        tmp_or_left_value_2 = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_3, tmp_kw_name_3);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_name_3);
        Py_DECREF(tmp_kw_name_3);
        if (tmp_or_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 449;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        CHECK_OBJECT(par_self);
        tmp_expression_name_8 = par_self;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, const_str_plain__html_search_regex);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_9 = par_self;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, const_str_plain__UPLOAD_DATE_REGEXES);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 449;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_4 = PyTuple_New(3);
        PyTuple_SET_ITEM(tmp_args_name_4, 0, tmp_tuple_element_4);
        CHECK_OBJECT(par_webpage);
        tmp_tuple_element_4 = par_webpage;
        Py_INCREF(tmp_tuple_element_4);
        PyTuple_SET_ITEM(tmp_args_name_4, 1, tmp_tuple_element_4);
        tmp_tuple_element_4 = const_str_digest_906ba8abdf863066592bcc2b9cddc9f3;
        Py_INCREF(tmp_tuple_element_4);
        PyTuple_SET_ITEM(tmp_args_name_4, 2, tmp_tuple_element_4);
        tmp_kw_name_4 = PyDict_Copy(const_dict_6dc2f89fb2b035a2c0a0ed28a753f1c8);
        frame_2dd892cd029ad58520637adade8ea6db->m_frame.f_lineno = 449;
        tmp_or_right_value_2 = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_4, tmp_kw_name_4);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_name_4);
        Py_DECREF(tmp_kw_name_4);
        if (tmp_or_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_9 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_args_element_name_9 = tmp_or_left_value_2;
        or_end_2:;
        frame_2dd892cd029ad58520637adade8ea6db->m_frame.f_lineno = 446;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_9);
        Py_DECREF(tmp_args_element_name_9);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_upload_date == NULL);
        var_upload_date = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_args_name_5;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kw_name_5;
        CHECK_OBJECT(par_self);
        tmp_expression_name_10 = par_self;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, const_str_plain__search_json_ld);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_webpage);
        tmp_tuple_element_5 = par_webpage;
        tmp_args_name_5 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_5);
        PyTuple_SET_ITEM(tmp_args_name_5, 0, tmp_tuple_element_5);
        CHECK_OBJECT(var_clip_id);
        tmp_tuple_element_5 = var_clip_id;
        Py_INCREF(tmp_tuple_element_5);
        PyTuple_SET_ITEM(tmp_args_name_5, 1, tmp_tuple_element_5);
        tmp_kw_name_5 = DEEP_COPY(const_dict_66e618b11765c2c81e7386f0ee91d3ba);
        frame_2dd892cd029ad58520637adade8ea6db->m_frame.f_lineno = 452;
        tmp_assign_source_8 = CALL_FUNCTION(tmp_called_name_7, tmp_args_name_5, tmp_kw_name_5);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_name_5);
        Py_DECREF(tmp_kw_name_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_json_ld == NULL);
        var_json_ld = tmp_assign_source_8;
    }
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
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
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_merge_dicts);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_dicts);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35091 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 454;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_2;
        CHECK_OBJECT(var_info);
        tmp_args_element_name_10 = var_info;
        tmp_dict_key_1 = const_str_plain_id;
        CHECK_OBJECT(var_clip_id);
        tmp_dict_value_1 = var_clip_id;
        tmp_args_element_name_11 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_11, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_title;
        CHECK_OBJECT(var_title);
        tmp_dict_value_2 = var_title;
        tmp_res = PyDict_SetItem(tmp_args_element_name_11, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_description;
        CHECK_OBJECT(var_description);
        tmp_dict_value_3 = var_description;
        tmp_res = PyDict_SetItem(tmp_args_element_name_11, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_thumbnail;
        CHECK_OBJECT(var_thumbnail);
        tmp_dict_value_4 = var_thumbnail;
        tmp_res = PyDict_SetItem(tmp_args_element_name_11, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = const_str_plain_upload_date;
        CHECK_OBJECT(var_upload_date);
        tmp_dict_value_5 = var_upload_date;
        tmp_res = PyDict_SetItem(tmp_args_element_name_11, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(var_json_ld);
        tmp_args_element_name_12 = var_json_ld;
        frame_2dd892cd029ad58520637adade8ea6db->m_frame.f_lineno = 454;
        {
            PyObject *call_args[] = {tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_8, call_args);
        }

        Py_DECREF(tmp_args_element_name_11);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2dd892cd029ad58520637adade8ea6db);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2dd892cd029ad58520637adade8ea6db);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2dd892cd029ad58520637adade8ea6db);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2dd892cd029ad58520637adade8ea6db, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2dd892cd029ad58520637adade8ea6db->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2dd892cd029ad58520637adade8ea6db, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2dd892cd029ad58520637adade8ea6db,
        type_description_1,
        par_self,
        par_url,
        par_webpage,
        var_clip_id,
        var_title,
        var_info,
        var_description,
        var_thumbnail,
        var_upload_date,
        var_json_ld
    );


    // Release cached frame.
    if (frame_2dd892cd029ad58520637adade8ea6db == cache_frame_2dd892cd029ad58520637adade8ea6db) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_2dd892cd029ad58520637adade8ea6db);
    }
    cache_frame_2dd892cd029ad58520637adade8ea6db = NULL;

    assertFrameObject(frame_2dd892cd029ad58520637adade8ea6db);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_clip_id);
    Py_DECREF(var_clip_id);
    var_clip_id = NULL;

    CHECK_OBJECT(var_title);
    Py_DECREF(var_title);
    var_title = NULL;

    CHECK_OBJECT(var_info);
    Py_DECREF(var_info);
    var_info = NULL;

    CHECK_OBJECT(var_description);
    Py_DECREF(var_description);
    var_description = NULL;

    CHECK_OBJECT(var_thumbnail);
    Py_DECREF(var_thumbnail);
    var_thumbnail = NULL;

    CHECK_OBJECT(var_upload_date);
    Py_DECREF(var_upload_date);
    var_upload_date = NULL;

    CHECK_OBJECT(var_json_ld);
    Py_DECREF(var_json_ld);
    var_json_ld = NULL;

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

    Py_XDECREF(var_clip_id);
    var_clip_id = NULL;

    Py_XDECREF(var_title);
    var_title = NULL;

    Py_XDECREF(var_info);
    var_info = NULL;

    Py_XDECREF(var_description);
    var_description = NULL;

    Py_XDECREF(var_thumbnail);
    var_thumbnail = NULL;

    Py_XDECREF(var_upload_date);
    var_upload_date = NULL;

    Py_XDECREF(var_json_ld);
    var_json_ld = NULL;

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
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_webpage);
    Py_DECREF(par_webpage);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_webpage);
    Py_DECREF(par_webpage);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$prosiebensat1$$$function_3__extract_playlist(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *par_webpage = python_pars[2];
    PyObject *var_playlist_id = NULL;
    PyObject *var_playlist = NULL;
    PyObject *var_entries = NULL;
    PyObject *var_item = NULL;
    PyObject *var_clip_id = NULL;
    PyObject *var_info = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_5376f22957d329c37c408b83ff1821a5;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5376f22957d329c37c408b83ff1821a5 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5376f22957d329c37c408b83ff1821a5)) {
        Py_XDECREF(cache_frame_5376f22957d329c37c408b83ff1821a5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5376f22957d329c37c408b83ff1821a5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5376f22957d329c37c408b83ff1821a5 = MAKE_FUNCTION_FRAME(codeobj_5376f22957d329c37c408b83ff1821a5, module_youtube_dl$extractor$prosiebensat1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5376f22957d329c37c408b83ff1821a5->m_type_description == NULL);
    frame_5376f22957d329c37c408b83ff1821a5 = cache_frame_5376f22957d329c37c408b83ff1821a5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5376f22957d329c37c408b83ff1821a5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5376f22957d329c37c408b83ff1821a5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain__html_search_regex);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain__PLAYLIST_ID_REGEXES);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 464;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_webpage);
        tmp_args_element_name_2 = par_webpage;
        tmp_args_element_name_3 = const_str_digest_6641c74c9d0e94d405d6b0c5f960c346;
        frame_5376f22957d329c37c408b83ff1821a5->m_frame.f_lineno = 463;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_playlist_id == NULL);
        var_playlist_id = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain__parse_json);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_name_5 = const_str_digest_8ecd5635ae60cbca32066968bd278d0d;
        CHECK_OBJECT(par_webpage);
        tmp_args_element_name_6 = par_webpage;
        tmp_args_element_name_7 = const_str_plain_playlist;
        frame_5376f22957d329c37c408b83ff1821a5->m_frame.f_lineno = 466;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_1, const_str_plain__search_regex, call_args);
        }

        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 466;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_playlist_id);
        tmp_args_element_name_8 = var_playlist_id;
        frame_5376f22957d329c37c408b83ff1821a5->m_frame.f_lineno = 465;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_8};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_playlist == NULL);
        var_playlist = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyList_New(0);
        assert(var_entries == NULL);
        var_entries = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_playlist);
        tmp_iter_arg_1 = var_playlist;
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                exception_lineno = 471;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_item;
            var_item = tmp_assign_source_6;
            Py_INCREF(var_item);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_item);
        tmp_called_instance_2 = var_item;
        frame_5376f22957d329c37c408b83ff1821a5->m_frame.f_lineno = 472;
        tmp_or_left_value_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_id_tuple, 0));

        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 472;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        CHECK_OBJECT(var_item);
        tmp_called_instance_3 = var_item;
        frame_5376f22957d329c37c408b83ff1821a5->m_frame.f_lineno = 472;
        tmp_or_right_value_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_upc_tuple, 0));

        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_7 = tmp_or_left_value_1;
        or_end_1:;
        {
            PyObject *old = var_clip_id;
            var_clip_id = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(var_clip_id);
        tmp_operand_name_1 = var_clip_id;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "ooooooooo";
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_9 = par_url;
        CHECK_OBJECT(var_clip_id);
        tmp_args_element_name_10 = var_clip_id;
        frame_5376f22957d329c37c408b83ff1821a5->m_frame.f_lineno = 475;
        {
            PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10};
            tmp_assign_source_8 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_4, const_str_plain__extract_video_info, call_args);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_info;
            var_info = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_arg_element_3;
        PyObject *tmp_call_arg_element_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_called_instance_13;
        CHECK_OBJECT(var_info);
        tmp_expression_name_4 = var_info;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain_update);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_dict_key_1 = const_str_plain_id;
        CHECK_OBJECT(var_clip_id);
        tmp_dict_value_1 = var_clip_id;
        tmp_args_element_name_11 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_11, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_title;
        CHECK_OBJECT(var_item);
        tmp_called_instance_5 = var_item;
        frame_5376f22957d329c37c408b83ff1821a5->m_frame.f_lineno = 478;
        tmp_or_left_value_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_title_tuple, 0));

        if (tmp_or_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_11);

            exception_lineno = 478;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_11);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 478;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        CHECK_OBJECT(var_item);
        tmp_called_instance_7 = var_item;
        tmp_call_arg_element_1 = const_str_plain_teaser;
        tmp_call_arg_element_2 = PyDict_New();
        frame_5376f22957d329c37c408b83ff1821a5->m_frame.f_lineno = 478;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_called_instance_6 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_7, const_str_plain_get, call_args);
        }

        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_11);

            exception_lineno = 478;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_5376f22957d329c37c408b83ff1821a5->m_frame.f_lineno = 478;
        tmp_or_right_value_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_headline_tuple, 0));

        Py_DECREF(tmp_called_instance_6);
        if (tmp_or_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_11);

            exception_lineno = 478;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_dict_value_2 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_dict_value_2 = tmp_or_left_value_2;
        or_end_2:;
        tmp_res = PyDict_SetItem(tmp_args_element_name_11, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_description;
        CHECK_OBJECT(var_item);
        tmp_called_instance_9 = var_item;
        tmp_call_arg_element_3 = const_str_plain_teaser;
        tmp_call_arg_element_4 = PyDict_New();
        frame_5376f22957d329c37c408b83ff1821a5->m_frame.f_lineno = 479;
        {
            PyObject *call_args[] = {tmp_call_arg_element_3, tmp_call_arg_element_4};
            tmp_called_instance_8 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_9, const_str_plain_get, call_args);
        }

        Py_DECREF(tmp_call_arg_element_4);
        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_11);

            exception_lineno = 479;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_5376f22957d329c37c408b83ff1821a5->m_frame.f_lineno = 479;
        tmp_dict_value_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_8, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_description_tuple, 0));

        Py_DECREF(tmp_called_instance_8);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_11);

            exception_lineno = 479;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_11, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_thumbnail;
        CHECK_OBJECT(var_item);
        tmp_called_instance_10 = var_item;
        frame_5376f22957d329c37c408b83ff1821a5->m_frame.f_lineno = 480;
        tmp_dict_value_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_10, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_poster_tuple, 0));

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_11);

            exception_lineno = 480;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_11, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = const_str_plain_duration;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_float_or_none);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_float_or_none);
        }

        if (tmp_mvar_value_1 == NULL) {
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_11);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 33881 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 481;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_4 = tmp_mvar_value_1;
        CHECK_OBJECT(var_item);
        tmp_called_instance_11 = var_item;
        frame_5376f22957d329c37c408b83ff1821a5->m_frame.f_lineno = 481;
        tmp_args_element_name_12 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_11, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_duration_tuple, 0));

        if (tmp_args_element_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_11);

            exception_lineno = 481;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_5376f22957d329c37c408b83ff1821a5->m_frame.f_lineno = 481;
        tmp_dict_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_12);
        Py_DECREF(tmp_args_element_name_12);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_11);

            exception_lineno = 481;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_11, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = const_str_plain_series;
        CHECK_OBJECT(var_item);
        tmp_called_instance_12 = var_item;
        frame_5376f22957d329c37c408b83ff1821a5->m_frame.f_lineno = 482;
        tmp_dict_value_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_12, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_tvShowTitle_tuple, 0));

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_11);

            exception_lineno = 482;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_11, tmp_dict_key_6, tmp_dict_value_6);
        Py_DECREF(tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = const_str_plain_uploader;
        CHECK_OBJECT(var_item);
        tmp_called_instance_13 = var_item;
        frame_5376f22957d329c37c408b83ff1821a5->m_frame.f_lineno = 483;
        tmp_dict_value_7 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_13, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_broadcastPublisher_tuple, 0));

        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_11);

            exception_lineno = 483;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_11, tmp_dict_key_7, tmp_dict_value_7);
        Py_DECREF(tmp_dict_value_7);
        assert(!(tmp_res != 0));
        frame_5376f22957d329c37c408b83ff1821a5->m_frame.f_lineno = 476;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_11);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_11);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_14;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_13;
        CHECK_OBJECT(var_entries);
        tmp_called_instance_14 = var_entries;
        CHECK_OBJECT(var_info);
        tmp_args_element_name_13 = var_info;
        frame_5376f22957d329c37c408b83ff1821a5->m_frame.f_lineno = 485;
        {
            PyObject *call_args[] = {tmp_args_element_name_13};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_14, const_str_plain_append, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 471;
        type_description_1 = "ooooooooo";
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

    {
        PyObject *tmp_called_instance_15;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        CHECK_OBJECT(par_self);
        tmp_called_instance_15 = par_self;
        CHECK_OBJECT(var_entries);
        tmp_args_element_name_14 = var_entries;
        CHECK_OBJECT(var_playlist_id);
        tmp_args_element_name_15 = var_playlist_id;
        frame_5376f22957d329c37c408b83ff1821a5->m_frame.f_lineno = 486;
        {
            PyObject *call_args[] = {tmp_args_element_name_14, tmp_args_element_name_15};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(tmp_called_instance_15, const_str_plain_playlist_result, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5376f22957d329c37c408b83ff1821a5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5376f22957d329c37c408b83ff1821a5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5376f22957d329c37c408b83ff1821a5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5376f22957d329c37c408b83ff1821a5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5376f22957d329c37c408b83ff1821a5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5376f22957d329c37c408b83ff1821a5, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5376f22957d329c37c408b83ff1821a5,
        type_description_1,
        par_self,
        par_url,
        par_webpage,
        var_playlist_id,
        var_playlist,
        var_entries,
        var_item,
        var_clip_id,
        var_info
    );


    // Release cached frame.
    if (frame_5376f22957d329c37c408b83ff1821a5 == cache_frame_5376f22957d329c37c408b83ff1821a5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_5376f22957d329c37c408b83ff1821a5);
    }
    cache_frame_5376f22957d329c37c408b83ff1821a5 = NULL;

    assertFrameObject(frame_5376f22957d329c37c408b83ff1821a5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_playlist_id);
    Py_DECREF(var_playlist_id);
    var_playlist_id = NULL;

    CHECK_OBJECT(var_playlist);
    Py_DECREF(var_playlist);
    var_playlist = NULL;

    CHECK_OBJECT(var_entries);
    Py_DECREF(var_entries);
    var_entries = NULL;

    Py_XDECREF(var_item);
    var_item = NULL;

    Py_XDECREF(var_clip_id);
    var_clip_id = NULL;

    Py_XDECREF(var_info);
    var_info = NULL;

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

    Py_XDECREF(var_playlist_id);
    var_playlist_id = NULL;

    Py_XDECREF(var_playlist);
    var_playlist = NULL;

    Py_XDECREF(var_entries);
    var_entries = NULL;

    Py_XDECREF(var_item);
    var_item = NULL;

    Py_XDECREF(var_clip_id);
    var_clip_id = NULL;

    Py_XDECREF(var_info);
    var_info = NULL;

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
    Py_DECREF(par_url);
    CHECK_OBJECT(par_webpage);
    Py_DECREF(par_webpage);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_webpage);
    Py_DECREF(par_webpage);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$prosiebensat1$$$function_4__real_extract(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *var_video_id = NULL;
    PyObject *var_webpage = NULL;
    PyObject *var_page_type = NULL;
    struct Nuitka_FrameObject *frame_5199416edab4f75d205704471a45c402;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5199416edab4f75d205704471a45c402 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5199416edab4f75d205704471a45c402)) {
        Py_XDECREF(cache_frame_5199416edab4f75d205704471a45c402);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5199416edab4f75d205704471a45c402 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5199416edab4f75d205704471a45c402 = MAKE_FUNCTION_FRAME(codeobj_5199416edab4f75d205704471a45c402, module_youtube_dl$extractor$prosiebensat1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5199416edab4f75d205704471a45c402->m_type_description == NULL);
    frame_5199416edab4f75d205704471a45c402 = cache_frame_5199416edab4f75d205704471a45c402;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5199416edab4f75d205704471a45c402);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5199416edab4f75d205704471a45c402) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_1 = par_url;
        frame_5199416edab4f75d205704471a45c402->m_frame.f_lineno = 489;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain__match_id, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_video_id == NULL);
        var_video_id = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_2 = par_url;
        CHECK_OBJECT(var_video_id);
        tmp_args_element_name_3 = var_video_id;
        frame_5199416edab4f75d205704471a45c402->m_frame.f_lineno = 490;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, const_str_plain__download_webpage, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_webpage == NULL);
        var_webpage = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain__search_regex);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain__PAGE_TYPE_REGEXES);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 492;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(3);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_webpage);
        tmp_tuple_element_1 = var_webpage;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_str_digest_0afc73cee89d938db0f35dde4d1c0891;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 2, tmp_tuple_element_1);
        tmp_kw_name_1 = PyDict_Copy(const_dict_da49fb6ecc58e3f25f9caf4bceacd05f);
        frame_5199416edab4f75d205704471a45c402->m_frame.f_lineno = 491;
        tmp_called_instance_3 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_5199416edab4f75d205704471a45c402->m_frame.f_lineno = 491;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_lower);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_page_type == NULL);
        var_page_type = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_page_type);
        tmp_compexpr_left_1 = var_page_type;
        tmp_compexpr_right_1 = const_str_plain_clip;
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 494;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_4 = par_url;
        CHECK_OBJECT(var_webpage);
        tmp_args_element_name_5 = var_webpage;
        frame_5199416edab4f75d205704471a45c402->m_frame.f_lineno = 495;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(tmp_called_instance_4, const_str_plain__extract_clip, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_page_type);
        tmp_compexpr_left_2 = var_page_type;
        tmp_compexpr_right_2 = const_str_plain_playlist;
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 496;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_6 = par_url;
        CHECK_OBJECT(var_webpage);
        tmp_args_element_name_7 = var_webpage;
        frame_5199416edab4f75d205704471a45c402->m_frame.f_lineno = 497;
        {
            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(tmp_called_instance_5, const_str_plain__extract_playlist, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_ExtractorError);

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

            exception_lineno = 499;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        tmp_left_name_1 = const_str_digest_9286097557b9fa4516501d50d1e54276;
        CHECK_OBJECT(var_page_type);
        tmp_right_name_1 = var_page_type;
        tmp_tuple_element_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_2);
        tmp_kw_name_2 = PyDict_Copy(const_dict_5a4b43d9442068c8ed68fb42270f3fd3);
        frame_5199416edab4f75d205704471a45c402->m_frame.f_lineno = 499;
        tmp_raise_type_1 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 499;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5199416edab4f75d205704471a45c402);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5199416edab4f75d205704471a45c402);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5199416edab4f75d205704471a45c402);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5199416edab4f75d205704471a45c402, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5199416edab4f75d205704471a45c402->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5199416edab4f75d205704471a45c402, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5199416edab4f75d205704471a45c402,
        type_description_1,
        par_self,
        par_url,
        var_video_id,
        var_webpage,
        var_page_type
    );


    // Release cached frame.
    if (frame_5199416edab4f75d205704471a45c402 == cache_frame_5199416edab4f75d205704471a45c402) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_5199416edab4f75d205704471a45c402);
    }
    cache_frame_5199416edab4f75d205704471a45c402 = NULL;

    assertFrameObject(frame_5199416edab4f75d205704471a45c402);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_video_id);
    Py_DECREF(var_video_id);
    var_video_id = NULL;

    CHECK_OBJECT(var_webpage);
    Py_DECREF(var_webpage);
    var_webpage = NULL;

    CHECK_OBJECT(var_page_type);
    Py_DECREF(var_page_type);
    var_page_type = NULL;

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

    Py_XDECREF(var_video_id);
    var_video_id = NULL;

    Py_XDECREF(var_webpage);
    var_webpage = NULL;

    Py_XDECREF(var_page_type);
    var_page_type = NULL;

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



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$prosiebensat1$$$function_1__extract_video_info() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$prosiebensat1$$$function_1__extract_video_info,
        const_str_plain__extract_video_info,
#if PYTHON_VERSION >= 300
        const_str_digest_917e62b1990afff5d738e8d5f301e9fd,
#endif
        codeobj_8f1a222a64e7c48eb21e644afeeda133,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$prosiebensat1,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$prosiebensat1$$$function_1__extract_video_info$$$function_1_fix_bitrate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$prosiebensat1$$$function_1__extract_video_info$$$function_1_fix_bitrate,
        const_str_plain_fix_bitrate,
#if PYTHON_VERSION >= 300
        const_str_digest_e2310f03933c2553e9c38b370efa97ef,
#endif
        codeobj_bb6716f0b0689653d937b885be7b0b09,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$prosiebensat1,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$prosiebensat1$$$function_2__extract_clip() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$prosiebensat1$$$function_2__extract_clip,
        const_str_plain__extract_clip,
#if PYTHON_VERSION >= 300
        const_str_digest_2362ae2fdbabce5edecf7c07b364d2b0,
#endif
        codeobj_2dd892cd029ad58520637adade8ea6db,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$prosiebensat1,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$prosiebensat1$$$function_3__extract_playlist() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$prosiebensat1$$$function_3__extract_playlist,
        const_str_plain__extract_playlist,
#if PYTHON_VERSION >= 300
        const_str_digest_6891bdcee387159920e92e856691620c,
#endif
        codeobj_5376f22957d329c37c408b83ff1821a5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$prosiebensat1,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$prosiebensat1$$$function_4__real_extract() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$prosiebensat1$$$function_4__real_extract,
        const_str_plain__real_extract,
#if PYTHON_VERSION >= 300
        const_str_digest_94b305e7be334928666b15f5f3061367,
#endif
        codeobj_5199416edab4f75d205704471a45c402,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$prosiebensat1,
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

function_impl_code functable_youtube_dl$extractor$prosiebensat1[] = {
    impl_youtube_dl$extractor$prosiebensat1$$$function_1__extract_video_info$$$function_1_fix_bitrate,
    impl_youtube_dl$extractor$prosiebensat1$$$function_1__extract_video_info,
    impl_youtube_dl$extractor$prosiebensat1$$$function_2__extract_clip,
    impl_youtube_dl$extractor$prosiebensat1$$$function_3__extract_playlist,
    impl_youtube_dl$extractor$prosiebensat1$$$function_4__real_extract,
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

    function_impl_code *current = functable_youtube_dl$extractor$prosiebensat1;
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

    if (offset > sizeof(functable_youtube_dl$extractor$prosiebensat1) || offset < 0) {
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
        functable_youtube_dl$extractor$prosiebensat1[offset],
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
        module_youtube_dl$extractor$prosiebensat1,
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
PyObject *modulecode_youtube_dl$extractor$prosiebensat1(PyObject *module) {
    module_youtube_dl$extractor$prosiebensat1 = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_youtube_dl$extractor$prosiebensat1;
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
    PRINT_STRING("youtube_dl.extractor.prosiebensat1: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("youtube_dl.extractor.prosiebensat1: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("youtube_dl.extractor.prosiebensat1: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in inityoutube_dl$extractor$prosiebensat1\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_youtube_dl$extractor$prosiebensat1 = MODULE_DICT(module_youtube_dl$extractor$prosiebensat1);

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
        moduledict_youtube_dl$extractor$prosiebensat1,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$extractor$prosiebensat1,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$extractor$prosiebensat1,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$extractor$prosiebensat1,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$extractor$prosiebensat1,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_youtube_dl$extractor$prosiebensat1);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_9a605f1538905c44bc0a6f767aa0ddc6;
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
    PyObject *locals_youtube_dl$extractor$prosiebensat1_19 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_56d15be450f070775cb471c0cd573161_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_56d15be450f070775cb471c0cd573161_2 = NULL;
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
    PyObject *locals_youtube_dl$extractor$prosiebensat1_170 = NULL;
    struct Nuitka_FrameObject *frame_7c953c9d62cf727879612ba10d65fdd6_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_7c953c9d62cf727879612ba10d65fdd6_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_5af98eb3c10d1d56e88dcea29b84c50f;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_9a605f1538905c44bc0a6f767aa0ddc6 = MAKE_MODULE_FRAME(codeobj_9a605f1538905c44bc0a6f767aa0ddc6, module_youtube_dl$extractor$prosiebensat1);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_9a605f1538905c44bc0a6f767aa0ddc6);
    assert(Py_REFCNT(frame_9a605f1538905c44bc0a6f767aa0ddc6) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_5af98eb3c10d1d56e88dcea29b84c50f;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        frame_9a605f1538905c44bc0a6f767aa0ddc6->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
           tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_youtube_dl$extractor$prosiebensat1,
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
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_re;
        tmp_globals_name_1 = (PyObject *)moduledict_youtube_dl$extractor$prosiebensat1;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_9a605f1538905c44bc0a6f767aa0ddc6->m_frame.f_lineno = 4;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_hashlib;
        tmp_globals_name_2 = (PyObject *)moduledict_youtube_dl$extractor$prosiebensat1;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_sha1_tuple;
        tmp_level_name_2 = const_int_0;
        frame_9a605f1538905c44bc0a6f767aa0ddc6->m_frame.f_lineno = 6;
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
                (PyObject *)moduledict_youtube_dl$extractor$prosiebensat1,
                const_str_plain_sha1,
                const_int_0
            );
        } else {
           tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_sha1);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_sha1, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_common;
        tmp_globals_name_3 = (PyObject *)moduledict_youtube_dl$extractor$prosiebensat1;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_InfoExtractor_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_9a605f1538905c44bc0a6f767aa0ddc6->m_frame.f_lineno = 7;
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
                (PyObject *)moduledict_youtube_dl$extractor$prosiebensat1,
                const_str_plain_InfoExtractor,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_InfoExtractor);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_InfoExtractor, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_compat;
        tmp_globals_name_4 = (PyObject *)moduledict_youtube_dl$extractor$prosiebensat1;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_compat_str_tuple;
        tmp_level_name_4 = const_int_pos_2;
        frame_9a605f1538905c44bc0a6f767aa0ddc6->m_frame.f_lineno = 8;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_youtube_dl$extractor$prosiebensat1,
                const_str_plain_compat_str,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_compat_str);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_compat_str, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_utils;
        tmp_globals_name_5 = (PyObject *)moduledict_youtube_dl$extractor$prosiebensat1;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_f87814e7cee8d67cfe43c90586c6928c_tuple;
        tmp_level_name_5 = const_int_pos_2;
        frame_9a605f1538905c44bc0a6f767aa0ddc6->m_frame.f_lineno = 9;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_youtube_dl$extractor$prosiebensat1,
                const_str_plain_ExtractorError,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_ExtractorError);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_ExtractorError, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_youtube_dl$extractor$prosiebensat1,
                const_str_plain_determine_ext,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_determine_ext);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_determine_ext, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_youtube_dl$extractor$prosiebensat1,
                const_str_plain_float_or_none,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_float_or_none);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_float_or_none, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_youtube_dl$extractor$prosiebensat1,
                const_str_plain_int_or_none,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_int_or_none);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_int_or_none, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_youtube_dl$extractor$prosiebensat1,
                const_str_plain_merge_dicts,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_merge_dicts);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_merge_dicts, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_youtube_dl$extractor$prosiebensat1,
                const_str_plain_unified_strdate,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain_unified_strdate);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_unified_strdate, tmp_assign_source_15);
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_InfoExtractor);

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

            exception_lineno = 19;

            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_assign_source_16 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_16, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_17 = impl___internal__$$$function_4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
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


            exception_lineno = 19;

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


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

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


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

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
        tmp_assign_source_19 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_19;
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


            exception_lineno = 19;

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


        exception_lineno = 19;

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
        PyObject *tmp_assign_source_20;
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


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = const_str_plain_ProSiebenSat1BaseIE;
        tmp_args_name_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_9a605f1538905c44bc0a6f767aa0ddc6->m_frame.f_lineno = 19;
        tmp_assign_source_20 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_20;
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


            exception_lineno = 19;

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


            exception_lineno = 19;

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

            exception_lineno = 19;

            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_3);
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 19;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_21;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_youtube_dl$extractor$prosiebensat1_19 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_5f48a16386a64af8c44a87d56c5c50bf;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_19, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_ProSiebenSat1BaseIE;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_19, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_56d15be450f070775cb471c0cd573161_2)) {
            Py_XDECREF(cache_frame_56d15be450f070775cb471c0cd573161_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_56d15be450f070775cb471c0cd573161_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_56d15be450f070775cb471c0cd573161_2 = MAKE_FUNCTION_FRAME(codeobj_56d15be450f070775cb471c0cd573161, module_youtube_dl$extractor$prosiebensat1, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_56d15be450f070775cb471c0cd573161_2->m_type_description == NULL);
        frame_56d15be450f070775cb471c0cd573161_2 = cache_frame_56d15be450f070775cb471c0cd573161_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_56d15be450f070775cb471c0cd573161_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_56d15be450f070775cb471c0cd573161_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = Py_False;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_19, const_str_plain__GEO_BYPASS, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_19, const_str_plain__ACCESS_ID, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = const_str_digest_7475f5bb3623974388fe4e26fdce3c34;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_19, const_str_plain__SUPPORTED_PROTOCOLS, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = const_str_digest_870532ceecd5e76c2d84587ba7f23c57;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_19, const_str_plain__V4_BASE_URL, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$prosiebensat1$$$function_1__extract_video_info();



        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_19, const_str_plain__extract_video_info, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_56d15be450f070775cb471c0cd573161_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_56d15be450f070775cb471c0cd573161_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_56d15be450f070775cb471c0cd573161_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_56d15be450f070775cb471c0cd573161_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_56d15be450f070775cb471c0cd573161_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_56d15be450f070775cb471c0cd573161_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if (frame_56d15be450f070775cb471c0cd573161_2 == cache_frame_56d15be450f070775cb471c0cd573161_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(frame_56d15be450f070775cb471c0cd573161_2);
        }
        cache_frame_56d15be450f070775cb471c0cd573161_2 = NULL;

        assertFrameObject(frame_56d15be450f070775cb471c0cd573161_2);

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


                exception_lineno = 19;

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
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_19, const_str_plain___orig_bases__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_ProSiebenSat1BaseIE;
            tmp_args_name_2 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_youtube_dl$extractor$prosiebensat1_19;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_9a605f1538905c44bc0a6f767aa0ddc6->m_frame.f_lineno = 19;
            tmp_assign_source_23 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_23;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_22 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_22);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_youtube_dl$extractor$prosiebensat1_19);
        locals_youtube_dl$extractor$prosiebensat1_19 = NULL;
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

        Py_DECREF(locals_youtube_dl$extractor$prosiebensat1_19);
        locals_youtube_dl$extractor$prosiebensat1_19 = NULL;
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
        exception_lineno = 19;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_ProSiebenSat1BaseIE, tmp_assign_source_22);
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

    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_ProSiebenSat1BaseIE);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProSiebenSat1BaseIE);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 47354 ], 41, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;

            goto try_except_handler_5;
        }

        tmp_tuple_element_5 = tmp_mvar_value_4;
        tmp_assign_source_24 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_5);
        PyTuple_SET_ITEM(tmp_assign_source_24, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_25 = impl___internal__$$$function_4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_4, tmp_key_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_5;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = const_str_plain_metaclass;
        tmp_metaclass_name_2 = DICT_GET_ITEM(tmp_dict_name_5, tmp_key_name_5);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_5;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_5;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_name_6 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_6, tmp_subscript_name_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_5;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_5;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_2);
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_27 = SELECT_METACLASS(tmp_metaclass_name_2, tmp_bases_name_2);
        Py_DECREF(tmp_metaclass_name_2);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_27;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_name_6;
        tmp_key_name_6 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_6, tmp_key_name_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_5;
        }
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 170;

        goto try_except_handler_5;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_name_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_7 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr(tmp_expression_name_7, const_str_plain___prepare__);
        tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kw_name_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_8 = tmp_class_creation_2__metaclass;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, const_str_plain___prepare__);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_5;
        }
        tmp_tuple_element_6 = const_str_plain_ProSiebenSat1IE;
        tmp_args_name_3 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_6);
        PyTuple_SET_ITEM(tmp_args_name_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        Py_INCREF(tmp_tuple_element_6);
        PyTuple_SET_ITEM(tmp_args_name_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
        frame_9a605f1538905c44bc0a6f767aa0ddc6->m_frame.f_lineno = 170;
        tmp_assign_source_28 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_3);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_28;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_expression_name_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_name_9 = tmp_class_creation_2__prepared;
        tmp_res = PyObject_HasAttr(tmp_expression_name_9, const_str_plain___getitem__);
        tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_5;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_type_arg_4;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = const_str_plain___name__;
        tmp_getattr_default_2 = const_str_angle_metaclass;
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_5;
        }
        tmp_right_name_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_type_arg_4 = tmp_class_creation_2__prepared;
        tmp_expression_name_10 = BUILTIN_TYPE1(tmp_type_arg_4);
        assert(!(tmp_expression_name_10 == NULL));
        tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, const_str_plain___name__);
        Py_DECREF(tmp_expression_name_10);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_right_name_2);

            exception_lineno = 170;

            goto try_except_handler_5;
        }
        PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_7);
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 170;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_29;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_youtube_dl$extractor$prosiebensat1_170 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_5f48a16386a64af8c44a87d56c5c50bf;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_170, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_plain_ProSiebenSat1IE;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_170, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_7;
        }
        if (isFrameUnusable(cache_frame_7c953c9d62cf727879612ba10d65fdd6_3)) {
            Py_XDECREF(cache_frame_7c953c9d62cf727879612ba10d65fdd6_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_7c953c9d62cf727879612ba10d65fdd6_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_7c953c9d62cf727879612ba10d65fdd6_3 = MAKE_FUNCTION_FRAME(codeobj_7c953c9d62cf727879612ba10d65fdd6, module_youtube_dl$extractor$prosiebensat1, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_7c953c9d62cf727879612ba10d65fdd6_3->m_type_description == NULL);
        frame_7c953c9d62cf727879612ba10d65fdd6_3 = cache_frame_7c953c9d62cf727879612ba10d65fdd6_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_7c953c9d62cf727879612ba10d65fdd6_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_7c953c9d62cf727879612ba10d65fdd6_3) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = const_str_plain_prosiebensat1;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_170, const_str_plain_IE_NAME, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = const_str_digest_9cbe2ba06a14b776a7b275dab79a2815;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_170, const_str_plain_IE_DESC, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = const_str_digest_dd7d99ef5e9f6be344c58af9db978b78;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_170, const_str_plain__VALID_URL, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = DEEP_COPY(const_list_d79df2e347e18e39f8ac33cc41f0af20_list);
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_170, const_str_plain__TESTS, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = const_str_plain_prosieben;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_170, const_str_plain__TOKEN, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = const_str_digest_4f5cecf1c676ee43dc031eff507f2928;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_170, const_str_plain__SALT, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = const_str_digest_98a9a21597c8f0cec371a3b10276ad0a;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_170, const_str_plain__CLIENT_NAME, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = const_str_digest_8712af1a7881c95c91d0cd8f73468623;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_170, const_str_plain__ACCESS_ID, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = const_str_plain_Eeyeey9oquahthainoofashoyoikosag;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_170, const_str_plain__ENCRYPTION_KEY, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = const_str_plain_Aeluchoc6aevechuipiexeeboowedaok;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_170, const_str_plain__IV, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = LIST_COPY(const_list_b3dc48e11efd815b5b774146fe684279_list);
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_170, const_str_plain__CLIPID_REGEXES, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = LIST_COPY(const_list_b86d176542f53e13deab2343c1f0780d_list);
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_170, const_str_plain__TITLE_REGEXES, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = LIST_COPY(const_list_d4f7390fc86f7b75813d526e7a5fd169_list);
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_170, const_str_plain__DESCRIPTION_REGEXES, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = LIST_COPY(const_list_52927430588523a114b63c024530019d_list);
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_170, const_str_plain__UPLOAD_DATE_REGEXES, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = LIST_COPY(const_list_584ad8fcc3e032578d34b9fd0b50ef42_list);
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_170, const_str_plain__PAGE_TYPE_REGEXES, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = LIST_COPY(const_list_ec3cdda834f5c939ef6e61338827dd0a_list);
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_170, const_str_plain__PLAYLIST_ID_REGEXES, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = LIST_COPY(const_list_str_digest_8b52d5900c3a812e90f0f45914134232_list);
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_170, const_str_plain__PLAYLIST_CLIP_REGEXES, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$prosiebensat1$$$function_2__extract_clip();



        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_170, const_str_plain__extract_clip, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$prosiebensat1$$$function_3__extract_playlist();



        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_170, const_str_plain__extract_playlist, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$prosiebensat1$$$function_4__real_extract();



        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_170, const_str_plain__real_extract, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_7c953c9d62cf727879612ba10d65fdd6_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_7c953c9d62cf727879612ba10d65fdd6_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7c953c9d62cf727879612ba10d65fdd6_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7c953c9d62cf727879612ba10d65fdd6_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7c953c9d62cf727879612ba10d65fdd6_3, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7c953c9d62cf727879612ba10d65fdd6_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if (frame_7c953c9d62cf727879612ba10d65fdd6_3 == cache_frame_7c953c9d62cf727879612ba10d65fdd6_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(frame_7c953c9d62cf727879612ba10d65fdd6_3);
        }
        cache_frame_7c953c9d62cf727879612ba10d65fdd6_3 = NULL;

        assertFrameObject(frame_7c953c9d62cf727879612ba10d65fdd6_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_compexpr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_compexpr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$prosiebensat1_170, const_str_plain___orig_bases__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_7;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = const_str_plain_ProSiebenSat1IE;
            tmp_args_name_4 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_8);
            PyTuple_SET_ITEM(tmp_args_name_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            Py_INCREF(tmp_tuple_element_8);
            PyTuple_SET_ITEM(tmp_args_name_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_youtube_dl$extractor$prosiebensat1_170;
            Py_INCREF(tmp_tuple_element_8);
            PyTuple_SET_ITEM(tmp_args_name_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_9a605f1538905c44bc0a6f767aa0ddc6->m_frame.f_lineno = 170;
            tmp_assign_source_31 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4);
            Py_DECREF(tmp_args_name_4);
            if (tmp_assign_source_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_31;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_30 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_30);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_youtube_dl$extractor$prosiebensat1_170);
        locals_youtube_dl$extractor$prosiebensat1_170 = NULL;
        goto try_return_handler_6;
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

        Py_DECREF(locals_youtube_dl$extractor$prosiebensat1_170);
        locals_youtube_dl$extractor$prosiebensat1_170 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;

        goto outline_result_2;
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

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 170;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$prosiebensat1, (Nuitka_StringObject *)const_str_plain_ProSiebenSat1IE, tmp_assign_source_30);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;

    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9a605f1538905c44bc0a6f767aa0ddc6);
#endif
    popFrameStack();

    assertFrameObject(frame_9a605f1538905c44bc0a6f767aa0ddc6);

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9a605f1538905c44bc0a6f767aa0ddc6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9a605f1538905c44bc0a6f767aa0ddc6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9a605f1538905c44bc0a6f767aa0ddc6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9a605f1538905c44bc0a6f767aa0ddc6, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;

    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;

    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;

    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;


    return module_youtube_dl$extractor$prosiebensat1;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
