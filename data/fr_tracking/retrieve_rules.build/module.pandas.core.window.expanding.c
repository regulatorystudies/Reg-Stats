/* Generated code for Python module 'pandas$core$window$expanding'
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

/* The "module_pandas$core$window$expanding" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pandas$core$window$expanding;
PyDictObject *moduledict_pandas$core$window$expanding;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[212];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[212];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pandas.core.window.expanding"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 212; i++) {
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
void checkModuleConstants_pandas$core$window$expanding(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 212; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_7cd73c58de89a86957452c037bc962bd;
static PyCodeObject *codeobj_5d377b992df64ef4ec4e1dfbb9728be8;
static PyCodeObject *codeobj_ed0fe4dae4cfaa50f4130e7d0ed03e83;
static PyCodeObject *codeobj_55f8b86549513d807739f95c6457ca2d;
static PyCodeObject *codeobj_ff65499d1324ce5417219352f49f652b;
static PyCodeObject *codeobj_8a4fd8d1ad0887c474a776c10fbe4092;
static PyCodeObject *codeobj_f0e2d88b63ae3cd3376cec8119fc6f0a;
static PyCodeObject *codeobj_9a0f8c0944f57c6dc9d56843f2fb2ab5;
static PyCodeObject *codeobj_1e9d941cc45261554be33e445687d170;
static PyCodeObject *codeobj_1e5c8f5016ddf09057c69f2a4f84f63f;
static PyCodeObject *codeobj_6e77d607d03e6ec4cd8eca4a615bd93f;
static PyCodeObject *codeobj_b598732360728912d8bef2d7f1d69350;
static PyCodeObject *codeobj_1c340ea221caf066995f8fee2a5c48bd;
static PyCodeObject *codeobj_fc67d4b065dcfc908c60a6d19be1e4b0;
static PyCodeObject *codeobj_46842c0b1449ea0bc43c2380ceee3aab;
static PyCodeObject *codeobj_53e167eb4b01c54b6ba56e875725750c;
static PyCodeObject *codeobj_4e427932668b1304b16692e40a89accc;
static PyCodeObject *codeobj_3076d47d4e04069ff5645b8989759cce;
static PyCodeObject *codeobj_1bd23810802bdf6f38dc0427c9f6e216;
static PyCodeObject *codeobj_5c0cb86842b4a2a4deebb06bdecebd0c;
static PyCodeObject *codeobj_cda8f0f8022c68c339955afeb03124b6;
static PyCodeObject *codeobj_fb548db8011dea78b327bd05876e1d3a;
static PyCodeObject *codeobj_887b3bb761997c3133a1c6114f7e22cb;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[197]); CHECK_OBJECT(module_filename_obj);
    codeobj_7cd73c58de89a86957452c037bc962bd = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts[198], mod_consts[198], NULL, NULL, 0, 0, 0);
    codeobj_5d377b992df64ef4ec4e1dfbb9728be8 = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_FUTURE_ANNOTATIONS, mod_consts[73], mod_consts[73], mod_consts[199], NULL, 0, 0, 0);
    codeobj_ed0fe4dae4cfaa50f4130e7d0ed03e83 = MAKE_CODE_OBJECT(module_filename_obj, 945, CO_FUTURE_ANNOTATIONS, mod_consts[193], mod_consts[193], mod_consts[199], NULL, 0, 0, 0);
    codeobj_55f8b86549513d807739f95c6457ca2d = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[1], mod_consts[1], mod_consts[200], mod_consts[199], 6, 0, 0);
    codeobj_ff65499d1324ce5417219352f49f652b = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[92], mod_consts[92], mod_consts[201], NULL, 1, 0, 0);
    codeobj_8a4fd8d1ad0887c474a776c10fbe4092 = MAKE_CODE_OBJECT(module_filename_obj, 952, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[92], mod_consts[92], mod_consts[202], NULL, 1, 0, 0);
    codeobj_f0e2d88b63ae3cd3376cec8119fc6f0a = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[5], mod_consts[5], mod_consts[203], mod_consts[199], 2, 0, 0);
    codeobj_9a0f8c0944f57c6dc9d56843f2fb2ab5 = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[8], mod_consts[8], mod_consts[204], mod_consts[199], 7, 0, 0);
    codeobj_1e9d941cc45261554be33e445687d170 = MAKE_CODE_OBJECT(module_filename_obj, 930, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[29], mod_consts[29], mod_consts[205], mod_consts[199], 5, 0, 0);
    codeobj_1e5c8f5016ddf09057c69f2a4f84f63f = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[6], mod_consts[6], mod_consts[206], mod_consts[199], 2, 0, 0);
    codeobj_6e77d607d03e6ec4cd8eca4a615bd93f = MAKE_CODE_OBJECT(module_filename_obj, 847, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[27], mod_consts[27], mod_consts[205], mod_consts[199], 5, 0, 0);
    codeobj_b598732360728912d8bef2d7f1d69350 = MAKE_CODE_OBJECT(module_filename_obj, 669, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[22], mod_consts[22], mod_consts[206], mod_consts[199], 2, 0, 0);
    codeobj_1c340ea221caf066995f8fee2a5c48bd = MAKE_CODE_OBJECT(module_filename_obj, 315, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[12], mod_consts[12], mod_consts[207], mod_consts[199], 4, 0, 0);
    codeobj_fc67d4b065dcfc908c60a6d19be1e4b0 = MAKE_CODE_OBJECT(module_filename_obj, 393, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[14], mod_consts[14], mod_consts[207], mod_consts[199], 4, 0, 0);
    codeobj_46842c0b1449ea0bc43c2380ceee3aab = MAKE_CODE_OBJECT(module_filename_obj, 432, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[15], mod_consts[15], mod_consts[207], mod_consts[199], 4, 0, 0);
    codeobj_53e167eb4b01c54b6ba56e875725750c = MAKE_CODE_OBJECT(module_filename_obj, 354, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[13], mod_consts[13], mod_consts[207], mod_consts[199], 4, 0, 0);
    codeobj_4e427932668b1304b16692e40a89accc = MAKE_CODE_OBJECT(module_filename_obj, 718, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[23], mod_consts[23], mod_consts[208], mod_consts[199], 4, 0, 0);
    codeobj_3076d47d4e04069ff5645b8989759cce = MAKE_CODE_OBJECT(module_filename_obj, 791, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[25], mod_consts[25], mod_consts[209], mod_consts[199], 5, 0, 0);
    codeobj_1bd23810802bdf6f38dc0427c9f6e216 = MAKE_CODE_OBJECT(module_filename_obj, 598, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[19], mod_consts[19], mod_consts[210], mod_consts[199], 3, 0, 0);
    codeobj_5c0cb86842b4a2a4deebb06bdecebd0c = MAKE_CODE_OBJECT(module_filename_obj, 629, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[21], mod_consts[21], mod_consts[206], mod_consts[199], 2, 0, 0);
    codeobj_cda8f0f8022c68c339955afeb03124b6 = MAKE_CODE_OBJECT(module_filename_obj, 490, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[16], mod_consts[16], mod_consts[211], mod_consts[199], 5, 0, 0);
    codeobj_fb548db8011dea78b327bd05876e1d3a = MAKE_CODE_OBJECT(module_filename_obj, 276, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[10], mod_consts[10], mod_consts[207], mod_consts[199], 4, 0, 0);
    codeobj_887b3bb761997c3133a1c6114f7e22cb = MAKE_CODE_OBJECT(module_filename_obj, 550, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[18], mod_consts[18], mod_consts[211], mod_consts[199], 5, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__8_complex_call_helper_pos_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__10_median(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__11_std(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__12_var(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__13_sem(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__14_skew(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__15_kurt(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__16_quantile(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__17_rank(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__18_cov(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__19_corr(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__1___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__20__get_window_indexer(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__2__get_window_indexer(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__3_aggregate(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__4_count(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__5_apply(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__6_sum(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__7_max(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__8_min(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__9_mean(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_pandas$core$window$expanding$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_obj = python_pars[1];
    PyObject *par_min_periods = python_pars[2];
    PyObject *par_axis = python_pars[3];
    PyObject *par_method = python_pars[4];
    PyObject *par_selection = python_pars[5];
    struct Nuitka_FrameObject *frame_55f8b86549513d807739f95c6457ca2d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_55f8b86549513d807739f95c6457ca2d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_55f8b86549513d807739f95c6457ca2d)) {
        Py_XDECREF(cache_frame_55f8b86549513d807739f95c6457ca2d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_55f8b86549513d807739f95c6457ca2d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_55f8b86549513d807739f95c6457ca2d = MAKE_FUNCTION_FRAME(tstate, codeobj_55f8b86549513d807739f95c6457ca2d, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_55f8b86549513d807739f95c6457ca2d->m_type_description == NULL);
    frame_55f8b86549513d807739f95c6457ca2d = cache_frame_55f8b86549513d807739f95c6457ca2d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_55f8b86549513d807739f95c6457ca2d);
    assert(Py_REFCNT(frame_55f8b86549513d807739f95c6457ca2d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 132;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_kw_call_value_0_1 = par_obj;
        CHECK_OBJECT(par_min_periods);
        tmp_kw_call_value_1_1 = par_min_periods;
        CHECK_OBJECT(par_axis);
        tmp_kw_call_value_2_1 = par_axis;
        CHECK_OBJECT(par_method);
        tmp_kw_call_value_3_1 = par_method;
        CHECK_OBJECT(par_selection);
        tmp_kw_call_value_4_1 = par_selection;
        frame_55f8b86549513d807739f95c6457ca2d->m_frame.f_lineno = 132;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_55f8b86549513d807739f95c6457ca2d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_55f8b86549513d807739f95c6457ca2d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_55f8b86549513d807739f95c6457ca2d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_55f8b86549513d807739f95c6457ca2d,
        type_description_1,
        par_self,
        par_obj,
        par_min_periods,
        par_axis,
        par_method,
        par_selection,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_55f8b86549513d807739f95c6457ca2d == cache_frame_55f8b86549513d807739f95c6457ca2d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_55f8b86549513d807739f95c6457ca2d);
        cache_frame_55f8b86549513d807739f95c6457ca2d = NULL;
    }

    assertFrameObject(frame_55f8b86549513d807739f95c6457ca2d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_min_periods);
    Py_DECREF(par_min_periods);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_selection);
    Py_DECREF(par_selection);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_min_periods);
    Py_DECREF(par_min_periods);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_selection);
    Py_DECREF(par_selection);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__2__get_window_indexer(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ff65499d1324ce5417219352f49f652b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ff65499d1324ce5417219352f49f652b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ff65499d1324ce5417219352f49f652b)) {
        Py_XDECREF(cache_frame_ff65499d1324ce5417219352f49f652b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ff65499d1324ce5417219352f49f652b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ff65499d1324ce5417219352f49f652b = MAKE_FUNCTION_FRAME(tstate, codeobj_ff65499d1324ce5417219352f49f652b, module_pandas$core$window$expanding, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ff65499d1324ce5417219352f49f652b->m_type_description == NULL);
    frame_ff65499d1324ce5417219352f49f652b = cache_frame_ff65499d1324ce5417219352f49f652b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ff65499d1324ce5417219352f49f652b);
    assert(Py_REFCNT(frame_ff65499d1324ce5417219352f49f652b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ff65499d1324ce5417219352f49f652b->m_frame.f_lineno = 144;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ff65499d1324ce5417219352f49f652b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ff65499d1324ce5417219352f49f652b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ff65499d1324ce5417219352f49f652b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ff65499d1324ce5417219352f49f652b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ff65499d1324ce5417219352f49f652b == cache_frame_ff65499d1324ce5417219352f49f652b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ff65499d1324ce5417219352f49f652b);
        cache_frame_ff65499d1324ce5417219352f49f652b = NULL;
    }

    assertFrameObject(frame_ff65499d1324ce5417219352f49f652b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__3_aggregate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_func = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_f0e2d88b63ae3cd3376cec8119fc6f0a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f0e2d88b63ae3cd3376cec8119fc6f0a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f0e2d88b63ae3cd3376cec8119fc6f0a)) {
        Py_XDECREF(cache_frame_f0e2d88b63ae3cd3376cec8119fc6f0a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f0e2d88b63ae3cd3376cec8119fc6f0a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f0e2d88b63ae3cd3376cec8119fc6f0a = MAKE_FUNCTION_FRAME(tstate, codeobj_f0e2d88b63ae3cd3376cec8119fc6f0a, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f0e2d88b63ae3cd3376cec8119fc6f0a->m_type_description == NULL);
    frame_f0e2d88b63ae3cd3376cec8119fc6f0a = cache_frame_f0e2d88b63ae3cd3376cec8119fc6f0a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f0e2d88b63ae3cd3376cec8119fc6f0a);
    assert(Py_REFCNT(frame_f0e2d88b63ae3cd3376cec8119fc6f0a) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 178;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_tuple_element_1 = par_func;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__8_complex_call_helper_pos_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f0e2d88b63ae3cd3376cec8119fc6f0a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f0e2d88b63ae3cd3376cec8119fc6f0a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f0e2d88b63ae3cd3376cec8119fc6f0a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f0e2d88b63ae3cd3376cec8119fc6f0a,
        type_description_1,
        par_self,
        par_func,
        par_args,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_f0e2d88b63ae3cd3376cec8119fc6f0a == cache_frame_f0e2d88b63ae3cd3376cec8119fc6f0a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f0e2d88b63ae3cd3376cec8119fc6f0a);
        cache_frame_f0e2d88b63ae3cd3376cec8119fc6f0a = NULL;
    }

    assertFrameObject(frame_f0e2d88b63ae3cd3376cec8119fc6f0a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__4_count(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numeric_only = python_pars[1];
    struct Nuitka_FrameObject *frame_1e5c8f5016ddf09057c69f2a4f84f63f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1e5c8f5016ddf09057c69f2a4f84f63f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1e5c8f5016ddf09057c69f2a4f84f63f)) {
        Py_XDECREF(cache_frame_1e5c8f5016ddf09057c69f2a4f84f63f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e5c8f5016ddf09057c69f2a4f84f63f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e5c8f5016ddf09057c69f2a4f84f63f = MAKE_FUNCTION_FRAME(tstate, codeobj_1e5c8f5016ddf09057c69f2a4f84f63f, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1e5c8f5016ddf09057c69f2a4f84f63f->m_type_description == NULL);
    frame_1e5c8f5016ddf09057c69f2a4f84f63f = cache_frame_1e5c8f5016ddf09057c69f2a4f84f63f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1e5c8f5016ddf09057c69f2a4f84f63f);
    assert(Py_REFCNT(frame_1e5c8f5016ddf09057c69f2a4f84f63f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 205;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[6]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_0_1 = par_numeric_only;
        frame_1e5c8f5016ddf09057c69f2a4f84f63f->m_frame.f_lineno = 205;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1e5c8f5016ddf09057c69f2a4f84f63f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e5c8f5016ddf09057c69f2a4f84f63f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e5c8f5016ddf09057c69f2a4f84f63f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e5c8f5016ddf09057c69f2a4f84f63f,
        type_description_1,
        par_self,
        par_numeric_only,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_1e5c8f5016ddf09057c69f2a4f84f63f == cache_frame_1e5c8f5016ddf09057c69f2a4f84f63f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1e5c8f5016ddf09057c69f2a4f84f63f);
        cache_frame_1e5c8f5016ddf09057c69f2a4f84f63f = NULL;
    }

    assertFrameObject(frame_1e5c8f5016ddf09057c69f2a4f84f63f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__5_apply(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_func = python_pars[1];
    PyObject *par_raw = python_pars[2];
    PyObject *par_engine = python_pars[3];
    PyObject *par_engine_kwargs = python_pars[4];
    PyObject *par_args = python_pars[5];
    PyObject *par_kwargs = python_pars[6];
    struct Nuitka_FrameObject *frame_9a0f8c0944f57c6dc9d56843f2fb2ab5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9a0f8c0944f57c6dc9d56843f2fb2ab5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9a0f8c0944f57c6dc9d56843f2fb2ab5)) {
        Py_XDECREF(cache_frame_9a0f8c0944f57c6dc9d56843f2fb2ab5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9a0f8c0944f57c6dc9d56843f2fb2ab5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9a0f8c0944f57c6dc9d56843f2fb2ab5 = MAKE_FUNCTION_FRAME(tstate, codeobj_9a0f8c0944f57c6dc9d56843f2fb2ab5, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9a0f8c0944f57c6dc9d56843f2fb2ab5->m_type_description == NULL);
    frame_9a0f8c0944f57c6dc9d56843f2fb2ab5 = cache_frame_9a0f8c0944f57c6dc9d56843f2fb2ab5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9a0f8c0944f57c6dc9d56843f2fb2ab5);
    assert(Py_REFCNT(frame_9a0f8c0944f57c6dc9d56843f2fb2ab5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 240;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_kw_call_arg_value_0_1 = par_func;
        CHECK_OBJECT(par_raw);
        tmp_kw_call_dict_value_0_1 = par_raw;
        CHECK_OBJECT(par_engine);
        tmp_kw_call_dict_value_1_1 = par_engine;
        CHECK_OBJECT(par_engine_kwargs);
        tmp_kw_call_dict_value_2_1 = par_engine_kwargs;
        CHECK_OBJECT(par_args);
        tmp_kw_call_dict_value_3_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_kw_call_dict_value_4_1 = par_kwargs;
        frame_9a0f8c0944f57c6dc9d56843f2fb2ab5->m_frame.f_lineno = 240;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[9]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9a0f8c0944f57c6dc9d56843f2fb2ab5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9a0f8c0944f57c6dc9d56843f2fb2ab5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9a0f8c0944f57c6dc9d56843f2fb2ab5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9a0f8c0944f57c6dc9d56843f2fb2ab5,
        type_description_1,
        par_self,
        par_func,
        par_raw,
        par_engine,
        par_engine_kwargs,
        par_args,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_9a0f8c0944f57c6dc9d56843f2fb2ab5 == cache_frame_9a0f8c0944f57c6dc9d56843f2fb2ab5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9a0f8c0944f57c6dc9d56843f2fb2ab5);
        cache_frame_9a0f8c0944f57c6dc9d56843f2fb2ab5 = NULL;
    }

    assertFrameObject(frame_9a0f8c0944f57c6dc9d56843f2fb2ab5);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_raw);
    Py_DECREF(par_raw);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_raw);
    Py_DECREF(par_raw);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__6_sum(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numeric_only = python_pars[1];
    PyObject *par_engine = python_pars[2];
    PyObject *par_engine_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_fb548db8011dea78b327bd05876e1d3a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fb548db8011dea78b327bd05876e1d3a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fb548db8011dea78b327bd05876e1d3a)) {
        Py_XDECREF(cache_frame_fb548db8011dea78b327bd05876e1d3a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fb548db8011dea78b327bd05876e1d3a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fb548db8011dea78b327bd05876e1d3a = MAKE_FUNCTION_FRAME(tstate, codeobj_fb548db8011dea78b327bd05876e1d3a, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fb548db8011dea78b327bd05876e1d3a->m_type_description == NULL);
    frame_fb548db8011dea78b327bd05876e1d3a = cache_frame_fb548db8011dea78b327bd05876e1d3a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fb548db8011dea78b327bd05876e1d3a);
    assert(Py_REFCNT(frame_fb548db8011dea78b327bd05876e1d3a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 282;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[10]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_0_1 = par_numeric_only;
        CHECK_OBJECT(par_engine);
        tmp_kw_call_value_1_1 = par_engine;
        CHECK_OBJECT(par_engine_kwargs);
        tmp_kw_call_value_2_1 = par_engine_kwargs;
        frame_fb548db8011dea78b327bd05876e1d3a->m_frame.f_lineno = 282;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fb548db8011dea78b327bd05876e1d3a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fb548db8011dea78b327bd05876e1d3a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fb548db8011dea78b327bd05876e1d3a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fb548db8011dea78b327bd05876e1d3a,
        type_description_1,
        par_self,
        par_numeric_only,
        par_engine,
        par_engine_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_fb548db8011dea78b327bd05876e1d3a == cache_frame_fb548db8011dea78b327bd05876e1d3a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fb548db8011dea78b327bd05876e1d3a);
        cache_frame_fb548db8011dea78b327bd05876e1d3a = NULL;
    }

    assertFrameObject(frame_fb548db8011dea78b327bd05876e1d3a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__7_max(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numeric_only = python_pars[1];
    PyObject *par_engine = python_pars[2];
    PyObject *par_engine_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_1c340ea221caf066995f8fee2a5c48bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1c340ea221caf066995f8fee2a5c48bd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1c340ea221caf066995f8fee2a5c48bd)) {
        Py_XDECREF(cache_frame_1c340ea221caf066995f8fee2a5c48bd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1c340ea221caf066995f8fee2a5c48bd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1c340ea221caf066995f8fee2a5c48bd = MAKE_FUNCTION_FRAME(tstate, codeobj_1c340ea221caf066995f8fee2a5c48bd, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1c340ea221caf066995f8fee2a5c48bd->m_type_description == NULL);
    frame_1c340ea221caf066995f8fee2a5c48bd = cache_frame_1c340ea221caf066995f8fee2a5c48bd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1c340ea221caf066995f8fee2a5c48bd);
    assert(Py_REFCNT(frame_1c340ea221caf066995f8fee2a5c48bd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 321;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[12]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_0_1 = par_numeric_only;
        CHECK_OBJECT(par_engine);
        tmp_kw_call_value_1_1 = par_engine;
        CHECK_OBJECT(par_engine_kwargs);
        tmp_kw_call_value_2_1 = par_engine_kwargs;
        frame_1c340ea221caf066995f8fee2a5c48bd->m_frame.f_lineno = 321;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c340ea221caf066995f8fee2a5c48bd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c340ea221caf066995f8fee2a5c48bd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c340ea221caf066995f8fee2a5c48bd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1c340ea221caf066995f8fee2a5c48bd,
        type_description_1,
        par_self,
        par_numeric_only,
        par_engine,
        par_engine_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_1c340ea221caf066995f8fee2a5c48bd == cache_frame_1c340ea221caf066995f8fee2a5c48bd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1c340ea221caf066995f8fee2a5c48bd);
        cache_frame_1c340ea221caf066995f8fee2a5c48bd = NULL;
    }

    assertFrameObject(frame_1c340ea221caf066995f8fee2a5c48bd);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__8_min(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numeric_only = python_pars[1];
    PyObject *par_engine = python_pars[2];
    PyObject *par_engine_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_53e167eb4b01c54b6ba56e875725750c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_53e167eb4b01c54b6ba56e875725750c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_53e167eb4b01c54b6ba56e875725750c)) {
        Py_XDECREF(cache_frame_53e167eb4b01c54b6ba56e875725750c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_53e167eb4b01c54b6ba56e875725750c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_53e167eb4b01c54b6ba56e875725750c = MAKE_FUNCTION_FRAME(tstate, codeobj_53e167eb4b01c54b6ba56e875725750c, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_53e167eb4b01c54b6ba56e875725750c->m_type_description == NULL);
    frame_53e167eb4b01c54b6ba56e875725750c = cache_frame_53e167eb4b01c54b6ba56e875725750c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_53e167eb4b01c54b6ba56e875725750c);
    assert(Py_REFCNT(frame_53e167eb4b01c54b6ba56e875725750c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 360;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[13]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_0_1 = par_numeric_only;
        CHECK_OBJECT(par_engine);
        tmp_kw_call_value_1_1 = par_engine;
        CHECK_OBJECT(par_engine_kwargs);
        tmp_kw_call_value_2_1 = par_engine_kwargs;
        frame_53e167eb4b01c54b6ba56e875725750c->m_frame.f_lineno = 360;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_53e167eb4b01c54b6ba56e875725750c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_53e167eb4b01c54b6ba56e875725750c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_53e167eb4b01c54b6ba56e875725750c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_53e167eb4b01c54b6ba56e875725750c,
        type_description_1,
        par_self,
        par_numeric_only,
        par_engine,
        par_engine_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_53e167eb4b01c54b6ba56e875725750c == cache_frame_53e167eb4b01c54b6ba56e875725750c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_53e167eb4b01c54b6ba56e875725750c);
        cache_frame_53e167eb4b01c54b6ba56e875725750c = NULL;
    }

    assertFrameObject(frame_53e167eb4b01c54b6ba56e875725750c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__9_mean(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numeric_only = python_pars[1];
    PyObject *par_engine = python_pars[2];
    PyObject *par_engine_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_fc67d4b065dcfc908c60a6d19be1e4b0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fc67d4b065dcfc908c60a6d19be1e4b0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fc67d4b065dcfc908c60a6d19be1e4b0)) {
        Py_XDECREF(cache_frame_fc67d4b065dcfc908c60a6d19be1e4b0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fc67d4b065dcfc908c60a6d19be1e4b0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fc67d4b065dcfc908c60a6d19be1e4b0 = MAKE_FUNCTION_FRAME(tstate, codeobj_fc67d4b065dcfc908c60a6d19be1e4b0, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fc67d4b065dcfc908c60a6d19be1e4b0->m_type_description == NULL);
    frame_fc67d4b065dcfc908c60a6d19be1e4b0 = cache_frame_fc67d4b065dcfc908c60a6d19be1e4b0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fc67d4b065dcfc908c60a6d19be1e4b0);
    assert(Py_REFCNT(frame_fc67d4b065dcfc908c60a6d19be1e4b0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 399;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_0_1 = par_numeric_only;
        CHECK_OBJECT(par_engine);
        tmp_kw_call_value_1_1 = par_engine;
        CHECK_OBJECT(par_engine_kwargs);
        tmp_kw_call_value_2_1 = par_engine_kwargs;
        frame_fc67d4b065dcfc908c60a6d19be1e4b0->m_frame.f_lineno = 399;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fc67d4b065dcfc908c60a6d19be1e4b0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fc67d4b065dcfc908c60a6d19be1e4b0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fc67d4b065dcfc908c60a6d19be1e4b0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fc67d4b065dcfc908c60a6d19be1e4b0,
        type_description_1,
        par_self,
        par_numeric_only,
        par_engine,
        par_engine_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_fc67d4b065dcfc908c60a6d19be1e4b0 == cache_frame_fc67d4b065dcfc908c60a6d19be1e4b0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fc67d4b065dcfc908c60a6d19be1e4b0);
        cache_frame_fc67d4b065dcfc908c60a6d19be1e4b0 = NULL;
    }

    assertFrameObject(frame_fc67d4b065dcfc908c60a6d19be1e4b0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__10_median(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numeric_only = python_pars[1];
    PyObject *par_engine = python_pars[2];
    PyObject *par_engine_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_46842c0b1449ea0bc43c2380ceee3aab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_46842c0b1449ea0bc43c2380ceee3aab = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_46842c0b1449ea0bc43c2380ceee3aab)) {
        Py_XDECREF(cache_frame_46842c0b1449ea0bc43c2380ceee3aab);

#if _DEBUG_REFCOUNTS
        if (cache_frame_46842c0b1449ea0bc43c2380ceee3aab == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_46842c0b1449ea0bc43c2380ceee3aab = MAKE_FUNCTION_FRAME(tstate, codeobj_46842c0b1449ea0bc43c2380ceee3aab, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_46842c0b1449ea0bc43c2380ceee3aab->m_type_description == NULL);
    frame_46842c0b1449ea0bc43c2380ceee3aab = cache_frame_46842c0b1449ea0bc43c2380ceee3aab;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_46842c0b1449ea0bc43c2380ceee3aab);
    assert(Py_REFCNT(frame_46842c0b1449ea0bc43c2380ceee3aab) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 438;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[15]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_0_1 = par_numeric_only;
        CHECK_OBJECT(par_engine);
        tmp_kw_call_value_1_1 = par_engine;
        CHECK_OBJECT(par_engine_kwargs);
        tmp_kw_call_value_2_1 = par_engine_kwargs;
        frame_46842c0b1449ea0bc43c2380ceee3aab->m_frame.f_lineno = 438;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_46842c0b1449ea0bc43c2380ceee3aab, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_46842c0b1449ea0bc43c2380ceee3aab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_46842c0b1449ea0bc43c2380ceee3aab, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_46842c0b1449ea0bc43c2380ceee3aab,
        type_description_1,
        par_self,
        par_numeric_only,
        par_engine,
        par_engine_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_46842c0b1449ea0bc43c2380ceee3aab == cache_frame_46842c0b1449ea0bc43c2380ceee3aab) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_46842c0b1449ea0bc43c2380ceee3aab);
        cache_frame_46842c0b1449ea0bc43c2380ceee3aab = NULL;
    }

    assertFrameObject(frame_46842c0b1449ea0bc43c2380ceee3aab);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__11_std(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ddof = python_pars[1];
    PyObject *par_numeric_only = python_pars[2];
    PyObject *par_engine = python_pars[3];
    PyObject *par_engine_kwargs = python_pars[4];
    struct Nuitka_FrameObject *frame_cda8f0f8022c68c339955afeb03124b6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cda8f0f8022c68c339955afeb03124b6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cda8f0f8022c68c339955afeb03124b6)) {
        Py_XDECREF(cache_frame_cda8f0f8022c68c339955afeb03124b6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cda8f0f8022c68c339955afeb03124b6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cda8f0f8022c68c339955afeb03124b6 = MAKE_FUNCTION_FRAME(tstate, codeobj_cda8f0f8022c68c339955afeb03124b6, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cda8f0f8022c68c339955afeb03124b6->m_type_description == NULL);
    frame_cda8f0f8022c68c339955afeb03124b6 = cache_frame_cda8f0f8022c68c339955afeb03124b6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cda8f0f8022c68c339955afeb03124b6);
    assert(Py_REFCNT(frame_cda8f0f8022c68c339955afeb03124b6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 497;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[16]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ddof);
        tmp_kw_call_value_0_1 = par_ddof;
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_1_1 = par_numeric_only;
        CHECK_OBJECT(par_engine);
        tmp_kw_call_value_2_1 = par_engine;
        CHECK_OBJECT(par_engine_kwargs);
        tmp_kw_call_value_3_1 = par_engine_kwargs;
        frame_cda8f0f8022c68c339955afeb03124b6->m_frame.f_lineno = 497;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[17]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cda8f0f8022c68c339955afeb03124b6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cda8f0f8022c68c339955afeb03124b6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cda8f0f8022c68c339955afeb03124b6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cda8f0f8022c68c339955afeb03124b6,
        type_description_1,
        par_self,
        par_ddof,
        par_numeric_only,
        par_engine,
        par_engine_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_cda8f0f8022c68c339955afeb03124b6 == cache_frame_cda8f0f8022c68c339955afeb03124b6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cda8f0f8022c68c339955afeb03124b6);
        cache_frame_cda8f0f8022c68c339955afeb03124b6 = NULL;
    }

    assertFrameObject(frame_cda8f0f8022c68c339955afeb03124b6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__12_var(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ddof = python_pars[1];
    PyObject *par_numeric_only = python_pars[2];
    PyObject *par_engine = python_pars[3];
    PyObject *par_engine_kwargs = python_pars[4];
    struct Nuitka_FrameObject *frame_887b3bb761997c3133a1c6114f7e22cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_887b3bb761997c3133a1c6114f7e22cb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_887b3bb761997c3133a1c6114f7e22cb)) {
        Py_XDECREF(cache_frame_887b3bb761997c3133a1c6114f7e22cb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_887b3bb761997c3133a1c6114f7e22cb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_887b3bb761997c3133a1c6114f7e22cb = MAKE_FUNCTION_FRAME(tstate, codeobj_887b3bb761997c3133a1c6114f7e22cb, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_887b3bb761997c3133a1c6114f7e22cb->m_type_description == NULL);
    frame_887b3bb761997c3133a1c6114f7e22cb = cache_frame_887b3bb761997c3133a1c6114f7e22cb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_887b3bb761997c3133a1c6114f7e22cb);
    assert(Py_REFCNT(frame_887b3bb761997c3133a1c6114f7e22cb) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 557;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[18]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ddof);
        tmp_kw_call_value_0_1 = par_ddof;
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_1_1 = par_numeric_only;
        CHECK_OBJECT(par_engine);
        tmp_kw_call_value_2_1 = par_engine;
        CHECK_OBJECT(par_engine_kwargs);
        tmp_kw_call_value_3_1 = par_engine_kwargs;
        frame_887b3bb761997c3133a1c6114f7e22cb->m_frame.f_lineno = 557;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[17]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_887b3bb761997c3133a1c6114f7e22cb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_887b3bb761997c3133a1c6114f7e22cb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_887b3bb761997c3133a1c6114f7e22cb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_887b3bb761997c3133a1c6114f7e22cb,
        type_description_1,
        par_self,
        par_ddof,
        par_numeric_only,
        par_engine,
        par_engine_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_887b3bb761997c3133a1c6114f7e22cb == cache_frame_887b3bb761997c3133a1c6114f7e22cb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_887b3bb761997c3133a1c6114f7e22cb);
        cache_frame_887b3bb761997c3133a1c6114f7e22cb = NULL;
    }

    assertFrameObject(frame_887b3bb761997c3133a1c6114f7e22cb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__13_sem(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ddof = python_pars[1];
    PyObject *par_numeric_only = python_pars[2];
    struct Nuitka_FrameObject *frame_1bd23810802bdf6f38dc0427c9f6e216;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1bd23810802bdf6f38dc0427c9f6e216 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1bd23810802bdf6f38dc0427c9f6e216)) {
        Py_XDECREF(cache_frame_1bd23810802bdf6f38dc0427c9f6e216);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1bd23810802bdf6f38dc0427c9f6e216 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1bd23810802bdf6f38dc0427c9f6e216 = MAKE_FUNCTION_FRAME(tstate, codeobj_1bd23810802bdf6f38dc0427c9f6e216, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1bd23810802bdf6f38dc0427c9f6e216->m_type_description == NULL);
    frame_1bd23810802bdf6f38dc0427c9f6e216 = cache_frame_1bd23810802bdf6f38dc0427c9f6e216;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1bd23810802bdf6f38dc0427c9f6e216);
    assert(Py_REFCNT(frame_1bd23810802bdf6f38dc0427c9f6e216) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 599;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 599;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 599;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ddof);
        tmp_kw_call_value_0_1 = par_ddof;
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_1_1 = par_numeric_only;
        frame_1bd23810802bdf6f38dc0427c9f6e216->m_frame.f_lineno = 599;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[20]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 599;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1bd23810802bdf6f38dc0427c9f6e216, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1bd23810802bdf6f38dc0427c9f6e216->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1bd23810802bdf6f38dc0427c9f6e216, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1bd23810802bdf6f38dc0427c9f6e216,
        type_description_1,
        par_self,
        par_ddof,
        par_numeric_only,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_1bd23810802bdf6f38dc0427c9f6e216 == cache_frame_1bd23810802bdf6f38dc0427c9f6e216) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1bd23810802bdf6f38dc0427c9f6e216);
        cache_frame_1bd23810802bdf6f38dc0427c9f6e216 = NULL;
    }

    assertFrameObject(frame_1bd23810802bdf6f38dc0427c9f6e216);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__14_skew(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numeric_only = python_pars[1];
    struct Nuitka_FrameObject *frame_5c0cb86842b4a2a4deebb06bdecebd0c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5c0cb86842b4a2a4deebb06bdecebd0c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5c0cb86842b4a2a4deebb06bdecebd0c)) {
        Py_XDECREF(cache_frame_5c0cb86842b4a2a4deebb06bdecebd0c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5c0cb86842b4a2a4deebb06bdecebd0c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5c0cb86842b4a2a4deebb06bdecebd0c = MAKE_FUNCTION_FRAME(tstate, codeobj_5c0cb86842b4a2a4deebb06bdecebd0c, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5c0cb86842b4a2a4deebb06bdecebd0c->m_type_description == NULL);
    frame_5c0cb86842b4a2a4deebb06bdecebd0c = cache_frame_5c0cb86842b4a2a4deebb06bdecebd0c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5c0cb86842b4a2a4deebb06bdecebd0c);
    assert(Py_REFCNT(frame_5c0cb86842b4a2a4deebb06bdecebd0c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 630;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 630;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[21]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 630;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_0_1 = par_numeric_only;
        frame_5c0cb86842b4a2a4deebb06bdecebd0c->m_frame.f_lineno = 630;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 630;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5c0cb86842b4a2a4deebb06bdecebd0c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5c0cb86842b4a2a4deebb06bdecebd0c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5c0cb86842b4a2a4deebb06bdecebd0c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5c0cb86842b4a2a4deebb06bdecebd0c,
        type_description_1,
        par_self,
        par_numeric_only,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_5c0cb86842b4a2a4deebb06bdecebd0c == cache_frame_5c0cb86842b4a2a4deebb06bdecebd0c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5c0cb86842b4a2a4deebb06bdecebd0c);
        cache_frame_5c0cb86842b4a2a4deebb06bdecebd0c = NULL;
    }

    assertFrameObject(frame_5c0cb86842b4a2a4deebb06bdecebd0c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__15_kurt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numeric_only = python_pars[1];
    struct Nuitka_FrameObject *frame_b598732360728912d8bef2d7f1d69350;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b598732360728912d8bef2d7f1d69350 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b598732360728912d8bef2d7f1d69350)) {
        Py_XDECREF(cache_frame_b598732360728912d8bef2d7f1d69350);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b598732360728912d8bef2d7f1d69350 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b598732360728912d8bef2d7f1d69350 = MAKE_FUNCTION_FRAME(tstate, codeobj_b598732360728912d8bef2d7f1d69350, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b598732360728912d8bef2d7f1d69350->m_type_description == NULL);
    frame_b598732360728912d8bef2d7f1d69350 = cache_frame_b598732360728912d8bef2d7f1d69350;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b598732360728912d8bef2d7f1d69350);
    assert(Py_REFCNT(frame_b598732360728912d8bef2d7f1d69350) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 670;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 670;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[22]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 670;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_0_1 = par_numeric_only;
        frame_b598732360728912d8bef2d7f1d69350->m_frame.f_lineno = 670;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 670;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b598732360728912d8bef2d7f1d69350, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b598732360728912d8bef2d7f1d69350->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b598732360728912d8bef2d7f1d69350, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b598732360728912d8bef2d7f1d69350,
        type_description_1,
        par_self,
        par_numeric_only,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_b598732360728912d8bef2d7f1d69350 == cache_frame_b598732360728912d8bef2d7f1d69350) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b598732360728912d8bef2d7f1d69350);
        cache_frame_b598732360728912d8bef2d7f1d69350 = NULL;
    }

    assertFrameObject(frame_b598732360728912d8bef2d7f1d69350);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__16_quantile(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_q = python_pars[1];
    PyObject *par_interpolation = python_pars[2];
    PyObject *par_numeric_only = python_pars[3];
    struct Nuitka_FrameObject *frame_4e427932668b1304b16692e40a89accc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4e427932668b1304b16692e40a89accc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4e427932668b1304b16692e40a89accc)) {
        Py_XDECREF(cache_frame_4e427932668b1304b16692e40a89accc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4e427932668b1304b16692e40a89accc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4e427932668b1304b16692e40a89accc = MAKE_FUNCTION_FRAME(tstate, codeobj_4e427932668b1304b16692e40a89accc, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4e427932668b1304b16692e40a89accc->m_type_description == NULL);
    frame_4e427932668b1304b16692e40a89accc = cache_frame_4e427932668b1304b16692e40a89accc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4e427932668b1304b16692e40a89accc);
    assert(Py_REFCNT(frame_4e427932668b1304b16692e40a89accc) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 724;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_q);
        tmp_kw_call_value_0_1 = par_q;
        CHECK_OBJECT(par_interpolation);
        tmp_kw_call_value_1_1 = par_interpolation;
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_2_1 = par_numeric_only;
        frame_4e427932668b1304b16692e40a89accc->m_frame.f_lineno = 724;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[24]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4e427932668b1304b16692e40a89accc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4e427932668b1304b16692e40a89accc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4e427932668b1304b16692e40a89accc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4e427932668b1304b16692e40a89accc,
        type_description_1,
        par_self,
        par_q,
        par_interpolation,
        par_numeric_only,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_4e427932668b1304b16692e40a89accc == cache_frame_4e427932668b1304b16692e40a89accc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4e427932668b1304b16692e40a89accc);
        cache_frame_4e427932668b1304b16692e40a89accc = NULL;
    }

    assertFrameObject(frame_4e427932668b1304b16692e40a89accc);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_q);
    Py_DECREF(par_q);
    CHECK_OBJECT(par_interpolation);
    Py_DECREF(par_interpolation);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_q);
    Py_DECREF(par_q);
    CHECK_OBJECT(par_interpolation);
    Py_DECREF(par_interpolation);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__17_rank(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_method = python_pars[1];
    PyObject *par_ascending = python_pars[2];
    PyObject *par_pct = python_pars[3];
    PyObject *par_numeric_only = python_pars[4];
    struct Nuitka_FrameObject *frame_3076d47d4e04069ff5645b8989759cce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3076d47d4e04069ff5645b8989759cce = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3076d47d4e04069ff5645b8989759cce)) {
        Py_XDECREF(cache_frame_3076d47d4e04069ff5645b8989759cce);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3076d47d4e04069ff5645b8989759cce == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3076d47d4e04069ff5645b8989759cce = MAKE_FUNCTION_FRAME(tstate, codeobj_3076d47d4e04069ff5645b8989759cce, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3076d47d4e04069ff5645b8989759cce->m_type_description == NULL);
    frame_3076d47d4e04069ff5645b8989759cce = cache_frame_3076d47d4e04069ff5645b8989759cce;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3076d47d4e04069ff5645b8989759cce);
    assert(Py_REFCNT(frame_3076d47d4e04069ff5645b8989759cce) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 798;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 798;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[25]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 798;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_method);
        tmp_kw_call_value_0_1 = par_method;
        CHECK_OBJECT(par_ascending);
        tmp_kw_call_value_1_1 = par_ascending;
        CHECK_OBJECT(par_pct);
        tmp_kw_call_value_2_1 = par_pct;
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_3_1 = par_numeric_only;
        frame_3076d47d4e04069ff5645b8989759cce->m_frame.f_lineno = 798;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 798;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3076d47d4e04069ff5645b8989759cce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3076d47d4e04069ff5645b8989759cce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3076d47d4e04069ff5645b8989759cce, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3076d47d4e04069ff5645b8989759cce,
        type_description_1,
        par_self,
        par_method,
        par_ascending,
        par_pct,
        par_numeric_only,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_3076d47d4e04069ff5645b8989759cce == cache_frame_3076d47d4e04069ff5645b8989759cce) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3076d47d4e04069ff5645b8989759cce);
        cache_frame_3076d47d4e04069ff5645b8989759cce = NULL;
    }

    assertFrameObject(frame_3076d47d4e04069ff5645b8989759cce);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_ascending);
    Py_DECREF(par_ascending);
    CHECK_OBJECT(par_pct);
    Py_DECREF(par_pct);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_ascending);
    Py_DECREF(par_ascending);
    CHECK_OBJECT(par_pct);
    Py_DECREF(par_pct);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__18_cov(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    PyObject *par_pairwise = python_pars[2];
    PyObject *par_ddof = python_pars[3];
    PyObject *par_numeric_only = python_pars[4];
    struct Nuitka_FrameObject *frame_6e77d607d03e6ec4cd8eca4a615bd93f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6e77d607d03e6ec4cd8eca4a615bd93f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6e77d607d03e6ec4cd8eca4a615bd93f)) {
        Py_XDECREF(cache_frame_6e77d607d03e6ec4cd8eca4a615bd93f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e77d607d03e6ec4cd8eca4a615bd93f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e77d607d03e6ec4cd8eca4a615bd93f = MAKE_FUNCTION_FRAME(tstate, codeobj_6e77d607d03e6ec4cd8eca4a615bd93f, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6e77d607d03e6ec4cd8eca4a615bd93f->m_type_description == NULL);
    frame_6e77d607d03e6ec4cd8eca4a615bd93f = cache_frame_6e77d607d03e6ec4cd8eca4a615bd93f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6e77d607d03e6ec4cd8eca4a615bd93f);
    assert(Py_REFCNT(frame_6e77d607d03e6ec4cd8eca4a615bd93f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 854;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 854;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[27]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 854;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_kw_call_value_0_1 = par_other;
        CHECK_OBJECT(par_pairwise);
        tmp_kw_call_value_1_1 = par_pairwise;
        CHECK_OBJECT(par_ddof);
        tmp_kw_call_value_2_1 = par_ddof;
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_3_1 = par_numeric_only;
        frame_6e77d607d03e6ec4cd8eca4a615bd93f->m_frame.f_lineno = 854;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[28]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 854;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6e77d607d03e6ec4cd8eca4a615bd93f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e77d607d03e6ec4cd8eca4a615bd93f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e77d607d03e6ec4cd8eca4a615bd93f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e77d607d03e6ec4cd8eca4a615bd93f,
        type_description_1,
        par_self,
        par_other,
        par_pairwise,
        par_ddof,
        par_numeric_only,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_6e77d607d03e6ec4cd8eca4a615bd93f == cache_frame_6e77d607d03e6ec4cd8eca4a615bd93f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6e77d607d03e6ec4cd8eca4a615bd93f);
        cache_frame_6e77d607d03e6ec4cd8eca4a615bd93f = NULL;
    }

    assertFrameObject(frame_6e77d607d03e6ec4cd8eca4a615bd93f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par_pairwise);
    Py_DECREF(par_pairwise);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par_pairwise);
    Py_DECREF(par_pairwise);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__19_corr(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    PyObject *par_pairwise = python_pars[2];
    PyObject *par_ddof = python_pars[3];
    PyObject *par_numeric_only = python_pars[4];
    struct Nuitka_FrameObject *frame_1e9d941cc45261554be33e445687d170;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1e9d941cc45261554be33e445687d170 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1e9d941cc45261554be33e445687d170)) {
        Py_XDECREF(cache_frame_1e9d941cc45261554be33e445687d170);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e9d941cc45261554be33e445687d170 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e9d941cc45261554be33e445687d170 = MAKE_FUNCTION_FRAME(tstate, codeobj_1e9d941cc45261554be33e445687d170, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1e9d941cc45261554be33e445687d170->m_type_description == NULL);
    frame_1e9d941cc45261554be33e445687d170 = cache_frame_1e9d941cc45261554be33e445687d170;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1e9d941cc45261554be33e445687d170);
    assert(Py_REFCNT(frame_1e9d941cc45261554be33e445687d170) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 937;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 937;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[29]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 937;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_kw_call_value_0_1 = par_other;
        CHECK_OBJECT(par_pairwise);
        tmp_kw_call_value_1_1 = par_pairwise;
        CHECK_OBJECT(par_ddof);
        tmp_kw_call_value_2_1 = par_ddof;
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_3_1 = par_numeric_only;
        frame_1e9d941cc45261554be33e445687d170->m_frame.f_lineno = 937;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[28]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 937;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1e9d941cc45261554be33e445687d170, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e9d941cc45261554be33e445687d170->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e9d941cc45261554be33e445687d170, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e9d941cc45261554be33e445687d170,
        type_description_1,
        par_self,
        par_other,
        par_pairwise,
        par_ddof,
        par_numeric_only,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_1e9d941cc45261554be33e445687d170 == cache_frame_1e9d941cc45261554be33e445687d170) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1e9d941cc45261554be33e445687d170);
        cache_frame_1e9d941cc45261554be33e445687d170 = NULL;
    }

    assertFrameObject(frame_1e9d941cc45261554be33e445687d170);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par_pairwise);
    Py_DECREF(par_pairwise);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par_pairwise);
    Py_DECREF(par_pairwise);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__20__get_window_indexer(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_window_indexer = NULL;
    struct Nuitka_FrameObject *frame_8a4fd8d1ad0887c474a776c10fbe4092;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8a4fd8d1ad0887c474a776c10fbe4092 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8a4fd8d1ad0887c474a776c10fbe4092)) {
        Py_XDECREF(cache_frame_8a4fd8d1ad0887c474a776c10fbe4092);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8a4fd8d1ad0887c474a776c10fbe4092 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8a4fd8d1ad0887c474a776c10fbe4092 = MAKE_FUNCTION_FRAME(tstate, codeobj_8a4fd8d1ad0887c474a776c10fbe4092, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8a4fd8d1ad0887c474a776c10fbe4092->m_type_description == NULL);
    frame_8a4fd8d1ad0887c474a776c10fbe4092 = cache_frame_8a4fd8d1ad0887c474a776c10fbe4092;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8a4fd8d1ad0887c474a776c10fbe4092);
    assert(Py_REFCNT(frame_8a4fd8d1ad0887c474a776c10fbe4092) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 960;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[31]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 961;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[32]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 961;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_kw_call_value_1_1 == NULL)) {
            tmp_kw_call_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 962;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8a4fd8d1ad0887c474a776c10fbe4092->m_frame.f_lineno = 960;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 960;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_window_indexer == NULL);
        var_window_indexer = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8a4fd8d1ad0887c474a776c10fbe4092, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8a4fd8d1ad0887c474a776c10fbe4092->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8a4fd8d1ad0887c474a776c10fbe4092, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8a4fd8d1ad0887c474a776c10fbe4092,
        type_description_1,
        par_self,
        var_window_indexer
    );


    // Release cached frame if used for exception.
    if (frame_8a4fd8d1ad0887c474a776c10fbe4092 == cache_frame_8a4fd8d1ad0887c474a776c10fbe4092) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8a4fd8d1ad0887c474a776c10fbe4092);
        cache_frame_8a4fd8d1ad0887c474a776c10fbe4092 = NULL;
    }

    assertFrameObject(frame_8a4fd8d1ad0887c474a776c10fbe4092);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_window_indexer);
    tmp_return_value = var_window_indexer;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_window_indexer);
    Py_DECREF(var_window_indexer);
    var_window_indexer = NULL;
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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__10_median(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__10_median,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[132],
#endif
        codeobj_46842c0b1449ea0bc43c2380ceee3aab,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__11_std(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__11_std,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        codeobj_cda8f0f8022c68c339955afeb03124b6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__12_var(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__12_var,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_887b3bb761997c3133a1c6114f7e22cb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__13_sem(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__13_sem,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_1bd23810802bdf6f38dc0427c9f6e216,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__14_skew(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__14_skew,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[159],
#endif
        codeobj_5c0cb86842b4a2a4deebb06bdecebd0c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__15_kurt(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__15_kurt,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[164],
#endif
        codeobj_b598732360728912d8bef2d7f1d69350,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__16_quantile(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__16_quantile,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_4e427932668b1304b16692e40a89accc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__17_rank(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__17_rank,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_3076d47d4e04069ff5645b8989759cce,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__18_cov(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__18_cov,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[185],
#endif
        codeobj_6e77d607d03e6ec4cd8eca4a615bd93f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__19_corr(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__19_corr,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[191],
#endif
        codeobj_1e9d941cc45261554be33e445687d170,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__1___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[90],
#endif
        codeobj_55f8b86549513d807739f95c6457ca2d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__20__get_window_indexer(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__20__get_window_indexer,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        mod_consts[196],
#endif
        codeobj_8a4fd8d1ad0887c474a776c10fbe4092,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        mod_consts[34],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__2__get_window_indexer(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__2__get_window_indexer,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        mod_consts[93],
#endif
        codeobj_ff65499d1324ce5417219352f49f652b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__3_aggregate(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__3_aggregate,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[99],
#endif
        codeobj_f0e2d88b63ae3cd3376cec8119fc6f0a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__4_count(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__4_count,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_1e5c8f5016ddf09057c69f2a4f84f63f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__5_apply(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__5_apply,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_9a0f8c0944f57c6dc9d56843f2fb2ab5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__6_sum(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__6_sum,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_fb548db8011dea78b327bd05876e1d3a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__7_max(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__7_max,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_1c340ea221caf066995f8fee2a5c48bd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__8_min(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__8_min,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_53e167eb4b01c54b6ba56e875725750c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__9_mean(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__9_mean,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[129],
#endif
        codeobj_fc67d4b065dcfc908c60a6d19be1e4b0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
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

static function_impl_code const function_table_pandas$core$window$expanding[] = {
    impl_pandas$core$window$expanding$$$function__1___init__,
    impl_pandas$core$window$expanding$$$function__2__get_window_indexer,
    impl_pandas$core$window$expanding$$$function__3_aggregate,
    impl_pandas$core$window$expanding$$$function__4_count,
    impl_pandas$core$window$expanding$$$function__5_apply,
    impl_pandas$core$window$expanding$$$function__6_sum,
    impl_pandas$core$window$expanding$$$function__7_max,
    impl_pandas$core$window$expanding$$$function__8_min,
    impl_pandas$core$window$expanding$$$function__9_mean,
    impl_pandas$core$window$expanding$$$function__10_median,
    impl_pandas$core$window$expanding$$$function__11_std,
    impl_pandas$core$window$expanding$$$function__12_var,
    impl_pandas$core$window$expanding$$$function__13_sem,
    impl_pandas$core$window$expanding$$$function__14_skew,
    impl_pandas$core$window$expanding$$$function__15_kurt,
    impl_pandas$core$window$expanding$$$function__16_quantile,
    impl_pandas$core$window$expanding$$$function__17_rank,
    impl_pandas$core$window$expanding$$$function__18_cov,
    impl_pandas$core$window$expanding$$$function__19_corr,
    impl_pandas$core$window$expanding$$$function__20__get_window_indexer,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_pandas$core$window$expanding);

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
        module_pandas$core$window$expanding,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_pandas$core$window$expanding,
        sizeof(function_table_pandas$core$window$expanding) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_pandas$core$window$expanding(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pandas$core$window$expanding");

    // Store the module for future use.
    module_pandas$core$window$expanding = module;

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
        PRINT_STRING("pandas$core$window$expanding: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pandas$core$window$expanding: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pandas.core.window.expanding" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpandas$core$window$expanding\n");

    moduledict_pandas$core$window$expanding = MODULE_DICT(module_pandas$core$window$expanding);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pandas$core$window$expanding,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pandas$core$window$expanding,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[97]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pandas$core$window$expanding,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$window$expanding,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$window$expanding,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pandas$core$window$expanding);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pandas$core$window$expanding);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = NULL;
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
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    struct Nuitka_FrameObject *frame_7cd73c58de89a86957452c037bc962bd;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    int tmp_res;
    PyObject *locals_pandas$core$window$expanding$$$class__1_Expanding_51 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_5d377b992df64ef4ec4e1dfbb9728be8_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_945 = NULL;
    struct Nuitka_FrameObject *frame_ed0fe4dae4cfaa50f4130e7d0ed03e83_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_2);
    }
    frame_7cd73c58de89a86957452c037bc962bd = MAKE_MODULE_FRAME(codeobj_7cd73c58de89a86957452c037bc962bd, module_pandas$core$window$expanding);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7cd73c58de89a86957452c037bc962bd);
    assert(Py_REFCNT(frame_7cd73c58de89a86957452c037bc962bd) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[38], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[39], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[41]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[42];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$window$expanding;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[43];
        tmp_level_value_1 = mod_consts[44];
        frame_7cd73c58de89a86957452c037bc962bd->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[45],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[45]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_6 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_6);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_False;
        UPDATE_STRING_DICT0(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_7);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[47],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[47]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[48],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[48]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[49],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[49]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_10);
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
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[50];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pandas$core$window$expanding;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[51];
        tmp_level_value_2 = mod_consts[44];
        frame_7cd73c58de89a86957452c037bc962bd->m_frame.f_lineno = 11;
        tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[52],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[52]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[53],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[53]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_13);
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[54];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pandas$core$window$expanding;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[55];
        tmp_level_value_3 = mod_consts[44];
        frame_7cd73c58de89a86957452c037bc962bd->m_frame.f_lineno = 16;
        tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_7 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[56],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[56]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_8 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[3],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[3]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[30],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[30]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_17);
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
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[57];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pandas$core$window$expanding;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[58];
        tmp_level_value_4 = mod_consts[44];
        frame_7cd73c58de89a86957452c037bc962bd->m_frame.f_lineno = 21;
        tmp_assign_source_18 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_10 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[59],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[59]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_11 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[60],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[60]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_12 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[61],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[61]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_13 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[62],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[62]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_14 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[63],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[63]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_15 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[64],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[64]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_16 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[65],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[65]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_17 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_17,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[66],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[66]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_18 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_18,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[67],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[67]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_27);
    }
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

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[68];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_pandas$core$window$expanding;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[69];
        tmp_level_value_5 = mod_consts[44];
        frame_7cd73c58de89a86957452c037bc962bd->m_frame.f_lineno = 32;
        tmp_assign_source_28 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_28;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_19 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_19,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[70],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts[70]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_20 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_20,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[71],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts[71]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_30);
    }
    goto try_end_5;
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

    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_6;
        }
        tmp_assign_source_31 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_31, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_32 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_6;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[44];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_6;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_34 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_34;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[72]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_6;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[72]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_6;
        }
        tmp_tuple_element_2 = mod_consts[73];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_7cd73c58de89a86957452c037bc962bd->m_frame.f_lineno = 51;
        tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_35;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[74]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_6;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[75];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_6 = mod_consts[76];
        tmp_default_value_1 = mod_consts[77];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_6, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[76]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 51;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_36;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_37;
        outline_0_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pandas$core$window$expanding$$$class__1_Expanding_51 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[78];
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[79], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[80];
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[35], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[81], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_8;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[82], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_8;
        }
        frame_5d377b992df64ef4ec4e1dfbb9728be8_2 = MAKE_CLASS_FRAME(tstate, codeobj_5d377b992df64ef4ec4e1dfbb9728be8, module_pandas$core$window$expanding, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_5d377b992df64ef4ec4e1dfbb9728be8_2);
        assert(Py_REFCNT(frame_5d377b992df64ef4ec4e1dfbb9728be8_2) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST3(mod_consts[83],mod_consts[84],mod_consts[85]);
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[86], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_ass_subvalue_1 = mod_consts[87];
            tmp_ass_subscribed_1 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[82]);

            if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[82]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 122;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_1 = mod_consts[86];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_defaults_1 = mod_consts[88];
            tmp_annotations_1 = DICT_COPY(mod_consts[89]);
            Py_INCREF(tmp_defaults_1);

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_pandas$core$window$expanding$$$function__1___init__(tmp_defaults_1, tmp_annotations_1, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_2;
            tmp_annotations_2 = DICT_COPY(mod_consts[91]);


            tmp_dictset_value = MAKE_FUNCTION_pandas$core$window$expanding$$$function__2__get_window_indexer(tmp_annotations_2);

            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_kw_call_arg_value_0_1;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_kw_call_dict_value_0_1;
            PyObject *tmp_called_value_4;
            PyObject *tmp_kw_call_dict_value_1_1;
            PyObject *tmp_called_value_5;
            PyObject *tmp_kw_call_dict_value_2_1;
            PyObject *tmp_kw_call_dict_value_3_1;
            PyObject *tmp_args_element_value_1;
            struct Nuitka_CellObject *tmp_closure_2[1];
            tmp_called_value_3 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[53]);

            if (tmp_called_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_called_value_3 == NULL)) {
                        tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
                    }

                    if (tmp_called_value_3 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 146;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_7 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[59]);

            if (tmp_expression_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_expression_value_7 == NULL)) {
                        tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
                    }

                    if (tmp_expression_value_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);

                        exception_lineno = 147;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_2 = mod_consts[5];
            tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_kw_call_arg_value_0_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 147;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_4 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

            if (tmp_called_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                    if (unlikely(tmp_called_value_4 == NULL)) {
                        tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                    }

                    if (tmp_called_value_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);
                        Py_DECREF(tmp_kw_call_arg_value_0_1);

                        exception_lineno = 148;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 148;
            tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[94]);

            Py_DECREF(tmp_called_value_4);
            if (tmp_kw_call_dict_value_0_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);
                Py_DECREF(tmp_kw_call_arg_value_0_1);

                exception_lineno = 148;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_5 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

            if (tmp_called_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                    if (unlikely(tmp_called_value_5 == NULL)) {
                        tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                    }

                    if (tmp_called_value_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);
                        Py_DECREF(tmp_kw_call_arg_value_0_1);
                        Py_DECREF(tmp_kw_call_dict_value_0_1);

                        exception_lineno = 156;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_5);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 156;
            tmp_kw_call_dict_value_1_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_5, mod_consts[95]);

            Py_DECREF(tmp_called_value_5);
            if (tmp_kw_call_dict_value_1_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);
                Py_DECREF(tmp_kw_call_arg_value_0_1);
                Py_DECREF(tmp_kw_call_dict_value_0_1);

                exception_lineno = 156;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_dict_value_2_1 = mod_consts[96];
            tmp_kw_call_dict_value_3_1 = mod_consts[97];
            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 146;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_1};
                PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
                tmp_called_value_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[98]);
            }

            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            tmp_closure_2[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_args_element_value_1 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__3_aggregate(tmp_closure_2);

            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 146;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[5]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 180;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }

        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[100], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_3;
            struct Nuitka_CellObject *tmp_closure_3[1];
            tmp_called_value_7 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[53]);

            if (tmp_called_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_called_value_7 == NULL)) {
                        tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
                    }

                    if (tmp_called_value_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 182;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_4 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[63]);

            if (tmp_tuple_element_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                    if (unlikely(tmp_tuple_element_4 == NULL)) {
                        tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                    }

                    if (tmp_tuple_element_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_7);

                        exception_lineno = 183;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_2 = MAKE_TUPLE_EMPTY(7);
            {
                PyObject *tmp_called_value_8;
                PyObject *tmp_called_value_9;
                PyObject *tmp_called_value_10;
                PyObject *tmp_called_value_11;
                PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_4);
                tmp_called_value_8 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_8 == NULL)) {
                            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_8 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 184;
                            type_description_2 = "c";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_8);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 184;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_8, mod_consts[101]);

                Py_DECREF(tmp_called_value_8);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 184;
                    type_description_2 = "c";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_args_value_2, 1, tmp_tuple_element_4);
                tmp_tuple_element_4 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[64]);

                if (tmp_tuple_element_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_4 == NULL)) {
                            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_4 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 185;
                            type_description_2 = "c";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_tuple_element_4);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_2, 2, tmp_tuple_element_4);
                tmp_called_value_9 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_9 == NULL)) {
                            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_9 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 186;
                            type_description_2 = "c";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_9);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 186;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_9, mod_consts[102]);

                Py_DECREF(tmp_called_value_9);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 186;
                    type_description_2 = "c";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_args_value_2, 3, tmp_tuple_element_4);
                tmp_tuple_element_4 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[65]);

                if (tmp_tuple_element_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_tuple_element_4 == NULL)) {
                            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
                        }

                        if (tmp_tuple_element_4 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 187;
                            type_description_2 = "c";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_tuple_element_4);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_2, 4, tmp_tuple_element_4);
                tmp_called_value_10 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_10 == NULL)) {
                            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_10 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 188;
                            type_description_2 = "c";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_10);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 188;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_10, mod_consts[103]);

                Py_DECREF(tmp_called_value_10);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 188;
                    type_description_2 = "c";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_args_value_2, 5, tmp_tuple_element_4);
                tmp_called_value_11 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_11 == NULL)) {
                            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_11 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 189;
                            type_description_2 = "c";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_11);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 189;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_11, mod_consts[104]);

                Py_DECREF(tmp_called_value_11);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 189;
                    type_description_2 = "c";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_args_value_2, 6, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_value_2);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_kwargs_value_2 = DICT_COPY(mod_consts[105]);
            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 182;
            tmp_called_value_6 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_value_2);
            Py_DECREF(tmp_kwargs_value_2);
            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_2 = mod_consts[106];
            tmp_annotations_3 = DICT_COPY(mod_consts[107]);
            Py_INCREF(tmp_defaults_2);

            tmp_closure_3[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_3[0]);

            tmp_args_element_value_2 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__4_count(tmp_defaults_2, tmp_annotations_3, tmp_closure_3);

            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 182;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_12;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_4;
            struct Nuitka_CellObject *tmp_closure_4[1];
            tmp_called_value_13 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[53]);

            if (tmp_called_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_called_value_13 == NULL)) {
                        tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
                    }

                    if (tmp_called_value_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 207;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_13);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_5 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[63]);

            if (tmp_tuple_element_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                    if (unlikely(tmp_tuple_element_5 == NULL)) {
                        tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                    }

                    if (tmp_tuple_element_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_13);

                        exception_lineno = 208;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_5);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_3 = MAKE_TUPLE_EMPTY(9);
            {
                PyObject *tmp_called_value_14;
                PyObject *tmp_called_value_15;
                PyObject *tmp_called_value_16;
                PyObject *tmp_called_value_17;
                PyObject *tmp_called_value_18;
                PyTuple_SET_ITEM(tmp_args_value_3, 0, tmp_tuple_element_5);
                tmp_called_value_14 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_14 == NULL)) {
                            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_14 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 209;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_called_value_14);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 209;
                tmp_tuple_element_5 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_14, mod_consts[109]);

                Py_DECREF(tmp_called_value_14);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 209;
                    type_description_2 = "c";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_args_value_3, 1, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[67]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 210;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_3, 2, tmp_tuple_element_5);
                tmp_called_value_15 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_15 == NULL)) {
                            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_15 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 211;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_called_value_15);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 211;
                tmp_tuple_element_5 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_15, mod_consts[101]);

                Py_DECREF(tmp_called_value_15);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_2 = "c";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_args_value_3, 3, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[64]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 212;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_3, 4, tmp_tuple_element_5);
                tmp_called_value_16 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_16 == NULL)) {
                            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_16 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 213;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_called_value_16);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 213;
                tmp_tuple_element_5 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_16, mod_consts[102]);

                Py_DECREF(tmp_called_value_16);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 213;
                    type_description_2 = "c";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_args_value_3, 5, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[65]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 214;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_3, 6, tmp_tuple_element_5);
                tmp_called_value_17 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_17 == NULL)) {
                            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_17 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 215;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_called_value_17);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 215;
                tmp_tuple_element_5 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_17, mod_consts[103]);

                Py_DECREF(tmp_called_value_17);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 215;
                    type_description_2 = "c";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_args_value_3, 7, tmp_tuple_element_5);
                tmp_called_value_18 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_18 == NULL)) {
                            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_18 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 216;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_called_value_18);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 216;
                tmp_tuple_element_5 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_18, mod_consts[110]);

                Py_DECREF(tmp_called_value_18);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 216;
                    type_description_2 = "c";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_args_value_3, 8, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_value_3);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_kwargs_value_3 = DICT_COPY(mod_consts[111]);
            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 207;
            tmp_called_value_12 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_value_3);
            Py_DECREF(tmp_kwargs_value_3);
            if (tmp_called_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_3 = mod_consts[112];
            tmp_annotations_4 = DICT_COPY(mod_consts[113]);
            Py_INCREF(tmp_defaults_3);

            tmp_closure_4[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_4[0]);

            tmp_args_element_value_3 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__5_apply(tmp_defaults_3, tmp_annotations_4, tmp_closure_4);

            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 207;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_19;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_4;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_defaults_4;
            PyObject *tmp_annotations_5;
            struct Nuitka_CellObject *tmp_closure_5[1];
            tmp_called_value_20 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[53]);

            if (tmp_called_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_called_value_20 == NULL)) {
                        tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
                    }

                    if (tmp_called_value_20 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 249;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_20);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_6 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[63]);

            if (tmp_tuple_element_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                    if (unlikely(tmp_tuple_element_6 == NULL)) {
                        tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                    }

                    if (tmp_tuple_element_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_20);

                        exception_lineno = 250;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_4 = MAKE_TUPLE_EMPTY(12);
            {
                PyObject *tmp_called_value_21;
                PyObject *tmp_called_value_22;
                PyObject *tmp_called_value_23;
                PyObject *tmp_called_value_24;
                PyObject *tmp_called_value_25;
                PyObject *tmp_called_value_26;
                PyObject *tmp_called_value_27;
                PyTuple_SET_ITEM(tmp_args_value_4, 0, tmp_tuple_element_6);
                tmp_called_value_21 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_21 == NULL)) {
                            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_21 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 251;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_21);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 251;
                tmp_tuple_element_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_21, mod_consts[109]);

                Py_DECREF(tmp_called_value_21);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 251;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_args_value_4, 1, tmp_tuple_element_6);
                tmp_tuple_element_6 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[61]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[61]);

                        if (unlikely(tmp_tuple_element_6 == NULL)) {
                            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
                        }

                        if (tmp_tuple_element_6 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 252;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_6);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_4, 2, tmp_tuple_element_6);
                tmp_called_value_22 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[66]);

                if (tmp_called_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                        if (unlikely(tmp_called_value_22 == NULL)) {
                            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
                        }

                        if (tmp_called_value_22 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 253;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_22);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 253;
                tmp_tuple_element_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_22);
                Py_DECREF(tmp_called_value_22);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 253;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_args_value_4, 3, tmp_tuple_element_6);
                tmp_called_value_23 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_23 == NULL)) {
                            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_23 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 254;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_23);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 254;
                tmp_tuple_element_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_23, mod_consts[101]);

                Py_DECREF(tmp_called_value_23);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 254;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_args_value_4, 4, tmp_tuple_element_6);
                tmp_tuple_element_6 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[64]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_6 == NULL)) {
                            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_6 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 255;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_6);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_4, 5, tmp_tuple_element_6);
                tmp_called_value_24 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_24 == NULL)) {
                            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_24 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 256;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_24);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 256;
                tmp_tuple_element_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_24, mod_consts[102]);

                Py_DECREF(tmp_called_value_24);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 256;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_args_value_4, 6, tmp_tuple_element_6);
                tmp_tuple_element_6 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[65]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_tuple_element_6 == NULL)) {
                            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
                        }

                        if (tmp_tuple_element_6 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 257;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_6);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_4, 7, tmp_tuple_element_6);
                tmp_called_value_25 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_25 == NULL)) {
                            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_25 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 258;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_25);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 258;
                tmp_tuple_element_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_25, mod_consts[115]);

                Py_DECREF(tmp_called_value_25);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 258;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_args_value_4, 8, tmp_tuple_element_6);
                tmp_tuple_element_6 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[62]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_tuple_element_6 == NULL)) {
                            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
                        }

                        if (tmp_tuple_element_6 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 259;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_6);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_4, 9, tmp_tuple_element_6);
                tmp_called_value_26 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_26 == NULL)) {
                            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_26 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 260;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_26);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 260;
                tmp_tuple_element_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_26, mod_consts[103]);

                Py_DECREF(tmp_called_value_26);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 260;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_args_value_4, 10, tmp_tuple_element_6);
                tmp_called_value_27 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_27 == NULL)) {
                            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_27 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 261;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_27);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 261;
                tmp_tuple_element_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_27, mod_consts[116]);

                Py_DECREF(tmp_called_value_27);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 261;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_args_value_4, 11, tmp_tuple_element_6);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_value_4);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_kwargs_value_4 = DICT_COPY(mod_consts[117]);
            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 249;
            tmp_called_value_19 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_value_4);
            Py_DECREF(tmp_kwargs_value_4);
            if (tmp_called_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_4 = mod_consts[118];
            tmp_annotations_5 = DICT_COPY(mod_consts[119]);
            Py_INCREF(tmp_defaults_4);

            tmp_closure_5[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_5[0]);

            tmp_args_element_value_4 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__6_sum(tmp_defaults_4, tmp_annotations_5, tmp_closure_5);

            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 249;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_28;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_5;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_defaults_5;
            PyObject *tmp_annotations_6;
            struct Nuitka_CellObject *tmp_closure_6[1];
            tmp_called_value_29 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[53]);

            if (tmp_called_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_called_value_29 == NULL)) {
                        tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
                    }

                    if (tmp_called_value_29 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 288;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_29);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_7 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[63]);

            if (tmp_tuple_element_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                    if (unlikely(tmp_tuple_element_7 == NULL)) {
                        tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                    }

                    if (tmp_tuple_element_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_29);

                        exception_lineno = 289;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_5 = MAKE_TUPLE_EMPTY(12);
            {
                PyObject *tmp_called_value_30;
                PyObject *tmp_called_value_31;
                PyObject *tmp_called_value_32;
                PyObject *tmp_called_value_33;
                PyObject *tmp_called_value_34;
                PyObject *tmp_called_value_35;
                PyObject *tmp_called_value_36;
                PyTuple_SET_ITEM(tmp_args_value_5, 0, tmp_tuple_element_7);
                tmp_called_value_30 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_30 == NULL)) {
                            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_30 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 290;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_30);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 290;
                tmp_tuple_element_7 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_30, mod_consts[109]);

                Py_DECREF(tmp_called_value_30);
                if (tmp_tuple_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 290;
                    type_description_2 = "c";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_args_value_5, 1, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[61]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[61]);

                        if (unlikely(tmp_tuple_element_7 == NULL)) {
                            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
                        }

                        if (tmp_tuple_element_7 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 291;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_5, 2, tmp_tuple_element_7);
                tmp_called_value_31 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[66]);

                if (tmp_called_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                        if (unlikely(tmp_called_value_31 == NULL)) {
                            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
                        }

                        if (tmp_called_value_31 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 292;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_31);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 292;
                tmp_tuple_element_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_31);
                Py_DECREF(tmp_called_value_31);
                if (tmp_tuple_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 292;
                    type_description_2 = "c";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_args_value_5, 3, tmp_tuple_element_7);
                tmp_called_value_32 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_32 == NULL)) {
                            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_32 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 293;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_32);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 293;
                tmp_tuple_element_7 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_32, mod_consts[101]);

                Py_DECREF(tmp_called_value_32);
                if (tmp_tuple_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 293;
                    type_description_2 = "c";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_args_value_5, 4, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[64]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_7 == NULL)) {
                            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_7 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 294;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_5, 5, tmp_tuple_element_7);
                tmp_called_value_33 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_33 == NULL)) {
                            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_33 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 295;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_33);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 295;
                tmp_tuple_element_7 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_33, mod_consts[102]);

                Py_DECREF(tmp_called_value_33);
                if (tmp_tuple_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 295;
                    type_description_2 = "c";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_args_value_5, 6, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[65]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_tuple_element_7 == NULL)) {
                            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
                        }

                        if (tmp_tuple_element_7 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 296;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_5, 7, tmp_tuple_element_7);
                tmp_called_value_34 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_34 == NULL)) {
                            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_34 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 297;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_34);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 297;
                tmp_tuple_element_7 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_34, mod_consts[115]);

                Py_DECREF(tmp_called_value_34);
                if (tmp_tuple_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 297;
                    type_description_2 = "c";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_args_value_5, 8, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[62]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_tuple_element_7 == NULL)) {
                            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
                        }

                        if (tmp_tuple_element_7 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 298;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_5, 9, tmp_tuple_element_7);
                tmp_called_value_35 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_35 == NULL)) {
                            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_35 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 299;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_35);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 299;
                tmp_tuple_element_7 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_35, mod_consts[103]);

                Py_DECREF(tmp_called_value_35);
                if (tmp_tuple_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 299;
                    type_description_2 = "c";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_args_value_5, 10, tmp_tuple_element_7);
                tmp_called_value_36 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_36 == NULL)) {
                            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_36 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 300;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_36);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 300;
                tmp_tuple_element_7 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_36, mod_consts[121]);

                Py_DECREF(tmp_called_value_36);
                if (tmp_tuple_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 300;
                    type_description_2 = "c";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_args_value_5, 11, tmp_tuple_element_7);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_value_5);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_kwargs_value_5 = DICT_COPY(mod_consts[122]);
            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 288;
            tmp_called_value_28 = CALL_FUNCTION(tstate, tmp_called_value_29, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_value_5);
            Py_DECREF(tmp_kwargs_value_5);
            if (tmp_called_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_5 = mod_consts[118];
            tmp_annotations_6 = DICT_COPY(mod_consts[119]);
            Py_INCREF(tmp_defaults_5);

            tmp_closure_6[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_6[0]);

            tmp_args_element_value_5 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__7_max(tmp_defaults_5, tmp_annotations_6, tmp_closure_6);

            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 288;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_37;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_6;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_defaults_6;
            PyObject *tmp_annotations_7;
            struct Nuitka_CellObject *tmp_closure_7[1];
            tmp_called_value_38 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[53]);

            if (tmp_called_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_called_value_38 == NULL)) {
                        tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
                    }

                    if (tmp_called_value_38 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 327;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_38);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_8 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[63]);

            if (tmp_tuple_element_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                    if (unlikely(tmp_tuple_element_8 == NULL)) {
                        tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                    }

                    if (tmp_tuple_element_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);

                        exception_lineno = 328;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_6 = MAKE_TUPLE_EMPTY(12);
            {
                PyObject *tmp_called_value_39;
                PyObject *tmp_called_value_40;
                PyObject *tmp_called_value_41;
                PyObject *tmp_called_value_42;
                PyObject *tmp_called_value_43;
                PyObject *tmp_called_value_44;
                PyObject *tmp_called_value_45;
                PyTuple_SET_ITEM(tmp_args_value_6, 0, tmp_tuple_element_8);
                tmp_called_value_39 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_39 == NULL)) {
                            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_39 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 329;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_39);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 329;
                tmp_tuple_element_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_39, mod_consts[109]);

                Py_DECREF(tmp_called_value_39);
                if (tmp_tuple_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 329;
                    type_description_2 = "c";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_args_value_6, 1, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[61]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[61]);

                        if (unlikely(tmp_tuple_element_8 == NULL)) {
                            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
                        }

                        if (tmp_tuple_element_8 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 330;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_6, 2, tmp_tuple_element_8);
                tmp_called_value_40 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[66]);

                if (tmp_called_value_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                        if (unlikely(tmp_called_value_40 == NULL)) {
                            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
                        }

                        if (tmp_called_value_40 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 331;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_40);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 331;
                tmp_tuple_element_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_40);
                Py_DECREF(tmp_called_value_40);
                if (tmp_tuple_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 331;
                    type_description_2 = "c";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_args_value_6, 3, tmp_tuple_element_8);
                tmp_called_value_41 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_41 == NULL)) {
                            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_41 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 332;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_41);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 332;
                tmp_tuple_element_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_41, mod_consts[101]);

                Py_DECREF(tmp_called_value_41);
                if (tmp_tuple_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 332;
                    type_description_2 = "c";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_args_value_6, 4, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[64]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_8 == NULL)) {
                            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_8 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 333;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_6, 5, tmp_tuple_element_8);
                tmp_called_value_42 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_42 == NULL)) {
                            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_42 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 334;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_42);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 334;
                tmp_tuple_element_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_42, mod_consts[102]);

                Py_DECREF(tmp_called_value_42);
                if (tmp_tuple_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 334;
                    type_description_2 = "c";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_args_value_6, 6, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[65]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_tuple_element_8 == NULL)) {
                            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
                        }

                        if (tmp_tuple_element_8 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 335;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_6, 7, tmp_tuple_element_8);
                tmp_called_value_43 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_43 == NULL)) {
                            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_43 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 336;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_43);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 336;
                tmp_tuple_element_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_43, mod_consts[115]);

                Py_DECREF(tmp_called_value_43);
                if (tmp_tuple_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 336;
                    type_description_2 = "c";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_args_value_6, 8, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[62]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_tuple_element_8 == NULL)) {
                            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
                        }

                        if (tmp_tuple_element_8 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 337;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_6, 9, tmp_tuple_element_8);
                tmp_called_value_44 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_44 == NULL)) {
                            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_44 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 338;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_44);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 338;
                tmp_tuple_element_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_44, mod_consts[103]);

                Py_DECREF(tmp_called_value_44);
                if (tmp_tuple_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 338;
                    type_description_2 = "c";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_args_value_6, 10, tmp_tuple_element_8);
                tmp_called_value_45 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_45 == NULL)) {
                            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_45 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 339;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_45);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 339;
                tmp_tuple_element_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_45, mod_consts[124]);

                Py_DECREF(tmp_called_value_45);
                if (tmp_tuple_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 339;
                    type_description_2 = "c";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_args_value_6, 11, tmp_tuple_element_8);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_value_6);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_kwargs_value_6 = DICT_COPY(mod_consts[125]);
            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 327;
            tmp_called_value_37 = CALL_FUNCTION(tstate, tmp_called_value_38, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_value_6);
            Py_DECREF(tmp_kwargs_value_6);
            if (tmp_called_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_6 = mod_consts[118];
            tmp_annotations_7 = DICT_COPY(mod_consts[119]);
            Py_INCREF(tmp_defaults_6);

            tmp_closure_7[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_7[0]);

            tmp_args_element_value_6 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__8_min(tmp_defaults_6, tmp_annotations_7, tmp_closure_7);

            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 327;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_46;
            PyObject *tmp_called_value_47;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_7;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_defaults_7;
            PyObject *tmp_annotations_8;
            struct Nuitka_CellObject *tmp_closure_8[1];
            tmp_called_value_47 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[53]);

            if (tmp_called_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_called_value_47 == NULL)) {
                        tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
                    }

                    if (tmp_called_value_47 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 366;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_47);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_9 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[63]);

            if (tmp_tuple_element_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                    if (unlikely(tmp_tuple_element_9 == NULL)) {
                        tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                    }

                    if (tmp_tuple_element_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_47);

                        exception_lineno = 367;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_7 = MAKE_TUPLE_EMPTY(12);
            {
                PyObject *tmp_called_value_48;
                PyObject *tmp_called_value_49;
                PyObject *tmp_called_value_50;
                PyObject *tmp_called_value_51;
                PyObject *tmp_called_value_52;
                PyObject *tmp_called_value_53;
                PyObject *tmp_called_value_54;
                PyTuple_SET_ITEM(tmp_args_value_7, 0, tmp_tuple_element_9);
                tmp_called_value_48 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_48 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_48 == NULL)) {
                            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_48 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 368;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_called_value_48);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 368;
                tmp_tuple_element_9 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_48, mod_consts[109]);

                Py_DECREF(tmp_called_value_48);
                if (tmp_tuple_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 368;
                    type_description_2 = "c";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_args_value_7, 1, tmp_tuple_element_9);
                tmp_tuple_element_9 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[61]);

                if (tmp_tuple_element_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[61]);

                        if (unlikely(tmp_tuple_element_9 == NULL)) {
                            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
                        }

                        if (tmp_tuple_element_9 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 369;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_tuple_element_9);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_7, 2, tmp_tuple_element_9);
                tmp_called_value_49 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[66]);

                if (tmp_called_value_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                        if (unlikely(tmp_called_value_49 == NULL)) {
                            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
                        }

                        if (tmp_called_value_49 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 370;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_called_value_49);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 370;
                tmp_tuple_element_9 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_49);
                Py_DECREF(tmp_called_value_49);
                if (tmp_tuple_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 370;
                    type_description_2 = "c";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_args_value_7, 3, tmp_tuple_element_9);
                tmp_called_value_50 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_50 == NULL)) {
                            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_50 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 371;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_called_value_50);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 371;
                tmp_tuple_element_9 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_50, mod_consts[101]);

                Py_DECREF(tmp_called_value_50);
                if (tmp_tuple_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 371;
                    type_description_2 = "c";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_args_value_7, 4, tmp_tuple_element_9);
                tmp_tuple_element_9 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[64]);

                if (tmp_tuple_element_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_9 == NULL)) {
                            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_9 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 372;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_tuple_element_9);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_7, 5, tmp_tuple_element_9);
                tmp_called_value_51 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_51 == NULL)) {
                            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_51 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 373;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_called_value_51);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 373;
                tmp_tuple_element_9 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_51, mod_consts[102]);

                Py_DECREF(tmp_called_value_51);
                if (tmp_tuple_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 373;
                    type_description_2 = "c";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_args_value_7, 6, tmp_tuple_element_9);
                tmp_tuple_element_9 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[65]);

                if (tmp_tuple_element_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_tuple_element_9 == NULL)) {
                            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
                        }

                        if (tmp_tuple_element_9 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 374;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_tuple_element_9);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_7, 7, tmp_tuple_element_9);
                tmp_called_value_52 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_52 == NULL)) {
                            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_52 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 375;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_called_value_52);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 375;
                tmp_tuple_element_9 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_52, mod_consts[115]);

                Py_DECREF(tmp_called_value_52);
                if (tmp_tuple_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 375;
                    type_description_2 = "c";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_args_value_7, 8, tmp_tuple_element_9);
                tmp_tuple_element_9 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[62]);

                if (tmp_tuple_element_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_tuple_element_9 == NULL)) {
                            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
                        }

                        if (tmp_tuple_element_9 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 376;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_tuple_element_9);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_7, 9, tmp_tuple_element_9);
                tmp_called_value_53 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_53 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_53 == NULL)) {
                            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_53 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 377;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_called_value_53);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 377;
                tmp_tuple_element_9 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_53, mod_consts[103]);

                Py_DECREF(tmp_called_value_53);
                if (tmp_tuple_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 377;
                    type_description_2 = "c";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_args_value_7, 10, tmp_tuple_element_9);
                tmp_called_value_54 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_54 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_54 == NULL)) {
                            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_54 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 378;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_called_value_54);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 378;
                tmp_tuple_element_9 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_54, mod_consts[127]);

                Py_DECREF(tmp_called_value_54);
                if (tmp_tuple_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 378;
                    type_description_2 = "c";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_args_value_7, 11, tmp_tuple_element_9);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_value_7);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_kwargs_value_7 = DICT_COPY(mod_consts[128]);
            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 366;
            tmp_called_value_46 = CALL_FUNCTION(tstate, tmp_called_value_47, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_value_7);
            Py_DECREF(tmp_kwargs_value_7);
            if (tmp_called_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_7 = mod_consts[118];
            tmp_annotations_8 = DICT_COPY(mod_consts[119]);
            Py_INCREF(tmp_defaults_7);

            tmp_closure_8[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_8[0]);

            tmp_args_element_value_7 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__9_mean(tmp_defaults_7, tmp_annotations_8, tmp_closure_8);

            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 366;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_55;
            PyObject *tmp_called_value_56;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_8;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_defaults_8;
            PyObject *tmp_annotations_9;
            struct Nuitka_CellObject *tmp_closure_9[1];
            tmp_called_value_56 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[53]);

            if (tmp_called_value_56 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_called_value_56 == NULL)) {
                        tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
                    }

                    if (tmp_called_value_56 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 405;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_56);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_10 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[63]);

            if (tmp_tuple_element_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                    if (unlikely(tmp_tuple_element_10 == NULL)) {
                        tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                    }

                    if (tmp_tuple_element_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_56);

                        exception_lineno = 406;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_8 = MAKE_TUPLE_EMPTY(12);
            {
                PyObject *tmp_called_value_57;
                PyObject *tmp_called_value_58;
                PyObject *tmp_called_value_59;
                PyObject *tmp_called_value_60;
                PyObject *tmp_called_value_61;
                PyObject *tmp_called_value_62;
                PyObject *tmp_called_value_63;
                PyTuple_SET_ITEM(tmp_args_value_8, 0, tmp_tuple_element_10);
                tmp_called_value_57 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_57 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_57 == NULL)) {
                            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_57 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 407;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_57);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 407;
                tmp_tuple_element_10 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_57, mod_consts[109]);

                Py_DECREF(tmp_called_value_57);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 407;
                    type_description_2 = "c";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_args_value_8, 1, tmp_tuple_element_10);
                tmp_tuple_element_10 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[61]);

                if (tmp_tuple_element_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[61]);

                        if (unlikely(tmp_tuple_element_10 == NULL)) {
                            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
                        }

                        if (tmp_tuple_element_10 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 408;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_10);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_8, 2, tmp_tuple_element_10);
                tmp_called_value_58 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[66]);

                if (tmp_called_value_58 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                        if (unlikely(tmp_called_value_58 == NULL)) {
                            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
                        }

                        if (tmp_called_value_58 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 409;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_58);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 409;
                tmp_tuple_element_10 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_58);
                Py_DECREF(tmp_called_value_58);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 409;
                    type_description_2 = "c";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_args_value_8, 3, tmp_tuple_element_10);
                tmp_called_value_59 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_59 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_59 == NULL)) {
                            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_59 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 410;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_59);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 410;
                tmp_tuple_element_10 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_59, mod_consts[101]);

                Py_DECREF(tmp_called_value_59);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 410;
                    type_description_2 = "c";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_args_value_8, 4, tmp_tuple_element_10);
                tmp_tuple_element_10 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[64]);

                if (tmp_tuple_element_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_10 == NULL)) {
                            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_10 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 411;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_10);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_8, 5, tmp_tuple_element_10);
                tmp_called_value_60 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_60 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_60 == NULL)) {
                            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_60 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 412;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_60);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 412;
                tmp_tuple_element_10 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_60, mod_consts[102]);

                Py_DECREF(tmp_called_value_60);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 412;
                    type_description_2 = "c";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_args_value_8, 6, tmp_tuple_element_10);
                tmp_tuple_element_10 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[65]);

                if (tmp_tuple_element_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_tuple_element_10 == NULL)) {
                            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
                        }

                        if (tmp_tuple_element_10 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 413;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_10);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_8, 7, tmp_tuple_element_10);
                tmp_called_value_61 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_61 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_61 == NULL)) {
                            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_61 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 414;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_61);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 414;
                tmp_tuple_element_10 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_61, mod_consts[115]);

                Py_DECREF(tmp_called_value_61);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 414;
                    type_description_2 = "c";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_args_value_8, 8, tmp_tuple_element_10);
                tmp_tuple_element_10 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[62]);

                if (tmp_tuple_element_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_tuple_element_10 == NULL)) {
                            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
                        }

                        if (tmp_tuple_element_10 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 415;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_10);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_8, 9, tmp_tuple_element_10);
                tmp_called_value_62 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_62 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_62 == NULL)) {
                            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_62 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 416;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_62);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 416;
                tmp_tuple_element_10 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_62, mod_consts[103]);

                Py_DECREF(tmp_called_value_62);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 416;
                    type_description_2 = "c";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_args_value_8, 10, tmp_tuple_element_10);
                tmp_called_value_63 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_63 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_63 == NULL)) {
                            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_63 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 417;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_63);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 417;
                tmp_tuple_element_10 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_63, mod_consts[130]);

                Py_DECREF(tmp_called_value_63);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 417;
                    type_description_2 = "c";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_args_value_8, 11, tmp_tuple_element_10);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_args_value_8);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_kwargs_value_8 = DICT_COPY(mod_consts[131]);
            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 405;
            tmp_called_value_55 = CALL_FUNCTION(tstate, tmp_called_value_56, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_args_value_8);
            Py_DECREF(tmp_kwargs_value_8);
            if (tmp_called_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 405;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_8 = mod_consts[118];
            tmp_annotations_9 = DICT_COPY(mod_consts[119]);
            Py_INCREF(tmp_defaults_8);

            tmp_closure_9[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_9[0]);

            tmp_args_element_value_8 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__10_median(tmp_defaults_8, tmp_annotations_9, tmp_closure_9);

            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 405;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_55, tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 405;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_64;
            PyObject *tmp_called_value_65;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_9;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_defaults_9;
            PyObject *tmp_annotations_10;
            struct Nuitka_CellObject *tmp_closure_10[1];
            tmp_called_value_65 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[53]);

            if (tmp_called_value_65 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_called_value_65 == NULL)) {
                        tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
                    }

                    if (tmp_called_value_65 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 444;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_65);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_11 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[63]);

            if (tmp_tuple_element_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                    if (unlikely(tmp_tuple_element_11 == NULL)) {
                        tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                    }

                    if (tmp_tuple_element_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_65);

                        exception_lineno = 445;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_9 = MAKE_TUPLE_EMPTY(14);
            {
                PyObject *tmp_called_value_66;
                PyObject *tmp_called_value_67;
                PyObject *tmp_expression_value_8;
                PyObject *tmp_called_value_68;
                PyObject *tmp_called_value_69;
                PyObject *tmp_called_value_70;
                PyObject *tmp_called_value_71;
                PyObject *tmp_called_value_72;
                PyObject *tmp_called_value_73;
                PyObject *tmp_expression_value_9;
                PyObject *tmp_called_value_74;
                PyObject *tmp_called_value_75;
                PyObject *tmp_called_value_76;
                PyObject *tmp_expression_value_10;
                PyObject *tmp_called_value_77;
                PyTuple_SET_ITEM(tmp_args_value_9, 0, tmp_tuple_element_11);
                tmp_called_value_66 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_66 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_66 == NULL)) {
                            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_66 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 446;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_66);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 446;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_66, mod_consts[109]);

                Py_DECREF(tmp_called_value_66);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 446;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 1, tmp_tuple_element_11);
                tmp_called_value_68 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_68 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_68 == NULL)) {
                            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_68 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 447;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_68);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 447;
                tmp_expression_value_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_68, mod_consts[133]);

                Py_DECREF(tmp_called_value_68);
                if (tmp_expression_value_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 447;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                tmp_called_value_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[134]);
                Py_DECREF(tmp_expression_value_8);
                if (tmp_called_value_67 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 447;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 447;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_67, mod_consts[135]);

                Py_DECREF(tmp_called_value_67);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 447;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 2, tmp_tuple_element_11);
                tmp_tuple_element_11 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[61]);

                if (tmp_tuple_element_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[61]);

                        if (unlikely(tmp_tuple_element_11 == NULL)) {
                            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
                        }

                        if (tmp_tuple_element_11 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 454;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_tuple_element_11);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_9, 3, tmp_tuple_element_11);
                tmp_called_value_69 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[66]);

                if (tmp_called_value_69 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                        if (unlikely(tmp_called_value_69 == NULL)) {
                            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
                        }

                        if (tmp_called_value_69 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 455;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_69);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 455;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_69, mod_consts[136]);

                Py_DECREF(tmp_called_value_69);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 455;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 4, tmp_tuple_element_11);
                tmp_called_value_70 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_70 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_70 == NULL)) {
                            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_70 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 456;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_70);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 456;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_70, mod_consts[101]);

                Py_DECREF(tmp_called_value_70);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 456;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 5, tmp_tuple_element_11);
                tmp_tuple_element_11 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[64]);

                if (tmp_tuple_element_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_11 == NULL)) {
                            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_11 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 457;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_tuple_element_11);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_9, 6, tmp_tuple_element_11);
                tmp_called_value_71 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_71 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_71 == NULL)) {
                            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_71 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 458;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_71);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 458;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_71, mod_consts[102]);

                Py_DECREF(tmp_called_value_71);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 458;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 7, tmp_tuple_element_11);
                tmp_tuple_element_11 = mod_consts[137];
                PyTuple_SET_ITEM0(tmp_args_value_9, 8, tmp_tuple_element_11);
                tmp_tuple_element_11 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[65]);

                if (tmp_tuple_element_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_tuple_element_11 == NULL)) {
                            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
                        }

                        if (tmp_tuple_element_11 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 460;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_tuple_element_11);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_9, 9, tmp_tuple_element_11);
                tmp_called_value_72 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_72 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_72 == NULL)) {
                            tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_72 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 461;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_72);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 461;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_72, mod_consts[115]);

                Py_DECREF(tmp_called_value_72);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 461;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 10, tmp_tuple_element_11);
                tmp_called_value_74 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_74 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_74 == NULL)) {
                            tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_74 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 462;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_74);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 462;
                tmp_expression_value_9 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_74, mod_consts[138]);

                Py_DECREF(tmp_called_value_74);
                if (tmp_expression_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 462;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                tmp_called_value_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[134]);
                Py_DECREF(tmp_expression_value_9);
                if (tmp_called_value_73 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 462;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 462;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_73, mod_consts[135]);

                Py_DECREF(tmp_called_value_73);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 462;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 11, tmp_tuple_element_11);
                tmp_called_value_75 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_75 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_75 == NULL)) {
                            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_75 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 470;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_75);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 470;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_75, mod_consts[103]);

                Py_DECREF(tmp_called_value_75);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 470;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 12, tmp_tuple_element_11);
                tmp_called_value_77 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_77 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_77 == NULL)) {
                            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_77 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 471;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_77);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 471;
                tmp_expression_value_10 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_77, mod_consts[139]);

                Py_DECREF(tmp_called_value_77);
                if (tmp_expression_value_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 471;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                tmp_called_value_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[134]);
                Py_DECREF(tmp_expression_value_10);
                if (tmp_called_value_76 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 471;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 471;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_76, mod_consts[135]);

                Py_DECREF(tmp_called_value_76);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 471;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 13, tmp_tuple_element_11);
            }
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_called_value_65);
            Py_DECREF(tmp_args_value_9);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_kwargs_value_9 = DICT_COPY(mod_consts[140]);
            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 444;
            tmp_called_value_64 = CALL_FUNCTION(tstate, tmp_called_value_65, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_called_value_65);
            Py_DECREF(tmp_args_value_9);
            Py_DECREF(tmp_kwargs_value_9);
            if (tmp_called_value_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_9 = mod_consts[141];
            tmp_annotations_10 = DICT_COPY(mod_consts[142]);
            Py_INCREF(tmp_defaults_9);

            tmp_closure_10[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_10[0]);

            tmp_args_element_value_9 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__11_std(tmp_defaults_9, tmp_annotations_10, tmp_closure_10);

            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 444;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_64, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 490;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_78;
            PyObject *tmp_called_value_79;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_10;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_defaults_10;
            PyObject *tmp_annotations_11;
            struct Nuitka_CellObject *tmp_closure_11[1];
            tmp_called_value_79 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[53]);

            if (tmp_called_value_79 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_called_value_79 == NULL)) {
                        tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
                    }

                    if (tmp_called_value_79 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 504;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_79);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_12 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[63]);

            if (tmp_tuple_element_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                    if (unlikely(tmp_tuple_element_12 == NULL)) {
                        tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                    }

                    if (tmp_tuple_element_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_79);

                        exception_lineno = 505;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_12);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_10 = MAKE_TUPLE_EMPTY(14);
            {
                PyObject *tmp_called_value_80;
                PyObject *tmp_called_value_81;
                PyObject *tmp_expression_value_11;
                PyObject *tmp_called_value_82;
                PyObject *tmp_called_value_83;
                PyObject *tmp_called_value_84;
                PyObject *tmp_called_value_85;
                PyObject *tmp_called_value_86;
                PyObject *tmp_called_value_87;
                PyObject *tmp_expression_value_12;
                PyObject *tmp_called_value_88;
                PyObject *tmp_called_value_89;
                PyObject *tmp_called_value_90;
                PyObject *tmp_expression_value_13;
                PyObject *tmp_called_value_91;
                PyTuple_SET_ITEM(tmp_args_value_10, 0, tmp_tuple_element_12);
                tmp_called_value_80 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_80 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_80 == NULL)) {
                            tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_80 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 506;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_80);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 506;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_80, mod_consts[109]);

                Py_DECREF(tmp_called_value_80);
                if (tmp_tuple_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 506;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 1, tmp_tuple_element_12);
                tmp_called_value_82 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_82 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_82 == NULL)) {
                            tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_82 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 507;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_82);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 507;
                tmp_expression_value_11 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_82, mod_consts[133]);

                Py_DECREF(tmp_called_value_82);
                if (tmp_expression_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 507;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                tmp_called_value_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[134]);
                Py_DECREF(tmp_expression_value_11);
                if (tmp_called_value_81 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 507;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 507;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_81, mod_consts[135]);

                Py_DECREF(tmp_called_value_81);
                if (tmp_tuple_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 507;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 2, tmp_tuple_element_12);
                tmp_tuple_element_12 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[61]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[61]);

                        if (unlikely(tmp_tuple_element_12 == NULL)) {
                            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
                        }

                        if (tmp_tuple_element_12 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 514;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_10, 3, tmp_tuple_element_12);
                tmp_called_value_83 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[66]);

                if (tmp_called_value_83 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                        if (unlikely(tmp_called_value_83 == NULL)) {
                            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
                        }

                        if (tmp_called_value_83 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 515;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_83);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 515;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_83, mod_consts[136]);

                Py_DECREF(tmp_called_value_83);
                if (tmp_tuple_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 515;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 4, tmp_tuple_element_12);
                tmp_called_value_84 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_84 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_84 == NULL)) {
                            tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_84 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 516;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_84);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 516;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_84, mod_consts[101]);

                Py_DECREF(tmp_called_value_84);
                if (tmp_tuple_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 516;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 5, tmp_tuple_element_12);
                tmp_tuple_element_12 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[64]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_12 == NULL)) {
                            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_12 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 517;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_10, 6, tmp_tuple_element_12);
                tmp_called_value_85 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_85 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_85 == NULL)) {
                            tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_85 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 518;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_85);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 518;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_85, mod_consts[102]);

                Py_DECREF(tmp_called_value_85);
                if (tmp_tuple_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 518;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 7, tmp_tuple_element_12);
                tmp_tuple_element_12 = mod_consts[144];
                PyTuple_SET_ITEM0(tmp_args_value_10, 8, tmp_tuple_element_12);
                tmp_tuple_element_12 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[65]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_tuple_element_12 == NULL)) {
                            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
                        }

                        if (tmp_tuple_element_12 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 520;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_10, 9, tmp_tuple_element_12);
                tmp_called_value_86 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_86 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_86 == NULL)) {
                            tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_86 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 521;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_86);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 521;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_86, mod_consts[115]);

                Py_DECREF(tmp_called_value_86);
                if (tmp_tuple_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 521;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 10, tmp_tuple_element_12);
                tmp_called_value_88 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_88 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_88 == NULL)) {
                            tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_88 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 522;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_88);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 522;
                tmp_expression_value_12 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_88, mod_consts[145]);

                Py_DECREF(tmp_called_value_88);
                if (tmp_expression_value_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 522;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                tmp_called_value_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[134]);
                Py_DECREF(tmp_expression_value_12);
                if (tmp_called_value_87 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 522;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 522;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_87, mod_consts[135]);

                Py_DECREF(tmp_called_value_87);
                if (tmp_tuple_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 522;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 11, tmp_tuple_element_12);
                tmp_called_value_89 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_89 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_89 == NULL)) {
                            tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_89 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 530;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_89);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 530;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_89, mod_consts[103]);

                Py_DECREF(tmp_called_value_89);
                if (tmp_tuple_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 530;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 12, tmp_tuple_element_12);
                tmp_called_value_91 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_91 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_91 == NULL)) {
                            tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_91 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 531;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_91);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 531;
                tmp_expression_value_13 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_91, mod_consts[146]);

                Py_DECREF(tmp_called_value_91);
                if (tmp_expression_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 531;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                tmp_called_value_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[134]);
                Py_DECREF(tmp_expression_value_13);
                if (tmp_called_value_90 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 531;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 531;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_90, mod_consts[135]);

                Py_DECREF(tmp_called_value_90);
                if (tmp_tuple_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 531;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 13, tmp_tuple_element_12);
            }
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_called_value_79);
            Py_DECREF(tmp_args_value_10);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            tmp_kwargs_value_10 = DICT_COPY(mod_consts[147]);
            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 504;
            tmp_called_value_78 = CALL_FUNCTION(tstate, tmp_called_value_79, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_called_value_79);
            Py_DECREF(tmp_args_value_10);
            Py_DECREF(tmp_kwargs_value_10);
            if (tmp_called_value_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 504;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_10 = mod_consts[141];
            tmp_annotations_11 = DICT_COPY(mod_consts[142]);
            Py_INCREF(tmp_defaults_10);

            tmp_closure_11[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_11[0]);

            tmp_args_element_value_10 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__12_var(tmp_defaults_10, tmp_annotations_11, tmp_closure_11);

            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 504;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_78, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 504;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[18], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_92;
            PyObject *tmp_called_value_93;
            PyObject *tmp_args_value_11;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_11;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_defaults_11;
            PyObject *tmp_annotations_12;
            struct Nuitka_CellObject *tmp_closure_12[1];
            tmp_called_value_93 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[53]);

            if (tmp_called_value_93 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_called_value_93 == NULL)) {
                        tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
                    }

                    if (tmp_called_value_93 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 564;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_93);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_13 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[63]);

            if (tmp_tuple_element_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                    if (unlikely(tmp_tuple_element_13 == NULL)) {
                        tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                    }

                    if (tmp_tuple_element_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_93);

                        exception_lineno = 565;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_13);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_11 = MAKE_TUPLE_EMPTY(12);
            {
                PyObject *tmp_called_value_94;
                PyObject *tmp_called_value_95;
                PyObject *tmp_expression_value_14;
                PyObject *tmp_called_value_96;
                PyObject *tmp_called_value_97;
                PyObject *tmp_called_value_98;
                PyObject *tmp_called_value_99;
                PyObject *tmp_called_value_100;
                PyObject *tmp_called_value_101;
                PyObject *tmp_expression_value_15;
                PyObject *tmp_called_value_102;
                PyTuple_SET_ITEM(tmp_args_value_11, 0, tmp_tuple_element_13);
                tmp_called_value_94 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_94 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_94 == NULL)) {
                            tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_94 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 566;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_called_value_94);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 566;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_94, mod_consts[109]);

                Py_DECREF(tmp_called_value_94);
                if (tmp_tuple_element_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 566;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_args_value_11, 1, tmp_tuple_element_13);
                tmp_called_value_96 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_96 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_96 == NULL)) {
                            tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_96 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 567;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_called_value_96);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 567;
                tmp_expression_value_14 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_96, mod_consts[133]);

                Py_DECREF(tmp_called_value_96);
                if (tmp_expression_value_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 567;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                tmp_called_value_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[134]);
                Py_DECREF(tmp_expression_value_14);
                if (tmp_called_value_95 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 567;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 567;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_95, mod_consts[135]);

                Py_DECREF(tmp_called_value_95);
                if (tmp_tuple_element_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 567;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_args_value_11, 2, tmp_tuple_element_13);
                tmp_tuple_element_13 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[61]);

                if (tmp_tuple_element_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[61]);

                        if (unlikely(tmp_tuple_element_13 == NULL)) {
                            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
                        }

                        if (tmp_tuple_element_13 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 574;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_tuple_element_13);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_11, 3, tmp_tuple_element_13);
                tmp_called_value_97 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_97 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_97 == NULL)) {
                            tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_97 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 575;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_called_value_97);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 575;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_97, mod_consts[101]);

                Py_DECREF(tmp_called_value_97);
                if (tmp_tuple_element_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 575;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_args_value_11, 4, tmp_tuple_element_13);
                tmp_tuple_element_13 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[64]);

                if (tmp_tuple_element_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_13 == NULL)) {
                            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_13 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 576;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_tuple_element_13);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_11, 5, tmp_tuple_element_13);
                tmp_called_value_98 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_98 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_98 == NULL)) {
                            tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_98 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 577;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_called_value_98);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 577;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_98, mod_consts[102]);

                Py_DECREF(tmp_called_value_98);
                if (tmp_tuple_element_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 577;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_args_value_11, 6, tmp_tuple_element_13);
                tmp_tuple_element_13 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[65]);

                if (tmp_tuple_element_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_tuple_element_13 == NULL)) {
                            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
                        }

                        if (tmp_tuple_element_13 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 578;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_tuple_element_13);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_11, 7, tmp_tuple_element_13);
                tmp_called_value_99 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_99 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_99 == NULL)) {
                            tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_99 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 579;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_called_value_99);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 579;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_99, mod_consts[115]);

                Py_DECREF(tmp_called_value_99);
                if (tmp_tuple_element_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 579;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_args_value_11, 8, tmp_tuple_element_13);
                tmp_tuple_element_13 = mod_consts[149];
                PyTuple_SET_ITEM0(tmp_args_value_11, 9, tmp_tuple_element_13);
                tmp_called_value_100 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_100 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_100 == NULL)) {
                            tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_100 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 581;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_called_value_100);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 581;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_100, mod_consts[103]);

                Py_DECREF(tmp_called_value_100);
                if (tmp_tuple_element_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 581;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_args_value_11, 10, tmp_tuple_element_13);
                tmp_called_value_102 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_102 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_102 == NULL)) {
                            tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_102 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 582;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_called_value_102);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 582;
                tmp_expression_value_15 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_102, mod_consts[150]);

                Py_DECREF(tmp_called_value_102);
                if (tmp_expression_value_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 582;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                tmp_called_value_101 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[134]);
                Py_DECREF(tmp_expression_value_15);
                if (tmp_called_value_101 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 582;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 582;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_101, mod_consts[135]);

                Py_DECREF(tmp_called_value_101);
                if (tmp_tuple_element_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 582;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_args_value_11, 11, tmp_tuple_element_13);
            }
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_called_value_93);
            Py_DECREF(tmp_args_value_11);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            tmp_kwargs_value_11 = DICT_COPY(mod_consts[151]);
            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 564;
            tmp_called_value_92 = CALL_FUNCTION(tstate, tmp_called_value_93, tmp_args_value_11, tmp_kwargs_value_11);
            Py_DECREF(tmp_called_value_93);
            Py_DECREF(tmp_args_value_11);
            Py_DECREF(tmp_kwargs_value_11);
            if (tmp_called_value_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_11 = mod_consts[152];
            tmp_annotations_12 = DICT_COPY(mod_consts[153]);
            Py_INCREF(tmp_defaults_11);

            tmp_closure_12[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_12[0]);

            tmp_args_element_value_11 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__13_sem(tmp_defaults_11, tmp_annotations_12, tmp_closure_12);

            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 564;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_92, tmp_args_element_value_11);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 598;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_103;
            PyObject *tmp_called_value_104;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_value_12;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_defaults_12;
            PyObject *tmp_annotations_13;
            struct Nuitka_CellObject *tmp_closure_13[1];
            tmp_called_value_104 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[53]);

            if (tmp_called_value_104 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_104 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_called_value_104 == NULL)) {
                        tmp_called_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
                    }

                    if (tmp_called_value_104 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 601;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_104);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_14 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[63]);

            if (tmp_tuple_element_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                    if (unlikely(tmp_tuple_element_14 == NULL)) {
                        tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                    }

                    if (tmp_tuple_element_14 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_104);

                        exception_lineno = 602;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_14);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_12 = MAKE_TUPLE_EMPTY(12);
            {
                PyObject *tmp_called_value_105;
                PyObject *tmp_called_value_106;
                PyObject *tmp_called_value_107;
                PyObject *tmp_called_value_108;
                PyObject *tmp_called_value_109;
                PyObject *tmp_called_value_110;
                PyTuple_SET_ITEM(tmp_args_value_12, 0, tmp_tuple_element_14);
                tmp_called_value_105 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_105 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_105 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_105 == NULL)) {
                            tmp_called_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_105 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 603;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_called_value_105);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 603;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_105, mod_consts[109]);

                Py_DECREF(tmp_called_value_105);
                if (tmp_tuple_element_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 603;
                    type_description_2 = "c";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_args_value_12, 1, tmp_tuple_element_14);
                tmp_tuple_element_14 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[61]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[61]);

                        if (unlikely(tmp_tuple_element_14 == NULL)) {
                            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
                        }

                        if (tmp_tuple_element_14 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 604;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_tuple_element_14);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_12, 2, tmp_tuple_element_14);
                tmp_called_value_106 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_106 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_106 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_106 == NULL)) {
                            tmp_called_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_106 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 605;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_called_value_106);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 605;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_106, mod_consts[101]);

                Py_DECREF(tmp_called_value_106);
                if (tmp_tuple_element_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 605;
                    type_description_2 = "c";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_args_value_12, 3, tmp_tuple_element_14);
                tmp_tuple_element_14 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[64]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_14 == NULL)) {
                            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_14 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 606;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_tuple_element_14);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_12, 4, tmp_tuple_element_14);
                tmp_called_value_107 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_107 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_107 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_107 == NULL)) {
                            tmp_called_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_107 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 607;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_called_value_107);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 607;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_107, mod_consts[102]);

                Py_DECREF(tmp_called_value_107);
                if (tmp_tuple_element_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 607;
                    type_description_2 = "c";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_args_value_12, 5, tmp_tuple_element_14);
                tmp_tuple_element_14 = mod_consts[155];
                PyTuple_SET_ITEM0(tmp_args_value_12, 6, tmp_tuple_element_14);
                tmp_tuple_element_14 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[65]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_tuple_element_14 == NULL)) {
                            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
                        }

                        if (tmp_tuple_element_14 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 609;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_tuple_element_14);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_12, 7, tmp_tuple_element_14);
                tmp_called_value_108 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_108 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_108 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_108 == NULL)) {
                            tmp_called_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_108 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 610;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_called_value_108);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 610;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_108, mod_consts[115]);

                Py_DECREF(tmp_called_value_108);
                if (tmp_tuple_element_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 610;
                    type_description_2 = "c";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_args_value_12, 8, tmp_tuple_element_14);
                tmp_tuple_element_14 = mod_consts[156];
                PyTuple_SET_ITEM0(tmp_args_value_12, 9, tmp_tuple_element_14);
                tmp_called_value_109 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_109 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_109 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_109 == NULL)) {
                            tmp_called_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_109 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 612;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_called_value_109);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 612;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_109, mod_consts[103]);

                Py_DECREF(tmp_called_value_109);
                if (tmp_tuple_element_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 612;
                    type_description_2 = "c";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_args_value_12, 10, tmp_tuple_element_14);
                tmp_called_value_110 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_110 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_110 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_110 == NULL)) {
                            tmp_called_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_110 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 613;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_called_value_110);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 613;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_110, mod_consts[157]);

                Py_DECREF(tmp_called_value_110);
                if (tmp_tuple_element_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 613;
                    type_description_2 = "c";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_args_value_12, 11, tmp_tuple_element_14);
            }
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_args_value_12);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            tmp_kwargs_value_12 = DICT_COPY(mod_consts[158]);
            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 601;
            tmp_called_value_103 = CALL_FUNCTION(tstate, tmp_called_value_104, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_args_value_12);
            Py_DECREF(tmp_kwargs_value_12);
            if (tmp_called_value_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 601;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_12 = mod_consts[106];
            tmp_annotations_13 = DICT_COPY(mod_consts[107]);
            Py_INCREF(tmp_defaults_12);

            tmp_closure_13[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_13[0]);

            tmp_args_element_value_12 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__14_skew(tmp_defaults_12, tmp_annotations_13, tmp_closure_13);

            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 601;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_103, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_103);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 601;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[21], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_111;
            PyObject *tmp_called_value_112;
            PyObject *tmp_args_value_13;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_13;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_defaults_13;
            PyObject *tmp_annotations_14;
            struct Nuitka_CellObject *tmp_closure_14[1];
            tmp_called_value_112 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[53]);

            if (tmp_called_value_112 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_called_value_112 == NULL)) {
                        tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
                    }

                    if (tmp_called_value_112 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 632;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_112);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_15 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[63]);

            if (tmp_tuple_element_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                    if (unlikely(tmp_tuple_element_15 == NULL)) {
                        tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                    }

                    if (tmp_tuple_element_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_112);

                        exception_lineno = 633;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_15);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_13 = MAKE_TUPLE_EMPTY(12);
            {
                PyObject *tmp_called_value_113;
                PyObject *tmp_called_value_114;
                PyObject *tmp_called_value_115;
                PyObject *tmp_called_value_116;
                PyObject *tmp_called_value_117;
                PyObject *tmp_called_value_118;
                PyObject *tmp_expression_value_16;
                PyObject *tmp_called_value_119;
                PyTuple_SET_ITEM(tmp_args_value_13, 0, tmp_tuple_element_15);
                tmp_called_value_113 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_113 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_113 == NULL)) {
                            tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_113 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 634;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_called_value_113);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 634;
                tmp_tuple_element_15 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_113, mod_consts[109]);

                Py_DECREF(tmp_called_value_113);
                if (tmp_tuple_element_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 634;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_args_value_13, 1, tmp_tuple_element_15);
                tmp_tuple_element_15 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[61]);

                if (tmp_tuple_element_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[61]);

                        if (unlikely(tmp_tuple_element_15 == NULL)) {
                            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
                        }

                        if (tmp_tuple_element_15 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 635;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_tuple_element_15);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_13, 2, tmp_tuple_element_15);
                tmp_called_value_114 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_114 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_114 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_114 == NULL)) {
                            tmp_called_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_114 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 636;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_called_value_114);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 636;
                tmp_tuple_element_15 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_114, mod_consts[101]);

                Py_DECREF(tmp_called_value_114);
                if (tmp_tuple_element_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 636;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_args_value_13, 3, tmp_tuple_element_15);
                tmp_tuple_element_15 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[64]);

                if (tmp_tuple_element_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_15 == NULL)) {
                            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_15 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 637;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_tuple_element_15);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_13, 4, tmp_tuple_element_15);
                tmp_called_value_115 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_115 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_115 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_115 == NULL)) {
                            tmp_called_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_115 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 638;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_called_value_115);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 638;
                tmp_tuple_element_15 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_115, mod_consts[102]);

                Py_DECREF(tmp_called_value_115);
                if (tmp_tuple_element_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 638;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_args_value_13, 5, tmp_tuple_element_15);
                tmp_tuple_element_15 = mod_consts[160];
                PyTuple_SET_ITEM0(tmp_args_value_13, 6, tmp_tuple_element_15);
                tmp_tuple_element_15 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[65]);

                if (tmp_tuple_element_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_tuple_element_15 == NULL)) {
                            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
                        }

                        if (tmp_tuple_element_15 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 640;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_tuple_element_15);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_13, 7, tmp_tuple_element_15);
                tmp_called_value_116 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_116 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_116 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_116 == NULL)) {
                            tmp_called_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_116 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 641;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_called_value_116);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 641;
                tmp_tuple_element_15 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_116, mod_consts[115]);

                Py_DECREF(tmp_called_value_116);
                if (tmp_tuple_element_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 641;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_args_value_13, 8, tmp_tuple_element_15);
                tmp_tuple_element_15 = mod_consts[161];
                PyTuple_SET_ITEM0(tmp_args_value_13, 9, tmp_tuple_element_15);
                tmp_called_value_117 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_117 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_117 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_117 == NULL)) {
                            tmp_called_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_117 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 643;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_called_value_117);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 643;
                tmp_tuple_element_15 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_117, mod_consts[103]);

                Py_DECREF(tmp_called_value_117);
                if (tmp_tuple_element_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 643;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_args_value_13, 10, tmp_tuple_element_15);
                tmp_called_value_119 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_119 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_119 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_119 == NULL)) {
                            tmp_called_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_119 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 644;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_called_value_119);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 644;
                tmp_expression_value_16 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_119, mod_consts[162]);

                Py_DECREF(tmp_called_value_119);
                if (tmp_expression_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 644;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                tmp_called_value_118 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[134]);
                Py_DECREF(tmp_expression_value_16);
                if (tmp_called_value_118 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 644;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 644;
                tmp_tuple_element_15 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_118, mod_consts[135]);

                Py_DECREF(tmp_called_value_118);
                if (tmp_tuple_element_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 644;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_args_value_13, 11, tmp_tuple_element_15);
            }
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_args_value_13);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            tmp_kwargs_value_13 = DICT_COPY(mod_consts[163]);
            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 632;
            tmp_called_value_111 = CALL_FUNCTION(tstate, tmp_called_value_112, tmp_args_value_13, tmp_kwargs_value_13);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_args_value_13);
            Py_DECREF(tmp_kwargs_value_13);
            if (tmp_called_value_111 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_13 = mod_consts[106];
            tmp_annotations_14 = DICT_COPY(mod_consts[107]);
            Py_INCREF(tmp_defaults_13);

            tmp_closure_14[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_14[0]);

            tmp_args_element_value_13 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__15_kurt(tmp_defaults_13, tmp_annotations_14, tmp_closure_14);

            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 632;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_111, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_111);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 632;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 669;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_120;
            PyObject *tmp_called_value_121;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_14;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_called_value_129;
            PyObject *tmp_called_value_130;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_defaults_14;
            PyObject *tmp_annotations_15;
            struct Nuitka_CellObject *tmp_closure_15[1];
            tmp_called_value_121 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[53]);

            if (tmp_called_value_121 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_121 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_called_value_121 == NULL)) {
                        tmp_called_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
                    }

                    if (tmp_called_value_121 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 672;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_121);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_16 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[63]);

            if (tmp_tuple_element_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                    if (unlikely(tmp_tuple_element_16 == NULL)) {
                        tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                    }

                    if (tmp_tuple_element_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_121);

                        exception_lineno = 673;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_16);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_14 = MAKE_TUPLE_EMPTY(10);
            {
                PyObject *tmp_called_value_122;
                PyObject *tmp_called_value_123;
                PyObject *tmp_expression_value_17;
                PyObject *tmp_called_value_124;
                PyObject *tmp_called_value_125;
                PyObject *tmp_called_value_126;
                PyObject *tmp_called_value_127;
                PyObject *tmp_called_value_128;
                PyTuple_SET_ITEM(tmp_args_value_14, 0, tmp_tuple_element_16);
                tmp_called_value_122 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_122 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_122 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_122 == NULL)) {
                            tmp_called_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_122 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 674;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_called_value_122);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 674;
                tmp_tuple_element_16 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_122, mod_consts[109]);

                Py_DECREF(tmp_called_value_122);
                if (tmp_tuple_element_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 674;
                    type_description_2 = "c";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_args_value_14, 1, tmp_tuple_element_16);
                tmp_called_value_124 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_124 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_124 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_124 == NULL)) {
                            tmp_called_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_124 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 675;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_called_value_124);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 675;
                tmp_expression_value_17 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_124, mod_consts[165]);

                Py_DECREF(tmp_called_value_124);
                if (tmp_expression_value_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 675;
                    type_description_2 = "c";
                    goto tuple_build_exception_14;
                }
                tmp_called_value_123 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[134]);
                Py_DECREF(tmp_expression_value_17);
                if (tmp_called_value_123 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 675;
                    type_description_2 = "c";
                    goto tuple_build_exception_14;
                }
                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 675;
                tmp_tuple_element_16 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_123, mod_consts[135]);

                Py_DECREF(tmp_called_value_123);
                if (tmp_tuple_element_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 675;
                    type_description_2 = "c";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_args_value_14, 2, tmp_tuple_element_16);
                tmp_tuple_element_16 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[61]);

                if (tmp_tuple_element_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[61]);

                        if (unlikely(tmp_tuple_element_16 == NULL)) {
                            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
                        }

                        if (tmp_tuple_element_16 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 694;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_tuple_element_16);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_14, 3, tmp_tuple_element_16);
                tmp_called_value_125 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_125 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_125 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_125 == NULL)) {
                            tmp_called_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_125 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 695;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_called_value_125);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 695;
                tmp_tuple_element_16 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_125, mod_consts[101]);

                Py_DECREF(tmp_called_value_125);
                if (tmp_tuple_element_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 695;
                    type_description_2 = "c";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_args_value_14, 4, tmp_tuple_element_16);
                tmp_tuple_element_16 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[64]);

                if (tmp_tuple_element_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_16 == NULL)) {
                            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_16 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 696;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_tuple_element_16);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_14, 5, tmp_tuple_element_16);
                tmp_called_value_126 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_126 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_126 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_126 == NULL)) {
                            tmp_called_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_126 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 697;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_called_value_126);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 697;
                tmp_tuple_element_16 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_126, mod_consts[102]);

                Py_DECREF(tmp_called_value_126);
                if (tmp_tuple_element_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 697;
                    type_description_2 = "c";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_args_value_14, 6, tmp_tuple_element_16);
                tmp_tuple_element_16 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[65]);

                if (tmp_tuple_element_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_tuple_element_16 == NULL)) {
                            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
                        }

                        if (tmp_tuple_element_16 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 698;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_tuple_element_16);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_14, 7, tmp_tuple_element_16);
                tmp_called_value_127 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_127 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_127 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_127 == NULL)) {
                            tmp_called_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_127 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 699;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_called_value_127);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 699;
                tmp_tuple_element_16 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_127, mod_consts[103]);

                Py_DECREF(tmp_called_value_127);
                if (tmp_tuple_element_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 699;
                    type_description_2 = "c";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_args_value_14, 8, tmp_tuple_element_16);
                tmp_called_value_128 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_128 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_128 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_128 == NULL)) {
                            tmp_called_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_128 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 700;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_called_value_128);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 700;
                tmp_tuple_element_16 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_128, mod_consts[166]);

                Py_DECREF(tmp_called_value_128);
                if (tmp_tuple_element_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 700;
                    type_description_2 = "c";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_args_value_14, 9, tmp_tuple_element_16);
            }
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_called_value_121);
            Py_DECREF(tmp_args_value_14);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            tmp_kwargs_value_14 = DICT_COPY(mod_consts[167]);
            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 672;
            tmp_called_value_120 = CALL_FUNCTION(tstate, tmp_called_value_121, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_called_value_121);
            Py_DECREF(tmp_args_value_14);
            Py_DECREF(tmp_kwargs_value_14);
            if (tmp_called_value_120 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 672;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_130 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[52]);

            if (tmp_called_value_130 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_130 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_called_value_130 == NULL)) {
                        tmp_called_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
                    }

                    if (tmp_called_value_130 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_120);

                        exception_lineno = 717;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_130);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 717;
            tmp_called_value_129 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_130, &PyTuple_GET_ITEM(mod_consts[168], 0), mod_consts[169]);
            Py_DECREF(tmp_called_value_130);
            if (tmp_called_value_129 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_120);

                exception_lineno = 717;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_14 = mod_consts[170];
            tmp_annotations_15 = DICT_COPY(mod_consts[171]);
            Py_INCREF(tmp_defaults_14);

            tmp_closure_15[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_15[0]);

            tmp_args_element_value_15 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__16_quantile(tmp_defaults_14, tmp_annotations_15, tmp_closure_15);

            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 717;
            tmp_args_element_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_129, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_129);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_args_element_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_120);

                exception_lineno = 717;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 672;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_120, tmp_args_element_value_14);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 672;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[23], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 718;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_131;
            PyObject *tmp_called_value_132;
            PyObject *tmp_args_value_15;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_kwargs_value_15;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_defaults_15;
            PyObject *tmp_annotations_16;
            struct Nuitka_CellObject *tmp_closure_16[1];
            tmp_called_value_132 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[53]);

            if (tmp_called_value_132 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_132 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_called_value_132 == NULL)) {
                        tmp_called_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
                    }

                    if (tmp_called_value_132 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 730;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_132);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_17 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[63]);

            if (tmp_tuple_element_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                    if (unlikely(tmp_tuple_element_17 == NULL)) {
                        tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                    }

                    if (tmp_tuple_element_17 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_132);

                        exception_lineno = 731;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_17);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_15 = MAKE_TUPLE_EMPTY(11);
            {
                PyObject *tmp_called_value_133;
                PyObject *tmp_called_value_134;
                PyObject *tmp_expression_value_18;
                PyObject *tmp_called_value_135;
                PyObject *tmp_called_value_136;
                PyObject *tmp_called_value_137;
                PyObject *tmp_called_value_138;
                PyObject *tmp_called_value_139;
                PyObject *tmp_expression_value_19;
                PyObject *tmp_called_value_140;
                PyTuple_SET_ITEM(tmp_args_value_15, 0, tmp_tuple_element_17);
                tmp_tuple_element_17 = mod_consts[173];
                PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_17);
                tmp_called_value_133 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_133 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_133 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_133 == NULL)) {
                            tmp_called_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_133 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 733;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_called_value_133);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 733;
                tmp_tuple_element_17 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_133, mod_consts[109]);

                Py_DECREF(tmp_called_value_133);
                if (tmp_tuple_element_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 733;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_args_value_15, 2, tmp_tuple_element_17);
                tmp_called_value_135 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_135 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_135 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_135 == NULL)) {
                            tmp_called_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_135 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 734;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_called_value_135);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 734;
                tmp_expression_value_18 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_135, mod_consts[174]);

                Py_DECREF(tmp_called_value_135);
                if (tmp_expression_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 734;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                tmp_called_value_134 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[134]);
                Py_DECREF(tmp_expression_value_18);
                if (tmp_called_value_134 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 734;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 734;
                tmp_tuple_element_17 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_134, mod_consts[135]);

                Py_DECREF(tmp_called_value_134);
                if (tmp_tuple_element_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 734;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_args_value_15, 3, tmp_tuple_element_17);
                tmp_tuple_element_17 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[61]);

                if (tmp_tuple_element_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[61]);

                        if (unlikely(tmp_tuple_element_17 == NULL)) {
                            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
                        }

                        if (tmp_tuple_element_17 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 750;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_tuple_element_17);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_15, 4, tmp_tuple_element_17);
                tmp_called_value_136 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_136 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_136 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_136 == NULL)) {
                            tmp_called_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_136 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 751;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_called_value_136);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 751;
                tmp_tuple_element_17 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_136, mod_consts[101]);

                Py_DECREF(tmp_called_value_136);
                if (tmp_tuple_element_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 751;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_args_value_15, 5, tmp_tuple_element_17);
                tmp_tuple_element_17 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[64]);

                if (tmp_tuple_element_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_17 == NULL)) {
                            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_17 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 752;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_tuple_element_17);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_15, 6, tmp_tuple_element_17);
                tmp_called_value_137 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_137 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_137 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_137 == NULL)) {
                            tmp_called_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_137 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 753;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_called_value_137);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 753;
                tmp_tuple_element_17 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_137, mod_consts[102]);

                Py_DECREF(tmp_called_value_137);
                if (tmp_tuple_element_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 753;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_args_value_15, 7, tmp_tuple_element_17);
                tmp_tuple_element_17 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[65]);

                if (tmp_tuple_element_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_tuple_element_17 == NULL)) {
                            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
                        }

                        if (tmp_tuple_element_17 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 754;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_tuple_element_17);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_15, 8, tmp_tuple_element_17);
                tmp_called_value_138 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_138 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_138 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_138 == NULL)) {
                            tmp_called_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_138 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 755;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_called_value_138);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 755;
                tmp_tuple_element_17 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_138, mod_consts[103]);

                Py_DECREF(tmp_called_value_138);
                if (tmp_tuple_element_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 755;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_args_value_15, 9, tmp_tuple_element_17);
                tmp_called_value_140 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_140 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_140 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_140 == NULL)) {
                            tmp_called_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_140 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 756;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_called_value_140);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 756;
                tmp_expression_value_19 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_140, mod_consts[175]);

                Py_DECREF(tmp_called_value_140);
                if (tmp_expression_value_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 756;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                tmp_called_value_139 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[134]);
                Py_DECREF(tmp_expression_value_19);
                if (tmp_called_value_139 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 756;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 756;
                tmp_tuple_element_17 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_139, mod_consts[135]);

                Py_DECREF(tmp_called_value_139);
                if (tmp_tuple_element_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 756;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_args_value_15, 10, tmp_tuple_element_17);
            }
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_args_value_15);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            tmp_kwargs_value_15 = DICT_COPY(mod_consts[176]);
            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 730;
            tmp_called_value_131 = CALL_FUNCTION(tstate, tmp_called_value_132, tmp_args_value_15, tmp_kwargs_value_15);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_args_value_15);
            Py_DECREF(tmp_kwargs_value_15);
            if (tmp_called_value_131 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 730;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_15 = mod_consts[177];
            tmp_annotations_16 = DICT_COPY(mod_consts[178]);
            Py_INCREF(tmp_defaults_15);

            tmp_closure_16[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_16[0]);

            tmp_args_element_value_16 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__17_rank(tmp_defaults_15, tmp_annotations_16, tmp_closure_16);

            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 730;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_131, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_131);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 730;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 791;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_141;
            PyObject *tmp_called_value_142;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_16;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_defaults_16;
            PyObject *tmp_annotations_17;
            struct Nuitka_CellObject *tmp_closure_17[1];
            tmp_called_value_142 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[53]);

            if (tmp_called_value_142 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_142 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_called_value_142 == NULL)) {
                        tmp_called_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
                    }

                    if (tmp_called_value_142 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 805;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_142);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_18 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[63]);

            if (tmp_tuple_element_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                    if (unlikely(tmp_tuple_element_18 == NULL)) {
                        tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                    }

                    if (tmp_tuple_element_18 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_142);

                        exception_lineno = 806;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_18);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_16 = MAKE_TUPLE_EMPTY(10);
            {
                PyObject *tmp_called_value_143;
                PyObject *tmp_called_value_144;
                PyObject *tmp_expression_value_20;
                PyObject *tmp_called_value_145;
                PyObject *tmp_called_value_146;
                PyObject *tmp_called_value_147;
                PyObject *tmp_called_value_148;
                PyObject *tmp_called_value_149;
                PyTuple_SET_ITEM(tmp_args_value_16, 0, tmp_tuple_element_18);
                tmp_called_value_143 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_143 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_143 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_143 == NULL)) {
                            tmp_called_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_143 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 807;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_called_value_143);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 807;
                tmp_tuple_element_18 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_143, mod_consts[109]);

                Py_DECREF(tmp_called_value_143);
                if (tmp_tuple_element_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 807;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_args_value_16, 1, tmp_tuple_element_18);
                tmp_called_value_145 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_145 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_145 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_145 == NULL)) {
                            tmp_called_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_145 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 808;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_called_value_145);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 808;
                tmp_expression_value_20 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_145, mod_consts[180]);

                Py_DECREF(tmp_called_value_145);
                if (tmp_expression_value_20 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 808;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                tmp_called_value_144 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[134]);
                Py_DECREF(tmp_expression_value_20);
                if (tmp_called_value_144 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 808;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 808;
                tmp_tuple_element_18 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_144, mod_consts[135]);

                Py_DECREF(tmp_called_value_144);
                if (tmp_tuple_element_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 808;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_args_value_16, 2, tmp_tuple_element_18);
                tmp_tuple_element_18 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[61]);

                if (tmp_tuple_element_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[61]);

                        if (unlikely(tmp_tuple_element_18 == NULL)) {
                            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
                        }

                        if (tmp_tuple_element_18 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 825;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_tuple_element_18);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_16, 3, tmp_tuple_element_18);
                tmp_called_value_146 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_146 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_146 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_146 == NULL)) {
                            tmp_called_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_146 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 826;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_called_value_146);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 826;
                tmp_tuple_element_18 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_146, mod_consts[101]);

                Py_DECREF(tmp_called_value_146);
                if (tmp_tuple_element_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 826;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_args_value_16, 4, tmp_tuple_element_18);
                tmp_tuple_element_18 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[64]);

                if (tmp_tuple_element_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_18 == NULL)) {
                            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_18 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 827;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_tuple_element_18);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_16, 5, tmp_tuple_element_18);
                tmp_called_value_147 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_147 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_147 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_147 == NULL)) {
                            tmp_called_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_147 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 828;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_called_value_147);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 828;
                tmp_tuple_element_18 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_147, mod_consts[102]);

                Py_DECREF(tmp_called_value_147);
                if (tmp_tuple_element_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 828;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_args_value_16, 6, tmp_tuple_element_18);
                tmp_tuple_element_18 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[65]);

                if (tmp_tuple_element_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_tuple_element_18 == NULL)) {
                            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
                        }

                        if (tmp_tuple_element_18 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 829;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_tuple_element_18);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_16, 7, tmp_tuple_element_18);
                tmp_called_value_148 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_148 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_148 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_148 == NULL)) {
                            tmp_called_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_148 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 830;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_called_value_148);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 830;
                tmp_tuple_element_18 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_148, mod_consts[103]);

                Py_DECREF(tmp_called_value_148);
                if (tmp_tuple_element_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 830;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_args_value_16, 8, tmp_tuple_element_18);
                tmp_called_value_149 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_149 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_149 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_149 == NULL)) {
                            tmp_called_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_149 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 831;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_called_value_149);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 831;
                tmp_tuple_element_18 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_149, mod_consts[181]);

                Py_DECREF(tmp_called_value_149);
                if (tmp_tuple_element_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 831;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_args_value_16, 9, tmp_tuple_element_18);
            }
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_16:;
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_args_value_16);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            tmp_kwargs_value_16 = DICT_COPY(mod_consts[182]);
            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 805;
            tmp_called_value_141 = CALL_FUNCTION(tstate, tmp_called_value_142, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_args_value_16);
            Py_DECREF(tmp_kwargs_value_16);
            if (tmp_called_value_141 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 805;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_16 = mod_consts[183];
            tmp_annotations_17 = DICT_COPY(mod_consts[184]);
            Py_INCREF(tmp_defaults_16);

            tmp_closure_17[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_17[0]);

            tmp_args_element_value_17 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__18_cov(tmp_defaults_16, tmp_annotations_17, tmp_closure_17);

            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 805;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_141, tmp_args_element_value_17);
            Py_DECREF(tmp_called_value_141);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 805;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[27], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 847;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_150;
            PyObject *tmp_called_value_151;
            PyObject *tmp_args_value_17;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_kwargs_value_17;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_defaults_17;
            PyObject *tmp_annotations_18;
            struct Nuitka_CellObject *tmp_closure_18[1];
            tmp_called_value_151 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[53]);

            if (tmp_called_value_151 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_151 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_called_value_151 == NULL)) {
                        tmp_called_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
                    }

                    if (tmp_called_value_151 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 861;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_151);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_19 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[63]);

            if (tmp_tuple_element_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                    if (unlikely(tmp_tuple_element_19 == NULL)) {
                        tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                    }

                    if (tmp_tuple_element_19 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_151);

                        exception_lineno = 862;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_19);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_17 = MAKE_TUPLE_EMPTY(13);
            {
                PyObject *tmp_called_value_152;
                PyObject *tmp_called_value_153;
                PyObject *tmp_expression_value_21;
                PyObject *tmp_called_value_154;
                PyObject *tmp_called_value_155;
                PyObject *tmp_called_value_156;
                PyObject *tmp_called_value_157;
                PyObject *tmp_expression_value_22;
                PyObject *tmp_called_value_158;
                PyObject *tmp_called_value_159;
                PyObject *tmp_called_value_160;
                PyObject *tmp_called_value_161;
                PyObject *tmp_called_value_162;
                PyTuple_SET_ITEM(tmp_args_value_17, 0, tmp_tuple_element_19);
                tmp_called_value_152 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_152 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_152 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_152 == NULL)) {
                            tmp_called_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_152 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 863;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_called_value_152);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 863;
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_152, mod_consts[109]);

                Py_DECREF(tmp_called_value_152);
                if (tmp_tuple_element_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 863;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM(tmp_args_value_17, 1, tmp_tuple_element_19);
                tmp_called_value_154 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_154 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_154 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_154 == NULL)) {
                            tmp_called_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_154 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 864;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_called_value_154);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 864;
                tmp_expression_value_21 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_154, mod_consts[186]);

                Py_DECREF(tmp_called_value_154);
                if (tmp_expression_value_21 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 864;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                tmp_called_value_153 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[134]);
                Py_DECREF(tmp_expression_value_21);
                if (tmp_called_value_153 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 864;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 864;
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_153, mod_consts[135]);

                Py_DECREF(tmp_called_value_153);
                if (tmp_tuple_element_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 864;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM(tmp_args_value_17, 2, tmp_tuple_element_19);
                tmp_tuple_element_19 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[61]);

                if (tmp_tuple_element_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[61]);

                        if (unlikely(tmp_tuple_element_19 == NULL)) {
                            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
                        }

                        if (tmp_tuple_element_19 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 878;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_tuple_element_19);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_17, 3, tmp_tuple_element_19);
                tmp_called_value_155 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_155 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_155 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_155 == NULL)) {
                            tmp_called_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_155 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 879;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_called_value_155);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 879;
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_155, mod_consts[101]);

                Py_DECREF(tmp_called_value_155);
                if (tmp_tuple_element_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 879;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM(tmp_args_value_17, 4, tmp_tuple_element_19);
                tmp_tuple_element_19 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[64]);

                if (tmp_tuple_element_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_19 == NULL)) {
                            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                        }

                        if (tmp_tuple_element_19 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 880;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_tuple_element_19);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_17, 5, tmp_tuple_element_19);
                tmp_called_value_156 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_156 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_156 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_156 == NULL)) {
                            tmp_called_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_156 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 881;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_called_value_156);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 881;
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_156, mod_consts[102]);

                Py_DECREF(tmp_called_value_156);
                if (tmp_tuple_element_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 881;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM(tmp_args_value_17, 6, tmp_tuple_element_19);
                tmp_called_value_158 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_158 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_158 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_158 == NULL)) {
                            tmp_called_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_158 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 882;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_called_value_158);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 882;
                tmp_expression_value_22 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_158, mod_consts[187]);

                Py_DECREF(tmp_called_value_158);
                if (tmp_expression_value_22 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 882;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                tmp_called_value_157 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[134]);
                Py_DECREF(tmp_expression_value_22);
                if (tmp_called_value_157 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 882;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 882;
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_157, mod_consts[135]);

                Py_DECREF(tmp_called_value_157);
                if (tmp_tuple_element_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 882;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM(tmp_args_value_17, 7, tmp_tuple_element_19);
                tmp_tuple_element_19 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[65]);

                if (tmp_tuple_element_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_tuple_element_19 == NULL)) {
                            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
                        }

                        if (tmp_tuple_element_19 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 888;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_tuple_element_19);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_17, 8, tmp_tuple_element_19);
                tmp_called_value_159 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_159 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_159 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_159 == NULL)) {
                            tmp_called_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_159 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 889;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_called_value_159);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 889;
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_159, mod_consts[115]);

                Py_DECREF(tmp_called_value_159);
                if (tmp_tuple_element_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 889;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM(tmp_args_value_17, 9, tmp_tuple_element_19);
                tmp_called_value_160 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_160 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_160 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_160 == NULL)) {
                            tmp_called_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_160 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 890;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_called_value_160);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 890;
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_160, mod_consts[188]);

                Py_DECREF(tmp_called_value_160);
                if (tmp_tuple_element_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 890;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM(tmp_args_value_17, 10, tmp_tuple_element_19);
                tmp_called_value_161 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[60]);

                if (tmp_called_value_161 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_161 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_called_value_161 == NULL)) {
                            tmp_called_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
                        }

                        if (tmp_called_value_161 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 913;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_called_value_161);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 913;
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_161, mod_consts[103]);

                Py_DECREF(tmp_called_value_161);
                if (tmp_tuple_element_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 913;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM(tmp_args_value_17, 11, tmp_tuple_element_19);
                tmp_called_value_162 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[45]);

                if (tmp_called_value_162 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_162 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_162 == NULL)) {
                            tmp_called_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_called_value_162 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 914;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_called_value_162);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 914;
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_162, mod_consts[189]);

                Py_DECREF(tmp_called_value_162);
                if (tmp_tuple_element_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 914;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM(tmp_args_value_17, 12, tmp_tuple_element_19);
            }
            goto tuple_build_noexception_17;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_17:;
            Py_DECREF(tmp_called_value_151);
            Py_DECREF(tmp_args_value_17);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_17:;
            tmp_kwargs_value_17 = DICT_COPY(mod_consts[190]);
            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 861;
            tmp_called_value_150 = CALL_FUNCTION(tstate, tmp_called_value_151, tmp_args_value_17, tmp_kwargs_value_17);
            Py_DECREF(tmp_called_value_151);
            Py_DECREF(tmp_args_value_17);
            Py_DECREF(tmp_kwargs_value_17);
            if (tmp_called_value_150 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 861;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_17 = mod_consts[183];
            tmp_annotations_18 = DICT_COPY(mod_consts[184]);
            Py_INCREF(tmp_defaults_17);

            tmp_closure_18[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_18[0]);

            tmp_args_element_value_18 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__19_corr(tmp_defaults_17, tmp_annotations_18, tmp_closure_18);

            frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame.f_lineno = 861;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_150, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 861;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[29], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 930;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5d377b992df64ef4ec4e1dfbb9728be8_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5d377b992df64ef4ec4e1dfbb9728be8_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5d377b992df64ef4ec4e1dfbb9728be8_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5d377b992df64ef4ec4e1dfbb9728be8_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_5d377b992df64ef4ec4e1dfbb9728be8_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_8;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto try_except_handler_8;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_51, mod_consts[192], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_8;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_called_value_163;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_163 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_20 = mod_consts[73];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_20 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_20);
            tmp_tuple_element_20 = locals_pandas$core$window$expanding$$$class__1_Expanding_51;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_18 = tmp_class_creation_1__class_decl_dict;
            frame_7cd73c58de89a86957452c037bc962bd->m_frame.f_lineno = 51;
            tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_163, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto try_except_handler_8;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_38);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_37 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_37);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_pandas$core$window$expanding$$$class__1_Expanding_51);
        locals_pandas$core$window$expanding$$$class__1_Expanding_51 = NULL;
        goto try_return_handler_7;
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

        Py_DECREF(locals_pandas$core$window$expanding$$$class__1_Expanding_51);
        locals_pandas$core$window$expanding$$$class__1_Expanding_51 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 51;
        goto try_except_handler_6;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_37);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
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
        PyObject *tmp_assign_source_39;
        PyObject *tmp_tuple_element_21;
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_tuple_element_21 == NULL)) {
            tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_tuple_element_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;

            goto try_except_handler_9;
        }
        tmp_assign_source_39 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_39, 0, tmp_tuple_element_21);
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_tuple_element_21 == NULL)) {
            tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
        }

        if (tmp_tuple_element_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;

            goto tuple_build_exception_18;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_39, 1, tmp_tuple_element_21);
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_assign_source_39);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_40 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;

            goto try_except_handler_9;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_23 = tmp_class_creation_2__bases;
        tmp_subscript_value_3 = mod_consts[44];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_3, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;

            goto try_except_handler_9;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;

            goto try_except_handler_9;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_42 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_42;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_24 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts[72]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;

            goto try_except_handler_9;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_164;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_value_19;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_kwargs_value_19;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_25 = tmp_class_creation_2__metaclass;
        tmp_called_value_164 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[72]);
        if (tmp_called_value_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;

            goto try_except_handler_9;
        }
        tmp_tuple_element_22 = mod_consts[193];
        tmp_args_value_19 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_22 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_19 = tmp_class_creation_2__class_decl_dict;
        frame_7cd73c58de89a86957452c037bc962bd->m_frame.f_lineno = 945;
        tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_164, tmp_args_value_19, tmp_kwargs_value_19);
        Py_DECREF(tmp_called_value_164);
        Py_DECREF(tmp_args_value_19);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_43;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_26 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts[74]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;

            goto try_except_handler_9;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[75];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_27 = tmp_class_creation_2__metaclass;
        tmp_name_value_7 = mod_consts[76];
        tmp_default_value_2 = mod_consts[77];
        tmp_tuple_element_23 = BUILTIN_GETATTR(tstate, tmp_expression_value_27, tmp_name_value_7, tmp_default_value_2);
        if (tmp_tuple_element_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;

            goto try_except_handler_9;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_28;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_28 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_28 == NULL));
            tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[76]);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_tuple_element_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 945;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 945;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_44;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_45;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_945 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[78];
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_945, mod_consts[79], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[194];
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_945, mod_consts[35], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[193];
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_945, mod_consts[81], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;

            goto try_except_handler_11;
        }
        frame_ed0fe4dae4cfaa50f4130e7d0ed03e83_3 = MAKE_CLASS_FRAME(tstate, codeobj_ed0fe4dae4cfaa50f4130e7d0ed03e83, module_pandas$core$window$expanding, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_ed0fe4dae4cfaa50f4130e7d0ed03e83_3);
        assert(Py_REFCNT(frame_ed0fe4dae4cfaa50f4130e7d0ed03e83_3) == 2);

        // Framed code:
        {
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_expression_value_30;
            tmp_expression_value_29 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_945, mod_consts[73]);

            if (tmp_expression_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[73]);

                    if (unlikely(tmp_expression_value_29 == NULL)) {
                        tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
                    }

                    if (tmp_expression_value_29 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 950;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_29);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[86]);
            Py_DECREF(tmp_expression_value_29);
            if (tmp_add_expr_left_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 950;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_expression_value_30 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_945, mod_consts[70]);

            if (tmp_expression_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_expression_value_30 == NULL)) {
                        tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
                    }

                    if (tmp_expression_value_30 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_add_expr_left_1);

                        exception_lineno = 950;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_30);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[86]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_add_expr_right_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_1);

                exception_lineno = 950;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dictset_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_add_expr_right_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 950;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_945, mod_consts[86], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 950;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_19;
            tmp_annotations_19 = DICT_COPY(mod_consts[195]);


            tmp_dictset_value = MAKE_FUNCTION_pandas$core$window$expanding$$$function__20__get_window_indexer(tmp_annotations_19);

            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_945, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 952;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ed0fe4dae4cfaa50f4130e7d0ed03e83_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ed0fe4dae4cfaa50f4130e7d0ed03e83_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ed0fe4dae4cfaa50f4130e7d0ed03e83_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ed0fe4dae4cfaa50f4130e7d0ed03e83_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_ed0fe4dae4cfaa50f4130e7d0ed03e83_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_11;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 945;

                goto try_except_handler_11;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_945, mod_consts[192], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;

            goto try_except_handler_11;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_called_value_165;
            PyObject *tmp_args_value_20;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kwargs_value_20;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_165 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_24 = mod_consts[193];
            tmp_args_value_20 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_24 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_945;
            PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_20 = tmp_class_creation_2__class_decl_dict;
            frame_7cd73c58de89a86957452c037bc962bd->m_frame.f_lineno = 945;
            tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_165, tmp_args_value_20, tmp_kwargs_value_20);
            Py_DECREF(tmp_args_value_20);
            if (tmp_assign_source_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 945;

                goto try_except_handler_11;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_46;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_45 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_45);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_945);
        locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_945 = NULL;
        goto try_return_handler_10;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_945);
        locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_945 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 945;
        goto try_except_handler_9;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_45);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7cd73c58de89a86957452c037bc962bd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7cd73c58de89a86957452c037bc962bd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7cd73c58de89a86957452c037bc962bd, exception_lineno);
    }



    assertFrameObject(frame_7cd73c58de89a86957452c037bc962bd);

    // Put the previous frame back on top.
    popFrameStack(tstate);

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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pandas$core$window$expanding", false);

    Py_INCREF(module_pandas$core$window$expanding);
    return module_pandas$core$window$expanding;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pandas$core$window$expanding", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
