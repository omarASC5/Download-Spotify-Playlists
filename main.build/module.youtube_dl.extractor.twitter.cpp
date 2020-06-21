/* Generated code for Python module 'youtube_dl.extractor.twitter'
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

/* The "_module_youtube_dl$extractor$twitter" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_youtube_dl$extractor$twitter;
PyDictObject *moduledict_youtube_dl$extractor$twitter;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_headers;
extern PyObject *const_str_plain_medium;
static PyObject *const_str_digest_949d10b413f5f58ab139ee1201ed5910;
static PyObject *const_str_plain_media_key;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_a_format;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_digest_3083a01789ea0f43dcc0ed119641327c;
static PyObject *const_dict_9f59a5753762d057c60e58a3e5b02c01;
static PyObject *const_str_digest_6473ed893522b15ece5f7e069544b640;
static PyObject *const_str_digest_2d2171fcdb2d5e03108a1cef1e36f97f;
static PyObject *const_dict_024652a1be9d621d629ebe6c437ea5a4;
extern PyObject *const_str_plain_m3u8_id;
extern PyObject *const_dict_7e1d509d9f0adef67df7fa8dd2e83c7a;
extern PyObject *const_str_plain_media;
static PyObject *const_str_digest_040b492e76392dd52ab34a7efaeab884;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_video_id;
static PyObject *const_str_digest_a53a8368c3aed979cfa894f9b201671c;
extern PyObject *const_str_digest_f763ddcff033a47786508ef6a58d4f3b;
static PyObject *const_str_digest_67a6a64c32c3530cbe0ac9ec367462f4;
static PyObject *const_str_plain_get_binding_value;
extern PyObject *const_str_plain_duration;
extern PyObject *const_str_plain_utils;
static PyObject *const_str_plain_original_info;
extern PyObject *const_str_plain__extract_common_format_info;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_digest_07901c6f35b485abdc6d27175d3023e4;
static PyObject *const_str_plain_cards_platform;
static PyObject *const_tuple_b5bdfa05fc28b024803f3d7013eed6a6_tuple;
static PyObject *const_str_digest_deb2c0c379103d549692e44af91775ad;
extern PyObject *const_str_plain__VALID_URL;
static PyObject *const_tuple_1da931cdcb80031a0665d82a978028a6_tuple;
static PyObject *const_str_plain_thumbnail_h;
static PyObject *const_dict_0279a3f0bf0fb61d38349787f7e671bb;
extern PyObject *const_str_plain__download_webpage;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_try_get;
static PyObject *const_str_plain_guest_token;
static PyObject *const_tuple_str_plain_retweet_count_tuple;
extern PyObject *const_str_plain_name;
static PyObject *const_str_plain__search_dimensions_in_video_url;
extern PyObject *const_str_plain_uploader_url;
extern PyObject *const_str_plain__parse_json;
extern PyObject *const_str_plain_broadcast_id;
extern PyObject *const_tuple_str_plain_url_tuple;
static PyObject *const_str_plain_player_stream_url;
extern PyObject *const_str_plain_ids;
static PyObject *const_str_digest_4dbaa7c7706ebc9f3929bfbd8e3be477;
extern PyObject *const_str_plain_expected;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_twitter;
extern PyObject *const_str_plain_raise_geo_restricted;
extern PyObject *const_str_plain__real_extract;
extern PyObject *const_str_plain_formats;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_noRedirectPlaybackUrl_tuple;
extern PyObject *const_tuple_str_plain_media_url_tuple;
extern PyObject *const_str_plain_code;
extern PyObject *const_str_plain_update_url_query;
static PyObject *const_str_plain__x_large;
extern PyObject *const_str_plain_location;
static PyObject *const_str_plain_TwitterBaseIE;
static PyObject *const_str_plain_card;
extern PyObject *const_str_plain_type;
static PyObject *const_tuple_str_plain_favorite_count_tuple;
extern PyObject *const_str_plain___cached__;
static PyObject *const_dict_d0b45134cafeef218fc9b6d0b35ce3b8;
extern PyObject *const_str_plain_cause;
static PyObject *const_str_plain_binding_values;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_attrib;
extern PyObject *const_str_plain_state;
static PyObject *const_str_digest_1dc4adb5f62d0b430daec327c01dca1a;
extern PyObject *const_str_digest_fcf040720b88d60da4ce975010c44a3a;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_plain_1PXEdBZWpGwKe;
static PyObject *const_tuple_str_plain_card_tuple;
extern PyObject *const_str_plain_url;
static PyObject *const_str_digest_d9ce3eefff757b367a64995fc318b12b;
extern PyObject *const_str_plain_ExtractorError;
static PyObject *const_str_plain_hashtags;
extern PyObject *const_str_plain_http;
extern PyObject *const_str_plain_like_count;
extern PyObject *const_str_plain_common;
static PyObject *const_str_plain__large;
extern PyObject *const_str_plain_age_limit;
static PyObject *const_str_digest_02775653e132a1b81451b2bba71611c6;
static PyObject *const_str_digest_788ca6732f250c24f74a171981e6cd6a;
static PyObject *const_str_plain_bit_rate;
extern PyObject *const_dict_f95321192b139e241e1ec13397bf5b8f;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_h;
static PyObject *const_str_digest_92ff0b7d187af079be4650cb76f1cd15;
extern PyObject *const_str_digest_56cc526ad2048d12721633e06a7848c4;
extern PyObject *const_str_plain_variant_url;
extern PyObject *const_str_plain_broadcast;
extern PyObject *const_str_plain_variant;
extern PyObject *const_str_digest_12418a5efd7fc5b743c4fe5f9703e6d9;
extern PyObject *const_str_plain_fatal;
static PyObject *const_str_plain_retweet_count;
extern PyObject *const_str_plain_webpage;
static PyObject *const_str_digest_04360bdcf93758ed97373094dc559492;
extern PyObject *const_str_plain_image;
static PyObject *const_str_digest_e1bbcc6d461b5e5e9ff60a38c068cb39;
static PyObject *const_tuple_str_plain_media_url_https_tuple;
static PyObject *const_str_digest_c513aa326af4ce3553b5d77ae31675a3;
extern PyObject *const_tuple_str_plain_created_at_tuple;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain__API_BASE;
extern PyObject *const_str_plain__TESTS;
static PyObject *const_list_3a789506d261d2acc2976c5dc1724958_list;
static PyObject *const_str_digest_d87f02c55e687019d731a3b4c65b35ca;
extern PyObject *const_str_plain_lower;
static PyObject *const_tuple_str_plain_PeriscopeBaseIE_str_plain_PeriscopeIE_tuple;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_tuple_str_plain_bitrate_str_plain_bit_rate_tuple;
static PyObject *const_tuple_a9f7515f9dad0c5231b988f8882c373b_tuple;
static PyObject *const_str_plain_promo_video_website;
static PyObject *const_str_plain__original;
static PyObject *const_str_digest_7d6bb51208fc32b3aad29fb21458345a;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_xpath_text;
static PyObject *const_str_plain_amplify_url_vmap;
extern PyObject *const_str_plain_tags;
extern PyObject *const_str_plain_w;
extern PyObject *const_str_plain_player_url;
static PyObject *const_str_digest_a7c8213a63902a73a20ecd4101918bed;
extern PyObject *const_str_plain_timestamp;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_plain_message;
static PyObject *const_str_digest_2e2a8e363dceb1d96aba11653976c439;
extern PyObject *const_tuple_str_newline_str_space_tuple;
extern PyObject *const_str_plain_errors;
extern PyObject *const_str_plain_unified_timestamp;
static PyObject *const_str_digest_32ec53f25d7aae19d10eaa3b0ead96bc;
extern PyObject *const_tuple_str_plain_screen_name_tuple;
static PyObject *const_str_plain_include_cards;
extern PyObject *const_str_plain__download_xml;
static PyObject *const_str_digest_2edd938663aa2c110010562b243eb33e;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain__html_search_meta;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_PeriscopeIE;
static PyObject *const_tuple_2ab1df84b09220f912c1a9ceaea1d9f9_tuple;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_player;
static PyObject *const_str_plain_player_image;
static PyObject *const_str_digest_2ebf9ed8524e4ae111db94b1f7a196ba;
extern PyObject *const_int_pos_18;
extern PyObject *const_str_plain_text;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_0518d5712ff540d88be7171ce3b6b49d;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_video_info;
static PyObject *const_str_digest_cfe9634b20587cfd42027e5873dce3da;
extern PyObject *const_str_plain_compat_parse_qs;
extern PyObject *const_str_plain_ie_key;
static PyObject *const_tuple_d3fa32ebc0e1362d267a9362c3134649_tuple;
static PyObject *const_tuple_str_plain_a_format_str_plain_video_url_str_plain_m_tuple;
extern PyObject *const_str_plain_findall;
static PyObject *const_str_digest_bed6549aa145024e284e351a0050d656;
static PyObject *const_tuple_f38a393c3e181ee2e3e3fb6de7946376_tuple;
extern PyObject *const_str_plain_thumbnails;
static PyObject *const_str_digest_855c136f388d6c14a49d6e8a9268e577;
extern PyObject *const_str_plain_md5;
static PyObject *const_str_plain_video_h;
static PyObject *const_str_digest_20eb3c986897f514794fd8ec41949774;
static PyObject *const_str_plain_possibly_sensitive;
static PyObject *const_str_plain__find_dimension;
static PyObject *const_str_digest_53bffbac0fee38ea25f29446b85013bb;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_compat;
static PyObject *const_str_digest_997c89372b15d7115527386a7bc81333;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_compat_urllib_parse_urlparse;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_uploader_id;
static PyObject *const_str_plain_noRedirectPlaybackUrl;
extern PyObject *const_str_plain_info_dict;
extern PyObject *const_str_plain_variants;
static PyObject *const_str_plain_media_url_https;
static PyObject *const_str_plain_periscope_broadcast;
static PyObject *const_str_plain_status_id;
static PyObject *const_str_plain_extended;
static PyObject *const_str_digest_fa2c2397f49b54a0b29528a1cf75bca9;
static PyObject *const_str_plain__extract_formats_from_vmap_url;
extern PyObject *const_str_plain_group;
static PyObject *const_str_digest_33b18dedcf0bdf7a861569cc2b803579;
extern PyObject *const_str_plain__match_id;
static PyObject *const_tuple_dde5f81a1d82b77231a42a528fec0f14_tuple;
extern PyObject *const_str_plain_screen_name;
extern PyObject *const_str_plain_repost_count;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain_amplify;
static PyObject *const_str_digest_b76693e804cc6d7eb2bfe9f2ab654fc1;
extern PyObject *const_str_plain_id;
static PyObject *const_str_digest_4091e8875aaf2c092db3c4845fb6fbbe;
extern PyObject *const_str_plain_media_url;
extern PyObject *const_str_plain_comment_count;
static PyObject *const_dict_473d105266f1149d92902e1dc83799b9;
static PyObject *const_tuple_str_plain_amplify_str_plain_promo_video_website_tuple;
static PyObject *const_tuple_02d0d6b18c243ab41d06ce8455021038_tuple;
extern PyObject *const_tuple_str_plain_height_tuple;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_tbr;
static PyObject *const_tuple_str_plain_k_str_plain_o_str_plain_binding_values_tuple;
extern PyObject *const_tuple_str_plain_InfoExtractor_tuple;
static PyObject *const_str_plain_tweet_mode;
static PyObject *const_tuple_str_plain_duration_millis_tuple;
extern PyObject *const_str_plain_format_id;
static PyObject *const_str_plain_vmap_url;
static PyObject *const_str_plain_full_text;
extern PyObject *const_str_plain_strip_or_none;
extern PyObject *const_str_plain_mp4;
extern PyObject *const_str_plain_height;
static PyObject *const_str_plain_thumbnail_w;
extern PyObject *const_str_plain_IE_NAME;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_space;
extern PyObject *const_str_digest_885512f5e89edd850ce5f45bff93cf60;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_thumbnail;
extern PyObject *const_str_plain_uploader;
extern PyObject *const_str_plain_PeriscopeBaseIE;
static PyObject *const_str_plain_vmap_data;
extern PyObject *const_str_plain__TEST;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_video_url;
extern PyObject *const_str_plain_list;
static PyObject *const_str_plain_include_reply_count;
extern PyObject *const_str_plain_m3u8_url;
extern PyObject *const_str_plain_orig;
extern PyObject *const_str_plain_photo;
extern PyObject *const_int_pos_1000;
static PyObject *const_str_digest_f5575058af023bf4bc47b99442f454d5;
extern PyObject *const_str_plain_Authorization;
static PyObject *const_str_digest_602b2fc766743f41dcdfd31e244b8358;
static PyObject *const_str_digest_440320717f7d6d7b419b61d52a1f4d4a;
extern PyObject *const_str_plain_x;
static PyObject *const_str_digest_e51a8acf267a994f90aa6db69f1c1595;
static PyObject *const_str_digest_41e3e1e9dc66c16b03637d33c006eaf6;
static PyObject *const_str_plain_1yNGaQLWpejGj;
static PyObject *const_tuple_deffbcd9c7f99972d00cc9a7de99cd97_tuple;
static PyObject *const_str_digest_5f8e1967fea5e6ccb724aa6a41b99176;
extern PyObject *const_str_plain__type;
extern PyObject *const_str_plain_entities;
extern PyObject *const_list_none_list;
extern PyObject *const_str_plain_InfoExtractor;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_duration_millis;
static PyObject *const_tuple_str_plain_reply_count_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_source;
static PyObject *const_str_digest_e574ade18dfb783143144ca799dec10c;
static PyObject *const_str_digest_bf36a9be586403f31dbd2411126251ed;
extern PyObject *const_str_plain_user;
extern PyObject *const_str_plain_periscope;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_plain_TwitterIE;
extern PyObject *const_str_plain_target;
static PyObject *const_str_digest_1f33f0446aa87f1c6ce3db0772694262;
extern PyObject *const_str_plain_urls;
extern PyObject *const_str_plain_TwitterAmplifyIE;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain__extract_pscp_m3u8_formats;
extern PyObject *const_tuple_str_plain_type_tuple;
extern PyObject *const_str_plain__call_api;
extern PyObject *const_tuple_str_plain_h_tuple;
static PyObject *const_str_plain_extended_entities;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_str_digest_57d6b7ff46d6404d3b6b744aa763c6be;
extern PyObject *const_str_plain__sort_formats;
static PyObject *const_str_digest_08ba8f9785a4d987c9646560e36cc234;
static PyObject *const_str_plain_video_variant;
extern PyObject *const_str_plain_dict_get;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_sub;
extern PyObject *const_str_plain_staticmethod;
static PyObject *const_str_plain_content_duration_seconds;
extern PyObject *const_str_plain_compat_HTTPError;
extern PyObject *const_tuple_str_chr_58_tuple;
extern PyObject *const_str_digest_ff5e3b1ae0d95ffe8b3d72657a27de19;
extern PyObject *const_str_plain_sizes;
static PyObject *const_str_digest_92fa1fb276568d2d88f8d6f3b1ba64c5;
static PyObject *const_tuple_b9d1f2d4a14a5096f5c446fe7f61a2f6_tuple;
static PyObject *const_str_plain__value;
extern PyObject *const_str_plain_description;
extern PyObject *const_str_plain__extract_m3u8_formats;
extern PyObject *const_str_plain_int_or_none;
extern PyObject *const_str_plain_bitrate;
static PyObject *const_str_digest_76361f08e25336a5fea63dd273e1df60;
extern PyObject *const_str_digest_09d63a5a61044765cbef1a09e46446f1;
extern PyObject *const_str_plain_ext;
extern PyObject *const_int_pos_403;
extern PyObject *const_str_plain_hls;
extern PyObject *const_str_plain_query;
static PyObject *const_str_plain_favorite_count;
extern PyObject *const_str_plain__parse_broadcast_data;
extern PyObject *const_str_plain_title;
static PyObject *const_str_plain__extract_variant_formats;
static PyObject *const_str_digest_1bd0868c0959458b51eefc7ea3bbc4dc;
extern PyObject *const_tuple_str_plain_x_tuple;
static PyObject *const_list_0b1df5440fbc4f86bdcd18deee1cd258_list;
extern PyObject *const_tuple_str_plain_width_tuple;
static PyObject *const_tuple_str_plain_possibly_sensitive_tuple;
extern PyObject *const_str_plain_float_or_none;
extern PyObject *const_tuple_str_plain_user_tuple;
extern PyObject *const_str_plain_broadcasts;
extern PyObject *const_str_plain_compat_urllib_parse_unquote;
static PyObject *const_str_plain__GUEST_TOKEN;
extern PyObject *const_str_plain_TwitterCardIE;
static PyObject *const_str_digest_95a11a35839bdcb94d0f8b4fd5ca31f8;
static PyObject *const_tuple_str_digest_f5575058af023bf4bc47b99442f454d5_tuple;
static PyObject *const_str_plain_7df102d0b9fd7066b86f3159f8e81bf6;
static PyObject *const_str_plain_include_user_entities;
static PyObject *const_tuple_str_plain_self_str_plain_url_str_plain_status_id_tuple;
extern PyObject *const_str_plain_search;
extern PyObject *const_str_chr_58;
static PyObject *const_str_plain_add_thumbnail;
extern PyObject *const_str_plain_o;
extern PyObject *const_tuple_str_plain_text_tuple;
static PyObject *const_str_digest_688535a588ab650ecfa2ea525ae2af13;
static PyObject *const_str_digest_b6de25d52392ce267cad9e5a6d10e785;
static PyObject *const_tuple_5b4b5972d99f94cbfc60051d5c784df6_tuple;
extern PyObject *const_str_angle_lambda;
extern PyObject *const_bytes_empty;
static PyObject *const_str_plain_video_w;
extern PyObject *const_str_plain__download_json;
static PyObject *const_tuple_str_plain_original_info_tuple;
extern PyObject *const_dict_5a4b43d9442068c8ed68fb42270f3fd3;
extern PyObject *const_str_plain__BASE_REGEX;
extern PyObject *const_str_plain_url_result;
static PyObject *const_str_plain__small;
extern PyObject *const_str_plain_unicode_literals;
static PyObject *const_str_digest_326ae1925bd1d396fe6c60efa485c09a;
static PyObject *const_str_plain_broadcast_url;
extern PyObject *const_str_plain_created_at;
extern PyObject *const_str_plain_width;
extern PyObject *const_tuple_str_plain_w_tuple;
static PyObject *const_tuple_str_plain_video_info_tuple;
extern PyObject *const_str_plain_TwitterBroadcastIE;
extern PyObject *const_str_newline;
static PyObject *const_str_plain_expanded_url;
extern PyObject *const_str_plain_self;
static PyObject *const_dict_b44f1345a87ee77c5104cd68bd26b5ce;
extern PyObject *const_tuple_str_plain_name_tuple;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_reply_count;
extern PyObject *const_str_plain_m3u8_native;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_949d10b413f5f58ab139ee1201ed5910 = UNSTREAM_STRING_ASCII(&constant_bin[ 2039716 ], 16, 0);
    const_str_plain_media_key = UNSTREAM_STRING_ASCII(&constant_bin[ 2039732 ], 9, 1);
    const_str_digest_3083a01789ea0f43dcc0ed119641327c = UNSTREAM_STRING_ASCII(&constant_bin[ 2039741 ], 37, 0);
    const_dict_9f59a5753762d057c60e58a3e5b02c01 = _PyDict_NewPresized( 1 );
    const_str_digest_c513aa326af4ce3553b5d77ae31675a3 = UNSTREAM_STRING_ASCII(&constant_bin[ 2039778 ], 121, 0);
    PyDict_SetItem(const_dict_9f59a5753762d057c60e58a3e5b02c01, const_str_plain_Authorization, const_str_digest_c513aa326af4ce3553b5d77ae31675a3);
    assert(PyDict_Size(const_dict_9f59a5753762d057c60e58a3e5b02c01) == 1);
    const_str_digest_6473ed893522b15ece5f7e069544b640 = UNSTREAM_STRING_ASCII(&constant_bin[ 2039899 ], 23, 0);
    const_str_digest_2d2171fcdb2d5e03108a1cef1e36f97f = UNSTREAM_STRING_ASCII(&constant_bin[ 2039922 ], 12, 0);
    const_dict_024652a1be9d621d629ebe6c437ea5a4 = _PyDict_NewPresized( 2 );
    const_str_digest_53bffbac0fee38ea25f29446b85013bb = UNSTREAM_STRING_ASCII(&constant_bin[ 2039934 ], 46, 0);
    PyDict_SetItem(const_dict_024652a1be9d621d629ebe6c437ea5a4, const_str_plain_url, const_str_digest_53bffbac0fee38ea25f29446b85013bb);
    const_dict_0279a3f0bf0fb61d38349787f7e671bb = _PyDict_NewPresized( 5 );
    const_str_plain_1yNGaQLWpejGj = UNSTREAM_STRING_ASCII(&constant_bin[ 2039967 ], 13, 0);
    PyDict_SetItem(const_dict_0279a3f0bf0fb61d38349787f7e671bb, const_str_plain_id, const_str_plain_1yNGaQLWpejGj);
    PyDict_SetItem(const_dict_0279a3f0bf0fb61d38349787f7e671bb, const_str_plain_ext, const_str_plain_mp4);
    const_str_digest_02775653e132a1b81451b2bba71611c6 = UNSTREAM_STRING_ASCII(&constant_bin[ 2039980 ], 40, 0);
    PyDict_SetItem(const_dict_0279a3f0bf0fb61d38349787f7e671bb, const_str_plain_title, const_str_digest_02775653e132a1b81451b2bba71611c6);
    const_str_digest_7d6bb51208fc32b3aad29fb21458345a = UNSTREAM_STRING_ASCII(&constant_bin[ 2039980 ], 18, 0);
    PyDict_SetItem(const_dict_0279a3f0bf0fb61d38349787f7e671bb, const_str_plain_uploader, const_str_digest_7d6bb51208fc32b3aad29fb21458345a);
    const_str_plain_1PXEdBZWpGwKe = UNSTREAM_STRING_ASCII(&constant_bin[ 2040020 ], 13, 0);
    PyDict_SetItem(const_dict_0279a3f0bf0fb61d38349787f7e671bb, const_str_plain_uploader_id, const_str_plain_1PXEdBZWpGwKe);
    assert(PyDict_Size(const_dict_0279a3f0bf0fb61d38349787f7e671bb) == 5);
    PyDict_SetItem(const_dict_024652a1be9d621d629ebe6c437ea5a4, const_str_plain_info_dict, const_dict_0279a3f0bf0fb61d38349787f7e671bb);
    assert(PyDict_Size(const_dict_024652a1be9d621d629ebe6c437ea5a4) == 2);
    const_str_digest_040b492e76392dd52ab34a7efaeab884 = UNSTREAM_STRING_ASCII(&constant_bin[ 2040033 ], 19, 0);
    const_str_digest_a53a8368c3aed979cfa894f9b201671c = UNSTREAM_STRING_ASCII(&constant_bin[ 2040052 ], 49, 0);
    const_str_digest_67a6a64c32c3530cbe0ac9ec367462f4 = UNSTREAM_STRING_ASCII(&constant_bin[ 2040101 ], 8, 0);
    const_str_plain_get_binding_value = UNSTREAM_STRING_ASCII(&constant_bin[ 2040109 ], 17, 1);
    const_str_plain_original_info = UNSTREAM_STRING_ASCII(&constant_bin[ 2040126 ], 13, 1);
    const_str_digest_07901c6f35b485abdc6d27175d3023e4 = UNSTREAM_STRING_ASCII(&constant_bin[ 2040139 ], 25, 0);
    const_str_plain_cards_platform = UNSTREAM_STRING_ASCII(&constant_bin[ 2040164 ], 14, 1);
    const_tuple_b5bdfa05fc28b024803f3d7013eed6a6_tuple = PyTuple_New(8);
    PyTuple_SET_ITEM(const_tuple_b5bdfa05fc28b024803f3d7013eed6a6_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain_vmap_url = UNSTREAM_STRING_ASCII(&constant_bin[ 2040178 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_b5bdfa05fc28b024803f3d7013eed6a6_tuple, 1, const_str_plain_vmap_url); Py_INCREF(const_str_plain_vmap_url);
    PyTuple_SET_ITEM(const_tuple_b5bdfa05fc28b024803f3d7013eed6a6_tuple, 2, const_str_plain_video_id); Py_INCREF(const_str_plain_video_id);
    const_str_plain_vmap_data = UNSTREAM_STRING_ASCII(&constant_bin[ 2040186 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_b5bdfa05fc28b024803f3d7013eed6a6_tuple, 3, const_str_plain_vmap_data); Py_INCREF(const_str_plain_vmap_data);
    PyTuple_SET_ITEM(const_tuple_b5bdfa05fc28b024803f3d7013eed6a6_tuple, 4, const_str_plain_formats); Py_INCREF(const_str_plain_formats);
    PyTuple_SET_ITEM(const_tuple_b5bdfa05fc28b024803f3d7013eed6a6_tuple, 5, const_str_plain_urls); Py_INCREF(const_str_plain_urls);
    const_str_plain_video_variant = UNSTREAM_STRING_ASCII(&constant_bin[ 2040195 ], 13, 1);
    PyTuple_SET_ITEM(const_tuple_b5bdfa05fc28b024803f3d7013eed6a6_tuple, 6, const_str_plain_video_variant); Py_INCREF(const_str_plain_video_variant);
    PyTuple_SET_ITEM(const_tuple_b5bdfa05fc28b024803f3d7013eed6a6_tuple, 7, const_str_plain_video_url); Py_INCREF(const_str_plain_video_url);
    const_str_digest_deb2c0c379103d549692e44af91775ad = UNSTREAM_STRING_ASCII(&constant_bin[ 2040208 ], 25, 0);
    const_tuple_1da931cdcb80031a0665d82a978028a6_tuple = PyTuple_New(5);
    const_str_plain__small = UNSTREAM_STRING_ASCII(&constant_bin[ 1124305 ], 6, 1);
    PyTuple_SET_ITEM(const_tuple_1da931cdcb80031a0665d82a978028a6_tuple, 0, const_str_plain__small); Py_INCREF(const_str_plain__small);
    PyTuple_SET_ITEM(const_tuple_1da931cdcb80031a0665d82a978028a6_tuple, 1, const_str_empty); Py_INCREF(const_str_empty);
    const_str_plain__large = UNSTREAM_STRING_ASCII(&constant_bin[ 586563 ], 6, 1);
    PyTuple_SET_ITEM(const_tuple_1da931cdcb80031a0665d82a978028a6_tuple, 2, const_str_plain__large); Py_INCREF(const_str_plain__large);
    const_str_plain__x_large = UNSTREAM_STRING_ASCII(&constant_bin[ 2040233 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_1da931cdcb80031a0665d82a978028a6_tuple, 3, const_str_plain__x_large); Py_INCREF(const_str_plain__x_large);
    const_str_plain__original = UNSTREAM_STRING_ASCII(&constant_bin[ 1429249 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_1da931cdcb80031a0665d82a978028a6_tuple, 4, const_str_plain__original); Py_INCREF(const_str_plain__original);
    const_str_plain_thumbnail_h = UNSTREAM_STRING_ASCII(&constant_bin[ 2040241 ], 11, 1);
    const_str_plain_guest_token = UNSTREAM_STRING_ASCII(&constant_bin[ 2040252 ], 11, 1);
    const_tuple_str_plain_retweet_count_tuple = PyTuple_New(1);
    const_str_plain_retweet_count = UNSTREAM_STRING_ASCII(&constant_bin[ 2040263 ], 13, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_retweet_count_tuple, 0, const_str_plain_retweet_count); Py_INCREF(const_str_plain_retweet_count);
    const_str_plain__search_dimensions_in_video_url = UNSTREAM_STRING_ASCII(&constant_bin[ 2040276 ], 31, 1);
    const_str_plain_player_stream_url = UNSTREAM_STRING_ASCII(&constant_bin[ 2040307 ], 17, 1);
    const_str_digest_4dbaa7c7706ebc9f3929bfbd8e3be477 = UNSTREAM_STRING_ASCII(&constant_bin[ 2040324 ], 21, 0);
    const_tuple_str_plain_noRedirectPlaybackUrl_tuple = PyTuple_New(1);
    const_str_plain_noRedirectPlaybackUrl = UNSTREAM_STRING_ASCII(&constant_bin[ 2040345 ], 21, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_noRedirectPlaybackUrl_tuple, 0, const_str_plain_noRedirectPlaybackUrl); Py_INCREF(const_str_plain_noRedirectPlaybackUrl);
    const_str_plain_TwitterBaseIE = UNSTREAM_STRING_ASCII(&constant_bin[ 50684 ], 13, 1);
    const_str_plain_card = UNSTREAM_STRING_ASCII(&constant_bin[ 638497 ], 4, 1);
    const_tuple_str_plain_favorite_count_tuple = PyTuple_New(1);
    const_str_plain_favorite_count = UNSTREAM_STRING_ASCII(&constant_bin[ 2040366 ], 14, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_favorite_count_tuple, 0, const_str_plain_favorite_count); Py_INCREF(const_str_plain_favorite_count);
    const_dict_d0b45134cafeef218fc9b6d0b35ce3b8 = _PyDict_NewPresized( 4 );
    const_str_digest_855c136f388d6c14a49d6e8a9268e577 = UNSTREAM_STRING_ASCII(&constant_bin[ 2040380 ], 36, 0);
    PyDict_SetItem(const_dict_d0b45134cafeef218fc9b6d0b35ce3b8, const_str_plain_id, const_str_digest_855c136f388d6c14a49d6e8a9268e577);
    PyDict_SetItem(const_dict_d0b45134cafeef218fc9b6d0b35ce3b8, const_str_plain_ext, const_str_plain_mp4);
    const_str_digest_5f8e1967fea5e6ccb724aa6a41b99176 = UNSTREAM_STRING_ASCII(&constant_bin[ 2040416 ], 13, 0);
    PyDict_SetItem(const_dict_d0b45134cafeef218fc9b6d0b35ce3b8, const_str_plain_title, const_str_digest_5f8e1967fea5e6ccb724aa6a41b99176);
    PyDict_SetItem(const_dict_d0b45134cafeef218fc9b6d0b35ce3b8, const_str_plain_thumbnail, const_str_digest_56cc526ad2048d12721633e06a7848c4);
    assert(PyDict_Size(const_dict_d0b45134cafeef218fc9b6d0b35ce3b8) == 4);
    const_str_plain_binding_values = UNSTREAM_STRING_ASCII(&constant_bin[ 2040429 ], 14, 1);
    const_str_digest_1dc4adb5f62d0b430daec327c01dca1a = UNSTREAM_STRING_ASCII(&constant_bin[ 2040443 ], 30, 0);
    const_tuple_str_plain_card_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_card_tuple, 0, const_str_plain_card); Py_INCREF(const_str_plain_card);
    const_str_digest_d9ce3eefff757b367a64995fc318b12b = UNSTREAM_STRING_ASCII(&constant_bin[ 2040473 ], 12, 0);
    const_str_plain_hashtags = UNSTREAM_STRING_ASCII(&constant_bin[ 2040485 ], 8, 1);
    const_str_digest_788ca6732f250c24f74a171981e6cd6a = UNSTREAM_STRING_ASCII(&constant_bin[ 2040493 ], 44, 0);
    const_str_plain_bit_rate = UNSTREAM_STRING_ASCII(&constant_bin[ 2040537 ], 8, 1);
    const_str_digest_92ff0b7d187af079be4650cb76f1cd15 = UNSTREAM_STRING_ASCII(&constant_bin[ 2040545 ], 28, 0);
    const_str_digest_04360bdcf93758ed97373094dc559492 = UNSTREAM_STRING_ASCII(&constant_bin[ 2040573 ], 19, 0);
    const_str_digest_e1bbcc6d461b5e5e9ff60a38c068cb39 = UNSTREAM_STRING_ASCII(&constant_bin[ 2040592 ], 17, 0);
    const_tuple_str_plain_media_url_https_tuple = PyTuple_New(1);
    const_str_plain_media_url_https = UNSTREAM_STRING_ASCII(&constant_bin[ 2040609 ], 15, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_media_url_https_tuple, 0, const_str_plain_media_url_https); Py_INCREF(const_str_plain_media_url_https);
    const_list_3a789506d261d2acc2976c5dc1724958_list = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 2040624 ], 6045);
    const_str_digest_d87f02c55e687019d731a3b4c65b35ca = UNSTREAM_STRING_ASCII(&constant_bin[ 2046669 ], 106, 0);
    const_tuple_str_plain_PeriscopeBaseIE_str_plain_PeriscopeIE_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_PeriscopeBaseIE_str_plain_PeriscopeIE_tuple, 0, const_str_plain_PeriscopeBaseIE); Py_INCREF(const_str_plain_PeriscopeBaseIE);
    PyTuple_SET_ITEM(const_tuple_str_plain_PeriscopeBaseIE_str_plain_PeriscopeIE_tuple, 1, const_str_plain_PeriscopeIE); Py_INCREF(const_str_plain_PeriscopeIE);
    const_tuple_str_plain_bitrate_str_plain_bit_rate_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_bitrate_str_plain_bit_rate_tuple, 0, const_str_plain_bitrate); Py_INCREF(const_str_plain_bitrate);
    PyTuple_SET_ITEM(const_tuple_str_plain_bitrate_str_plain_bit_rate_tuple, 1, const_str_plain_bit_rate); Py_INCREF(const_str_plain_bit_rate);
    const_tuple_a9f7515f9dad0c5231b988f8882c373b_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_a9f7515f9dad0c5231b988f8882c373b_tuple, 0, const_str_plain_target); Py_INCREF(const_str_plain_target);
    PyTuple_SET_ITEM(const_tuple_a9f7515f9dad0c5231b988f8882c373b_tuple, 1, const_str_plain_w); Py_INCREF(const_str_plain_w);
    PyTuple_SET_ITEM(const_tuple_a9f7515f9dad0c5231b988f8882c373b_tuple, 2, const_str_plain_h); Py_INCREF(const_str_plain_h);
    PyTuple_SET_ITEM(const_tuple_a9f7515f9dad0c5231b988f8882c373b_tuple, 3, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_a9f7515f9dad0c5231b988f8882c373b_tuple, 4, const_str_plain_webpage); Py_INCREF(const_str_plain_webpage);
    const_str_plain_promo_video_website = UNSTREAM_STRING_ASCII(&constant_bin[ 2046775 ], 19, 1);
    const_str_plain_amplify_url_vmap = UNSTREAM_STRING_ASCII(&constant_bin[ 2046794 ], 16, 1);
    const_str_digest_a7c8213a63902a73a20ecd4101918bed = UNSTREAM_STRING_ASCII(&constant_bin[ 2039749 ], 28, 0);
    const_str_digest_2e2a8e363dceb1d96aba11653976c439 = UNSTREAM_STRING_ASCII(&constant_bin[ 2046810 ], 23, 0);
    const_str_digest_32ec53f25d7aae19d10eaa3b0ead96bc = UNSTREAM_STRING_ASCII(&constant_bin[ 2046833 ], 50, 0);
    const_str_plain_include_cards = UNSTREAM_STRING_ASCII(&constant_bin[ 2046883 ], 13, 1);
    const_str_digest_2edd938663aa2c110010562b243eb33e = UNSTREAM_STRING_ASCII(&constant_bin[ 2046896 ], 41, 0);
    const_tuple_2ab1df84b09220f912c1a9ceaea1d9f9_tuple = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 2046937 ], 324);
    const_str_plain_player_image = UNSTREAM_STRING_ASCII(&constant_bin[ 1546883 ], 12, 1);
    const_str_digest_2ebf9ed8524e4ae111db94b1f7a196ba = UNSTREAM_STRING_ASCII(&constant_bin[ 2047261 ], 31, 0);
    const_str_digest_0518d5712ff540d88be7171ce3b6b49d = UNSTREAM_STRING_ASCII(&constant_bin[ 2047292 ], 48, 0);
    const_str_digest_cfe9634b20587cfd42027e5873dce3da = UNSTREAM_STRING_ASCII(&constant_bin[ 683750 ], 20, 0);
    const_tuple_d3fa32ebc0e1362d267a9362c3134649_tuple = PyTuple_New(6);
    PyTuple_SET_ITEM(const_tuple_d3fa32ebc0e1362d267a9362c3134649_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_d3fa32ebc0e1362d267a9362c3134649_tuple, 1, const_str_plain_path); Py_INCREF(const_str_plain_path);
    PyTuple_SET_ITEM(const_tuple_d3fa32ebc0e1362d267a9362c3134649_tuple, 2, const_str_plain_video_id); Py_INCREF(const_str_plain_video_id);
    PyTuple_SET_ITEM(const_tuple_d3fa32ebc0e1362d267a9362c3134649_tuple, 3, const_str_plain_query); Py_INCREF(const_str_plain_query);
    PyTuple_SET_ITEM(const_tuple_d3fa32ebc0e1362d267a9362c3134649_tuple, 4, const_str_plain_headers); Py_INCREF(const_str_plain_headers);
    PyTuple_SET_ITEM(const_tuple_d3fa32ebc0e1362d267a9362c3134649_tuple, 5, const_str_plain_e); Py_INCREF(const_str_plain_e);
    const_tuple_str_plain_a_format_str_plain_video_url_str_plain_m_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_a_format_str_plain_video_url_str_plain_m_tuple, 0, const_str_plain_a_format); Py_INCREF(const_str_plain_a_format);
    PyTuple_SET_ITEM(const_tuple_str_plain_a_format_str_plain_video_url_str_plain_m_tuple, 1, const_str_plain_video_url); Py_INCREF(const_str_plain_video_url);
    PyTuple_SET_ITEM(const_tuple_str_plain_a_format_str_plain_video_url_str_plain_m_tuple, 2, const_str_plain_m); Py_INCREF(const_str_plain_m);
    const_str_digest_bed6549aa145024e284e351a0050d656 = UNSTREAM_STRING_ASCII(&constant_bin[ 2047340 ], 48, 0);
    const_tuple_f38a393c3e181ee2e3e3fb6de7946376_tuple = PyTuple_New(6);
    PyTuple_SET_ITEM(const_tuple_f38a393c3e181ee2e3e3fb6de7946376_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_f38a393c3e181ee2e3e3fb6de7946376_tuple, 1, const_str_plain_variant); Py_INCREF(const_str_plain_variant);
    PyTuple_SET_ITEM(const_tuple_f38a393c3e181ee2e3e3fb6de7946376_tuple, 2, const_str_plain_video_id); Py_INCREF(const_str_plain_video_id);
    PyTuple_SET_ITEM(const_tuple_f38a393c3e181ee2e3e3fb6de7946376_tuple, 3, const_str_plain_variant_url); Py_INCREF(const_str_plain_variant_url);
    PyTuple_SET_ITEM(const_tuple_f38a393c3e181ee2e3e3fb6de7946376_tuple, 4, const_str_plain_tbr); Py_INCREF(const_str_plain_tbr);
    PyTuple_SET_ITEM(const_tuple_f38a393c3e181ee2e3e3fb6de7946376_tuple, 5, const_str_plain_f); Py_INCREF(const_str_plain_f);
    const_str_plain_video_h = UNSTREAM_STRING_ASCII(&constant_bin[ 933889 ], 7, 1);
    const_str_digest_20eb3c986897f514794fd8ec41949774 = UNSTREAM_STRING_ASCII(&constant_bin[ 2047388 ], 38, 0);
    const_str_plain_possibly_sensitive = UNSTREAM_STRING_ASCII(&constant_bin[ 2047426 ], 18, 1);
    const_str_plain__find_dimension = UNSTREAM_STRING_ASCII(&constant_bin[ 2047444 ], 15, 1);
    const_str_digest_997c89372b15d7115527386a7bc81333 = UNSTREAM_STRING_ASCII(&constant_bin[ 2047459 ], 29, 0);
    const_str_plain_periscope_broadcast = UNSTREAM_STRING_ASCII(&constant_bin[ 2047488 ], 19, 1);
    const_str_plain_status_id = UNSTREAM_STRING_ASCII(&constant_bin[ 2047507 ], 9, 1);
    const_str_plain_extended = UNSTREAM_STRING_ASCII(&constant_bin[ 91090 ], 8, 1);
    const_str_digest_fa2c2397f49b54a0b29528a1cf75bca9 = UNSTREAM_STRING_ASCII(&constant_bin[ 2046833 ], 23, 0);
    const_str_plain__extract_formats_from_vmap_url = UNSTREAM_STRING_ASCII(&constant_bin[ 2040507 ], 30, 1);
    const_str_digest_33b18dedcf0bdf7a861569cc2b803579 = UNSTREAM_STRING_ASCII(&constant_bin[ 2047516 ], 15, 0);
    const_tuple_dde5f81a1d82b77231a42a528fec0f14_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_dde5f81a1d82b77231a42a528fec0f14_tuple, 0, const_str_plain_compat_HTTPError); Py_INCREF(const_str_plain_compat_HTTPError);
    PyTuple_SET_ITEM(const_tuple_dde5f81a1d82b77231a42a528fec0f14_tuple, 1, const_str_plain_compat_parse_qs); Py_INCREF(const_str_plain_compat_parse_qs);
    PyTuple_SET_ITEM(const_tuple_dde5f81a1d82b77231a42a528fec0f14_tuple, 2, const_str_plain_compat_urllib_parse_unquote); Py_INCREF(const_str_plain_compat_urllib_parse_unquote);
    PyTuple_SET_ITEM(const_tuple_dde5f81a1d82b77231a42a528fec0f14_tuple, 3, const_str_plain_compat_urllib_parse_urlparse); Py_INCREF(const_str_plain_compat_urllib_parse_urlparse);
    const_str_plain_amplify = UNSTREAM_STRING_ASCII(&constant_bin[ 2046794 ], 7, 1);
    const_str_digest_b76693e804cc6d7eb2bfe9f2ab654fc1 = UNSTREAM_STRING_ASCII(&constant_bin[ 2047531 ], 47, 0);
    const_str_digest_4091e8875aaf2c092db3c4845fb6fbbe = UNSTREAM_STRING_ASCII(&constant_bin[ 2047578 ], 55, 0);
    const_dict_473d105266f1149d92902e1dc83799b9 = _PyDict_NewPresized( 3 );
    const_str_digest_b6de25d52392ce267cad9e5a6d10e785 = UNSTREAM_STRING_ASCII(&constant_bin[ 2047633 ], 60, 0);
    PyDict_SetItem(const_dict_473d105266f1149d92902e1dc83799b9, const_str_plain_url, const_str_digest_b6de25d52392ce267cad9e5a6d10e785);
    const_str_plain_7df102d0b9fd7066b86f3159f8e81bf6 = UNSTREAM_STRING_ASCII(&constant_bin[ 2047693 ], 32, 0);
    PyDict_SetItem(const_dict_473d105266f1149d92902e1dc83799b9, const_str_plain_md5, const_str_plain_7df102d0b9fd7066b86f3159f8e81bf6);
    PyDict_SetItem(const_dict_473d105266f1149d92902e1dc83799b9, const_str_plain_info_dict, const_dict_d0b45134cafeef218fc9b6d0b35ce3b8);
    assert(PyDict_Size(const_dict_473d105266f1149d92902e1dc83799b9) == 3);
    const_tuple_str_plain_amplify_str_plain_promo_video_website_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_amplify_str_plain_promo_video_website_tuple, 0, const_str_plain_amplify); Py_INCREF(const_str_plain_amplify);
    PyTuple_SET_ITEM(const_tuple_str_plain_amplify_str_plain_promo_video_website_tuple, 1, const_str_plain_promo_video_website); Py_INCREF(const_str_plain_promo_video_website);
    const_tuple_02d0d6b18c243ab41d06ce8455021038_tuple = PyTuple_New(13);
    PyTuple_SET_ITEM(const_tuple_02d0d6b18c243ab41d06ce8455021038_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_02d0d6b18c243ab41d06ce8455021038_tuple, 1, const_str_plain_url); Py_INCREF(const_str_plain_url);
    PyTuple_SET_ITEM(const_tuple_02d0d6b18c243ab41d06ce8455021038_tuple, 2, const_str_plain_video_id); Py_INCREF(const_str_plain_video_id);
    PyTuple_SET_ITEM(const_tuple_02d0d6b18c243ab41d06ce8455021038_tuple, 3, const_str_plain_webpage); Py_INCREF(const_str_plain_webpage);
    PyTuple_SET_ITEM(const_tuple_02d0d6b18c243ab41d06ce8455021038_tuple, 4, const_str_plain_vmap_url); Py_INCREF(const_str_plain_vmap_url);
    PyTuple_SET_ITEM(const_tuple_02d0d6b18c243ab41d06ce8455021038_tuple, 5, const_str_plain_formats); Py_INCREF(const_str_plain_formats);
    PyTuple_SET_ITEM(const_tuple_02d0d6b18c243ab41d06ce8455021038_tuple, 6, const_str_plain_thumbnails); Py_INCREF(const_str_plain_thumbnails);
    PyTuple_SET_ITEM(const_tuple_02d0d6b18c243ab41d06ce8455021038_tuple, 7, const_str_plain_thumbnail); Py_INCREF(const_str_plain_thumbnail);
    PyTuple_SET_ITEM(const_tuple_02d0d6b18c243ab41d06ce8455021038_tuple, 8, const_str_plain__find_dimension); Py_INCREF(const_str_plain__find_dimension);
    const_str_plain_thumbnail_w = UNSTREAM_STRING_ASCII(&constant_bin[ 2047725 ], 11, 1);
    PyTuple_SET_ITEM(const_tuple_02d0d6b18c243ab41d06ce8455021038_tuple, 9, const_str_plain_thumbnail_w); Py_INCREF(const_str_plain_thumbnail_w);
    PyTuple_SET_ITEM(const_tuple_02d0d6b18c243ab41d06ce8455021038_tuple, 10, const_str_plain_thumbnail_h); Py_INCREF(const_str_plain_thumbnail_h);
    const_str_plain_video_w = UNSTREAM_STRING_ASCII(&constant_bin[ 2046781 ], 7, 1);
    PyTuple_SET_ITEM(const_tuple_02d0d6b18c243ab41d06ce8455021038_tuple, 11, const_str_plain_video_w); Py_INCREF(const_str_plain_video_w);
    PyTuple_SET_ITEM(const_tuple_02d0d6b18c243ab41d06ce8455021038_tuple, 12, const_str_plain_video_h); Py_INCREF(const_str_plain_video_h);
    const_tuple_str_plain_k_str_plain_o_str_plain_binding_values_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_k_str_plain_o_str_plain_binding_values_tuple, 0, const_str_plain_k); Py_INCREF(const_str_plain_k);
    PyTuple_SET_ITEM(const_tuple_str_plain_k_str_plain_o_str_plain_binding_values_tuple, 1, const_str_plain_o); Py_INCREF(const_str_plain_o);
    PyTuple_SET_ITEM(const_tuple_str_plain_k_str_plain_o_str_plain_binding_values_tuple, 2, const_str_plain_binding_values); Py_INCREF(const_str_plain_binding_values);
    const_str_plain_tweet_mode = UNSTREAM_STRING_ASCII(&constant_bin[ 2047736 ], 10, 1);
    const_tuple_str_plain_duration_millis_tuple = PyTuple_New(1);
    const_str_plain_duration_millis = UNSTREAM_STRING_ASCII(&constant_bin[ 2047746 ], 15, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_duration_millis_tuple, 0, const_str_plain_duration_millis); Py_INCREF(const_str_plain_duration_millis);
    const_str_plain_full_text = UNSTREAM_STRING_ASCII(&constant_bin[ 2047761 ], 9, 1);
    const_str_plain_include_reply_count = UNSTREAM_STRING_ASCII(&constant_bin[ 2047770 ], 19, 1);
    const_str_digest_f5575058af023bf4bc47b99442f454d5 = UNSTREAM_STRING_ASCII(&constant_bin[ 2047789 ], 58, 0);
    const_str_digest_602b2fc766743f41dcdfd31e244b8358 = UNSTREAM_STRING_ASCII(&constant_bin[ 2047847 ], 20, 0);
    const_str_digest_440320717f7d6d7b419b61d52a1f4d4a = UNSTREAM_STRING_ASCII(&constant_bin[ 2047867 ], 36, 0);
    const_str_digest_e51a8acf267a994f90aa6db69f1c1595 = UNSTREAM_STRING_ASCII(&constant_bin[ 2047903 ], 46, 0);
    const_str_digest_41e3e1e9dc66c16b03637d33c006eaf6 = UNSTREAM_STRING_ASCII(&constant_bin[ 2047949 ], 6, 0);
    const_tuple_deffbcd9c7f99972d00cc9a7de99cd97_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_deffbcd9c7f99972d00cc9a7de99cd97_tuple, 0, const_str_plain_name); Py_INCREF(const_str_plain_name);
    PyTuple_SET_ITEM(const_tuple_deffbcd9c7f99972d00cc9a7de99cd97_tuple, 1, const_str_plain_size); Py_INCREF(const_str_plain_size);
    PyTuple_SET_ITEM(const_tuple_deffbcd9c7f99972d00cc9a7de99cd97_tuple, 2, const_str_plain_thumbnails); Py_INCREF(const_str_plain_thumbnails);
    PyTuple_SET_ITEM(const_tuple_deffbcd9c7f99972d00cc9a7de99cd97_tuple, 3, const_str_plain_media_url); Py_INCREF(const_str_plain_media_url);
    const_tuple_str_plain_reply_count_tuple = PyTuple_New(1);
    const_str_plain_reply_count = UNSTREAM_STRING_ASCII(&constant_bin[ 2047778 ], 11, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_reply_count_tuple, 0, const_str_plain_reply_count); Py_INCREF(const_str_plain_reply_count);
    const_str_digest_e574ade18dfb783143144ca799dec10c = UNSTREAM_STRING_ASCII(&constant_bin[ 2047955 ], 13, 0);
    const_str_digest_bf36a9be586403f31dbd2411126251ed = UNSTREAM_STRING_ASCII(&constant_bin[ 2047968 ], 17, 0);
    const_str_digest_1f33f0446aa87f1c6ce3db0772694262 = UNSTREAM_STRING_ASCII(&constant_bin[ 2047985 ], 19, 0);
    const_str_plain_extended_entities = UNSTREAM_STRING_ASCII(&constant_bin[ 2048004 ], 17, 1);
    const_str_digest_57d6b7ff46d6404d3b6b744aa763c6be = UNSTREAM_STRING_ASCII(&constant_bin[ 2048021 ], 27, 0);
    const_str_digest_08ba8f9785a4d987c9646560e36cc234 = UNSTREAM_STRING_ASCII(&constant_bin[ 2048048 ], 45, 0);
    const_str_plain_content_duration_seconds = UNSTREAM_STRING_ASCII(&constant_bin[ 2048093 ], 24, 1);
    const_str_digest_92fa1fb276568d2d88f8d6f3b1ba64c5 = UNSTREAM_STRING_ASCII(&constant_bin[ 2047578 ], 30, 0);
    const_tuple_b9d1f2d4a14a5096f5c446fe7f61a2f6_tuple = PyTuple_New(9);
    PyTuple_SET_ITEM(const_tuple_b9d1f2d4a14a5096f5c446fe7f61a2f6_tuple, 0, const_str_plain_dict_get); Py_INCREF(const_str_plain_dict_get);
    PyTuple_SET_ITEM(const_tuple_b9d1f2d4a14a5096f5c446fe7f61a2f6_tuple, 1, const_str_plain_ExtractorError); Py_INCREF(const_str_plain_ExtractorError);
    PyTuple_SET_ITEM(const_tuple_b9d1f2d4a14a5096f5c446fe7f61a2f6_tuple, 2, const_str_plain_float_or_none); Py_INCREF(const_str_plain_float_or_none);
    PyTuple_SET_ITEM(const_tuple_b9d1f2d4a14a5096f5c446fe7f61a2f6_tuple, 3, const_str_plain_int_or_none); Py_INCREF(const_str_plain_int_or_none);
    PyTuple_SET_ITEM(const_tuple_b9d1f2d4a14a5096f5c446fe7f61a2f6_tuple, 4, const_str_plain_try_get); Py_INCREF(const_str_plain_try_get);
    PyTuple_SET_ITEM(const_tuple_b9d1f2d4a14a5096f5c446fe7f61a2f6_tuple, 5, const_str_plain_strip_or_none); Py_INCREF(const_str_plain_strip_or_none);
    PyTuple_SET_ITEM(const_tuple_b9d1f2d4a14a5096f5c446fe7f61a2f6_tuple, 6, const_str_plain_unified_timestamp); Py_INCREF(const_str_plain_unified_timestamp);
    PyTuple_SET_ITEM(const_tuple_b9d1f2d4a14a5096f5c446fe7f61a2f6_tuple, 7, const_str_plain_update_url_query); Py_INCREF(const_str_plain_update_url_query);
    PyTuple_SET_ITEM(const_tuple_b9d1f2d4a14a5096f5c446fe7f61a2f6_tuple, 8, const_str_plain_xpath_text); Py_INCREF(const_str_plain_xpath_text);
    const_str_plain__value = UNSTREAM_STRING_ASCII(&constant_bin[ 13753 ], 6, 1);
    const_str_digest_76361f08e25336a5fea63dd273e1df60 = UNSTREAM_STRING_ASCII(&constant_bin[ 2048117 ], 32, 0);
    const_str_plain__extract_variant_formats = UNSTREAM_STRING_ASCII(&constant_bin[ 2047402 ], 24, 1);
    const_str_digest_1bd0868c0959458b51eefc7ea3bbc4dc = UNSTREAM_STRING_ASCII(&constant_bin[ 2048149 ], 68, 0);
    const_list_0b1df5440fbc4f86bdcd18deee1cd258_list = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 2048217 ], 2084);
    const_tuple_str_plain_possibly_sensitive_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_possibly_sensitive_tuple, 0, const_str_plain_possibly_sensitive); Py_INCREF(const_str_plain_possibly_sensitive);
    const_str_plain__GUEST_TOKEN = UNSTREAM_STRING_ASCII(&constant_bin[ 2050301 ], 12, 1);
    const_str_digest_95a11a35839bdcb94d0f8b4fd5ca31f8 = UNSTREAM_STRING_ASCII(&constant_bin[ 2050313 ], 13, 0);
    const_tuple_str_digest_f5575058af023bf4bc47b99442f454d5_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_f5575058af023bf4bc47b99442f454d5_tuple, 0, const_str_digest_f5575058af023bf4bc47b99442f454d5); Py_INCREF(const_str_digest_f5575058af023bf4bc47b99442f454d5);
    const_str_plain_include_user_entities = UNSTREAM_STRING_ASCII(&constant_bin[ 2050326 ], 21, 1);
    const_tuple_str_plain_self_str_plain_url_str_plain_status_id_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_url_str_plain_status_id_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_url_str_plain_status_id_tuple, 1, const_str_plain_url); Py_INCREF(const_str_plain_url);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_url_str_plain_status_id_tuple, 2, const_str_plain_status_id); Py_INCREF(const_str_plain_status_id);
    const_str_plain_add_thumbnail = UNSTREAM_STRING_ASCII(&constant_bin[ 2047110 ], 13, 1);
    const_str_digest_688535a588ab650ecfa2ea525ae2af13 = UNSTREAM_STRING_ASCII(&constant_bin[ 2050347 ], 20, 0);
    const_tuple_5b4b5972d99f94cbfc60051d5c784df6_tuple = PyTuple_New(12);
    PyTuple_SET_ITEM(const_tuple_5b4b5972d99f94cbfc60051d5c784df6_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_5b4b5972d99f94cbfc60051d5c784df6_tuple, 1, const_str_plain_url); Py_INCREF(const_str_plain_url);
    PyTuple_SET_ITEM(const_tuple_5b4b5972d99f94cbfc60051d5c784df6_tuple, 2, const_str_plain_broadcast_id); Py_INCREF(const_str_plain_broadcast_id);
    PyTuple_SET_ITEM(const_tuple_5b4b5972d99f94cbfc60051d5c784df6_tuple, 3, const_str_plain_broadcast); Py_INCREF(const_str_plain_broadcast);
    PyTuple_SET_ITEM(const_tuple_5b4b5972d99f94cbfc60051d5c784df6_tuple, 4, const_str_plain_info); Py_INCREF(const_str_plain_info);
    PyTuple_SET_ITEM(const_tuple_5b4b5972d99f94cbfc60051d5c784df6_tuple, 5, const_str_plain_media_key); Py_INCREF(const_str_plain_media_key);
    PyTuple_SET_ITEM(const_tuple_5b4b5972d99f94cbfc60051d5c784df6_tuple, 6, const_str_plain_source); Py_INCREF(const_str_plain_source);
    PyTuple_SET_ITEM(const_tuple_5b4b5972d99f94cbfc60051d5c784df6_tuple, 7, const_str_plain_m3u8_url); Py_INCREF(const_str_plain_m3u8_url);
    PyTuple_SET_ITEM(const_tuple_5b4b5972d99f94cbfc60051d5c784df6_tuple, 8, const_str_plain_m3u8_id); Py_INCREF(const_str_plain_m3u8_id);
    PyTuple_SET_ITEM(const_tuple_5b4b5972d99f94cbfc60051d5c784df6_tuple, 9, const_str_plain_state); Py_INCREF(const_str_plain_state);
    PyTuple_SET_ITEM(const_tuple_5b4b5972d99f94cbfc60051d5c784df6_tuple, 10, const_str_plain_width); Py_INCREF(const_str_plain_width);
    PyTuple_SET_ITEM(const_tuple_5b4b5972d99f94cbfc60051d5c784df6_tuple, 11, const_str_plain_height); Py_INCREF(const_str_plain_height);
    const_tuple_str_plain_original_info_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_original_info_tuple, 0, const_str_plain_original_info); Py_INCREF(const_str_plain_original_info);
    const_str_digest_326ae1925bd1d396fe6c60efa485c09a = UNSTREAM_STRING_ASCII(&constant_bin[ 2050367 ], 32, 0);
    const_str_plain_broadcast_url = UNSTREAM_STRING_ASCII(&constant_bin[ 1863126 ], 13, 1);
    const_tuple_str_plain_video_info_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_video_info_tuple, 0, const_str_plain_video_info); Py_INCREF(const_str_plain_video_info);
    const_str_plain_expanded_url = UNSTREAM_STRING_ASCII(&constant_bin[ 2047249 ], 12, 1);
    const_dict_b44f1345a87ee77c5104cd68bd26b5ce = _PyDict_NewPresized( 5 );
    PyDict_SetItem(const_dict_b44f1345a87ee77c5104cd68bd26b5ce, const_str_plain_cards_platform, const_str_digest_41e3e1e9dc66c16b03637d33c006eaf6);
    PyDict_SetItem(const_dict_b44f1345a87ee77c5104cd68bd26b5ce, const_str_plain_include_cards, const_int_pos_1);
    PyDict_SetItem(const_dict_b44f1345a87ee77c5104cd68bd26b5ce, const_str_plain_include_reply_count, const_int_pos_1);
    PyDict_SetItem(const_dict_b44f1345a87ee77c5104cd68bd26b5ce, const_str_plain_include_user_entities, const_int_0);
    PyDict_SetItem(const_dict_b44f1345a87ee77c5104cd68bd26b5ce, const_str_plain_tweet_mode, const_str_plain_extended);
    assert(PyDict_Size(const_dict_b44f1345a87ee77c5104cd68bd26b5ce) == 5);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_youtube_dl$extractor$twitter(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_570fe2a02d0f64635817e75117d58f52;
static PyCodeObject *codeobj_4e8c8d087094259128b3af9f16ae10bd;
static PyCodeObject *codeobj_2f9556119d867d23d9016f5648b1cfca;
static PyCodeObject *codeobj_62616bde53760bb59570b5e2ff99528b;
static PyCodeObject *codeobj_354d4a14801b795d9517bc2323cd3bed;
static PyCodeObject *codeobj_ea089bfcef10064a393e947add0cae46;
static PyCodeObject *codeobj_14587e7da8c76f1e0caeb6b5a386002c;
static PyCodeObject *codeobj_c63d8f61bb5501847bebb1a163633f0d;
static PyCodeObject *codeobj_5d7f3f4d04d4e7cc490225dab05a1ff8;
static PyCodeObject *codeobj_fc2e208b45af8c968b24b07833a17bd9;
static PyCodeObject *codeobj_ffb7e7bfcbf6cce88071ec15407e5c85;
static PyCodeObject *codeobj_729601332d7bede059f31efc5959ae98;
static PyCodeObject *codeobj_a6214a83054bdc081f4ffe7a0cf90761;
static PyCodeObject *codeobj_7085610bbcfba0a44de814ecdf5aa16c;
static PyCodeObject *codeobj_72a40bee98f8051e3a89791d6c3b6786;
static PyCodeObject *codeobj_e6965e15a72154e800ba2063bdb6c6ab;
static PyCodeObject *codeobj_2b0ecdbe36ffd6641d199d2c1e18c3e0;
static PyCodeObject *codeobj_f649f058c5bc65be149e8e834b832efd;
static PyCodeObject *codeobj_5b249ebb56089a54f3c2f8011560f48e;
static PyCodeObject *codeobj_f979f3816df0f298d745c2f3306fd5a9;
static PyCodeObject *codeobj_bc677129562400a878cfafa5c57ec9bc;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_d87f02c55e687019d731a3b4c65b35ca;
    codeobj_570fe2a02d0f64635817e75117d58f52 = MAKE_CODEOBJECT(module_filename_obj, 406, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_angle_lambda, const_tuple_str_plain_x_tuple, 1, 0, 0);
    codeobj_4e8c8d087094259128b3af9f16ae10bd = MAKE_CODEOBJECT(module_filename_obj, 427, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_angle_lambda, const_tuple_str_plain_x_tuple, 1, 0, 0);
    codeobj_2f9556119d867d23d9016f5648b1cfca = MAKE_CODEOBJECT(module_filename_obj, 462, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_angle_lambda, const_tuple_str_plain_x_tuple, 1, 0, 0);
    codeobj_62616bde53760bb59570b5e2ff99528b = MAKE_CODEOBJECT(module_filename_obj, 511, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_angle_lambda, const_tuple_str_plain_x_tuple, 1, 0, 0);
    codeobj_354d4a14801b795d9517bc2323cd3bed = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_digest_3083a01789ea0f43dcc0ed119641327c, const_tuple_empty, 0, 0, 0);
    codeobj_ea089bfcef10064a393e947add0cae46 = MAKE_CODEOBJECT(module_filename_obj, 521, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain_TwitterAmplifyIE, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_14587e7da8c76f1e0caeb6b5a386002c = MAKE_CODEOBJECT(module_filename_obj, 31, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain_TwitterBaseIE, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_c63d8f61bb5501847bebb1a163633f0d = MAKE_CODEOBJECT(module_filename_obj, 577, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain_TwitterBroadcastIE, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_5d7f3f4d04d4e7cc490225dab05a1ff8 = MAKE_CODEOBJECT(module_filename_obj, 99, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain_TwitterCardIE, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_fc2e208b45af8c968b24b07833a17bd9 = MAKE_CODEOBJECT(module_filename_obj, 187, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain_TwitterIE, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_ffb7e7bfcbf6cce88071ec15407e5c85 = MAKE_CODEOBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain__call_api, const_tuple_d3fa32ebc0e1362d267a9362c3134649_tuple, 4, 0, 0);
    codeobj_729601332d7bede059f31efc5959ae98 = MAKE_CODEOBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain__extract_formats_from_vmap_url, const_tuple_b5bdfa05fc28b024803f3d7013eed6a6_tuple, 3, 0, 0);
    codeobj_a6214a83054bdc081f4ffe7a0cf90761 = MAKE_CODEOBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain__extract_variant_formats, const_tuple_f38a393c3e181ee2e3e3fb6de7946376_tuple, 3, 0, 0);
    codeobj_7085610bbcfba0a44de814ecdf5aa16c = MAKE_CODEOBJECT(module_filename_obj, 548, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS, const_str_plain__find_dimension, const_tuple_a9f7515f9dad0c5231b988f8882c373b_tuple, 1, 0, 0);
    codeobj_72a40bee98f8051e3a89791d6c3b6786 = MAKE_CODEOBJECT(module_filename_obj, 593, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain__real_extract, const_tuple_5b4b5972d99f94cbfc60051d5c784df6_tuple, 2, 0, 0);
    codeobj_e6965e15a72154e800ba2063bdb6c6ab = MAKE_CODEOBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain__real_extract, const_tuple_str_plain_self_str_plain_url_str_plain_status_id_tuple, 2, 0, 0);
    codeobj_2b0ecdbe36ffd6641d199d2c1e18c3e0 = MAKE_CODEOBJECT(module_filename_obj, 385, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain__real_extract, const_tuple_2ab1df84b09220f912c1a9ceaea1d9f9_tuple, 2, 0, 0);
    codeobj_f649f058c5bc65be149e8e834b832efd = MAKE_CODEOBJECT(module_filename_obj, 536, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain__real_extract, const_tuple_02d0d6b18c243ab41d06ce8455021038_tuple, 2, 0, 0);
    codeobj_5b249ebb56089a54f3c2f8011560f48e = MAKE_CODEOBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain__search_dimensions_in_video_url, const_tuple_str_plain_a_format_str_plain_video_url_str_plain_m_tuple, 2, 0, 0);
    codeobj_f979f3816df0f298d745c2f3306fd5a9 = MAKE_CODEOBJECT(module_filename_obj, 439, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS, const_str_plain_add_thumbnail, const_tuple_deffbcd9c7f99972d00cc9a7de99cd97_tuple, 2, 0, 0);
    codeobj_bc677129562400a878cfafa5c57ec9bc = MAKE_CODEOBJECT(module_filename_obj, 460, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS, const_str_plain_get_binding_value, const_tuple_str_plain_k_str_plain_o_str_plain_binding_values_tuple, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_1__extract_variant_formats();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_2__extract_formats_from_vmap_url();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_3__search_dimensions_in_video_url();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_4__call_api(PyObject *defaults);


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_5__real_extract();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_6__real_extract();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_1_lambda();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_2_lambda();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_3_add_thumbnail();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_4_get_binding_value();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_4_get_binding_value$$$function_1_lambda();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_5_lambda();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_7__real_extract();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_7__real_extract$$$function_1__find_dimension();


static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_8__real_extract();


// The module function definitions.
static PyObject *impl_youtube_dl$extractor$twitter$$$function_1__extract_variant_formats(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_variant = python_pars[1];
    PyObject *par_video_id = python_pars[2];
    PyObject *var_variant_url = NULL;
    PyObject *var_tbr = NULL;
    PyObject *var_f = NULL;
    struct Nuitka_FrameObject *frame_a6214a83054bdc081f4ffe7a0cf90761;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_a6214a83054bdc081f4ffe7a0cf90761 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a6214a83054bdc081f4ffe7a0cf90761)) {
        Py_XDECREF(cache_frame_a6214a83054bdc081f4ffe7a0cf90761);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a6214a83054bdc081f4ffe7a0cf90761 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a6214a83054bdc081f4ffe7a0cf90761 = MAKE_FUNCTION_FRAME(codeobj_a6214a83054bdc081f4ffe7a0cf90761, module_youtube_dl$extractor$twitter, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a6214a83054bdc081f4ffe7a0cf90761->m_type_description == NULL);
    frame_a6214a83054bdc081f4ffe7a0cf90761 = cache_frame_a6214a83054bdc081f4ffe7a0cf90761;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a6214a83054bdc081f4ffe7a0cf90761);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a6214a83054bdc081f4ffe7a0cf90761) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_variant);
        tmp_called_instance_1 = par_variant;
        frame_a6214a83054bdc081f4ffe7a0cf90761->m_frame.f_lineno = 37;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_url_tuple, 0));

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_variant_url == NULL);
        var_variant_url = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(var_variant_url);
        tmp_operand_name_1 = var_variant_url;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooooo";
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
    tmp_return_value = PyList_New(0);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = const_str_digest_f763ddcff033a47786508ef6a58d4f3b;
        CHECK_OBJECT(var_variant_url);
        tmp_compexpr_right_1 = var_variant_url;
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain__extract_m3u8_formats);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_variant_url);
        tmp_tuple_element_1 = var_variant_url;
        tmp_args_name_1 = PyTuple_New(4);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_video_id);
        tmp_tuple_element_1 = par_video_id;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_str_plain_mp4;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 2, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_str_plain_m3u8_native;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 3, tmp_tuple_element_1);
        tmp_kw_name_1 = PyDict_Copy(const_dict_7e1d509d9f0adef67df7fa8dd2e83c7a);
        frame_a6214a83054bdc081f4ffe7a0cf90761->m_frame.f_lineno = 41;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_int_or_none);

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

            exception_lineno = 45;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_dict_get);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_dict_get);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 33780 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 45;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_2;
        CHECK_OBJECT(par_variant);
        tmp_args_element_name_2 = par_variant;
        tmp_args_element_name_3 = const_tuple_str_plain_bitrate_str_plain_bit_rate_tuple;
        frame_a6214a83054bdc081f4ffe7a0cf90761->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = const_int_pos_1000;
        frame_a6214a83054bdc081f4ffe7a0cf90761->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_4};
            tmp_or_left_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 45;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = Py_None;
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_2 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_tbr == NULL);
        var_tbr = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_1 = const_str_plain_url;
        CHECK_OBJECT(var_variant_url);
        tmp_dict_value_1 = var_variant_url;
        tmp_assign_source_3 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_format_id;
        tmp_left_name_1 = const_str_plain_http;
        CHECK_OBJECT(var_tbr);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_tbr);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);

            exception_lineno = 48;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_left_name_2 = const_str_digest_12418a5efd7fc5b743c4fe5f9703e6d9;
        CHECK_OBJECT(var_tbr);
        tmp_right_name_2 = var_tbr;
        tmp_right_name_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);

            exception_lineno = 48;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_right_name_1 = const_str_empty;
        Py_INCREF(tmp_right_name_1);
        condexpr_end_1:;
        tmp_dict_value_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);

            exception_lineno = 48;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_tbr;
        CHECK_OBJECT(var_tbr);
        tmp_dict_value_3 = var_tbr;
        tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        assert(var_f == NULL);
        var_f = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_f);
        tmp_args_element_name_5 = var_f;
        CHECK_OBJECT(var_variant_url);
        tmp_args_element_name_6 = var_variant_url;
        frame_a6214a83054bdc081f4ffe7a0cf90761->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, const_str_plain__search_dimensions_in_video_url, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(var_f);
        tmp_list_element_1 = var_f;
        tmp_return_value = PyList_New(1);
        Py_INCREF(tmp_list_element_1);
        PyList_SET_ITEM(tmp_return_value, 0, tmp_list_element_1);
        goto frame_return_exit_1;
    }
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a6214a83054bdc081f4ffe7a0cf90761);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a6214a83054bdc081f4ffe7a0cf90761);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a6214a83054bdc081f4ffe7a0cf90761);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a6214a83054bdc081f4ffe7a0cf90761, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a6214a83054bdc081f4ffe7a0cf90761->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a6214a83054bdc081f4ffe7a0cf90761, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a6214a83054bdc081f4ffe7a0cf90761,
        type_description_1,
        par_self,
        par_variant,
        par_video_id,
        var_variant_url,
        var_tbr,
        var_f
    );


    // Release cached frame.
    if (frame_a6214a83054bdc081f4ffe7a0cf90761 == cache_frame_a6214a83054bdc081f4ffe7a0cf90761) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_a6214a83054bdc081f4ffe7a0cf90761);
    }
    cache_frame_a6214a83054bdc081f4ffe7a0cf90761 = NULL;

    assertFrameObject(frame_a6214a83054bdc081f4ffe7a0cf90761);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_variant_url);
    Py_DECREF(var_variant_url);
    var_variant_url = NULL;

    Py_XDECREF(var_tbr);
    var_tbr = NULL;

    Py_XDECREF(var_f);
    var_f = NULL;

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

    Py_XDECREF(var_variant_url);
    var_variant_url = NULL;

    Py_XDECREF(var_tbr);
    var_tbr = NULL;

    Py_XDECREF(var_f);
    var_f = NULL;

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
    CHECK_OBJECT(par_variant);
    Py_DECREF(par_variant);
    CHECK_OBJECT(par_video_id);
    Py_DECREF(par_video_id);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_variant);
    Py_DECREF(par_variant);
    CHECK_OBJECT(par_video_id);
    Py_DECREF(par_video_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$twitter$$$function_2__extract_formats_from_vmap_url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_vmap_url = python_pars[1];
    PyObject *par_video_id = python_pars[2];
    PyObject *var_vmap_data = NULL;
    PyObject *var_formats = NULL;
    PyObject *var_urls = NULL;
    PyObject *var_video_variant = NULL;
    PyObject *var_video_url = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_729601332d7bede059f31efc5959ae98;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_729601332d7bede059f31efc5959ae98 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_729601332d7bede059f31efc5959ae98)) {
        Py_XDECREF(cache_frame_729601332d7bede059f31efc5959ae98);

#if _DEBUG_REFCOUNTS
        if (cache_frame_729601332d7bede059f31efc5959ae98 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_729601332d7bede059f31efc5959ae98 = MAKE_FUNCTION_FRAME(codeobj_729601332d7bede059f31efc5959ae98, module_youtube_dl$extractor$twitter, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_729601332d7bede059f31efc5959ae98->m_type_description == NULL);
    frame_729601332d7bede059f31efc5959ae98 = cache_frame_729601332d7bede059f31efc5959ae98;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_729601332d7bede059f31efc5959ae98);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_729601332d7bede059f31efc5959ae98) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_vmap_url);
        tmp_args_element_name_1 = par_vmap_url;
        CHECK_OBJECT(par_video_id);
        tmp_args_element_name_2 = par_video_id;
        frame_729601332d7bede059f31efc5959ae98->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain__download_xml, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vmap_data == NULL);
        var_vmap_data = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New(0);
        assert(var_formats == NULL);
        var_formats = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyList_New(0);
        assert(var_urls == NULL);
        var_urls = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_vmap_data);
        tmp_called_instance_2 = var_vmap_data;
        frame_729601332d7bede059f31efc5959ae98->m_frame.f_lineno = 58;
        tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_findall, &PyTuple_GET_ITEM(const_tuple_str_digest_f5575058af023bf4bc47b99442f454d5_tuple, 0));

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooo";
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
                type_description_1 = "oooooooo";
                exception_lineno = 58;
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
            PyObject *old = var_video_variant;
            var_video_variant = tmp_assign_source_6;
            Py_INCREF(var_video_variant);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_ass_subscript_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_compat_urllib_parse_unquote);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_compat_urllib_parse_unquote);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 30224 ], 49, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(var_video_variant);
        tmp_expression_name_2 = var_video_variant;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_attrib);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_name_1 = const_str_plain_url;
        tmp_args_element_name_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_729601332d7bede059f31efc5959ae98->m_frame.f_lineno = 59;
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_video_variant);
        tmp_expression_name_3 = var_video_variant;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain_attrib);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 59;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_ass_subscript_1 = const_str_plain_url;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(var_urls);
        tmp_expression_name_4 = var_urls;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain_append);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_video_variant);
        tmp_expression_name_6 = var_video_variant;
        tmp_expression_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, const_str_plain_attrib);
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 61;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_name_2 = const_str_plain_url;
        tmp_args_element_name_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_2);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 61;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_729601332d7bede059f31efc5959ae98->m_frame.f_lineno = 61;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT(var_formats);
        tmp_expression_name_7 = var_formats;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, const_str_plain_extend);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_8 = par_self;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, const_str_plain__extract_variant_formats);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 62;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_video_variant);
        tmp_expression_name_9 = var_video_variant;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, const_str_plain_attrib);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 63;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_video_id);
        tmp_args_element_name_7 = par_video_id;
        frame_729601332d7bede059f31efc5959ae98->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_args_element_name_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 62;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_729601332d7bede059f31efc5959ae98->m_frame.f_lineno = 62;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 58;
        type_description_1 = "oooooooo";
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_strip_or_none);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_strip_or_none);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 34189 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 64;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_xpath_text);

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

            exception_lineno = 64;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_3;
        CHECK_OBJECT(var_vmap_data);
        tmp_args_element_name_9 = var_vmap_data;
        tmp_args_element_name_10 = const_str_digest_d9ce3eefff757b367a64995fc318b12b;
        frame_729601332d7bede059f31efc5959ae98->m_frame.f_lineno = 64;
        {
            PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10};
            tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_6, call_args);
        }

        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_729601332d7bede059f31efc5959ae98->m_frame.f_lineno = 64;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_8);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_video_url == NULL);
        var_video_url = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_video_url);
        tmp_compexpr_left_1 = var_video_url;
        CHECK_OBJECT(var_urls);
        tmp_compexpr_right_1 = var_urls;
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_args_element_name_13;
        CHECK_OBJECT(var_formats);
        tmp_expression_name_10 = var_formats;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, const_str_plain_extend);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        tmp_dict_key_1 = const_str_plain_url;
        CHECK_OBJECT(var_video_url);
        tmp_dict_value_1 = var_video_url;
        tmp_args_element_name_12 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_12, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_video_id);
        tmp_args_element_name_13 = par_video_id;
        frame_729601332d7bede059f31efc5959ae98->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = {tmp_args_element_name_12, tmp_args_element_name_13};
            tmp_args_element_name_11 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_3, const_str_plain__extract_variant_formats, call_args);
        }

        Py_DECREF(tmp_args_element_name_12);
        if (tmp_args_element_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 66;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_729601332d7bede059f31efc5959ae98->m_frame.f_lineno = 66;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_11);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_11);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_729601332d7bede059f31efc5959ae98);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_729601332d7bede059f31efc5959ae98);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_729601332d7bede059f31efc5959ae98, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_729601332d7bede059f31efc5959ae98->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_729601332d7bede059f31efc5959ae98, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_729601332d7bede059f31efc5959ae98,
        type_description_1,
        par_self,
        par_vmap_url,
        par_video_id,
        var_vmap_data,
        var_formats,
        var_urls,
        var_video_variant,
        var_video_url
    );


    // Release cached frame.
    if (frame_729601332d7bede059f31efc5959ae98 == cache_frame_729601332d7bede059f31efc5959ae98) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_729601332d7bede059f31efc5959ae98);
    }
    cache_frame_729601332d7bede059f31efc5959ae98 = NULL;

    assertFrameObject(frame_729601332d7bede059f31efc5959ae98);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_formats);
    tmp_return_value = var_formats;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_vmap_data);
    Py_DECREF(var_vmap_data);
    var_vmap_data = NULL;

    CHECK_OBJECT(var_formats);
    Py_DECREF(var_formats);
    var_formats = NULL;

    CHECK_OBJECT(var_urls);
    Py_DECREF(var_urls);
    var_urls = NULL;

    Py_XDECREF(var_video_variant);
    var_video_variant = NULL;

    CHECK_OBJECT(var_video_url);
    Py_DECREF(var_video_url);
    var_video_url = NULL;

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

    Py_XDECREF(var_vmap_data);
    var_vmap_data = NULL;

    Py_XDECREF(var_formats);
    var_formats = NULL;

    Py_XDECREF(var_urls);
    var_urls = NULL;

    Py_XDECREF(var_video_variant);
    var_video_variant = NULL;

    Py_XDECREF(var_video_url);
    var_video_url = NULL;

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
    CHECK_OBJECT(par_vmap_url);
    Py_DECREF(par_vmap_url);
    CHECK_OBJECT(par_video_id);
    Py_DECREF(par_video_id);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_vmap_url);
    Py_DECREF(par_vmap_url);
    CHECK_OBJECT(par_video_id);
    Py_DECREF(par_video_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$twitter$$$function_3__search_dimensions_in_video_url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a_format = python_pars[0];
    PyObject *par_video_url = python_pars[1];
    PyObject *var_m = NULL;
    struct Nuitka_FrameObject *frame_5b249ebb56089a54f3c2f8011560f48e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5b249ebb56089a54f3c2f8011560f48e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5b249ebb56089a54f3c2f8011560f48e)) {
        Py_XDECREF(cache_frame_5b249ebb56089a54f3c2f8011560f48e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5b249ebb56089a54f3c2f8011560f48e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5b249ebb56089a54f3c2f8011560f48e = MAKE_FUNCTION_FRAME(codeobj_5b249ebb56089a54f3c2f8011560f48e, module_youtube_dl$extractor$twitter, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5b249ebb56089a54f3c2f8011560f48e->m_type_description == NULL);
    frame_5b249ebb56089a54f3c2f8011560f48e = cache_frame_5b249ebb56089a54f3c2f8011560f48e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5b249ebb56089a54f3c2f8011560f48e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5b249ebb56089a54f3c2f8011560f48e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_re);

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

            exception_lineno = 71;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = const_str_digest_326ae1925bd1d396fe6c60efa485c09a;
        CHECK_OBJECT(par_video_url);
        tmp_args_element_name_2 = par_video_url;
        frame_5b249ebb56089a54f3c2f8011560f48e->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_search, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_m == NULL);
        var_m = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_m);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_m);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_a_format);
        tmp_expression_name_1 = par_a_format;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_update);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_width;
        CHECK_OBJECT(var_m);
        tmp_called_instance_2 = var_m;
        frame_5b249ebb56089a54f3c2f8011560f48e->m_frame.f_lineno = 74;
        tmp_int_arg_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_group, &PyTuple_GET_ITEM(const_tuple_str_plain_width_tuple, 0));

        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 74;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 74;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_3, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_height;
        CHECK_OBJECT(var_m);
        tmp_called_instance_3 = var_m;
        frame_5b249ebb56089a54f3c2f8011560f48e->m_frame.f_lineno = 75;
        tmp_int_arg_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_group, &PyTuple_GET_ITEM(const_tuple_str_plain_height_tuple, 0));

        if (tmp_int_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_3);

            exception_lineno = 75;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_3);

            exception_lineno = 75;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_3, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_5b249ebb56089a54f3c2f8011560f48e->m_frame.f_lineno = 73;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5b249ebb56089a54f3c2f8011560f48e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5b249ebb56089a54f3c2f8011560f48e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5b249ebb56089a54f3c2f8011560f48e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5b249ebb56089a54f3c2f8011560f48e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5b249ebb56089a54f3c2f8011560f48e, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5b249ebb56089a54f3c2f8011560f48e,
        type_description_1,
        par_a_format,
        par_video_url,
        var_m
    );


    // Release cached frame.
    if (frame_5b249ebb56089a54f3c2f8011560f48e == cache_frame_5b249ebb56089a54f3c2f8011560f48e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_5b249ebb56089a54f3c2f8011560f48e);
    }
    cache_frame_5b249ebb56089a54f3c2f8011560f48e = NULL;

    assertFrameObject(frame_5b249ebb56089a54f3c2f8011560f48e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_m);
    Py_DECREF(var_m);
    var_m = NULL;

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

    Py_XDECREF(var_m);
    var_m = NULL;

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
    CHECK_OBJECT(par_a_format);
    Py_DECREF(par_a_format);
    CHECK_OBJECT(par_video_url);
    Py_DECREF(par_video_url);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a_format);
    Py_DECREF(par_a_format);
    CHECK_OBJECT(par_video_url);
    Py_DECREF(par_video_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$twitter$$$function_4__call_api(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_video_id = python_pars[2];
    PyObject *par_query = python_pars[3];
    PyObject *var_headers = NULL;
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_ffb7e7bfcbf6cce88071ec15407e5c85;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_return_value = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_ffb7e7bfcbf6cce88071ec15407e5c85 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_Copy(const_dict_9f59a5753762d057c60e58a3e5b02c01);
        assert(var_headers == NULL);
        var_headers = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_ffb7e7bfcbf6cce88071ec15407e5c85)) {
        Py_XDECREF(cache_frame_ffb7e7bfcbf6cce88071ec15407e5c85);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ffb7e7bfcbf6cce88071ec15407e5c85 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ffb7e7bfcbf6cce88071ec15407e5c85 = MAKE_FUNCTION_FRAME(codeobj_ffb7e7bfcbf6cce88071ec15407e5c85, module_youtube_dl$extractor$twitter, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ffb7e7bfcbf6cce88071ec15407e5c85->m_type_description == NULL);
    frame_ffb7e7bfcbf6cce88071ec15407e5c85 = cache_frame_ffb7e7bfcbf6cce88071ec15407e5c85;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ffb7e7bfcbf6cce88071ec15407e5c85);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ffb7e7bfcbf6cce88071ec15407e5c85) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain__GUEST_TOKEN);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooo";
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
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_right_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain__download_json);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_4 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain__API_BASE);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 84;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_str_digest_04360bdcf93758ed97373094dc559492;
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 84;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(3);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_video_id);
        tmp_tuple_element_1 = par_video_id;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_str_digest_6473ed893522b15ece5f7e069544b640;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 2, tmp_tuple_element_1);
        tmp_dict_key_1 = const_str_plain_data;
        tmp_dict_value_1 = const_bytes_empty;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_headers;
        CHECK_OBJECT(var_headers);
        tmp_dict_value_2 = var_headers;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_ffb7e7bfcbf6cce88071ec15407e5c85->m_frame.f_lineno = 83;
        tmp_expression_name_2 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_str_plain_guest_token;
        tmp_assattr_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__GUEST_TOKEN, tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_expression_name_5;
        CHECK_OBJECT(par_self);
        tmp_expression_name_5 = par_self;
        tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_name_5, const_str_plain__GUEST_TOKEN);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_headers);
        tmp_dictset_dict = var_headers;
        tmp_dictset_key = const_str_digest_e574ade18dfb783143144ca799dec10c;
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    // Tried code:
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_right_name_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_name_6 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, const_str_plain__download_json);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_7 = par_self;
        tmp_left_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, const_str_plain__API_BASE);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 90;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_path);
        tmp_right_name_2 = par_path;
        tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_left_name_2);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 90;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_args_name_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_video_id);
        tmp_tuple_element_2 = par_video_id;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_2);
        tmp_dict_key_3 = const_str_plain_headers;
        CHECK_OBJECT(var_headers);
        tmp_dict_value_3 = var_headers;
        tmp_kw_name_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_query;
        CHECK_OBJECT(par_query);
        tmp_dict_value_4 = par_query;
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        frame_ffb7e7bfcbf6cce88071ec15407e5c85->m_frame.f_lineno = 89;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooo";
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_ffb7e7bfcbf6cce88071ec15407e5c85, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_ffb7e7bfcbf6cce88071ec15407e5c85, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    PyException_SetTraceback(exception_keeper_value_1, (PyObject *)exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_ExtractorError);

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

            exception_lineno = 91;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooo";
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
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_e = tmp_assign_source_2;
    }
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_tmp_and_right_value_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_e);
        tmp_expression_name_8 = var_e;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, const_str_plain_cause);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_compat_HTTPError);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_compat_HTTPError);
        }

        if (tmp_mvar_value_2 == NULL) {
            Py_DECREF(tmp_isinstance_inst_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35442 ], 38, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_2;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_e);
        tmp_expression_name_10 = var_e;
        tmp_expression_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, const_str_plain_cause);
        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, const_str_plain_code);
        Py_DECREF(tmp_expression_name_9);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_compexpr_right_2 = const_int_pos_403;
        tmp_tmp_and_right_value_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_tmp_and_right_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_and_right_value_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_right_value_1_object_1);

            exception_lineno = 92;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_and_right_value_1_object_1);
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_kw_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_ExtractorError);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtractorError);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27135 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_name_14 = par_self;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, const_str_plain__parse_json);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_e);
        tmp_expression_name_15 = var_e;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, const_str_plain_cause);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        frame_ffb7e7bfcbf6cce88071ec15407e5c85->m_frame.f_lineno = 94;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_read);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        frame_ffb7e7bfcbf6cce88071ec15407e5c85->m_frame.f_lineno = 94;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_decode);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_video_id);
        tmp_args_element_name_2 = par_video_id;
        frame_ffb7e7bfcbf6cce88071ec15407e5c85->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_expression_name_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_subscript_name_2 = const_str_plain_errors;
        tmp_expression_name_12 = LOOKUP_SUBSCRIPT(tmp_expression_name_13, tmp_subscript_name_2);
        Py_DECREF(tmp_expression_name_13);
        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_subscript_name_3 = const_int_0;
        tmp_expression_name_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_12, tmp_subscript_name_3, 0);
        Py_DECREF(tmp_expression_name_12);
        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_subscript_name_4 = const_str_plain_message;
        tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_11, tmp_subscript_name_4);
        Py_DECREF(tmp_expression_name_11);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_args_name_3 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_3, 0, tmp_tuple_element_3);
        tmp_kw_name_3 = PyDict_Copy(const_dict_5a4b43d9442068c8ed68fb42270f3fd3);
        frame_ffb7e7bfcbf6cce88071ec15407e5c85->m_frame.f_lineno = 93;
        tmp_raise_type_1 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3);
        Py_DECREF(tmp_args_name_3);
        Py_DECREF(tmp_kw_name_3);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 93;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 96;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ffb7e7bfcbf6cce88071ec15407e5c85->m_frame) frame_ffb7e7bfcbf6cce88071ec15407e5c85->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_4;
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
    // End of try:
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 88;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ffb7e7bfcbf6cce88071ec15407e5c85->m_frame) frame_ffb7e7bfcbf6cce88071ec15407e5c85->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
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
    // End of try:
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ffb7e7bfcbf6cce88071ec15407e5c85);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ffb7e7bfcbf6cce88071ec15407e5c85);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ffb7e7bfcbf6cce88071ec15407e5c85);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ffb7e7bfcbf6cce88071ec15407e5c85, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ffb7e7bfcbf6cce88071ec15407e5c85->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ffb7e7bfcbf6cce88071ec15407e5c85, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ffb7e7bfcbf6cce88071ec15407e5c85,
        type_description_1,
        par_self,
        par_path,
        par_video_id,
        par_query,
        var_headers,
        var_e
    );


    // Release cached frame.
    if (frame_ffb7e7bfcbf6cce88071ec15407e5c85 == cache_frame_ffb7e7bfcbf6cce88071ec15407e5c85) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_ffb7e7bfcbf6cce88071ec15407e5c85);
    }
    cache_frame_ffb7e7bfcbf6cce88071ec15407e5c85 = NULL;

    assertFrameObject(frame_ffb7e7bfcbf6cce88071ec15407e5c85);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_headers);
    Py_DECREF(var_headers);
    var_headers = NULL;

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

    CHECK_OBJECT(var_headers);
    Py_DECREF(var_headers);
    var_headers = NULL;

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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_video_id);
    Py_DECREF(par_video_id);
    CHECK_OBJECT(par_query);
    Py_DECREF(par_query);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_video_id);
    Py_DECREF(par_video_id);
    CHECK_OBJECT(par_query);
    Py_DECREF(par_query);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$twitter$$$function_5__real_extract(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *var_status_id = NULL;
    struct Nuitka_FrameObject *frame_e6965e15a72154e800ba2063bdb6c6ab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e6965e15a72154e800ba2063bdb6c6ab = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e6965e15a72154e800ba2063bdb6c6ab)) {
        Py_XDECREF(cache_frame_e6965e15a72154e800ba2063bdb6c6ab);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e6965e15a72154e800ba2063bdb6c6ab == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e6965e15a72154e800ba2063bdb6c6ab = MAKE_FUNCTION_FRAME(codeobj_e6965e15a72154e800ba2063bdb6c6ab, module_youtube_dl$extractor$twitter, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e6965e15a72154e800ba2063bdb6c6ab->m_type_description == NULL);
    frame_e6965e15a72154e800ba2063bdb6c6ab = cache_frame_e6965e15a72154e800ba2063bdb6c6ab;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e6965e15a72154e800ba2063bdb6c6ab);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e6965e15a72154e800ba2063bdb6c6ab) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_1 = par_url;
        frame_e6965e15a72154e800ba2063bdb6c6ab->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain__match_id, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_status_id == NULL);
        var_status_id = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_url_result);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = const_str_digest_997c89372b15d7115527386a7bc81333;
        CHECK_OBJECT(var_status_id);
        tmp_right_name_1 = var_status_id;
        tmp_args_element_name_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 183;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_TwitterIE);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_TwitterIE);
        }

        if (tmp_mvar_value_1 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_2);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 50574 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 184;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        frame_e6965e15a72154e800ba2063bdb6c6ab->m_frame.f_lineno = 184;
        tmp_args_element_name_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_ie_key);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 184;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_status_id);
        tmp_args_element_name_4 = var_status_id;
        frame_e6965e15a72154e800ba2063bdb6c6ab->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e6965e15a72154e800ba2063bdb6c6ab);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e6965e15a72154e800ba2063bdb6c6ab);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e6965e15a72154e800ba2063bdb6c6ab);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e6965e15a72154e800ba2063bdb6c6ab, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e6965e15a72154e800ba2063bdb6c6ab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e6965e15a72154e800ba2063bdb6c6ab, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e6965e15a72154e800ba2063bdb6c6ab,
        type_description_1,
        par_self,
        par_url,
        var_status_id
    );


    // Release cached frame.
    if (frame_e6965e15a72154e800ba2063bdb6c6ab == cache_frame_e6965e15a72154e800ba2063bdb6c6ab) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_e6965e15a72154e800ba2063bdb6c6ab);
    }
    cache_frame_e6965e15a72154e800ba2063bdb6c6ab = NULL;

    assertFrameObject(frame_e6965e15a72154e800ba2063bdb6c6ab);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_status_id);
    Py_DECREF(var_status_id);
    var_status_id = NULL;

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

    Py_XDECREF(var_status_id);
    var_status_id = NULL;

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


static PyObject *impl_youtube_dl$extractor$twitter$$$function_6__real_extract(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *var_twid = NULL;
    PyObject *var_status = NULL;
    PyObject *var_title = NULL;
    PyObject *var_description = NULL;
    PyObject *var_user = NULL;
    PyObject *var_uploader = NULL;
    PyObject *var_uploader_id = NULL;
    PyObject *var_tags = NULL;
    PyObject *var_hashtag = NULL;
    PyObject *var_hashtag_text = NULL;
    PyObject *var_info = NULL;
    PyObject *var_media = NULL;
    PyObject *var_video_info = NULL;
    PyObject *var_formats = NULL;
    PyObject *var_variant = NULL;
    struct Nuitka_CellObject *var_thumbnails = PyCell_EMPTY();
    struct Nuitka_CellObject *var_media_url = PyCell_EMPTY();
    PyObject *var_add_thumbnail = NULL;
    PyObject *var_name = NULL;
    PyObject *var_size = NULL;
    PyObject *var_card = NULL;
    struct Nuitka_CellObject *var_binding_values = PyCell_EMPTY();
    PyObject *var_get_binding_value = NULL;
    PyObject *var_card_name = NULL;
    PyObject *var_is_amplify = NULL;
    PyObject *var_vmap_url = NULL;
    PyObject *var_content_id = NULL;
    PyObject *var_suffix = NULL;
    PyObject *var_image = NULL;
    PyObject *var_image_url = NULL;
    PyObject *var_expanded_url = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_2b0ecdbe36ffd6641d199d2c1e18c3e0;
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
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_2b0ecdbe36ffd6641d199d2c1e18c3e0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2b0ecdbe36ffd6641d199d2c1e18c3e0)) {
        Py_XDECREF(cache_frame_2b0ecdbe36ffd6641d199d2c1e18c3e0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2b0ecdbe36ffd6641d199d2c1e18c3e0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2b0ecdbe36ffd6641d199d2c1e18c3e0 = MAKE_FUNCTION_FRAME(codeobj_2b0ecdbe36ffd6641d199d2c1e18c3e0, module_youtube_dl$extractor$twitter, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_type_description == NULL);
    frame_2b0ecdbe36ffd6641d199d2c1e18c3e0 = cache_frame_2b0ecdbe36ffd6641d199d2c1e18c3e0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2b0ecdbe36ffd6641d199d2c1e18c3e0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2b0ecdbe36ffd6641d199d2c1e18c3e0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_1 = par_url;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 386;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain__match_id, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_twid == NULL);
        var_twid = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain__call_api);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = const_str_digest_4dbaa7c7706ebc9f3929bfbd8e3be477;
        CHECK_OBJECT(var_twid);
        tmp_right_name_1 = var_twid;
        tmp_args_element_name_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 388;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_twid);
        tmp_args_element_name_3 = var_twid;
        tmp_args_element_name_4 = PyDict_Copy(const_dict_b44f1345a87ee77c5104cd68bd26b5ce);
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 387;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_status == NULL);
        var_status = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(var_status);
        tmp_expression_name_2 = var_status;
        tmp_subscript_name_1 = const_str_plain_full_text;
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 396;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, const_str_plain_replace, &PyTuple_GET_ITEM(const_tuple_str_newline_str_space_tuple, 0));

        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_4 = tmp_assign_unpack_1__assign_source;
        assert(var_title == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_title = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_5 = tmp_assign_unpack_1__assign_source;
        assert(var_description == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_description = tmp_assign_source_5;
    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_re);

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

            exception_lineno = 398;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_1;
        tmp_args_element_name_5 = const_str_digest_040b492e76392dd52ab34a7efaeab884;
        tmp_args_element_name_6 = const_str_empty;
        CHECK_OBJECT(var_title);
        tmp_args_element_name_7 = var_title;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 398;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_3, const_str_plain_sub, call_args);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_title;
            assert(old != NULL);
            var_title = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(var_status);
        tmp_called_instance_4 = var_status;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 399;
        tmp_or_left_value_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_user_tuple, 0));

        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 399;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
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
        tmp_assign_source_7 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_7 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_user == NULL);
        var_user = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(var_user);
        tmp_called_instance_5 = var_user;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 400;
        tmp_assign_source_8 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_name_tuple, 0));

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_uploader == NULL);
        var_uploader = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_uploader);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_uploader);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_1;
        tmp_left_name_2 = const_str_digest_ff5e3b1ae0d95ffe8b3d72657a27de19;
        CHECK_OBJECT(var_uploader);
        tmp_tuple_element_1 = var_uploader;
        tmp_right_name_2 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_title);
        tmp_tuple_element_1 = var_title;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_1);
        tmp_assign_source_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_title;
            assert(old != NULL);
            var_title = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(var_user);
        tmp_called_instance_6 = var_user;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 403;
        tmp_assign_source_10 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_screen_name_tuple, 0));

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_uploader_id == NULL);
        var_uploader_id = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = PyList_New(0);
        assert(var_tags == NULL);
        var_tags = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_1;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_try_get);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_try_get);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 33587 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 406;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT(var_status);
        tmp_args_element_name_8 = var_status;
        tmp_args_element_name_9 = MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_1_lambda();



        tmp_args_element_name_10 = (PyObject *)&PyList_Type;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 406;
        {
            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10};
            tmp_or_left_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_9);
        if (tmp_or_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 406;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        tmp_or_right_value_2 = PyList_New(0);
        tmp_iter_arg_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_iter_arg_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
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
                type_description_1 = "oooooooooooooooooccoooocooooooooo";
                exception_lineno = 406;
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
            PyObject *old = var_hashtag;
            var_hashtag = tmp_assign_source_14;
            Py_INCREF(var_hashtag);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_7;
        CHECK_OBJECT(var_hashtag);
        tmp_called_instance_7 = var_hashtag;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 407;
        tmp_assign_source_15 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_text_tuple, 0));

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_hashtag_text;
            var_hashtag_text = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(var_hashtag_text);
        tmp_operand_name_1 = var_hashtag_text;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
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
    goto loop_start_1;
    branch_no_2:;
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_11;
        CHECK_OBJECT(var_tags);
        tmp_called_instance_8 = var_tags;
        CHECK_OBJECT(var_hashtag_text);
        tmp_args_element_name_11 = var_hashtag_text;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 410;
        {
            PyObject *call_args[] = {tmp_args_element_name_11};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_8, const_str_plain_append, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 406;
        type_description_1 = "oooooooooooooooooccoooocooooooooo";
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
        PyObject *tmp_assign_source_16;
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
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_3;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        tmp_dict_key_1 = const_str_plain_id;
        CHECK_OBJECT(var_twid);
        tmp_dict_value_1 = var_twid;
        tmp_assign_source_16 = _PyDict_NewPresized( 12 );
        tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_title;
        CHECK_OBJECT(var_title);
        tmp_dict_value_2 = var_title;
        tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_description;
        CHECK_OBJECT(var_description);
        tmp_dict_value_3 = var_description;
        tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_uploader;
        CHECK_OBJECT(var_uploader);
        tmp_dict_value_4 = var_uploader;
        tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = const_str_plain_timestamp;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_unified_timestamp);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_unified_timestamp);
        }

        if (tmp_mvar_value_3 == NULL) {
            Py_DECREF(tmp_assign_source_16);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 33842 ], 39, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 417;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT(var_status);
        tmp_called_instance_9 = var_status;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 417;
        tmp_args_element_name_12 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_9, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_created_at_tuple, 0));

        if (tmp_args_element_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 417;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 417;
        tmp_dict_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_12);
        Py_DECREF(tmp_args_element_name_12);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 417;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = const_str_plain_uploader_id;
        CHECK_OBJECT(var_uploader_id);
        tmp_dict_value_6 = var_uploader_id;
        tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = const_str_plain_uploader_url;
        CHECK_OBJECT(var_uploader_id);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_uploader_id);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 419;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_left_name_3 = const_str_digest_cfe9634b20587cfd42027e5873dce3da;
        CHECK_OBJECT(var_uploader_id);
        tmp_right_name_3 = var_uploader_id;
        tmp_dict_value_7 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_3, tmp_right_name_3);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 419;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_dict_value_7 = Py_None;
        Py_INCREF(tmp_dict_value_7);
        condexpr_end_1:;
        tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_7, tmp_dict_value_7);
        Py_DECREF(tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = const_str_plain_like_count;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_int_or_none);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int_or_none);
        }

        if (tmp_mvar_value_4 == NULL) {
            Py_DECREF(tmp_assign_source_16);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27635 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 420;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT(var_status);
        tmp_called_instance_10 = var_status;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 420;
        tmp_args_element_name_13 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_10, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_favorite_count_tuple, 0));

        if (tmp_args_element_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 420;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 420;
        tmp_dict_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_13);
        Py_DECREF(tmp_args_element_name_13);
        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 420;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_8, tmp_dict_value_8);
        Py_DECREF(tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = const_str_plain_repost_count;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_int_or_none);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int_or_none);
        }

        if (tmp_mvar_value_5 == NULL) {
            Py_DECREF(tmp_assign_source_16);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27635 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 421;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_5;
        CHECK_OBJECT(var_status);
        tmp_called_instance_11 = var_status;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 421;
        tmp_args_element_name_14 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_11, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_retweet_count_tuple, 0));

        if (tmp_args_element_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 421;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 421;
        tmp_dict_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_14);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 421;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_9, tmp_dict_value_9);
        Py_DECREF(tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = const_str_plain_comment_count;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_int_or_none);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int_or_none);
        }

        if (tmp_mvar_value_6 == NULL) {
            Py_DECREF(tmp_assign_source_16);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27635 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 422;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_6;
        CHECK_OBJECT(var_status);
        tmp_called_instance_12 = var_status;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 422;
        tmp_args_element_name_15 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_12, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_reply_count_tuple, 0));

        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 422;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 422;
        tmp_dict_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_15);
        Py_DECREF(tmp_args_element_name_15);
        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 422;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_10, tmp_dict_value_10);
        Py_DECREF(tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = const_str_plain_age_limit;
        CHECK_OBJECT(var_status);
        tmp_called_instance_13 = var_status;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 423;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_13, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_possibly_sensitive_tuple, 0));

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 423;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 423;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_dict_value_11 = const_int_pos_18;
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_dict_value_11 = const_int_0;
        condexpr_end_2:;
        tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = const_str_plain_tags;
        CHECK_OBJECT(var_tags);
        tmp_dict_value_12 = var_tags;
        tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        assert(var_info == NULL);
        var_info = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_try_get);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_try_get);
        }

        if (tmp_mvar_value_7 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 33587 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 427;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_7;
        CHECK_OBJECT(var_status);
        tmp_args_element_name_16 = var_status;
        tmp_args_element_name_17 = MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_2_lambda();



        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 427;
        {
            PyObject *call_args[] = {tmp_args_element_name_16, tmp_args_element_name_17};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_7, call_args);
        }

        Py_DECREF(tmp_args_element_name_17);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_media == NULL);
        var_media = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_4;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_tmp_and_right_value_1_object_1;
        int tmp_truth_name_5;
        CHECK_OBJECT(var_media);
        tmp_truth_name_4 = CHECK_IF_TRUE(var_media);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_media);
        tmp_called_instance_14 = var_media;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 428;
        tmp_compexpr_left_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_14, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_type_tuple, 0));

        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_plain_photo;
        tmp_tmp_and_right_value_1_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_and_right_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_tmp_and_right_value_1_object_1);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_right_value_1_object_1);

            exception_lineno = 428;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_and_right_value_1_object_1);
        tmp_condition_result_5 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_5 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_18;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_called_instance_15;
        CHECK_OBJECT(var_media);
        tmp_called_instance_15 = var_media;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 429;
        tmp_or_left_value_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_15, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_video_info_tuple, 0));

        if (tmp_or_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_3);

            exception_lineno = 429;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
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
        tmp_assign_source_18 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_assign_source_18 = tmp_or_left_value_3;
        or_end_3:;
        assert(var_video_info == NULL);
        var_video_info = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = PyList_New(0);
        assert(var_formats == NULL);
        var_formats = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        CHECK_OBJECT(var_video_info);
        tmp_called_instance_16 = var_video_info;
        tmp_call_arg_element_1 = const_str_plain_variants;
        tmp_call_arg_element_2 = PyList_New(0);
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 432;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_iter_arg_2 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_16, const_str_plain_get, call_args);
        }

        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_20;
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
                type_description_1 = "oooooooooooooooooccoooocooooooooo";
                exception_lineno = 432;
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
            PyObject *old = var_variant;
            var_variant = tmp_assign_source_22;
            Py_INCREF(var_variant);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        CHECK_OBJECT(var_formats);
        tmp_expression_name_3 = var_formats;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain_extend);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_17 = par_self;
        CHECK_OBJECT(var_variant);
        tmp_args_element_name_19 = var_variant;
        CHECK_OBJECT(var_twid);
        tmp_args_element_name_20 = var_twid;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 433;
        {
            PyObject *call_args[] = {tmp_args_element_name_19, tmp_args_element_name_20};
            tmp_args_element_name_18 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_17, const_str_plain__extract_variant_formats, call_args);
        }

        if (tmp_args_element_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 433;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto try_except_handler_3;
        }
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 433;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_18);
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_18);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 432;
        type_description_1 = "oooooooooooooooooccoooocooooooooo";
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

    {
        PyObject *tmp_called_instance_18;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_21;
        CHECK_OBJECT(par_self);
        tmp_called_instance_18 = par_self;
        CHECK_OBJECT(var_formats);
        tmp_args_element_name_21 = var_formats;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 434;
        {
            PyObject *call_args[] = {tmp_args_element_name_21};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_18, const_str_plain__sort_formats, call_args);
        }

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = PyList_New(0);
        assert(PyCell_GET(var_thumbnails) == NULL);
        PyCell_SET(var_thumbnails, tmp_assign_source_23);

    }
    {
        PyObject *tmp_assign_source_24;
        int tmp_or_left_truth_4;
        PyObject *tmp_or_left_value_4;
        PyObject *tmp_or_right_value_4;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_called_instance_20;
        CHECK_OBJECT(var_media);
        tmp_called_instance_19 = var_media;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 437;
        tmp_or_left_value_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_19, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_media_url_https_tuple, 0));

        if (tmp_or_left_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
        if (tmp_or_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_4);

            exception_lineno = 437;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_4 == 1) {
            goto or_left_4;
        } else {
            goto or_right_4;
        }
        or_right_4:;
        Py_DECREF(tmp_or_left_value_4);
        CHECK_OBJECT(var_media);
        tmp_called_instance_20 = var_media;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 437;
        tmp_or_right_value_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_20, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_media_url_tuple, 0));

        if (tmp_or_right_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = tmp_or_right_value_4;
        goto or_end_4;
        or_left_4:;
        tmp_assign_source_24 = tmp_or_left_value_4;
        or_end_4:;
        assert(PyCell_GET(var_media_url) == NULL);
        PyCell_SET(var_media_url, tmp_assign_source_24);

    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_6;
        CHECK_OBJECT(PyCell_GET(var_media_url));
        tmp_truth_name_6 = CHECK_IF_TRUE(PyCell_GET(var_media_url));
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_3_add_thumbnail();

        ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[0] = var_media_url;
        Py_INCREF(((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[0]);
        ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[1] = var_thumbnails;
        Py_INCREF(((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[1]);


        assert(var_add_thumbnail == NULL);
        var_add_thumbnail = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_instance_21;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_call_arg_element_3;
        PyObject *tmp_call_arg_element_4;
        CHECK_OBJECT(var_media);
        tmp_called_instance_22 = var_media;
        tmp_call_arg_element_3 = const_str_plain_sizes;
        tmp_call_arg_element_4 = PyDict_New();
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 446;
        {
            PyObject *call_args[] = {tmp_call_arg_element_3, tmp_call_arg_element_4};
            tmp_called_instance_21 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_22, const_str_plain_get, call_args);
        }

        Py_DECREF(tmp_call_arg_element_4);
        if (tmp_called_instance_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 446;
        tmp_iter_arg_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_21, const_str_plain_items);
        Py_DECREF(tmp_called_instance_21);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_26 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_26;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_27 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_27 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooccoooocooooooooo";
                exception_lineno = 446;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_iter_arg_4 = tmp_for_loop_3__iter_value;
        tmp_assign_source_28 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_29 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_29 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            exception_lineno = 446;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_30 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_30 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            exception_lineno = 446;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_30;
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

                    type_description_1 = "oooooooooooooooooccoooocooooooooo";
                    exception_lineno = 446;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = const_str_digest_fcf040720b88d60da4ce975010c44a3a;
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            exception_lineno = 446;
            goto try_except_handler_6;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_31 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_31;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_32 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_size;
            var_size = tmp_assign_source_32;
            Py_INCREF(var_size);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_args_element_name_23;
        CHECK_OBJECT(var_add_thumbnail);
        tmp_called_name_9 = var_add_thumbnail;
        CHECK_OBJECT(var_name);
        tmp_args_element_name_22 = var_name;
        CHECK_OBJECT(var_size);
        tmp_args_element_name_23 = var_size;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 447;
        {
            PyObject *call_args[] = {tmp_args_element_name_22, tmp_args_element_name_23};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_9, call_args);
        }

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_5);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 446;
        type_description_1 = "oooooooooooooooooccoooocooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;

    {
        PyObject *tmp_called_name_10;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_args_element_name_25;
        int tmp_or_left_truth_5;
        PyObject *tmp_or_left_value_5;
        PyObject *tmp_or_right_value_5;
        PyObject *tmp_called_instance_23;
        CHECK_OBJECT(var_add_thumbnail);
        tmp_called_name_10 = var_add_thumbnail;
        tmp_args_element_name_24 = const_str_plain_orig;
        CHECK_OBJECT(var_media);
        tmp_called_instance_23 = var_media;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 448;
        tmp_or_left_value_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_23, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_original_info_tuple, 0));

        if (tmp_or_left_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_5 = CHECK_IF_TRUE(tmp_or_left_value_5);
        if (tmp_or_left_truth_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_5);

            exception_lineno = 448;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_5 == 1) {
            goto or_left_5;
        } else {
            goto or_right_5;
        }
        or_right_5:;
        Py_DECREF(tmp_or_left_value_5);
        tmp_or_right_value_5 = PyDict_New();
        tmp_args_element_name_25 = tmp_or_right_value_5;
        goto or_end_5;
        or_left_5:;
        tmp_args_element_name_25 = tmp_or_left_value_5;
        or_end_5:;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 448;
        {
            PyObject *call_args[] = {tmp_args_element_name_24, tmp_args_element_name_25};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_10, call_args);
        }

        Py_DECREF(tmp_args_element_name_25);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_4:;
    {
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_called_instance_24;
        PyObject *tmp_args_element_name_28;
        CHECK_OBJECT(var_info);
        tmp_expression_name_4 = var_info;
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain_update);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_13 = const_str_plain_formats;
        CHECK_OBJECT(var_formats);
        tmp_dict_value_13 = var_formats;
        tmp_args_element_name_26 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_26, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = const_str_plain_thumbnails;
        CHECK_OBJECT(PyCell_GET(var_thumbnails));
        tmp_dict_value_14 = PyCell_GET(var_thumbnails);
        tmp_res = PyDict_SetItem(tmp_args_element_name_26, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = const_str_plain_duration;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_float_or_none);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_float_or_none);
        }

        if (tmp_mvar_value_8 == NULL) {
            Py_DECREF(tmp_called_name_11);
            Py_DECREF(tmp_args_element_name_26);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 33881 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 453;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_12 = tmp_mvar_value_8;
        CHECK_OBJECT(var_video_info);
        tmp_called_instance_24 = var_video_info;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 453;
        tmp_args_element_name_27 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_24, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_duration_millis_tuple, 0));

        if (tmp_args_element_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);
            Py_DECREF(tmp_args_element_name_26);

            exception_lineno = 453;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_28 = const_int_pos_1000;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 453;
        {
            PyObject *call_args[] = {tmp_args_element_name_27, tmp_args_element_name_28};
            tmp_dict_value_15 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_12, call_args);
        }

        Py_DECREF(tmp_args_element_name_27);
        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);
            Py_DECREF(tmp_args_element_name_26);

            exception_lineno = 453;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_26, tmp_dict_key_15, tmp_dict_value_15);
        Py_DECREF(tmp_dict_value_15);
        assert(!(tmp_res != 0));
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 450;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_26);
        Py_DECREF(tmp_called_name_11);
        Py_DECREF(tmp_args_element_name_26);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_instance_25;
        CHECK_OBJECT(var_status);
        tmp_called_instance_25 = var_status;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 456;
        tmp_assign_source_33 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_25, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_card_tuple, 0));

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_card == NULL);
        var_card = tmp_assign_source_33;
    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_7;
        CHECK_OBJECT(var_card);
        tmp_truth_name_7 = CHECK_IF_TRUE(var_card);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(var_card);
        tmp_expression_name_5 = var_card;
        tmp_subscript_name_2 = const_str_plain_binding_values;
        tmp_assign_source_34 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_2);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        assert(PyCell_GET(var_binding_values) == NULL);
        PyCell_SET(var_binding_values, tmp_assign_source_34);

    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_4_get_binding_value();

        ((struct Nuitka_FunctionObject *)tmp_assign_source_35)->m_closure[0] = var_binding_values;
        Py_INCREF(((struct Nuitka_FunctionObject *)tmp_assign_source_35)->m_closure[0]);


        assert(var_get_binding_value == NULL);
        var_get_binding_value = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_called_instance_26;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT(var_card);
        tmp_expression_name_7 = var_card;
        tmp_subscript_name_3 = const_str_plain_name;
        tmp_called_instance_26 = LOOKUP_SUBSCRIPT(tmp_expression_name_7, tmp_subscript_name_3);
        if (tmp_called_instance_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 464;
        tmp_expression_name_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_26, const_str_plain_split, &PyTuple_GET_ITEM(const_tuple_str_chr_58_tuple, 0));

        Py_DECREF(tmp_called_instance_26);
        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_4 = const_int_neg_1;
        tmp_assign_source_36 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_6, tmp_subscript_name_4, -1);
        Py_DECREF(tmp_expression_name_6);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_card_name == NULL);
        var_card_name = tmp_assign_source_36;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_card_name);
        tmp_compexpr_left_2 = var_card_name;
        tmp_compexpr_right_2 = const_tuple_str_plain_amplify_str_plain_promo_video_website_tuple;
        tmp_res = PySequence_Contains(tmp_compexpr_right_2, tmp_compexpr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(var_card_name);
        tmp_compexpr_left_3 = var_card_name;
        tmp_compexpr_right_3 = const_str_plain_amplify;
        tmp_assign_source_37 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_is_amplify == NULL);
        var_is_amplify = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_8;
        PyObject *tmp_called_name_13;
        PyObject *tmp_called_name_14;
        CHECK_OBJECT(var_is_amplify);
        tmp_truth_name_8 = CHECK_IF_TRUE(var_is_amplify);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(var_get_binding_value);
        tmp_called_name_13 = var_get_binding_value;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 467;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, const_str_plain_amplify_url_vmap);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(var_get_binding_value);
        tmp_called_name_14 = var_get_binding_value;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 467;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, const_str_plain_player_stream_url);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_3:;
        assert(var_vmap_url == NULL);
        var_vmap_url = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_name_15;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_9;
        CHECK_OBJECT(var_get_binding_value);
        tmp_called_name_15 = var_get_binding_value;
        tmp_left_name_4 = const_str_digest_95a11a35839bdcb94d0f8b4fd5ca31f8;
        CHECK_OBJECT(var_is_amplify);
        tmp_truth_name_9 = CHECK_IF_TRUE(var_is_amplify);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_9 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(var_card_name);
        tmp_right_name_4 = var_card_name;
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_right_name_4 = const_str_plain_player;
        condexpr_end_4:;
        tmp_args_element_name_29 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_4, tmp_right_name_4);
        if (tmp_args_element_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 468;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, tmp_args_element_name_29);
        Py_DECREF(tmp_args_element_name_29);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_content_id == NULL);
        var_content_id = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_name_16;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_args_element_name_31;
        int tmp_or_left_truth_6;
        PyObject *tmp_or_left_value_6;
        PyObject *tmp_or_right_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_name_8 = par_self;
        tmp_called_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, const_str_plain__extract_formats_from_vmap_url);
        if (tmp_called_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vmap_url);
        tmp_args_element_name_30 = var_vmap_url;
        CHECK_OBJECT(var_content_id);
        tmp_or_left_value_6 = var_content_id;
        tmp_or_left_truth_6 = CHECK_IF_TRUE(tmp_or_left_value_6);
        if (tmp_or_left_truth_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_16);

            exception_lineno = 469;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_6 == 1) {
            goto or_left_6;
        } else {
            goto or_right_6;
        }
        or_right_6:;
        CHECK_OBJECT(var_twid);
        tmp_or_right_value_6 = var_twid;
        tmp_args_element_name_31 = tmp_or_right_value_6;
        goto or_end_6;
        or_left_6:;
        tmp_args_element_name_31 = tmp_or_left_value_6;
        or_end_6:;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 469;
        {
            PyObject *call_args[] = {tmp_args_element_name_30, tmp_args_element_name_31};
            tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_16, call_args);
        }

        Py_DECREF(tmp_called_name_16);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_formats == NULL);
        var_formats = tmp_assign_source_40;
    }
    {
        PyObject *tmp_called_instance_27;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_name_32;
        CHECK_OBJECT(par_self);
        tmp_called_instance_27 = par_self;
        CHECK_OBJECT(var_formats);
        tmp_args_element_name_32 = var_formats;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 470;
        {
            PyObject *call_args[] = {tmp_args_element_name_32};
            tmp_call_result_8 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_27, const_str_plain__sort_formats, call_args);
        }

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = PyList_New(0);
        assert(PyCell_GET(var_thumbnails) == NULL);
        PyCell_SET(var_thumbnails, tmp_assign_source_41);

    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_iter_arg_5;
        tmp_iter_arg_5 = const_tuple_1da931cdcb80031a0665d82a978028a6_tuple;
        tmp_assign_source_42 = MAKE_ITERATOR(tmp_iter_arg_5);
        assert(!(tmp_assign_source_42 == NULL));
        assert(tmp_for_loop_4__for_iterator == NULL);
        tmp_for_loop_4__for_iterator = tmp_assign_source_42;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_43;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_43 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_43 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooccoooocooooooooo";
                exception_lineno = 473;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_43;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_44 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_suffix;
            var_suffix = tmp_assign_source_44;
            Py_INCREF(var_suffix);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_45;
        int tmp_or_left_truth_7;
        PyObject *tmp_or_left_value_7;
        PyObject *tmp_or_right_value_7;
        PyObject *tmp_called_name_17;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT(var_get_binding_value);
        tmp_called_name_17 = var_get_binding_value;
        tmp_left_name_5 = const_str_plain_player_image;
        CHECK_OBJECT(var_suffix);
        tmp_right_name_5 = var_suffix;
        tmp_args_element_name_33 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_5, tmp_right_name_5);
        if (tmp_args_element_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto try_except_handler_7;
        }
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 474;
        tmp_or_left_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, tmp_args_element_name_33);
        Py_DECREF(tmp_args_element_name_33);
        if (tmp_or_left_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto try_except_handler_7;
        }
        tmp_or_left_truth_7 = CHECK_IF_TRUE(tmp_or_left_value_7);
        if (tmp_or_left_truth_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_7);

            exception_lineno = 474;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto try_except_handler_7;
        }
        if (tmp_or_left_truth_7 == 1) {
            goto or_left_7;
        } else {
            goto or_right_7;
        }
        or_right_7:;
        Py_DECREF(tmp_or_left_value_7);
        tmp_or_right_value_7 = PyDict_New();
        tmp_assign_source_45 = tmp_or_right_value_7;
        goto or_end_7;
        or_left_7:;
        tmp_assign_source_45 = tmp_or_left_value_7;
        or_end_7:;
        {
            PyObject *old = var_image;
            var_image = tmp_assign_source_45;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_instance_28;
        CHECK_OBJECT(var_image);
        tmp_called_instance_28 = var_image;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 475;
        tmp_assign_source_46 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_28, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_url_tuple, 0));

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_image_url;
            var_image_url = tmp_assign_source_46;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_or_left_truth_8;
        nuitka_bool tmp_or_left_value_8;
        nuitka_bool tmp_or_right_value_8;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(var_image_url);
        tmp_operand_name_2 = var_image_url;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto try_except_handler_7;
        }
        tmp_or_left_value_8 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_8 = tmp_or_left_value_8 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_8 == 1) {
            goto or_left_8;
        } else {
            goto or_right_8;
        }
        or_right_8:;
        tmp_compexpr_left_4 = const_str_digest_1f33f0446aa87f1c6ce3db0772694262;
        CHECK_OBJECT(var_image_url);
        tmp_compexpr_right_4 = var_image_url;
        tmp_res = PySequence_Contains(tmp_compexpr_right_4, tmp_compexpr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto try_except_handler_7;
        }
        tmp_or_right_value_8 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_11 = tmp_or_right_value_8;
        goto or_end_8;
        or_left_8:;
        tmp_condition_result_11 = tmp_or_left_value_8;
        or_end_8:;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    goto loop_start_4;
    branch_no_7:;
    {
        PyObject *tmp_called_name_18;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_10;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        PyObject *tmp_called_name_19;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_called_instance_29;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        PyObject *tmp_called_name_20;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_called_instance_30;
        CHECK_OBJECT(PyCell_GET(var_thumbnails));
        tmp_expression_name_9 = PyCell_GET(var_thumbnails);
        tmp_called_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, const_str_plain_append);
        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto try_except_handler_7;
        }
        tmp_dict_key_16 = const_str_plain_id;
        CHECK_OBJECT(var_suffix);
        tmp_truth_name_10 = CHECK_IF_TRUE(var_suffix);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);

            exception_lineno = 479;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_12 = tmp_truth_name_10 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(var_suffix);
        tmp_expression_name_10 = var_suffix;
        tmp_subscript_name_5 = const_slice_int_pos_1_none_none;
        tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_name_10, tmp_subscript_name_5);
        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);

            exception_lineno = 479;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto try_except_handler_7;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_dict_value_16 = const_str_plain_medium;
        Py_INCREF(tmp_dict_value_16);
        condexpr_end_5:;
        tmp_args_element_name_34 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_34, tmp_dict_key_16, tmp_dict_value_16);
        Py_DECREF(tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = const_str_plain_url;
        CHECK_OBJECT(var_image_url);
        tmp_dict_value_17 = var_image_url;
        tmp_res = PyDict_SetItem(tmp_args_element_name_34, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = const_str_plain_width;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_int_or_none);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int_or_none);
        }

        if (tmp_mvar_value_9 == NULL) {
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_args_element_name_34);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27635 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 481;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_name_19 = tmp_mvar_value_9;
        CHECK_OBJECT(var_image);
        tmp_called_instance_29 = var_image;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 481;
        tmp_args_element_name_35 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_29, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_width_tuple, 0));

        if (tmp_args_element_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_args_element_name_34);

            exception_lineno = 481;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto try_except_handler_7;
        }
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 481;
        tmp_dict_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_19, tmp_args_element_name_35);
        Py_DECREF(tmp_args_element_name_35);
        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_args_element_name_34);

            exception_lineno = 481;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto try_except_handler_7;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_34, tmp_dict_key_18, tmp_dict_value_18);
        Py_DECREF(tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = const_str_plain_height;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_int_or_none);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int_or_none);
        }

        if (tmp_mvar_value_10 == NULL) {
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_args_element_name_34);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27635 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 482;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_name_20 = tmp_mvar_value_10;
        CHECK_OBJECT(var_image);
        tmp_called_instance_30 = var_image;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 482;
        tmp_args_element_name_36 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_30, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_height_tuple, 0));

        if (tmp_args_element_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_args_element_name_34);

            exception_lineno = 482;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto try_except_handler_7;
        }
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 482;
        tmp_dict_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_20, tmp_args_element_name_36);
        Py_DECREF(tmp_args_element_name_36);
        if (tmp_dict_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_args_element_name_34);

            exception_lineno = 482;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto try_except_handler_7;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_34, tmp_dict_key_19, tmp_dict_value_19);
        Py_DECREF(tmp_dict_value_19);
        assert(!(tmp_res != 0));
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 478;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_18, tmp_args_element_name_34);
        Py_DECREF(tmp_called_name_18);
        Py_DECREF(tmp_args_element_name_34);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_9);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 473;
        type_description_1 = "oooooooooooooooooccoooocooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;

    {
        PyObject *tmp_called_name_21;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        PyObject *tmp_dict_key_22;
        PyObject *tmp_dict_value_22;
        PyObject *tmp_called_name_22;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_called_name_23;
        CHECK_OBJECT(var_info);
        tmp_expression_name_11 = var_info;
        tmp_called_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, const_str_plain_update);
        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_20 = const_str_plain_formats;
        CHECK_OBJECT(var_formats);
        tmp_dict_value_20 = var_formats;
        tmp_args_element_name_37 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_37, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = const_str_plain_thumbnails;
        CHECK_OBJECT(PyCell_GET(var_thumbnails));
        tmp_dict_value_21 = PyCell_GET(var_thumbnails);
        tmp_res = PyDict_SetItem(tmp_args_element_name_37, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = const_str_plain_duration;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_int_or_none);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int_or_none);
        }

        if (tmp_mvar_value_11 == NULL) {
            Py_DECREF(tmp_called_name_21);
            Py_DECREF(tmp_args_element_name_37);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27635 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 488;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_22 = tmp_mvar_value_11;
        CHECK_OBJECT(var_get_binding_value);
        tmp_called_name_23 = var_get_binding_value;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 488;
        tmp_args_element_name_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_23, const_str_plain_content_duration_seconds);
        if (tmp_args_element_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);
            Py_DECREF(tmp_args_element_name_37);

            exception_lineno = 488;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 488;
        tmp_dict_value_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_22, tmp_args_element_name_38);
        Py_DECREF(tmp_args_element_name_38);
        if (tmp_dict_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);
            Py_DECREF(tmp_args_element_name_37);

            exception_lineno = 488;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_37, tmp_dict_key_22, tmp_dict_value_22);
        Py_DECREF(tmp_dict_value_22);
        assert(!(tmp_res != 0));
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 485;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_21, tmp_args_element_name_37);
        Py_DECREF(tmp_called_name_21);
        Py_DECREF(tmp_args_element_name_37);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_tmp_condition_result_13_object_1;
        int tmp_truth_name_11;
        CHECK_OBJECT(var_card_name);
        tmp_compexpr_left_5 = var_card_name;
        tmp_compexpr_right_5 = const_str_plain_player;
        tmp_tmp_condition_result_13_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        if (tmp_tmp_condition_result_13_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_tmp_condition_result_13_object_1);
        if (tmp_truth_name_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_13_object_1);

            exception_lineno = 491;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_11 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_13_object_1);
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_name_24;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_name_39;
        PyObject *tmp_dict_key_23;
        PyObject *tmp_dict_value_23;
        PyObject *tmp_dict_key_24;
        PyObject *tmp_dict_value_24;
        PyObject *tmp_called_name_25;
        CHECK_OBJECT(var_info);
        tmp_expression_name_12 = var_info;
        tmp_called_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, const_str_plain_update);
        if (tmp_called_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_23 = const_str_plain__type;
        tmp_dict_value_23 = const_str_plain_url;
        tmp_args_element_name_39 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_39, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_key_24 = const_str_plain_url;
        CHECK_OBJECT(var_get_binding_value);
        tmp_called_name_25 = var_get_binding_value;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 494;
        tmp_dict_value_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_25, const_str_plain_player_url);
        if (tmp_dict_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_args_element_name_39);

            exception_lineno = 494;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_39, tmp_dict_key_24, tmp_dict_value_24);
        Py_DECREF(tmp_dict_value_24);
        assert(!(tmp_res != 0));
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 492;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_24, tmp_args_element_name_39);
        Py_DECREF(tmp_called_name_24);
        Py_DECREF(tmp_args_element_name_39);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_tmp_condition_result_14_object_1;
        int tmp_truth_name_12;
        CHECK_OBJECT(var_card_name);
        tmp_compexpr_left_6 = var_card_name;
        tmp_compexpr_right_6 = const_str_plain_periscope_broadcast;
        tmp_tmp_condition_result_14_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
        if (tmp_tmp_condition_result_14_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_12 = CHECK_IF_TRUE(tmp_tmp_condition_result_14_object_1);
        if (tmp_truth_name_12 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_14_object_1);

            exception_lineno = 496;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = tmp_truth_name_12 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_14_object_1);
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_name_26;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_name_40;
        PyObject *tmp_dict_key_25;
        PyObject *tmp_dict_value_25;
        PyObject *tmp_dict_key_26;
        PyObject *tmp_dict_value_26;
        int tmp_or_left_truth_9;
        PyObject *tmp_or_left_value_9;
        PyObject *tmp_or_right_value_9;
        PyObject *tmp_called_name_27;
        PyObject *tmp_called_name_28;
        PyObject *tmp_dict_key_27;
        PyObject *tmp_dict_value_27;
        PyObject *tmp_called_instance_31;
        PyObject *tmp_mvar_value_12;
        CHECK_OBJECT(var_info);
        tmp_expression_name_13 = var_info;
        tmp_called_name_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, const_str_plain_update);
        if (tmp_called_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_25 = const_str_plain__type;
        tmp_dict_value_25 = const_str_plain_url;
        tmp_args_element_name_40 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_40, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = const_str_plain_url;
        CHECK_OBJECT(var_get_binding_value);
        tmp_called_name_27 = var_get_binding_value;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 499;
        tmp_or_left_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_27, const_str_plain_url);
        if (tmp_or_left_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_args_element_name_40);

            exception_lineno = 499;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_9 = CHECK_IF_TRUE(tmp_or_left_value_9);
        if (tmp_or_left_truth_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_args_element_name_40);
            Py_DECREF(tmp_or_left_value_9);

            exception_lineno = 499;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_9 == 1) {
            goto or_left_9;
        } else {
            goto or_right_9;
        }
        or_right_9:;
        Py_DECREF(tmp_or_left_value_9);
        CHECK_OBJECT(var_get_binding_value);
        tmp_called_name_28 = var_get_binding_value;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 499;
        tmp_or_right_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_28, const_str_plain_player_url);
        if (tmp_or_right_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_args_element_name_40);

            exception_lineno = 499;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_26 = tmp_or_right_value_9;
        goto or_end_9;
        or_left_9:;
        tmp_dict_value_26 = tmp_or_left_value_9;
        or_end_9:;
        tmp_res = PyDict_SetItem(tmp_args_element_name_40, tmp_dict_key_26, tmp_dict_value_26);
        Py_DECREF(tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_27 = const_str_plain_ie_key;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_PeriscopeIE);

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_PeriscopeIE);
        }

        if (tmp_mvar_value_12 == NULL) {
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_args_element_name_40);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 50605 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 500;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_31 = tmp_mvar_value_12;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 500;
        tmp_dict_value_27 = CALL_METHOD_NO_ARGS(tmp_called_instance_31, const_str_plain_ie_key);
        if (tmp_dict_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_args_element_name_40);

            exception_lineno = 500;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_40, tmp_dict_key_27, tmp_dict_value_27);
        Py_DECREF(tmp_dict_value_27);
        assert(!(tmp_res != 0));
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 497;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_26, tmp_args_element_name_40);
        Py_DECREF(tmp_called_name_26);
        Py_DECREF(tmp_args_element_name_40);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    goto branch_end_9;
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_tmp_condition_result_15_object_1;
        int tmp_truth_name_13;
        CHECK_OBJECT(var_card_name);
        tmp_compexpr_left_7 = var_card_name;
        tmp_compexpr_right_7 = const_str_plain_broadcast;
        tmp_tmp_condition_result_15_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_7, tmp_compexpr_right_7);
        if (tmp_tmp_condition_result_15_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_13 = CHECK_IF_TRUE(tmp_tmp_condition_result_15_object_1);
        if (tmp_truth_name_13 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_15_object_1);

            exception_lineno = 502;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = tmp_truth_name_13 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_15_object_1);
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_name_29;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_name_41;
        PyObject *tmp_dict_key_28;
        PyObject *tmp_dict_value_28;
        PyObject *tmp_dict_key_29;
        PyObject *tmp_dict_value_29;
        PyObject *tmp_called_name_30;
        PyObject *tmp_dict_key_30;
        PyObject *tmp_dict_value_30;
        PyObject *tmp_called_instance_32;
        PyObject *tmp_mvar_value_13;
        CHECK_OBJECT(var_info);
        tmp_expression_name_14 = var_info;
        tmp_called_name_29 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, const_str_plain_update);
        if (tmp_called_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_28 = const_str_plain__type;
        tmp_dict_value_28 = const_str_plain_url;
        tmp_args_element_name_41 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_41, tmp_dict_key_28, tmp_dict_value_28);
        assert(!(tmp_res != 0));
        tmp_dict_key_29 = const_str_plain_url;
        CHECK_OBJECT(var_get_binding_value);
        tmp_called_name_30 = var_get_binding_value;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 505;
        tmp_dict_value_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_30, const_str_plain_broadcast_url);
        if (tmp_dict_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_29);
            Py_DECREF(tmp_args_element_name_41);

            exception_lineno = 505;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_41, tmp_dict_key_29, tmp_dict_value_29);
        Py_DECREF(tmp_dict_value_29);
        assert(!(tmp_res != 0));
        tmp_dict_key_30 = const_str_plain_ie_key;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_TwitterBroadcastIE);

        if (unlikely(tmp_mvar_value_13 == NULL)) {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_TwitterBroadcastIE);
        }

        if (tmp_mvar_value_13 == NULL) {
            Py_DECREF(tmp_called_name_29);
            Py_DECREF(tmp_args_element_name_41);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 50638 ], 40, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 506;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_32 = tmp_mvar_value_13;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 506;
        tmp_dict_value_30 = CALL_METHOD_NO_ARGS(tmp_called_instance_32, const_str_plain_ie_key);
        if (tmp_dict_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_29);
            Py_DECREF(tmp_args_element_name_41);

            exception_lineno = 506;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_41, tmp_dict_key_30, tmp_dict_value_30);
        Py_DECREF(tmp_dict_value_30);
        assert(!(tmp_res != 0));
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 503;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_29, tmp_args_element_name_41);
        Py_DECREF(tmp_called_name_29);
        Py_DECREF(tmp_args_element_name_41);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_31;
        PyObject *tmp_mvar_value_14;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_ExtractorError);

        if (unlikely(tmp_mvar_value_14 == NULL)) {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtractorError);
        }

        if (tmp_mvar_value_14 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27135 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 509;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_31 = tmp_mvar_value_14;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 509;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_31, const_str_digest_deb2c0c379103d549692e44af91775ad);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 509;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooccoooocooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_10:;
    branch_end_9:;
    branch_end_8:;
    branch_end_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_name_32;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_42;
        PyObject *tmp_args_element_name_43;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_try_get);

        if (unlikely(tmp_mvar_value_15 == NULL)) {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_try_get);
        }

        if (tmp_mvar_value_15 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 33587 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 511;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_32 = tmp_mvar_value_15;
        CHECK_OBJECT(var_status);
        tmp_args_element_name_42 = var_status;
        tmp_args_element_name_43 = MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_5_lambda();



        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 511;
        {
            PyObject *call_args[] = {tmp_args_element_name_42, tmp_args_element_name_43};
            tmp_assign_source_47 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_32, call_args);
        }

        Py_DECREF(tmp_args_element_name_43);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_expanded_url == NULL);
        var_expanded_url = tmp_assign_source_47;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_operand_name_3;
        CHECK_OBJECT(var_expanded_url);
        tmp_operand_name_3 = var_expanded_url;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_name_33;
        PyObject *tmp_mvar_value_16;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_ExtractorError);

        if (unlikely(tmp_mvar_value_16 == NULL)) {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtractorError);
        }

        if (tmp_mvar_value_16 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27135 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 513;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_33 = tmp_mvar_value_16;
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 513;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_33, const_str_digest_2ebf9ed8524e4ae111db94b1f7a196ba);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 513;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooccoooocooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_11:;
    {
        PyObject *tmp_called_instance_33;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_name_44;
        PyObject *tmp_dict_key_31;
        PyObject *tmp_dict_value_31;
        PyObject *tmp_dict_key_32;
        PyObject *tmp_dict_value_32;
        CHECK_OBJECT(var_info);
        tmp_called_instance_33 = var_info;
        tmp_dict_key_31 = const_str_plain__type;
        tmp_dict_value_31 = const_str_plain_url;
        tmp_args_element_name_44 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_44, tmp_dict_key_31, tmp_dict_value_31);
        assert(!(tmp_res != 0));
        tmp_dict_key_32 = const_str_plain_url;
        CHECK_OBJECT(var_expanded_url);
        tmp_dict_value_32 = var_expanded_url;
        tmp_res = PyDict_SetItem(tmp_args_element_name_44, tmp_dict_key_32, tmp_dict_value_32);
        assert(!(tmp_res != 0));
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame.f_lineno = 514;
        {
            PyObject *call_args[] = {tmp_args_element_name_44};
            tmp_call_result_14 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_33, const_str_plain_update, call_args);
        }

        Py_DECREF(tmp_args_element_name_44);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "oooooooooooooooooccoooocooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    branch_end_5:;
    branch_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2b0ecdbe36ffd6641d199d2c1e18c3e0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2b0ecdbe36ffd6641d199d2c1e18c3e0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2b0ecdbe36ffd6641d199d2c1e18c3e0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2b0ecdbe36ffd6641d199d2c1e18c3e0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2b0ecdbe36ffd6641d199d2c1e18c3e0, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2b0ecdbe36ffd6641d199d2c1e18c3e0,
        type_description_1,
        par_self,
        par_url,
        var_twid,
        var_status,
        var_title,
        var_description,
        var_user,
        var_uploader,
        var_uploader_id,
        var_tags,
        var_hashtag,
        var_hashtag_text,
        var_info,
        var_media,
        var_video_info,
        var_formats,
        var_variant,
        var_thumbnails,
        var_media_url,
        var_add_thumbnail,
        var_name,
        var_size,
        var_card,
        var_binding_values,
        var_get_binding_value,
        var_card_name,
        var_is_amplify,
        var_vmap_url,
        var_content_id,
        var_suffix,
        var_image,
        var_image_url,
        var_expanded_url
    );


    // Release cached frame.
    if (frame_2b0ecdbe36ffd6641d199d2c1e18c3e0 == cache_frame_2b0ecdbe36ffd6641d199d2c1e18c3e0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_2b0ecdbe36ffd6641d199d2c1e18c3e0);
    }
    cache_frame_2b0ecdbe36ffd6641d199d2c1e18c3e0 = NULL;

    assertFrameObject(frame_2b0ecdbe36ffd6641d199d2c1e18c3e0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_info);
    tmp_return_value = var_info;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_twid);
    Py_DECREF(var_twid);
    var_twid = NULL;

    CHECK_OBJECT(var_status);
    Py_DECREF(var_status);
    var_status = NULL;

    CHECK_OBJECT(var_title);
    Py_DECREF(var_title);
    var_title = NULL;

    CHECK_OBJECT(var_description);
    Py_DECREF(var_description);
    var_description = NULL;

    CHECK_OBJECT(var_user);
    Py_DECREF(var_user);
    var_user = NULL;

    CHECK_OBJECT(var_uploader);
    Py_DECREF(var_uploader);
    var_uploader = NULL;

    CHECK_OBJECT(var_uploader_id);
    Py_DECREF(var_uploader_id);
    var_uploader_id = NULL;

    CHECK_OBJECT(var_tags);
    Py_DECREF(var_tags);
    var_tags = NULL;

    Py_XDECREF(var_hashtag);
    var_hashtag = NULL;

    Py_XDECREF(var_hashtag_text);
    var_hashtag_text = NULL;

    CHECK_OBJECT(var_info);
    Py_DECREF(var_info);
    var_info = NULL;

    CHECK_OBJECT(var_media);
    Py_DECREF(var_media);
    var_media = NULL;

    Py_XDECREF(var_video_info);
    var_video_info = NULL;

    Py_XDECREF(var_formats);
    var_formats = NULL;

    Py_XDECREF(var_variant);
    var_variant = NULL;

    CHECK_OBJECT(var_thumbnails);
    Py_DECREF(var_thumbnails);
    var_thumbnails = NULL;

    CHECK_OBJECT(var_media_url);
    Py_DECREF(var_media_url);
    var_media_url = NULL;

    Py_XDECREF(var_add_thumbnail);
    var_add_thumbnail = NULL;

    Py_XDECREF(var_name);
    var_name = NULL;

    Py_XDECREF(var_size);
    var_size = NULL;

    Py_XDECREF(var_card);
    var_card = NULL;

    CHECK_OBJECT(var_binding_values);
    Py_DECREF(var_binding_values);
    var_binding_values = NULL;

    Py_XDECREF(var_get_binding_value);
    var_get_binding_value = NULL;

    Py_XDECREF(var_card_name);
    var_card_name = NULL;

    Py_XDECREF(var_is_amplify);
    var_is_amplify = NULL;

    Py_XDECREF(var_vmap_url);
    var_vmap_url = NULL;

    Py_XDECREF(var_content_id);
    var_content_id = NULL;

    Py_XDECREF(var_suffix);
    var_suffix = NULL;

    Py_XDECREF(var_image);
    var_image = NULL;

    Py_XDECREF(var_image_url);
    var_image_url = NULL;

    Py_XDECREF(var_expanded_url);
    var_expanded_url = NULL;

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

    Py_XDECREF(var_twid);
    var_twid = NULL;

    Py_XDECREF(var_status);
    var_status = NULL;

    Py_XDECREF(var_title);
    var_title = NULL;

    Py_XDECREF(var_description);
    var_description = NULL;

    Py_XDECREF(var_user);
    var_user = NULL;

    Py_XDECREF(var_uploader);
    var_uploader = NULL;

    Py_XDECREF(var_uploader_id);
    var_uploader_id = NULL;

    Py_XDECREF(var_tags);
    var_tags = NULL;

    Py_XDECREF(var_hashtag);
    var_hashtag = NULL;

    Py_XDECREF(var_hashtag_text);
    var_hashtag_text = NULL;

    Py_XDECREF(var_info);
    var_info = NULL;

    Py_XDECREF(var_media);
    var_media = NULL;

    Py_XDECREF(var_video_info);
    var_video_info = NULL;

    Py_XDECREF(var_formats);
    var_formats = NULL;

    Py_XDECREF(var_variant);
    var_variant = NULL;

    CHECK_OBJECT(var_thumbnails);
    Py_DECREF(var_thumbnails);
    var_thumbnails = NULL;

    CHECK_OBJECT(var_media_url);
    Py_DECREF(var_media_url);
    var_media_url = NULL;

    Py_XDECREF(var_add_thumbnail);
    var_add_thumbnail = NULL;

    Py_XDECREF(var_name);
    var_name = NULL;

    Py_XDECREF(var_size);
    var_size = NULL;

    Py_XDECREF(var_card);
    var_card = NULL;

    CHECK_OBJECT(var_binding_values);
    Py_DECREF(var_binding_values);
    var_binding_values = NULL;

    Py_XDECREF(var_get_binding_value);
    var_get_binding_value = NULL;

    Py_XDECREF(var_card_name);
    var_card_name = NULL;

    Py_XDECREF(var_is_amplify);
    var_is_amplify = NULL;

    Py_XDECREF(var_vmap_url);
    var_vmap_url = NULL;

    Py_XDECREF(var_content_id);
    var_content_id = NULL;

    Py_XDECREF(var_suffix);
    var_suffix = NULL;

    Py_XDECREF(var_image);
    var_image = NULL;

    Py_XDECREF(var_image_url);
    var_image_url = NULL;

    Py_XDECREF(var_expanded_url);
    var_expanded_url = NULL;

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


static PyObject *impl_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_570fe2a02d0f64635817e75117d58f52;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_570fe2a02d0f64635817e75117d58f52 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_570fe2a02d0f64635817e75117d58f52)) {
        Py_XDECREF(cache_frame_570fe2a02d0f64635817e75117d58f52);

#if _DEBUG_REFCOUNTS
        if (cache_frame_570fe2a02d0f64635817e75117d58f52 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_570fe2a02d0f64635817e75117d58f52 = MAKE_FUNCTION_FRAME(codeobj_570fe2a02d0f64635817e75117d58f52, module_youtube_dl$extractor$twitter, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_570fe2a02d0f64635817e75117d58f52->m_type_description == NULL);
    frame_570fe2a02d0f64635817e75117d58f52 = cache_frame_570fe2a02d0f64635817e75117d58f52;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_570fe2a02d0f64635817e75117d58f52);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_570fe2a02d0f64635817e75117d58f52) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(par_x);
        tmp_expression_name_2 = par_x;
        tmp_subscript_name_1 = const_str_plain_entities;
        tmp_expression_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_str_plain_hashtags;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_2);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_570fe2a02d0f64635817e75117d58f52);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_570fe2a02d0f64635817e75117d58f52);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_570fe2a02d0f64635817e75117d58f52);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_570fe2a02d0f64635817e75117d58f52, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_570fe2a02d0f64635817e75117d58f52->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_570fe2a02d0f64635817e75117d58f52, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_570fe2a02d0f64635817e75117d58f52,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if (frame_570fe2a02d0f64635817e75117d58f52 == cache_frame_570fe2a02d0f64635817e75117d58f52) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_570fe2a02d0f64635817e75117d58f52);
    }
    cache_frame_570fe2a02d0f64635817e75117d58f52 = NULL;

    assertFrameObject(frame_570fe2a02d0f64635817e75117d58f52);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_2_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_4e8c8d087094259128b3af9f16ae10bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4e8c8d087094259128b3af9f16ae10bd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4e8c8d087094259128b3af9f16ae10bd)) {
        Py_XDECREF(cache_frame_4e8c8d087094259128b3af9f16ae10bd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4e8c8d087094259128b3af9f16ae10bd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4e8c8d087094259128b3af9f16ae10bd = MAKE_FUNCTION_FRAME(codeobj_4e8c8d087094259128b3af9f16ae10bd, module_youtube_dl$extractor$twitter, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4e8c8d087094259128b3af9f16ae10bd->m_type_description == NULL);
    frame_4e8c8d087094259128b3af9f16ae10bd = cache_frame_4e8c8d087094259128b3af9f16ae10bd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4e8c8d087094259128b3af9f16ae10bd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4e8c8d087094259128b3af9f16ae10bd) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT(par_x);
        tmp_expression_name_3 = par_x;
        tmp_subscript_name_1 = const_str_plain_extended_entities;
        tmp_expression_name_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_1);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_str_plain_media;
        tmp_expression_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_int_0;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_3, 0);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4e8c8d087094259128b3af9f16ae10bd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4e8c8d087094259128b3af9f16ae10bd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4e8c8d087094259128b3af9f16ae10bd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4e8c8d087094259128b3af9f16ae10bd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4e8c8d087094259128b3af9f16ae10bd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4e8c8d087094259128b3af9f16ae10bd, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4e8c8d087094259128b3af9f16ae10bd,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if (frame_4e8c8d087094259128b3af9f16ae10bd == cache_frame_4e8c8d087094259128b3af9f16ae10bd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_4e8c8d087094259128b3af9f16ae10bd);
    }
    cache_frame_4e8c8d087094259128b3af9f16ae10bd = NULL;

    assertFrameObject(frame_4e8c8d087094259128b3af9f16ae10bd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_3_add_thumbnail(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    PyObject *par_size = python_pars[1];
    struct Nuitka_FrameObject *frame_f979f3816df0f298d745c2f3306fd5a9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f979f3816df0f298d745c2f3306fd5a9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f979f3816df0f298d745c2f3306fd5a9)) {
        Py_XDECREF(cache_frame_f979f3816df0f298d745c2f3306fd5a9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f979f3816df0f298d745c2f3306fd5a9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f979f3816df0f298d745c2f3306fd5a9 = MAKE_FUNCTION_FRAME(codeobj_f979f3816df0f298d745c2f3306fd5a9, module_youtube_dl$extractor$twitter, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f979f3816df0f298d745c2f3306fd5a9->m_type_description == NULL);
    frame_f979f3816df0f298d745c2f3306fd5a9 = cache_frame_f979f3816df0f298d745c2f3306fd5a9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f979f3816df0f298d745c2f3306fd5a9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f979f3816df0f298d745c2f3306fd5a9) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        if (PyCell_GET(self->m_closure[1]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "thumbnails");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 440;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = PyCell_GET(self->m_closure[1]);
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_append);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_id;
        CHECK_OBJECT(par_name);
        tmp_dict_value_1 = par_name;
        tmp_args_element_name_1 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_url;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_update_url_query);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_update_url_query);
        }

        if (tmp_mvar_value_1 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 32504 ], 38, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 442;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        if (PyCell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "media_url");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 442;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = PyCell_GET(self->m_closure[0]);
        tmp_dict_key_3 = const_str_plain_name;
        CHECK_OBJECT(par_name);
        tmp_dict_value_3 = par_name;
        tmp_args_element_name_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        frame_f979f3816df0f298d745c2f3306fd5a9->m_frame.f_lineno = 442;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_3);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 442;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_1, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_width;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_int_or_none);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int_or_none);
        }

        if (tmp_mvar_value_2 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27635 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 443;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_2;
        CHECK_OBJECT(par_size);
        tmp_called_instance_1 = par_size;
        frame_f979f3816df0f298d745c2f3306fd5a9->m_frame.f_lineno = 443;
        tmp_or_left_value_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_w_tuple, 0));

        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 443;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 443;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        CHECK_OBJECT(par_size);
        tmp_called_instance_2 = par_size;
        frame_f979f3816df0f298d745c2f3306fd5a9->m_frame.f_lineno = 443;
        tmp_or_right_value_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_width_tuple, 0));

        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 443;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_name_4 = tmp_or_left_value_1;
        or_end_1:;
        frame_f979f3816df0f298d745c2f3306fd5a9->m_frame.f_lineno = 443;
        tmp_dict_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 443;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_1, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = const_str_plain_height;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_int_or_none);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int_or_none);
        }

        if (tmp_mvar_value_3 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27635 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 444;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_3;
        CHECK_OBJECT(par_size);
        tmp_called_instance_3 = par_size;
        frame_f979f3816df0f298d745c2f3306fd5a9->m_frame.f_lineno = 444;
        tmp_or_left_value_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_h_tuple, 0));

        if (tmp_or_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 444;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 444;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        CHECK_OBJECT(par_size);
        tmp_called_instance_4 = par_size;
        frame_f979f3816df0f298d745c2f3306fd5a9->m_frame.f_lineno = 444;
        tmp_or_right_value_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_height_tuple, 0));

        if (tmp_or_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 444;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_args_element_name_5 = tmp_or_left_value_2;
        or_end_2:;
        frame_f979f3816df0f298d745c2f3306fd5a9->m_frame.f_lineno = 444;
        tmp_dict_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_5);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 444;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_name_1, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));
        frame_f979f3816df0f298d745c2f3306fd5a9->m_frame.f_lineno = 440;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f979f3816df0f298d745c2f3306fd5a9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f979f3816df0f298d745c2f3306fd5a9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f979f3816df0f298d745c2f3306fd5a9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f979f3816df0f298d745c2f3306fd5a9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f979f3816df0f298d745c2f3306fd5a9, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f979f3816df0f298d745c2f3306fd5a9,
        type_description_1,
        par_name,
        par_size,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if (frame_f979f3816df0f298d745c2f3306fd5a9 == cache_frame_f979f3816df0f298d745c2f3306fd5a9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_f979f3816df0f298d745c2f3306fd5a9);
    }
    cache_frame_f979f3816df0f298d745c2f3306fd5a9 = NULL;

    assertFrameObject(frame_f979f3816df0f298d745c2f3306fd5a9);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_4_get_binding_value(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_k = python_pars[0];
    PyObject *var_o = NULL;
    struct Nuitka_FrameObject *frame_bc677129562400a878cfafa5c57ec9bc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bc677129562400a878cfafa5c57ec9bc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bc677129562400a878cfafa5c57ec9bc)) {
        Py_XDECREF(cache_frame_bc677129562400a878cfafa5c57ec9bc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bc677129562400a878cfafa5c57ec9bc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bc677129562400a878cfafa5c57ec9bc = MAKE_FUNCTION_FRAME(codeobj_bc677129562400a878cfafa5c57ec9bc, module_youtube_dl$extractor$twitter, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bc677129562400a878cfafa5c57ec9bc->m_type_description == NULL);
    frame_bc677129562400a878cfafa5c57ec9bc = cache_frame_bc677129562400a878cfafa5c57ec9bc;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bc677129562400a878cfafa5c57ec9bc);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bc677129562400a878cfafa5c57ec9bc) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        if (PyCell_GET(self->m_closure[0]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "binding_values");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 461;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_k);
        tmp_args_element_name_1 = par_k;
        frame_bc677129562400a878cfafa5c57ec9bc->m_frame.f_lineno = 461;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_or_left_value_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_get, call_args);
        }

        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 461;
            type_description_1 = "ooc";
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
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_o == NULL);
        var_o = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_try_get);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_try_get);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 33587 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 462;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(var_o);
        tmp_args_element_name_2 = var_o;
        tmp_args_element_name_3 = MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_4_get_binding_value$$$function_1_lambda();



        frame_bc677129562400a878cfafa5c57ec9bc->m_frame.f_lineno = 462;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bc677129562400a878cfafa5c57ec9bc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bc677129562400a878cfafa5c57ec9bc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bc677129562400a878cfafa5c57ec9bc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bc677129562400a878cfafa5c57ec9bc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bc677129562400a878cfafa5c57ec9bc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bc677129562400a878cfafa5c57ec9bc, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bc677129562400a878cfafa5c57ec9bc,
        type_description_1,
        par_k,
        var_o,
        self->m_closure[0]
    );


    // Release cached frame.
    if (frame_bc677129562400a878cfafa5c57ec9bc == cache_frame_bc677129562400a878cfafa5c57ec9bc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_bc677129562400a878cfafa5c57ec9bc);
    }
    cache_frame_bc677129562400a878cfafa5c57ec9bc = NULL;

    assertFrameObject(frame_bc677129562400a878cfafa5c57ec9bc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_o);
    Py_DECREF(var_o);
    var_o = NULL;

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

    Py_XDECREF(var_o);
    var_o = NULL;

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
    CHECK_OBJECT(par_k);
    Py_DECREF(par_k);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_k);
    Py_DECREF(par_k);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_4_get_binding_value$$$function_1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_2f9556119d867d23d9016f5648b1cfca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2f9556119d867d23d9016f5648b1cfca = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2f9556119d867d23d9016f5648b1cfca)) {
        Py_XDECREF(cache_frame_2f9556119d867d23d9016f5648b1cfca);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2f9556119d867d23d9016f5648b1cfca == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2f9556119d867d23d9016f5648b1cfca = MAKE_FUNCTION_FRAME(codeobj_2f9556119d867d23d9016f5648b1cfca, module_youtube_dl$extractor$twitter, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2f9556119d867d23d9016f5648b1cfca->m_type_description == NULL);
    frame_2f9556119d867d23d9016f5648b1cfca = cache_frame_2f9556119d867d23d9016f5648b1cfca;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2f9556119d867d23d9016f5648b1cfca);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2f9556119d867d23d9016f5648b1cfca) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_x);
        tmp_expression_name_1 = par_x;
        CHECK_OBJECT(par_x);
        tmp_expression_name_2 = par_x;
        tmp_subscript_name_2 = const_str_plain_type;
        tmp_called_instance_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_2f9556119d867d23d9016f5648b1cfca->m_frame.f_lineno = 462;
        tmp_left_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_lower);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_str_plain__value;
        tmp_subscript_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_subscript_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2f9556119d867d23d9016f5648b1cfca);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2f9556119d867d23d9016f5648b1cfca);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2f9556119d867d23d9016f5648b1cfca);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2f9556119d867d23d9016f5648b1cfca, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2f9556119d867d23d9016f5648b1cfca->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f9556119d867d23d9016f5648b1cfca, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2f9556119d867d23d9016f5648b1cfca,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if (frame_2f9556119d867d23d9016f5648b1cfca == cache_frame_2f9556119d867d23d9016f5648b1cfca) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_2f9556119d867d23d9016f5648b1cfca);
    }
    cache_frame_2f9556119d867d23d9016f5648b1cfca = NULL;

    assertFrameObject(frame_2f9556119d867d23d9016f5648b1cfca);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_5_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_62616bde53760bb59570b5e2ff99528b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_62616bde53760bb59570b5e2ff99528b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_62616bde53760bb59570b5e2ff99528b)) {
        Py_XDECREF(cache_frame_62616bde53760bb59570b5e2ff99528b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_62616bde53760bb59570b5e2ff99528b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_62616bde53760bb59570b5e2ff99528b = MAKE_FUNCTION_FRAME(codeobj_62616bde53760bb59570b5e2ff99528b, module_youtube_dl$extractor$twitter, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_62616bde53760bb59570b5e2ff99528b->m_type_description == NULL);
    frame_62616bde53760bb59570b5e2ff99528b = cache_frame_62616bde53760bb59570b5e2ff99528b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_62616bde53760bb59570b5e2ff99528b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_62616bde53760bb59570b5e2ff99528b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT(par_x);
        tmp_expression_name_4 = par_x;
        tmp_subscript_name_1 = const_str_plain_entities;
        tmp_expression_name_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_1);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_str_plain_urls;
        tmp_expression_name_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_2);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_int_0;
        tmp_expression_name_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_3, 0);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_4 = const_str_plain_expanded_url;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_4);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_62616bde53760bb59570b5e2ff99528b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_62616bde53760bb59570b5e2ff99528b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_62616bde53760bb59570b5e2ff99528b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_62616bde53760bb59570b5e2ff99528b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_62616bde53760bb59570b5e2ff99528b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_62616bde53760bb59570b5e2ff99528b, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_62616bde53760bb59570b5e2ff99528b,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if (frame_62616bde53760bb59570b5e2ff99528b == cache_frame_62616bde53760bb59570b5e2ff99528b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_62616bde53760bb59570b5e2ff99528b);
    }
    cache_frame_62616bde53760bb59570b5e2ff99528b = NULL;

    assertFrameObject(frame_62616bde53760bb59570b5e2ff99528b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$twitter$$$function_7__real_extract(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1(python_pars[0]);
    PyObject *par_url = python_pars[1];
    PyObject *var_video_id = NULL;
    struct Nuitka_CellObject *var_webpage = PyCell_EMPTY();
    PyObject *var_vmap_url = NULL;
    PyObject *var_formats = NULL;
    PyObject *var_thumbnails = NULL;
    PyObject *var_thumbnail = NULL;
    PyObject *var__find_dimension = NULL;
    PyObject *var_thumbnail_w = NULL;
    PyObject *var_thumbnail_h = NULL;
    PyObject *var_video_w = NULL;
    PyObject *var_video_h = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_f649f058c5bc65be149e8e834b832efd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_f649f058c5bc65be149e8e834b832efd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f649f058c5bc65be149e8e834b832efd)) {
        Py_XDECREF(cache_frame_f649f058c5bc65be149e8e834b832efd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f649f058c5bc65be149e8e834b832efd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f649f058c5bc65be149e8e834b832efd = MAKE_FUNCTION_FRAME(codeobj_f649f058c5bc65be149e8e834b832efd, module_youtube_dl$extractor$twitter, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f649f058c5bc65be149e8e834b832efd->m_type_description == NULL);
    frame_f649f058c5bc65be149e8e834b832efd = cache_frame_f649f058c5bc65be149e8e834b832efd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f649f058c5bc65be149e8e834b832efd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f649f058c5bc65be149e8e834b832efd) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_called_instance_1 = PyCell_GET(par_self);
        CHECK_OBJECT(par_url);
        tmp_args_element_name_1 = par_url;
        frame_f649f058c5bc65be149e8e834b832efd->m_frame.f_lineno = 537;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain__match_id, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;
            type_description_1 = "coocooooooooo";
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
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_called_instance_2 = PyCell_GET(par_self);
        CHECK_OBJECT(par_url);
        tmp_args_element_name_2 = par_url;
        CHECK_OBJECT(var_video_id);
        tmp_args_element_name_3 = var_video_id;
        frame_f649f058c5bc65be149e8e834b832efd->m_frame.f_lineno = 538;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, const_str_plain__download_webpage, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "coocooooooooo";
            goto frame_exception_exit_1;
        }
        assert(PyCell_GET(var_webpage) == NULL);
        PyCell_SET(var_webpage, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_called_instance_3 = PyCell_GET(par_self);
        tmp_args_element_name_4 = const_str_digest_602b2fc766743f41dcdfd31e244b8358;
        CHECK_OBJECT(PyCell_GET(var_webpage));
        tmp_args_element_name_5 = PyCell_GET(var_webpage);
        tmp_args_element_name_6 = const_str_digest_67a6a64c32c3530cbe0ac9ec367462f4;
        frame_f649f058c5bc65be149e8e834b832efd->m_frame.f_lineno = 540;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_3, const_str_plain__html_search_meta, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "coocooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vmap_url == NULL);
        var_vmap_url = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_called_instance_4 = PyCell_GET(par_self);
        CHECK_OBJECT(var_vmap_url);
        tmp_args_element_name_7 = var_vmap_url;
        CHECK_OBJECT(var_video_id);
        tmp_args_element_name_8 = var_video_id;
        frame_f649f058c5bc65be149e8e834b832efd->m_frame.f_lineno = 542;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_4, const_str_plain__extract_formats_from_vmap_url, call_args);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "coocooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_formats == NULL);
        var_formats = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = PyList_New(0);
        assert(var_thumbnails == NULL);
        var_thumbnails = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_expression_name_1 = PyCell_GET(par_self);
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain__html_search_meta);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "coocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = const_str_digest_885512f5e89edd850ce5f45bff93cf60;
        tmp_args_name_1 = PyTuple_New(3);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(PyCell_GET(var_webpage));
        tmp_tuple_element_1 = PyCell_GET(var_webpage);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_str_plain_thumbnail;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 2, tmp_tuple_element_1);
        tmp_kw_name_1 = PyDict_Copy(const_dict_f95321192b139e241e1ec13397bf5b8f);
        frame_f649f058c5bc65be149e8e834b832efd->m_frame.f_lineno = 545;
        tmp_assign_source_6 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "coocooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_thumbnail == NULL);
        var_thumbnail = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_7__real_extract$$$function_1__find_dimension();

        ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[0] = par_self;
        Py_INCREF(((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[0]);
        ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[1] = var_webpage;
        Py_INCREF(((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[1]);


        assert(var__find_dimension == NULL);
        var__find_dimension = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_thumbnail);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_thumbnail);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "coocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        CHECK_OBJECT(var__find_dimension);
        tmp_called_name_2 = var__find_dimension;
        frame_f649f058c5bc65be149e8e834b832efd->m_frame.f_lineno = 556;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, const_str_plain_image);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "coocooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "coocooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "coocooooooooo";
            exception_lineno = 556;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "coocooooooooo";
            exception_lineno = 556;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
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

                    type_description_1 = "coocooooooooo";
                    exception_lineno = 556;
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

            type_description_1 = "coocooooooooo";
            exception_lineno = 556;
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
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
        assert(var_thumbnail_w == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_thumbnail_w = tmp_assign_source_11;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
        assert(var_thumbnail_h == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_thumbnail_h = tmp_assign_source_12;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        CHECK_OBJECT(var_thumbnails);
        tmp_called_instance_5 = var_thumbnails;
        tmp_dict_key_1 = const_str_plain_url;
        CHECK_OBJECT(var_thumbnail);
        tmp_dict_value_1 = var_thumbnail;
        tmp_args_element_name_9 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_9, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_width;
        CHECK_OBJECT(var_thumbnail_w);
        tmp_dict_value_2 = var_thumbnail_w;
        tmp_res = PyDict_SetItem(tmp_args_element_name_9, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_height;
        CHECK_OBJECT(var_thumbnail_h);
        tmp_dict_value_3 = var_thumbnail_h;
        tmp_res = PyDict_SetItem(tmp_args_element_name_9, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        frame_f649f058c5bc65be149e8e834b832efd->m_frame.f_lineno = 557;
        {
            PyObject *call_args[] = {tmp_args_element_name_9};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_append, call_args);
        }

        Py_DECREF(tmp_args_element_name_9);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "coocooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_3;
        CHECK_OBJECT(var__find_dimension);
        tmp_called_name_3 = var__find_dimension;
        frame_f649f058c5bc65be149e8e834b832efd->m_frame.f_lineno = 563;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, const_str_plain_player);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "coocooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_13 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "coocooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "coocooooooooo";
            exception_lineno = 563;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "coocooooooooo";
            exception_lineno = 563;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "coocooooooooo";
                    exception_lineno = 563;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = const_str_digest_fcf040720b88d60da4ce975010c44a3a;
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "coocooooooooo";
            exception_lineno = 563;
            goto try_except_handler_5;
        }
    }
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_16 = tmp_tuple_unpack_2__element_1;
        assert(var_video_w == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_video_w = tmp_assign_source_16;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_17 = tmp_tuple_unpack_2__element_2;
        assert(var_video_h == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_video_h = tmp_assign_source_17;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        CHECK_OBJECT(var_formats);
        tmp_expression_name_2 = var_formats;
        tmp_subscript_name_1 = const_int_0;
        tmp_called_instance_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_1, 0);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "coocooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_4 = const_str_plain_width;
        CHECK_OBJECT(var_video_w);
        tmp_dict_value_4 = var_video_w;
        tmp_args_element_name_10 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_10, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = const_str_plain_height;
        CHECK_OBJECT(var_video_h);
        tmp_dict_value_5 = var_video_h;
        tmp_res = PyDict_SetItem(tmp_args_element_name_10, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        frame_f649f058c5bc65be149e8e834b832efd->m_frame.f_lineno = 564;
        {
            PyObject *call_args[] = {tmp_args_element_name_10};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain_update, call_args);
        }

        Py_DECREF(tmp_called_instance_6);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "coocooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f649f058c5bc65be149e8e834b832efd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f649f058c5bc65be149e8e834b832efd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f649f058c5bc65be149e8e834b832efd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f649f058c5bc65be149e8e834b832efd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f649f058c5bc65be149e8e834b832efd, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f649f058c5bc65be149e8e834b832efd,
        type_description_1,
        par_self,
        par_url,
        var_video_id,
        var_webpage,
        var_vmap_url,
        var_formats,
        var_thumbnails,
        var_thumbnail,
        var__find_dimension,
        var_thumbnail_w,
        var_thumbnail_h,
        var_video_w,
        var_video_h
    );


    // Release cached frame.
    if (frame_f649f058c5bc65be149e8e834b832efd == cache_frame_f649f058c5bc65be149e8e834b832efd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_f649f058c5bc65be149e8e834b832efd);
    }
    cache_frame_f649f058c5bc65be149e8e834b832efd = NULL;

    assertFrameObject(frame_f649f058c5bc65be149e8e834b832efd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        tmp_dict_key_6 = const_str_plain_id;
        CHECK_OBJECT(var_video_id);
        tmp_dict_value_6 = var_video_id;
        tmp_return_value = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = const_str_plain_title;
        tmp_dict_value_7 = const_str_digest_5f8e1967fea5e6ccb724aa6a41b99176;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = const_str_plain_formats;
        CHECK_OBJECT(var_formats);
        tmp_dict_value_8 = var_formats;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = const_str_plain_thumbnails;
        CHECK_OBJECT(var_thumbnails);
        tmp_dict_value_9 = var_thumbnails;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        goto try_return_handler_1;
    }
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

    CHECK_OBJECT(var_vmap_url);
    Py_DECREF(var_vmap_url);
    var_vmap_url = NULL;

    CHECK_OBJECT(var_formats);
    Py_DECREF(var_formats);
    var_formats = NULL;

    CHECK_OBJECT(var_thumbnails);
    Py_DECREF(var_thumbnails);
    var_thumbnails = NULL;

    CHECK_OBJECT(var_thumbnail);
    Py_DECREF(var_thumbnail);
    var_thumbnail = NULL;

    CHECK_OBJECT(var__find_dimension);
    Py_DECREF(var__find_dimension);
    var__find_dimension = NULL;

    Py_XDECREF(var_thumbnail_w);
    var_thumbnail_w = NULL;

    Py_XDECREF(var_thumbnail_h);
    var_thumbnail_h = NULL;

    CHECK_OBJECT(var_video_w);
    Py_DECREF(var_video_w);
    var_video_w = NULL;

    CHECK_OBJECT(var_video_h);
    Py_DECREF(var_video_h);
    var_video_h = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_video_id);
    var_video_id = NULL;

    CHECK_OBJECT(var_webpage);
    Py_DECREF(var_webpage);
    var_webpage = NULL;

    Py_XDECREF(var_vmap_url);
    var_vmap_url = NULL;

    Py_XDECREF(var_formats);
    var_formats = NULL;

    Py_XDECREF(var_thumbnails);
    var_thumbnails = NULL;

    Py_XDECREF(var_thumbnail);
    var_thumbnail = NULL;

    Py_XDECREF(var__find_dimension);
    var__find_dimension = NULL;

    Py_XDECREF(var_thumbnail_w);
    var_thumbnail_w = NULL;

    Py_XDECREF(var_thumbnail_h);
    var_thumbnail_h = NULL;

    Py_XDECREF(var_video_w);
    var_video_w = NULL;

    Py_XDECREF(var_video_h);
    var_video_h = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

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


static PyObject *impl_youtube_dl$extractor$twitter$$$function_7__real_extract$$$function_1__find_dimension(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_target = python_pars[0];
    PyObject *var_w = NULL;
    PyObject *var_h = NULL;
    struct Nuitka_FrameObject *frame_7085610bbcfba0a44de814ecdf5aa16c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7085610bbcfba0a44de814ecdf5aa16c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7085610bbcfba0a44de814ecdf5aa16c)) {
        Py_XDECREF(cache_frame_7085610bbcfba0a44de814ecdf5aa16c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7085610bbcfba0a44de814ecdf5aa16c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7085610bbcfba0a44de814ecdf5aa16c = MAKE_FUNCTION_FRAME(codeobj_7085610bbcfba0a44de814ecdf5aa16c, module_youtube_dl$extractor$twitter, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7085610bbcfba0a44de814ecdf5aa16c->m_type_description == NULL);
    frame_7085610bbcfba0a44de814ecdf5aa16c = cache_frame_7085610bbcfba0a44de814ecdf5aa16c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7085610bbcfba0a44de814ecdf5aa16c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7085610bbcfba0a44de814ecdf5aa16c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_int_or_none);

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

            exception_lineno = 549;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        if (PyCell_GET(self->m_closure[0]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 549;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = PyCell_GET(self->m_closure[0]);
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain__html_search_meta);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = const_str_digest_949d10b413f5f58ab139ee1201ed5910;
        CHECK_OBJECT(par_target);
        tmp_right_name_1 = par_target;
        tmp_tuple_element_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 550;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        if (PyCell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "webpage");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 550;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET(self->m_closure[1]);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_kw_name_1 = PyDict_Copy(const_dict_f95321192b139e241e1ec13397bf5b8f);
        frame_7085610bbcfba0a44de814ecdf5aa16c->m_frame.f_lineno = 549;
        tmp_args_element_name_1 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        frame_7085610bbcfba0a44de814ecdf5aa16c->m_frame.f_lineno = 549;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        assert(var_w == NULL);
        var_w = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_int_or_none);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int_or_none);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 27635 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 551;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_2;
        if (PyCell_GET(self->m_closure[0]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 551;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = PyCell_GET(self->m_closure[0]);
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain__html_search_meta);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = const_str_digest_bf36a9be586403f31dbd2411126251ed;
        CHECK_OBJECT(par_target);
        tmp_right_name_2 = par_target;
        tmp_tuple_element_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 552;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_2);
        if (PyCell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_name_2);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "webpage");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 552;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = PyCell_GET(self->m_closure[1]);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_2);
        tmp_kw_name_2 = PyDict_Copy(const_dict_f95321192b139e241e1ec13397bf5b8f);
        frame_7085610bbcfba0a44de814ecdf5aa16c->m_frame.f_lineno = 551;
        tmp_args_element_name_2 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        frame_7085610bbcfba0a44de814ecdf5aa16c->m_frame.f_lineno = 551;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        assert(var_h == NULL);
        var_h = tmp_assign_source_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7085610bbcfba0a44de814ecdf5aa16c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7085610bbcfba0a44de814ecdf5aa16c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7085610bbcfba0a44de814ecdf5aa16c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7085610bbcfba0a44de814ecdf5aa16c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7085610bbcfba0a44de814ecdf5aa16c, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7085610bbcfba0a44de814ecdf5aa16c,
        type_description_1,
        par_target,
        var_w,
        var_h,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame.
    if (frame_7085610bbcfba0a44de814ecdf5aa16c == cache_frame_7085610bbcfba0a44de814ecdf5aa16c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_7085610bbcfba0a44de814ecdf5aa16c);
    }
    cache_frame_7085610bbcfba0a44de814ecdf5aa16c = NULL;

    assertFrameObject(frame_7085610bbcfba0a44de814ecdf5aa16c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(var_w);
        tmp_tuple_element_3 = var_w;
        tmp_return_value = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_h);
        tmp_tuple_element_3 = var_h;
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_3);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_w);
    Py_DECREF(var_w);
    var_w = NULL;

    CHECK_OBJECT(var_h);
    Py_DECREF(var_h);
    var_h = NULL;

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

    Py_XDECREF(var_w);
    var_w = NULL;

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
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_youtube_dl$extractor$twitter$$$function_8__real_extract(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *var_broadcast_id = NULL;
    PyObject *var_broadcast = NULL;
    PyObject *var_info = NULL;
    PyObject *var_media_key = NULL;
    PyObject *var_source = NULL;
    PyObject *var_m3u8_url = NULL;
    PyObject *var_m3u8_id = NULL;
    PyObject *var_state = NULL;
    PyObject *var_width = NULL;
    PyObject *var_height = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_72a40bee98f8051e3a89791d6c3b6786;
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
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_72a40bee98f8051e3a89791d6c3b6786 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_72a40bee98f8051e3a89791d6c3b6786)) {
        Py_XDECREF(cache_frame_72a40bee98f8051e3a89791d6c3b6786);

#if _DEBUG_REFCOUNTS
        if (cache_frame_72a40bee98f8051e3a89791d6c3b6786 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_72a40bee98f8051e3a89791d6c3b6786 = MAKE_FUNCTION_FRAME(codeobj_72a40bee98f8051e3a89791d6c3b6786, module_youtube_dl$extractor$twitter, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_72a40bee98f8051e3a89791d6c3b6786->m_type_description == NULL);
    frame_72a40bee98f8051e3a89791d6c3b6786 = cache_frame_72a40bee98f8051e3a89791d6c3b6786;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_72a40bee98f8051e3a89791d6c3b6786);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_72a40bee98f8051e3a89791d6c3b6786) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_1 = par_url;
        frame_72a40bee98f8051e3a89791d6c3b6786->m_frame.f_lineno = 594;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain__match_id, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_broadcast_id == NULL);
        var_broadcast_id = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        tmp_args_element_name_2 = const_str_digest_688535a588ab650ecfa2ea525ae2af13;
        CHECK_OBJECT(var_broadcast_id);
        tmp_args_element_name_3 = var_broadcast_id;
        tmp_dict_key_1 = const_str_plain_ids;
        CHECK_OBJECT(var_broadcast_id);
        tmp_dict_value_1 = var_broadcast_id;
        tmp_args_element_name_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_name_4, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_72a40bee98f8051e3a89791d6c3b6786->m_frame.f_lineno = 595;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_expression_name_2 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_2, const_str_plain__call_api, call_args);
        }

        Py_DECREF(tmp_args_element_name_4);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_str_plain_broadcasts;
        tmp_expression_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_broadcast_id);
        tmp_subscript_name_2 = var_broadcast_id;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_2);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_broadcast == NULL);
        var_broadcast = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_broadcast);
        tmp_args_element_name_5 = var_broadcast;
        CHECK_OBJECT(var_broadcast_id);
        tmp_args_element_name_6 = var_broadcast_id;
        frame_72a40bee98f8051e3a89791d6c3b6786->m_frame.f_lineno = 598;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_3, const_str_plain__parse_broadcast_data, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_info == NULL);
        var_info = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT(var_broadcast);
        tmp_expression_name_3 = var_broadcast;
        tmp_subscript_name_3 = const_str_plain_media_key;
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 599;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_media_key == NULL);
        var_media_key = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT(par_self);
        tmp_expression_name_5 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, const_str_plain__call_api);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = const_str_digest_07901c6f35b485abdc6d27175d3023e4;
        CHECK_OBJECT(var_media_key);
        tmp_right_name_1 = var_media_key;
        tmp_args_element_name_7 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 601;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_media_key);
        tmp_args_element_name_8 = var_media_key;
        frame_72a40bee98f8051e3a89791d6c3b6786->m_frame.f_lineno = 600;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_expression_name_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_4 = const_str_plain_source;
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_4);
        Py_DECREF(tmp_expression_name_4);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_source == NULL);
        var_source = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT(var_source);
        tmp_called_instance_4 = var_source;
        frame_72a40bee98f8051e3a89791d6c3b6786->m_frame.f_lineno = 602;
        tmp_or_left_value_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_noRedirectPlaybackUrl_tuple, 0));

        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 602;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 602;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        CHECK_OBJECT(var_source);
        tmp_expression_name_6 = var_source;
        tmp_subscript_name_5 = const_str_plain_location;
        tmp_or_right_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_6, tmp_subscript_name_5);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 602;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_6 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_m3u8_url == NULL);
        var_m3u8_url = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = const_str_digest_1dc4adb5f62d0b430daec327c01dca1a;
        CHECK_OBJECT(var_m3u8_url);
        tmp_compexpr_right_1 = var_m3u8_url;
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 603;
            type_description_1 = "oooooooooooo";
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
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        frame_72a40bee98f8051e3a89791d6c3b6786->m_frame.f_lineno = 604;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, const_str_plain_raise_geo_restricted);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        PyObject *tmp_subscript_name_6;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_compat_parse_qs);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_compat_parse_qs);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 34224 ], 37, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 605;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_compat_urllib_parse_urlparse);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_compat_urllib_parse_urlparse);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 32340 ], 50, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 605;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_2;
        CHECK_OBJECT(var_m3u8_url);
        tmp_args_element_name_10 = var_m3u8_url;
        frame_72a40bee98f8051e3a89791d6c3b6786->m_frame.f_lineno = 605;
        tmp_expression_name_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_10);
        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, const_str_plain_query);
        Py_DECREF(tmp_expression_name_8);
        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_72a40bee98f8051e3a89791d6c3b6786->m_frame.f_lineno = 605;
        tmp_called_instance_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_9);
        Py_DECREF(tmp_args_element_name_9);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = const_str_plain_type;
        tmp_call_arg_element_2 = LIST_COPY(const_list_none_list);
        frame_72a40bee98f8051e3a89791d6c3b6786->m_frame.f_lineno = 605;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_expression_name_7 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_6, const_str_plain_get, call_args);
        }

        Py_DECREF(tmp_called_instance_6);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_6 = const_int_0;
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_7, tmp_subscript_name_6, 0);
        Py_DECREF(tmp_expression_name_7);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_m3u8_id == NULL);
        var_m3u8_id = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_name_11;
        CHECK_OBJECT(par_self);
        tmp_called_instance_7 = par_self;
        CHECK_OBJECT(var_broadcast);
        tmp_args_element_name_11 = var_broadcast;
        frame_72a40bee98f8051e3a89791d6c3b6786->m_frame.f_lineno = 607;
        {
            PyObject *call_args[] = {tmp_args_element_name_11};
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, const_str_plain__extract_common_format_info, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 607;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 607;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooo";
            exception_lineno = 607;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooo";
            exception_lineno = 607;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooo";
            exception_lineno = 607;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_11;
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

                    type_description_1 = "oooooooooooo";
                    exception_lineno = 607;
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

            type_description_1 = "oooooooooooo";
            exception_lineno = 607;
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
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
        assert(var_state == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_state = tmp_assign_source_12;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;
        assert(var_width == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_width = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_3;
        assert(var_height == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_height = tmp_assign_source_14;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_8 = par_self;
        CHECK_OBJECT(var_m3u8_url);
        tmp_args_element_name_12 = var_m3u8_url;
        CHECK_OBJECT(var_broadcast_id);
        tmp_args_element_name_13 = var_broadcast_id;
        CHECK_OBJECT(var_m3u8_id);
        tmp_args_element_name_14 = var_m3u8_id;
        CHECK_OBJECT(var_state);
        tmp_args_element_name_15 = var_state;
        CHECK_OBJECT(var_width);
        tmp_args_element_name_16 = var_width;
        CHECK_OBJECT(var_height);
        tmp_args_element_name_17 = var_height;
        frame_72a40bee98f8051e3a89791d6c3b6786->m_frame.f_lineno = 608;
        {
            PyObject *call_args[] = {tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17};
            tmp_ass_subvalue_1 = CALL_METHOD_WITH_ARGS6(tmp_called_instance_8, const_str_plain__extract_pscp_m3u8_formats, call_args);
        }

        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 608;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_info);
        tmp_ass_subscribed_1 = var_info;
        tmp_ass_subscript_1 = const_str_plain_formats;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 608;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_72a40bee98f8051e3a89791d6c3b6786);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_72a40bee98f8051e3a89791d6c3b6786);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_72a40bee98f8051e3a89791d6c3b6786, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_72a40bee98f8051e3a89791d6c3b6786->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_72a40bee98f8051e3a89791d6c3b6786, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_72a40bee98f8051e3a89791d6c3b6786,
        type_description_1,
        par_self,
        par_url,
        var_broadcast_id,
        var_broadcast,
        var_info,
        var_media_key,
        var_source,
        var_m3u8_url,
        var_m3u8_id,
        var_state,
        var_width,
        var_height
    );


    // Release cached frame.
    if (frame_72a40bee98f8051e3a89791d6c3b6786 == cache_frame_72a40bee98f8051e3a89791d6c3b6786) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_72a40bee98f8051e3a89791d6c3b6786);
    }
    cache_frame_72a40bee98f8051e3a89791d6c3b6786 = NULL;

    assertFrameObject(frame_72a40bee98f8051e3a89791d6c3b6786);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_info);
    tmp_return_value = var_info;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_broadcast_id);
    Py_DECREF(var_broadcast_id);
    var_broadcast_id = NULL;

    CHECK_OBJECT(var_broadcast);
    Py_DECREF(var_broadcast);
    var_broadcast = NULL;

    CHECK_OBJECT(var_info);
    Py_DECREF(var_info);
    var_info = NULL;

    CHECK_OBJECT(var_media_key);
    Py_DECREF(var_media_key);
    var_media_key = NULL;

    CHECK_OBJECT(var_source);
    Py_DECREF(var_source);
    var_source = NULL;

    CHECK_OBJECT(var_m3u8_url);
    Py_DECREF(var_m3u8_url);
    var_m3u8_url = NULL;

    CHECK_OBJECT(var_m3u8_id);
    Py_DECREF(var_m3u8_id);
    var_m3u8_id = NULL;

    CHECK_OBJECT(var_state);
    Py_DECREF(var_state);
    var_state = NULL;

    CHECK_OBJECT(var_width);
    Py_DECREF(var_width);
    var_width = NULL;

    CHECK_OBJECT(var_height);
    Py_DECREF(var_height);
    var_height = NULL;

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

    Py_XDECREF(var_broadcast_id);
    var_broadcast_id = NULL;

    Py_XDECREF(var_broadcast);
    var_broadcast = NULL;

    Py_XDECREF(var_info);
    var_info = NULL;

    Py_XDECREF(var_media_key);
    var_media_key = NULL;

    Py_XDECREF(var_source);
    var_source = NULL;

    Py_XDECREF(var_m3u8_url);
    var_m3u8_url = NULL;

    Py_XDECREF(var_m3u8_id);
    var_m3u8_id = NULL;

    Py_XDECREF(var_state);
    var_state = NULL;

    Py_XDECREF(var_width);
    var_width = NULL;

    Py_XDECREF(var_height);
    var_height = NULL;

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



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_1__extract_variant_formats() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$twitter$$$function_1__extract_variant_formats,
        const_str_plain__extract_variant_formats,
#if PYTHON_VERSION >= 300
        const_str_digest_20eb3c986897f514794fd8ec41949774,
#endif
        codeobj_a6214a83054bdc081f4ffe7a0cf90761,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$twitter,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_2__extract_formats_from_vmap_url() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$twitter$$$function_2__extract_formats_from_vmap_url,
        const_str_plain__extract_formats_from_vmap_url,
#if PYTHON_VERSION >= 300
        const_str_digest_788ca6732f250c24f74a171981e6cd6a,
#endif
        codeobj_729601332d7bede059f31efc5959ae98,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$twitter,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_3__search_dimensions_in_video_url() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$twitter$$$function_3__search_dimensions_in_video_url,
        const_str_plain__search_dimensions_in_video_url,
#if PYTHON_VERSION >= 300
        const_str_digest_08ba8f9785a4d987c9646560e36cc234,
#endif
        codeobj_5b249ebb56089a54f3c2f8011560f48e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$twitter,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_4__call_api(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$twitter$$$function_4__call_api,
        const_str_plain__call_api,
#if PYTHON_VERSION >= 300
        const_str_digest_2e2a8e363dceb1d96aba11653976c439,
#endif
        codeobj_ffb7e7bfcbf6cce88071ec15407e5c85,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$twitter,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_5__real_extract() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$twitter$$$function_5__real_extract,
        const_str_plain__real_extract,
#if PYTHON_VERSION >= 300
        const_str_digest_57d6b7ff46d6404d3b6b744aa763c6be,
#endif
        codeobj_e6965e15a72154e800ba2063bdb6c6ab,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$twitter,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_6__real_extract() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$twitter$$$function_6__real_extract,
        const_str_plain__real_extract,
#if PYTHON_VERSION >= 300
        const_str_digest_fa2c2397f49b54a0b29528a1cf75bca9,
#endif
        codeobj_2b0ecdbe36ffd6641d199d2c1e18c3e0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$twitter,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        const_str_digest_2edd938663aa2c110010562b243eb33e,
#endif
        codeobj_570fe2a02d0f64635817e75117d58f52,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$twitter,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_2_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_2_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        const_str_digest_2edd938663aa2c110010562b243eb33e,
#endif
        codeobj_4e8c8d087094259128b3af9f16ae10bd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$twitter,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_3_add_thumbnail() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_3_add_thumbnail,
        const_str_plain_add_thumbnail,
#if PYTHON_VERSION >= 300
        const_str_digest_e51a8acf267a994f90aa6db69f1c1595,
#endif
        codeobj_f979f3816df0f298d745c2f3306fd5a9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$twitter,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_4_get_binding_value() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_4_get_binding_value,
        const_str_plain_get_binding_value,
#if PYTHON_VERSION >= 300
        const_str_digest_32ec53f25d7aae19d10eaa3b0ead96bc,
#endif
        codeobj_bc677129562400a878cfafa5c57ec9bc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$twitter,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_4_get_binding_value$$$function_1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_4_get_binding_value$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        const_str_digest_1bd0868c0959458b51eefc7ea3bbc4dc,
#endif
        codeobj_2f9556119d867d23d9016f5648b1cfca,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$twitter,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_5_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_5_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        const_str_digest_2edd938663aa2c110010562b243eb33e,
#endif
        codeobj_62616bde53760bb59570b5e2ff99528b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$twitter,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_7__real_extract() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$twitter$$$function_7__real_extract,
        const_str_plain__real_extract,
#if PYTHON_VERSION >= 300
        const_str_digest_92fa1fb276568d2d88f8d6f3b1ba64c5,
#endif
        codeobj_f649f058c5bc65be149e8e834b832efd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$twitter,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_7__real_extract$$$function_1__find_dimension() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$twitter$$$function_7__real_extract$$$function_1__find_dimension,
        const_str_plain__find_dimension,
#if PYTHON_VERSION >= 300
        const_str_digest_4091e8875aaf2c092db3c4845fb6fbbe,
#endif
        codeobj_7085610bbcfba0a44de814ecdf5aa16c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$twitter,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_8__real_extract() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$extractor$twitter$$$function_8__real_extract,
        const_str_plain__real_extract,
#if PYTHON_VERSION >= 300
        const_str_digest_76361f08e25336a5fea63dd273e1df60,
#endif
        codeobj_72a40bee98f8051e3a89791d6c3b6786,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$extractor$twitter,
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

function_impl_code functable_youtube_dl$extractor$twitter[] = {
    impl_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_1_lambda,
    impl_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_2_lambda,
    impl_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_3_add_thumbnail,
    impl_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_4_get_binding_value,
    impl_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_5_lambda,
    impl_youtube_dl$extractor$twitter$$$function_6__real_extract$$$function_4_get_binding_value$$$function_1_lambda,
    impl_youtube_dl$extractor$twitter$$$function_7__real_extract$$$function_1__find_dimension,
    impl_youtube_dl$extractor$twitter$$$function_1__extract_variant_formats,
    impl_youtube_dl$extractor$twitter$$$function_2__extract_formats_from_vmap_url,
    impl_youtube_dl$extractor$twitter$$$function_3__search_dimensions_in_video_url,
    impl_youtube_dl$extractor$twitter$$$function_4__call_api,
    impl_youtube_dl$extractor$twitter$$$function_5__real_extract,
    impl_youtube_dl$extractor$twitter$$$function_6__real_extract,
    impl_youtube_dl$extractor$twitter$$$function_7__real_extract,
    impl_youtube_dl$extractor$twitter$$$function_8__real_extract,
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

    function_impl_code *current = functable_youtube_dl$extractor$twitter;
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

    if (offset > sizeof(functable_youtube_dl$extractor$twitter) || offset < 0) {
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
        functable_youtube_dl$extractor$twitter[offset],
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
        module_youtube_dl$extractor$twitter,
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
PyObject *modulecode_youtube_dl$extractor$twitter(PyObject *module) {
    module_youtube_dl$extractor$twitter = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_youtube_dl$extractor$twitter;
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
    PRINT_STRING("youtube_dl.extractor.twitter: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("youtube_dl.extractor.twitter: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("youtube_dl.extractor.twitter: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in inityoutube_dl$extractor$twitter\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_youtube_dl$extractor$twitter = MODULE_DICT(module_youtube_dl$extractor$twitter);

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
        moduledict_youtube_dl$extractor$twitter,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$extractor$twitter,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$extractor$twitter,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$extractor$twitter,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$extractor$twitter,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_youtube_dl$extractor$twitter);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
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
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_354d4a14801b795d9517bc2323cd3bed;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_youtube_dl$extractor$twitter_31 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_14587e7da8c76f1e0caeb6b5a386002c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_14587e7da8c76f1e0caeb6b5a386002c_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_youtube_dl$extractor$twitter_99 = NULL;
    struct Nuitka_FrameObject *frame_5d7f3f4d04d4e7cc490225dab05a1ff8_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_5d7f3f4d04d4e7cc490225dab05a1ff8_3 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_youtube_dl$extractor$twitter_187 = NULL;
    struct Nuitka_FrameObject *frame_fc2e208b45af8c968b24b07833a17bd9_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_fc2e208b45af8c968b24b07833a17bd9_4 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_youtube_dl$extractor$twitter_521 = NULL;
    struct Nuitka_FrameObject *frame_ea089bfcef10064a393e947add0cae46_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_ea089bfcef10064a393e947add0cae46_5 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *locals_youtube_dl$extractor$twitter_577 = NULL;
    struct Nuitka_FrameObject *frame_c63d8f61bb5501847bebb1a163633f0d_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c63d8f61bb5501847bebb1a163633f0d_6 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_d87f02c55e687019d731a3b4c65b35ca;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_354d4a14801b795d9517bc2323cd3bed = MAKE_MODULE_FRAME(codeobj_354d4a14801b795d9517bc2323cd3bed, module_youtube_dl$extractor$twitter);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_354d4a14801b795d9517bc2323cd3bed);
    assert(Py_REFCNT(frame_354d4a14801b795d9517bc2323cd3bed) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_d87f02c55e687019d731a3b4c65b35ca;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        frame_354d4a14801b795d9517bc2323cd3bed->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
           tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_youtube_dl$extractor$twitter,
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
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_re;
        tmp_globals_name_1 = (PyObject *)moduledict_youtube_dl$extractor$twitter;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_354d4a14801b795d9517bc2323cd3bed->m_frame.f_lineno = 4;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_common;
        tmp_globals_name_2 = (PyObject *)moduledict_youtube_dl$extractor$twitter;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_InfoExtractor_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_354d4a14801b795d9517bc2323cd3bed->m_frame.f_lineno = 6;
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
                (PyObject *)moduledict_youtube_dl$extractor$twitter,
                const_str_plain_InfoExtractor,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_InfoExtractor);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_InfoExtractor, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_compat;
        tmp_globals_name_3 = (PyObject *)moduledict_youtube_dl$extractor$twitter;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_dde5f81a1d82b77231a42a528fec0f14_tuple;
        tmp_level_name_3 = const_int_pos_2;
        frame_354d4a14801b795d9517bc2323cd3bed->m_frame.f_lineno = 7;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
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
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_youtube_dl$extractor$twitter,
                const_str_plain_compat_HTTPError,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_compat_HTTPError);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_compat_HTTPError, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_youtube_dl$extractor$twitter,
                const_str_plain_compat_parse_qs,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_compat_parse_qs);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_compat_parse_qs, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_youtube_dl$extractor$twitter,
                const_str_plain_compat_urllib_parse_unquote,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_compat_urllib_parse_unquote);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_compat_urllib_parse_unquote, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_youtube_dl$extractor$twitter,
                const_str_plain_compat_urllib_parse_urlparse,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_compat_urllib_parse_urlparse);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_compat_urllib_parse_urlparse, tmp_assign_source_11);
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_utils;
        tmp_globals_name_4 = (PyObject *)moduledict_youtube_dl$extractor$twitter;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_b9d1f2d4a14a5096f5c446fe7f61a2f6_tuple;
        tmp_level_name_4 = const_int_pos_2;
        frame_354d4a14801b795d9517bc2323cd3bed->m_frame.f_lineno = 13;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_youtube_dl$extractor$twitter,
                const_str_plain_dict_get,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_dict_get);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_dict_get, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_youtube_dl$extractor$twitter,
                const_str_plain_ExtractorError,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_ExtractorError);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_ExtractorError, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_youtube_dl$extractor$twitter,
                const_str_plain_float_or_none,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_float_or_none);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_float_or_none, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
           tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_youtube_dl$extractor$twitter,
                const_str_plain_int_or_none,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain_int_or_none);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_int_or_none, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_youtube_dl$extractor$twitter,
                const_str_plain_try_get,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_11, const_str_plain_try_get);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_try_get, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
           tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_youtube_dl$extractor$twitter,
                const_str_plain_strip_or_none,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_12, const_str_plain_strip_or_none);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_strip_or_none, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
           tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_youtube_dl$extractor$twitter,
                const_str_plain_unified_timestamp,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_13, const_str_plain_unified_timestamp);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_unified_timestamp, tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
           tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_youtube_dl$extractor$twitter,
                const_str_plain_update_url_query,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_14, const_str_plain_update_url_query);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_update_url_query, tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_15 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
           tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_youtube_dl$extractor$twitter,
                const_str_plain_xpath_text,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_15, const_str_plain_xpath_text);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_xpath_text, tmp_assign_source_21);
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
        PyObject *tmp_assign_source_22;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_periscope;
        tmp_globals_name_5 = (PyObject *)moduledict_youtube_dl$extractor$twitter;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_PeriscopeBaseIE_str_plain_PeriscopeIE_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_354d4a14801b795d9517bc2323cd3bed->m_frame.f_lineno = 25;
        tmp_assign_source_22 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_22;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_16 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
           tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_youtube_dl$extractor$twitter,
                const_str_plain_PeriscopeBaseIE,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_16, const_str_plain_PeriscopeBaseIE);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_PeriscopeBaseIE, tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_17 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
           tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_youtube_dl$extractor$twitter,
                const_str_plain_PeriscopeIE,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_17, const_str_plain_PeriscopeIE);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_PeriscopeIE, tmp_assign_source_24);
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_InfoExtractor);

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

            exception_lineno = 31;

            goto try_except_handler_4;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_assign_source_25 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_25, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_26 = impl___internal__$$$function_4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
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


            exception_lineno = 31;

            goto try_except_handler_4;
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


            exception_lineno = 31;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_4;
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


            exception_lineno = 31;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_28 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_28;
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


            exception_lineno = 31;

            goto try_except_handler_4;
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


        exception_lineno = 31;

        goto try_except_handler_4;
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
        PyObject *tmp_assign_source_29;
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


            exception_lineno = 31;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = const_str_plain_TwitterBaseIE;
        tmp_args_name_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_354d4a14801b795d9517bc2323cd3bed->m_frame.f_lineno = 31;
        tmp_assign_source_29 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_29;
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


            exception_lineno = 31;

            goto try_except_handler_4;
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


            exception_lineno = 31;

            goto try_except_handler_4;
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

            exception_lineno = 31;

            goto try_except_handler_4;
        }
        PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_3);
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 31;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_30;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_31;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_youtube_dl$extractor$twitter_31 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_a7c8213a63902a73a20ecd4101918bed;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_31, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_plain_TwitterBaseIE;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_31, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_6;
        }
        if (isFrameUnusable(cache_frame_14587e7da8c76f1e0caeb6b5a386002c_2)) {
            Py_XDECREF(cache_frame_14587e7da8c76f1e0caeb6b5a386002c_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_14587e7da8c76f1e0caeb6b5a386002c_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_14587e7da8c76f1e0caeb6b5a386002c_2 = MAKE_FUNCTION_FRAME(codeobj_14587e7da8c76f1e0caeb6b5a386002c, module_youtube_dl$extractor$twitter, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_14587e7da8c76f1e0caeb6b5a386002c_2->m_type_description == NULL);
        frame_14587e7da8c76f1e0caeb6b5a386002c_2 = cache_frame_14587e7da8c76f1e0caeb6b5a386002c_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_14587e7da8c76f1e0caeb6b5a386002c_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_14587e7da8c76f1e0caeb6b5a386002c_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = const_str_digest_92ff0b7d187af079be4650cb76f1cd15;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_31, const_str_plain__API_BASE, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = const_str_digest_bed6549aa145024e284e351a0050d656;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_31, const_str_plain__BASE_REGEX, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_31, const_str_plain__GUEST_TOKEN, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_1__extract_variant_formats();



        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_31, const_str_plain__extract_variant_formats, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_2__extract_formats_from_vmap_url();



        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_31, const_str_plain__extract_formats_from_vmap_url, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_staticmethod_arg_1;
            tmp_res = MAPPING_HAS_ITEM(locals_youtube_dl$extractor$twitter_31, const_str_plain_staticmethod);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_name_2 = PyObject_GetItem(locals_youtube_dl$extractor$twitter_31, const_str_plain_staticmethod);

            if (tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 2138 ], 34, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_1 = MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_3__search_dimensions_in_video_url();



            frame_14587e7da8c76f1e0caeb6b5a386002c_2->m_frame.f_lineno = 69;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_staticmethod_arg_1 = MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_3__search_dimensions_in_video_url();



            tmp_dictset_value = BUILTIN_STATICMETHOD(tmp_staticmethod_arg_1);
            Py_DECREF(tmp_staticmethod_arg_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_31, const_str_plain__search_dimensions_in_video_url, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_4;
            tmp_tuple_element_4 = PyDict_New();
            tmp_defaults_1 = PyTuple_New(1);
            PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_4);
            tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_4__call_api(tmp_defaults_1);



            tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_31, const_str_plain__call_api, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_14587e7da8c76f1e0caeb6b5a386002c_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_14587e7da8c76f1e0caeb6b5a386002c_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_14587e7da8c76f1e0caeb6b5a386002c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_14587e7da8c76f1e0caeb6b5a386002c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_14587e7da8c76f1e0caeb6b5a386002c_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_14587e7da8c76f1e0caeb6b5a386002c_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if (frame_14587e7da8c76f1e0caeb6b5a386002c_2 == cache_frame_14587e7da8c76f1e0caeb6b5a386002c_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(frame_14587e7da8c76f1e0caeb6b5a386002c_2);
        }
        cache_frame_14587e7da8c76f1e0caeb6b5a386002c_2 = NULL;

        assertFrameObject(frame_14587e7da8c76f1e0caeb6b5a386002c_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_compexpr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_7 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_31, const_str_plain___orig_bases__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_6;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = const_str_plain_TwitterBaseIE;
            tmp_args_name_2 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_5);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_5);
            PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_youtube_dl$extractor$twitter_31;
            Py_INCREF(tmp_tuple_element_5);
            PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_354d4a14801b795d9517bc2323cd3bed->m_frame.f_lineno = 31;
            tmp_assign_source_32 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_32;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_31 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_31);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_youtube_dl$extractor$twitter_31);
        locals_youtube_dl$extractor$twitter_31 = NULL;
        goto try_return_handler_5;
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

        Py_DECREF(locals_youtube_dl$extractor$twitter_31);
        locals_youtube_dl$extractor$twitter_31 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;

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
        exception_lineno = 31;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_TwitterBaseIE, tmp_assign_source_31);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
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
        PyObject *tmp_assign_source_33;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_InfoExtractor);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_InfoExtractor);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 33651 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 99;

            goto try_except_handler_7;
        }

        tmp_tuple_element_6 = tmp_mvar_value_4;
        tmp_assign_source_33 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_6);
        PyTuple_SET_ITEM(tmp_assign_source_33, 0, tmp_tuple_element_6);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_34 = impl___internal__$$$function_4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_9;
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


            exception_lineno = 99;

            goto try_except_handler_7;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = const_str_plain_metaclass;
        tmp_metaclass_name_2 = DICT_GET_ITEM(tmp_dict_name_5, tmp_key_name_5);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_7;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_7;
        }
        tmp_condition_result_9 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_name_6 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_6, tmp_subscript_name_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_7;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_7;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_2);
        condexpr_end_5:;
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_36 = SELECT_METACLASS(tmp_metaclass_name_2, tmp_bases_name_2);
        Py_DECREF(tmp_metaclass_name_2);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_36;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_name_6;
        tmp_key_name_6 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_6, tmp_key_name_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_7;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
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


        exception_lineno = 99;

        goto try_except_handler_7;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_expression_name_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_7 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr(tmp_expression_name_7, const_str_plain___prepare__);
        tmp_condition_result_11 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kw_name_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_8 = tmp_class_creation_2__metaclass;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, const_str_plain___prepare__);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_7;
        }
        tmp_tuple_element_7 = const_str_plain_TwitterCardIE;
        tmp_args_name_3 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_7);
        PyTuple_SET_ITEM(tmp_args_name_3, 0, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_7 = tmp_class_creation_2__bases;
        Py_INCREF(tmp_tuple_element_7);
        PyTuple_SET_ITEM(tmp_args_name_3, 1, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
        frame_354d4a14801b795d9517bc2323cd3bed->m_frame.f_lineno = 99;
        tmp_assign_source_37 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_name_3);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_37;
    }
    {
        nuitka_bool tmp_condition_result_12;
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


            exception_lineno = 99;

            goto try_except_handler_7;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
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
        PyObject *tmp_tuple_element_8;
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
        tmp_tuple_element_8 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_7;
        }
        tmp_right_name_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_type_arg_4 = tmp_class_creation_2__prepared;
        tmp_expression_name_10 = BUILTIN_TYPE1(tmp_type_arg_4);
        assert(!(tmp_expression_name_10 == NULL));
        tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, const_str_plain___name__);
        Py_DECREF(tmp_expression_name_10);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_right_name_2);

            exception_lineno = 99;

            goto try_except_handler_7;
        }
        PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_8);
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 99;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_38;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_39;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_youtube_dl$extractor$twitter_99 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_a7c8213a63902a73a20ecd4101918bed;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_99, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_9;
        }
        tmp_dictset_value = const_str_plain_TwitterCardIE;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_99, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_9;
        }
        if (isFrameUnusable(cache_frame_5d7f3f4d04d4e7cc490225dab05a1ff8_3)) {
            Py_XDECREF(cache_frame_5d7f3f4d04d4e7cc490225dab05a1ff8_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_5d7f3f4d04d4e7cc490225dab05a1ff8_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_5d7f3f4d04d4e7cc490225dab05a1ff8_3 = MAKE_FUNCTION_FRAME(codeobj_5d7f3f4d04d4e7cc490225dab05a1ff8, module_youtube_dl$extractor$twitter, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_5d7f3f4d04d4e7cc490225dab05a1ff8_3->m_type_description == NULL);
        frame_5d7f3f4d04d4e7cc490225dab05a1ff8_3 = cache_frame_5d7f3f4d04d4e7cc490225dab05a1ff8_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_5d7f3f4d04d4e7cc490225dab05a1ff8_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_5d7f3f4d04d4e7cc490225dab05a1ff8_3) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = const_str_digest_2d2171fcdb2d5e03108a1cef1e36f97f;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_99, const_str_plain_IE_NAME, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_left_name_3;
            PyObject *tmp_expression_name_11;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_right_name_3;
            tmp_expression_name_11 = PyObject_GetItem(locals_youtube_dl$extractor$twitter_99, const_str_plain_TwitterBaseIE);

            if (tmp_expression_name_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_TwitterBaseIE);

                    if (unlikely(tmp_mvar_value_5 == NULL)) {
                        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_TwitterBaseIE);
                    }

                    if (tmp_mvar_value_5 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 50678 ], 35, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 101;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }

                    tmp_expression_name_11 = tmp_mvar_value_5;
                    Py_INCREF(tmp_expression_name_11);
                }
            }

            tmp_left_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, const_str_plain__BASE_REGEX);
            Py_DECREF(tmp_expression_name_11);
            if (tmp_left_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_right_name_3 = const_str_digest_0518d5712ff540d88be7171ce3b6b49d;
            tmp_dictset_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_3, tmp_right_name_3);
            Py_DECREF(tmp_left_name_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_99, const_str_plain__VALID_URL, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = DEEP_COPY(const_list_0b1df5440fbc4f86bdcd18deee1cd258_list);
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_99, const_str_plain__TESTS, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_5__real_extract();



        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_99, const_str_plain__real_extract, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5d7f3f4d04d4e7cc490225dab05a1ff8_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5d7f3f4d04d4e7cc490225dab05a1ff8_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5d7f3f4d04d4e7cc490225dab05a1ff8_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5d7f3f4d04d4e7cc490225dab05a1ff8_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5d7f3f4d04d4e7cc490225dab05a1ff8_3, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5d7f3f4d04d4e7cc490225dab05a1ff8_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if (frame_5d7f3f4d04d4e7cc490225dab05a1ff8_3 == cache_frame_5d7f3f4d04d4e7cc490225dab05a1ff8_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(frame_5d7f3f4d04d4e7cc490225dab05a1ff8_3);
        }
        cache_frame_5d7f3f4d04d4e7cc490225dab05a1ff8_3 = NULL;

        assertFrameObject(frame_5d7f3f4d04d4e7cc490225dab05a1ff8_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_9;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_compexpr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_compexpr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_99, const_str_plain___orig_bases__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_9;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_name_5 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_9 = const_str_plain_TwitterCardIE;
            tmp_args_name_4 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_args_name_4, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_9 = tmp_class_creation_2__bases;
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_args_name_4, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_youtube_dl$extractor$twitter_99;
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_args_name_4, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_354d4a14801b795d9517bc2323cd3bed->m_frame.f_lineno = 99;
            tmp_assign_source_40 = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_4, tmp_kw_name_4);
            Py_DECREF(tmp_args_name_4);
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto try_except_handler_9;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_40;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_39 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_39);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_youtube_dl$extractor$twitter_99);
        locals_youtube_dl$extractor$twitter_99 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_youtube_dl$extractor$twitter_99);
        locals_youtube_dl$extractor$twitter_99 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;

        goto outline_result_2;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 99;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_TwitterCardIE, tmp_assign_source_39);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
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

    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_TwitterBaseIE);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_TwitterBaseIE);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 50678 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 187;

            goto try_except_handler_10;
        }

        tmp_tuple_element_10 = tmp_mvar_value_6;
        tmp_assign_source_41 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_10);
        PyTuple_SET_ITEM(tmp_assign_source_41, 0, tmp_tuple_element_10);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_42 = impl___internal__$$$function_4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = PyDict_New();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        nuitka_bool tmp_condition_result_15;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_bases_name_3;
        tmp_key_name_7 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_7, tmp_key_name_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto try_except_handler_10;
        }
        tmp_condition_result_14 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_name_8 = const_str_plain_metaclass;
        tmp_metaclass_name_3 = DICT_GET_ITEM(tmp_dict_name_8, tmp_key_name_8);
        if (tmp_metaclass_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto try_except_handler_10;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto try_except_handler_10;
        }
        tmp_condition_result_15 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_name_12 = tmp_class_creation_3__bases;
        tmp_subscript_name_3 = const_int_0;
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_12, tmp_subscript_name_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto try_except_handler_10;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto try_except_handler_10;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_3);
        condexpr_end_7:;
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_name_3 = tmp_class_creation_3__bases;
        tmp_assign_source_44 = SELECT_METACLASS(tmp_metaclass_name_3, tmp_bases_name_3);
        Py_DECREF(tmp_metaclass_name_3);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_44;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_name_9;
        tmp_key_name_9 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_9, tmp_key_name_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto try_except_handler_10;
        }
        tmp_condition_result_16 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 187;

        goto try_except_handler_10;
    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_expression_name_13;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_name_13 = tmp_class_creation_3__metaclass;
        tmp_res = PyObject_HasAttr(tmp_expression_name_13, const_str_plain___prepare__);
        tmp_condition_result_17 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_args_name_5;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_kw_name_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_name_14 = tmp_class_creation_3__metaclass;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, const_str_plain___prepare__);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto try_except_handler_10;
        }
        tmp_tuple_element_11 = const_str_plain_TwitterIE;
        tmp_args_name_5 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_11);
        PyTuple_SET_ITEM(tmp_args_name_5, 0, tmp_tuple_element_11);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_11 = tmp_class_creation_3__bases;
        Py_INCREF(tmp_tuple_element_11);
        PyTuple_SET_ITEM(tmp_args_name_5, 1, tmp_tuple_element_11);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
        frame_354d4a14801b795d9517bc2323cd3bed->m_frame.f_lineno = 187;
        tmp_assign_source_45 = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_5, tmp_kw_name_5);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_name_5);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_45;
    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_expression_name_15;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_name_15 = tmp_class_creation_3__prepared;
        tmp_res = PyObject_HasAttr(tmp_expression_name_15, const_str_plain___getitem__);
        tmp_operand_name_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto try_except_handler_10;
        }
        tmp_condition_result_18 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_type_arg_6;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_left_name_4 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = const_str_plain___name__;
        tmp_getattr_default_3 = const_str_angle_metaclass;
        tmp_tuple_element_12 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto try_except_handler_10;
        }
        tmp_right_name_4 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_4, 0, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_type_arg_6 = tmp_class_creation_3__prepared;
        tmp_expression_name_16 = BUILTIN_TYPE1(tmp_type_arg_6);
        assert(!(tmp_expression_name_16 == NULL));
        tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, const_str_plain___name__);
        Py_DECREF(tmp_expression_name_16);
        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_right_name_4);

            exception_lineno = 187;

            goto try_except_handler_10;
        }
        PyTuple_SET_ITEM(tmp_right_name_4, 1, tmp_tuple_element_12);
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 187;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = PyDict_New();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_46;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_47;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_youtube_dl$extractor$twitter_187 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_a7c8213a63902a73a20ecd4101918bed;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_187, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto try_except_handler_12;
        }
        tmp_dictset_value = const_str_plain_TwitterIE;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_187, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto try_except_handler_12;
        }
        if (isFrameUnusable(cache_frame_fc2e208b45af8c968b24b07833a17bd9_4)) {
            Py_XDECREF(cache_frame_fc2e208b45af8c968b24b07833a17bd9_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_fc2e208b45af8c968b24b07833a17bd9_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_fc2e208b45af8c968b24b07833a17bd9_4 = MAKE_FUNCTION_FRAME(codeobj_fc2e208b45af8c968b24b07833a17bd9, module_youtube_dl$extractor$twitter, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_fc2e208b45af8c968b24b07833a17bd9_4->m_type_description == NULL);
        frame_fc2e208b45af8c968b24b07833a17bd9_4 = cache_frame_fc2e208b45af8c968b24b07833a17bd9_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_fc2e208b45af8c968b24b07833a17bd9_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_fc2e208b45af8c968b24b07833a17bd9_4) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = const_str_plain_twitter;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_187, const_str_plain_IE_NAME, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_left_name_5;
            PyObject *tmp_expression_name_17;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_right_name_5;
            tmp_expression_name_17 = PyObject_GetItem(locals_youtube_dl$extractor$twitter_187, const_str_plain_TwitterBaseIE);

            if (tmp_expression_name_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_TwitterBaseIE);

                    if (unlikely(tmp_mvar_value_7 == NULL)) {
                        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_TwitterBaseIE);
                    }

                    if (tmp_mvar_value_7 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 50678 ], 35, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 189;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }

                    tmp_expression_name_17 = tmp_mvar_value_7;
                    Py_INCREF(tmp_expression_name_17);
                }
            }

            tmp_left_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, const_str_plain__BASE_REGEX);
            Py_DECREF(tmp_expression_name_17);
            if (tmp_left_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_right_name_5 = const_str_digest_b76693e804cc6d7eb2bfe9f2ab654fc1;
            tmp_dictset_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_5, tmp_right_name_5);
            Py_DECREF(tmp_left_name_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_187, const_str_plain__VALID_URL, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = DEEP_COPY(const_list_3a789506d261d2acc2976c5dc1724958_list);
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_187, const_str_plain__TESTS, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_6__real_extract();



        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_187, const_str_plain__real_extract, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_fc2e208b45af8c968b24b07833a17bd9_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_fc2e208b45af8c968b24b07833a17bd9_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_fc2e208b45af8c968b24b07833a17bd9_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_fc2e208b45af8c968b24b07833a17bd9_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_fc2e208b45af8c968b24b07833a17bd9_4, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_fc2e208b45af8c968b24b07833a17bd9_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame.
        if (frame_fc2e208b45af8c968b24b07833a17bd9_4 == cache_frame_fc2e208b45af8c968b24b07833a17bd9_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(frame_fc2e208b45af8c968b24b07833a17bd9_4);
        }
        cache_frame_fc2e208b45af8c968b24b07833a17bd9_4 = NULL;

        assertFrameObject(frame_fc2e208b45af8c968b24b07833a17bd9_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_12;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_compexpr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_compexpr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_19 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_3, tmp_compexpr_right_3);
            if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_187, const_str_plain___orig_bases__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto try_except_handler_12;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kw_name_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_name_7 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_13 = const_str_plain_TwitterIE;
            tmp_args_name_6 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_13);
            PyTuple_SET_ITEM(tmp_args_name_6, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_13 = tmp_class_creation_3__bases;
            Py_INCREF(tmp_tuple_element_13);
            PyTuple_SET_ITEM(tmp_args_name_6, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = locals_youtube_dl$extractor$twitter_187;
            Py_INCREF(tmp_tuple_element_13);
            PyTuple_SET_ITEM(tmp_args_name_6, 2, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_354d4a14801b795d9517bc2323cd3bed->m_frame.f_lineno = 187;
            tmp_assign_source_48 = CALL_FUNCTION(tmp_called_name_7, tmp_args_name_6, tmp_kw_name_6);
            Py_DECREF(tmp_args_name_6);
            if (tmp_assign_source_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto try_except_handler_12;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_48;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_47 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_47);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_youtube_dl$extractor$twitter_187);
        locals_youtube_dl$extractor$twitter_187 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_youtube_dl$extractor$twitter_187);
        locals_youtube_dl$extractor$twitter_187 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;

        goto outline_result_3;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 187;
        goto try_except_handler_10;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_TwitterIE, tmp_assign_source_47);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;

    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;

    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;

    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;

    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_TwitterBaseIE);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_TwitterBaseIE);
        }

        if (tmp_mvar_value_8 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 50678 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 521;

            goto try_except_handler_13;
        }

        tmp_tuple_element_14 = tmp_mvar_value_8;
        tmp_assign_source_49 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_14);
        PyTuple_SET_ITEM(tmp_assign_source_49, 0, tmp_tuple_element_14);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_50 = impl___internal__$$$function_4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = PyDict_New();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_metaclass_name_4;
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_key_name_10;
        PyObject *tmp_dict_name_10;
        PyObject *tmp_dict_name_11;
        PyObject *tmp_key_name_11;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_bases_name_4;
        tmp_key_name_10 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_10, tmp_key_name_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_13;
        }
        tmp_condition_result_20 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_name_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_name_11 = const_str_plain_metaclass;
        tmp_metaclass_name_4 = DICT_GET_ITEM(tmp_dict_name_11, tmp_key_name_11);
        if (tmp_metaclass_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_13;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_13;
        }
        tmp_condition_result_21 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_name_18 = tmp_class_creation_4__bases;
        tmp_subscript_name_4 = const_int_0;
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_18, tmp_subscript_name_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_13;
        }
        tmp_metaclass_name_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_13;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_4);
        condexpr_end_9:;
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_name_4 = tmp_class_creation_4__bases;
        tmp_assign_source_52 = SELECT_METACLASS(tmp_metaclass_name_4, tmp_bases_name_4);
        Py_DECREF(tmp_metaclass_name_4);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_52;
    }
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_key_name_12;
        PyObject *tmp_dict_name_12;
        tmp_key_name_12 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_12, tmp_key_name_12);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_13;
        }
        tmp_condition_result_22 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 521;

        goto try_except_handler_13;
    }
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_expression_name_19;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_name_19 = tmp_class_creation_4__metaclass;
        tmp_res = PyObject_HasAttr(tmp_expression_name_19, const_str_plain___prepare__);
        tmp_condition_result_23 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_args_name_7;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_kw_name_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_name_20 = tmp_class_creation_4__metaclass;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, const_str_plain___prepare__);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_13;
        }
        tmp_tuple_element_15 = const_str_plain_TwitterAmplifyIE;
        tmp_args_name_7 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_15);
        PyTuple_SET_ITEM(tmp_args_name_7, 0, tmp_tuple_element_15);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_15 = tmp_class_creation_4__bases;
        Py_INCREF(tmp_tuple_element_15);
        PyTuple_SET_ITEM(tmp_args_name_7, 1, tmp_tuple_element_15);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;
        frame_354d4a14801b795d9517bc2323cd3bed->m_frame.f_lineno = 521;
        tmp_assign_source_53 = CALL_FUNCTION(tmp_called_name_8, tmp_args_name_7, tmp_kw_name_7);
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_name_7);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_53;
    }
    {
        nuitka_bool tmp_condition_result_24;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_expression_name_21;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_name_21 = tmp_class_creation_4__prepared;
        tmp_res = PyObject_HasAttr(tmp_expression_name_21, const_str_plain___getitem__);
        tmp_operand_name_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_13;
        }
        tmp_condition_result_24 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_type_arg_8;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_left_name_6 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = const_str_plain___name__;
        tmp_getattr_default_4 = const_str_angle_metaclass;
        tmp_tuple_element_16 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_13;
        }
        tmp_right_name_6 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_6, 0, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_type_arg_8 = tmp_class_creation_4__prepared;
        tmp_expression_name_22 = BUILTIN_TYPE1(tmp_type_arg_8);
        assert(!(tmp_expression_name_22 == NULL));
        tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, const_str_plain___name__);
        Py_DECREF(tmp_expression_name_22);
        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_right_name_6);

            exception_lineno = 521;

            goto try_except_handler_13;
        }
        PyTuple_SET_ITEM(tmp_right_name_6, 1, tmp_tuple_element_16);
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_6, tmp_right_name_6);
        Py_DECREF(tmp_right_name_6);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 521;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_15:;
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = PyDict_New();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_54;
    }
    branch_end_14:;
    {
        PyObject *tmp_assign_source_55;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_youtube_dl$extractor$twitter_521 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_a7c8213a63902a73a20ecd4101918bed;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_521, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_15;
        }
        tmp_dictset_value = const_str_plain_TwitterAmplifyIE;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_521, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_15;
        }
        if (isFrameUnusable(cache_frame_ea089bfcef10064a393e947add0cae46_5)) {
            Py_XDECREF(cache_frame_ea089bfcef10064a393e947add0cae46_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_ea089bfcef10064a393e947add0cae46_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_ea089bfcef10064a393e947add0cae46_5 = MAKE_FUNCTION_FRAME(codeobj_ea089bfcef10064a393e947add0cae46, module_youtube_dl$extractor$twitter, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_ea089bfcef10064a393e947add0cae46_5->m_type_description == NULL);
        frame_ea089bfcef10064a393e947add0cae46_5 = cache_frame_ea089bfcef10064a393e947add0cae46_5;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_ea089bfcef10064a393e947add0cae46_5);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_ea089bfcef10064a393e947add0cae46_5) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = const_str_digest_33b18dedcf0bdf7a861569cc2b803579;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_521, const_str_plain_IE_NAME, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = const_str_digest_a53a8368c3aed979cfa894f9b201671c;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_521, const_str_plain__VALID_URL, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = DEEP_COPY(const_dict_473d105266f1149d92902e1dc83799b9);
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_521, const_str_plain__TEST, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_7__real_extract();



        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_521, const_str_plain__real_extract, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_ea089bfcef10064a393e947add0cae46_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_ea089bfcef10064a393e947add0cae46_5);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ea089bfcef10064a393e947add0cae46_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ea089bfcef10064a393e947add0cae46_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ea089bfcef10064a393e947add0cae46_5, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ea089bfcef10064a393e947add0cae46_5,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame.
        if (frame_ea089bfcef10064a393e947add0cae46_5 == cache_frame_ea089bfcef10064a393e947add0cae46_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(frame_ea089bfcef10064a393e947add0cae46_5);
        }
        cache_frame_ea089bfcef10064a393e947add0cae46_5 = NULL;

        assertFrameObject(frame_ea089bfcef10064a393e947add0cae46_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_15;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_compexpr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_compexpr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_25 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_4, tmp_compexpr_right_4);
            if (tmp_condition_result_25 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 521;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
        }
        branch_yes_16:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_521, const_str_plain___orig_bases__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_15;
        }
        branch_no_16:;
        {
            PyObject *tmp_assign_source_56;
            PyObject *tmp_called_name_9;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_kw_name_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_name_9 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_17 = const_str_plain_TwitterAmplifyIE;
            tmp_args_name_8 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_17);
            PyTuple_SET_ITEM(tmp_args_name_8, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_17 = tmp_class_creation_4__bases;
            Py_INCREF(tmp_tuple_element_17);
            PyTuple_SET_ITEM(tmp_args_name_8, 1, tmp_tuple_element_17);
            tmp_tuple_element_17 = locals_youtube_dl$extractor$twitter_521;
            Py_INCREF(tmp_tuple_element_17);
            PyTuple_SET_ITEM(tmp_args_name_8, 2, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;
            frame_354d4a14801b795d9517bc2323cd3bed->m_frame.f_lineno = 521;
            tmp_assign_source_56 = CALL_FUNCTION(tmp_called_name_9, tmp_args_name_8, tmp_kw_name_8);
            Py_DECREF(tmp_args_name_8);
            if (tmp_assign_source_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 521;

                goto try_except_handler_15;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_56;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_55 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_55);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_youtube_dl$extractor$twitter_521);
        locals_youtube_dl$extractor$twitter_521 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_youtube_dl$extractor$twitter_521);
        locals_youtube_dl$extractor$twitter_521 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;

        goto outline_result_4;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 521;
        goto try_except_handler_13;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_TwitterAmplifyIE, tmp_assign_source_55);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;

    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;

    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;

    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;

    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;

    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_TwitterBaseIE);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_TwitterBaseIE);
        }

        if (tmp_mvar_value_9 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 50678 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 577;

            goto try_except_handler_16;
        }

        tmp_tuple_element_18 = tmp_mvar_value_9;
        tmp_assign_source_57 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_18);
        PyTuple_SET_ITEM(tmp_assign_source_57, 0, tmp_tuple_element_18);
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_PeriscopeBaseIE);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_PeriscopeBaseIE);
        }

        if (tmp_mvar_value_10 == NULL) {
            Py_DECREF(tmp_assign_source_57);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 46647 ], 37, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 577;

            goto try_except_handler_16;
        }

        tmp_tuple_element_18 = tmp_mvar_value_10;
        Py_INCREF(tmp_tuple_element_18);
        PyTuple_SET_ITEM(tmp_assign_source_57, 1, tmp_tuple_element_18);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_58 = impl___internal__$$$function_4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = PyDict_New();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_metaclass_name_5;
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_key_name_13;
        PyObject *tmp_dict_name_13;
        PyObject *tmp_dict_name_14;
        PyObject *tmp_key_name_14;
        nuitka_bool tmp_condition_result_27;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_bases_name_5;
        tmp_key_name_13 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_name_13 = tmp_class_creation_5__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_13, tmp_key_name_13);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_16;
        }
        tmp_condition_result_26 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_name_14 = tmp_class_creation_5__class_decl_dict;
        tmp_key_name_14 = const_str_plain_metaclass;
        tmp_metaclass_name_5 = DICT_GET_ITEM(tmp_dict_name_14, tmp_key_name_14);
        if (tmp_metaclass_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_16;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_16;
        }
        tmp_condition_result_27 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_name_23 = tmp_class_creation_5__bases;
        tmp_subscript_name_5 = const_int_0;
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_23, tmp_subscript_name_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_16;
        }
        tmp_metaclass_name_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_16;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        tmp_metaclass_name_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_5);
        condexpr_end_11:;
        condexpr_end_10:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_name_5 = tmp_class_creation_5__bases;
        tmp_assign_source_60 = SELECT_METACLASS(tmp_metaclass_name_5, tmp_bases_name_5);
        Py_DECREF(tmp_metaclass_name_5);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_60;
    }
    {
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_key_name_15;
        PyObject *tmp_dict_name_15;
        tmp_key_name_15 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_name_15 = tmp_class_creation_5__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_15, tmp_key_name_15);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_16;
        }
        tmp_condition_result_28 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 577;

        goto try_except_handler_16;
    }
    branch_no_17:;
    {
        nuitka_bool tmp_condition_result_29;
        PyObject *tmp_expression_name_24;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_name_24 = tmp_class_creation_5__metaclass;
        tmp_res = PyObject_HasAttr(tmp_expression_name_24, const_str_plain___prepare__);
        tmp_condition_result_29 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_name_10;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_args_name_9;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_kw_name_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_name_25 = tmp_class_creation_5__metaclass;
        tmp_called_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, const_str_plain___prepare__);
        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_16;
        }
        tmp_tuple_element_19 = const_str_plain_TwitterBroadcastIE;
        tmp_args_name_9 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_19);
        PyTuple_SET_ITEM(tmp_args_name_9, 0, tmp_tuple_element_19);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_19 = tmp_class_creation_5__bases;
        Py_INCREF(tmp_tuple_element_19);
        PyTuple_SET_ITEM(tmp_args_name_9, 1, tmp_tuple_element_19);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;
        frame_354d4a14801b795d9517bc2323cd3bed->m_frame.f_lineno = 577;
        tmp_assign_source_61 = CALL_FUNCTION(tmp_called_name_10, tmp_args_name_9, tmp_kw_name_9);
        Py_DECREF(tmp_called_name_10);
        Py_DECREF(tmp_args_name_9);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_61;
    }
    {
        nuitka_bool tmp_condition_result_30;
        PyObject *tmp_operand_name_5;
        PyObject *tmp_expression_name_26;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_name_26 = tmp_class_creation_5__prepared;
        tmp_res = PyObject_HasAttr(tmp_expression_name_26, const_str_plain___getitem__);
        tmp_operand_name_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_16;
        }
        tmp_condition_result_30 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_type_arg_10;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_left_name_7 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_5 = const_str_plain___name__;
        tmp_getattr_default_5 = const_str_angle_metaclass;
        tmp_tuple_element_20 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_16;
        }
        tmp_right_name_7 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_7, 0, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_type_arg_10 = tmp_class_creation_5__prepared;
        tmp_expression_name_27 = BUILTIN_TYPE1(tmp_type_arg_10);
        assert(!(tmp_expression_name_27 == NULL));
        tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, const_str_plain___name__);
        Py_DECREF(tmp_expression_name_27);
        if (tmp_tuple_element_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_right_name_7);

            exception_lineno = 577;

            goto try_except_handler_16;
        }
        PyTuple_SET_ITEM(tmp_right_name_7, 1, tmp_tuple_element_20);
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_7, tmp_right_name_7);
        Py_DECREF(tmp_right_name_7);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 577;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_19:;
    goto branch_end_18;
    branch_no_18:;
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = PyDict_New();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_62;
    }
    branch_end_18:;
    {
        PyObject *tmp_assign_source_63;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_youtube_dl$extractor$twitter_577 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_a7c8213a63902a73a20ecd4101918bed;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_577, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_18;
        }
        tmp_dictset_value = const_str_plain_TwitterBroadcastIE;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_577, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_18;
        }
        if (isFrameUnusable(cache_frame_c63d8f61bb5501847bebb1a163633f0d_6)) {
            Py_XDECREF(cache_frame_c63d8f61bb5501847bebb1a163633f0d_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c63d8f61bb5501847bebb1a163633f0d_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c63d8f61bb5501847bebb1a163633f0d_6 = MAKE_FUNCTION_FRAME(codeobj_c63d8f61bb5501847bebb1a163633f0d, module_youtube_dl$extractor$twitter, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c63d8f61bb5501847bebb1a163633f0d_6->m_type_description == NULL);
        frame_c63d8f61bb5501847bebb1a163633f0d_6 = cache_frame_c63d8f61bb5501847bebb1a163633f0d_6;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_c63d8f61bb5501847bebb1a163633f0d_6);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c63d8f61bb5501847bebb1a163633f0d_6) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = const_str_digest_e1bbcc6d461b5e5e9ff60a38c068cb39;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_577, const_str_plain_IE_NAME, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        {
            PyObject *tmp_left_name_8;
            PyObject *tmp_expression_name_28;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_right_name_8;
            tmp_expression_name_28 = PyObject_GetItem(locals_youtube_dl$extractor$twitter_577, const_str_plain_TwitterBaseIE);

            if (tmp_expression_name_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_TwitterBaseIE);

                    if (unlikely(tmp_mvar_value_11 == NULL)) {
                        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_TwitterBaseIE);
                    }

                    if (tmp_mvar_value_11 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 50678 ], 35, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 579;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }

                    tmp_expression_name_28 = tmp_mvar_value_11;
                    Py_INCREF(tmp_expression_name_28);
                }
            }

            tmp_left_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, const_str_plain__BASE_REGEX);
            Py_DECREF(tmp_expression_name_28);
            if (tmp_left_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 579;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_right_name_8 = const_str_digest_440320717f7d6d7b419b61d52a1f4d4a;
            tmp_dictset_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_8, tmp_right_name_8);
            Py_DECREF(tmp_left_name_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 579;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_577, const_str_plain__VALID_URL, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 579;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        tmp_dictset_value = DEEP_COPY(const_dict_024652a1be9d621d629ebe6c437ea5a4);
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_577, const_str_plain__TEST, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = MAKE_FUNCTION_youtube_dl$extractor$twitter$$$function_8__real_extract();



        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_577, const_str_plain__real_extract, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c63d8f61bb5501847bebb1a163633f0d_6);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c63d8f61bb5501847bebb1a163633f0d_6);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c63d8f61bb5501847bebb1a163633f0d_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c63d8f61bb5501847bebb1a163633f0d_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c63d8f61bb5501847bebb1a163633f0d_6, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c63d8f61bb5501847bebb1a163633f0d_6,
            type_description_2,
            outline_4_var___class__
        );


        // Release cached frame.
        if (frame_c63d8f61bb5501847bebb1a163633f0d_6 == cache_frame_c63d8f61bb5501847bebb1a163633f0d_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(frame_c63d8f61bb5501847bebb1a163633f0d_6);
        }
        cache_frame_c63d8f61bb5501847bebb1a163633f0d_6 = NULL;

        assertFrameObject(frame_c63d8f61bb5501847bebb1a163633f0d_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;

        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_18;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_31;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_compexpr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_compexpr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_31 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_5, tmp_compexpr_right_5);
            if (tmp_condition_result_31 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 577;

                goto try_except_handler_18;
            }
            if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
                goto branch_yes_20;
            } else {
                goto branch_no_20;
            }
        }
        branch_yes_20:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_youtube_dl$extractor$twitter_577, const_str_plain___orig_bases__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_18;
        }
        branch_no_20:;
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_called_name_11;
            PyObject *tmp_args_name_10;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kw_name_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_name_11 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_21 = const_str_plain_TwitterBroadcastIE;
            tmp_args_name_10 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_21);
            PyTuple_SET_ITEM(tmp_args_name_10, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_21 = tmp_class_creation_5__bases;
            Py_INCREF(tmp_tuple_element_21);
            PyTuple_SET_ITEM(tmp_args_name_10, 1, tmp_tuple_element_21);
            tmp_tuple_element_21 = locals_youtube_dl$extractor$twitter_577;
            Py_INCREF(tmp_tuple_element_21);
            PyTuple_SET_ITEM(tmp_args_name_10, 2, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;
            frame_354d4a14801b795d9517bc2323cd3bed->m_frame.f_lineno = 577;
            tmp_assign_source_64 = CALL_FUNCTION(tmp_called_name_11, tmp_args_name_10, tmp_kw_name_10);
            Py_DECREF(tmp_args_name_10);
            if (tmp_assign_source_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 577;

                goto try_except_handler_18;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_64;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_63 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_63);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_youtube_dl$extractor$twitter_577);
        locals_youtube_dl$extractor$twitter_577 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_youtube_dl$extractor$twitter_577);
        locals_youtube_dl$extractor$twitter_577 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;

        goto outline_result_5;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 577;
        goto try_except_handler_16;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_youtube_dl$extractor$twitter, (Nuitka_StringObject *)const_str_plain_TwitterBroadcastIE, tmp_assign_source_63);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;

    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;

    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_354d4a14801b795d9517bc2323cd3bed);
#endif
    popFrameStack();

    assertFrameObject(frame_354d4a14801b795d9517bc2323cd3bed);

    goto frame_no_exception_6;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_354d4a14801b795d9517bc2323cd3bed);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_354d4a14801b795d9517bc2323cd3bed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_354d4a14801b795d9517bc2323cd3bed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_354d4a14801b795d9517bc2323cd3bed, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_6:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;

    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;

    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;

    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;

    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;


    return module_youtube_dl$extractor$twitter;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
