/* Generated code for Python module 'youtube_dl.postprocessor'
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

/* The "_module_youtube_dl$postprocessor" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_youtube_dl$postprocessor;
PyDictObject *moduledict_youtube_dl$postprocessor;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_FFmpegFixupM3u8PP;
extern PyObject *const_str_plain_FFmpegFixupM4aPP;
extern PyObject *const_str_plain_EmbedThumbnailPP;
extern PyObject *const_tuple_str_plain_key_tuple;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_FFmpegEmbedSubtitlePP;
extern PyObject *const_str_plain_ffmpeg;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_plain_FFmpegSubtitlesConvertorPP;
extern PyObject *const_str_plain___all__;
static PyObject *const_list_str_digest_bfa353f2c804304db804eb91b1c7f666_list;
extern PyObject *const_int_pos_1;
static PyObject *const_list_0d91aead08ecf4890ed7f701ad01abc2_list;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_get_postprocessor;
extern PyObject *const_str_plain_key;
extern PyObject *const_int_0;
static PyObject *const_str_plain_metadatafromtitle;
extern PyObject *const_str_plain_MetadataFromTitlePP;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_24c89cd70654471eedd420cc01fcded4_tuple;
static PyObject *const_str_digest_cf8cad5e008c200a8c5ec227f3466b04;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_FFmpegExtractAudioPP;
static PyObject *const_str_plain_PP;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_plain_execafterdownload;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_plain_ExecAfterDownloadPP_tuple;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_XAttrMetadataPP;
extern PyObject *const_str_plain_embedthumbnail;
extern PyObject *const_str_plain_FFmpegMetadataPP;
static PyObject *const_str_plain_xattrpp;
static PyObject *const_tuple_str_plain_MetadataFromTitlePP_tuple;
extern PyObject *const_str_plain_FFmpegVideoConvertorPP;
static PyObject *const_str_digest_bfa353f2c804304db804eb91b1c7f666;
extern PyObject *const_str_plain_FFmpegFixupStretchedPP;
static PyObject *const_tuple_str_plain_EmbedThumbnailPP_tuple;
extern PyObject *const_str_plain_FFmpegMergerPP;
static PyObject *const_str_digest_170835b81c57ac7d300e8411cf81f8b1;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_ExecAfterDownloadPP;
static PyObject *const_tuple_str_plain_XAttrMetadataPP_tuple;
extern PyObject *const_str_plain_FFmpegPostProcessor;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_list_str_digest_bfa353f2c804304db804eb91b1c7f666_list = PyList_New(1);
    const_str_digest_bfa353f2c804304db804eb91b1c7f666 = UNSTREAM_STRING_ASCII(&constant_bin[ 2318849 ], 99, 0);
    PyList_SET_ITEM(const_list_str_digest_bfa353f2c804304db804eb91b1c7f666_list, 0, const_str_digest_bfa353f2c804304db804eb91b1c7f666); Py_INCREF(const_str_digest_bfa353f2c804304db804eb91b1c7f666);
    const_list_0d91aead08ecf4890ed7f701ad01abc2_list = PyList_New(14);
    PyList_SET_ITEM(const_list_0d91aead08ecf4890ed7f701ad01abc2_list, 0, const_str_plain_EmbedThumbnailPP); Py_INCREF(const_str_plain_EmbedThumbnailPP);
    PyList_SET_ITEM(const_list_0d91aead08ecf4890ed7f701ad01abc2_list, 1, const_str_plain_ExecAfterDownloadPP); Py_INCREF(const_str_plain_ExecAfterDownloadPP);
    PyList_SET_ITEM(const_list_0d91aead08ecf4890ed7f701ad01abc2_list, 2, const_str_plain_FFmpegEmbedSubtitlePP); Py_INCREF(const_str_plain_FFmpegEmbedSubtitlePP);
    PyList_SET_ITEM(const_list_0d91aead08ecf4890ed7f701ad01abc2_list, 3, const_str_plain_FFmpegExtractAudioPP); Py_INCREF(const_str_plain_FFmpegExtractAudioPP);
    PyList_SET_ITEM(const_list_0d91aead08ecf4890ed7f701ad01abc2_list, 4, const_str_plain_FFmpegFixupM3u8PP); Py_INCREF(const_str_plain_FFmpegFixupM3u8PP);
    PyList_SET_ITEM(const_list_0d91aead08ecf4890ed7f701ad01abc2_list, 5, const_str_plain_FFmpegFixupM4aPP); Py_INCREF(const_str_plain_FFmpegFixupM4aPP);
    PyList_SET_ITEM(const_list_0d91aead08ecf4890ed7f701ad01abc2_list, 6, const_str_plain_FFmpegFixupStretchedPP); Py_INCREF(const_str_plain_FFmpegFixupStretchedPP);
    PyList_SET_ITEM(const_list_0d91aead08ecf4890ed7f701ad01abc2_list, 7, const_str_plain_FFmpegMergerPP); Py_INCREF(const_str_plain_FFmpegMergerPP);
    PyList_SET_ITEM(const_list_0d91aead08ecf4890ed7f701ad01abc2_list, 8, const_str_plain_FFmpegMetadataPP); Py_INCREF(const_str_plain_FFmpegMetadataPP);
    PyList_SET_ITEM(const_list_0d91aead08ecf4890ed7f701ad01abc2_list, 9, const_str_plain_FFmpegPostProcessor); Py_INCREF(const_str_plain_FFmpegPostProcessor);
    PyList_SET_ITEM(const_list_0d91aead08ecf4890ed7f701ad01abc2_list, 10, const_str_plain_FFmpegSubtitlesConvertorPP); Py_INCREF(const_str_plain_FFmpegSubtitlesConvertorPP);
    PyList_SET_ITEM(const_list_0d91aead08ecf4890ed7f701ad01abc2_list, 11, const_str_plain_FFmpegVideoConvertorPP); Py_INCREF(const_str_plain_FFmpegVideoConvertorPP);
    PyList_SET_ITEM(const_list_0d91aead08ecf4890ed7f701ad01abc2_list, 12, const_str_plain_MetadataFromTitlePP); Py_INCREF(const_str_plain_MetadataFromTitlePP);
    PyList_SET_ITEM(const_list_0d91aead08ecf4890ed7f701ad01abc2_list, 13, const_str_plain_XAttrMetadataPP); Py_INCREF(const_str_plain_XAttrMetadataPP);
    const_str_plain_metadatafromtitle = UNSTREAM_STRING_ASCII(&constant_bin[ 2318948 ], 17, 1);
    const_tuple_24c89cd70654471eedd420cc01fcded4_tuple = PyTuple_New(10);
    PyTuple_SET_ITEM(const_tuple_24c89cd70654471eedd420cc01fcded4_tuple, 0, const_str_plain_FFmpegPostProcessor); Py_INCREF(const_str_plain_FFmpegPostProcessor);
    PyTuple_SET_ITEM(const_tuple_24c89cd70654471eedd420cc01fcded4_tuple, 1, const_str_plain_FFmpegEmbedSubtitlePP); Py_INCREF(const_str_plain_FFmpegEmbedSubtitlePP);
    PyTuple_SET_ITEM(const_tuple_24c89cd70654471eedd420cc01fcded4_tuple, 2, const_str_plain_FFmpegExtractAudioPP); Py_INCREF(const_str_plain_FFmpegExtractAudioPP);
    PyTuple_SET_ITEM(const_tuple_24c89cd70654471eedd420cc01fcded4_tuple, 3, const_str_plain_FFmpegFixupStretchedPP); Py_INCREF(const_str_plain_FFmpegFixupStretchedPP);
    PyTuple_SET_ITEM(const_tuple_24c89cd70654471eedd420cc01fcded4_tuple, 4, const_str_plain_FFmpegFixupM3u8PP); Py_INCREF(const_str_plain_FFmpegFixupM3u8PP);
    PyTuple_SET_ITEM(const_tuple_24c89cd70654471eedd420cc01fcded4_tuple, 5, const_str_plain_FFmpegFixupM4aPP); Py_INCREF(const_str_plain_FFmpegFixupM4aPP);
    PyTuple_SET_ITEM(const_tuple_24c89cd70654471eedd420cc01fcded4_tuple, 6, const_str_plain_FFmpegMergerPP); Py_INCREF(const_str_plain_FFmpegMergerPP);
    PyTuple_SET_ITEM(const_tuple_24c89cd70654471eedd420cc01fcded4_tuple, 7, const_str_plain_FFmpegMetadataPP); Py_INCREF(const_str_plain_FFmpegMetadataPP);
    PyTuple_SET_ITEM(const_tuple_24c89cd70654471eedd420cc01fcded4_tuple, 8, const_str_plain_FFmpegVideoConvertorPP); Py_INCREF(const_str_plain_FFmpegVideoConvertorPP);
    PyTuple_SET_ITEM(const_tuple_24c89cd70654471eedd420cc01fcded4_tuple, 9, const_str_plain_FFmpegSubtitlesConvertorPP); Py_INCREF(const_str_plain_FFmpegSubtitlesConvertorPP);
    const_str_digest_cf8cad5e008c200a8c5ec227f3466b04 = UNSTREAM_STRING_ASCII(&constant_bin[ 2318965 ], 33, 0);
    const_str_plain_PP = UNSTREAM_STRING_ASCII(&constant_bin[ 2910 ], 2, 1);
    const_str_plain_execafterdownload = UNSTREAM_STRING_ASCII(&constant_bin[ 2318998 ], 17, 1);
    const_tuple_str_plain_ExecAfterDownloadPP_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_ExecAfterDownloadPP_tuple, 0, const_str_plain_ExecAfterDownloadPP); Py_INCREF(const_str_plain_ExecAfterDownloadPP);
    const_str_plain_xattrpp = UNSTREAM_STRING_ASCII(&constant_bin[ 2319015 ], 7, 1);
    const_tuple_str_plain_MetadataFromTitlePP_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_MetadataFromTitlePP_tuple, 0, const_str_plain_MetadataFromTitlePP); Py_INCREF(const_str_plain_MetadataFromTitlePP);
    const_tuple_str_plain_EmbedThumbnailPP_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_EmbedThumbnailPP_tuple, 0, const_str_plain_EmbedThumbnailPP); Py_INCREF(const_str_plain_EmbedThumbnailPP);
    const_str_digest_170835b81c57ac7d300e8411cf81f8b1 = UNSTREAM_STRING_ASCII(&constant_bin[ 2319022 ], 111, 0);
    const_tuple_str_plain_XAttrMetadataPP_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_XAttrMetadataPP_tuple, 0, const_str_plain_XAttrMetadataPP); Py_INCREF(const_str_plain_XAttrMetadataPP);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_youtube_dl$postprocessor(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c7bfc32d5d6c6bbdc0287b0236fe25cc;
static PyCodeObject *codeobj_8002d4b5c5ff0216eb7d6c6a134c6b51;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_170835b81c57ac7d300e8411cf81f8b1;
    codeobj_c7bfc32d5d6c6bbdc0287b0236fe25cc = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_digest_cf8cad5e008c200a8c5ec227f3466b04, const_tuple_empty, 0, 0, 0);
    codeobj_8002d4b5c5ff0216eb7d6c6a134c6b51 = MAKE_CODEOBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, const_str_plain_get_postprocessor, const_tuple_str_plain_key_tuple, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_youtube_dl$postprocessor$$$function_1_get_postprocessor();


// The module function definitions.
static PyObject *impl_youtube_dl$postprocessor$$$function_1_get_postprocessor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    struct Nuitka_FrameObject *frame_8002d4b5c5ff0216eb7d6c6a134c6b51;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8002d4b5c5ff0216eb7d6c6a134c6b51 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8002d4b5c5ff0216eb7d6c6a134c6b51)) {
        Py_XDECREF(cache_frame_8002d4b5c5ff0216eb7d6c6a134c6b51);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8002d4b5c5ff0216eb7d6c6a134c6b51 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8002d4b5c5ff0216eb7d6c6a134c6b51 = MAKE_FUNCTION_FRAME(codeobj_8002d4b5c5ff0216eb7d6c6a134c6b51, module_youtube_dl$postprocessor, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8002d4b5c5ff0216eb7d6c6a134c6b51->m_type_description == NULL);
    frame_8002d4b5c5ff0216eb7d6c6a134c6b51 = cache_frame_8002d4b5c5ff0216eb7d6c6a134c6b51;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8002d4b5c5ff0216eb7d6c6a134c6b51);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8002d4b5c5ff0216eb7d6c6a134c6b51) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_expression_name_1 = (PyObject *)moduledict_youtube_dl$postprocessor;
        CHECK_OBJECT(par_key);
        tmp_left_name_1 = par_key;
        tmp_right_name_1 = const_str_plain_PP;
        tmp_subscript_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_1, tmp_right_name_1);
        if (tmp_subscript_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8002d4b5c5ff0216eb7d6c6a134c6b51);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8002d4b5c5ff0216eb7d6c6a134c6b51);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8002d4b5c5ff0216eb7d6c6a134c6b51);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8002d4b5c5ff0216eb7d6c6a134c6b51, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8002d4b5c5ff0216eb7d6c6a134c6b51->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8002d4b5c5ff0216eb7d6c6a134c6b51, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8002d4b5c5ff0216eb7d6c6a134c6b51,
        type_description_1,
        par_key
    );


    // Release cached frame.
    if (frame_8002d4b5c5ff0216eb7d6c6a134c6b51 == cache_frame_8002d4b5c5ff0216eb7d6c6a134c6b51) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_8002d4b5c5ff0216eb7d6c6a134c6b51);
    }
    cache_frame_8002d4b5c5ff0216eb7d6c6a134c6b51 = NULL;

    assertFrameObject(frame_8002d4b5c5ff0216eb7d6c6a134c6b51);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_youtube_dl$postprocessor$$$function_1_get_postprocessor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_youtube_dl$postprocessor$$$function_1_get_postprocessor,
        const_str_plain_get_postprocessor,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8002d4b5c5ff0216eb7d6c6a134c6b51,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_youtube_dl$postprocessor,
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

function_impl_code functable_youtube_dl$postprocessor[] = {
    impl_youtube_dl$postprocessor$$$function_1_get_postprocessor,
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

    function_impl_code *current = functable_youtube_dl$postprocessor;
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

    if (offset > sizeof(functable_youtube_dl$postprocessor) || offset < 0) {
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
        functable_youtube_dl$postprocessor[offset],
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
        module_youtube_dl$postprocessor,
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
PyObject *modulecode_youtube_dl$postprocessor(PyObject *module) {
    module_youtube_dl$postprocessor = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_youtube_dl$postprocessor;
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
    PRINT_STRING("youtube_dl.postprocessor: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("youtube_dl.postprocessor: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("youtube_dl.postprocessor: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in inityoutube_dl$postprocessor\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_youtube_dl$postprocessor = MODULE_DICT(module_youtube_dl$postprocessor);

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
        moduledict_youtube_dl$postprocessor,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$postprocessor,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_youtube_dl$postprocessor,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$postprocessor,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_youtube_dl$postprocessor,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_youtube_dl$postprocessor);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_c7bfc32d5d6c6bbdc0287b0236fe25cc;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_170835b81c57ac7d300e8411cf81f8b1;
        UPDATE_STRING_DICT0(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY(const_list_str_digest_bfa353f2c804304db804eb91b1c7f666_list);
        UPDATE_STRING_DICT1(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
    }
    // Frame without reuse.
    frame_c7bfc32d5d6c6bbdc0287b0236fe25cc = MAKE_MODULE_FRAME(codeobj_c7bfc32d5d6c6bbdc0287b0236fe25cc, module_youtube_dl$postprocessor);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_c7bfc32d5d6c6bbdc0287b0236fe25cc);
    assert(Py_REFCNT(frame_c7bfc32d5d6c6bbdc0287b0236fe25cc) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_170835b81c57ac7d300e8411cf81f8b1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        frame_c7bfc32d5d6c6bbdc0287b0236fe25cc->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
           tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_youtube_dl$postprocessor,
                const_str_plain_unicode_literals,
                const_int_0
            );
        } else {
           tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_unicode_literals);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_embedthumbnail;
        tmp_globals_name_1 = (PyObject *)moduledict_youtube_dl$postprocessor;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_EmbedThumbnailPP_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_c7bfc32d5d6c6bbdc0287b0236fe25cc->m_frame.f_lineno = 3;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
           tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_youtube_dl$postprocessor,
                const_str_plain_EmbedThumbnailPP,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_EmbedThumbnailPP);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain_EmbedThumbnailPP, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_ffmpeg;
        tmp_globals_name_2 = (PyObject *)moduledict_youtube_dl$postprocessor;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_24c89cd70654471eedd420cc01fcded4_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_c7bfc32d5d6c6bbdc0287b0236fe25cc->m_frame.f_lineno = 4;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

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
                (PyObject *)moduledict_youtube_dl$postprocessor,
                const_str_plain_FFmpegPostProcessor,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_FFmpegPostProcessor);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain_FFmpegPostProcessor, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_youtube_dl$postprocessor,
                const_str_plain_FFmpegEmbedSubtitlePP,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_FFmpegEmbedSubtitlePP);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain_FFmpegEmbedSubtitlePP, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_youtube_dl$postprocessor,
                const_str_plain_FFmpegExtractAudioPP,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_FFmpegExtractAudioPP);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain_FFmpegExtractAudioPP, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_youtube_dl$postprocessor,
                const_str_plain_FFmpegFixupStretchedPP,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_FFmpegFixupStretchedPP);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain_FFmpegFixupStretchedPP, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_youtube_dl$postprocessor,
                const_str_plain_FFmpegFixupM3u8PP,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_FFmpegFixupM3u8PP);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain_FFmpegFixupM3u8PP, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_youtube_dl$postprocessor,
                const_str_plain_FFmpegFixupM4aPP,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_FFmpegFixupM4aPP);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain_FFmpegFixupM4aPP, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_youtube_dl$postprocessor,
                const_str_plain_FFmpegMergerPP,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_FFmpegMergerPP);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain_FFmpegMergerPP, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_youtube_dl$postprocessor,
                const_str_plain_FFmpegMetadataPP,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain_FFmpegMetadataPP);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain_FFmpegMetadataPP, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_11 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
           tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_youtube_dl$postprocessor,
                const_str_plain_FFmpegVideoConvertorPP,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_11, const_str_plain_FFmpegVideoConvertorPP);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain_FFmpegVideoConvertorPP, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_12 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_youtube_dl$postprocessor,
                const_str_plain_FFmpegSubtitlesConvertorPP,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_12, const_str_plain_FFmpegSubtitlesConvertorPP);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain_FFmpegSubtitlesConvertorPP, tmp_assign_source_17);
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
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_xattrpp;
        tmp_globals_name_3 = (PyObject *)moduledict_youtube_dl$postprocessor;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_XAttrMetadataPP_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_c7bfc32d5d6c6bbdc0287b0236fe25cc->m_frame.f_lineno = 16;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
           tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_youtube_dl$postprocessor,
                const_str_plain_XAttrMetadataPP,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_13, const_str_plain_XAttrMetadataPP);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain_XAttrMetadataPP, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_execafterdownload;
        tmp_globals_name_4 = (PyObject *)moduledict_youtube_dl$postprocessor;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_ExecAfterDownloadPP_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_c7bfc32d5d6c6bbdc0287b0236fe25cc->m_frame.f_lineno = 17;
        tmp_import_name_from_14 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
           tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_youtube_dl$postprocessor,
                const_str_plain_ExecAfterDownloadPP,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_14, const_str_plain_ExecAfterDownloadPP);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain_ExecAfterDownloadPP, tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_metadatafromtitle;
        tmp_globals_name_5 = (PyObject *)moduledict_youtube_dl$postprocessor;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_MetadataFromTitlePP_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_c7bfc32d5d6c6bbdc0287b0236fe25cc->m_frame.f_lineno = 18;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
           tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_youtube_dl$postprocessor,
                const_str_plain_MetadataFromTitlePP,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_15, const_str_plain_MetadataFromTitlePP);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain_MetadataFromTitlePP, tmp_assign_source_20);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c7bfc32d5d6c6bbdc0287b0236fe25cc);
#endif
    popFrameStack();

    assertFrameObject(frame_c7bfc32d5d6c6bbdc0287b0236fe25cc);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c7bfc32d5d6c6bbdc0287b0236fe25cc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c7bfc32d5d6c6bbdc0287b0236fe25cc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c7bfc32d5d6c6bbdc0287b0236fe25cc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c7bfc32d5d6c6bbdc0287b0236fe25cc, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_FUNCTION_youtube_dl$postprocessor$$$function_1_get_postprocessor();



        UPDATE_STRING_DICT1(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain_get_postprocessor, tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = LIST_COPY(const_list_0d91aead08ecf4890ed7f701ad01abc2_list);
        UPDATE_STRING_DICT1(moduledict_youtube_dl$postprocessor, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_22);
    }

    return module_youtube_dl$postprocessor;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
