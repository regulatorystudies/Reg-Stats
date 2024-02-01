/* Generated code for Python module 'pandas$core$config_init'
 * created by Nuitka version 1.9.7
 *
 * This code is in part copyright 2023 Kay Hayen.
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

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_pandas$core$config_init" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pandas$core$config_init;
PyDictObject *moduledict_pandas$core$config_init;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[342];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[342];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pandas.core.config_init"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 342; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pandas$core$config_init(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 342; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e59e5435589cb90a68a203ed1b587df3;
static PyCodeObject *codeobj_0e9bc8a7a93a50f93f98b4e05fc6e8b9;
static PyCodeObject *codeobj_ce831127f913d682effadbadf5b245c9;
static PyCodeObject *codeobj_1b1051ef2cdebbfb218e4d67ffb48252;
static PyCodeObject *codeobj_210db199cce4e1e63384bce1c6686a86;
static PyCodeObject *codeobj_5032b62ee64dd5e431dc845657df1f0b;
static PyCodeObject *codeobj_a0ffd478396deef6d666b798b69c2180;
static PyCodeObject *codeobj_1e668e1bbbd4a1ff0d7cf059ed0eed83;
static PyCodeObject *codeobj_53599d0606564032a08a354cafd00f2e;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[331]); CHECK_OBJECT(module_filename_obj);
    codeobj_e59e5435589cb90a68a203ed1b587df3 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts[332], mod_consts[332], NULL, NULL, 0, 0, 0);
    codeobj_0e9bc8a7a93a50f93f98b4e05fc6e8b9 = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[130], mod_consts[130], mod_consts[333], NULL, 0, 0, 0);
    codeobj_ce831127f913d682effadbadf5b245c9 = MAKE_CODE_OBJECT(module_filename_obj, 672, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[258], mod_consts[258], mod_consts[334], NULL, 1, 0, 0);
    codeobj_1b1051ef2cdebbfb218e4d67ffb48252 = MAKE_CODE_OBJECT(module_filename_obj, 646, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[252], mod_consts[252], mod_consts[335], NULL, 1, 0, 0);
    codeobj_210db199cce4e1e63384bce1c6686a86 = MAKE_CODE_OBJECT(module_filename_obj, 289, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[128], mod_consts[128], mod_consts[336], NULL, 1, 0, 0);
    codeobj_5032b62ee64dd5e431dc845657df1f0b = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[57], mod_consts[57], mod_consts[337], NULL, 1, 0, 0);
    codeobj_a0ffd478396deef6d666b798b69c2180 = MAKE_CODE_OBJECT(module_filename_obj, 422, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[182], mod_consts[182], mod_consts[338], NULL, 1, 0, 0);
    codeobj_1e668e1bbbd4a1ff0d7cf059ed0eed83 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[63], mod_consts[63], mod_consts[339], NULL, 1, 0, 0);
    codeobj_53599d0606564032a08a354cafd00f2e = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[60], mod_consts[60], mod_consts[340], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__1_use_bottleneck_cb(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__2_use_numexpr_cb(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__3_use_numba_cb(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__4_table_schema_cb(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__5_is_terminal(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__6_use_inf_as_na_cb(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__7_register_plotting_backend_cb(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__8_register_converter_cb(PyObject *annotations);


// The module function definitions.
static PyObject *impl_pandas$core$config_init$$$function__1_use_bottleneck_cb(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var_nanops = NULL;
    struct Nuitka_FrameObject *frame_5032b62ee64dd5e431dc845657df1f0b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5032b62ee64dd5e431dc845657df1f0b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5032b62ee64dd5e431dc845657df1f0b)) {
        Py_XDECREF(cache_frame_5032b62ee64dd5e431dc845657df1f0b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5032b62ee64dd5e431dc845657df1f0b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5032b62ee64dd5e431dc845657df1f0b = MAKE_FUNCTION_FRAME(tstate, codeobj_5032b62ee64dd5e431dc845657df1f0b, module_pandas$core$config_init, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5032b62ee64dd5e431dc845657df1f0b->m_type_description == NULL);
    frame_5032b62ee64dd5e431dc845657df1f0b = cache_frame_5032b62ee64dd5e431dc845657df1f0b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5032b62ee64dd5e431dc845657df1f0b);
    assert(Py_REFCNT(frame_5032b62ee64dd5e431dc845657df1f0b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[1];
        tmp_level_value_1 = mod_consts[2];
        frame_5032b62ee64dd5e431dc845657df1f0b->m_frame.f_lineno = 40;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[3],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_nanops == NULL);
        var_nanops = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_nanops);
        tmp_expression_value_1 = var_nanops;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_2 = par_key;
        frame_5032b62ee64dd5e431dc845657df1f0b->m_frame.f_lineno = 42;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[6], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5032b62ee64dd5e431dc845657df1f0b->m_frame.f_lineno = 42;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5032b62ee64dd5e431dc845657df1f0b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5032b62ee64dd5e431dc845657df1f0b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5032b62ee64dd5e431dc845657df1f0b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5032b62ee64dd5e431dc845657df1f0b,
        type_description_1,
        par_key,
        var_nanops
    );


    // Release cached frame if used for exception.
    if (frame_5032b62ee64dd5e431dc845657df1f0b == cache_frame_5032b62ee64dd5e431dc845657df1f0b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5032b62ee64dd5e431dc845657df1f0b);
        cache_frame_5032b62ee64dd5e431dc845657df1f0b = NULL;
    }

    assertFrameObject(frame_5032b62ee64dd5e431dc845657df1f0b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

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
    CHECK_OBJECT(var_nanops);
    Py_DECREF(var_nanops);
    var_nanops = NULL;
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

    Py_XDECREF(var_nanops);
    var_nanops = NULL;
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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$config_init$$$function__2_use_numexpr_cb(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var_expressions = NULL;
    struct Nuitka_FrameObject *frame_53599d0606564032a08a354cafd00f2e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_53599d0606564032a08a354cafd00f2e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_53599d0606564032a08a354cafd00f2e)) {
        Py_XDECREF(cache_frame_53599d0606564032a08a354cafd00f2e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_53599d0606564032a08a354cafd00f2e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_53599d0606564032a08a354cafd00f2e = MAKE_FUNCTION_FRAME(tstate, codeobj_53599d0606564032a08a354cafd00f2e, module_pandas$core$config_init, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_53599d0606564032a08a354cafd00f2e->m_type_description == NULL);
    frame_53599d0606564032a08a354cafd00f2e = cache_frame_53599d0606564032a08a354cafd00f2e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_53599d0606564032a08a354cafd00f2e);
    assert(Py_REFCNT(frame_53599d0606564032a08a354cafd00f2e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[7];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[8];
        tmp_level_value_1 = mod_consts[2];
        frame_53599d0606564032a08a354cafd00f2e->m_frame.f_lineno = 54;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[9],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[9]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_expressions == NULL);
        var_expressions = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_expressions);
        tmp_expression_value_1 = var_expressions;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[10]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_2 = par_key;
        frame_53599d0606564032a08a354cafd00f2e->m_frame.f_lineno = 56;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[6], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_53599d0606564032a08a354cafd00f2e->m_frame.f_lineno = 56;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_53599d0606564032a08a354cafd00f2e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_53599d0606564032a08a354cafd00f2e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_53599d0606564032a08a354cafd00f2e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_53599d0606564032a08a354cafd00f2e,
        type_description_1,
        par_key,
        var_expressions
    );


    // Release cached frame if used for exception.
    if (frame_53599d0606564032a08a354cafd00f2e == cache_frame_53599d0606564032a08a354cafd00f2e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_53599d0606564032a08a354cafd00f2e);
        cache_frame_53599d0606564032a08a354cafd00f2e = NULL;
    }

    assertFrameObject(frame_53599d0606564032a08a354cafd00f2e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

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
    CHECK_OBJECT(var_expressions);
    Py_DECREF(var_expressions);
    var_expressions = NULL;
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

    Py_XDECREF(var_expressions);
    var_expressions = NULL;
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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$config_init$$$function__3_use_numba_cb(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var_numba_ = NULL;
    struct Nuitka_FrameObject *frame_1e668e1bbbd4a1ff0d7cf059ed0eed83;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1e668e1bbbd4a1ff0d7cf059ed0eed83 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1e668e1bbbd4a1ff0d7cf059ed0eed83)) {
        Py_XDECREF(cache_frame_1e668e1bbbd4a1ff0d7cf059ed0eed83);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e668e1bbbd4a1ff0d7cf059ed0eed83 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e668e1bbbd4a1ff0d7cf059ed0eed83 = MAKE_FUNCTION_FRAME(tstate, codeobj_1e668e1bbbd4a1ff0d7cf059ed0eed83, module_pandas$core$config_init, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1e668e1bbbd4a1ff0d7cf059ed0eed83->m_type_description == NULL);
    frame_1e668e1bbbd4a1ff0d7cf059ed0eed83 = cache_frame_1e668e1bbbd4a1ff0d7cf059ed0eed83;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1e668e1bbbd4a1ff0d7cf059ed0eed83);
    assert(Py_REFCNT(frame_1e668e1bbbd4a1ff0d7cf059ed0eed83) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[11];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[12];
        tmp_level_value_1 = mod_consts[2];
        frame_1e668e1bbbd4a1ff0d7cf059ed0eed83->m_frame.f_lineno = 68;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[13],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[13]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_numba_ == NULL);
        var_numba_ = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_numba_);
        tmp_expression_value_1 = var_numba_;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 70;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_2 = par_key;
        frame_1e668e1bbbd4a1ff0d7cf059ed0eed83->m_frame.f_lineno = 70;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[6], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 70;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1e668e1bbbd4a1ff0d7cf059ed0eed83->m_frame.f_lineno = 70;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1e668e1bbbd4a1ff0d7cf059ed0eed83, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e668e1bbbd4a1ff0d7cf059ed0eed83->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e668e1bbbd4a1ff0d7cf059ed0eed83, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e668e1bbbd4a1ff0d7cf059ed0eed83,
        type_description_1,
        par_key,
        var_numba_
    );


    // Release cached frame if used for exception.
    if (frame_1e668e1bbbd4a1ff0d7cf059ed0eed83 == cache_frame_1e668e1bbbd4a1ff0d7cf059ed0eed83) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1e668e1bbbd4a1ff0d7cf059ed0eed83);
        cache_frame_1e668e1bbbd4a1ff0d7cf059ed0eed83 = NULL;
    }

    assertFrameObject(frame_1e668e1bbbd4a1ff0d7cf059ed0eed83);

    // Put the previous frame back on top.
    popFrameStack(tstate);

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
    CHECK_OBJECT(var_numba_);
    Py_DECREF(var_numba_);
    var_numba_ = NULL;
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

    Py_XDECREF(var_numba_);
    var_numba_ = NULL;
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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$config_init$$$function__4_table_schema_cb(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var_enable_data_resource_formatter = NULL;
    struct Nuitka_FrameObject *frame_210db199cce4e1e63384bce1c6686a86;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_210db199cce4e1e63384bce1c6686a86 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_210db199cce4e1e63384bce1c6686a86)) {
        Py_XDECREF(cache_frame_210db199cce4e1e63384bce1c6686a86);

#if _DEBUG_REFCOUNTS
        if (cache_frame_210db199cce4e1e63384bce1c6686a86 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_210db199cce4e1e63384bce1c6686a86 = MAKE_FUNCTION_FRAME(tstate, codeobj_210db199cce4e1e63384bce1c6686a86, module_pandas$core$config_init, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_210db199cce4e1e63384bce1c6686a86->m_type_description == NULL);
    frame_210db199cce4e1e63384bce1c6686a86 = cache_frame_210db199cce4e1e63384bce1c6686a86;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_210db199cce4e1e63384bce1c6686a86);
    assert(Py_REFCNT(frame_210db199cce4e1e63384bce1c6686a86) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[15];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[16];
        tmp_level_value_1 = mod_consts[2];
        frame_210db199cce4e1e63384bce1c6686a86->m_frame.f_lineno = 290;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[17],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[17]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_enable_data_resource_formatter == NULL);
        var_enable_data_resource_formatter = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_enable_data_resource_formatter);
        tmp_called_value_1 = var_enable_data_resource_formatter;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_2 = par_key;
        frame_210db199cce4e1e63384bce1c6686a86->m_frame.f_lineno = 292;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[6], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_210db199cce4e1e63384bce1c6686a86->m_frame.f_lineno = 292;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_210db199cce4e1e63384bce1c6686a86, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_210db199cce4e1e63384bce1c6686a86->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_210db199cce4e1e63384bce1c6686a86, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_210db199cce4e1e63384bce1c6686a86,
        type_description_1,
        par_key,
        var_enable_data_resource_formatter
    );


    // Release cached frame if used for exception.
    if (frame_210db199cce4e1e63384bce1c6686a86 == cache_frame_210db199cce4e1e63384bce1c6686a86) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_210db199cce4e1e63384bce1c6686a86);
        cache_frame_210db199cce4e1e63384bce1c6686a86 = NULL;
    }

    assertFrameObject(frame_210db199cce4e1e63384bce1c6686a86);

    // Put the previous frame back on top.
    popFrameStack(tstate);

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
    CHECK_OBJECT(var_enable_data_resource_formatter);
    Py_DECREF(var_enable_data_resource_formatter);
    var_enable_data_resource_formatter = NULL;
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

    Py_XDECREF(var_enable_data_resource_formatter);
    var_enable_data_resource_formatter = NULL;
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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$config_init$$$function__5_is_terminal(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_ip = NULL;
    struct Nuitka_FrameObject *frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9)) {
        Py_XDECREF(cache_frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9 = MAKE_FUNCTION_FRAME(tstate, codeobj_0e9bc8a7a93a50f93f98b4e05fc6e8b9, module_pandas$core$config_init, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9->m_type_description == NULL);
    frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9 = cache_frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9);
    assert(Py_REFCNT(frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9->m_frame.f_lineno = 303;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        assert(var_ip == NULL);
        var_ip = tmp_assign_source_1;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_NameError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 301;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9->m_frame) frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

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
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_ip);
        tmp_expression_value_1 = var_ip;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts[19]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9,
        type_description_1,
        var_ip
    );


    // Release cached frame if used for exception.
    if (frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9 == cache_frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9);
        cache_frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9 = NULL;
    }

    assertFrameObject(frame_0e9bc8a7a93a50f93f98b4e05fc6e8b9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_ip);
    var_ip = NULL;
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

    Py_XDECREF(var_ip);
    var_ip = NULL;
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
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$config_init$$$function__6_use_inf_as_na_cb(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var__use_inf_as_na = NULL;
    struct Nuitka_FrameObject *frame_a0ffd478396deef6d666b798b69c2180;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_a0ffd478396deef6d666b798b69c2180 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a0ffd478396deef6d666b798b69c2180)) {
        Py_XDECREF(cache_frame_a0ffd478396deef6d666b798b69c2180);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a0ffd478396deef6d666b798b69c2180 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a0ffd478396deef6d666b798b69c2180 = MAKE_FUNCTION_FRAME(tstate, codeobj_a0ffd478396deef6d666b798b69c2180, module_pandas$core$config_init, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a0ffd478396deef6d666b798b69c2180->m_type_description == NULL);
    frame_a0ffd478396deef6d666b798b69c2180 = cache_frame_a0ffd478396deef6d666b798b69c2180;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a0ffd478396deef6d666b798b69c2180);
    assert(Py_REFCNT(frame_a0ffd478396deef6d666b798b69c2180) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[21];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[22];
        tmp_level_value_1 = mod_consts[2];
        frame_a0ffd478396deef6d666b798b69c2180->m_frame.f_lineno = 423;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[23],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[23]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var__use_inf_as_na == NULL);
        var__use_inf_as_na = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var__use_inf_as_na);
        tmp_called_value_1 = var__use_inf_as_na;
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        frame_a0ffd478396deef6d666b798b69c2180->m_frame.f_lineno = 425;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a0ffd478396deef6d666b798b69c2180, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a0ffd478396deef6d666b798b69c2180->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a0ffd478396deef6d666b798b69c2180, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a0ffd478396deef6d666b798b69c2180,
        type_description_1,
        par_key,
        var__use_inf_as_na
    );


    // Release cached frame if used for exception.
    if (frame_a0ffd478396deef6d666b798b69c2180 == cache_frame_a0ffd478396deef6d666b798b69c2180) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a0ffd478396deef6d666b798b69c2180);
        cache_frame_a0ffd478396deef6d666b798b69c2180 = NULL;
    }

    assertFrameObject(frame_a0ffd478396deef6d666b798b69c2180);

    // Put the previous frame back on top.
    popFrameStack(tstate);

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
    CHECK_OBJECT(var__use_inf_as_na);
    Py_DECREF(var__use_inf_as_na);
    var__use_inf_as_na = NULL;
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

    Py_XDECREF(var__use_inf_as_na);
    var__use_inf_as_na = NULL;
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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$config_init$$$function__7_register_plotting_backend_cb(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var__get_plot_backend = NULL;
    struct Nuitka_FrameObject *frame_1b1051ef2cdebbfb218e4d67ffb48252;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1b1051ef2cdebbfb218e4d67ffb48252 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1b1051ef2cdebbfb218e4d67ffb48252)) {
        Py_XDECREF(cache_frame_1b1051ef2cdebbfb218e4d67ffb48252);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1b1051ef2cdebbfb218e4d67ffb48252 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1b1051ef2cdebbfb218e4d67ffb48252 = MAKE_FUNCTION_FRAME(tstate, codeobj_1b1051ef2cdebbfb218e4d67ffb48252, module_pandas$core$config_init, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1b1051ef2cdebbfb218e4d67ffb48252->m_type_description == NULL);
    frame_1b1051ef2cdebbfb218e4d67ffb48252 = cache_frame_1b1051ef2cdebbfb218e4d67ffb48252;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1b1051ef2cdebbfb218e4d67ffb48252);
    assert(Py_REFCNT(frame_1b1051ef2cdebbfb218e4d67ffb48252) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_key);
        tmp_cmp_expr_left_1 = par_key;
        tmp_cmp_expr_right_1 = mod_consts[24];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 647;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[25];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[26];
        tmp_level_value_1 = mod_consts[2];
        frame_1b1051ef2cdebbfb218e4d67ffb48252->m_frame.f_lineno = 650;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 650;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[27],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[27]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 650;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var__get_plot_backend == NULL);
        var__get_plot_backend = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var__get_plot_backend);
        tmp_called_value_1 = var__get_plot_backend;
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        frame_1b1051ef2cdebbfb218e4d67ffb48252->m_frame.f_lineno = 652;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1b1051ef2cdebbfb218e4d67ffb48252, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1b1051ef2cdebbfb218e4d67ffb48252->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1b1051ef2cdebbfb218e4d67ffb48252, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1b1051ef2cdebbfb218e4d67ffb48252,
        type_description_1,
        par_key,
        var__get_plot_backend
    );


    // Release cached frame if used for exception.
    if (frame_1b1051ef2cdebbfb218e4d67ffb48252 == cache_frame_1b1051ef2cdebbfb218e4d67ffb48252) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1b1051ef2cdebbfb218e4d67ffb48252);
        cache_frame_1b1051ef2cdebbfb218e4d67ffb48252 = NULL;
    }

    assertFrameObject(frame_1b1051ef2cdebbfb218e4d67ffb48252);

    // Put the previous frame back on top.
    popFrameStack(tstate);

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
    Py_XDECREF(var__get_plot_backend);
    var__get_plot_backend = NULL;
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

    Py_XDECREF(var__get_plot_backend);
    var__get_plot_backend = NULL;
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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$config_init$$$function__8_register_converter_cb(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var_deregister_matplotlib_converters = NULL;
    PyObject *var_register_matplotlib_converters = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_ce831127f913d682effadbadf5b245c9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ce831127f913d682effadbadf5b245c9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ce831127f913d682effadbadf5b245c9)) {
        Py_XDECREF(cache_frame_ce831127f913d682effadbadf5b245c9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ce831127f913d682effadbadf5b245c9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ce831127f913d682effadbadf5b245c9 = MAKE_FUNCTION_FRAME(tstate, codeobj_ce831127f913d682effadbadf5b245c9, module_pandas$core$config_init, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ce831127f913d682effadbadf5b245c9->m_type_description == NULL);
    frame_ce831127f913d682effadbadf5b245c9 = cache_frame_ce831127f913d682effadbadf5b245c9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ce831127f913d682effadbadf5b245c9);
    assert(Py_REFCNT(frame_ce831127f913d682effadbadf5b245c9) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[28];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[29];
        tmp_level_value_1 = mod_consts[2];
        frame_ce831127f913d682effadbadf5b245c9->m_frame.f_lineno = 673;
        tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 673;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[30],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[30]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 673;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(var_deregister_matplotlib_converters == NULL);
        var_deregister_matplotlib_converters = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[31],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[31]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 673;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(var_register_matplotlib_converters == NULL);
        var_register_matplotlib_converters = tmp_assign_source_3;
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
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        frame_ce831127f913d682effadbadf5b245c9->m_frame.f_lineno = 678;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[6], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 678;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_register_matplotlib_converters);
        tmp_called_value_1 = var_register_matplotlib_converters;
        frame_ce831127f913d682effadbadf5b245c9->m_frame.f_lineno = 679;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 679;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(var_deregister_matplotlib_converters);
        tmp_called_value_2 = var_deregister_matplotlib_converters;
        frame_ce831127f913d682effadbadf5b245c9->m_frame.f_lineno = 681;
        tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 681;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ce831127f913d682effadbadf5b245c9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ce831127f913d682effadbadf5b245c9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ce831127f913d682effadbadf5b245c9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ce831127f913d682effadbadf5b245c9,
        type_description_1,
        par_key,
        var_deregister_matplotlib_converters,
        var_register_matplotlib_converters
    );


    // Release cached frame if used for exception.
    if (frame_ce831127f913d682effadbadf5b245c9 == cache_frame_ce831127f913d682effadbadf5b245c9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ce831127f913d682effadbadf5b245c9);
        cache_frame_ce831127f913d682effadbadf5b245c9 = NULL;
    }

    assertFrameObject(frame_ce831127f913d682effadbadf5b245c9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

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
    Py_XDECREF(var_deregister_matplotlib_converters);
    var_deregister_matplotlib_converters = NULL;
    CHECK_OBJECT(var_register_matplotlib_converters);
    Py_DECREF(var_register_matplotlib_converters);
    var_register_matplotlib_converters = NULL;
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

    Py_XDECREF(var_deregister_matplotlib_converters);
    var_deregister_matplotlib_converters = NULL;
    Py_XDECREF(var_register_matplotlib_converters);
    var_register_matplotlib_converters = NULL;
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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__1_use_bottleneck_cb(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__1_use_bottleneck_cb,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5032b62ee64dd5e431dc845657df1f0b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$config_init,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__2_use_numexpr_cb(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__2_use_numexpr_cb,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_53599d0606564032a08a354cafd00f2e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$config_init,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__3_use_numba_cb(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__3_use_numba_cb,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1e668e1bbbd4a1ff0d7cf059ed0eed83,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$config_init,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__4_table_schema_cb(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__4_table_schema_cb,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_210db199cce4e1e63384bce1c6686a86,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$config_init,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__5_is_terminal(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__5_is_terminal,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0e9bc8a7a93a50f93f98b4e05fc6e8b9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$config_init,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__6_use_inf_as_na_cb(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__6_use_inf_as_na_cb,
        mod_consts[182],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a0ffd478396deef6d666b798b69c2180,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$config_init,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__7_register_plotting_backend_cb(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__7_register_plotting_backend_cb,
        mod_consts[252],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1b1051ef2cdebbfb218e4d67ffb48252,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$config_init,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__8_register_converter_cb(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__8_register_converter_cb,
        mod_consts[258],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ce831127f913d682effadbadf5b245c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$config_init,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_pandas$core$config_init[] = {
    impl_pandas$core$config_init$$$function__1_use_bottleneck_cb,
    impl_pandas$core$config_init$$$function__2_use_numexpr_cb,
    impl_pandas$core$config_init$$$function__3_use_numba_cb,
    impl_pandas$core$config_init$$$function__4_table_schema_cb,
    impl_pandas$core$config_init$$$function__5_is_terminal,
    impl_pandas$core$config_init$$$function__6_use_inf_as_na_cb,
    impl_pandas$core$config_init$$$function__7_register_plotting_backend_cb,
    impl_pandas$core$config_init$$$function__8_register_converter_cb,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_pandas$core$config_init);

    if (unlikely(offset == -1)) {
        PyThreadState *tstate = PyThreadState_GET();
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);


    PyObject *result = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM0(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM0(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM0(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM0(result, 6, Py_None);
#endif

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;

    if (!PyArg_ParseTuple(args, "OOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_pandas$core$config_init,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_pandas$core$config_init,
        sizeof(function_table_pandas$core$config_init) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_pandas$core$config_init(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pandas$core$config_init");

    // Store the module for future use.
    module_pandas$core$config_init = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("pandas$core$config_init: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pandas$core$config_init: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pandas.core.config_init" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpandas$core$config_init\n");

    moduledict_pandas$core$config_init = MODULE_DICT(module_pandas$core$config_init);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pandas$core$config_init,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pandas$core$config_init,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[341]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pandas$core$config_init,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$config_init,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$config_init,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pandas$core$config_init);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pandas$core$config_init);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_with_10__enter = NULL;
    PyObject *tmp_with_10__exit = NULL;
    nuitka_bool tmp_with_10__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_10__source = NULL;
    PyObject *tmp_with_11__enter = NULL;
    PyObject *tmp_with_11__exit = NULL;
    nuitka_bool tmp_with_11__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_11__source = NULL;
    PyObject *tmp_with_12__enter = NULL;
    PyObject *tmp_with_12__exit = NULL;
    nuitka_bool tmp_with_12__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_12__source = NULL;
    PyObject *tmp_with_13__enter = NULL;
    PyObject *tmp_with_13__exit = NULL;
    nuitka_bool tmp_with_13__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_13__source = NULL;
    PyObject *tmp_with_14__enter = NULL;
    PyObject *tmp_with_14__exit = NULL;
    nuitka_bool tmp_with_14__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_14__source = NULL;
    PyObject *tmp_with_15__enter = NULL;
    PyObject *tmp_with_15__exit = NULL;
    nuitka_bool tmp_with_15__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_15__source = NULL;
    PyObject *tmp_with_16__enter = NULL;
    PyObject *tmp_with_16__exit = NULL;
    nuitka_bool tmp_with_16__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_16__source = NULL;
    PyObject *tmp_with_17__enter = NULL;
    PyObject *tmp_with_17__exit = NULL;
    nuitka_bool tmp_with_17__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_17__source = NULL;
    PyObject *tmp_with_18__enter = NULL;
    PyObject *tmp_with_18__exit = NULL;
    nuitka_bool tmp_with_18__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_18__source = NULL;
    PyObject *tmp_with_19__enter = NULL;
    PyObject *tmp_with_19__exit = NULL;
    nuitka_bool tmp_with_19__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_19__source = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_20__enter = NULL;
    PyObject *tmp_with_20__exit = NULL;
    nuitka_bool tmp_with_20__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_20__source = NULL;
    PyObject *tmp_with_21__enter = NULL;
    PyObject *tmp_with_21__exit = NULL;
    nuitka_bool tmp_with_21__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_21__source = NULL;
    PyObject *tmp_with_22__enter = NULL;
    PyObject *tmp_with_22__exit = NULL;
    nuitka_bool tmp_with_22__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_22__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    PyObject *tmp_with_3__enter = NULL;
    PyObject *tmp_with_3__exit = NULL;
    nuitka_bool tmp_with_3__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_3__source = NULL;
    PyObject *tmp_with_4__enter = NULL;
    PyObject *tmp_with_4__exit = NULL;
    nuitka_bool tmp_with_4__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_4__source = NULL;
    PyObject *tmp_with_5__enter = NULL;
    PyObject *tmp_with_5__exit = NULL;
    nuitka_bool tmp_with_5__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_5__source = NULL;
    PyObject *tmp_with_6__enter = NULL;
    PyObject *tmp_with_6__exit = NULL;
    nuitka_bool tmp_with_6__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_6__source = NULL;
    PyObject *tmp_with_7__enter = NULL;
    PyObject *tmp_with_7__exit = NULL;
    nuitka_bool tmp_with_7__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_7__source = NULL;
    PyObject *tmp_with_8__enter = NULL;
    PyObject *tmp_with_8__exit = NULL;
    nuitka_bool tmp_with_8__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_8__source = NULL;
    PyObject *tmp_with_9__enter = NULL;
    PyObject *tmp_with_9__exit = NULL;
    nuitka_bool tmp_with_9__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_9__source = NULL;
    struct Nuitka_FrameObject *frame_e59e5435589cb90a68a203ed1b587df3;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
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
    struct Nuitka_ExceptionStackItem exception_preserved_2;
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
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    struct Nuitka_ExceptionStackItem exception_preserved_4;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
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
    struct Nuitka_ExceptionStackItem exception_preserved_5;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    struct Nuitka_ExceptionStackItem exception_preserved_6;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    struct Nuitka_ExceptionStackItem exception_preserved_7;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    struct Nuitka_ExceptionStackItem exception_preserved_8;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    struct Nuitka_ExceptionStackItem exception_preserved_9;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    struct Nuitka_ExceptionStackItem exception_preserved_10;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    struct Nuitka_ExceptionStackItem exception_preserved_11;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    struct Nuitka_ExceptionStackItem exception_preserved_12;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    struct Nuitka_ExceptionStackItem exception_preserved_13;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    struct Nuitka_ExceptionStackItem exception_preserved_14;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    struct Nuitka_ExceptionStackItem exception_preserved_15;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    PyObject *exception_keeper_type_61;
    PyObject *exception_keeper_value_61;
    PyTracebackObject *exception_keeper_tb_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    PyObject *exception_keeper_type_62;
    PyObject *exception_keeper_value_62;
    PyTracebackObject *exception_keeper_tb_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
    struct Nuitka_ExceptionStackItem exception_preserved_16;
    PyObject *exception_keeper_type_63;
    PyObject *exception_keeper_value_63;
    PyTracebackObject *exception_keeper_tb_63;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
    PyObject *exception_keeper_type_64;
    PyObject *exception_keeper_value_64;
    PyTracebackObject *exception_keeper_tb_64;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
    PyObject *exception_keeper_type_65;
    PyObject *exception_keeper_value_65;
    PyTracebackObject *exception_keeper_tb_65;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
    PyObject *exception_keeper_type_66;
    PyObject *exception_keeper_value_66;
    PyTracebackObject *exception_keeper_tb_66;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
    struct Nuitka_ExceptionStackItem exception_preserved_17;
    PyObject *exception_keeper_type_67;
    PyObject *exception_keeper_value_67;
    PyTracebackObject *exception_keeper_tb_67;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
    PyObject *exception_keeper_type_68;
    PyObject *exception_keeper_value_68;
    PyTracebackObject *exception_keeper_tb_68;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;
    PyObject *exception_keeper_type_69;
    PyObject *exception_keeper_value_69;
    PyTracebackObject *exception_keeper_tb_69;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_69;
    PyObject *exception_keeper_type_70;
    PyObject *exception_keeper_value_70;
    PyTracebackObject *exception_keeper_tb_70;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_70;
    struct Nuitka_ExceptionStackItem exception_preserved_18;
    PyObject *exception_keeper_type_71;
    PyObject *exception_keeper_value_71;
    PyTracebackObject *exception_keeper_tb_71;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_71;
    PyObject *exception_keeper_type_72;
    PyObject *exception_keeper_value_72;
    PyTracebackObject *exception_keeper_tb_72;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_72;
    PyObject *exception_keeper_type_73;
    PyObject *exception_keeper_value_73;
    PyTracebackObject *exception_keeper_tb_73;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_73;
    PyObject *exception_keeper_type_74;
    PyObject *exception_keeper_value_74;
    PyTracebackObject *exception_keeper_tb_74;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_74;
    struct Nuitka_ExceptionStackItem exception_preserved_19;
    PyObject *exception_keeper_type_75;
    PyObject *exception_keeper_value_75;
    PyTracebackObject *exception_keeper_tb_75;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_75;
    PyObject *exception_keeper_type_76;
    PyObject *exception_keeper_value_76;
    PyTracebackObject *exception_keeper_tb_76;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_76;
    PyObject *exception_keeper_type_77;
    PyObject *exception_keeper_value_77;
    PyTracebackObject *exception_keeper_tb_77;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_77;
    PyObject *exception_keeper_type_78;
    PyObject *exception_keeper_value_78;
    PyTracebackObject *exception_keeper_tb_78;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_78;
    struct Nuitka_ExceptionStackItem exception_preserved_20;
    PyObject *exception_keeper_type_79;
    PyObject *exception_keeper_value_79;
    PyTracebackObject *exception_keeper_tb_79;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_79;
    PyObject *exception_keeper_type_80;
    PyObject *exception_keeper_value_80;
    PyTracebackObject *exception_keeper_tb_80;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_80;
    PyObject *exception_keeper_type_81;
    PyObject *exception_keeper_value_81;
    PyTracebackObject *exception_keeper_tb_81;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_81;
    PyObject *tmp_inplace_orig;
    PyObject *exception_keeper_type_82;
    PyObject *exception_keeper_value_82;
    PyTracebackObject *exception_keeper_tb_82;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_82;
    struct Nuitka_ExceptionStackItem exception_preserved_21;
    PyObject *exception_keeper_type_83;
    PyObject *exception_keeper_value_83;
    PyTracebackObject *exception_keeper_tb_83;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_83;
    PyObject *exception_keeper_type_84;
    PyObject *exception_keeper_value_84;
    PyTracebackObject *exception_keeper_tb_84;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_84;
    PyObject *exception_keeper_type_85;
    PyObject *exception_keeper_value_85;
    PyTracebackObject *exception_keeper_tb_85;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_85;
    PyObject *exception_keeper_type_86;
    PyObject *exception_keeper_value_86;
    PyTracebackObject *exception_keeper_tb_86;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_86;
    struct Nuitka_ExceptionStackItem exception_preserved_22;
    PyObject *exception_keeper_type_87;
    PyObject *exception_keeper_value_87;
    PyTracebackObject *exception_keeper_tb_87;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_87;
    PyObject *exception_keeper_type_88;
    PyObject *exception_keeper_value_88;
    PyTracebackObject *exception_keeper_tb_88;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_88;
    PyObject *exception_keeper_type_89;
    PyObject *exception_keeper_value_89;
    PyTracebackObject *exception_keeper_tb_89;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_89;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_2);
    }
    frame_e59e5435589cb90a68a203ed1b587df3 = MAKE_MODULE_FRAME(codeobj_e59e5435589cb90a68a203ed1b587df3, module_pandas$core$config_init);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e59e5435589cb90a68a203ed1b587df3);
    assert(Py_REFCNT(frame_e59e5435589cb90a68a203ed1b587df3) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[36], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[37], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[39]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[41],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[41]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[42];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[2];
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 17;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_import_name_from_2 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[43],
                mod_consts[2]
            );
        } else {
            tmp_import_name_from_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[43]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[44],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[44]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[42];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[45];
        tmp_level_value_2 = mod_consts[2];
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 18;
        tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

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
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[46],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[46]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[47],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[47]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[48],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[48]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[49],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[49]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[50],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[50]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[51],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[51]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[52],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[52]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_11 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[53],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[53]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_16);
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
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[54];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(mod_consts[56]);


        tmp_assign_source_18 = MAKE_FUNCTION_pandas$core$config_init$$$function__1_use_bottleneck_cb(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_annotations_2;
        tmp_annotations_2 = DICT_COPY(mod_consts[56]);


        tmp_assign_source_20 = MAKE_FUNCTION_pandas$core$config_init$$$function__2_use_numexpr_cb(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[61];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_annotations_3;
        tmp_annotations_3 = DICT_COPY(mod_consts[56]);


        tmp_assign_source_22 = MAKE_FUNCTION_pandas$core$config_init$$$function__3_use_numba_cb(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_22);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_2;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 73;
        tmp_assign_source_23 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[65], 0)
        );

        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_1 = tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, mod_consts[66]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_2;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 73;
        tmp_assign_source_24 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_assign_source_25 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, mod_consts[67]);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_25;
    }
    {
        nuitka_bool tmp_assign_source_26;
        tmp_assign_source_26 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_26;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_4;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[68]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_4;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[69];
        tmp_kw_call_arg_value_1_1 = Py_True;
        tmp_kw_call_arg_value_2_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_kw_call_arg_value_2_1 == NULL)) {
            tmp_kw_call_arg_value_2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 77;

            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_0_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
            tmp_kw_call_dict_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 78;

            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_1_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
            tmp_kw_call_dict_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 79;

            goto try_except_handler_4;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 74;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[70]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_4;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[68]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_4;
        }
        tmp_kw_call_arg_value_0_2 = mod_consts[71];
        tmp_kw_call_arg_value_1_2 = Py_True;
        tmp_kw_call_arg_value_2_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_kw_call_arg_value_2_2 == NULL)) {
            tmp_kw_call_arg_value_2_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_kw_call_arg_value_2_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 82;

            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_0_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_kw_call_dict_value_0_2 == NULL)) {
            tmp_kw_call_dict_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 82;

            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_1_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_kw_call_dict_value_1_2 == NULL)) {
            tmp_kw_call_dict_value_1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
        }

        if (tmp_kw_call_dict_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 82;

            goto try_except_handler_4;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 81;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[70]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_arg_value_2_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_3;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_4;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[68]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_4;
        }
        tmp_kw_call_arg_value_0_3 = mod_consts[72];
        tmp_kw_call_arg_value_1_3 = Py_False;
        tmp_kw_call_arg_value_2_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_kw_call_arg_value_2_3 == NULL)) {
            tmp_kw_call_arg_value_2_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_kw_call_arg_value_2_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 85;

            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_0_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_kw_call_dict_value_0_3 == NULL)) {
            tmp_kw_call_dict_value_0_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 85;

            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_1_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_kw_call_dict_value_1_3 == NULL)) {
            tmp_kw_call_dict_value_1_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
        }

        if (tmp_kw_call_dict_value_1_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 85;

            goto try_except_handler_4;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 84;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3, tmp_kw_call_arg_value_2_3};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts[70]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto try_end_2;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_2);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_assign_source_27;
        tmp_assign_source_27 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_27;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        tmp_args_element_value_1 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_2 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_5;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 73;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_5;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 73;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_5;
    branch_end_1:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 73;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_6, mod_consts[73]);

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_4);
            Py_XDECREF(exception_keeper_value_4);
            Py_XDECREF(exception_keeper_tb_4);

            exception_lineno = 73;

            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 73;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_7, mod_consts[73]);

        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[76];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[80];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[86];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[90];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[92];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[96];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[98];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[100];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[104];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[108];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[110];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[112];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[114];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[116];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[118];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[122];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[124];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[126];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_annotations_4;
        tmp_annotations_4 = DICT_COPY(mod_consts[56]);


        tmp_assign_source_55 = MAKE_FUNCTION_pandas$core$config_init$$$function__4_table_schema_cb(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_annotations_5;
        tmp_annotations_5 = DICT_COPY(mod_consts[129]);


        tmp_assign_source_56 = MAKE_FUNCTION_pandas$core$config_init$$$function__5_is_terminal(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_56);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto try_except_handler_6;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 313;
        tmp_assign_source_57 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[131], 0)
        );

        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto try_except_handler_6;
        }
        assert(tmp_with_2__source == NULL);
        tmp_with_2__source = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_6 = tmp_with_2__source;
        tmp_called_value_8 = LOOKUP_SPECIAL(tstate, tmp_expression_value_6, mod_consts[66]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto try_except_handler_6;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 313;
        tmp_assign_source_58 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto try_except_handler_6;
        }
        assert(tmp_with_2__enter == NULL);
        tmp_with_2__enter = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_7 = tmp_with_2__source;
        tmp_assign_source_59 = LOOKUP_SPECIAL(tstate, tmp_expression_value_7, mod_consts[67]);
        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto try_except_handler_6;
        }
        assert(tmp_with_2__exit == NULL);
        tmp_with_2__exit = tmp_assign_source_59;
    }
    {
        nuitka_bool tmp_assign_source_60;
        tmp_assign_source_60 = NUITKA_BOOL_TRUE;
        tmp_with_2__indicator = tmp_assign_source_60;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_6;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_arg_value_1_4;
        PyObject *tmp_kw_call_arg_value_2_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto try_except_handler_8;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[68]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_4 = mod_consts[132];
        tmp_kw_call_arg_value_1_4 = mod_consts[133];
        tmp_kw_call_arg_value_2_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_kw_call_arg_value_2_4 == NULL)) {
            tmp_kw_call_arg_value_2_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
        }

        if (tmp_kw_call_arg_value_2_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 314;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_kw_call_dict_value_0_4 == NULL)) {
            tmp_kw_call_dict_value_0_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 314;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 314;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_4, tmp_kw_call_arg_value_2_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_9, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_7;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_arg_value_1_5;
        PyObject *tmp_kw_call_arg_value_2_5;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_list_element_1;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto try_except_handler_8;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[68]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_5 = mod_consts[135];
        tmp_kw_call_arg_value_1_5 = Py_None;
        tmp_kw_call_arg_value_2_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_kw_call_arg_value_2_5 == NULL)) {
            tmp_kw_call_arg_value_2_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_kw_call_arg_value_2_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 318;

            goto try_except_handler_8;
        }
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 319;

            goto try_except_handler_8;
        }
        tmp_list_element_1 = Py_None;
        tmp_args_element_value_4 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_args_element_value_4, 0, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_args_element_value_4, 1, tmp_list_element_1);
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_4);
        goto try_except_handler_8;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 319;
        tmp_kw_call_dict_value_0_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_kw_call_dict_value_0_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 319;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 315;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_5, tmp_kw_call_arg_value_2_5};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_10, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_kw_call_dict_value_0_5);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_8;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_kw_call_arg_value_1_6;
        PyObject *tmp_kw_call_arg_value_2_6;
        PyObject *tmp_kw_call_dict_value_0_6;
        PyObject *tmp_called_value_13;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_8;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[68]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_6 = mod_consts[136];
        tmp_kw_call_arg_value_1_6 = mod_consts[137];
        tmp_kw_call_arg_value_2_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_kw_call_arg_value_2_6 == NULL)) {
            tmp_kw_call_arg_value_2_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_kw_call_arg_value_2_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 324;

            goto try_except_handler_8;
        }
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 325;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 325;
        tmp_kw_call_dict_value_0_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_13, mod_consts[138]);

        if (tmp_kw_call_dict_value_0_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 325;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 321;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_6, tmp_kw_call_arg_value_1_6, tmp_kw_call_arg_value_2_6};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_6};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_12, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_kw_call_dict_value_0_6);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_9;
        PyObject *tmp_kw_call_arg_value_0_7;
        PyObject *tmp_kw_call_arg_value_1_7;
        PyObject *tmp_kw_call_arg_value_2_7;
        PyObject *tmp_kw_call_dict_value_0_7;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto try_except_handler_8;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[68]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_7 = mod_consts[139];
        tmp_kw_call_arg_value_1_7 = mod_consts[140];
        tmp_kw_call_arg_value_2_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_kw_call_arg_value_2_7 == NULL)) {
            tmp_kw_call_arg_value_2_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[79]);
        }

        if (tmp_kw_call_arg_value_2_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 327;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_kw_call_dict_value_0_7 == NULL)) {
            tmp_kw_call_dict_value_0_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_kw_call_dict_value_0_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 327;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 327;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_7, tmp_kw_call_arg_value_1_7, tmp_kw_call_arg_value_2_7};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_7};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_14, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_14);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_10;
        PyObject *tmp_kw_call_arg_value_0_8;
        PyObject *tmp_kw_call_arg_value_1_8;
        PyObject *tmp_kw_call_arg_value_2_8;
        PyObject *tmp_kw_call_dict_value_0_8;
        PyObject *tmp_called_value_16;
        PyObject *tmp_call_arg_element_1;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_8;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[68]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_8 = mod_consts[141];
        tmp_kw_call_arg_value_1_8 = mod_consts[142];
        tmp_kw_call_arg_value_2_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_kw_call_arg_value_2_8 == NULL)) {
            tmp_kw_call_arg_value_2_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        if (tmp_kw_call_arg_value_2_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 331;

            goto try_except_handler_8;
        }
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 332;

            goto try_except_handler_8;
        }
        tmp_call_arg_element_1 = MAKE_LIST2((PyObject *)Py_TYPE(Py_None),(PyObject *)&PyLong_Type);
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 332;
        tmp_kw_call_dict_value_0_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_kw_call_dict_value_0_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 332;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 328;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_8, tmp_kw_call_arg_value_1_8, tmp_kw_call_arg_value_2_8};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_8};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_15, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_kw_call_dict_value_0_8);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_11;
        PyObject *tmp_kw_call_arg_value_0_9;
        PyObject *tmp_kw_call_arg_value_1_9;
        PyObject *tmp_kw_call_arg_value_2_9;
        PyObject *tmp_kw_call_dict_value_0_9;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_8;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[68]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_9 = mod_consts[143];
        tmp_kw_call_arg_value_1_9 = mod_consts[144];
        tmp_kw_call_arg_value_2_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_kw_call_arg_value_2_9 == NULL)) {
            tmp_kw_call_arg_value_2_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_kw_call_arg_value_2_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 334;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_kw_call_dict_value_0_9 == NULL)) {
            tmp_kw_call_dict_value_0_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_kw_call_dict_value_0_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 334;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 334;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_9, tmp_kw_call_arg_value_1_9, tmp_kw_call_arg_value_2_9};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_9};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_17, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_17);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_12;
        PyObject *tmp_kw_call_arg_value_0_10;
        PyObject *tmp_kw_call_arg_value_1_10;
        PyObject *tmp_kw_call_arg_value_2_10;
        PyObject *tmp_kw_call_dict_value_0_10;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto try_except_handler_8;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[68]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_10 = mod_consts[145];
        tmp_kw_call_arg_value_1_10 = mod_consts[146];
        tmp_kw_call_arg_value_2_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_kw_call_arg_value_2_10 == NULL)) {
            tmp_kw_call_arg_value_2_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_kw_call_arg_value_2_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 339;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_kw_call_dict_value_0_10 == NULL)) {
            tmp_kw_call_dict_value_0_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_kw_call_dict_value_0_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 340;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 336;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_10, tmp_kw_call_arg_value_1_10, tmp_kw_call_arg_value_2_10};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_10};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_18, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_18);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_called_value_19;
        PyObject *tmp_call_result_13;
        int tmp_truth_name_1;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[130]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 342;
        tmp_call_result_13 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_19);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_8;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_13);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_13);

            exception_lineno = 342;

            goto try_except_handler_8;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_13);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[2];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_61);
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[148];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_62);
    }
    branch_end_5:;
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_14;
        PyObject *tmp_kw_call_arg_value_0_11;
        PyObject *tmp_kw_call_arg_value_1_11;
        PyObject *tmp_kw_call_arg_value_2_11;
        PyObject *tmp_kw_call_dict_value_0_11;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto try_except_handler_8;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[68]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_11 = mod_consts[149];
        tmp_kw_call_arg_value_1_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[147]);

        if (unlikely(tmp_kw_call_arg_value_1_11 == NULL)) {
            tmp_kw_call_arg_value_1_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[147]);
        }

        if (tmp_kw_call_arg_value_1_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 347;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_2_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_kw_call_arg_value_2_11 == NULL)) {
            tmp_kw_call_arg_value_2_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_kw_call_arg_value_2_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 347;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_kw_call_dict_value_0_11 == NULL)) {
            tmp_kw_call_dict_value_0_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_kw_call_dict_value_0_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 347;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 346;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_11, tmp_kw_call_arg_value_1_11, tmp_kw_call_arg_value_2_11};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_11};
            tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_20, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_20);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_15;
        PyObject *tmp_kw_call_arg_value_0_12;
        PyObject *tmp_kw_call_arg_value_1_12;
        PyObject *tmp_kw_call_arg_value_2_12;
        PyObject *tmp_kw_call_dict_value_0_12;
        PyObject *tmp_called_value_22;
        PyObject *tmp_call_arg_element_2;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_8;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[68]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_12 = mod_consts[150];
        tmp_kw_call_arg_value_1_12 = mod_consts[151];
        tmp_kw_call_arg_value_2_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_kw_call_arg_value_2_12 == NULL)) {
            tmp_kw_call_arg_value_2_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_kw_call_arg_value_2_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 352;

            goto try_except_handler_8;
        }
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 353;

            goto try_except_handler_8;
        }
        tmp_call_arg_element_2 = MAKE_LIST2(mod_consts[151],mod_consts[152]);
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 353;
        tmp_kw_call_dict_value_0_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_call_arg_element_2);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_kw_call_dict_value_0_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 353;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 349;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_12, tmp_kw_call_arg_value_1_12, tmp_kw_call_arg_value_2_12};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_12};
            tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_21, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_kw_call_dict_value_0_12);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_16;
        PyObject *tmp_kw_call_arg_value_0_13;
        PyObject *tmp_kw_call_arg_value_1_13;
        PyObject *tmp_kw_call_arg_value_2_13;
        PyObject *tmp_kw_call_dict_value_0_13;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto try_except_handler_8;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[68]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_13 = mod_consts[153];
        tmp_kw_call_arg_value_1_13 = mod_consts[154];
        tmp_kw_call_arg_value_2_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_kw_call_arg_value_2_13 == NULL)) {
            tmp_kw_call_arg_value_2_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_kw_call_arg_value_2_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 355;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_kw_call_dict_value_0_13 == NULL)) {
            tmp_kw_call_dict_value_0_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_kw_call_dict_value_0_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 355;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 355;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_13, tmp_kw_call_arg_value_1_13, tmp_kw_call_arg_value_2_13};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_13};
            tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_23, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_23);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_17;
        PyObject *tmp_kw_call_arg_value_0_14;
        PyObject *tmp_kw_call_arg_value_1_14;
        PyObject *tmp_kw_call_arg_value_2_14;
        PyObject *tmp_kw_call_dict_value_0_14;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;

            goto try_except_handler_8;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[68]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_14 = mod_consts[155];
        tmp_kw_call_arg_value_1_14 = mod_consts[156];
        tmp_kw_call_arg_value_2_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_kw_call_arg_value_2_14 == NULL)) {
            tmp_kw_call_arg_value_2_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_kw_call_arg_value_2_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 357;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_kw_call_dict_value_0_14 == NULL)) {
            tmp_kw_call_dict_value_0_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_kw_call_dict_value_0_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 357;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 356;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_14, tmp_kw_call_arg_value_1_14, tmp_kw_call_arg_value_2_14};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_14};
            tmp_call_result_17 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_24, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_24);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_18;
        PyObject *tmp_kw_call_arg_value_0_15;
        PyObject *tmp_kw_call_arg_value_1_15;
        PyObject *tmp_kw_call_arg_value_2_15;
        PyObject *tmp_kw_call_dict_value_0_15;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto try_except_handler_8;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[68]);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_15 = mod_consts[157];
        tmp_kw_call_arg_value_1_15 = Py_True;
        tmp_kw_call_arg_value_2_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_kw_call_arg_value_2_15 == NULL)) {
            tmp_kw_call_arg_value_2_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[89]);
        }

        if (tmp_kw_call_arg_value_2_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 359;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_kw_call_dict_value_0_15 == NULL)) {
            tmp_kw_call_dict_value_0_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 359;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 359;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_15, tmp_kw_call_arg_value_1_15, tmp_kw_call_arg_value_2_15};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_15};
            tmp_call_result_18 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_25, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_25);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_19;
        PyObject *tmp_kw_call_arg_value_0_16;
        PyObject *tmp_kw_call_arg_value_1_16;
        PyObject *tmp_kw_call_arg_value_2_16;
        PyObject *tmp_kw_call_dict_value_0_16;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto try_except_handler_8;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[68]);
        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_16 = mod_consts[158];
        tmp_kw_call_arg_value_1_16 = mod_consts[159];
        tmp_kw_call_arg_value_2_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_kw_call_arg_value_2_16 == NULL)) {
            tmp_kw_call_arg_value_2_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
        }

        if (tmp_kw_call_arg_value_2_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 360;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_kw_call_dict_value_0_16 == NULL)) {
            tmp_kw_call_dict_value_0_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_kw_call_dict_value_0_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 360;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 360;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_16, tmp_kw_call_arg_value_1_16, tmp_kw_call_arg_value_2_16};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_16};
            tmp_call_result_19 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_26, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_26);
        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_20;
        PyObject *tmp_kw_call_arg_value_0_17;
        PyObject *tmp_kw_call_arg_value_1_17;
        PyObject *tmp_kw_call_arg_value_2_17;
        PyObject *tmp_kw_call_dict_value_0_17;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto try_except_handler_8;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[68]);
        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_17 = mod_consts[160];
        tmp_kw_call_arg_value_1_17 = Py_True;
        tmp_kw_call_arg_value_2_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_kw_call_arg_value_2_17 == NULL)) {
            tmp_kw_call_arg_value_2_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        if (tmp_kw_call_arg_value_2_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 361;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_kw_call_dict_value_0_17 == NULL)) {
            tmp_kw_call_dict_value_0_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 361;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 361;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_17, tmp_kw_call_arg_value_1_17, tmp_kw_call_arg_value_2_17};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_17};
            tmp_call_result_20 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_27, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_27);
        if (tmp_call_result_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto try_except_handler_8;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[68]);
        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto try_except_handler_8;
        }
        tmp_args_element_value_5 = mod_consts[161];
        tmp_args_element_value_6 = Py_True;
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 362;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 362;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_21 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_28, call_args);
        }

        Py_DECREF(tmp_called_value_28);
        if (tmp_call_result_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_22;
        PyObject *tmp_kw_call_arg_value_0_18;
        PyObject *tmp_kw_call_arg_value_1_18;
        PyObject *tmp_kw_call_arg_value_2_18;
        PyObject *tmp_kw_call_dict_value_0_18;
        PyObject *tmp_called_value_30;
        PyObject *tmp_call_arg_element_3;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_8;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[68]);
        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_18 = mod_consts[162];
        tmp_kw_call_arg_value_1_18 = mod_consts[151];
        tmp_kw_call_arg_value_2_18 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_kw_call_arg_value_2_18 == NULL)) {
            tmp_kw_call_arg_value_2_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_kw_call_arg_value_2_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 366;

            goto try_except_handler_8;
        }
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 367;

            goto try_except_handler_8;
        }
        tmp_call_arg_element_3 = MAKE_LIST3(Py_True,Py_False,mod_consts[151]);
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 367;
        tmp_kw_call_dict_value_0_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_call_arg_element_3);
        Py_DECREF(tmp_call_arg_element_3);
        if (tmp_kw_call_dict_value_0_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 367;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 363;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_18, tmp_kw_call_arg_value_1_18, tmp_kw_call_arg_value_2_18};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_18};
            tmp_call_result_22 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_29, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_kw_call_dict_value_0_18);
        if (tmp_call_result_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_23;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto try_except_handler_8;
        }
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[68]);
        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto try_except_handler_8;
        }
        tmp_args_element_value_8 = mod_consts[163];
        tmp_args_element_value_9 = Py_None;
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 369;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 369;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_23 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_31, call_args);
        }

        Py_DECREF(tmp_called_value_31);
        if (tmp_call_result_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto try_except_handler_8;
        }
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[68]);
        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto try_except_handler_8;
        }
        tmp_args_element_value_11 = mod_consts[164];
        tmp_args_element_value_12 = mod_consts[154];
        tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_args_element_value_13 == NULL)) {
            tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 370;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 370;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_call_result_24 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_32, call_args);
        }

        Py_DECREF(tmp_called_value_32);
        if (tmp_call_result_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_25;
        PyObject *tmp_kw_call_arg_value_0_19;
        PyObject *tmp_kw_call_arg_value_1_19;
        PyObject *tmp_kw_call_arg_value_2_19;
        PyObject *tmp_kw_call_dict_value_0_19;
        PyObject *tmp_called_value_34;
        PyObject *tmp_call_arg_element_4;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto try_except_handler_8;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[68]);
        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_19 = mod_consts[165];
        tmp_kw_call_arg_value_1_19 = mod_consts[166];
        tmp_kw_call_arg_value_2_19 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_kw_call_arg_value_2_19 == NULL)) {
            tmp_kw_call_arg_value_2_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
        }

        if (tmp_kw_call_arg_value_2_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 372;

            goto try_except_handler_8;
        }
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 372;

            goto try_except_handler_8;
        }
        tmp_call_arg_element_4 = MAKE_LIST2((PyObject *)Py_TYPE(Py_None),(PyObject *)&PyLong_Type);
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 372;
        tmp_kw_call_dict_value_0_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_call_arg_element_4);
        Py_DECREF(tmp_call_arg_element_4);
        if (tmp_kw_call_dict_value_0_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 372;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 371;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_19, tmp_kw_call_arg_value_1_19, tmp_kw_call_arg_value_2_19};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_19};
            tmp_call_result_25 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_33, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_kw_call_dict_value_0_19);
        if (tmp_call_result_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_26;
        PyObject *tmp_kw_call_arg_value_0_20;
        PyObject *tmp_kw_call_arg_value_1_20;
        PyObject *tmp_kw_call_arg_value_2_20;
        PyObject *tmp_kw_call_dict_value_0_20;
        PyObject *tmp_called_value_36;
        PyObject *tmp_call_arg_element_5;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_8;
        }
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[68]);
        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_20 = mod_consts[167];
        tmp_kw_call_arg_value_1_20 = Py_True;
        tmp_kw_call_arg_value_2_20 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_kw_call_arg_value_2_20 == NULL)) {
            tmp_kw_call_arg_value_2_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[127]);
        }

        if (tmp_kw_call_arg_value_2_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 377;

            goto try_except_handler_8;
        }
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 378;

            goto try_except_handler_8;
        }
        tmp_call_arg_element_5 = MAKE_LIST4(mod_consts[168]);
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 378;
        tmp_kw_call_dict_value_0_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_call_arg_element_5);
        Py_DECREF(tmp_call_arg_element_5);
        if (tmp_kw_call_dict_value_0_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 378;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 374;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_20, tmp_kw_call_arg_value_1_20, tmp_kw_call_arg_value_2_20};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_20};
            tmp_call_result_26 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_35, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_kw_call_dict_value_0_20);
        if (tmp_call_result_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_27;
        PyObject *tmp_kw_call_arg_value_0_21;
        PyObject *tmp_kw_call_arg_value_1_21;
        PyObject *tmp_kw_call_arg_value_2_21;
        PyObject *tmp_kw_call_dict_value_0_21;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto try_except_handler_8;
        }
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[68]);
        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_21 = mod_consts[169];
        tmp_kw_call_arg_value_1_21 = Py_False;
        tmp_kw_call_arg_value_2_21 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_kw_call_arg_value_2_21 == NULL)) {
            tmp_kw_call_arg_value_2_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_kw_call_arg_value_2_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 381;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_21 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_kw_call_dict_value_0_21 == NULL)) {
            tmp_kw_call_dict_value_0_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 381;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 380;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_21, tmp_kw_call_arg_value_1_21, tmp_kw_call_arg_value_2_21};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_21};
            tmp_call_result_27 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_37, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_37);
        if (tmp_call_result_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_called_value_38;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_result_28;
        PyObject *tmp_kw_call_arg_value_0_22;
        PyObject *tmp_kw_call_arg_value_1_22;
        PyObject *tmp_kw_call_arg_value_2_22;
        PyObject *tmp_kw_call_dict_value_0_22;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto try_except_handler_8;
        }
        tmp_called_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[68]);
        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_22 = mod_consts[170];
        tmp_kw_call_arg_value_1_22 = Py_False;
        tmp_kw_call_arg_value_2_22 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_kw_call_arg_value_2_22 == NULL)) {
            tmp_kw_call_arg_value_2_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_kw_call_arg_value_2_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 384;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_22 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_kw_call_dict_value_0_22 == NULL)) {
            tmp_kw_call_dict_value_0_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 384;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 383;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_22, tmp_kw_call_arg_value_1_22, tmp_kw_call_arg_value_2_22};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_22};
            tmp_call_result_28 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_38, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_38);
        if (tmp_call_result_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_call_result_29;
        PyObject *tmp_kw_call_arg_value_0_23;
        PyObject *tmp_kw_call_arg_value_1_23;
        PyObject *tmp_kw_call_arg_value_2_23;
        PyObject *tmp_kw_call_dict_value_0_23;
        PyObject *tmp_kw_call_dict_value_1_4;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto try_except_handler_8;
        }
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[68]);
        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_23 = mod_consts[171];
        tmp_kw_call_arg_value_1_23 = Py_False;
        tmp_kw_call_arg_value_2_23 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_kw_call_arg_value_2_23 == NULL)) {
            tmp_kw_call_arg_value_2_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[109]);
        }

        if (tmp_kw_call_arg_value_2_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 389;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_23 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_kw_call_dict_value_0_23 == NULL)) {
            tmp_kw_call_dict_value_0_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 390;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_1_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_kw_call_dict_value_1_4 == NULL)) {
            tmp_kw_call_dict_value_1_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[128]);
        }

        if (tmp_kw_call_dict_value_1_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 391;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 386;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_23, tmp_kw_call_arg_value_1_23, tmp_kw_call_arg_value_2_23};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_23, tmp_kw_call_dict_value_1_4};
            tmp_call_result_29 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_39, args, kw_values, mod_consts[70]);
        }

        Py_DECREF(tmp_called_value_39);
        if (tmp_call_result_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_30;
        PyObject *tmp_kw_call_arg_value_0_24;
        PyObject *tmp_kw_call_arg_value_1_24;
        PyObject *tmp_kw_call_arg_value_2_24;
        PyObject *tmp_kw_call_dict_value_0_24;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;

            goto try_except_handler_8;
        }
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[68]);
        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_24 = mod_consts[172];
        tmp_kw_call_arg_value_1_24 = mod_consts[173];
        tmp_kw_call_arg_value_2_24 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_kw_call_arg_value_2_24 == NULL)) {
            tmp_kw_call_arg_value_2_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_kw_call_arg_value_2_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 393;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_24 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_kw_call_dict_value_0_24 == NULL)) {
            tmp_kw_call_dict_value_0_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_kw_call_dict_value_0_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 393;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 393;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_24, tmp_kw_call_arg_value_1_24, tmp_kw_call_arg_value_2_24};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_24};
            tmp_call_result_30 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_40, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_40);
        if (tmp_call_result_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_call_result_31;
        PyObject *tmp_kw_call_arg_value_0_25;
        PyObject *tmp_kw_call_arg_value_1_25;
        PyObject *tmp_kw_call_arg_value_2_25;
        PyObject *tmp_kw_call_dict_value_0_25;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto try_except_handler_8;
        }
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[68]);
        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_25 = mod_consts[174];
        tmp_kw_call_arg_value_1_25 = Py_True;
        tmp_kw_call_arg_value_2_25 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_kw_call_arg_value_2_25 == NULL)) {
            tmp_kw_call_arg_value_2_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
        }

        if (tmp_kw_call_arg_value_2_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 395;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_25 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_kw_call_dict_value_0_25 == NULL)) {
            tmp_kw_call_dict_value_0_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 395;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 394;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_25, tmp_kw_call_arg_value_1_25, tmp_kw_call_arg_value_2_25};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_25};
            tmp_call_result_31 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_41, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_41);
        if (tmp_call_result_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_32;
        PyObject *tmp_kw_call_arg_value_0_26;
        PyObject *tmp_kw_call_arg_value_1_26;
        PyObject *tmp_kw_call_arg_value_2_26;
        PyObject *tmp_kw_call_dict_value_0_26;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_8;
        }
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[68]);
        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_26 = mod_consts[175];
        tmp_kw_call_arg_value_1_26 = mod_consts[154];
        tmp_kw_call_arg_value_2_26 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_kw_call_arg_value_2_26 == NULL)) {
            tmp_kw_call_arg_value_2_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
        }

        if (tmp_kw_call_arg_value_2_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 398;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_26 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_kw_call_dict_value_0_26 == NULL)) {
            tmp_kw_call_dict_value_0_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_kw_call_dict_value_0_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 398;

            goto try_except_handler_8;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 397;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_26, tmp_kw_call_arg_value_1_26, tmp_kw_call_arg_value_2_26};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_26};
            tmp_call_result_32 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_42, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_42);
        if (tmp_call_result_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_32);
    }
    goto try_end_6;
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_6 == NULL) {
        exception_keeper_tb_6 = MAKE_TRACEBACK(frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_6);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_keeper_tb_6 = ADD_TRACEBACK(exception_keeper_tb_6, frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_6);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
    // Tried code:
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        nuitka_bool tmp_assign_source_63;
        tmp_assign_source_63 = NUITKA_BOOL_FALSE;
        tmp_with_2__indicator = tmp_assign_source_63;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_43 = tmp_with_2__exit;
        tmp_args_element_value_14 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_15 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_16 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 313;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_43, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto try_except_handler_9;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto try_except_handler_9;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 313;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_9;
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 313;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_9;
    branch_end_6:;
    goto try_end_7;
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

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_7;
    // End of try:
    try_end_7:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    goto try_end_6;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_6:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_8;
        nuitka_bool tmp_cmp_expr_left_5;
        nuitka_bool tmp_cmp_expr_right_5;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_5 = tmp_with_2__indicator;
        tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_8 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_call_result_33;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_44 = tmp_with_2__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 313;
        tmp_call_result_33 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_44, mod_consts[73]);

        if (tmp_call_result_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_8);
            Py_XDECREF(exception_keeper_value_8);
            Py_XDECREF(exception_keeper_tb_8);

            exception_lineno = 313;

            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_33);
    }
    branch_no_8:;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_6;
    // End of try:
    try_end_8:;
    {
        bool tmp_condition_result_9;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = tmp_with_2__indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_9 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_45;
        PyObject *tmp_call_result_34;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_45 = tmp_with_2__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 313;
        tmp_call_result_34 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_45, mod_consts[73]);

        if (tmp_call_result_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_34);
    }
    branch_no_9:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    Py_XDECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_with_2__source);
    Py_DECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    CHECK_OBJECT(tmp_with_2__enter);
    Py_DECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[176];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_64);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto try_except_handler_10;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 406;
        tmp_assign_source_65 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[178], 0)
        );

        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto try_except_handler_10;
        }
        assert(tmp_with_3__source == NULL);
        tmp_with_3__source = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_46;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(tmp_with_3__source);
        tmp_expression_value_34 = tmp_with_3__source;
        tmp_called_value_46 = LOOKUP_SPECIAL(tstate, tmp_expression_value_34, mod_consts[66]);
        if (tmp_called_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto try_except_handler_10;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 406;
        tmp_assign_source_66 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_46);
        Py_DECREF(tmp_called_value_46);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto try_except_handler_10;
        }
        assert(tmp_with_3__enter == NULL);
        tmp_with_3__enter = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_expression_value_35;
        CHECK_OBJECT(tmp_with_3__source);
        tmp_expression_value_35 = tmp_with_3__source;
        tmp_assign_source_67 = LOOKUP_SPECIAL(tstate, tmp_expression_value_35, mod_consts[67]);
        if (tmp_assign_source_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto try_except_handler_10;
        }
        assert(tmp_with_3__exit == NULL);
        tmp_with_3__exit = tmp_assign_source_67;
    }
    {
        nuitka_bool tmp_assign_source_68;
        tmp_assign_source_68 = NUITKA_BOOL_TRUE;
        tmp_with_3__indicator = tmp_assign_source_68;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_call_result_35;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;

            goto try_except_handler_12;
        }
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[68]);
        if (tmp_called_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;

            goto try_except_handler_12;
        }
        tmp_args_element_value_17 = mod_consts[179];
        tmp_args_element_value_18 = Py_False;
        tmp_args_element_value_19 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[177]);

        if (unlikely(tmp_args_element_value_19 == NULL)) {
            tmp_args_element_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[177]);
        }

        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 407;

            goto try_except_handler_12;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 407;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_call_result_35 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_47, call_args);
        }

        Py_DECREF(tmp_called_value_47);
        if (tmp_call_result_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;

            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_35);
    }
    goto try_end_10;
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

    // Preserve existing published exception id 3.
    exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_10 == NULL) {
        exception_keeper_tb_10 = MAKE_TRACEBACK(frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_10);
    } else if (exception_keeper_lineno_10 != 0) {
        exception_keeper_tb_10 = ADD_TRACEBACK(exception_keeper_tb_10, frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_10);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10);
    // Tried code:
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_7 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        nuitka_bool tmp_assign_source_69;
        tmp_assign_source_69 = NUITKA_BOOL_FALSE;
        tmp_with_3__indicator = tmp_assign_source_69;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_value_48;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_value_48 = tmp_with_3__exit;
        tmp_args_element_value_20 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_21 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_22 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 406;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_48, call_args);
        }

        if (tmp_operand_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto try_except_handler_13;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto try_except_handler_13;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 406;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_13;
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 406;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_13;
    branch_end_10:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_11;
    // End of try:
    try_end_11:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

    goto try_end_10;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_10:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_12;
        nuitka_bool tmp_cmp_expr_left_8;
        nuitka_bool tmp_cmp_expr_right_8;
        assert(tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_8 = tmp_with_3__indicator;
        tmp_cmp_expr_right_8 = NUITKA_BOOL_TRUE;
        tmp_condition_result_12 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_called_value_49;
        PyObject *tmp_call_result_36;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_value_49 = tmp_with_3__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 406;
        tmp_call_result_36 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_49, mod_consts[73]);

        if (tmp_call_result_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_12);
            Py_XDECREF(exception_keeper_value_12);
            Py_XDECREF(exception_keeper_tb_12);

            exception_lineno = 406;

            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_36);
    }
    branch_no_12:;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_10;
    // End of try:
    try_end_12:;
    {
        bool tmp_condition_result_13;
        nuitka_bool tmp_cmp_expr_left_9;
        nuitka_bool tmp_cmp_expr_right_9;
        assert(tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_9 = tmp_with_3__indicator;
        tmp_cmp_expr_right_9 = NUITKA_BOOL_TRUE;
        tmp_condition_result_13 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_called_value_50;
        PyObject *tmp_call_result_37;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_value_50 = tmp_with_3__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 406;
        tmp_call_result_37 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_50, mod_consts[73]);

        if (tmp_call_result_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_37);
    }
    branch_no_13:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_3__source);
    tmp_with_3__source = NULL;
    Py_XDECREF(tmp_with_3__enter);
    tmp_with_3__enter = NULL;
    Py_XDECREF(tmp_with_3__exit);
    tmp_with_3__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_with_3__source);
    Py_DECREF(tmp_with_3__source);
    tmp_with_3__source = NULL;
    CHECK_OBJECT(tmp_with_3__enter);
    Py_DECREF(tmp_with_3__enter);
    tmp_with_3__enter = NULL;
    Py_XDECREF(tmp_with_3__exit);
    tmp_with_3__exit = NULL;
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[180];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_annotations_6;
        tmp_annotations_6 = DICT_COPY(mod_consts[56]);


        tmp_assign_source_71 = MAKE_FUNCTION_pandas$core$config_init$$$function__6_use_inf_as_na_cb(tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_71);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto try_except_handler_14;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 428;
        tmp_assign_source_72 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_4,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[178], 0)
        );

        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto try_except_handler_14;
        }
        assert(tmp_with_4__source == NULL);
        tmp_with_4__source = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_37;
        CHECK_OBJECT(tmp_with_4__source);
        tmp_expression_value_37 = tmp_with_4__source;
        tmp_called_value_51 = LOOKUP_SPECIAL(tstate, tmp_expression_value_37, mod_consts[66]);
        if (tmp_called_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto try_except_handler_14;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 428;
        tmp_assign_source_73 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_51);
        Py_DECREF(tmp_called_value_51);
        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto try_except_handler_14;
        }
        assert(tmp_with_4__enter == NULL);
        tmp_with_4__enter = tmp_assign_source_73;
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_expression_value_38;
        CHECK_OBJECT(tmp_with_4__source);
        tmp_expression_value_38 = tmp_with_4__source;
        tmp_assign_source_74 = LOOKUP_SPECIAL(tstate, tmp_expression_value_38, mod_consts[67]);
        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto try_except_handler_14;
        }
        assert(tmp_with_4__exit == NULL);
        tmp_with_4__exit = tmp_assign_source_74;
    }
    {
        nuitka_bool tmp_assign_source_75;
        tmp_assign_source_75 = NUITKA_BOOL_TRUE;
        tmp_with_4__indicator = tmp_assign_source_75;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_call_result_38;
        PyObject *tmp_kw_call_arg_value_0_27;
        PyObject *tmp_kw_call_arg_value_1_27;
        PyObject *tmp_kw_call_arg_value_2_27;
        PyObject *tmp_kw_call_dict_value_0_27;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto try_except_handler_16;
        }
        tmp_called_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[68]);
        if (tmp_called_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto try_except_handler_16;
        }
        tmp_kw_call_arg_value_0_27 = mod_consts[183];
        tmp_kw_call_arg_value_1_27 = Py_False;
        tmp_kw_call_arg_value_2_27 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[181]);

        if (unlikely(tmp_kw_call_arg_value_2_27 == NULL)) {
            tmp_kw_call_arg_value_2_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[181]);
        }

        if (tmp_kw_call_arg_value_2_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 429;

            goto try_except_handler_16;
        }
        tmp_kw_call_dict_value_0_27 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[182]);

        if (unlikely(tmp_kw_call_dict_value_0_27 == NULL)) {
            tmp_kw_call_dict_value_0_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[182]);
        }

        if (tmp_kw_call_dict_value_0_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 429;

            goto try_except_handler_16;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 429;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_27, tmp_kw_call_arg_value_1_27, tmp_kw_call_arg_value_2_27};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_27};
            tmp_call_result_38 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_52, args, kw_values, mod_consts[184]);
        }

        Py_DECREF(tmp_called_value_52);
        if (tmp_call_result_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto try_except_handler_16;
        }
        Py_DECREF(tmp_call_result_38);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 4.
    exception_preserved_4 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_14 == NULL) {
        exception_keeper_tb_14 = MAKE_TRACEBACK(frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_14);
    } else if (exception_keeper_lineno_14 != 0) {
        exception_keeper_tb_14 = ADD_TRACEBACK(exception_keeper_tb_14, frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_14);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_14, &exception_keeper_value_14, &exception_keeper_tb_14);
    // Tried code:
    {
        bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        tmp_cmp_expr_left_10 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_10 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        nuitka_bool tmp_assign_source_76;
        tmp_assign_source_76 = NUITKA_BOOL_FALSE;
        tmp_with_4__indicator = tmp_assign_source_76;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_called_value_53;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        CHECK_OBJECT(tmp_with_4__exit);
        tmp_called_value_53 = tmp_with_4__exit;
        tmp_args_element_value_23 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_24 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_25 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 428;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_operand_value_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_53, call_args);
        }

        if (tmp_operand_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto try_except_handler_17;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto try_except_handler_17;
        }
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 428;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_17;
    branch_no_15:;
    goto branch_end_14;
    branch_no_14:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 428;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_17;
    branch_end_14:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_4);

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_15;
    // End of try:
    try_end_15:;
    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_4);

    goto try_end_14;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_14:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_16;
        nuitka_bool tmp_cmp_expr_left_11;
        nuitka_bool tmp_cmp_expr_right_11;
        assert(tmp_with_4__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_11 = tmp_with_4__indicator;
        tmp_cmp_expr_right_11 = NUITKA_BOOL_TRUE;
        tmp_condition_result_16 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_called_value_54;
        PyObject *tmp_call_result_39;
        CHECK_OBJECT(tmp_with_4__exit);
        tmp_called_value_54 = tmp_with_4__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 428;
        tmp_call_result_39 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_54, mod_consts[73]);

        if (tmp_call_result_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_16);
            Py_XDECREF(exception_keeper_value_16);
            Py_XDECREF(exception_keeper_tb_16);

            exception_lineno = 428;

            goto try_except_handler_14;
        }
        Py_DECREF(tmp_call_result_39);
    }
    branch_no_16:;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_14;
    // End of try:
    try_end_16:;
    {
        bool tmp_condition_result_17;
        nuitka_bool tmp_cmp_expr_left_12;
        nuitka_bool tmp_cmp_expr_right_12;
        assert(tmp_with_4__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_12 = tmp_with_4__indicator;
        tmp_cmp_expr_right_12 = NUITKA_BOOL_TRUE;
        tmp_condition_result_17 = (tmp_cmp_expr_left_12 == tmp_cmp_expr_right_12) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_called_value_55;
        PyObject *tmp_call_result_40;
        CHECK_OBJECT(tmp_with_4__exit);
        tmp_called_value_55 = tmp_with_4__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 428;
        tmp_call_result_40 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_55, mod_consts[73]);

        if (tmp_call_result_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto try_except_handler_14;
        }
        Py_DECREF(tmp_call_result_40);
    }
    branch_no_17:;
    goto try_end_17;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_4__source);
    tmp_with_4__source = NULL;
    Py_XDECREF(tmp_with_4__enter);
    tmp_with_4__enter = NULL;
    Py_XDECREF(tmp_with_4__exit);
    tmp_with_4__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_with_4__source);
    Py_DECREF(tmp_with_4__source);
    tmp_with_4__source = NULL;
    CHECK_OBJECT(tmp_with_4__enter);
    Py_DECREF(tmp_with_4__enter);
    tmp_with_4__enter = NULL;
    Py_XDECREF(tmp_with_4__exit);
    tmp_with_4__exit = NULL;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_41;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 431;
        tmp_call_result_41 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_5,
            mod_consts[185],
            &PyTuple_GET_ITEM(mod_consts[186], 0)
        );

        if (tmp_call_result_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[187];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_77);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_instance_6;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_18;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 446;
        tmp_assign_source_78 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_6,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[178], 0)
        );

        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_18;
        }
        assert(tmp_with_5__source == NULL);
        tmp_with_5__source = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(tmp_with_5__source);
        tmp_expression_value_40 = tmp_with_5__source;
        tmp_called_value_56 = LOOKUP_SPECIAL(tstate, tmp_expression_value_40, mod_consts[66]);
        if (tmp_called_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_18;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 446;
        tmp_assign_source_79 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_56);
        Py_DECREF(tmp_called_value_56);
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_18;
        }
        assert(tmp_with_5__enter == NULL);
        tmp_with_5__enter = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_expression_value_41;
        CHECK_OBJECT(tmp_with_5__source);
        tmp_expression_value_41 = tmp_with_5__source;
        tmp_assign_source_80 = LOOKUP_SPECIAL(tstate, tmp_expression_value_41, mod_consts[67]);
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_18;
        }
        assert(tmp_with_5__exit == NULL);
        tmp_with_5__exit = tmp_assign_source_80;
    }
    {
        nuitka_bool tmp_assign_source_81;
        tmp_assign_source_81 = NUITKA_BOOL_TRUE;
        tmp_with_5__indicator = tmp_assign_source_81;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_57;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_call_result_42;
        PyObject *tmp_kw_call_arg_value_0_28;
        PyObject *tmp_kw_call_arg_value_1_28;
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_kw_call_arg_value_2_28;
        PyObject *tmp_kw_call_dict_value_0_28;
        PyObject *tmp_called_value_59;
        PyObject *tmp_call_arg_element_6;
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto try_except_handler_20;
        }
        tmp_called_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[68]);
        if (tmp_called_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto try_except_handler_20;
        }
        tmp_kw_call_arg_value_0_28 = mod_consts[189];
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        assert(!(tmp_expression_value_44 == NULL));
        tmp_expression_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[190]);
        if (tmp_expression_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 451;

            goto try_except_handler_20;
        }
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[191]);
        Py_DECREF(tmp_expression_value_43);
        if (tmp_called_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 451;

            goto try_except_handler_20;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 451;
        tmp_kw_call_arg_value_1_28 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_58, mod_consts[192]);

        Py_DECREF(tmp_called_value_58);
        if (tmp_kw_call_arg_value_1_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 451;

            goto try_except_handler_20;
        }
        tmp_kw_call_arg_value_2_28 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[188]);

        if (unlikely(tmp_kw_call_arg_value_2_28 == NULL)) {
            tmp_kw_call_arg_value_2_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[188]);
        }

        if (tmp_kw_call_arg_value_2_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_kw_call_arg_value_1_28);

            exception_lineno = 452;

            goto try_except_handler_20;
        }
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_kw_call_arg_value_1_28);

            exception_lineno = 453;

            goto try_except_handler_20;
        }
        tmp_call_arg_element_6 = MAKE_LIST2(mod_consts[193],mod_consts[194]);
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 453;
        tmp_kw_call_dict_value_0_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_59, tmp_call_arg_element_6);
        Py_DECREF(tmp_call_arg_element_6);
        if (tmp_kw_call_dict_value_0_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_kw_call_arg_value_1_28);

            exception_lineno = 453;

            goto try_except_handler_20;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 447;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_28, tmp_kw_call_arg_value_1_28, tmp_kw_call_arg_value_2_28};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_28};
            tmp_call_result_42 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_57, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_57);
        Py_DECREF(tmp_kw_call_arg_value_1_28);
        Py_DECREF(tmp_kw_call_dict_value_0_28);
        if (tmp_call_result_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto try_except_handler_20;
        }
        Py_DECREF(tmp_call_result_42);
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 5.
    exception_preserved_5 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_18 == NULL) {
        exception_keeper_tb_18 = MAKE_TRACEBACK(frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_18);
    } else if (exception_keeper_lineno_18 != 0) {
        exception_keeper_tb_18 = ADD_TRACEBACK(exception_keeper_tb_18, frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_18);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_18, &exception_keeper_value_18, &exception_keeper_tb_18);
    // Tried code:
    {
        bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        tmp_cmp_expr_left_13 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_13 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_18 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        nuitka_bool tmp_assign_source_82;
        tmp_assign_source_82 = NUITKA_BOOL_FALSE;
        tmp_with_5__indicator = tmp_assign_source_82;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_called_value_60;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        CHECK_OBJECT(tmp_with_5__exit);
        tmp_called_value_60 = tmp_with_5__exit;
        tmp_args_element_value_26 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_27 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_28 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 446;
        {
            PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_operand_value_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_60, call_args);
        }

        if (tmp_operand_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_21;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_21;
        }
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 446;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_21;
    branch_no_19:;
    goto branch_end_18;
    branch_no_18:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 446;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_21;
    branch_end_18:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_5);

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto try_except_handler_19;
    // End of try:
    try_end_19:;
    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_5);

    goto try_end_18;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_18:;
    goto try_end_20;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_20;
        nuitka_bool tmp_cmp_expr_left_14;
        nuitka_bool tmp_cmp_expr_right_14;
        assert(tmp_with_5__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_14 = tmp_with_5__indicator;
        tmp_cmp_expr_right_14 = NUITKA_BOOL_TRUE;
        tmp_condition_result_20 = (tmp_cmp_expr_left_14 == tmp_cmp_expr_right_14) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_called_value_61;
        PyObject *tmp_call_result_43;
        CHECK_OBJECT(tmp_with_5__exit);
        tmp_called_value_61 = tmp_with_5__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 446;
        tmp_call_result_43 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_61, mod_consts[73]);

        if (tmp_call_result_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_20);
            Py_XDECREF(exception_keeper_value_20);
            Py_XDECREF(exception_keeper_tb_20);

            exception_lineno = 446;

            goto try_except_handler_18;
        }
        Py_DECREF(tmp_call_result_43);
    }
    branch_no_20:;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_18;
    // End of try:
    try_end_20:;
    {
        bool tmp_condition_result_21;
        nuitka_bool tmp_cmp_expr_left_15;
        nuitka_bool tmp_cmp_expr_right_15;
        assert(tmp_with_5__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_15 = tmp_with_5__indicator;
        tmp_cmp_expr_right_15 = NUITKA_BOOL_TRUE;
        tmp_condition_result_21 = (tmp_cmp_expr_left_15 == tmp_cmp_expr_right_15) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_called_value_62;
        PyObject *tmp_call_result_44;
        CHECK_OBJECT(tmp_with_5__exit);
        tmp_called_value_62 = tmp_with_5__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 446;
        tmp_call_result_44 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_62, mod_consts[73]);

        if (tmp_call_result_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_18;
        }
        Py_DECREF(tmp_call_result_44);
    }
    branch_no_21:;
    goto try_end_21;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_5__source);
    tmp_with_5__source = NULL;
    Py_XDECREF(tmp_with_5__enter);
    tmp_with_5__enter = NULL;
    Py_XDECREF(tmp_with_5__exit);
    tmp_with_5__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    CHECK_OBJECT(tmp_with_5__source);
    Py_DECREF(tmp_with_5__source);
    tmp_with_5__source = NULL;
    CHECK_OBJECT(tmp_with_5__enter);
    Py_DECREF(tmp_with_5__enter);
    tmp_with_5__enter = NULL;
    Py_XDECREF(tmp_with_5__exit);
    tmp_with_5__exit = NULL;
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[195];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_83);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_instance_7;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto try_except_handler_22;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 466;
        tmp_assign_source_84 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_7,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[178], 0)
        );

        if (tmp_assign_source_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto try_except_handler_22;
        }
        assert(tmp_with_6__source == NULL);
        tmp_with_6__source = tmp_assign_source_84;
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_value_63;
        PyObject *tmp_expression_value_45;
        CHECK_OBJECT(tmp_with_6__source);
        tmp_expression_value_45 = tmp_with_6__source;
        tmp_called_value_63 = LOOKUP_SPECIAL(tstate, tmp_expression_value_45, mod_consts[66]);
        if (tmp_called_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto try_except_handler_22;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 466;
        tmp_assign_source_85 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_63);
        Py_DECREF(tmp_called_value_63);
        if (tmp_assign_source_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto try_except_handler_22;
        }
        assert(tmp_with_6__enter == NULL);
        tmp_with_6__enter = tmp_assign_source_85;
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_expression_value_46;
        CHECK_OBJECT(tmp_with_6__source);
        tmp_expression_value_46 = tmp_with_6__source;
        tmp_assign_source_86 = LOOKUP_SPECIAL(tstate, tmp_expression_value_46, mod_consts[67]);
        if (tmp_assign_source_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto try_except_handler_22;
        }
        assert(tmp_with_6__exit == NULL);
        tmp_with_6__exit = tmp_assign_source_86;
    }
    {
        nuitka_bool tmp_assign_source_87;
        tmp_assign_source_87 = NUITKA_BOOL_TRUE;
        tmp_with_6__indicator = tmp_assign_source_87;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_64;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_call_result_45;
        PyObject *tmp_kw_call_arg_value_0_29;
        PyObject *tmp_kw_call_arg_value_1_29;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        PyObject *tmp_called_value_65;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_kw_call_arg_value_2_29;
        PyObject *tmp_kw_call_dict_value_0_29;
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;

            goto try_except_handler_24;
        }
        tmp_called_value_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[68]);
        if (tmp_called_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;

            goto try_except_handler_24;
        }
        tmp_kw_call_arg_value_0_29 = mod_consts[197];
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        assert(!(tmp_expression_value_49 == NULL));
        tmp_expression_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[190]);
        if (tmp_expression_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 471;

            goto try_except_handler_24;
        }
        tmp_called_value_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[191]);
        Py_DECREF(tmp_expression_value_48);
        if (tmp_called_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 471;

            goto try_except_handler_24;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 471;
        tmp_cmp_expr_left_16 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_65, mod_consts[198]);

        Py_DECREF(tmp_called_value_65);
        if (tmp_cmp_expr_left_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 471;

            goto try_except_handler_24;
        }
        tmp_cmp_expr_right_16 = mod_consts[199];
        tmp_kw_call_arg_value_1_29 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        Py_DECREF(tmp_cmp_expr_left_16);
        if (tmp_kw_call_arg_value_1_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 471;

            goto try_except_handler_24;
        }
        tmp_kw_call_arg_value_2_29 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_kw_call_arg_value_2_29 == NULL)) {
            tmp_kw_call_arg_value_2_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[196]);
        }

        if (tmp_kw_call_arg_value_2_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_kw_call_arg_value_1_29);

            exception_lineno = 472;

            goto try_except_handler_24;
        }
        tmp_kw_call_dict_value_0_29 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_kw_call_dict_value_0_29 == NULL)) {
            tmp_kw_call_dict_value_0_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_kw_call_arg_value_1_29);

            exception_lineno = 473;

            goto try_except_handler_24;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 467;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_29, tmp_kw_call_arg_value_1_29, tmp_kw_call_arg_value_2_29};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_29};
            tmp_call_result_45 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_64, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_kw_call_arg_value_1_29);
        if (tmp_call_result_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;

            goto try_except_handler_24;
        }
        Py_DECREF(tmp_call_result_45);
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 6.
    exception_preserved_6 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_22 == NULL) {
        exception_keeper_tb_22 = MAKE_TRACEBACK(frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_22);
    } else if (exception_keeper_lineno_22 != 0) {
        exception_keeper_tb_22 = ADD_TRACEBACK(exception_keeper_tb_22, frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_22);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_22, &exception_keeper_value_22, &exception_keeper_tb_22);
    // Tried code:
    {
        bool tmp_condition_result_22;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        tmp_cmp_expr_left_17 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_17 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        assert(!(tmp_res == -1));
        tmp_condition_result_22 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        nuitka_bool tmp_assign_source_88;
        tmp_assign_source_88 = NUITKA_BOOL_FALSE;
        tmp_with_6__indicator = tmp_assign_source_88;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_called_value_66;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        CHECK_OBJECT(tmp_with_6__exit);
        tmp_called_value_66 = tmp_with_6__exit;
        tmp_args_element_value_29 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_30 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_31 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 466;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31};
            tmp_operand_value_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_66, call_args);
        }

        if (tmp_operand_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto try_except_handler_25;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        Py_DECREF(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto try_except_handler_25;
        }
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 466;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_25;
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 466;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_25;
    branch_end_22:;
    goto try_end_23;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 6.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_6);

    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto try_except_handler_23;
    // End of try:
    try_end_23:;
    // Restore previous exception id 6.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_6);

    goto try_end_22;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_22:;
    goto try_end_24;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_24;
        nuitka_bool tmp_cmp_expr_left_18;
        nuitka_bool tmp_cmp_expr_right_18;
        assert(tmp_with_6__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_18 = tmp_with_6__indicator;
        tmp_cmp_expr_right_18 = NUITKA_BOOL_TRUE;
        tmp_condition_result_24 = (tmp_cmp_expr_left_18 == tmp_cmp_expr_right_18) ? true : false;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_called_value_67;
        PyObject *tmp_call_result_46;
        CHECK_OBJECT(tmp_with_6__exit);
        tmp_called_value_67 = tmp_with_6__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 466;
        tmp_call_result_46 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_67, mod_consts[73]);

        if (tmp_call_result_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_24);
            Py_XDECREF(exception_keeper_value_24);
            Py_XDECREF(exception_keeper_tb_24);

            exception_lineno = 466;

            goto try_except_handler_22;
        }
        Py_DECREF(tmp_call_result_46);
    }
    branch_no_24:;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto try_except_handler_22;
    // End of try:
    try_end_24:;
    {
        bool tmp_condition_result_25;
        nuitka_bool tmp_cmp_expr_left_19;
        nuitka_bool tmp_cmp_expr_right_19;
        assert(tmp_with_6__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_19 = tmp_with_6__indicator;
        tmp_cmp_expr_right_19 = NUITKA_BOOL_TRUE;
        tmp_condition_result_25 = (tmp_cmp_expr_left_19 == tmp_cmp_expr_right_19) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_called_value_68;
        PyObject *tmp_call_result_47;
        CHECK_OBJECT(tmp_with_6__exit);
        tmp_called_value_68 = tmp_with_6__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 466;
        tmp_call_result_47 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_68, mod_consts[73]);

        if (tmp_call_result_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto try_except_handler_22;
        }
        Py_DECREF(tmp_call_result_47);
    }
    branch_no_25:;
    goto try_end_25;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_6__source);
    tmp_with_6__source = NULL;
    Py_XDECREF(tmp_with_6__enter);
    tmp_with_6__enter = NULL;
    Py_XDECREF(tmp_with_6__exit);
    tmp_with_6__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_25:;
    CHECK_OBJECT(tmp_with_6__source);
    Py_DECREF(tmp_with_6__source);
    tmp_with_6__source = NULL;
    CHECK_OBJECT(tmp_with_6__enter);
    Py_DECREF(tmp_with_6__enter);
    tmp_with_6__enter = NULL;
    Py_XDECREF(tmp_with_6__exit);
    tmp_with_6__exit = NULL;
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[200];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_89);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_called_instance_8;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto try_except_handler_26;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 484;
        tmp_assign_source_90 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_8,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[178], 0)
        );

        if (tmp_assign_source_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto try_except_handler_26;
        }
        assert(tmp_with_7__source == NULL);
        tmp_with_7__source = tmp_assign_source_90;
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_value_69;
        PyObject *tmp_expression_value_50;
        CHECK_OBJECT(tmp_with_7__source);
        tmp_expression_value_50 = tmp_with_7__source;
        tmp_called_value_69 = LOOKUP_SPECIAL(tstate, tmp_expression_value_50, mod_consts[66]);
        if (tmp_called_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto try_except_handler_26;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 484;
        tmp_assign_source_91 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_69);
        Py_DECREF(tmp_called_value_69);
        if (tmp_assign_source_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto try_except_handler_26;
        }
        assert(tmp_with_7__enter == NULL);
        tmp_with_7__enter = tmp_assign_source_91;
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_expression_value_51;
        CHECK_OBJECT(tmp_with_7__source);
        tmp_expression_value_51 = tmp_with_7__source;
        tmp_assign_source_92 = LOOKUP_SPECIAL(tstate, tmp_expression_value_51, mod_consts[67]);
        if (tmp_assign_source_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto try_except_handler_26;
        }
        assert(tmp_with_7__exit == NULL);
        tmp_with_7__exit = tmp_assign_source_92;
    }
    {
        nuitka_bool tmp_assign_source_93;
        tmp_assign_source_93 = NUITKA_BOOL_TRUE;
        tmp_with_7__indicator = tmp_assign_source_93;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_call_result_48;
        PyObject *tmp_kw_call_arg_value_0_30;
        PyObject *tmp_kw_call_arg_value_1_30;
        PyObject *tmp_kw_call_arg_value_2_30;
        PyObject *tmp_kw_call_dict_value_0_30;
        PyObject *tmp_called_value_71;
        PyObject *tmp_call_arg_element_7;
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto try_except_handler_28;
        }
        tmp_called_value_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[68]);
        if (tmp_called_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto try_except_handler_28;
        }
        tmp_kw_call_arg_value_0_30 = mod_consts[201];
        tmp_kw_call_arg_value_1_30 = mod_consts[202];
        tmp_kw_call_arg_value_2_30 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_kw_call_arg_value_2_30 == NULL)) {
            tmp_kw_call_arg_value_2_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[201]);
        }

        if (tmp_kw_call_arg_value_2_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 488;

            goto try_except_handler_28;
        }
        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_71 == NULL)) {
            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 489;

            goto try_except_handler_28;
        }
        tmp_call_arg_element_7 = MAKE_LIST3(Py_None,mod_consts[202],mod_consts[203]);
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 489;
        tmp_kw_call_dict_value_0_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_71, tmp_call_arg_element_7);
        Py_DECREF(tmp_call_arg_element_7);
        if (tmp_kw_call_dict_value_0_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 489;

            goto try_except_handler_28;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 485;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_30, tmp_kw_call_arg_value_1_30, tmp_kw_call_arg_value_2_30};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_30};
            tmp_call_result_48 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_70, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_70);
        Py_DECREF(tmp_kw_call_dict_value_0_30);
        if (tmp_call_result_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto try_except_handler_28;
        }
        Py_DECREF(tmp_call_result_48);
    }
    goto try_end_26;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 7.
    exception_preserved_7 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_26 == NULL) {
        exception_keeper_tb_26 = MAKE_TRACEBACK(frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_26);
    } else if (exception_keeper_lineno_26 != 0) {
        exception_keeper_tb_26 = ADD_TRACEBACK(exception_keeper_tb_26, frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_26);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_26, &exception_keeper_value_26, &exception_keeper_tb_26);
    // Tried code:
    {
        bool tmp_condition_result_26;
        PyObject *tmp_cmp_expr_left_20;
        PyObject *tmp_cmp_expr_right_20;
        tmp_cmp_expr_left_20 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_20 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
        assert(!(tmp_res == -1));
        tmp_condition_result_26 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        nuitka_bool tmp_assign_source_94;
        tmp_assign_source_94 = NUITKA_BOOL_FALSE;
        tmp_with_7__indicator = tmp_assign_source_94;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_called_value_72;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        CHECK_OBJECT(tmp_with_7__exit);
        tmp_called_value_72 = tmp_with_7__exit;
        tmp_args_element_value_32 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_33 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_34 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 484;
        {
            PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34};
            tmp_operand_value_7 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_72, call_args);
        }

        if (tmp_operand_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto try_except_handler_29;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        Py_DECREF(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto try_except_handler_29;
        }
        tmp_condition_result_27 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 484;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_29;
    branch_no_27:;
    goto branch_end_26;
    branch_no_26:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 484;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_29;
    branch_end_26:;
    goto try_end_27;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 7.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_7);

    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto try_except_handler_27;
    // End of try:
    try_end_27:;
    // Restore previous exception id 7.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_7);

    goto try_end_26;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_26:;
    goto try_end_28;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_28;
        nuitka_bool tmp_cmp_expr_left_21;
        nuitka_bool tmp_cmp_expr_right_21;
        assert(tmp_with_7__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_21 = tmp_with_7__indicator;
        tmp_cmp_expr_right_21 = NUITKA_BOOL_TRUE;
        tmp_condition_result_28 = (tmp_cmp_expr_left_21 == tmp_cmp_expr_right_21) ? true : false;
        if (tmp_condition_result_28 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_called_value_73;
        PyObject *tmp_call_result_49;
        CHECK_OBJECT(tmp_with_7__exit);
        tmp_called_value_73 = tmp_with_7__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 484;
        tmp_call_result_49 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_73, mod_consts[73]);

        if (tmp_call_result_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_28);
            Py_XDECREF(exception_keeper_value_28);
            Py_XDECREF(exception_keeper_tb_28);

            exception_lineno = 484;

            goto try_except_handler_26;
        }
        Py_DECREF(tmp_call_result_49);
    }
    branch_no_28:;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto try_except_handler_26;
    // End of try:
    try_end_28:;
    {
        bool tmp_condition_result_29;
        nuitka_bool tmp_cmp_expr_left_22;
        nuitka_bool tmp_cmp_expr_right_22;
        assert(tmp_with_7__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_22 = tmp_with_7__indicator;
        tmp_cmp_expr_right_22 = NUITKA_BOOL_TRUE;
        tmp_condition_result_29 = (tmp_cmp_expr_left_22 == tmp_cmp_expr_right_22) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_called_value_74;
        PyObject *tmp_call_result_50;
        CHECK_OBJECT(tmp_with_7__exit);
        tmp_called_value_74 = tmp_with_7__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 484;
        tmp_call_result_50 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_74, mod_consts[73]);

        if (tmp_call_result_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto try_except_handler_26;
        }
        Py_DECREF(tmp_call_result_50);
    }
    branch_no_29:;
    goto try_end_29;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_7__source);
    tmp_with_7__source = NULL;
    Py_XDECREF(tmp_with_7__enter);
    tmp_with_7__enter = NULL;
    Py_XDECREF(tmp_with_7__exit);
    tmp_with_7__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_29:;
    CHECK_OBJECT(tmp_with_7__source);
    Py_DECREF(tmp_with_7__source);
    tmp_with_7__source = NULL;
    CHECK_OBJECT(tmp_with_7__enter);
    Py_DECREF(tmp_with_7__enter);
    tmp_with_7__enter = NULL;
    Py_XDECREF(tmp_with_7__exit);
    tmp_with_7__exit = NULL;
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = mod_consts[204];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_95);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_called_instance_9;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto try_except_handler_30;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 499;
        tmp_assign_source_96 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_9,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[178], 0)
        );

        if (tmp_assign_source_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto try_except_handler_30;
        }
        assert(tmp_with_8__source == NULL);
        tmp_with_8__source = tmp_assign_source_96;
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_value_75;
        PyObject *tmp_expression_value_53;
        CHECK_OBJECT(tmp_with_8__source);
        tmp_expression_value_53 = tmp_with_8__source;
        tmp_called_value_75 = LOOKUP_SPECIAL(tstate, tmp_expression_value_53, mod_consts[66]);
        if (tmp_called_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto try_except_handler_30;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 499;
        tmp_assign_source_97 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_75);
        Py_DECREF(tmp_called_value_75);
        if (tmp_assign_source_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto try_except_handler_30;
        }
        assert(tmp_with_8__enter == NULL);
        tmp_with_8__enter = tmp_assign_source_97;
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_expression_value_54;
        CHECK_OBJECT(tmp_with_8__source);
        tmp_expression_value_54 = tmp_with_8__source;
        tmp_assign_source_98 = LOOKUP_SPECIAL(tstate, tmp_expression_value_54, mod_consts[67]);
        if (tmp_assign_source_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto try_except_handler_30;
        }
        assert(tmp_with_8__exit == NULL);
        tmp_with_8__exit = tmp_assign_source_98;
    }
    {
        nuitka_bool tmp_assign_source_99;
        tmp_assign_source_99 = NUITKA_BOOL_TRUE;
        tmp_with_8__indicator = tmp_assign_source_99;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_76;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_call_result_51;
        PyObject *tmp_kw_call_arg_value_0_31;
        PyObject *tmp_kw_call_arg_value_1_31;
        PyObject *tmp_kw_call_arg_value_2_31;
        PyObject *tmp_kw_call_dict_value_0_31;
        PyObject *tmp_called_value_77;
        PyObject *tmp_call_arg_element_8;
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;

            goto try_except_handler_32;
        }
        tmp_called_value_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[68]);
        if (tmp_called_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;

            goto try_except_handler_32;
        }
        tmp_kw_call_arg_value_0_31 = mod_consts[206];
        tmp_kw_call_arg_value_1_31 = mod_consts[207];
        tmp_kw_call_arg_value_2_31 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_kw_call_arg_value_2_31 == NULL)) {
            tmp_kw_call_arg_value_2_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
        }

        if (tmp_kw_call_arg_value_2_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 503;

            goto try_except_handler_32;
        }
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 504;

            goto try_except_handler_32;
        }
        tmp_call_arg_element_8 = MAKE_LIST3(mod_consts[207],mod_consts[208],mod_consts[209]);
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 504;
        tmp_kw_call_dict_value_0_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_77, tmp_call_arg_element_8);
        Py_DECREF(tmp_call_arg_element_8);
        if (tmp_kw_call_dict_value_0_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 504;

            goto try_except_handler_32;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 500;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_31, tmp_kw_call_arg_value_1_31, tmp_kw_call_arg_value_2_31};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_31};
            tmp_call_result_51 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_76, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_76);
        Py_DECREF(tmp_kw_call_dict_value_0_31);
        if (tmp_call_result_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;

            goto try_except_handler_32;
        }
        Py_DECREF(tmp_call_result_51);
    }
    goto try_end_30;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 8.
    exception_preserved_8 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_30 == NULL) {
        exception_keeper_tb_30 = MAKE_TRACEBACK(frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_30);
    } else if (exception_keeper_lineno_30 != 0) {
        exception_keeper_tb_30 = ADD_TRACEBACK(exception_keeper_tb_30, frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_30);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_30, &exception_keeper_value_30, &exception_keeper_tb_30);
    // Tried code:
    {
        bool tmp_condition_result_30;
        PyObject *tmp_cmp_expr_left_23;
        PyObject *tmp_cmp_expr_right_23;
        tmp_cmp_expr_left_23 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_23 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
        assert(!(tmp_res == -1));
        tmp_condition_result_30 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        nuitka_bool tmp_assign_source_100;
        tmp_assign_source_100 = NUITKA_BOOL_FALSE;
        tmp_with_8__indicator = tmp_assign_source_100;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_called_value_78;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_args_element_value_37;
        CHECK_OBJECT(tmp_with_8__exit);
        tmp_called_value_78 = tmp_with_8__exit;
        tmp_args_element_value_35 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_36 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_37 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 499;
        {
            PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36, tmp_args_element_value_37};
            tmp_operand_value_8 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_78, call_args);
        }

        if (tmp_operand_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto try_except_handler_33;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        Py_DECREF(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto try_except_handler_33;
        }
        tmp_condition_result_31 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 499;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_33;
    branch_no_31:;
    goto branch_end_30;
    branch_no_30:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 499;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_33;
    branch_end_30:;
    goto try_end_31;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 8.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_8);

    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto try_except_handler_31;
    // End of try:
    try_end_31:;
    // Restore previous exception id 8.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_8);

    goto try_end_30;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_30:;
    goto try_end_32;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_32;
        nuitka_bool tmp_cmp_expr_left_24;
        nuitka_bool tmp_cmp_expr_right_24;
        assert(tmp_with_8__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_24 = tmp_with_8__indicator;
        tmp_cmp_expr_right_24 = NUITKA_BOOL_TRUE;
        tmp_condition_result_32 = (tmp_cmp_expr_left_24 == tmp_cmp_expr_right_24) ? true : false;
        if (tmp_condition_result_32 != false) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_called_value_79;
        PyObject *tmp_call_result_52;
        CHECK_OBJECT(tmp_with_8__exit);
        tmp_called_value_79 = tmp_with_8__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 499;
        tmp_call_result_52 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_79, mod_consts[73]);

        if (tmp_call_result_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_32);
            Py_XDECREF(exception_keeper_value_32);
            Py_XDECREF(exception_keeper_tb_32);

            exception_lineno = 499;

            goto try_except_handler_30;
        }
        Py_DECREF(tmp_call_result_52);
    }
    branch_no_32:;
    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto try_except_handler_30;
    // End of try:
    try_end_32:;
    {
        bool tmp_condition_result_33;
        nuitka_bool tmp_cmp_expr_left_25;
        nuitka_bool tmp_cmp_expr_right_25;
        assert(tmp_with_8__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_25 = tmp_with_8__indicator;
        tmp_cmp_expr_right_25 = NUITKA_BOOL_TRUE;
        tmp_condition_result_33 = (tmp_cmp_expr_left_25 == tmp_cmp_expr_right_25) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_called_value_80;
        PyObject *tmp_call_result_53;
        CHECK_OBJECT(tmp_with_8__exit);
        tmp_called_value_80 = tmp_with_8__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 499;
        tmp_call_result_53 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_80, mod_consts[73]);

        if (tmp_call_result_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto try_except_handler_30;
        }
        Py_DECREF(tmp_call_result_53);
    }
    branch_no_33:;
    goto try_end_33;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_8__source);
    tmp_with_8__source = NULL;
    Py_XDECREF(tmp_with_8__enter);
    tmp_with_8__enter = NULL;
    Py_XDECREF(tmp_with_8__exit);
    tmp_with_8__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_33:;
    CHECK_OBJECT(tmp_with_8__source);
    Py_DECREF(tmp_with_8__source);
    tmp_with_8__source = NULL;
    CHECK_OBJECT(tmp_with_8__enter);
    Py_DECREF(tmp_with_8__enter);
    tmp_with_8__enter = NULL;
    Py_XDECREF(tmp_with_8__exit);
    tmp_with_8__exit = NULL;
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = mod_consts[210];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = MAKE_LIST1(mod_consts[212]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = MAKE_LIST2(mod_consts[212],mod_consts[214]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = MAKE_LIST2(mod_consts[212],mod_consts[214]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = MAKE_LIST1(mod_consts[217]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = MAKE_LIST1(mod_consts[219]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_106);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_called_instance_10;
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;

            goto try_except_handler_34;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 522;
        tmp_assign_source_107 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_10,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[221], 0)
        );

        if (tmp_assign_source_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;

            goto try_except_handler_34;
        }
        assert(tmp_with_9__source == NULL);
        tmp_with_9__source = tmp_assign_source_107;
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_called_value_81;
        PyObject *tmp_expression_value_56;
        CHECK_OBJECT(tmp_with_9__source);
        tmp_expression_value_56 = tmp_with_9__source;
        tmp_called_value_81 = LOOKUP_SPECIAL(tstate, tmp_expression_value_56, mod_consts[66]);
        if (tmp_called_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;

            goto try_except_handler_34;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 522;
        tmp_assign_source_108 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_81);
        Py_DECREF(tmp_called_value_81);
        if (tmp_assign_source_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;

            goto try_except_handler_34;
        }
        assert(tmp_with_9__enter == NULL);
        tmp_with_9__enter = tmp_assign_source_108;
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_expression_value_57;
        CHECK_OBJECT(tmp_with_9__source);
        tmp_expression_value_57 = tmp_with_9__source;
        tmp_assign_source_109 = LOOKUP_SPECIAL(tstate, tmp_expression_value_57, mod_consts[67]);
        if (tmp_assign_source_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;

            goto try_except_handler_34;
        }
        assert(tmp_with_9__exit == NULL);
        tmp_with_9__exit = tmp_assign_source_109;
    }
    {
        nuitka_bool tmp_assign_source_110;
        tmp_assign_source_110 = NUITKA_BOOL_TRUE;
        tmp_with_9__indicator = tmp_assign_source_110;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_82;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_call_result_54;
        PyObject *tmp_kw_call_arg_value_0_32;
        PyObject *tmp_kw_call_arg_value_1_32;
        PyObject *tmp_kw_call_arg_value_2_32;
        PyObject *tmp_called_value_83;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_kw_call_dict_value_0_32;
        PyObject *tmp_called_value_84;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;

            goto try_except_handler_36;
        }
        tmp_called_value_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[68]);
        if (tmp_called_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;

            goto try_except_handler_36;
        }
        tmp_kw_call_arg_value_0_32 = mod_consts[222];
        tmp_kw_call_arg_value_1_32 = mod_consts[223];
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[211]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[211]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 526;

            goto try_except_handler_36;
        }
        tmp_called_value_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[224]);
        if (tmp_called_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 526;

            goto try_except_handler_36;
        }
        tmp_kw_call_value_0_1 = mod_consts[225];
        tmp_str_arg_value_1 = mod_consts[226];
        tmp_iterable_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[213]);

        if (unlikely(tmp_iterable_value_1 == NULL)) {
            tmp_iterable_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[213]);
        }

        if (tmp_iterable_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_83);

            exception_lineno = 526;

            goto try_except_handler_36;
        }
        tmp_kw_call_value_1_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_83);

            exception_lineno = 526;

            goto try_except_handler_36;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 526;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_kw_call_arg_value_2_32 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_83, kw_values, mod_consts[227]);
        }

        Py_DECREF(tmp_called_value_83);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_kw_call_arg_value_2_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 526;

            goto try_except_handler_36;
        }
        tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_84 == NULL)) {
            tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_kw_call_arg_value_2_32);

            exception_lineno = 527;

            goto try_except_handler_36;
        }
        tmp_add_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[213]);

        if (unlikely(tmp_add_expr_left_1 == NULL)) {
            tmp_add_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[213]);
        }

        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_kw_call_arg_value_2_32);

            exception_lineno = 527;

            goto try_except_handler_36;
        }
        tmp_add_expr_right_1 = MAKE_LIST1(mod_consts[223]);
        tmp_args_element_value_38 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LIST(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_args_element_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_kw_call_arg_value_2_32);

            exception_lineno = 527;

            goto try_except_handler_36;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 527;
        tmp_kw_call_dict_value_0_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_84, tmp_args_element_value_38);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_kw_call_dict_value_0_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_kw_call_arg_value_2_32);

            exception_lineno = 527;

            goto try_except_handler_36;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 523;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_32, tmp_kw_call_arg_value_1_32, tmp_kw_call_arg_value_2_32};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_32};
            tmp_call_result_54 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_82, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_82);
        Py_DECREF(tmp_kw_call_arg_value_2_32);
        Py_DECREF(tmp_kw_call_dict_value_0_32);
        if (tmp_call_result_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;

            goto try_except_handler_36;
        }
        Py_DECREF(tmp_call_result_54);
    }
    goto try_end_34;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 9.
    exception_preserved_9 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_34 == NULL) {
        exception_keeper_tb_34 = MAKE_TRACEBACK(frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_34);
    } else if (exception_keeper_lineno_34 != 0) {
        exception_keeper_tb_34 = ADD_TRACEBACK(exception_keeper_tb_34, frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_34);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_34, &exception_keeper_value_34, &exception_keeper_tb_34);
    // Tried code:
    {
        bool tmp_condition_result_34;
        PyObject *tmp_cmp_expr_left_26;
        PyObject *tmp_cmp_expr_right_26;
        tmp_cmp_expr_left_26 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_26 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_26, tmp_cmp_expr_right_26);
        assert(!(tmp_res == -1));
        tmp_condition_result_34 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        nuitka_bool tmp_assign_source_111;
        tmp_assign_source_111 = NUITKA_BOOL_FALSE;
        tmp_with_9__indicator = tmp_assign_source_111;
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_called_value_85;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_args_element_value_41;
        CHECK_OBJECT(tmp_with_9__exit);
        tmp_called_value_85 = tmp_with_9__exit;
        tmp_args_element_value_39 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_40 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_41 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 522;
        {
            PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40, tmp_args_element_value_41};
            tmp_operand_value_9 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_85, call_args);
        }

        if (tmp_operand_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;

            goto try_except_handler_37;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        Py_DECREF(tmp_operand_value_9);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;

            goto try_except_handler_37;
        }
        tmp_condition_result_35 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 522;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_37;
    branch_no_35:;
    goto branch_end_34;
    branch_no_34:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 522;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_37;
    branch_end_34:;
    goto try_end_35;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 9.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_9);

    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto try_except_handler_35;
    // End of try:
    try_end_35:;
    // Restore previous exception id 9.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_9);

    goto try_end_34;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_34:;
    goto try_end_36;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_36;
        nuitka_bool tmp_cmp_expr_left_27;
        nuitka_bool tmp_cmp_expr_right_27;
        assert(tmp_with_9__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_27 = tmp_with_9__indicator;
        tmp_cmp_expr_right_27 = NUITKA_BOOL_TRUE;
        tmp_condition_result_36 = (tmp_cmp_expr_left_27 == tmp_cmp_expr_right_27) ? true : false;
        if (tmp_condition_result_36 != false) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
    }
    branch_yes_36:;
    {
        PyObject *tmp_called_value_86;
        PyObject *tmp_call_result_55;
        CHECK_OBJECT(tmp_with_9__exit);
        tmp_called_value_86 = tmp_with_9__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 522;
        tmp_call_result_55 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_86, mod_consts[73]);

        if (tmp_call_result_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_36);
            Py_XDECREF(exception_keeper_value_36);
            Py_XDECREF(exception_keeper_tb_36);

            exception_lineno = 522;

            goto try_except_handler_34;
        }
        Py_DECREF(tmp_call_result_55);
    }
    branch_no_36:;
    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto try_except_handler_34;
    // End of try:
    try_end_36:;
    {
        bool tmp_condition_result_37;
        nuitka_bool tmp_cmp_expr_left_28;
        nuitka_bool tmp_cmp_expr_right_28;
        assert(tmp_with_9__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_28 = tmp_with_9__indicator;
        tmp_cmp_expr_right_28 = NUITKA_BOOL_TRUE;
        tmp_condition_result_37 = (tmp_cmp_expr_left_28 == tmp_cmp_expr_right_28) ? true : false;
        if (tmp_condition_result_37 != false) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_called_value_87;
        PyObject *tmp_call_result_56;
        CHECK_OBJECT(tmp_with_9__exit);
        tmp_called_value_87 = tmp_with_9__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 522;
        tmp_call_result_56 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_87, mod_consts[73]);

        if (tmp_call_result_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;

            goto try_except_handler_34;
        }
        Py_DECREF(tmp_call_result_56);
    }
    branch_no_37:;
    goto try_end_37;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_9__source);
    tmp_with_9__source = NULL;
    Py_XDECREF(tmp_with_9__enter);
    tmp_with_9__enter = NULL;
    Py_XDECREF(tmp_with_9__exit);
    tmp_with_9__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto frame_exception_exit_1;
    // End of try:
    try_end_37:;
    CHECK_OBJECT(tmp_with_9__source);
    Py_DECREF(tmp_with_9__source);
    tmp_with_9__source = NULL;
    CHECK_OBJECT(tmp_with_9__enter);
    Py_DECREF(tmp_with_9__enter);
    tmp_with_9__enter = NULL;
    Py_XDECREF(tmp_with_9__exit);
    tmp_with_9__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_called_instance_11;
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto try_except_handler_38;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 530;
        tmp_assign_source_112 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_11,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[228], 0)
        );

        if (tmp_assign_source_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto try_except_handler_38;
        }
        assert(tmp_with_10__source == NULL);
        tmp_with_10__source = tmp_assign_source_112;
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_called_value_88;
        PyObject *tmp_expression_value_60;
        CHECK_OBJECT(tmp_with_10__source);
        tmp_expression_value_60 = tmp_with_10__source;
        tmp_called_value_88 = LOOKUP_SPECIAL(tstate, tmp_expression_value_60, mod_consts[66]);
        if (tmp_called_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto try_except_handler_38;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 530;
        tmp_assign_source_113 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_88);
        Py_DECREF(tmp_called_value_88);
        if (tmp_assign_source_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto try_except_handler_38;
        }
        assert(tmp_with_10__enter == NULL);
        tmp_with_10__enter = tmp_assign_source_113;
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_expression_value_61;
        CHECK_OBJECT(tmp_with_10__source);
        tmp_expression_value_61 = tmp_with_10__source;
        tmp_assign_source_114 = LOOKUP_SPECIAL(tstate, tmp_expression_value_61, mod_consts[67]);
        if (tmp_assign_source_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto try_except_handler_38;
        }
        assert(tmp_with_10__exit == NULL);
        tmp_with_10__exit = tmp_assign_source_114;
    }
    {
        nuitka_bool tmp_assign_source_115;
        tmp_assign_source_115 = NUITKA_BOOL_TRUE;
        tmp_with_10__indicator = tmp_assign_source_115;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_89;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_call_result_57;
        PyObject *tmp_kw_call_arg_value_0_33;
        PyObject *tmp_kw_call_arg_value_1_33;
        PyObject *tmp_kw_call_arg_value_2_33;
        PyObject *tmp_called_value_90;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_str_arg_value_2;
        PyObject *tmp_iterable_value_2;
        PyObject *tmp_kw_call_dict_value_0_33;
        PyObject *tmp_called_value_91;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto try_except_handler_40;
        }
        tmp_called_value_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[68]);
        if (tmp_called_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto try_except_handler_40;
        }
        tmp_kw_call_arg_value_0_33 = mod_consts[222];
        tmp_kw_call_arg_value_1_33 = mod_consts[223];
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[211]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[211]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);

            exception_lineno = 534;

            goto try_except_handler_40;
        }
        tmp_called_value_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[224]);
        if (tmp_called_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);

            exception_lineno = 534;

            goto try_except_handler_40;
        }
        tmp_kw_call_value_0_2 = mod_consts[229];
        tmp_str_arg_value_2 = mod_consts[226];
        tmp_iterable_value_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[215]);

        if (unlikely(tmp_iterable_value_2 == NULL)) {
            tmp_iterable_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[215]);
        }

        if (tmp_iterable_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 534;

            goto try_except_handler_40;
        }
        tmp_kw_call_value_1_2 = UNICODE_JOIN(tstate, tmp_str_arg_value_2, tmp_iterable_value_2);
        if (tmp_kw_call_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 534;

            goto try_except_handler_40;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 534;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

            tmp_kw_call_arg_value_2_33 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_90, kw_values, mod_consts[227]);
        }

        Py_DECREF(tmp_called_value_90);
        Py_DECREF(tmp_kw_call_value_1_2);
        if (tmp_kw_call_arg_value_2_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);

            exception_lineno = 534;

            goto try_except_handler_40;
        }
        tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_91 == NULL)) {
            tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_kw_call_arg_value_2_33);

            exception_lineno = 535;

            goto try_except_handler_40;
        }
        tmp_add_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[215]);

        if (unlikely(tmp_add_expr_left_2 == NULL)) {
            tmp_add_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[215]);
        }

        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_kw_call_arg_value_2_33);

            exception_lineno = 535;

            goto try_except_handler_40;
        }
        tmp_add_expr_right_2 = MAKE_LIST1(mod_consts[223]);
        tmp_args_element_value_42 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LIST(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_args_element_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_kw_call_arg_value_2_33);

            exception_lineno = 535;

            goto try_except_handler_40;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 535;
        tmp_kw_call_dict_value_0_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_91, tmp_args_element_value_42);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_kw_call_dict_value_0_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_kw_call_arg_value_2_33);

            exception_lineno = 535;

            goto try_except_handler_40;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 531;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_33, tmp_kw_call_arg_value_1_33, tmp_kw_call_arg_value_2_33};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_33};
            tmp_call_result_57 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_89, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_89);
        Py_DECREF(tmp_kw_call_arg_value_2_33);
        Py_DECREF(tmp_kw_call_dict_value_0_33);
        if (tmp_call_result_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto try_except_handler_40;
        }
        Py_DECREF(tmp_call_result_57);
    }
    goto try_end_38;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 10.
    exception_preserved_10 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_38 == NULL) {
        exception_keeper_tb_38 = MAKE_TRACEBACK(frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_38);
    } else if (exception_keeper_lineno_38 != 0) {
        exception_keeper_tb_38 = ADD_TRACEBACK(exception_keeper_tb_38, frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_38);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_38, &exception_keeper_value_38, &exception_keeper_tb_38);
    // Tried code:
    {
        bool tmp_condition_result_38;
        PyObject *tmp_cmp_expr_left_29;
        PyObject *tmp_cmp_expr_right_29;
        tmp_cmp_expr_left_29 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_29 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_29, tmp_cmp_expr_right_29);
        assert(!(tmp_res == -1));
        tmp_condition_result_38 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_38 != false) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        nuitka_bool tmp_assign_source_116;
        tmp_assign_source_116 = NUITKA_BOOL_FALSE;
        tmp_with_10__indicator = tmp_assign_source_116;
    }
    {
        bool tmp_condition_result_39;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_called_value_92;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        CHECK_OBJECT(tmp_with_10__exit);
        tmp_called_value_92 = tmp_with_10__exit;
        tmp_args_element_value_43 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_44 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_45 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 530;
        {
            PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45};
            tmp_operand_value_10 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_92, call_args);
        }

        if (tmp_operand_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto try_except_handler_41;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
        Py_DECREF(tmp_operand_value_10);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto try_except_handler_41;
        }
        tmp_condition_result_39 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 530;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_41;
    branch_no_39:;
    goto branch_end_38;
    branch_no_38:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 530;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_41;
    branch_end_38:;
    goto try_end_39;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 10.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_10);

    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto try_except_handler_39;
    // End of try:
    try_end_39:;
    // Restore previous exception id 10.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_10);

    goto try_end_38;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_38:;
    goto try_end_40;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_40;
        nuitka_bool tmp_cmp_expr_left_30;
        nuitka_bool tmp_cmp_expr_right_30;
        assert(tmp_with_10__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_30 = tmp_with_10__indicator;
        tmp_cmp_expr_right_30 = NUITKA_BOOL_TRUE;
        tmp_condition_result_40 = (tmp_cmp_expr_left_30 == tmp_cmp_expr_right_30) ? true : false;
        if (tmp_condition_result_40 != false) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_called_value_93;
        PyObject *tmp_call_result_58;
        CHECK_OBJECT(tmp_with_10__exit);
        tmp_called_value_93 = tmp_with_10__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 530;
        tmp_call_result_58 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_93, mod_consts[73]);

        if (tmp_call_result_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_40);
            Py_XDECREF(exception_keeper_value_40);
            Py_XDECREF(exception_keeper_tb_40);

            exception_lineno = 530;

            goto try_except_handler_38;
        }
        Py_DECREF(tmp_call_result_58);
    }
    branch_no_40:;
    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto try_except_handler_38;
    // End of try:
    try_end_40:;
    {
        bool tmp_condition_result_41;
        nuitka_bool tmp_cmp_expr_left_31;
        nuitka_bool tmp_cmp_expr_right_31;
        assert(tmp_with_10__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_31 = tmp_with_10__indicator;
        tmp_cmp_expr_right_31 = NUITKA_BOOL_TRUE;
        tmp_condition_result_41 = (tmp_cmp_expr_left_31 == tmp_cmp_expr_right_31) ? true : false;
        if (tmp_condition_result_41 != false) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_called_value_94;
        PyObject *tmp_call_result_59;
        CHECK_OBJECT(tmp_with_10__exit);
        tmp_called_value_94 = tmp_with_10__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 530;
        tmp_call_result_59 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_94, mod_consts[73]);

        if (tmp_call_result_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto try_except_handler_38;
        }
        Py_DECREF(tmp_call_result_59);
    }
    branch_no_41:;
    goto try_end_41;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_10__source);
    tmp_with_10__source = NULL;
    Py_XDECREF(tmp_with_10__enter);
    tmp_with_10__enter = NULL;
    Py_XDECREF(tmp_with_10__exit);
    tmp_with_10__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_41;
    exception_value = exception_keeper_value_41;
    exception_tb = exception_keeper_tb_41;
    exception_lineno = exception_keeper_lineno_41;

    goto frame_exception_exit_1;
    // End of try:
    try_end_41:;
    CHECK_OBJECT(tmp_with_10__source);
    Py_DECREF(tmp_with_10__source);
    tmp_with_10__source = NULL;
    CHECK_OBJECT(tmp_with_10__enter);
    Py_DECREF(tmp_with_10__enter);
    tmp_with_10__enter = NULL;
    Py_XDECREF(tmp_with_10__exit);
    tmp_with_10__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_called_instance_12;
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto try_except_handler_42;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 539;
        tmp_assign_source_117 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_12,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[230], 0)
        );

        if (tmp_assign_source_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto try_except_handler_42;
        }
        assert(tmp_with_11__source == NULL);
        tmp_with_11__source = tmp_assign_source_117;
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_called_value_95;
        PyObject *tmp_expression_value_64;
        CHECK_OBJECT(tmp_with_11__source);
        tmp_expression_value_64 = tmp_with_11__source;
        tmp_called_value_95 = LOOKUP_SPECIAL(tstate, tmp_expression_value_64, mod_consts[66]);
        if (tmp_called_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto try_except_handler_42;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 539;
        tmp_assign_source_118 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_95);
        Py_DECREF(tmp_called_value_95);
        if (tmp_assign_source_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto try_except_handler_42;
        }
        assert(tmp_with_11__enter == NULL);
        tmp_with_11__enter = tmp_assign_source_118;
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_expression_value_65;
        CHECK_OBJECT(tmp_with_11__source);
        tmp_expression_value_65 = tmp_with_11__source;
        tmp_assign_source_119 = LOOKUP_SPECIAL(tstate, tmp_expression_value_65, mod_consts[67]);
        if (tmp_assign_source_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto try_except_handler_42;
        }
        assert(tmp_with_11__exit == NULL);
        tmp_with_11__exit = tmp_assign_source_119;
    }
    {
        nuitka_bool tmp_assign_source_120;
        tmp_assign_source_120 = NUITKA_BOOL_TRUE;
        tmp_with_11__indicator = tmp_assign_source_120;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_96;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_call_result_60;
        PyObject *tmp_kw_call_arg_value_0_34;
        PyObject *tmp_kw_call_arg_value_1_34;
        PyObject *tmp_kw_call_arg_value_2_34;
        PyObject *tmp_called_value_97;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_str_arg_value_3;
        PyObject *tmp_iterable_value_3;
        PyObject *tmp_kw_call_dict_value_0_34;
        PyObject *tmp_called_value_98;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;

            goto try_except_handler_44;
        }
        tmp_called_value_96 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[68]);
        if (tmp_called_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;

            goto try_except_handler_44;
        }
        tmp_kw_call_arg_value_0_34 = mod_consts[222];
        tmp_kw_call_arg_value_1_34 = mod_consts[223];
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[211]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[211]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 543;

            goto try_except_handler_44;
        }
        tmp_called_value_97 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[224]);
        if (tmp_called_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 543;

            goto try_except_handler_44;
        }
        tmp_kw_call_value_0_3 = mod_consts[231];
        tmp_str_arg_value_3 = mod_consts[226];
        tmp_iterable_value_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[216]);

        if (unlikely(tmp_iterable_value_3 == NULL)) {
            tmp_iterable_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[216]);
        }

        if (tmp_iterable_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_97);

            exception_lineno = 543;

            goto try_except_handler_44;
        }
        tmp_kw_call_value_1_3 = UNICODE_JOIN(tstate, tmp_str_arg_value_3, tmp_iterable_value_3);
        if (tmp_kw_call_value_1_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_97);

            exception_lineno = 543;

            goto try_except_handler_44;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 543;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3};

            tmp_kw_call_arg_value_2_34 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_97, kw_values, mod_consts[227]);
        }

        Py_DECREF(tmp_called_value_97);
        Py_DECREF(tmp_kw_call_value_1_3);
        if (tmp_kw_call_arg_value_2_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 543;

            goto try_except_handler_44;
        }
        tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_98 == NULL)) {
            tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_kw_call_arg_value_2_34);

            exception_lineno = 544;

            goto try_except_handler_44;
        }
        tmp_add_expr_left_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[216]);

        if (unlikely(tmp_add_expr_left_3 == NULL)) {
            tmp_add_expr_left_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[216]);
        }

        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_kw_call_arg_value_2_34);

            exception_lineno = 544;

            goto try_except_handler_44;
        }
        tmp_add_expr_right_3 = MAKE_LIST1(mod_consts[223]);
        tmp_args_element_value_46 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LIST(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_args_element_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_kw_call_arg_value_2_34);

            exception_lineno = 544;

            goto try_except_handler_44;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 544;
        tmp_kw_call_dict_value_0_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_98, tmp_args_element_value_46);
        Py_DECREF(tmp_args_element_value_46);
        if (tmp_kw_call_dict_value_0_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_kw_call_arg_value_2_34);

            exception_lineno = 544;

            goto try_except_handler_44;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 540;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_34, tmp_kw_call_arg_value_1_34, tmp_kw_call_arg_value_2_34};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_34};
            tmp_call_result_60 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_96, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_96);
        Py_DECREF(tmp_kw_call_arg_value_2_34);
        Py_DECREF(tmp_kw_call_dict_value_0_34);
        if (tmp_call_result_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;

            goto try_except_handler_44;
        }
        Py_DECREF(tmp_call_result_60);
    }
    goto try_end_42;
    // Exception handler code:
    try_except_handler_44:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_keeper_lineno_42 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 11.
    exception_preserved_11 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_42 == NULL) {
        exception_keeper_tb_42 = MAKE_TRACEBACK(frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_42);
    } else if (exception_keeper_lineno_42 != 0) {
        exception_keeper_tb_42 = ADD_TRACEBACK(exception_keeper_tb_42, frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_42);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_42, &exception_keeper_value_42, &exception_keeper_tb_42);
    // Tried code:
    {
        bool tmp_condition_result_42;
        PyObject *tmp_cmp_expr_left_32;
        PyObject *tmp_cmp_expr_right_32;
        tmp_cmp_expr_left_32 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_32 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_32, tmp_cmp_expr_right_32);
        assert(!(tmp_res == -1));
        tmp_condition_result_42 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_42 != false) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
    }
    branch_yes_42:;
    {
        nuitka_bool tmp_assign_source_121;
        tmp_assign_source_121 = NUITKA_BOOL_FALSE;
        tmp_with_11__indicator = tmp_assign_source_121;
    }
    {
        bool tmp_condition_result_43;
        PyObject *tmp_operand_value_11;
        PyObject *tmp_called_value_99;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_args_element_value_49;
        CHECK_OBJECT(tmp_with_11__exit);
        tmp_called_value_99 = tmp_with_11__exit;
        tmp_args_element_value_47 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_48 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_49 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 539;
        {
            PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48, tmp_args_element_value_49};
            tmp_operand_value_11 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_99, call_args);
        }

        if (tmp_operand_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto try_except_handler_45;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
        Py_DECREF(tmp_operand_value_11);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto try_except_handler_45;
        }
        tmp_condition_result_43 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 539;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_45;
    branch_no_43:;
    goto branch_end_42;
    branch_no_42:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 539;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_45;
    branch_end_42:;
    goto try_end_43;
    // Exception handler code:
    try_except_handler_45:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_keeper_lineno_43 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 11.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_11);

    // Re-raise.
    exception_type = exception_keeper_type_43;
    exception_value = exception_keeper_value_43;
    exception_tb = exception_keeper_tb_43;
    exception_lineno = exception_keeper_lineno_43;

    goto try_except_handler_43;
    // End of try:
    try_end_43:;
    // Restore previous exception id 11.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_11);

    goto try_end_42;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_42:;
    goto try_end_44;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_type_44 = exception_type;
    exception_keeper_value_44 = exception_value;
    exception_keeper_tb_44 = exception_tb;
    exception_keeper_lineno_44 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_44;
        nuitka_bool tmp_cmp_expr_left_33;
        nuitka_bool tmp_cmp_expr_right_33;
        assert(tmp_with_11__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_33 = tmp_with_11__indicator;
        tmp_cmp_expr_right_33 = NUITKA_BOOL_TRUE;
        tmp_condition_result_44 = (tmp_cmp_expr_left_33 == tmp_cmp_expr_right_33) ? true : false;
        if (tmp_condition_result_44 != false) {
            goto branch_yes_44;
        } else {
            goto branch_no_44;
        }
    }
    branch_yes_44:;
    {
        PyObject *tmp_called_value_100;
        PyObject *tmp_call_result_61;
        CHECK_OBJECT(tmp_with_11__exit);
        tmp_called_value_100 = tmp_with_11__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 539;
        tmp_call_result_61 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_100, mod_consts[73]);

        if (tmp_call_result_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_44);
            Py_XDECREF(exception_keeper_value_44);
            Py_XDECREF(exception_keeper_tb_44);

            exception_lineno = 539;

            goto try_except_handler_42;
        }
        Py_DECREF(tmp_call_result_61);
    }
    branch_no_44:;
    // Re-raise.
    exception_type = exception_keeper_type_44;
    exception_value = exception_keeper_value_44;
    exception_tb = exception_keeper_tb_44;
    exception_lineno = exception_keeper_lineno_44;

    goto try_except_handler_42;
    // End of try:
    try_end_44:;
    {
        bool tmp_condition_result_45;
        nuitka_bool tmp_cmp_expr_left_34;
        nuitka_bool tmp_cmp_expr_right_34;
        assert(tmp_with_11__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_34 = tmp_with_11__indicator;
        tmp_cmp_expr_right_34 = NUITKA_BOOL_TRUE;
        tmp_condition_result_45 = (tmp_cmp_expr_left_34 == tmp_cmp_expr_right_34) ? true : false;
        if (tmp_condition_result_45 != false) {
            goto branch_yes_45;
        } else {
            goto branch_no_45;
        }
    }
    branch_yes_45:;
    {
        PyObject *tmp_called_value_101;
        PyObject *tmp_call_result_62;
        CHECK_OBJECT(tmp_with_11__exit);
        tmp_called_value_101 = tmp_with_11__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 539;
        tmp_call_result_62 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_101, mod_consts[73]);

        if (tmp_call_result_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto try_except_handler_42;
        }
        Py_DECREF(tmp_call_result_62);
    }
    branch_no_45:;
    goto try_end_45;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_type_45 = exception_type;
    exception_keeper_value_45 = exception_value;
    exception_keeper_tb_45 = exception_tb;
    exception_keeper_lineno_45 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_11__source);
    tmp_with_11__source = NULL;
    Py_XDECREF(tmp_with_11__enter);
    tmp_with_11__enter = NULL;
    Py_XDECREF(tmp_with_11__exit);
    tmp_with_11__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_45;
    exception_value = exception_keeper_value_45;
    exception_tb = exception_keeper_tb_45;
    exception_lineno = exception_keeper_lineno_45;

    goto frame_exception_exit_1;
    // End of try:
    try_end_45:;
    CHECK_OBJECT(tmp_with_11__source);
    Py_DECREF(tmp_with_11__source);
    tmp_with_11__source = NULL;
    CHECK_OBJECT(tmp_with_11__enter);
    Py_DECREF(tmp_with_11__enter);
    tmp_with_11__enter = NULL;
    Py_XDECREF(tmp_with_11__exit);
    tmp_with_11__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_called_instance_13;
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_46;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 548;
        tmp_assign_source_122 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_13,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[232], 0)
        );

        if (tmp_assign_source_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_46;
        }
        assert(tmp_with_12__source == NULL);
        tmp_with_12__source = tmp_assign_source_122;
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_called_value_102;
        PyObject *tmp_expression_value_68;
        CHECK_OBJECT(tmp_with_12__source);
        tmp_expression_value_68 = tmp_with_12__source;
        tmp_called_value_102 = LOOKUP_SPECIAL(tstate, tmp_expression_value_68, mod_consts[66]);
        if (tmp_called_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_46;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 548;
        tmp_assign_source_123 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_102);
        Py_DECREF(tmp_called_value_102);
        if (tmp_assign_source_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_46;
        }
        assert(tmp_with_12__enter == NULL);
        tmp_with_12__enter = tmp_assign_source_123;
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_expression_value_69;
        CHECK_OBJECT(tmp_with_12__source);
        tmp_expression_value_69 = tmp_with_12__source;
        tmp_assign_source_124 = LOOKUP_SPECIAL(tstate, tmp_expression_value_69, mod_consts[67]);
        if (tmp_assign_source_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_46;
        }
        assert(tmp_with_12__exit == NULL);
        tmp_with_12__exit = tmp_assign_source_124;
    }
    {
        nuitka_bool tmp_assign_source_125;
        tmp_assign_source_125 = NUITKA_BOOL_TRUE;
        tmp_with_12__indicator = tmp_assign_source_125;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_103;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_call_result_63;
        PyObject *tmp_kw_call_arg_value_0_35;
        PyObject *tmp_kw_call_arg_value_1_35;
        PyObject *tmp_kw_call_arg_value_2_35;
        PyObject *tmp_called_value_104;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_str_arg_value_4;
        PyObject *tmp_iterable_value_4;
        PyObject *tmp_kw_call_dict_value_0_35;
        PyObject *tmp_called_value_105;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_70 == NULL)) {
            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto try_except_handler_48;
        }
        tmp_called_value_103 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[68]);
        if (tmp_called_value_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto try_except_handler_48;
        }
        tmp_kw_call_arg_value_0_35 = mod_consts[222];
        tmp_kw_call_arg_value_1_35 = mod_consts[223];
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[211]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[211]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);

            exception_lineno = 552;

            goto try_except_handler_48;
        }
        tmp_called_value_104 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[224]);
        if (tmp_called_value_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);

            exception_lineno = 552;

            goto try_except_handler_48;
        }
        tmp_kw_call_value_0_4 = mod_consts[233];
        tmp_str_arg_value_4 = mod_consts[226];
        tmp_iterable_value_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[218]);

        if (unlikely(tmp_iterable_value_4 == NULL)) {
            tmp_iterable_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[218]);
        }

        if (tmp_iterable_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);
            Py_DECREF(tmp_called_value_104);

            exception_lineno = 552;

            goto try_except_handler_48;
        }
        tmp_kw_call_value_1_4 = UNICODE_JOIN(tstate, tmp_str_arg_value_4, tmp_iterable_value_4);
        if (tmp_kw_call_value_1_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);
            Py_DECREF(tmp_called_value_104);

            exception_lineno = 552;

            goto try_except_handler_48;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 552;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4};

            tmp_kw_call_arg_value_2_35 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_104, kw_values, mod_consts[227]);
        }

        Py_DECREF(tmp_called_value_104);
        Py_DECREF(tmp_kw_call_value_1_4);
        if (tmp_kw_call_arg_value_2_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);

            exception_lineno = 552;

            goto try_except_handler_48;
        }
        tmp_called_value_105 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_105 == NULL)) {
            tmp_called_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);
            Py_DECREF(tmp_kw_call_arg_value_2_35);

            exception_lineno = 553;

            goto try_except_handler_48;
        }
        tmp_add_expr_left_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[218]);

        if (unlikely(tmp_add_expr_left_4 == NULL)) {
            tmp_add_expr_left_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[218]);
        }

        if (tmp_add_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);
            Py_DECREF(tmp_kw_call_arg_value_2_35);

            exception_lineno = 553;

            goto try_except_handler_48;
        }
        tmp_add_expr_right_4 = MAKE_LIST1(mod_consts[223]);
        tmp_args_element_value_50 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LIST(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_right_4);
        if (tmp_args_element_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);
            Py_DECREF(tmp_kw_call_arg_value_2_35);

            exception_lineno = 553;

            goto try_except_handler_48;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 553;
        tmp_kw_call_dict_value_0_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_105, tmp_args_element_value_50);
        Py_DECREF(tmp_args_element_value_50);
        if (tmp_kw_call_dict_value_0_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);
            Py_DECREF(tmp_kw_call_arg_value_2_35);

            exception_lineno = 553;

            goto try_except_handler_48;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 549;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_35, tmp_kw_call_arg_value_1_35, tmp_kw_call_arg_value_2_35};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_35};
            tmp_call_result_63 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_103, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_103);
        Py_DECREF(tmp_kw_call_arg_value_2_35);
        Py_DECREF(tmp_kw_call_dict_value_0_35);
        if (tmp_call_result_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto try_except_handler_48;
        }
        Py_DECREF(tmp_call_result_63);
    }
    goto try_end_46;
    // Exception handler code:
    try_except_handler_48:;
    exception_keeper_type_46 = exception_type;
    exception_keeper_value_46 = exception_value;
    exception_keeper_tb_46 = exception_tb;
    exception_keeper_lineno_46 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 12.
    exception_preserved_12 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_46 == NULL) {
        exception_keeper_tb_46 = MAKE_TRACEBACK(frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_46);
    } else if (exception_keeper_lineno_46 != 0) {
        exception_keeper_tb_46 = ADD_TRACEBACK(exception_keeper_tb_46, frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_46);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_46, &exception_keeper_value_46, &exception_keeper_tb_46);
    // Tried code:
    {
        bool tmp_condition_result_46;
        PyObject *tmp_cmp_expr_left_35;
        PyObject *tmp_cmp_expr_right_35;
        tmp_cmp_expr_left_35 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_35 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_35, tmp_cmp_expr_right_35);
        assert(!(tmp_res == -1));
        tmp_condition_result_46 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_46 != false) {
            goto branch_yes_46;
        } else {
            goto branch_no_46;
        }
    }
    branch_yes_46:;
    {
        nuitka_bool tmp_assign_source_126;
        tmp_assign_source_126 = NUITKA_BOOL_FALSE;
        tmp_with_12__indicator = tmp_assign_source_126;
    }
    {
        bool tmp_condition_result_47;
        PyObject *tmp_operand_value_12;
        PyObject *tmp_called_value_106;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_args_element_value_53;
        CHECK_OBJECT(tmp_with_12__exit);
        tmp_called_value_106 = tmp_with_12__exit;
        tmp_args_element_value_51 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_52 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_53 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 548;
        {
            PyObject *call_args[] = {tmp_args_element_value_51, tmp_args_element_value_52, tmp_args_element_value_53};
            tmp_operand_value_12 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_106, call_args);
        }

        if (tmp_operand_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_49;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
        Py_DECREF(tmp_operand_value_12);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_49;
        }
        tmp_condition_result_47 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_47 != false) {
            goto branch_yes_47;
        } else {
            goto branch_no_47;
        }
    }
    branch_yes_47:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 548;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_49;
    branch_no_47:;
    goto branch_end_46;
    branch_no_46:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 548;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_49;
    branch_end_46:;
    goto try_end_47;
    // Exception handler code:
    try_except_handler_49:;
    exception_keeper_type_47 = exception_type;
    exception_keeper_value_47 = exception_value;
    exception_keeper_tb_47 = exception_tb;
    exception_keeper_lineno_47 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 12.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_12);

    // Re-raise.
    exception_type = exception_keeper_type_47;
    exception_value = exception_keeper_value_47;
    exception_tb = exception_keeper_tb_47;
    exception_lineno = exception_keeper_lineno_47;

    goto try_except_handler_47;
    // End of try:
    try_end_47:;
    // Restore previous exception id 12.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_12);

    goto try_end_46;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_46:;
    goto try_end_48;
    // Exception handler code:
    try_except_handler_47:;
    exception_keeper_type_48 = exception_type;
    exception_keeper_value_48 = exception_value;
    exception_keeper_tb_48 = exception_tb;
    exception_keeper_lineno_48 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_48;
        nuitka_bool tmp_cmp_expr_left_36;
        nuitka_bool tmp_cmp_expr_right_36;
        assert(tmp_with_12__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_36 = tmp_with_12__indicator;
        tmp_cmp_expr_right_36 = NUITKA_BOOL_TRUE;
        tmp_condition_result_48 = (tmp_cmp_expr_left_36 == tmp_cmp_expr_right_36) ? true : false;
        if (tmp_condition_result_48 != false) {
            goto branch_yes_48;
        } else {
            goto branch_no_48;
        }
    }
    branch_yes_48:;
    {
        PyObject *tmp_called_value_107;
        PyObject *tmp_call_result_64;
        CHECK_OBJECT(tmp_with_12__exit);
        tmp_called_value_107 = tmp_with_12__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 548;
        tmp_call_result_64 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_107, mod_consts[73]);

        if (tmp_call_result_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_48);
            Py_XDECREF(exception_keeper_value_48);
            Py_XDECREF(exception_keeper_tb_48);

            exception_lineno = 548;

            goto try_except_handler_46;
        }
        Py_DECREF(tmp_call_result_64);
    }
    branch_no_48:;
    // Re-raise.
    exception_type = exception_keeper_type_48;
    exception_value = exception_keeper_value_48;
    exception_tb = exception_keeper_tb_48;
    exception_lineno = exception_keeper_lineno_48;

    goto try_except_handler_46;
    // End of try:
    try_end_48:;
    {
        bool tmp_condition_result_49;
        nuitka_bool tmp_cmp_expr_left_37;
        nuitka_bool tmp_cmp_expr_right_37;
        assert(tmp_with_12__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_37 = tmp_with_12__indicator;
        tmp_cmp_expr_right_37 = NUITKA_BOOL_TRUE;
        tmp_condition_result_49 = (tmp_cmp_expr_left_37 == tmp_cmp_expr_right_37) ? true : false;
        if (tmp_condition_result_49 != false) {
            goto branch_yes_49;
        } else {
            goto branch_no_49;
        }
    }
    branch_yes_49:;
    {
        PyObject *tmp_called_value_108;
        PyObject *tmp_call_result_65;
        CHECK_OBJECT(tmp_with_12__exit);
        tmp_called_value_108 = tmp_with_12__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 548;
        tmp_call_result_65 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_108, mod_consts[73]);

        if (tmp_call_result_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_46;
        }
        Py_DECREF(tmp_call_result_65);
    }
    branch_no_49:;
    goto try_end_49;
    // Exception handler code:
    try_except_handler_46:;
    exception_keeper_type_49 = exception_type;
    exception_keeper_value_49 = exception_value;
    exception_keeper_tb_49 = exception_tb;
    exception_keeper_lineno_49 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_12__source);
    tmp_with_12__source = NULL;
    Py_XDECREF(tmp_with_12__enter);
    tmp_with_12__enter = NULL;
    Py_XDECREF(tmp_with_12__exit);
    tmp_with_12__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_49;
    exception_value = exception_keeper_value_49;
    exception_tb = exception_keeper_tb_49;
    exception_lineno = exception_keeper_lineno_49;

    goto frame_exception_exit_1;
    // End of try:
    try_end_49:;
    CHECK_OBJECT(tmp_with_12__source);
    Py_DECREF(tmp_with_12__source);
    tmp_with_12__source = NULL;
    CHECK_OBJECT(tmp_with_12__enter);
    Py_DECREF(tmp_with_12__enter);
    tmp_with_12__enter = NULL;
    Py_XDECREF(tmp_with_12__exit);
    tmp_with_12__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_called_instance_14;
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto try_except_handler_50;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 556;
        tmp_assign_source_127 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_14,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[234], 0)
        );

        if (tmp_assign_source_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto try_except_handler_50;
        }
        assert(tmp_with_13__source == NULL);
        tmp_with_13__source = tmp_assign_source_127;
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_called_value_109;
        PyObject *tmp_expression_value_72;
        CHECK_OBJECT(tmp_with_13__source);
        tmp_expression_value_72 = tmp_with_13__source;
        tmp_called_value_109 = LOOKUP_SPECIAL(tstate, tmp_expression_value_72, mod_consts[66]);
        if (tmp_called_value_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto try_except_handler_50;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 556;
        tmp_assign_source_128 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_109);
        Py_DECREF(tmp_called_value_109);
        if (tmp_assign_source_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto try_except_handler_50;
        }
        assert(tmp_with_13__enter == NULL);
        tmp_with_13__enter = tmp_assign_source_128;
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_expression_value_73;
        CHECK_OBJECT(tmp_with_13__source);
        tmp_expression_value_73 = tmp_with_13__source;
        tmp_assign_source_129 = LOOKUP_SPECIAL(tstate, tmp_expression_value_73, mod_consts[67]);
        if (tmp_assign_source_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto try_except_handler_50;
        }
        assert(tmp_with_13__exit == NULL);
        tmp_with_13__exit = tmp_assign_source_129;
    }
    {
        nuitka_bool tmp_assign_source_130;
        tmp_assign_source_130 = NUITKA_BOOL_TRUE;
        tmp_with_13__indicator = tmp_assign_source_130;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_110;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_call_result_66;
        PyObject *tmp_kw_call_arg_value_0_36;
        PyObject *tmp_kw_call_arg_value_1_36;
        PyObject *tmp_kw_call_arg_value_2_36;
        PyObject *tmp_called_value_111;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_kw_call_value_1_5;
        PyObject *tmp_str_arg_value_5;
        PyObject *tmp_iterable_value_5;
        PyObject *tmp_kw_call_dict_value_0_36;
        PyObject *tmp_called_value_112;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;

            goto try_except_handler_52;
        }
        tmp_called_value_110 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[68]);
        if (tmp_called_value_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;

            goto try_except_handler_52;
        }
        tmp_kw_call_arg_value_0_36 = mod_consts[222];
        tmp_kw_call_arg_value_1_36 = mod_consts[223];
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[211]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[211]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);

            exception_lineno = 560;

            goto try_except_handler_52;
        }
        tmp_called_value_111 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[224]);
        if (tmp_called_value_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);

            exception_lineno = 560;

            goto try_except_handler_52;
        }
        tmp_kw_call_value_0_5 = mod_consts[235];
        tmp_str_arg_value_5 = mod_consts[226];
        tmp_iterable_value_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[220]);

        if (unlikely(tmp_iterable_value_5 == NULL)) {
            tmp_iterable_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[220]);
        }

        if (tmp_iterable_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_111);

            exception_lineno = 560;

            goto try_except_handler_52;
        }
        tmp_kw_call_value_1_5 = UNICODE_JOIN(tstate, tmp_str_arg_value_5, tmp_iterable_value_5);
        if (tmp_kw_call_value_1_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_111);

            exception_lineno = 560;

            goto try_except_handler_52;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 560;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5};

            tmp_kw_call_arg_value_2_36 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_111, kw_values, mod_consts[227]);
        }

        Py_DECREF(tmp_called_value_111);
        Py_DECREF(tmp_kw_call_value_1_5);
        if (tmp_kw_call_arg_value_2_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);

            exception_lineno = 560;

            goto try_except_handler_52;
        }
        tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_112 == NULL)) {
            tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_kw_call_arg_value_2_36);

            exception_lineno = 561;

            goto try_except_handler_52;
        }
        tmp_add_expr_left_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[220]);

        if (unlikely(tmp_add_expr_left_5 == NULL)) {
            tmp_add_expr_left_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[220]);
        }

        if (tmp_add_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_kw_call_arg_value_2_36);

            exception_lineno = 561;

            goto try_except_handler_52;
        }
        tmp_add_expr_right_5 = MAKE_LIST1(mod_consts[223]);
        tmp_args_element_value_54 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LIST(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_right_5);
        if (tmp_args_element_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_kw_call_arg_value_2_36);

            exception_lineno = 561;

            goto try_except_handler_52;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 561;
        tmp_kw_call_dict_value_0_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_112, tmp_args_element_value_54);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_kw_call_dict_value_0_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_kw_call_arg_value_2_36);

            exception_lineno = 561;

            goto try_except_handler_52;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 557;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_36, tmp_kw_call_arg_value_1_36, tmp_kw_call_arg_value_2_36};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_36};
            tmp_call_result_66 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_110, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_110);
        Py_DECREF(tmp_kw_call_arg_value_2_36);
        Py_DECREF(tmp_kw_call_dict_value_0_36);
        if (tmp_call_result_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;

            goto try_except_handler_52;
        }
        Py_DECREF(tmp_call_result_66);
    }
    goto try_end_50;
    // Exception handler code:
    try_except_handler_52:;
    exception_keeper_type_50 = exception_type;
    exception_keeper_value_50 = exception_value;
    exception_keeper_tb_50 = exception_tb;
    exception_keeper_lineno_50 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 13.
    exception_preserved_13 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_50 == NULL) {
        exception_keeper_tb_50 = MAKE_TRACEBACK(frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_50);
    } else if (exception_keeper_lineno_50 != 0) {
        exception_keeper_tb_50 = ADD_TRACEBACK(exception_keeper_tb_50, frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_50);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_50, &exception_keeper_value_50, &exception_keeper_tb_50);
    // Tried code:
    {
        bool tmp_condition_result_50;
        PyObject *tmp_cmp_expr_left_38;
        PyObject *tmp_cmp_expr_right_38;
        tmp_cmp_expr_left_38 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_38 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_38, tmp_cmp_expr_right_38);
        assert(!(tmp_res == -1));
        tmp_condition_result_50 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_50 != false) {
            goto branch_yes_50;
        } else {
            goto branch_no_50;
        }
    }
    branch_yes_50:;
    {
        nuitka_bool tmp_assign_source_131;
        tmp_assign_source_131 = NUITKA_BOOL_FALSE;
        tmp_with_13__indicator = tmp_assign_source_131;
    }
    {
        bool tmp_condition_result_51;
        PyObject *tmp_operand_value_13;
        PyObject *tmp_called_value_113;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_args_element_value_57;
        CHECK_OBJECT(tmp_with_13__exit);
        tmp_called_value_113 = tmp_with_13__exit;
        tmp_args_element_value_55 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_56 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_57 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 556;
        {
            PyObject *call_args[] = {tmp_args_element_value_55, tmp_args_element_value_56, tmp_args_element_value_57};
            tmp_operand_value_13 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_113, call_args);
        }

        if (tmp_operand_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto try_except_handler_53;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
        Py_DECREF(tmp_operand_value_13);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto try_except_handler_53;
        }
        tmp_condition_result_51 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_51 != false) {
            goto branch_yes_51;
        } else {
            goto branch_no_51;
        }
    }
    branch_yes_51:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 556;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_53;
    branch_no_51:;
    goto branch_end_50;
    branch_no_50:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 556;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_53;
    branch_end_50:;
    goto try_end_51;
    // Exception handler code:
    try_except_handler_53:;
    exception_keeper_type_51 = exception_type;
    exception_keeper_value_51 = exception_value;
    exception_keeper_tb_51 = exception_tb;
    exception_keeper_lineno_51 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 13.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_13);

    // Re-raise.
    exception_type = exception_keeper_type_51;
    exception_value = exception_keeper_value_51;
    exception_tb = exception_keeper_tb_51;
    exception_lineno = exception_keeper_lineno_51;

    goto try_except_handler_51;
    // End of try:
    try_end_51:;
    // Restore previous exception id 13.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_13);

    goto try_end_50;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_50:;
    goto try_end_52;
    // Exception handler code:
    try_except_handler_51:;
    exception_keeper_type_52 = exception_type;
    exception_keeper_value_52 = exception_value;
    exception_keeper_tb_52 = exception_tb;
    exception_keeper_lineno_52 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_52;
        nuitka_bool tmp_cmp_expr_left_39;
        nuitka_bool tmp_cmp_expr_right_39;
        assert(tmp_with_13__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_39 = tmp_with_13__indicator;
        tmp_cmp_expr_right_39 = NUITKA_BOOL_TRUE;
        tmp_condition_result_52 = (tmp_cmp_expr_left_39 == tmp_cmp_expr_right_39) ? true : false;
        if (tmp_condition_result_52 != false) {
            goto branch_yes_52;
        } else {
            goto branch_no_52;
        }
    }
    branch_yes_52:;
    {
        PyObject *tmp_called_value_114;
        PyObject *tmp_call_result_67;
        CHECK_OBJECT(tmp_with_13__exit);
        tmp_called_value_114 = tmp_with_13__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 556;
        tmp_call_result_67 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_114, mod_consts[73]);

        if (tmp_call_result_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_52);
            Py_XDECREF(exception_keeper_value_52);
            Py_XDECREF(exception_keeper_tb_52);

            exception_lineno = 556;

            goto try_except_handler_50;
        }
        Py_DECREF(tmp_call_result_67);
    }
    branch_no_52:;
    // Re-raise.
    exception_type = exception_keeper_type_52;
    exception_value = exception_keeper_value_52;
    exception_tb = exception_keeper_tb_52;
    exception_lineno = exception_keeper_lineno_52;

    goto try_except_handler_50;
    // End of try:
    try_end_52:;
    {
        bool tmp_condition_result_53;
        nuitka_bool tmp_cmp_expr_left_40;
        nuitka_bool tmp_cmp_expr_right_40;
        assert(tmp_with_13__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_40 = tmp_with_13__indicator;
        tmp_cmp_expr_right_40 = NUITKA_BOOL_TRUE;
        tmp_condition_result_53 = (tmp_cmp_expr_left_40 == tmp_cmp_expr_right_40) ? true : false;
        if (tmp_condition_result_53 != false) {
            goto branch_yes_53;
        } else {
            goto branch_no_53;
        }
    }
    branch_yes_53:;
    {
        PyObject *tmp_called_value_115;
        PyObject *tmp_call_result_68;
        CHECK_OBJECT(tmp_with_13__exit);
        tmp_called_value_115 = tmp_with_13__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 556;
        tmp_call_result_68 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_115, mod_consts[73]);

        if (tmp_call_result_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto try_except_handler_50;
        }
        Py_DECREF(tmp_call_result_68);
    }
    branch_no_53:;
    goto try_end_53;
    // Exception handler code:
    try_except_handler_50:;
    exception_keeper_type_53 = exception_type;
    exception_keeper_value_53 = exception_value;
    exception_keeper_tb_53 = exception_tb;
    exception_keeper_lineno_53 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_13__source);
    tmp_with_13__source = NULL;
    Py_XDECREF(tmp_with_13__enter);
    tmp_with_13__enter = NULL;
    Py_XDECREF(tmp_with_13__exit);
    tmp_with_13__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_53;
    exception_value = exception_keeper_value_53;
    exception_tb = exception_keeper_tb_53;
    exception_lineno = exception_keeper_lineno_53;

    goto frame_exception_exit_1;
    // End of try:
    try_end_53:;
    CHECK_OBJECT(tmp_with_13__source);
    Py_DECREF(tmp_with_13__source);
    tmp_with_13__source = NULL;
    CHECK_OBJECT(tmp_with_13__enter);
    Py_DECREF(tmp_with_13__enter);
    tmp_with_13__enter = NULL;
    Py_XDECREF(tmp_with_13__exit);
    tmp_with_13__exit = NULL;
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = mod_consts[236];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = MAKE_LIST1(mod_consts[214]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = MAKE_LIST2(mod_consts[214],mod_consts[238]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = MAKE_LIST1(mod_consts[217]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_135);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_called_instance_15;
        tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_15 == NULL)) {
            tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;

            goto try_except_handler_54;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 576;
        tmp_assign_source_136 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_15,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[228], 0)
        );

        if (tmp_assign_source_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;

            goto try_except_handler_54;
        }
        assert(tmp_with_14__source == NULL);
        tmp_with_14__source = tmp_assign_source_136;
    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_called_value_116;
        PyObject *tmp_expression_value_76;
        CHECK_OBJECT(tmp_with_14__source);
        tmp_expression_value_76 = tmp_with_14__source;
        tmp_called_value_116 = LOOKUP_SPECIAL(tstate, tmp_expression_value_76, mod_consts[66]);
        if (tmp_called_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;

            goto try_except_handler_54;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 576;
        tmp_assign_source_137 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_116);
        Py_DECREF(tmp_called_value_116);
        if (tmp_assign_source_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;

            goto try_except_handler_54;
        }
        assert(tmp_with_14__enter == NULL);
        tmp_with_14__enter = tmp_assign_source_137;
    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_expression_value_77;
        CHECK_OBJECT(tmp_with_14__source);
        tmp_expression_value_77 = tmp_with_14__source;
        tmp_assign_source_138 = LOOKUP_SPECIAL(tstate, tmp_expression_value_77, mod_consts[67]);
        if (tmp_assign_source_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;

            goto try_except_handler_54;
        }
        assert(tmp_with_14__exit == NULL);
        tmp_with_14__exit = tmp_assign_source_138;
    }
    {
        nuitka_bool tmp_assign_source_139;
        tmp_assign_source_139 = NUITKA_BOOL_TRUE;
        tmp_with_14__indicator = tmp_assign_source_139;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_117;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_call_result_69;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_78 == NULL)) {
            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_56;
        }
        tmp_called_value_117 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[68]);
        if (tmp_called_value_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_56;
        }
        tmp_tuple_element_1 = mod_consts[239];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_called_value_118;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_kw_call_value_0_6;
            PyObject *tmp_kw_call_value_1_6;
            PyObject *tmp_str_arg_value_6;
            PyObject *tmp_iterable_value_6;
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[223];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[237]);

            if (unlikely(tmp_expression_value_79 == NULL)) {
                tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[237]);
            }

            if (tmp_expression_value_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 580;

                goto tuple_build_exception_1;
            }
            tmp_called_value_118 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[224]);
            if (tmp_called_value_118 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 580;

                goto tuple_build_exception_1;
            }
            tmp_kw_call_value_0_6 = mod_consts[229];
            tmp_str_arg_value_6 = mod_consts[226];
            tmp_iterable_value_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[215]);

            if (unlikely(tmp_iterable_value_6 == NULL)) {
                tmp_iterable_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[215]);
            }

            if (tmp_iterable_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_118);

                exception_lineno = 580;

                goto tuple_build_exception_1;
            }
            tmp_kw_call_value_1_6 = UNICODE_JOIN(tstate, tmp_str_arg_value_6, tmp_iterable_value_6);
            if (tmp_kw_call_value_1_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_118);

                exception_lineno = 580;

                goto tuple_build_exception_1;
            }
            frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 580;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_6};

                tmp_tuple_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_118, kw_values, mod_consts[227]);
            }

            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_kw_call_value_1_6);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 580;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_value_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_117);
        Py_DECREF(tmp_args_value_1);
        goto try_except_handler_56;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[240]);
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 577;
        tmp_call_result_69 = CALL_FUNCTION(tstate, tmp_called_value_117, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_117);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_56;
        }
        Py_DECREF(tmp_call_result_69);
    }
    goto try_end_54;
    // Exception handler code:
    try_except_handler_56:;
    exception_keeper_type_54 = exception_type;
    exception_keeper_value_54 = exception_value;
    exception_keeper_tb_54 = exception_tb;
    exception_keeper_lineno_54 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 14.
    exception_preserved_14 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_54 == NULL) {
        exception_keeper_tb_54 = MAKE_TRACEBACK(frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_54);
    } else if (exception_keeper_lineno_54 != 0) {
        exception_keeper_tb_54 = ADD_TRACEBACK(exception_keeper_tb_54, frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_54);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_54, &exception_keeper_value_54, &exception_keeper_tb_54);
    // Tried code:
    {
        bool tmp_condition_result_54;
        PyObject *tmp_cmp_expr_left_41;
        PyObject *tmp_cmp_expr_right_41;
        tmp_cmp_expr_left_41 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_41 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_41, tmp_cmp_expr_right_41);
        assert(!(tmp_res == -1));
        tmp_condition_result_54 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_54 != false) {
            goto branch_yes_54;
        } else {
            goto branch_no_54;
        }
    }
    branch_yes_54:;
    {
        nuitka_bool tmp_assign_source_140;
        tmp_assign_source_140 = NUITKA_BOOL_FALSE;
        tmp_with_14__indicator = tmp_assign_source_140;
    }
    {
        bool tmp_condition_result_55;
        PyObject *tmp_operand_value_14;
        PyObject *tmp_called_value_119;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        CHECK_OBJECT(tmp_with_14__exit);
        tmp_called_value_119 = tmp_with_14__exit;
        tmp_args_element_value_58 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_59 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_60 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 576;
        {
            PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60};
            tmp_operand_value_14 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_119, call_args);
        }

        if (tmp_operand_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;

            goto try_except_handler_57;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
        Py_DECREF(tmp_operand_value_14);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;

            goto try_except_handler_57;
        }
        tmp_condition_result_55 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_55 != false) {
            goto branch_yes_55;
        } else {
            goto branch_no_55;
        }
    }
    branch_yes_55:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 576;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_57;
    branch_no_55:;
    goto branch_end_54;
    branch_no_54:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 576;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_57;
    branch_end_54:;
    goto try_end_55;
    // Exception handler code:
    try_except_handler_57:;
    exception_keeper_type_55 = exception_type;
    exception_keeper_value_55 = exception_value;
    exception_keeper_tb_55 = exception_tb;
    exception_keeper_lineno_55 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 14.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_14);

    // Re-raise.
    exception_type = exception_keeper_type_55;
    exception_value = exception_keeper_value_55;
    exception_tb = exception_keeper_tb_55;
    exception_lineno = exception_keeper_lineno_55;

    goto try_except_handler_55;
    // End of try:
    try_end_55:;
    // Restore previous exception id 14.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_14);

    goto try_end_54;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_54:;
    goto try_end_56;
    // Exception handler code:
    try_except_handler_55:;
    exception_keeper_type_56 = exception_type;
    exception_keeper_value_56 = exception_value;
    exception_keeper_tb_56 = exception_tb;
    exception_keeper_lineno_56 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_56;
        nuitka_bool tmp_cmp_expr_left_42;
        nuitka_bool tmp_cmp_expr_right_42;
        assert(tmp_with_14__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_42 = tmp_with_14__indicator;
        tmp_cmp_expr_right_42 = NUITKA_BOOL_TRUE;
        tmp_condition_result_56 = (tmp_cmp_expr_left_42 == tmp_cmp_expr_right_42) ? true : false;
        if (tmp_condition_result_56 != false) {
            goto branch_yes_56;
        } else {
            goto branch_no_56;
        }
    }
    branch_yes_56:;
    {
        PyObject *tmp_called_value_120;
        PyObject *tmp_call_result_70;
        CHECK_OBJECT(tmp_with_14__exit);
        tmp_called_value_120 = tmp_with_14__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 576;
        tmp_call_result_70 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_120, mod_consts[73]);

        if (tmp_call_result_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_56);
            Py_XDECREF(exception_keeper_value_56);
            Py_XDECREF(exception_keeper_tb_56);

            exception_lineno = 576;

            goto try_except_handler_54;
        }
        Py_DECREF(tmp_call_result_70);
    }
    branch_no_56:;
    // Re-raise.
    exception_type = exception_keeper_type_56;
    exception_value = exception_keeper_value_56;
    exception_tb = exception_keeper_tb_56;
    exception_lineno = exception_keeper_lineno_56;

    goto try_except_handler_54;
    // End of try:
    try_end_56:;
    {
        bool tmp_condition_result_57;
        nuitka_bool tmp_cmp_expr_left_43;
        nuitka_bool tmp_cmp_expr_right_43;
        assert(tmp_with_14__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_43 = tmp_with_14__indicator;
        tmp_cmp_expr_right_43 = NUITKA_BOOL_TRUE;
        tmp_condition_result_57 = (tmp_cmp_expr_left_43 == tmp_cmp_expr_right_43) ? true : false;
        if (tmp_condition_result_57 != false) {
            goto branch_yes_57;
        } else {
            goto branch_no_57;
        }
    }
    branch_yes_57:;
    {
        PyObject *tmp_called_value_121;
        PyObject *tmp_call_result_71;
        CHECK_OBJECT(tmp_with_14__exit);
        tmp_called_value_121 = tmp_with_14__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 576;
        tmp_call_result_71 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_121, mod_consts[73]);

        if (tmp_call_result_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;

            goto try_except_handler_54;
        }
        Py_DECREF(tmp_call_result_71);
    }
    branch_no_57:;
    goto try_end_57;
    // Exception handler code:
    try_except_handler_54:;
    exception_keeper_type_57 = exception_type;
    exception_keeper_value_57 = exception_value;
    exception_keeper_tb_57 = exception_tb;
    exception_keeper_lineno_57 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_14__source);
    tmp_with_14__source = NULL;
    Py_XDECREF(tmp_with_14__enter);
    tmp_with_14__enter = NULL;
    Py_XDECREF(tmp_with_14__exit);
    tmp_with_14__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_57;
    exception_value = exception_keeper_value_57;
    exception_tb = exception_keeper_tb_57;
    exception_lineno = exception_keeper_lineno_57;

    goto frame_exception_exit_1;
    // End of try:
    try_end_57:;
    CHECK_OBJECT(tmp_with_14__source);
    Py_DECREF(tmp_with_14__source);
    tmp_with_14__source = NULL;
    CHECK_OBJECT(tmp_with_14__enter);
    Py_DECREF(tmp_with_14__enter);
    tmp_with_14__enter = NULL;
    Py_XDECREF(tmp_with_14__exit);
    tmp_with_14__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_called_instance_16;
        tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_16 == NULL)) {
            tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;

            goto try_except_handler_58;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 585;
        tmp_assign_source_141 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_16,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[230], 0)
        );

        if (tmp_assign_source_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;

            goto try_except_handler_58;
        }
        assert(tmp_with_15__source == NULL);
        tmp_with_15__source = tmp_assign_source_141;
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_called_value_122;
        PyObject *tmp_expression_value_80;
        CHECK_OBJECT(tmp_with_15__source);
        tmp_expression_value_80 = tmp_with_15__source;
        tmp_called_value_122 = LOOKUP_SPECIAL(tstate, tmp_expression_value_80, mod_consts[66]);
        if (tmp_called_value_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;

            goto try_except_handler_58;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 585;
        tmp_assign_source_142 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_122);
        Py_DECREF(tmp_called_value_122);
        if (tmp_assign_source_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;

            goto try_except_handler_58;
        }
        assert(tmp_with_15__enter == NULL);
        tmp_with_15__enter = tmp_assign_source_142;
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_expression_value_81;
        CHECK_OBJECT(tmp_with_15__source);
        tmp_expression_value_81 = tmp_with_15__source;
        tmp_assign_source_143 = LOOKUP_SPECIAL(tstate, tmp_expression_value_81, mod_consts[67]);
        if (tmp_assign_source_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;

            goto try_except_handler_58;
        }
        assert(tmp_with_15__exit == NULL);
        tmp_with_15__exit = tmp_assign_source_143;
    }
    {
        nuitka_bool tmp_assign_source_144;
        tmp_assign_source_144 = NUITKA_BOOL_TRUE;
        tmp_with_15__indicator = tmp_assign_source_144;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_123;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_call_result_72;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_82 == NULL)) {
            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;

            goto try_except_handler_60;
        }
        tmp_called_value_123 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[68]);
        if (tmp_called_value_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;

            goto try_except_handler_60;
        }
        tmp_tuple_element_2 = mod_consts[239];
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_called_value_124;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_kw_call_value_0_7;
            PyObject *tmp_kw_call_value_1_7;
            PyObject *tmp_str_arg_value_7;
            PyObject *tmp_iterable_value_7;
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[223];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[237]);

            if (unlikely(tmp_expression_value_83 == NULL)) {
                tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[237]);
            }

            if (tmp_expression_value_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 589;

                goto tuple_build_exception_2;
            }
            tmp_called_value_124 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[224]);
            if (tmp_called_value_124 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 589;

                goto tuple_build_exception_2;
            }
            tmp_kw_call_value_0_7 = mod_consts[231];
            tmp_str_arg_value_7 = mod_consts[226];
            tmp_iterable_value_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[216]);

            if (unlikely(tmp_iterable_value_7 == NULL)) {
                tmp_iterable_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[216]);
            }

            if (tmp_iterable_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_124);

                exception_lineno = 589;

                goto tuple_build_exception_2;
            }
            tmp_kw_call_value_1_7 = UNICODE_JOIN(tstate, tmp_str_arg_value_7, tmp_iterable_value_7);
            if (tmp_kw_call_value_1_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_124);

                exception_lineno = 589;

                goto tuple_build_exception_2;
            }
            frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 589;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_7};

                tmp_tuple_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_124, kw_values, mod_consts[227]);
            }

            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_kw_call_value_1_7);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 589;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_args_value_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_123);
        Py_DECREF(tmp_args_value_2);
        goto try_except_handler_60;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[240]);
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 586;
        tmp_call_result_72 = CALL_FUNCTION(tstate, tmp_called_value_123, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_123);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_call_result_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;

            goto try_except_handler_60;
        }
        Py_DECREF(tmp_call_result_72);
    }
    goto try_end_58;
    // Exception handler code:
    try_except_handler_60:;
    exception_keeper_type_58 = exception_type;
    exception_keeper_value_58 = exception_value;
    exception_keeper_tb_58 = exception_tb;
    exception_keeper_lineno_58 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 15.
    exception_preserved_15 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_58 == NULL) {
        exception_keeper_tb_58 = MAKE_TRACEBACK(frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_58);
    } else if (exception_keeper_lineno_58 != 0) {
        exception_keeper_tb_58 = ADD_TRACEBACK(exception_keeper_tb_58, frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_58);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_58, &exception_keeper_value_58, &exception_keeper_tb_58);
    // Tried code:
    {
        bool tmp_condition_result_58;
        PyObject *tmp_cmp_expr_left_44;
        PyObject *tmp_cmp_expr_right_44;
        tmp_cmp_expr_left_44 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_44 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_44, tmp_cmp_expr_right_44);
        assert(!(tmp_res == -1));
        tmp_condition_result_58 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_58 != false) {
            goto branch_yes_58;
        } else {
            goto branch_no_58;
        }
    }
    branch_yes_58:;
    {
        nuitka_bool tmp_assign_source_145;
        tmp_assign_source_145 = NUITKA_BOOL_FALSE;
        tmp_with_15__indicator = tmp_assign_source_145;
    }
    {
        bool tmp_condition_result_59;
        PyObject *tmp_operand_value_15;
        PyObject *tmp_called_value_125;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_args_element_value_63;
        CHECK_OBJECT(tmp_with_15__exit);
        tmp_called_value_125 = tmp_with_15__exit;
        tmp_args_element_value_61 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_62 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_63 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 585;
        {
            PyObject *call_args[] = {tmp_args_element_value_61, tmp_args_element_value_62, tmp_args_element_value_63};
            tmp_operand_value_15 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_125, call_args);
        }

        if (tmp_operand_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;

            goto try_except_handler_61;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
        Py_DECREF(tmp_operand_value_15);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;

            goto try_except_handler_61;
        }
        tmp_condition_result_59 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_59 != false) {
            goto branch_yes_59;
        } else {
            goto branch_no_59;
        }
    }
    branch_yes_59:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 585;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_61;
    branch_no_59:;
    goto branch_end_58;
    branch_no_58:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 585;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_61;
    branch_end_58:;
    goto try_end_59;
    // Exception handler code:
    try_except_handler_61:;
    exception_keeper_type_59 = exception_type;
    exception_keeper_value_59 = exception_value;
    exception_keeper_tb_59 = exception_tb;
    exception_keeper_lineno_59 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 15.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_15);

    // Re-raise.
    exception_type = exception_keeper_type_59;
    exception_value = exception_keeper_value_59;
    exception_tb = exception_keeper_tb_59;
    exception_lineno = exception_keeper_lineno_59;

    goto try_except_handler_59;
    // End of try:
    try_end_59:;
    // Restore previous exception id 15.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_15);

    goto try_end_58;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_58:;
    goto try_end_60;
    // Exception handler code:
    try_except_handler_59:;
    exception_keeper_type_60 = exception_type;
    exception_keeper_value_60 = exception_value;
    exception_keeper_tb_60 = exception_tb;
    exception_keeper_lineno_60 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_60;
        nuitka_bool tmp_cmp_expr_left_45;
        nuitka_bool tmp_cmp_expr_right_45;
        assert(tmp_with_15__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_45 = tmp_with_15__indicator;
        tmp_cmp_expr_right_45 = NUITKA_BOOL_TRUE;
        tmp_condition_result_60 = (tmp_cmp_expr_left_45 == tmp_cmp_expr_right_45) ? true : false;
        if (tmp_condition_result_60 != false) {
            goto branch_yes_60;
        } else {
            goto branch_no_60;
        }
    }
    branch_yes_60:;
    {
        PyObject *tmp_called_value_126;
        PyObject *tmp_call_result_73;
        CHECK_OBJECT(tmp_with_15__exit);
        tmp_called_value_126 = tmp_with_15__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 585;
        tmp_call_result_73 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_126, mod_consts[73]);

        if (tmp_call_result_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_60);
            Py_XDECREF(exception_keeper_value_60);
            Py_XDECREF(exception_keeper_tb_60);

            exception_lineno = 585;

            goto try_except_handler_58;
        }
        Py_DECREF(tmp_call_result_73);
    }
    branch_no_60:;
    // Re-raise.
    exception_type = exception_keeper_type_60;
    exception_value = exception_keeper_value_60;
    exception_tb = exception_keeper_tb_60;
    exception_lineno = exception_keeper_lineno_60;

    goto try_except_handler_58;
    // End of try:
    try_end_60:;
    {
        bool tmp_condition_result_61;
        nuitka_bool tmp_cmp_expr_left_46;
        nuitka_bool tmp_cmp_expr_right_46;
        assert(tmp_with_15__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_46 = tmp_with_15__indicator;
        tmp_cmp_expr_right_46 = NUITKA_BOOL_TRUE;
        tmp_condition_result_61 = (tmp_cmp_expr_left_46 == tmp_cmp_expr_right_46) ? true : false;
        if (tmp_condition_result_61 != false) {
            goto branch_yes_61;
        } else {
            goto branch_no_61;
        }
    }
    branch_yes_61:;
    {
        PyObject *tmp_called_value_127;
        PyObject *tmp_call_result_74;
        CHECK_OBJECT(tmp_with_15__exit);
        tmp_called_value_127 = tmp_with_15__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 585;
        tmp_call_result_74 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_127, mod_consts[73]);

        if (tmp_call_result_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;

            goto try_except_handler_58;
        }
        Py_DECREF(tmp_call_result_74);
    }
    branch_no_61:;
    goto try_end_61;
    // Exception handler code:
    try_except_handler_58:;
    exception_keeper_type_61 = exception_type;
    exception_keeper_value_61 = exception_value;
    exception_keeper_tb_61 = exception_tb;
    exception_keeper_lineno_61 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_15__source);
    tmp_with_15__source = NULL;
    Py_XDECREF(tmp_with_15__enter);
    tmp_with_15__enter = NULL;
    Py_XDECREF(tmp_with_15__exit);
    tmp_with_15__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_61;
    exception_value = exception_keeper_value_61;
    exception_tb = exception_keeper_tb_61;
    exception_lineno = exception_keeper_lineno_61;

    goto frame_exception_exit_1;
    // End of try:
    try_end_61:;
    CHECK_OBJECT(tmp_with_15__source);
    Py_DECREF(tmp_with_15__source);
    tmp_with_15__source = NULL;
    CHECK_OBJECT(tmp_with_15__enter);
    Py_DECREF(tmp_with_15__enter);
    tmp_with_15__enter = NULL;
    Py_XDECREF(tmp_with_15__exit);
    tmp_with_15__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_called_instance_17;
        tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_17 == NULL)) {
            tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_62;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 594;
        tmp_assign_source_146 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_17,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[232], 0)
        );

        if (tmp_assign_source_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_62;
        }
        assert(tmp_with_16__source == NULL);
        tmp_with_16__source = tmp_assign_source_146;
    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_called_value_128;
        PyObject *tmp_expression_value_84;
        CHECK_OBJECT(tmp_with_16__source);
        tmp_expression_value_84 = tmp_with_16__source;
        tmp_called_value_128 = LOOKUP_SPECIAL(tstate, tmp_expression_value_84, mod_consts[66]);
        if (tmp_called_value_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_62;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 594;
        tmp_assign_source_147 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_128);
        Py_DECREF(tmp_called_value_128);
        if (tmp_assign_source_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_62;
        }
        assert(tmp_with_16__enter == NULL);
        tmp_with_16__enter = tmp_assign_source_147;
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_expression_value_85;
        CHECK_OBJECT(tmp_with_16__source);
        tmp_expression_value_85 = tmp_with_16__source;
        tmp_assign_source_148 = LOOKUP_SPECIAL(tstate, tmp_expression_value_85, mod_consts[67]);
        if (tmp_assign_source_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_62;
        }
        assert(tmp_with_16__exit == NULL);
        tmp_with_16__exit = tmp_assign_source_148;
    }
    {
        nuitka_bool tmp_assign_source_149;
        tmp_assign_source_149 = NUITKA_BOOL_TRUE;
        tmp_with_16__indicator = tmp_assign_source_149;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_129;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_call_result_75;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_3;
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;

            goto try_except_handler_64;
        }
        tmp_called_value_129 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[68]);
        if (tmp_called_value_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;

            goto try_except_handler_64;
        }
        tmp_tuple_element_3 = mod_consts[239];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_called_value_130;
            PyObject *tmp_expression_value_87;
            PyObject *tmp_kw_call_value_0_8;
            PyObject *tmp_kw_call_value_1_8;
            PyObject *tmp_str_arg_value_8;
            PyObject *tmp_iterable_value_8;
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[223];
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_3);
            tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[237]);

            if (unlikely(tmp_expression_value_87 == NULL)) {
                tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[237]);
            }

            if (tmp_expression_value_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 598;

                goto tuple_build_exception_3;
            }
            tmp_called_value_130 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[224]);
            if (tmp_called_value_130 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 598;

                goto tuple_build_exception_3;
            }
            tmp_kw_call_value_0_8 = mod_consts[233];
            tmp_str_arg_value_8 = mod_consts[226];
            tmp_iterable_value_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[218]);

            if (unlikely(tmp_iterable_value_8 == NULL)) {
                tmp_iterable_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[218]);
            }

            if (tmp_iterable_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_130);

                exception_lineno = 598;

                goto tuple_build_exception_3;
            }
            tmp_kw_call_value_1_8 = UNICODE_JOIN(tstate, tmp_str_arg_value_8, tmp_iterable_value_8);
            if (tmp_kw_call_value_1_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_130);

                exception_lineno = 598;

                goto tuple_build_exception_3;
            }
            frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 598;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_8};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_130, kw_values, mod_consts[227]);
            }

            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_kw_call_value_1_8);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 598;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_args_value_3, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_129);
        Py_DECREF(tmp_args_value_3);
        goto try_except_handler_64;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_kwargs_value_3 = DICT_COPY(mod_consts[240]);
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 595;
        tmp_call_result_75 = CALL_FUNCTION(tstate, tmp_called_value_129, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_129);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_call_result_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;

            goto try_except_handler_64;
        }
        Py_DECREF(tmp_call_result_75);
    }
    goto try_end_62;
    // Exception handler code:
    try_except_handler_64:;
    exception_keeper_type_62 = exception_type;
    exception_keeper_value_62 = exception_value;
    exception_keeper_tb_62 = exception_tb;
    exception_keeper_lineno_62 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 16.
    exception_preserved_16 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_62 == NULL) {
        exception_keeper_tb_62 = MAKE_TRACEBACK(frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_62);
    } else if (exception_keeper_lineno_62 != 0) {
        exception_keeper_tb_62 = ADD_TRACEBACK(exception_keeper_tb_62, frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_62);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_62, &exception_keeper_value_62, &exception_keeper_tb_62);
    // Tried code:
    {
        bool tmp_condition_result_62;
        PyObject *tmp_cmp_expr_left_47;
        PyObject *tmp_cmp_expr_right_47;
        tmp_cmp_expr_left_47 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_47 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_47, tmp_cmp_expr_right_47);
        assert(!(tmp_res == -1));
        tmp_condition_result_62 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_62 != false) {
            goto branch_yes_62;
        } else {
            goto branch_no_62;
        }
    }
    branch_yes_62:;
    {
        nuitka_bool tmp_assign_source_150;
        tmp_assign_source_150 = NUITKA_BOOL_FALSE;
        tmp_with_16__indicator = tmp_assign_source_150;
    }
    {
        bool tmp_condition_result_63;
        PyObject *tmp_operand_value_16;
        PyObject *tmp_called_value_131;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_args_element_value_66;
        CHECK_OBJECT(tmp_with_16__exit);
        tmp_called_value_131 = tmp_with_16__exit;
        tmp_args_element_value_64 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_65 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_66 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 594;
        {
            PyObject *call_args[] = {tmp_args_element_value_64, tmp_args_element_value_65, tmp_args_element_value_66};
            tmp_operand_value_16 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_131, call_args);
        }

        if (tmp_operand_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_65;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
        Py_DECREF(tmp_operand_value_16);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_65;
        }
        tmp_condition_result_63 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_63 != false) {
            goto branch_yes_63;
        } else {
            goto branch_no_63;
        }
    }
    branch_yes_63:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 594;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_65;
    branch_no_63:;
    goto branch_end_62;
    branch_no_62:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 594;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_65;
    branch_end_62:;
    goto try_end_63;
    // Exception handler code:
    try_except_handler_65:;
    exception_keeper_type_63 = exception_type;
    exception_keeper_value_63 = exception_value;
    exception_keeper_tb_63 = exception_tb;
    exception_keeper_lineno_63 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 16.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_16);

    // Re-raise.
    exception_type = exception_keeper_type_63;
    exception_value = exception_keeper_value_63;
    exception_tb = exception_keeper_tb_63;
    exception_lineno = exception_keeper_lineno_63;

    goto try_except_handler_63;
    // End of try:
    try_end_63:;
    // Restore previous exception id 16.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_16);

    goto try_end_62;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_62:;
    goto try_end_64;
    // Exception handler code:
    try_except_handler_63:;
    exception_keeper_type_64 = exception_type;
    exception_keeper_value_64 = exception_value;
    exception_keeper_tb_64 = exception_tb;
    exception_keeper_lineno_64 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_64;
        nuitka_bool tmp_cmp_expr_left_48;
        nuitka_bool tmp_cmp_expr_right_48;
        assert(tmp_with_16__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_48 = tmp_with_16__indicator;
        tmp_cmp_expr_right_48 = NUITKA_BOOL_TRUE;
        tmp_condition_result_64 = (tmp_cmp_expr_left_48 == tmp_cmp_expr_right_48) ? true : false;
        if (tmp_condition_result_64 != false) {
            goto branch_yes_64;
        } else {
            goto branch_no_64;
        }
    }
    branch_yes_64:;
    {
        PyObject *tmp_called_value_132;
        PyObject *tmp_call_result_76;
        CHECK_OBJECT(tmp_with_16__exit);
        tmp_called_value_132 = tmp_with_16__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 594;
        tmp_call_result_76 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_132, mod_consts[73]);

        if (tmp_call_result_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_64);
            Py_XDECREF(exception_keeper_value_64);
            Py_XDECREF(exception_keeper_tb_64);

            exception_lineno = 594;

            goto try_except_handler_62;
        }
        Py_DECREF(tmp_call_result_76);
    }
    branch_no_64:;
    // Re-raise.
    exception_type = exception_keeper_type_64;
    exception_value = exception_keeper_value_64;
    exception_tb = exception_keeper_tb_64;
    exception_lineno = exception_keeper_lineno_64;

    goto try_except_handler_62;
    // End of try:
    try_end_64:;
    {
        bool tmp_condition_result_65;
        nuitka_bool tmp_cmp_expr_left_49;
        nuitka_bool tmp_cmp_expr_right_49;
        assert(tmp_with_16__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_49 = tmp_with_16__indicator;
        tmp_cmp_expr_right_49 = NUITKA_BOOL_TRUE;
        tmp_condition_result_65 = (tmp_cmp_expr_left_49 == tmp_cmp_expr_right_49) ? true : false;
        if (tmp_condition_result_65 != false) {
            goto branch_yes_65;
        } else {
            goto branch_no_65;
        }
    }
    branch_yes_65:;
    {
        PyObject *tmp_called_value_133;
        PyObject *tmp_call_result_77;
        CHECK_OBJECT(tmp_with_16__exit);
        tmp_called_value_133 = tmp_with_16__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 594;
        tmp_call_result_77 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_133, mod_consts[73]);

        if (tmp_call_result_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_62;
        }
        Py_DECREF(tmp_call_result_77);
    }
    branch_no_65:;
    goto try_end_65;
    // Exception handler code:
    try_except_handler_62:;
    exception_keeper_type_65 = exception_type;
    exception_keeper_value_65 = exception_value;
    exception_keeper_tb_65 = exception_tb;
    exception_keeper_lineno_65 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_16__source);
    tmp_with_16__source = NULL;
    Py_XDECREF(tmp_with_16__enter);
    tmp_with_16__enter = NULL;
    Py_XDECREF(tmp_with_16__exit);
    tmp_with_16__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_65;
    exception_value = exception_keeper_value_65;
    exception_tb = exception_keeper_tb_65;
    exception_lineno = exception_keeper_lineno_65;

    goto frame_exception_exit_1;
    // End of try:
    try_end_65:;
    CHECK_OBJECT(tmp_with_16__source);
    Py_DECREF(tmp_with_16__source);
    tmp_with_16__source = NULL;
    CHECK_OBJECT(tmp_with_16__enter);
    Py_DECREF(tmp_with_16__enter);
    tmp_with_16__enter = NULL;
    Py_XDECREF(tmp_with_16__exit);
    tmp_with_16__exit = NULL;
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = mod_consts[241];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_151);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_called_instance_18;
        tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_18 == NULL)) {
            tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_66;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 610;
        tmp_assign_source_152 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_18,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[243], 0)
        );

        if (tmp_assign_source_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_66;
        }
        assert(tmp_with_17__source == NULL);
        tmp_with_17__source = tmp_assign_source_152;
    }
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_called_value_134;
        PyObject *tmp_expression_value_88;
        CHECK_OBJECT(tmp_with_17__source);
        tmp_expression_value_88 = tmp_with_17__source;
        tmp_called_value_134 = LOOKUP_SPECIAL(tstate, tmp_expression_value_88, mod_consts[66]);
        if (tmp_called_value_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_66;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 610;
        tmp_assign_source_153 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_134);
        Py_DECREF(tmp_called_value_134);
        if (tmp_assign_source_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_66;
        }
        assert(tmp_with_17__enter == NULL);
        tmp_with_17__enter = tmp_assign_source_153;
    }
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_expression_value_89;
        CHECK_OBJECT(tmp_with_17__source);
        tmp_expression_value_89 = tmp_with_17__source;
        tmp_assign_source_154 = LOOKUP_SPECIAL(tstate, tmp_expression_value_89, mod_consts[67]);
        if (tmp_assign_source_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_66;
        }
        assert(tmp_with_17__exit == NULL);
        tmp_with_17__exit = tmp_assign_source_154;
    }
    {
        nuitka_bool tmp_assign_source_155;
        tmp_assign_source_155 = NUITKA_BOOL_TRUE;
        tmp_with_17__indicator = tmp_assign_source_155;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_135;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_call_result_78;
        PyObject *tmp_kw_call_arg_value_0_37;
        PyObject *tmp_kw_call_arg_value_1_37;
        PyObject *tmp_kw_call_arg_value_2_37;
        PyObject *tmp_kw_call_dict_value_0_37;
        PyObject *tmp_called_value_136;
        PyObject *tmp_call_arg_element_9;
        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_90 == NULL)) {
            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;

            goto try_except_handler_68;
        }
        tmp_called_value_135 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[68]);
        if (tmp_called_value_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;

            goto try_except_handler_68;
        }
        tmp_kw_call_arg_value_0_37 = mod_consts[244];
        tmp_kw_call_arg_value_1_37 = mod_consts[223];
        tmp_kw_call_arg_value_2_37 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[242]);

        if (unlikely(tmp_kw_call_arg_value_2_37 == NULL)) {
            tmp_kw_call_arg_value_2_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[242]);
        }

        if (tmp_kw_call_arg_value_2_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_135);

            exception_lineno = 614;

            goto try_except_handler_68;
        }
        tmp_called_value_136 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_136 == NULL)) {
            tmp_called_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_135);

            exception_lineno = 615;

            goto try_except_handler_68;
        }
        tmp_call_arg_element_9 = MAKE_LIST3(mod_consts[223],mod_consts[208],mod_consts[245]);
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 615;
        tmp_kw_call_dict_value_0_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_136, tmp_call_arg_element_9);
        Py_DECREF(tmp_call_arg_element_9);
        if (tmp_kw_call_dict_value_0_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_135);

            exception_lineno = 615;

            goto try_except_handler_68;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 611;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_37, tmp_kw_call_arg_value_1_37, tmp_kw_call_arg_value_2_37};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_37};
            tmp_call_result_78 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_135, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_135);
        Py_DECREF(tmp_kw_call_dict_value_0_37);
        if (tmp_call_result_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;

            goto try_except_handler_68;
        }
        Py_DECREF(tmp_call_result_78);
    }
    goto try_end_66;
    // Exception handler code:
    try_except_handler_68:;
    exception_keeper_type_66 = exception_type;
    exception_keeper_value_66 = exception_value;
    exception_keeper_tb_66 = exception_tb;
    exception_keeper_lineno_66 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 17.
    exception_preserved_17 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_66 == NULL) {
        exception_keeper_tb_66 = MAKE_TRACEBACK(frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_66);
    } else if (exception_keeper_lineno_66 != 0) {
        exception_keeper_tb_66 = ADD_TRACEBACK(exception_keeper_tb_66, frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_66);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_66, &exception_keeper_value_66, &exception_keeper_tb_66);
    // Tried code:
    {
        bool tmp_condition_result_66;
        PyObject *tmp_cmp_expr_left_50;
        PyObject *tmp_cmp_expr_right_50;
        tmp_cmp_expr_left_50 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_50 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_50, tmp_cmp_expr_right_50);
        assert(!(tmp_res == -1));
        tmp_condition_result_66 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_66 != false) {
            goto branch_yes_66;
        } else {
            goto branch_no_66;
        }
    }
    branch_yes_66:;
    {
        nuitka_bool tmp_assign_source_156;
        tmp_assign_source_156 = NUITKA_BOOL_FALSE;
        tmp_with_17__indicator = tmp_assign_source_156;
    }
    {
        bool tmp_condition_result_67;
        PyObject *tmp_operand_value_17;
        PyObject *tmp_called_value_137;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_args_element_value_69;
        CHECK_OBJECT(tmp_with_17__exit);
        tmp_called_value_137 = tmp_with_17__exit;
        tmp_args_element_value_67 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_68 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_69 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 610;
        {
            PyObject *call_args[] = {tmp_args_element_value_67, tmp_args_element_value_68, tmp_args_element_value_69};
            tmp_operand_value_17 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_137, call_args);
        }

        if (tmp_operand_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_69;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_17);
        Py_DECREF(tmp_operand_value_17);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_69;
        }
        tmp_condition_result_67 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_67 != false) {
            goto branch_yes_67;
        } else {
            goto branch_no_67;
        }
    }
    branch_yes_67:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 610;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_69;
    branch_no_67:;
    goto branch_end_66;
    branch_no_66:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 610;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_69;
    branch_end_66:;
    goto try_end_67;
    // Exception handler code:
    try_except_handler_69:;
    exception_keeper_type_67 = exception_type;
    exception_keeper_value_67 = exception_value;
    exception_keeper_tb_67 = exception_tb;
    exception_keeper_lineno_67 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 17.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_17);

    // Re-raise.
    exception_type = exception_keeper_type_67;
    exception_value = exception_keeper_value_67;
    exception_tb = exception_keeper_tb_67;
    exception_lineno = exception_keeper_lineno_67;

    goto try_except_handler_67;
    // End of try:
    try_end_67:;
    // Restore previous exception id 17.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_17);

    goto try_end_66;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_66:;
    goto try_end_68;
    // Exception handler code:
    try_except_handler_67:;
    exception_keeper_type_68 = exception_type;
    exception_keeper_value_68 = exception_value;
    exception_keeper_tb_68 = exception_tb;
    exception_keeper_lineno_68 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_68;
        nuitka_bool tmp_cmp_expr_left_51;
        nuitka_bool tmp_cmp_expr_right_51;
        assert(tmp_with_17__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_51 = tmp_with_17__indicator;
        tmp_cmp_expr_right_51 = NUITKA_BOOL_TRUE;
        tmp_condition_result_68 = (tmp_cmp_expr_left_51 == tmp_cmp_expr_right_51) ? true : false;
        if (tmp_condition_result_68 != false) {
            goto branch_yes_68;
        } else {
            goto branch_no_68;
        }
    }
    branch_yes_68:;
    {
        PyObject *tmp_called_value_138;
        PyObject *tmp_call_result_79;
        CHECK_OBJECT(tmp_with_17__exit);
        tmp_called_value_138 = tmp_with_17__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 610;
        tmp_call_result_79 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_138, mod_consts[73]);

        if (tmp_call_result_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_68);
            Py_XDECREF(exception_keeper_value_68);
            Py_XDECREF(exception_keeper_tb_68);

            exception_lineno = 610;

            goto try_except_handler_66;
        }
        Py_DECREF(tmp_call_result_79);
    }
    branch_no_68:;
    // Re-raise.
    exception_type = exception_keeper_type_68;
    exception_value = exception_keeper_value_68;
    exception_tb = exception_keeper_tb_68;
    exception_lineno = exception_keeper_lineno_68;

    goto try_except_handler_66;
    // End of try:
    try_end_68:;
    {
        bool tmp_condition_result_69;
        nuitka_bool tmp_cmp_expr_left_52;
        nuitka_bool tmp_cmp_expr_right_52;
        assert(tmp_with_17__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_52 = tmp_with_17__indicator;
        tmp_cmp_expr_right_52 = NUITKA_BOOL_TRUE;
        tmp_condition_result_69 = (tmp_cmp_expr_left_52 == tmp_cmp_expr_right_52) ? true : false;
        if (tmp_condition_result_69 != false) {
            goto branch_yes_69;
        } else {
            goto branch_no_69;
        }
    }
    branch_yes_69:;
    {
        PyObject *tmp_called_value_139;
        PyObject *tmp_call_result_80;
        CHECK_OBJECT(tmp_with_17__exit);
        tmp_called_value_139 = tmp_with_17__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 610;
        tmp_call_result_80 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_139, mod_consts[73]);

        if (tmp_call_result_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_66;
        }
        Py_DECREF(tmp_call_result_80);
    }
    branch_no_69:;
    goto try_end_69;
    // Exception handler code:
    try_except_handler_66:;
    exception_keeper_type_69 = exception_type;
    exception_keeper_value_69 = exception_value;
    exception_keeper_tb_69 = exception_tb;
    exception_keeper_lineno_69 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_17__source);
    tmp_with_17__source = NULL;
    Py_XDECREF(tmp_with_17__enter);
    tmp_with_17__enter = NULL;
    Py_XDECREF(tmp_with_17__exit);
    tmp_with_17__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_69;
    exception_value = exception_keeper_value_69;
    exception_tb = exception_keeper_tb_69;
    exception_lineno = exception_keeper_lineno_69;

    goto frame_exception_exit_1;
    // End of try:
    try_end_69:;
    CHECK_OBJECT(tmp_with_17__source);
    Py_DECREF(tmp_with_17__source);
    tmp_with_17__source = NULL;
    CHECK_OBJECT(tmp_with_17__enter);
    Py_DECREF(tmp_with_17__enter);
    tmp_with_17__enter = NULL;
    Py_XDECREF(tmp_with_17__exit);
    tmp_with_17__exit = NULL;
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = mod_consts[246];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_157);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_called_instance_19;
        tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_19 == NULL)) {
            tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;

            goto try_except_handler_70;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 626;
        tmp_assign_source_158 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_19,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[248], 0)
        );

        if (tmp_assign_source_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;

            goto try_except_handler_70;
        }
        assert(tmp_with_18__source == NULL);
        tmp_with_18__source = tmp_assign_source_158;
    }
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_called_value_140;
        PyObject *tmp_expression_value_91;
        CHECK_OBJECT(tmp_with_18__source);
        tmp_expression_value_91 = tmp_with_18__source;
        tmp_called_value_140 = LOOKUP_SPECIAL(tstate, tmp_expression_value_91, mod_consts[66]);
        if (tmp_called_value_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;

            goto try_except_handler_70;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 626;
        tmp_assign_source_159 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_140);
        Py_DECREF(tmp_called_value_140);
        if (tmp_assign_source_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;

            goto try_except_handler_70;
        }
        assert(tmp_with_18__enter == NULL);
        tmp_with_18__enter = tmp_assign_source_159;
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_expression_value_92;
        CHECK_OBJECT(tmp_with_18__source);
        tmp_expression_value_92 = tmp_with_18__source;
        tmp_assign_source_160 = LOOKUP_SPECIAL(tstate, tmp_expression_value_92, mod_consts[67]);
        if (tmp_assign_source_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;

            goto try_except_handler_70;
        }
        assert(tmp_with_18__exit == NULL);
        tmp_with_18__exit = tmp_assign_source_160;
    }
    {
        nuitka_bool tmp_assign_source_161;
        tmp_assign_source_161 = NUITKA_BOOL_TRUE;
        tmp_with_18__indicator = tmp_assign_source_161;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_141;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_call_result_81;
        PyObject *tmp_kw_call_arg_value_0_38;
        PyObject *tmp_kw_call_arg_value_1_38;
        PyObject *tmp_kw_call_arg_value_2_38;
        PyObject *tmp_kw_call_dict_value_0_38;
        PyObject *tmp_called_value_142;
        PyObject *tmp_call_arg_element_10;
        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_93 == NULL)) {
            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;

            goto try_except_handler_72;
        }
        tmp_called_value_141 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[68]);
        if (tmp_called_value_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;

            goto try_except_handler_72;
        }
        tmp_kw_call_arg_value_0_38 = mod_consts[244];
        tmp_kw_call_arg_value_1_38 = mod_consts[223];
        tmp_kw_call_arg_value_2_38 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[247]);

        if (unlikely(tmp_kw_call_arg_value_2_38 == NULL)) {
            tmp_kw_call_arg_value_2_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[247]);
        }

        if (tmp_kw_call_arg_value_2_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_141);

            exception_lineno = 630;

            goto try_except_handler_72;
        }
        tmp_called_value_142 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_142 == NULL)) {
            tmp_called_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_141);

            exception_lineno = 631;

            goto try_except_handler_72;
        }
        tmp_call_arg_element_10 = MAKE_LIST2(mod_consts[223],mod_consts[249]);
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 631;
        tmp_kw_call_dict_value_0_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_142, tmp_call_arg_element_10);
        Py_DECREF(tmp_call_arg_element_10);
        if (tmp_kw_call_dict_value_0_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_141);

            exception_lineno = 631;

            goto try_except_handler_72;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 627;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_38, tmp_kw_call_arg_value_1_38, tmp_kw_call_arg_value_2_38};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_38};
            tmp_call_result_81 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_141, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_141);
        Py_DECREF(tmp_kw_call_dict_value_0_38);
        if (tmp_call_result_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;

            goto try_except_handler_72;
        }
        Py_DECREF(tmp_call_result_81);
    }
    goto try_end_70;
    // Exception handler code:
    try_except_handler_72:;
    exception_keeper_type_70 = exception_type;
    exception_keeper_value_70 = exception_value;
    exception_keeper_tb_70 = exception_tb;
    exception_keeper_lineno_70 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 18.
    exception_preserved_18 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_70 == NULL) {
        exception_keeper_tb_70 = MAKE_TRACEBACK(frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_70);
    } else if (exception_keeper_lineno_70 != 0) {
        exception_keeper_tb_70 = ADD_TRACEBACK(exception_keeper_tb_70, frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_70);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_70, &exception_keeper_value_70, &exception_keeper_tb_70);
    // Tried code:
    {
        bool tmp_condition_result_70;
        PyObject *tmp_cmp_expr_left_53;
        PyObject *tmp_cmp_expr_right_53;
        tmp_cmp_expr_left_53 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_53 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_53, tmp_cmp_expr_right_53);
        assert(!(tmp_res == -1));
        tmp_condition_result_70 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_70 != false) {
            goto branch_yes_70;
        } else {
            goto branch_no_70;
        }
    }
    branch_yes_70:;
    {
        nuitka_bool tmp_assign_source_162;
        tmp_assign_source_162 = NUITKA_BOOL_FALSE;
        tmp_with_18__indicator = tmp_assign_source_162;
    }
    {
        bool tmp_condition_result_71;
        PyObject *tmp_operand_value_18;
        PyObject *tmp_called_value_143;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_args_element_value_72;
        CHECK_OBJECT(tmp_with_18__exit);
        tmp_called_value_143 = tmp_with_18__exit;
        tmp_args_element_value_70 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_71 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_72 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 626;
        {
            PyObject *call_args[] = {tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72};
            tmp_operand_value_18 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_143, call_args);
        }

        if (tmp_operand_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;

            goto try_except_handler_73;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_18);
        Py_DECREF(tmp_operand_value_18);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;

            goto try_except_handler_73;
        }
        tmp_condition_result_71 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_71 != false) {
            goto branch_yes_71;
        } else {
            goto branch_no_71;
        }
    }
    branch_yes_71:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 626;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_73;
    branch_no_71:;
    goto branch_end_70;
    branch_no_70:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 626;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_73;
    branch_end_70:;
    goto try_end_71;
    // Exception handler code:
    try_except_handler_73:;
    exception_keeper_type_71 = exception_type;
    exception_keeper_value_71 = exception_value;
    exception_keeper_tb_71 = exception_tb;
    exception_keeper_lineno_71 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 18.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_18);

    // Re-raise.
    exception_type = exception_keeper_type_71;
    exception_value = exception_keeper_value_71;
    exception_tb = exception_keeper_tb_71;
    exception_lineno = exception_keeper_lineno_71;

    goto try_except_handler_71;
    // End of try:
    try_end_71:;
    // Restore previous exception id 18.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_18);

    goto try_end_70;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_70:;
    goto try_end_72;
    // Exception handler code:
    try_except_handler_71:;
    exception_keeper_type_72 = exception_type;
    exception_keeper_value_72 = exception_value;
    exception_keeper_tb_72 = exception_tb;
    exception_keeper_lineno_72 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_72;
        nuitka_bool tmp_cmp_expr_left_54;
        nuitka_bool tmp_cmp_expr_right_54;
        assert(tmp_with_18__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_54 = tmp_with_18__indicator;
        tmp_cmp_expr_right_54 = NUITKA_BOOL_TRUE;
        tmp_condition_result_72 = (tmp_cmp_expr_left_54 == tmp_cmp_expr_right_54) ? true : false;
        if (tmp_condition_result_72 != false) {
            goto branch_yes_72;
        } else {
            goto branch_no_72;
        }
    }
    branch_yes_72:;
    {
        PyObject *tmp_called_value_144;
        PyObject *tmp_call_result_82;
        CHECK_OBJECT(tmp_with_18__exit);
        tmp_called_value_144 = tmp_with_18__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 626;
        tmp_call_result_82 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_144, mod_consts[73]);

        if (tmp_call_result_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_72);
            Py_XDECREF(exception_keeper_value_72);
            Py_XDECREF(exception_keeper_tb_72);

            exception_lineno = 626;

            goto try_except_handler_70;
        }
        Py_DECREF(tmp_call_result_82);
    }
    branch_no_72:;
    // Re-raise.
    exception_type = exception_keeper_type_72;
    exception_value = exception_keeper_value_72;
    exception_tb = exception_keeper_tb_72;
    exception_lineno = exception_keeper_lineno_72;

    goto try_except_handler_70;
    // End of try:
    try_end_72:;
    {
        bool tmp_condition_result_73;
        nuitka_bool tmp_cmp_expr_left_55;
        nuitka_bool tmp_cmp_expr_right_55;
        assert(tmp_with_18__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_55 = tmp_with_18__indicator;
        tmp_cmp_expr_right_55 = NUITKA_BOOL_TRUE;
        tmp_condition_result_73 = (tmp_cmp_expr_left_55 == tmp_cmp_expr_right_55) ? true : false;
        if (tmp_condition_result_73 != false) {
            goto branch_yes_73;
        } else {
            goto branch_no_73;
        }
    }
    branch_yes_73:;
    {
        PyObject *tmp_called_value_145;
        PyObject *tmp_call_result_83;
        CHECK_OBJECT(tmp_with_18__exit);
        tmp_called_value_145 = tmp_with_18__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 626;
        tmp_call_result_83 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_145, mod_consts[73]);

        if (tmp_call_result_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;

            goto try_except_handler_70;
        }
        Py_DECREF(tmp_call_result_83);
    }
    branch_no_73:;
    goto try_end_73;
    // Exception handler code:
    try_except_handler_70:;
    exception_keeper_type_73 = exception_type;
    exception_keeper_value_73 = exception_value;
    exception_keeper_tb_73 = exception_tb;
    exception_keeper_lineno_73 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_18__source);
    tmp_with_18__source = NULL;
    Py_XDECREF(tmp_with_18__enter);
    tmp_with_18__enter = NULL;
    Py_XDECREF(tmp_with_18__exit);
    tmp_with_18__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_73;
    exception_value = exception_keeper_value_73;
    exception_tb = exception_keeper_tb_73;
    exception_lineno = exception_keeper_lineno_73;

    goto frame_exception_exit_1;
    // End of try:
    try_end_73:;
    CHECK_OBJECT(tmp_with_18__source);
    Py_DECREF(tmp_with_18__source);
    tmp_with_18__source = NULL;
    CHECK_OBJECT(tmp_with_18__enter);
    Py_DECREF(tmp_with_18__enter);
    tmp_with_18__enter = NULL;
    Py_XDECREF(tmp_with_18__exit);
    tmp_with_18__exit = NULL;
    {
        PyObject *tmp_assign_source_163;
        tmp_assign_source_163 = mod_consts[250];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_annotations_7;
        tmp_annotations_7 = DICT_COPY(mod_consts[56]);


        tmp_assign_source_164 = MAKE_FUNCTION_pandas$core$config_init$$$function__7_register_plotting_backend_cb(tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[252], tmp_assign_source_164);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_165;
        PyObject *tmp_called_instance_20;
        tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_20 == NULL)) {
            tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;

            goto try_except_handler_74;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 655;
        tmp_assign_source_165 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_20,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[253], 0)
        );

        if (tmp_assign_source_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;

            goto try_except_handler_74;
        }
        assert(tmp_with_19__source == NULL);
        tmp_with_19__source = tmp_assign_source_165;
    }
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_called_value_146;
        PyObject *tmp_expression_value_94;
        CHECK_OBJECT(tmp_with_19__source);
        tmp_expression_value_94 = tmp_with_19__source;
        tmp_called_value_146 = LOOKUP_SPECIAL(tstate, tmp_expression_value_94, mod_consts[66]);
        if (tmp_called_value_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;

            goto try_except_handler_74;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 655;
        tmp_assign_source_166 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_146);
        Py_DECREF(tmp_called_value_146);
        if (tmp_assign_source_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;

            goto try_except_handler_74;
        }
        assert(tmp_with_19__enter == NULL);
        tmp_with_19__enter = tmp_assign_source_166;
    }
    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_expression_value_95;
        CHECK_OBJECT(tmp_with_19__source);
        tmp_expression_value_95 = tmp_with_19__source;
        tmp_assign_source_167 = LOOKUP_SPECIAL(tstate, tmp_expression_value_95, mod_consts[67]);
        if (tmp_assign_source_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;

            goto try_except_handler_74;
        }
        assert(tmp_with_19__exit == NULL);
        tmp_with_19__exit = tmp_assign_source_167;
    }
    {
        nuitka_bool tmp_assign_source_168;
        tmp_assign_source_168 = NUITKA_BOOL_TRUE;
        tmp_with_19__indicator = tmp_assign_source_168;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_147;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_call_result_84;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_kw_call_value_1_9;
        PyObject *tmp_kw_call_value_2_1;
        tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_96 == NULL)) {
            tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 656;

            goto try_except_handler_76;
        }
        tmp_called_value_147 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[68]);
        if (tmp_called_value_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 656;

            goto try_except_handler_76;
        }
        tmp_kw_call_value_0_9 = mod_consts[24];
        tmp_kw_call_value_1_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[251]);

        if (unlikely(tmp_kw_call_value_1_9 == NULL)) {
            tmp_kw_call_value_1_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[251]);
        }

        if (tmp_kw_call_value_1_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_147);

            exception_lineno = 659;

            goto try_except_handler_76;
        }
        tmp_kw_call_value_2_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[252]);

        if (unlikely(tmp_kw_call_value_2_1 == NULL)) {
            tmp_kw_call_value_2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[252]);
        }

        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_147);

            exception_lineno = 660;

            goto try_except_handler_76;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 656;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_9, tmp_kw_call_value_1_9, tmp_kw_call_value_2_1};
            tmp_call_result_84 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_147, mod_consts[254], kw_values, mod_consts[255]);
        }

        Py_DECREF(tmp_called_value_147);
        if (tmp_call_result_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 656;

            goto try_except_handler_76;
        }
        Py_DECREF(tmp_call_result_84);
    }
    goto try_end_74;
    // Exception handler code:
    try_except_handler_76:;
    exception_keeper_type_74 = exception_type;
    exception_keeper_value_74 = exception_value;
    exception_keeper_tb_74 = exception_tb;
    exception_keeper_lineno_74 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 19.
    exception_preserved_19 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_74 == NULL) {
        exception_keeper_tb_74 = MAKE_TRACEBACK(frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_74);
    } else if (exception_keeper_lineno_74 != 0) {
        exception_keeper_tb_74 = ADD_TRACEBACK(exception_keeper_tb_74, frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_74);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_74, &exception_keeper_value_74, &exception_keeper_tb_74);
    // Tried code:
    {
        bool tmp_condition_result_74;
        PyObject *tmp_cmp_expr_left_56;
        PyObject *tmp_cmp_expr_right_56;
        tmp_cmp_expr_left_56 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_56 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_56, tmp_cmp_expr_right_56);
        assert(!(tmp_res == -1));
        tmp_condition_result_74 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_74 != false) {
            goto branch_yes_74;
        } else {
            goto branch_no_74;
        }
    }
    branch_yes_74:;
    {
        nuitka_bool tmp_assign_source_169;
        tmp_assign_source_169 = NUITKA_BOOL_FALSE;
        tmp_with_19__indicator = tmp_assign_source_169;
    }
    {
        bool tmp_condition_result_75;
        PyObject *tmp_operand_value_19;
        PyObject *tmp_called_value_148;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_args_element_value_75;
        CHECK_OBJECT(tmp_with_19__exit);
        tmp_called_value_148 = tmp_with_19__exit;
        tmp_args_element_value_73 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_74 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_75 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 655;
        {
            PyObject *call_args[] = {tmp_args_element_value_73, tmp_args_element_value_74, tmp_args_element_value_75};
            tmp_operand_value_19 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_148, call_args);
        }

        if (tmp_operand_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;

            goto try_except_handler_77;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_19);
        Py_DECREF(tmp_operand_value_19);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;

            goto try_except_handler_77;
        }
        tmp_condition_result_75 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_75 != false) {
            goto branch_yes_75;
        } else {
            goto branch_no_75;
        }
    }
    branch_yes_75:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 655;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_77;
    branch_no_75:;
    goto branch_end_74;
    branch_no_74:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 655;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_77;
    branch_end_74:;
    goto try_end_75;
    // Exception handler code:
    try_except_handler_77:;
    exception_keeper_type_75 = exception_type;
    exception_keeper_value_75 = exception_value;
    exception_keeper_tb_75 = exception_tb;
    exception_keeper_lineno_75 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 19.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_19);

    // Re-raise.
    exception_type = exception_keeper_type_75;
    exception_value = exception_keeper_value_75;
    exception_tb = exception_keeper_tb_75;
    exception_lineno = exception_keeper_lineno_75;

    goto try_except_handler_75;
    // End of try:
    try_end_75:;
    // Restore previous exception id 19.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_19);

    goto try_end_74;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_74:;
    goto try_end_76;
    // Exception handler code:
    try_except_handler_75:;
    exception_keeper_type_76 = exception_type;
    exception_keeper_value_76 = exception_value;
    exception_keeper_tb_76 = exception_tb;
    exception_keeper_lineno_76 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_76;
        nuitka_bool tmp_cmp_expr_left_57;
        nuitka_bool tmp_cmp_expr_right_57;
        assert(tmp_with_19__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_57 = tmp_with_19__indicator;
        tmp_cmp_expr_right_57 = NUITKA_BOOL_TRUE;
        tmp_condition_result_76 = (tmp_cmp_expr_left_57 == tmp_cmp_expr_right_57) ? true : false;
        if (tmp_condition_result_76 != false) {
            goto branch_yes_76;
        } else {
            goto branch_no_76;
        }
    }
    branch_yes_76:;
    {
        PyObject *tmp_called_value_149;
        PyObject *tmp_call_result_85;
        CHECK_OBJECT(tmp_with_19__exit);
        tmp_called_value_149 = tmp_with_19__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 655;
        tmp_call_result_85 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_149, mod_consts[73]);

        if (tmp_call_result_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_76);
            Py_XDECREF(exception_keeper_value_76);
            Py_XDECREF(exception_keeper_tb_76);

            exception_lineno = 655;

            goto try_except_handler_74;
        }
        Py_DECREF(tmp_call_result_85);
    }
    branch_no_76:;
    // Re-raise.
    exception_type = exception_keeper_type_76;
    exception_value = exception_keeper_value_76;
    exception_tb = exception_keeper_tb_76;
    exception_lineno = exception_keeper_lineno_76;

    goto try_except_handler_74;
    // End of try:
    try_end_76:;
    {
        bool tmp_condition_result_77;
        nuitka_bool tmp_cmp_expr_left_58;
        nuitka_bool tmp_cmp_expr_right_58;
        assert(tmp_with_19__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_58 = tmp_with_19__indicator;
        tmp_cmp_expr_right_58 = NUITKA_BOOL_TRUE;
        tmp_condition_result_77 = (tmp_cmp_expr_left_58 == tmp_cmp_expr_right_58) ? true : false;
        if (tmp_condition_result_77 != false) {
            goto branch_yes_77;
        } else {
            goto branch_no_77;
        }
    }
    branch_yes_77:;
    {
        PyObject *tmp_called_value_150;
        PyObject *tmp_call_result_86;
        CHECK_OBJECT(tmp_with_19__exit);
        tmp_called_value_150 = tmp_with_19__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 655;
        tmp_call_result_86 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_150, mod_consts[73]);

        if (tmp_call_result_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;

            goto try_except_handler_74;
        }
        Py_DECREF(tmp_call_result_86);
    }
    branch_no_77:;
    goto try_end_77;
    // Exception handler code:
    try_except_handler_74:;
    exception_keeper_type_77 = exception_type;
    exception_keeper_value_77 = exception_value;
    exception_keeper_tb_77 = exception_tb;
    exception_keeper_lineno_77 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_19__source);
    tmp_with_19__source = NULL;
    Py_XDECREF(tmp_with_19__enter);
    tmp_with_19__enter = NULL;
    Py_XDECREF(tmp_with_19__exit);
    tmp_with_19__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_77;
    exception_value = exception_keeper_value_77;
    exception_tb = exception_keeper_tb_77;
    exception_lineno = exception_keeper_lineno_77;

    goto frame_exception_exit_1;
    // End of try:
    try_end_77:;
    CHECK_OBJECT(tmp_with_19__source);
    Py_DECREF(tmp_with_19__source);
    tmp_with_19__source = NULL;
    CHECK_OBJECT(tmp_with_19__enter);
    Py_DECREF(tmp_with_19__enter);
    tmp_with_19__enter = NULL;
    Py_XDECREF(tmp_with_19__exit);
    tmp_with_19__exit = NULL;
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = mod_consts[256];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_annotations_8;
        tmp_annotations_8 = DICT_COPY(mod_consts[56]);


        tmp_assign_source_171 = MAKE_FUNCTION_pandas$core$config_init$$$function__8_register_converter_cb(tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_171);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_called_instance_21;
        tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_21 == NULL)) {
            tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 684;

            goto try_except_handler_78;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 684;
        tmp_assign_source_172 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_21,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[259], 0)
        );

        if (tmp_assign_source_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 684;

            goto try_except_handler_78;
        }
        assert(tmp_with_20__source == NULL);
        tmp_with_20__source = tmp_assign_source_172;
    }
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_called_value_151;
        PyObject *tmp_expression_value_97;
        CHECK_OBJECT(tmp_with_20__source);
        tmp_expression_value_97 = tmp_with_20__source;
        tmp_called_value_151 = LOOKUP_SPECIAL(tstate, tmp_expression_value_97, mod_consts[66]);
        if (tmp_called_value_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 684;

            goto try_except_handler_78;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 684;
        tmp_assign_source_173 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_151);
        Py_DECREF(tmp_called_value_151);
        if (tmp_assign_source_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 684;

            goto try_except_handler_78;
        }
        assert(tmp_with_20__enter == NULL);
        tmp_with_20__enter = tmp_assign_source_173;
    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_expression_value_98;
        CHECK_OBJECT(tmp_with_20__source);
        tmp_expression_value_98 = tmp_with_20__source;
        tmp_assign_source_174 = LOOKUP_SPECIAL(tstate, tmp_expression_value_98, mod_consts[67]);
        if (tmp_assign_source_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 684;

            goto try_except_handler_78;
        }
        assert(tmp_with_20__exit == NULL);
        tmp_with_20__exit = tmp_assign_source_174;
    }
    {
        nuitka_bool tmp_assign_source_175;
        tmp_assign_source_175 = NUITKA_BOOL_TRUE;
        tmp_with_20__indicator = tmp_assign_source_175;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_152;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_call_result_87;
        PyObject *tmp_kw_call_arg_value_0_39;
        PyObject *tmp_kw_call_arg_value_1_39;
        PyObject *tmp_kw_call_arg_value_2_39;
        PyObject *tmp_kw_call_dict_value_0_39;
        PyObject *tmp_called_value_153;
        PyObject *tmp_call_arg_element_11;
        PyObject *tmp_kw_call_dict_value_1_5;
        tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_99 == NULL)) {
            tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 685;

            goto try_except_handler_80;
        }
        tmp_called_value_152 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[68]);
        if (tmp_called_value_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 685;

            goto try_except_handler_80;
        }
        tmp_kw_call_arg_value_0_39 = mod_consts[260];
        tmp_kw_call_arg_value_1_39 = mod_consts[223];
        tmp_kw_call_arg_value_2_39 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[257]);

        if (unlikely(tmp_kw_call_arg_value_2_39 == NULL)) {
            tmp_kw_call_arg_value_2_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[257]);
        }

        if (tmp_kw_call_arg_value_2_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_152);

            exception_lineno = 688;

            goto try_except_handler_80;
        }
        tmp_called_value_153 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_153 == NULL)) {
            tmp_called_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_152);

            exception_lineno = 689;

            goto try_except_handler_80;
        }
        tmp_call_arg_element_11 = MAKE_LIST3(mod_consts[223],Py_True,Py_False);
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 689;
        tmp_kw_call_dict_value_0_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_153, tmp_call_arg_element_11);
        Py_DECREF(tmp_call_arg_element_11);
        if (tmp_kw_call_dict_value_0_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_152);

            exception_lineno = 689;

            goto try_except_handler_80;
        }
        tmp_kw_call_dict_value_1_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[258]);

        if (unlikely(tmp_kw_call_dict_value_1_5 == NULL)) {
            tmp_kw_call_dict_value_1_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[258]);
        }

        if (tmp_kw_call_dict_value_1_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_kw_call_dict_value_0_39);

            exception_lineno = 690;

            goto try_except_handler_80;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 685;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_39, tmp_kw_call_arg_value_1_39, tmp_kw_call_arg_value_2_39};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_39, tmp_kw_call_dict_value_1_5};
            tmp_call_result_87 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_152, args, kw_values, mod_consts[70]);
        }

        Py_DECREF(tmp_called_value_152);
        Py_DECREF(tmp_kw_call_dict_value_0_39);
        if (tmp_call_result_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 685;

            goto try_except_handler_80;
        }
        Py_DECREF(tmp_call_result_87);
    }
    goto try_end_78;
    // Exception handler code:
    try_except_handler_80:;
    exception_keeper_type_78 = exception_type;
    exception_keeper_value_78 = exception_value;
    exception_keeper_tb_78 = exception_tb;
    exception_keeper_lineno_78 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 20.
    exception_preserved_20 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_78 == NULL) {
        exception_keeper_tb_78 = MAKE_TRACEBACK(frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_78);
    } else if (exception_keeper_lineno_78 != 0) {
        exception_keeper_tb_78 = ADD_TRACEBACK(exception_keeper_tb_78, frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_78);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_78, &exception_keeper_value_78, &exception_keeper_tb_78);
    // Tried code:
    {
        bool tmp_condition_result_78;
        PyObject *tmp_cmp_expr_left_59;
        PyObject *tmp_cmp_expr_right_59;
        tmp_cmp_expr_left_59 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_59 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_59, tmp_cmp_expr_right_59);
        assert(!(tmp_res == -1));
        tmp_condition_result_78 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_78 != false) {
            goto branch_yes_78;
        } else {
            goto branch_no_78;
        }
    }
    branch_yes_78:;
    {
        nuitka_bool tmp_assign_source_176;
        tmp_assign_source_176 = NUITKA_BOOL_FALSE;
        tmp_with_20__indicator = tmp_assign_source_176;
    }
    {
        bool tmp_condition_result_79;
        PyObject *tmp_operand_value_20;
        PyObject *tmp_called_value_154;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_args_element_value_78;
        CHECK_OBJECT(tmp_with_20__exit);
        tmp_called_value_154 = tmp_with_20__exit;
        tmp_args_element_value_76 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_77 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_78 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 684;
        {
            PyObject *call_args[] = {tmp_args_element_value_76, tmp_args_element_value_77, tmp_args_element_value_78};
            tmp_operand_value_20 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_154, call_args);
        }

        if (tmp_operand_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 684;

            goto try_except_handler_81;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_20);
        Py_DECREF(tmp_operand_value_20);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 684;

            goto try_except_handler_81;
        }
        tmp_condition_result_79 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_79 != false) {
            goto branch_yes_79;
        } else {
            goto branch_no_79;
        }
    }
    branch_yes_79:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 684;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_81;
    branch_no_79:;
    goto branch_end_78;
    branch_no_78:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 684;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_81;
    branch_end_78:;
    goto try_end_79;
    // Exception handler code:
    try_except_handler_81:;
    exception_keeper_type_79 = exception_type;
    exception_keeper_value_79 = exception_value;
    exception_keeper_tb_79 = exception_tb;
    exception_keeper_lineno_79 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 20.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_20);

    // Re-raise.
    exception_type = exception_keeper_type_79;
    exception_value = exception_keeper_value_79;
    exception_tb = exception_keeper_tb_79;
    exception_lineno = exception_keeper_lineno_79;

    goto try_except_handler_79;
    // End of try:
    try_end_79:;
    // Restore previous exception id 20.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_20);

    goto try_end_78;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_78:;
    goto try_end_80;
    // Exception handler code:
    try_except_handler_79:;
    exception_keeper_type_80 = exception_type;
    exception_keeper_value_80 = exception_value;
    exception_keeper_tb_80 = exception_tb;
    exception_keeper_lineno_80 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_80;
        nuitka_bool tmp_cmp_expr_left_60;
        nuitka_bool tmp_cmp_expr_right_60;
        assert(tmp_with_20__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_60 = tmp_with_20__indicator;
        tmp_cmp_expr_right_60 = NUITKA_BOOL_TRUE;
        tmp_condition_result_80 = (tmp_cmp_expr_left_60 == tmp_cmp_expr_right_60) ? true : false;
        if (tmp_condition_result_80 != false) {
            goto branch_yes_80;
        } else {
            goto branch_no_80;
        }
    }
    branch_yes_80:;
    {
        PyObject *tmp_called_value_155;
        PyObject *tmp_call_result_88;
        CHECK_OBJECT(tmp_with_20__exit);
        tmp_called_value_155 = tmp_with_20__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 684;
        tmp_call_result_88 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_155, mod_consts[73]);

        if (tmp_call_result_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_80);
            Py_XDECREF(exception_keeper_value_80);
            Py_XDECREF(exception_keeper_tb_80);

            exception_lineno = 684;

            goto try_except_handler_78;
        }
        Py_DECREF(tmp_call_result_88);
    }
    branch_no_80:;
    // Re-raise.
    exception_type = exception_keeper_type_80;
    exception_value = exception_keeper_value_80;
    exception_tb = exception_keeper_tb_80;
    exception_lineno = exception_keeper_lineno_80;

    goto try_except_handler_78;
    // End of try:
    try_end_80:;
    {
        bool tmp_condition_result_81;
        nuitka_bool tmp_cmp_expr_left_61;
        nuitka_bool tmp_cmp_expr_right_61;
        assert(tmp_with_20__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_61 = tmp_with_20__indicator;
        tmp_cmp_expr_right_61 = NUITKA_BOOL_TRUE;
        tmp_condition_result_81 = (tmp_cmp_expr_left_61 == tmp_cmp_expr_right_61) ? true : false;
        if (tmp_condition_result_81 != false) {
            goto branch_yes_81;
        } else {
            goto branch_no_81;
        }
    }
    branch_yes_81:;
    {
        PyObject *tmp_called_value_156;
        PyObject *tmp_call_result_89;
        CHECK_OBJECT(tmp_with_20__exit);
        tmp_called_value_156 = tmp_with_20__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 684;
        tmp_call_result_89 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_156, mod_consts[73]);

        if (tmp_call_result_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 684;

            goto try_except_handler_78;
        }
        Py_DECREF(tmp_call_result_89);
    }
    branch_no_81:;
    goto try_end_81;
    // Exception handler code:
    try_except_handler_78:;
    exception_keeper_type_81 = exception_type;
    exception_keeper_value_81 = exception_value;
    exception_keeper_tb_81 = exception_tb;
    exception_keeper_lineno_81 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_20__source);
    tmp_with_20__source = NULL;
    Py_XDECREF(tmp_with_20__enter);
    tmp_with_20__enter = NULL;
    Py_XDECREF(tmp_with_20__exit);
    tmp_with_20__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_81;
    exception_value = exception_keeper_value_81;
    exception_tb = exception_keeper_tb_81;
    exception_lineno = exception_keeper_lineno_81;

    goto frame_exception_exit_1;
    // End of try:
    try_end_81:;
    CHECK_OBJECT(tmp_with_20__source);
    Py_DECREF(tmp_with_20__source);
    tmp_with_20__source = NULL;
    CHECK_OBJECT(tmp_with_20__enter);
    Py_DECREF(tmp_with_20__enter);
    tmp_with_20__enter = NULL;
    Py_XDECREF(tmp_with_20__exit);
    tmp_with_20__exit = NULL;
    {
        PyObject *tmp_assign_source_177;
        tmp_assign_source_177 = mod_consts[261];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        tmp_assign_source_178 = mod_consts[263];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        tmp_assign_source_179 = mod_consts[265];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[266], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        tmp_assign_source_180 = mod_consts[267];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[268], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        tmp_assign_source_181 = mod_consts[269];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        tmp_assign_source_182 = mod_consts[271];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        tmp_assign_source_183 = mod_consts[273];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[274], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        tmp_assign_source_184 = mod_consts[275];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[276], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        tmp_assign_source_185 = mod_consts[277];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        tmp_assign_source_186 = mod_consts[279];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        tmp_assign_source_187 = mod_consts[281];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[282], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        tmp_assign_source_188 = mod_consts[283];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        tmp_assign_source_189 = mod_consts[285];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;
        tmp_assign_source_190 = mod_consts[287];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[288], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;
        tmp_assign_source_191 = mod_consts[289];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[290], tmp_assign_source_191);
    }
    {
        PyObject *tmp_assign_source_192;
        tmp_assign_source_192 = mod_consts[291];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_192);
    }
    {
        PyObject *tmp_assign_source_193;
        tmp_assign_source_193 = mod_consts[293];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[294], tmp_assign_source_193);
    }
    {
        PyObject *tmp_assign_source_194;
        tmp_assign_source_194 = mod_consts[295];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[296], tmp_assign_source_194);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_195;
        PyObject *tmp_called_instance_22;
        tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_22 == NULL)) {
            tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 796;

            goto try_except_handler_82;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 796;
        tmp_assign_source_195 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_22,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[297], 0)
        );

        if (tmp_assign_source_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 796;

            goto try_except_handler_82;
        }
        assert(tmp_with_21__source == NULL);
        tmp_with_21__source = tmp_assign_source_195;
    }
    {
        PyObject *tmp_assign_source_196;
        PyObject *tmp_called_value_157;
        PyObject *tmp_expression_value_100;
        CHECK_OBJECT(tmp_with_21__source);
        tmp_expression_value_100 = tmp_with_21__source;
        tmp_called_value_157 = LOOKUP_SPECIAL(tstate, tmp_expression_value_100, mod_consts[66]);
        if (tmp_called_value_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 796;

            goto try_except_handler_82;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 796;
        tmp_assign_source_196 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_157);
        Py_DECREF(tmp_called_value_157);
        if (tmp_assign_source_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 796;

            goto try_except_handler_82;
        }
        assert(tmp_with_21__enter == NULL);
        tmp_with_21__enter = tmp_assign_source_196;
    }
    {
        PyObject *tmp_assign_source_197;
        PyObject *tmp_expression_value_101;
        CHECK_OBJECT(tmp_with_21__source);
        tmp_expression_value_101 = tmp_with_21__source;
        tmp_assign_source_197 = LOOKUP_SPECIAL(tstate, tmp_expression_value_101, mod_consts[67]);
        if (tmp_assign_source_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 796;

            goto try_except_handler_82;
        }
        assert(tmp_with_21__exit == NULL);
        tmp_with_21__exit = tmp_assign_source_197;
    }
    {
        nuitka_bool tmp_assign_source_198;
        tmp_assign_source_198 = NUITKA_BOOL_TRUE;
        tmp_with_21__indicator = tmp_assign_source_198;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_158;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_call_result_90;
        PyObject *tmp_kw_call_arg_value_0_40;
        PyObject *tmp_kw_call_arg_value_1_40;
        PyObject *tmp_kw_call_arg_value_2_40;
        PyObject *tmp_kw_call_dict_value_0_40;
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;

            goto try_except_handler_84;
        }
        tmp_called_value_158 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[68]);
        if (tmp_called_value_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;

            goto try_except_handler_84;
        }
        tmp_kw_call_arg_value_0_40 = mod_consts[298];
        tmp_kw_call_arg_value_1_40 = Py_True;
        tmp_kw_call_arg_value_2_40 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[262]);

        if (unlikely(tmp_kw_call_arg_value_2_40 == NULL)) {
            tmp_kw_call_arg_value_2_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[262]);
        }

        if (tmp_kw_call_arg_value_2_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_158);

            exception_lineno = 797;

            goto try_except_handler_84;
        }
        tmp_kw_call_dict_value_0_40 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_kw_call_dict_value_0_40 == NULL)) {
            tmp_kw_call_dict_value_0_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_158);

            exception_lineno = 797;

            goto try_except_handler_84;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 797;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_40, tmp_kw_call_arg_value_1_40, tmp_kw_call_arg_value_2_40};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_40};
            tmp_call_result_90 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_158, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_158);
        if (tmp_call_result_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;

            goto try_except_handler_84;
        }
        Py_DECREF(tmp_call_result_90);
    }
    {
        PyObject *tmp_called_value_159;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_call_result_91;
        PyObject *tmp_kw_call_arg_value_0_41;
        PyObject *tmp_kw_call_arg_value_1_41;
        PyObject *tmp_kw_call_arg_value_2_41;
        PyObject *tmp_kw_call_dict_value_0_41;
        tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_103 == NULL)) {
            tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 799;

            goto try_except_handler_84;
        }
        tmp_called_value_159 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[68]);
        if (tmp_called_value_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 799;

            goto try_except_handler_84;
        }
        tmp_kw_call_arg_value_0_41 = mod_consts[299];
        tmp_kw_call_arg_value_1_41 = Py_True;
        tmp_kw_call_arg_value_2_41 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[264]);

        if (unlikely(tmp_kw_call_arg_value_2_41 == NULL)) {
            tmp_kw_call_arg_value_2_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[264]);
        }

        if (tmp_kw_call_arg_value_2_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_159);

            exception_lineno = 800;

            goto try_except_handler_84;
        }
        tmp_kw_call_dict_value_0_41 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_kw_call_dict_value_0_41 == NULL)) {
            tmp_kw_call_dict_value_0_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_159);

            exception_lineno = 800;

            goto try_except_handler_84;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 799;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_41, tmp_kw_call_arg_value_1_41, tmp_kw_call_arg_value_2_41};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_41};
            tmp_call_result_91 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_159, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_159);
        if (tmp_call_result_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 799;

            goto try_except_handler_84;
        }
        Py_DECREF(tmp_call_result_91);
    }
    {
        PyObject *tmp_called_value_160;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_call_result_92;
        PyObject *tmp_kw_call_arg_value_0_42;
        PyObject *tmp_kw_call_arg_value_1_42;
        PyObject *tmp_kw_call_arg_value_2_42;
        PyObject *tmp_kw_call_dict_value_0_42;
        PyObject *tmp_called_value_161;
        PyObject *tmp_call_arg_element_12;
        tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_104 == NULL)) {
            tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 803;

            goto try_except_handler_84;
        }
        tmp_called_value_160 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts[68]);
        if (tmp_called_value_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 803;

            goto try_except_handler_84;
        }
        tmp_kw_call_arg_value_0_42 = mod_consts[300];
        tmp_kw_call_arg_value_1_42 = mod_consts[301];
        tmp_kw_call_arg_value_2_42 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[266]);

        if (unlikely(tmp_kw_call_arg_value_2_42 == NULL)) {
            tmp_kw_call_arg_value_2_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[266]);
        }

        if (tmp_kw_call_arg_value_2_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_160);

            exception_lineno = 806;

            goto try_except_handler_84;
        }
        tmp_called_value_161 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_161 == NULL)) {
            tmp_called_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_160);

            exception_lineno = 807;

            goto try_except_handler_84;
        }
        tmp_call_arg_element_12 = MAKE_LIST2(mod_consts[301],mod_consts[302]);
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 807;
        tmp_kw_call_dict_value_0_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_161, tmp_call_arg_element_12);
        Py_DECREF(tmp_call_arg_element_12);
        if (tmp_kw_call_dict_value_0_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_160);

            exception_lineno = 807;

            goto try_except_handler_84;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 803;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_42, tmp_kw_call_arg_value_1_42, tmp_kw_call_arg_value_2_42};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_42};
            tmp_call_result_92 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_160, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_160);
        Py_DECREF(tmp_kw_call_dict_value_0_42);
        if (tmp_call_result_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 803;

            goto try_except_handler_84;
        }
        Py_DECREF(tmp_call_result_92);
    }
    {
        PyObject *tmp_called_value_162;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_call_result_93;
        PyObject *tmp_kw_call_arg_value_0_43;
        PyObject *tmp_kw_call_arg_value_1_43;
        PyObject *tmp_kw_call_arg_value_2_43;
        PyObject *tmp_kw_call_dict_value_0_43;
        tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_105 == NULL)) {
            tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 810;

            goto try_except_handler_84;
        }
        tmp_called_value_162 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[68]);
        if (tmp_called_value_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 810;

            goto try_except_handler_84;
        }
        tmp_kw_call_arg_value_0_43 = mod_consts[303];
        tmp_kw_call_arg_value_1_43 = mod_consts[304];
        tmp_kw_call_arg_value_2_43 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[268]);

        if (unlikely(tmp_kw_call_arg_value_2_43 == NULL)) {
            tmp_kw_call_arg_value_2_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[268]);
        }

        if (tmp_kw_call_arg_value_2_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_162);

            exception_lineno = 813;

            goto try_except_handler_84;
        }
        tmp_kw_call_dict_value_0_43 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_kw_call_dict_value_0_43 == NULL)) {
            tmp_kw_call_dict_value_0_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_kw_call_dict_value_0_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_162);

            exception_lineno = 814;

            goto try_except_handler_84;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 810;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_43, tmp_kw_call_arg_value_1_43, tmp_kw_call_arg_value_2_43};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_43};
            tmp_call_result_93 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_162, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_162);
        if (tmp_call_result_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 810;

            goto try_except_handler_84;
        }
        Py_DECREF(tmp_call_result_93);
    }
    {
        PyObject *tmp_called_value_163;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_call_result_94;
        PyObject *tmp_kw_call_arg_value_0_44;
        PyObject *tmp_kw_call_arg_value_1_44;
        PyObject *tmp_kw_call_arg_value_2_44;
        PyObject *tmp_kw_call_dict_value_0_44;
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 817;

            goto try_except_handler_84;
        }
        tmp_called_value_163 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts[68]);
        if (tmp_called_value_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 817;

            goto try_except_handler_84;
        }
        tmp_kw_call_arg_value_0_44 = mod_consts[305];
        tmp_kw_call_arg_value_1_44 = Py_None;
        tmp_kw_call_arg_value_2_44 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[270]);

        if (unlikely(tmp_kw_call_arg_value_2_44 == NULL)) {
            tmp_kw_call_arg_value_2_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[270]);
        }

        if (tmp_kw_call_arg_value_2_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_163);

            exception_lineno = 820;

            goto try_except_handler_84;
        }
        tmp_kw_call_dict_value_0_44 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_kw_call_dict_value_0_44 == NULL)) {
            tmp_kw_call_dict_value_0_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_kw_call_dict_value_0_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_163);

            exception_lineno = 821;

            goto try_except_handler_84;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 817;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_44, tmp_kw_call_arg_value_1_44, tmp_kw_call_arg_value_2_44};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_44};
            tmp_call_result_94 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_163, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_163);
        if (tmp_call_result_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 817;

            goto try_except_handler_84;
        }
        Py_DECREF(tmp_call_result_94);
    }
    {
        PyObject *tmp_called_value_164;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_call_result_95;
        PyObject *tmp_kw_call_arg_value_0_45;
        PyObject *tmp_kw_call_arg_value_1_45;
        PyObject *tmp_kw_call_arg_value_2_45;
        PyObject *tmp_kw_call_dict_value_0_45;
        tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_107 == NULL)) {
            tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 824;

            goto try_except_handler_84;
        }
        tmp_called_value_164 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts[68]);
        if (tmp_called_value_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 824;

            goto try_except_handler_84;
        }
        tmp_kw_call_arg_value_0_45 = mod_consts[306];
        tmp_kw_call_arg_value_1_45 = Py_None;
        tmp_kw_call_arg_value_2_45 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[272]);

        if (unlikely(tmp_kw_call_arg_value_2_45 == NULL)) {
            tmp_kw_call_arg_value_2_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[272]);
        }

        if (tmp_kw_call_arg_value_2_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_164);

            exception_lineno = 827;

            goto try_except_handler_84;
        }
        tmp_kw_call_dict_value_0_45 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_kw_call_dict_value_0_45 == NULL)) {
            tmp_kw_call_dict_value_0_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_kw_call_dict_value_0_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_164);

            exception_lineno = 828;

            goto try_except_handler_84;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 824;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_45, tmp_kw_call_arg_value_1_45, tmp_kw_call_arg_value_2_45};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_45};
            tmp_call_result_95 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_164, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_164);
        if (tmp_call_result_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 824;

            goto try_except_handler_84;
        }
        Py_DECREF(tmp_call_result_95);
    }
    {
        PyObject *tmp_called_value_165;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_call_result_96;
        PyObject *tmp_kw_call_arg_value_0_46;
        PyObject *tmp_kw_call_arg_value_1_46;
        PyObject *tmp_kw_call_arg_value_2_46;
        PyObject *tmp_kw_call_dict_value_0_46;
        tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_108 == NULL)) {
            tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 831;

            goto try_except_handler_84;
        }
        tmp_called_value_165 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[68]);
        if (tmp_called_value_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 831;

            goto try_except_handler_84;
        }
        tmp_kw_call_arg_value_0_46 = mod_consts[307];
        tmp_kw_call_arg_value_1_46 = mod_consts[308];
        tmp_kw_call_arg_value_2_46 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[294]);

        if (unlikely(tmp_kw_call_arg_value_2_46 == NULL)) {
            tmp_kw_call_arg_value_2_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[294]);
        }

        if (tmp_kw_call_arg_value_2_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_165);

            exception_lineno = 831;

            goto try_except_handler_84;
        }
        tmp_kw_call_dict_value_0_46 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_kw_call_dict_value_0_46 == NULL)) {
            tmp_kw_call_dict_value_0_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_kw_call_dict_value_0_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_165);

            exception_lineno = 831;

            goto try_except_handler_84;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 831;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_46, tmp_kw_call_arg_value_1_46, tmp_kw_call_arg_value_2_46};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_46};
            tmp_call_result_96 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_165, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_165);
        if (tmp_call_result_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 831;

            goto try_except_handler_84;
        }
        Py_DECREF(tmp_call_result_96);
    }
    {
        PyObject *tmp_called_value_166;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_call_result_97;
        PyObject *tmp_kw_call_arg_value_0_47;
        PyObject *tmp_kw_call_arg_value_1_47;
        PyObject *tmp_kw_call_arg_value_2_47;
        PyObject *tmp_kw_call_dict_value_0_47;
        tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_109 == NULL)) {
            tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 833;

            goto try_except_handler_84;
        }
        tmp_called_value_166 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[68]);
        if (tmp_called_value_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 833;

            goto try_except_handler_84;
        }
        tmp_kw_call_arg_value_0_47 = mod_consts[309];
        tmp_kw_call_arg_value_1_47 = mod_consts[310];
        tmp_kw_call_arg_value_2_47 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[276]);

        if (unlikely(tmp_kw_call_arg_value_2_47 == NULL)) {
            tmp_kw_call_arg_value_2_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[276]);
        }

        if (tmp_kw_call_arg_value_2_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_166);

            exception_lineno = 833;

            goto try_except_handler_84;
        }
        tmp_kw_call_dict_value_0_47 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_kw_call_dict_value_0_47 == NULL)) {
            tmp_kw_call_dict_value_0_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_kw_call_dict_value_0_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_166);

            exception_lineno = 833;

            goto try_except_handler_84;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 833;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_47, tmp_kw_call_arg_value_1_47, tmp_kw_call_arg_value_2_47};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_47};
            tmp_call_result_97 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_166, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_166);
        if (tmp_call_result_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 833;

            goto try_except_handler_84;
        }
        Py_DECREF(tmp_call_result_97);
    }
    {
        PyObject *tmp_called_value_167;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_call_result_98;
        PyObject *tmp_kw_call_arg_value_0_48;
        PyObject *tmp_kw_call_arg_value_1_48;
        PyObject *tmp_kw_call_arg_value_2_48;
        PyObject *tmp_kw_call_dict_value_0_48;
        tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_110 == NULL)) {
            tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;

            goto try_except_handler_84;
        }
        tmp_called_value_167 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts[68]);
        if (tmp_called_value_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;

            goto try_except_handler_84;
        }
        tmp_kw_call_arg_value_0_48 = mod_consts[311];
        tmp_kw_call_arg_value_1_48 = mod_consts[133];
        tmp_kw_call_arg_value_2_48 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[274]);

        if (unlikely(tmp_kw_call_arg_value_2_48 == NULL)) {
            tmp_kw_call_arg_value_2_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[274]);
        }

        if (tmp_kw_call_arg_value_2_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_167);

            exception_lineno = 836;

            goto try_except_handler_84;
        }
        tmp_kw_call_dict_value_0_48 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_kw_call_dict_value_0_48 == NULL)) {
            tmp_kw_call_dict_value_0_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_kw_call_dict_value_0_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_167);

            exception_lineno = 836;

            goto try_except_handler_84;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 835;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_48, tmp_kw_call_arg_value_1_48, tmp_kw_call_arg_value_2_48};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_48};
            tmp_call_result_98 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_167, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_167);
        if (tmp_call_result_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;

            goto try_except_handler_84;
        }
        Py_DECREF(tmp_call_result_98);
    }
    {
        PyObject *tmp_called_value_168;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_call_result_99;
        PyObject *tmp_kw_call_arg_value_0_49;
        PyObject *tmp_kw_call_arg_value_1_49;
        PyObject *tmp_kw_call_arg_value_2_49;
        PyObject *tmp_kw_call_dict_value_0_49;
        PyObject *tmp_called_value_169;
        PyObject *tmp_call_arg_element_13;
        tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_111 == NULL)) {
            tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 839;

            goto try_except_handler_84;
        }
        tmp_called_value_168 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[68]);
        if (tmp_called_value_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 839;

            goto try_except_handler_84;
        }
        tmp_kw_call_arg_value_0_49 = mod_consts[312];
        tmp_kw_call_arg_value_1_49 = Py_None;
        tmp_kw_call_arg_value_2_49 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[278]);

        if (unlikely(tmp_kw_call_arg_value_2_49 == NULL)) {
            tmp_kw_call_arg_value_2_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[278]);
        }

        if (tmp_kw_call_arg_value_2_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_168);

            exception_lineno = 842;

            goto try_except_handler_84;
        }
        tmp_called_value_169 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_169 == NULL)) {
            tmp_called_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_called_value_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_168);

            exception_lineno = 843;

            goto try_except_handler_84;
        }
        tmp_call_arg_element_13 = MAKE_LIST2((PyObject *)Py_TYPE(Py_None),(PyObject *)&PyUnicode_Type);
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 843;
        tmp_kw_call_dict_value_0_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_169, tmp_call_arg_element_13);
        Py_DECREF(tmp_call_arg_element_13);
        if (tmp_kw_call_dict_value_0_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_168);

            exception_lineno = 843;

            goto try_except_handler_84;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 839;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_49, tmp_kw_call_arg_value_1_49, tmp_kw_call_arg_value_2_49};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_49};
            tmp_call_result_99 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_168, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_168);
        Py_DECREF(tmp_kw_call_dict_value_0_49);
        if (tmp_call_result_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 839;

            goto try_except_handler_84;
        }
        Py_DECREF(tmp_call_result_99);
    }
    {
        PyObject *tmp_called_value_170;
        PyObject *tmp_expression_value_112;
        PyObject *tmp_call_result_100;
        PyObject *tmp_kw_call_arg_value_0_50;
        PyObject *tmp_kw_call_arg_value_1_50;
        PyObject *tmp_kw_call_arg_value_2_50;
        PyObject *tmp_kw_call_dict_value_0_50;
        PyObject *tmp_called_value_171;
        PyObject *tmp_call_arg_element_14;
        tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_112 == NULL)) {
            tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 846;

            goto try_except_handler_84;
        }
        tmp_called_value_170 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts[68]);
        if (tmp_called_value_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 846;

            goto try_except_handler_84;
        }
        tmp_kw_call_arg_value_0_50 = mod_consts[313];
        tmp_kw_call_arg_value_1_50 = Py_None;
        tmp_kw_call_arg_value_2_50 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[280]);

        if (unlikely(tmp_kw_call_arg_value_2_50 == NULL)) {
            tmp_kw_call_arg_value_2_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[280]);
        }

        if (tmp_kw_call_arg_value_2_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_170);

            exception_lineno = 849;

            goto try_except_handler_84;
        }
        tmp_called_value_171 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_171 == NULL)) {
            tmp_called_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_called_value_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_170);

            exception_lineno = 850;

            goto try_except_handler_84;
        }
        tmp_call_arg_element_14 = MAKE_LIST2((PyObject *)Py_TYPE(Py_None),(PyObject *)&PyUnicode_Type);
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 850;
        tmp_kw_call_dict_value_0_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_171, tmp_call_arg_element_14);
        Py_DECREF(tmp_call_arg_element_14);
        if (tmp_kw_call_dict_value_0_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_170);

            exception_lineno = 850;

            goto try_except_handler_84;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 846;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_50, tmp_kw_call_arg_value_1_50, tmp_kw_call_arg_value_2_50};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_50};
            tmp_call_result_100 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_170, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_170);
        Py_DECREF(tmp_kw_call_dict_value_0_50);
        if (tmp_call_result_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 846;

            goto try_except_handler_84;
        }
        Py_DECREF(tmp_call_result_100);
    }
    {
        PyObject *tmp_called_value_172;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_call_result_101;
        PyObject *tmp_kw_call_arg_value_0_51;
        PyObject *tmp_kw_call_arg_value_1_51;
        PyObject *tmp_kw_call_arg_value_2_51;
        PyObject *tmp_kw_call_dict_value_0_51;
        PyObject *tmp_called_value_173;
        PyObject *tmp_call_arg_element_15;
        tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_113 == NULL)) {
            tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 853;

            goto try_except_handler_84;
        }
        tmp_called_value_172 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts[68]);
        if (tmp_called_value_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 853;

            goto try_except_handler_84;
        }
        tmp_kw_call_arg_value_0_51 = mod_consts[314];
        tmp_kw_call_arg_value_1_51 = Py_None;
        tmp_kw_call_arg_value_2_51 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[282]);

        if (unlikely(tmp_kw_call_arg_value_2_51 == NULL)) {
            tmp_kw_call_arg_value_2_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[282]);
        }

        if (tmp_kw_call_arg_value_2_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_172);

            exception_lineno = 856;

            goto try_except_handler_84;
        }
        tmp_called_value_173 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_173 == NULL)) {
            tmp_called_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_172);

            exception_lineno = 857;

            goto try_except_handler_84;
        }
        tmp_call_arg_element_15 = MAKE_LIST4(mod_consts[315]);
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 857;
        tmp_kw_call_dict_value_0_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_173, tmp_call_arg_element_15);
        Py_DECREF(tmp_call_arg_element_15);
        if (tmp_kw_call_dict_value_0_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_172);

            exception_lineno = 857;

            goto try_except_handler_84;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 853;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_51, tmp_kw_call_arg_value_1_51, tmp_kw_call_arg_value_2_51};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_51};
            tmp_call_result_101 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_172, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_172);
        Py_DECREF(tmp_kw_call_dict_value_0_51);
        if (tmp_call_result_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 853;

            goto try_except_handler_84;
        }
        Py_DECREF(tmp_call_result_101);
    }
    {
        PyObject *tmp_called_value_174;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_call_result_102;
        PyObject *tmp_kw_call_arg_value_0_52;
        PyObject *tmp_kw_call_arg_value_1_52;
        PyObject *tmp_kw_call_arg_value_2_52;
        PyObject *tmp_kw_call_dict_value_0_52;
        PyObject *tmp_called_value_175;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_list_element_2;
        tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_114 == NULL)) {
            tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 860;

            goto try_except_handler_84;
        }
        tmp_called_value_174 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[68]);
        if (tmp_called_value_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 860;

            goto try_except_handler_84;
        }
        tmp_kw_call_arg_value_0_52 = mod_consts[316];
        tmp_kw_call_arg_value_1_52 = Py_None;
        tmp_kw_call_arg_value_2_52 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[284]);

        if (unlikely(tmp_kw_call_arg_value_2_52 == NULL)) {
            tmp_kw_call_arg_value_2_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[284]);
        }

        if (tmp_kw_call_arg_value_2_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_174);

            exception_lineno = 863;

            goto try_except_handler_84;
        }
        tmp_called_value_175 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_175 == NULL)) {
            tmp_called_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_called_value_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_174);

            exception_lineno = 864;

            goto try_except_handler_84;
        }
        tmp_list_element_2 = (PyObject *)Py_TYPE(Py_None);
        tmp_args_element_value_79 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_args_element_value_79, 0, tmp_list_element_2);
        tmp_list_element_2 = (PyObject *)&PyDict_Type;
        PyList_SET_ITEM0(tmp_args_element_value_79, 1, tmp_list_element_2);
        tmp_list_element_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_list_element_2 == NULL)) {
            tmp_list_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_list_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 864;

            goto list_build_exception_2;
        }
        PyList_SET_ITEM0(tmp_args_element_value_79, 2, tmp_list_element_2);
        tmp_list_element_2 = (PyObject *)&PyUnicode_Type;
        PyList_SET_ITEM0(tmp_args_element_value_79, 3, tmp_list_element_2);
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_called_value_174);
        Py_DECREF(tmp_args_element_value_79);
        goto try_except_handler_84;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 864;
        tmp_kw_call_dict_value_0_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_175, tmp_args_element_value_79);
        Py_DECREF(tmp_args_element_value_79);
        if (tmp_kw_call_dict_value_0_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_174);

            exception_lineno = 864;

            goto try_except_handler_84;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 860;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_52, tmp_kw_call_arg_value_1_52, tmp_kw_call_arg_value_2_52};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_52};
            tmp_call_result_102 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_174, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_174);
        Py_DECREF(tmp_kw_call_dict_value_0_52);
        if (tmp_call_result_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 860;

            goto try_except_handler_84;
        }
        Py_DECREF(tmp_call_result_102);
    }
    {
        PyObject *tmp_called_value_176;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_call_result_103;
        PyObject *tmp_kw_call_arg_value_0_53;
        PyObject *tmp_kw_call_arg_value_1_53;
        PyObject *tmp_kw_call_arg_value_2_53;
        PyObject *tmp_kw_call_dict_value_0_53;
        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_115 == NULL)) {
            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 867;

            goto try_except_handler_84;
        }
        tmp_called_value_176 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts[68]);
        if (tmp_called_value_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 867;

            goto try_except_handler_84;
        }
        tmp_kw_call_arg_value_0_53 = mod_consts[317];
        tmp_kw_call_arg_value_1_53 = Py_True;
        tmp_kw_call_arg_value_2_53 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[296]);

        if (unlikely(tmp_kw_call_arg_value_2_53 == NULL)) {
            tmp_kw_call_arg_value_2_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[296]);
        }

        if (tmp_kw_call_arg_value_2_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_176);

            exception_lineno = 867;

            goto try_except_handler_84;
        }
        tmp_kw_call_dict_value_0_53 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_kw_call_dict_value_0_53 == NULL)) {
            tmp_kw_call_dict_value_0_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_176);

            exception_lineno = 867;

            goto try_except_handler_84;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 867;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_53, tmp_kw_call_arg_value_1_53, tmp_kw_call_arg_value_2_53};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_53};
            tmp_call_result_103 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_176, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_176);
        if (tmp_call_result_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 867;

            goto try_except_handler_84;
        }
        Py_DECREF(tmp_call_result_103);
    }
    {
        PyObject *tmp_called_value_177;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_call_result_104;
        PyObject *tmp_kw_call_arg_value_0_54;
        PyObject *tmp_kw_call_arg_value_1_54;
        PyObject *tmp_kw_call_arg_value_2_54;
        PyObject *tmp_kw_call_dict_value_0_54;
        PyObject *tmp_called_value_178;
        PyObject *tmp_call_arg_element_16;
        tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_116 == NULL)) {
            tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 869;

            goto try_except_handler_84;
        }
        tmp_called_value_177 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts[68]);
        if (tmp_called_value_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 869;

            goto try_except_handler_84;
        }
        tmp_kw_call_arg_value_0_54 = mod_consts[318];
        tmp_kw_call_arg_value_1_54 = mod_consts[319];
        tmp_kw_call_arg_value_2_54 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[286]);

        if (unlikely(tmp_kw_call_arg_value_2_54 == NULL)) {
            tmp_kw_call_arg_value_2_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[286]);
        }

        if (tmp_kw_call_arg_value_2_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_177);

            exception_lineno = 872;

            goto try_except_handler_84;
        }
        tmp_called_value_178 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_178 == NULL)) {
            tmp_called_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_177);

            exception_lineno = 873;

            goto try_except_handler_84;
        }
        tmp_call_arg_element_16 = MAKE_LIST4(mod_consts[320]);
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 873;
        tmp_kw_call_dict_value_0_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_178, tmp_call_arg_element_16);
        Py_DECREF(tmp_call_arg_element_16);
        if (tmp_kw_call_dict_value_0_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_177);

            exception_lineno = 873;

            goto try_except_handler_84;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 869;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_54, tmp_kw_call_arg_value_1_54, tmp_kw_call_arg_value_2_54};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_54};
            tmp_call_result_104 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_177, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_177);
        Py_DECREF(tmp_kw_call_dict_value_0_54);
        if (tmp_call_result_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 869;

            goto try_except_handler_84;
        }
        Py_DECREF(tmp_call_result_104);
    }
    {
        PyObject *tmp_assign_source_199;
        tmp_assign_source_199 = MAKE_LIST12(mod_consts[321]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[322], tmp_assign_source_199);
    }
    {
        PyObject *tmp_assign_source_200;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        tmp_iadd_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[322]);

        if (unlikely(tmp_iadd_expr_left_1 == NULL)) {
            tmp_iadd_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[322]);
        }

        assert(!(tmp_iadd_expr_left_1 == NULL));
        tmp_iadd_expr_right_1 = MAKE_LIST2(mod_consts[323],mod_consts[324]);
        tmp_inplace_orig = tmp_iadd_expr_left_1;
        tmp_result = INPLACE_OPERATION_ADD_LIST_LIST(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        assert(!(tmp_result == false));
        tmp_assign_source_200 = tmp_iadd_expr_left_1;
        if (tmp_inplace_orig != tmp_assign_source_200) {
            UPDATE_STRING_DICT_INPLACE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[322], tmp_assign_source_200);
        }
    }
    {
        PyObject *tmp_called_value_179;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_call_result_105;
        PyObject *tmp_kw_call_arg_value_0_55;
        PyObject *tmp_kw_call_arg_value_1_55;
        PyObject *tmp_kw_call_arg_value_2_55;
        PyObject *tmp_kw_call_dict_value_0_55;
        PyObject *tmp_called_value_180;
        PyObject *tmp_args_element_value_80;
        tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_117 == NULL)) {
            tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 878;

            goto try_except_handler_84;
        }
        tmp_called_value_179 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[68]);
        if (tmp_called_value_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 878;

            goto try_except_handler_84;
        }
        tmp_kw_call_arg_value_0_55 = mod_consts[325];
        tmp_kw_call_arg_value_1_55 = mod_consts[326];
        tmp_kw_call_arg_value_2_55 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[288]);

        if (unlikely(tmp_kw_call_arg_value_2_55 == NULL)) {
            tmp_kw_call_arg_value_2_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[288]);
        }

        if (tmp_kw_call_arg_value_2_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_179);

            exception_lineno = 881;

            goto try_except_handler_84;
        }
        tmp_called_value_180 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_180 == NULL)) {
            tmp_called_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_179);

            exception_lineno = 882;

            goto try_except_handler_84;
        }
        tmp_args_element_value_80 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[322]);

        if (unlikely(tmp_args_element_value_80 == NULL)) {
            tmp_args_element_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[322]);
        }

        if (tmp_args_element_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_179);

            exception_lineno = 882;

            goto try_except_handler_84;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 882;
        tmp_kw_call_dict_value_0_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_180, tmp_args_element_value_80);
        if (tmp_kw_call_dict_value_0_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_179);

            exception_lineno = 882;

            goto try_except_handler_84;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 878;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_55, tmp_kw_call_arg_value_1_55, tmp_kw_call_arg_value_2_55};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_55};
            tmp_call_result_105 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_179, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_179);
        Py_DECREF(tmp_kw_call_dict_value_0_55);
        if (tmp_call_result_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 878;

            goto try_except_handler_84;
        }
        Py_DECREF(tmp_call_result_105);
    }
    {
        PyObject *tmp_called_value_181;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_call_result_106;
        PyObject *tmp_kw_call_arg_value_0_56;
        PyObject *tmp_kw_call_arg_value_1_56;
        PyObject *tmp_kw_call_arg_value_2_56;
        PyObject *tmp_kw_call_dict_value_0_56;
        tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_118 == NULL)) {
            tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 885;

            goto try_except_handler_84;
        }
        tmp_called_value_181 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts[68]);
        if (tmp_called_value_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 885;

            goto try_except_handler_84;
        }
        tmp_kw_call_arg_value_0_56 = mod_consts[327];
        tmp_kw_call_arg_value_1_56 = Py_False;
        tmp_kw_call_arg_value_2_56 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[290]);

        if (unlikely(tmp_kw_call_arg_value_2_56 == NULL)) {
            tmp_kw_call_arg_value_2_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[290]);
        }

        if (tmp_kw_call_arg_value_2_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_181);

            exception_lineno = 885;

            goto try_except_handler_84;
        }
        tmp_kw_call_dict_value_0_56 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_kw_call_dict_value_0_56 == NULL)) {
            tmp_kw_call_dict_value_0_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_181);

            exception_lineno = 885;

            goto try_except_handler_84;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 885;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_56, tmp_kw_call_arg_value_1_56, tmp_kw_call_arg_value_2_56};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_56};
            tmp_call_result_106 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_181, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_181);
        if (tmp_call_result_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 885;

            goto try_except_handler_84;
        }
        Py_DECREF(tmp_call_result_106);
    }
    {
        PyObject *tmp_called_value_182;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_call_result_107;
        PyObject *tmp_kw_call_arg_value_0_57;
        PyObject *tmp_kw_call_arg_value_1_57;
        PyObject *tmp_kw_call_arg_value_2_57;
        PyObject *tmp_kw_call_dict_value_0_57;
        PyObject *tmp_called_value_183;
        PyObject *tmp_call_arg_element_17;
        tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_119 == NULL)) {
            tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 887;

            goto try_except_handler_84;
        }
        tmp_called_value_182 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts[68]);
        if (tmp_called_value_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 887;

            goto try_except_handler_84;
        }
        tmp_kw_call_arg_value_0_57 = mod_consts[328];
        tmp_kw_call_arg_value_1_57 = Py_None;
        tmp_kw_call_arg_value_2_57 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[292]);

        if (unlikely(tmp_kw_call_arg_value_2_57 == NULL)) {
            tmp_kw_call_arg_value_2_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[292]);
        }

        if (tmp_kw_call_arg_value_2_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);

            exception_lineno = 890;

            goto try_except_handler_84;
        }
        tmp_called_value_183 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_183 == NULL)) {
            tmp_called_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_called_value_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);

            exception_lineno = 891;

            goto try_except_handler_84;
        }
        tmp_call_arg_element_17 = MAKE_LIST2((PyObject *)Py_TYPE(Py_None),(PyObject *)&PyUnicode_Type);
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 891;
        tmp_kw_call_dict_value_0_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_183, tmp_call_arg_element_17);
        Py_DECREF(tmp_call_arg_element_17);
        if (tmp_kw_call_dict_value_0_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);

            exception_lineno = 891;

            goto try_except_handler_84;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 887;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_57, tmp_kw_call_arg_value_1_57, tmp_kw_call_arg_value_2_57};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_57};
            tmp_call_result_107 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_182, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_182);
        Py_DECREF(tmp_kw_call_dict_value_0_57);
        if (tmp_call_result_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 887;

            goto try_except_handler_84;
        }
        Py_DECREF(tmp_call_result_107);
    }
    goto try_end_82;
    // Exception handler code:
    try_except_handler_84:;
    exception_keeper_type_82 = exception_type;
    exception_keeper_value_82 = exception_value;
    exception_keeper_tb_82 = exception_tb;
    exception_keeper_lineno_82 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 21.
    exception_preserved_21 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_82 == NULL) {
        exception_keeper_tb_82 = MAKE_TRACEBACK(frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_82);
    } else if (exception_keeper_lineno_82 != 0) {
        exception_keeper_tb_82 = ADD_TRACEBACK(exception_keeper_tb_82, frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_82);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_82, &exception_keeper_value_82, &exception_keeper_tb_82);
    // Tried code:
    {
        bool tmp_condition_result_82;
        PyObject *tmp_cmp_expr_left_62;
        PyObject *tmp_cmp_expr_right_62;
        tmp_cmp_expr_left_62 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_62 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_62, tmp_cmp_expr_right_62);
        assert(!(tmp_res == -1));
        tmp_condition_result_82 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_82 != false) {
            goto branch_yes_82;
        } else {
            goto branch_no_82;
        }
    }
    branch_yes_82:;
    {
        nuitka_bool tmp_assign_source_201;
        tmp_assign_source_201 = NUITKA_BOOL_FALSE;
        tmp_with_21__indicator = tmp_assign_source_201;
    }
    {
        bool tmp_condition_result_83;
        PyObject *tmp_operand_value_21;
        PyObject *tmp_called_value_184;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_args_element_value_83;
        CHECK_OBJECT(tmp_with_21__exit);
        tmp_called_value_184 = tmp_with_21__exit;
        tmp_args_element_value_81 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_82 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_83 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 796;
        {
            PyObject *call_args[] = {tmp_args_element_value_81, tmp_args_element_value_82, tmp_args_element_value_83};
            tmp_operand_value_21 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_184, call_args);
        }

        if (tmp_operand_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 796;

            goto try_except_handler_85;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_21);
        Py_DECREF(tmp_operand_value_21);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 796;

            goto try_except_handler_85;
        }
        tmp_condition_result_83 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_83 != false) {
            goto branch_yes_83;
        } else {
            goto branch_no_83;
        }
    }
    branch_yes_83:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 796;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_85;
    branch_no_83:;
    goto branch_end_82;
    branch_no_82:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 796;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_85;
    branch_end_82:;
    goto try_end_83;
    // Exception handler code:
    try_except_handler_85:;
    exception_keeper_type_83 = exception_type;
    exception_keeper_value_83 = exception_value;
    exception_keeper_tb_83 = exception_tb;
    exception_keeper_lineno_83 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 21.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_21);

    // Re-raise.
    exception_type = exception_keeper_type_83;
    exception_value = exception_keeper_value_83;
    exception_tb = exception_keeper_tb_83;
    exception_lineno = exception_keeper_lineno_83;

    goto try_except_handler_83;
    // End of try:
    try_end_83:;
    // Restore previous exception id 21.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_21);

    goto try_end_82;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_82:;
    goto try_end_84;
    // Exception handler code:
    try_except_handler_83:;
    exception_keeper_type_84 = exception_type;
    exception_keeper_value_84 = exception_value;
    exception_keeper_tb_84 = exception_tb;
    exception_keeper_lineno_84 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_84;
        nuitka_bool tmp_cmp_expr_left_63;
        nuitka_bool tmp_cmp_expr_right_63;
        assert(tmp_with_21__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_63 = tmp_with_21__indicator;
        tmp_cmp_expr_right_63 = NUITKA_BOOL_TRUE;
        tmp_condition_result_84 = (tmp_cmp_expr_left_63 == tmp_cmp_expr_right_63) ? true : false;
        if (tmp_condition_result_84 != false) {
            goto branch_yes_84;
        } else {
            goto branch_no_84;
        }
    }
    branch_yes_84:;
    {
        PyObject *tmp_called_value_185;
        PyObject *tmp_call_result_108;
        CHECK_OBJECT(tmp_with_21__exit);
        tmp_called_value_185 = tmp_with_21__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 796;
        tmp_call_result_108 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_185, mod_consts[73]);

        if (tmp_call_result_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_84);
            Py_XDECREF(exception_keeper_value_84);
            Py_XDECREF(exception_keeper_tb_84);

            exception_lineno = 796;

            goto try_except_handler_82;
        }
        Py_DECREF(tmp_call_result_108);
    }
    branch_no_84:;
    // Re-raise.
    exception_type = exception_keeper_type_84;
    exception_value = exception_keeper_value_84;
    exception_tb = exception_keeper_tb_84;
    exception_lineno = exception_keeper_lineno_84;

    goto try_except_handler_82;
    // End of try:
    try_end_84:;
    {
        bool tmp_condition_result_85;
        nuitka_bool tmp_cmp_expr_left_64;
        nuitka_bool tmp_cmp_expr_right_64;
        assert(tmp_with_21__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_64 = tmp_with_21__indicator;
        tmp_cmp_expr_right_64 = NUITKA_BOOL_TRUE;
        tmp_condition_result_85 = (tmp_cmp_expr_left_64 == tmp_cmp_expr_right_64) ? true : false;
        if (tmp_condition_result_85 != false) {
            goto branch_yes_85;
        } else {
            goto branch_no_85;
        }
    }
    branch_yes_85:;
    {
        PyObject *tmp_called_value_186;
        PyObject *tmp_call_result_109;
        CHECK_OBJECT(tmp_with_21__exit);
        tmp_called_value_186 = tmp_with_21__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 796;
        tmp_call_result_109 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_186, mod_consts[73]);

        if (tmp_call_result_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 796;

            goto try_except_handler_82;
        }
        Py_DECREF(tmp_call_result_109);
    }
    branch_no_85:;
    goto try_end_85;
    // Exception handler code:
    try_except_handler_82:;
    exception_keeper_type_85 = exception_type;
    exception_keeper_value_85 = exception_value;
    exception_keeper_tb_85 = exception_tb;
    exception_keeper_lineno_85 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_21__source);
    tmp_with_21__source = NULL;
    Py_XDECREF(tmp_with_21__enter);
    tmp_with_21__enter = NULL;
    Py_XDECREF(tmp_with_21__exit);
    tmp_with_21__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_85;
    exception_value = exception_keeper_value_85;
    exception_tb = exception_keeper_tb_85;
    exception_lineno = exception_keeper_lineno_85;

    goto frame_exception_exit_1;
    // End of try:
    try_end_85:;
    CHECK_OBJECT(tmp_with_21__source);
    Py_DECREF(tmp_with_21__source);
    tmp_with_21__source = NULL;
    CHECK_OBJECT(tmp_with_21__enter);
    Py_DECREF(tmp_with_21__enter);
    tmp_with_21__enter = NULL;
    Py_XDECREF(tmp_with_21__exit);
    tmp_with_21__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_202;
        PyObject *tmp_called_instance_23;
        tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_23 == NULL)) {
            tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 895;

            goto try_except_handler_86;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 895;
        tmp_assign_source_202 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_23,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[329], 0)
        );

        if (tmp_assign_source_202 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 895;

            goto try_except_handler_86;
        }
        assert(tmp_with_22__source == NULL);
        tmp_with_22__source = tmp_assign_source_202;
    }
    {
        PyObject *tmp_assign_source_203;
        PyObject *tmp_called_value_187;
        PyObject *tmp_expression_value_120;
        CHECK_OBJECT(tmp_with_22__source);
        tmp_expression_value_120 = tmp_with_22__source;
        tmp_called_value_187 = LOOKUP_SPECIAL(tstate, tmp_expression_value_120, mod_consts[66]);
        if (tmp_called_value_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 895;

            goto try_except_handler_86;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 895;
        tmp_assign_source_203 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_187);
        Py_DECREF(tmp_called_value_187);
        if (tmp_assign_source_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 895;

            goto try_except_handler_86;
        }
        assert(tmp_with_22__enter == NULL);
        tmp_with_22__enter = tmp_assign_source_203;
    }
    {
        PyObject *tmp_assign_source_204;
        PyObject *tmp_expression_value_121;
        CHECK_OBJECT(tmp_with_22__source);
        tmp_expression_value_121 = tmp_with_22__source;
        tmp_assign_source_204 = LOOKUP_SPECIAL(tstate, tmp_expression_value_121, mod_consts[67]);
        if (tmp_assign_source_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 895;

            goto try_except_handler_86;
        }
        assert(tmp_with_22__exit == NULL);
        tmp_with_22__exit = tmp_assign_source_204;
    }
    {
        nuitka_bool tmp_assign_source_205;
        tmp_assign_source_205 = NUITKA_BOOL_TRUE;
        tmp_with_22__indicator = tmp_assign_source_205;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_188;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_call_result_110;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_called_value_189;
        PyObject *tmp_call_arg_element_18;
        tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_122 == NULL)) {
            tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 896;

            goto try_except_handler_88;
        }
        tmp_called_value_188 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts[68]);
        if (tmp_called_value_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 896;

            goto try_except_handler_88;
        }
        tmp_called_value_189 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_189 == NULL)) {
            tmp_called_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);

            exception_lineno = 902;

            goto try_except_handler_88;
        }
        tmp_call_arg_element_18 = MAKE_LIST2(Py_True,Py_False);
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 902;
        tmp_kw_call_value_0_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_189, tmp_call_arg_element_18);
        Py_DECREF(tmp_call_arg_element_18);
        if (tmp_kw_call_value_0_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);

            exception_lineno = 902;

            goto try_except_handler_88;
        }
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 896;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_10};
            tmp_call_result_110 = CALL_FUNCTION_WITH_POSARGS3_KWSPLIT(tstate, tmp_called_value_188, mod_consts[330], kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_188);
        Py_DECREF(tmp_kw_call_value_0_10);
        if (tmp_call_result_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 896;

            goto try_except_handler_88;
        }
        Py_DECREF(tmp_call_result_110);
    }
    goto try_end_86;
    // Exception handler code:
    try_except_handler_88:;
    exception_keeper_type_86 = exception_type;
    exception_keeper_value_86 = exception_value;
    exception_keeper_tb_86 = exception_tb;
    exception_keeper_lineno_86 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 22.
    exception_preserved_22 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_86 == NULL) {
        exception_keeper_tb_86 = MAKE_TRACEBACK(frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_86);
    } else if (exception_keeper_lineno_86 != 0) {
        exception_keeper_tb_86 = ADD_TRACEBACK(exception_keeper_tb_86, frame_e59e5435589cb90a68a203ed1b587df3, exception_keeper_lineno_86);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_86, &exception_keeper_value_86, &exception_keeper_tb_86);
    // Tried code:
    {
        bool tmp_condition_result_86;
        PyObject *tmp_cmp_expr_left_65;
        PyObject *tmp_cmp_expr_right_65;
        tmp_cmp_expr_left_65 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_65 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_65, tmp_cmp_expr_right_65);
        assert(!(tmp_res == -1));
        tmp_condition_result_86 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_86 != false) {
            goto branch_yes_86;
        } else {
            goto branch_no_86;
        }
    }
    branch_yes_86:;
    {
        nuitka_bool tmp_assign_source_206;
        tmp_assign_source_206 = NUITKA_BOOL_FALSE;
        tmp_with_22__indicator = tmp_assign_source_206;
    }
    {
        bool tmp_condition_result_87;
        PyObject *tmp_operand_value_22;
        PyObject *tmp_called_value_190;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_args_element_value_86;
        CHECK_OBJECT(tmp_with_22__exit);
        tmp_called_value_190 = tmp_with_22__exit;
        tmp_args_element_value_84 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_85 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_86 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 895;
        {
            PyObject *call_args[] = {tmp_args_element_value_84, tmp_args_element_value_85, tmp_args_element_value_86};
            tmp_operand_value_22 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_190, call_args);
        }

        if (tmp_operand_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 895;

            goto try_except_handler_89;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_22);
        Py_DECREF(tmp_operand_value_22);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 895;

            goto try_except_handler_89;
        }
        tmp_condition_result_87 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_87 != false) {
            goto branch_yes_87;
        } else {
            goto branch_no_87;
        }
    }
    branch_yes_87:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 895;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_89;
    branch_no_87:;
    goto branch_end_86;
    branch_no_86:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 895;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_89;
    branch_end_86:;
    goto try_end_87;
    // Exception handler code:
    try_except_handler_89:;
    exception_keeper_type_87 = exception_type;
    exception_keeper_value_87 = exception_value;
    exception_keeper_tb_87 = exception_tb;
    exception_keeper_lineno_87 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 22.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_22);

    // Re-raise.
    exception_type = exception_keeper_type_87;
    exception_value = exception_keeper_value_87;
    exception_tb = exception_keeper_tb_87;
    exception_lineno = exception_keeper_lineno_87;

    goto try_except_handler_87;
    // End of try:
    try_end_87:;
    // Restore previous exception id 22.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_22);

    goto try_end_86;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_86:;
    goto try_end_88;
    // Exception handler code:
    try_except_handler_87:;
    exception_keeper_type_88 = exception_type;
    exception_keeper_value_88 = exception_value;
    exception_keeper_tb_88 = exception_tb;
    exception_keeper_lineno_88 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_88;
        nuitka_bool tmp_cmp_expr_left_66;
        nuitka_bool tmp_cmp_expr_right_66;
        assert(tmp_with_22__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_66 = tmp_with_22__indicator;
        tmp_cmp_expr_right_66 = NUITKA_BOOL_TRUE;
        tmp_condition_result_88 = (tmp_cmp_expr_left_66 == tmp_cmp_expr_right_66) ? true : false;
        if (tmp_condition_result_88 != false) {
            goto branch_yes_88;
        } else {
            goto branch_no_88;
        }
    }
    branch_yes_88:;
    {
        PyObject *tmp_called_value_191;
        PyObject *tmp_call_result_111;
        CHECK_OBJECT(tmp_with_22__exit);
        tmp_called_value_191 = tmp_with_22__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 895;
        tmp_call_result_111 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_191, mod_consts[73]);

        if (tmp_call_result_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_88);
            Py_XDECREF(exception_keeper_value_88);
            Py_XDECREF(exception_keeper_tb_88);

            exception_lineno = 895;

            goto try_except_handler_86;
        }
        Py_DECREF(tmp_call_result_111);
    }
    branch_no_88:;
    // Re-raise.
    exception_type = exception_keeper_type_88;
    exception_value = exception_keeper_value_88;
    exception_tb = exception_keeper_tb_88;
    exception_lineno = exception_keeper_lineno_88;

    goto try_except_handler_86;
    // End of try:
    try_end_88:;
    {
        bool tmp_condition_result_89;
        nuitka_bool tmp_cmp_expr_left_67;
        nuitka_bool tmp_cmp_expr_right_67;
        assert(tmp_with_22__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_67 = tmp_with_22__indicator;
        tmp_cmp_expr_right_67 = NUITKA_BOOL_TRUE;
        tmp_condition_result_89 = (tmp_cmp_expr_left_67 == tmp_cmp_expr_right_67) ? true : false;
        if (tmp_condition_result_89 != false) {
            goto branch_yes_89;
        } else {
            goto branch_no_89;
        }
    }
    branch_yes_89:;
    {
        PyObject *tmp_called_value_192;
        PyObject *tmp_call_result_112;
        CHECK_OBJECT(tmp_with_22__exit);
        tmp_called_value_192 = tmp_with_22__exit;
        frame_e59e5435589cb90a68a203ed1b587df3->m_frame.f_lineno = 895;
        tmp_call_result_112 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_192, mod_consts[73]);

        if (tmp_call_result_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 895;

            goto try_except_handler_86;
        }
        Py_DECREF(tmp_call_result_112);
    }
    branch_no_89:;
    goto try_end_89;
    // Exception handler code:
    try_except_handler_86:;
    exception_keeper_type_89 = exception_type;
    exception_keeper_value_89 = exception_value;
    exception_keeper_tb_89 = exception_tb;
    exception_keeper_lineno_89 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_22__source);
    tmp_with_22__source = NULL;
    Py_XDECREF(tmp_with_22__enter);
    tmp_with_22__enter = NULL;
    Py_XDECREF(tmp_with_22__exit);
    tmp_with_22__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_89;
    exception_value = exception_keeper_value_89;
    exception_tb = exception_keeper_tb_89;
    exception_lineno = exception_keeper_lineno_89;

    goto frame_exception_exit_1;
    // End of try:
    try_end_89:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e59e5435589cb90a68a203ed1b587df3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e59e5435589cb90a68a203ed1b587df3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e59e5435589cb90a68a203ed1b587df3, exception_lineno);
    }



    assertFrameObject(frame_e59e5435589cb90a68a203ed1b587df3);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_with_22__source);
    Py_DECREF(tmp_with_22__source);
    tmp_with_22__source = NULL;
    CHECK_OBJECT(tmp_with_22__enter);
    Py_DECREF(tmp_with_22__enter);
    tmp_with_22__enter = NULL;
    Py_XDECREF(tmp_with_22__exit);
    tmp_with_22__exit = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pandas$core$config_init", false);

    Py_INCREF(module_pandas$core$config_init);
    return module_pandas$core$config_init;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pandas$core$config_init", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
