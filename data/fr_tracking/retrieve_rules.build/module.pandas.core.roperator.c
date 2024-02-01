/* Generated code for Python module 'pandas$core$roperator'
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

/* The "module_pandas$core$roperator" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pandas$core$roperator;
PyDictObject *moduledict_pandas$core$roperator;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[32];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[32];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pandas.core.roperator"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 32; i++) {
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
void checkModuleConstants_pandas$core$roperator(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 32; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_d0309545b21bd38c325efc720a751f38;
static PyCodeObject *codeobj_ef101c5ee959098da0a1cc72dcf634ab;
static PyCodeObject *codeobj_a3ba9d7a42a2f8f0d48710ae29b3f6da;
static PyCodeObject *codeobj_4460945de4ff149aec700b0e0e6d9d54;
static PyCodeObject *codeobj_e30ea32764b5ad3fc87d51792c093780;
static PyCodeObject *codeobj_7c913a640d0c3fd1a93ea657f7f92a1e;
static PyCodeObject *codeobj_9b6d73fbe6563eb5bb7abd3d153b3e3d;
static PyCodeObject *codeobj_bf7beec97f80bda590919bbad20696de;
static PyCodeObject *codeobj_b2c00c90bb6061c19e80609994aff8bb;
static PyCodeObject *codeobj_9aa9905aeeffc4b315939e990e8e396f;
static PyCodeObject *codeobj_3e70d2fb7e54c994cf01bdffff5d3238;
static PyCodeObject *codeobj_9b7448df3aea5043348cd6d631866bb6;
static PyCodeObject *codeobj_3f823fd416649c7ee34e97c612dee132;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[28]); CHECK_OBJECT(module_filename_obj);
    codeobj_d0309545b21bd38c325efc720a751f38 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts[29], mod_consts[29], NULL, NULL, 0, 0, 0);
    codeobj_ef101c5ee959098da0a1cc72dcf634ab = MAKE_CODE_OBJECT(module_filename_obj, 10, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[16], mod_consts[16], mod_consts[30], NULL, 2, 0, 0);
    codeobj_a3ba9d7a42a2f8f0d48710ae29b3f6da = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[25], mod_consts[25], mod_consts[30], NULL, 2, 0, 0);
    codeobj_4460945de4ff149aec700b0e0e6d9d54 = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[19], mod_consts[19], mod_consts[30], NULL, 2, 0, 0);
    codeobj_e30ea32764b5ad3fc87d51792c093780 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[23], mod_consts[23], mod_consts[30], NULL, 2, 0, 0);
    codeobj_7c913a640d0c3fd1a93ea657f7f92a1e = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[21], mod_consts[21], mod_consts[30], NULL, 2, 0, 0);
    codeobj_9b6d73fbe6563eb5bb7abd3d153b3e3d = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[22], mod_consts[22], mod_consts[31], NULL, 2, 0, 0);
    codeobj_bf7beec97f80bda590919bbad20696de = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[18], mod_consts[18], mod_consts[30], NULL, 2, 0, 0);
    codeobj_b2c00c90bb6061c19e80609994aff8bb = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[26], mod_consts[26], mod_consts[30], NULL, 2, 0, 0);
    codeobj_9aa9905aeeffc4b315939e990e8e396f = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[24], mod_consts[24], mod_consts[30], NULL, 2, 0, 0);
    codeobj_3e70d2fb7e54c994cf01bdffff5d3238 = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[17], mod_consts[17], mod_consts[30], NULL, 2, 0, 0);
    codeobj_9b7448df3aea5043348cd6d631866bb6 = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[20], mod_consts[20], mod_consts[30], NULL, 2, 0, 0);
    codeobj_3f823fd416649c7ee34e97c612dee132 = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[27], mod_consts[27], mod_consts[30], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__10_rand_();


static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__11_ror_();


static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__12_rxor();


static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__1_radd();


static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__2_rsub();


static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__3_rmul();


static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__4_rdiv();


static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__5_rtruediv();


static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__6_rfloordiv();


static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__7_rmod();


static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__8_rdivmod();


static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__9_rpow();


// The module function definitions.
static PyObject *impl_pandas$core$roperator$$$function__1_radd(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    struct Nuitka_FrameObject *frame_ef101c5ee959098da0a1cc72dcf634ab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ef101c5ee959098da0a1cc72dcf634ab = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ef101c5ee959098da0a1cc72dcf634ab)) {
        Py_XDECREF(cache_frame_ef101c5ee959098da0a1cc72dcf634ab);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ef101c5ee959098da0a1cc72dcf634ab == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ef101c5ee959098da0a1cc72dcf634ab = MAKE_FUNCTION_FRAME(tstate, codeobj_ef101c5ee959098da0a1cc72dcf634ab, module_pandas$core$roperator, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ef101c5ee959098da0a1cc72dcf634ab->m_type_description == NULL);
    frame_ef101c5ee959098da0a1cc72dcf634ab = cache_frame_ef101c5ee959098da0a1cc72dcf634ab;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ef101c5ee959098da0a1cc72dcf634ab);
    assert(Py_REFCNT(frame_ef101c5ee959098da0a1cc72dcf634ab) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(par_right);
        tmp_add_expr_left_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_add_expr_right_1 = par_left;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_ef101c5ee959098da0a1cc72dcf634ab, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ef101c5ee959098da0a1cc72dcf634ab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ef101c5ee959098da0a1cc72dcf634ab, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ef101c5ee959098da0a1cc72dcf634ab,
        type_description_1,
        par_left,
        par_right
    );


    // Release cached frame if used for exception.
    if (frame_ef101c5ee959098da0a1cc72dcf634ab == cache_frame_ef101c5ee959098da0a1cc72dcf634ab) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ef101c5ee959098da0a1cc72dcf634ab);
        cache_frame_ef101c5ee959098da0a1cc72dcf634ab = NULL;
    }

    assertFrameObject(frame_ef101c5ee959098da0a1cc72dcf634ab);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$roperator$$$function__2_rsub(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    struct Nuitka_FrameObject *frame_3e70d2fb7e54c994cf01bdffff5d3238;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3e70d2fb7e54c994cf01bdffff5d3238 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3e70d2fb7e54c994cf01bdffff5d3238)) {
        Py_XDECREF(cache_frame_3e70d2fb7e54c994cf01bdffff5d3238);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3e70d2fb7e54c994cf01bdffff5d3238 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3e70d2fb7e54c994cf01bdffff5d3238 = MAKE_FUNCTION_FRAME(tstate, codeobj_3e70d2fb7e54c994cf01bdffff5d3238, module_pandas$core$roperator, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3e70d2fb7e54c994cf01bdffff5d3238->m_type_description == NULL);
    frame_3e70d2fb7e54c994cf01bdffff5d3238 = cache_frame_3e70d2fb7e54c994cf01bdffff5d3238;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3e70d2fb7e54c994cf01bdffff5d3238);
    assert(Py_REFCNT(frame_3e70d2fb7e54c994cf01bdffff5d3238) == 2);

    // Framed code:
    {
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(par_right);
        tmp_sub_expr_left_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_sub_expr_right_1 = par_left;
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_3e70d2fb7e54c994cf01bdffff5d3238, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3e70d2fb7e54c994cf01bdffff5d3238->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3e70d2fb7e54c994cf01bdffff5d3238, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3e70d2fb7e54c994cf01bdffff5d3238,
        type_description_1,
        par_left,
        par_right
    );


    // Release cached frame if used for exception.
    if (frame_3e70d2fb7e54c994cf01bdffff5d3238 == cache_frame_3e70d2fb7e54c994cf01bdffff5d3238) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3e70d2fb7e54c994cf01bdffff5d3238);
        cache_frame_3e70d2fb7e54c994cf01bdffff5d3238 = NULL;
    }

    assertFrameObject(frame_3e70d2fb7e54c994cf01bdffff5d3238);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$roperator$$$function__3_rmul(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    struct Nuitka_FrameObject *frame_bf7beec97f80bda590919bbad20696de;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bf7beec97f80bda590919bbad20696de = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bf7beec97f80bda590919bbad20696de)) {
        Py_XDECREF(cache_frame_bf7beec97f80bda590919bbad20696de);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf7beec97f80bda590919bbad20696de == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf7beec97f80bda590919bbad20696de = MAKE_FUNCTION_FRAME(tstate, codeobj_bf7beec97f80bda590919bbad20696de, module_pandas$core$roperator, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bf7beec97f80bda590919bbad20696de->m_type_description == NULL);
    frame_bf7beec97f80bda590919bbad20696de = cache_frame_bf7beec97f80bda590919bbad20696de;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bf7beec97f80bda590919bbad20696de);
    assert(Py_REFCNT(frame_bf7beec97f80bda590919bbad20696de) == 2);

    // Framed code:
    {
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(par_right);
        tmp_mult_expr_left_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_mult_expr_right_1 = par_left;
        tmp_return_value = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_bf7beec97f80bda590919bbad20696de, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf7beec97f80bda590919bbad20696de->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf7beec97f80bda590919bbad20696de, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf7beec97f80bda590919bbad20696de,
        type_description_1,
        par_left,
        par_right
    );


    // Release cached frame if used for exception.
    if (frame_bf7beec97f80bda590919bbad20696de == cache_frame_bf7beec97f80bda590919bbad20696de) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bf7beec97f80bda590919bbad20696de);
        cache_frame_bf7beec97f80bda590919bbad20696de = NULL;
    }

    assertFrameObject(frame_bf7beec97f80bda590919bbad20696de);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$roperator$$$function__4_rdiv(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    struct Nuitka_FrameObject *frame_4460945de4ff149aec700b0e0e6d9d54;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4460945de4ff149aec700b0e0e6d9d54 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4460945de4ff149aec700b0e0e6d9d54)) {
        Py_XDECREF(cache_frame_4460945de4ff149aec700b0e0e6d9d54);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4460945de4ff149aec700b0e0e6d9d54 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4460945de4ff149aec700b0e0e6d9d54 = MAKE_FUNCTION_FRAME(tstate, codeobj_4460945de4ff149aec700b0e0e6d9d54, module_pandas$core$roperator, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4460945de4ff149aec700b0e0e6d9d54->m_type_description == NULL);
    frame_4460945de4ff149aec700b0e0e6d9d54 = cache_frame_4460945de4ff149aec700b0e0e6d9d54;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4460945de4ff149aec700b0e0e6d9d54);
    assert(Py_REFCNT(frame_4460945de4ff149aec700b0e0e6d9d54) == 2);

    // Framed code:
    {
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        CHECK_OBJECT(par_right);
        tmp_truediv_expr_left_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_truediv_expr_right_1 = par_left;
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_4460945de4ff149aec700b0e0e6d9d54, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4460945de4ff149aec700b0e0e6d9d54->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4460945de4ff149aec700b0e0e6d9d54, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4460945de4ff149aec700b0e0e6d9d54,
        type_description_1,
        par_left,
        par_right
    );


    // Release cached frame if used for exception.
    if (frame_4460945de4ff149aec700b0e0e6d9d54 == cache_frame_4460945de4ff149aec700b0e0e6d9d54) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4460945de4ff149aec700b0e0e6d9d54);
        cache_frame_4460945de4ff149aec700b0e0e6d9d54 = NULL;
    }

    assertFrameObject(frame_4460945de4ff149aec700b0e0e6d9d54);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$roperator$$$function__5_rtruediv(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    struct Nuitka_FrameObject *frame_9b7448df3aea5043348cd6d631866bb6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9b7448df3aea5043348cd6d631866bb6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9b7448df3aea5043348cd6d631866bb6)) {
        Py_XDECREF(cache_frame_9b7448df3aea5043348cd6d631866bb6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9b7448df3aea5043348cd6d631866bb6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9b7448df3aea5043348cd6d631866bb6 = MAKE_FUNCTION_FRAME(tstate, codeobj_9b7448df3aea5043348cd6d631866bb6, module_pandas$core$roperator, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9b7448df3aea5043348cd6d631866bb6->m_type_description == NULL);
    frame_9b7448df3aea5043348cd6d631866bb6 = cache_frame_9b7448df3aea5043348cd6d631866bb6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9b7448df3aea5043348cd6d631866bb6);
    assert(Py_REFCNT(frame_9b7448df3aea5043348cd6d631866bb6) == 2);

    // Framed code:
    {
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        CHECK_OBJECT(par_right);
        tmp_truediv_expr_left_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_truediv_expr_right_1 = par_left;
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_9b7448df3aea5043348cd6d631866bb6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9b7448df3aea5043348cd6d631866bb6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9b7448df3aea5043348cd6d631866bb6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9b7448df3aea5043348cd6d631866bb6,
        type_description_1,
        par_left,
        par_right
    );


    // Release cached frame if used for exception.
    if (frame_9b7448df3aea5043348cd6d631866bb6 == cache_frame_9b7448df3aea5043348cd6d631866bb6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9b7448df3aea5043348cd6d631866bb6);
        cache_frame_9b7448df3aea5043348cd6d631866bb6 = NULL;
    }

    assertFrameObject(frame_9b7448df3aea5043348cd6d631866bb6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$roperator$$$function__6_rfloordiv(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    struct Nuitka_FrameObject *frame_7c913a640d0c3fd1a93ea657f7f92a1e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7c913a640d0c3fd1a93ea657f7f92a1e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7c913a640d0c3fd1a93ea657f7f92a1e)) {
        Py_XDECREF(cache_frame_7c913a640d0c3fd1a93ea657f7f92a1e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7c913a640d0c3fd1a93ea657f7f92a1e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7c913a640d0c3fd1a93ea657f7f92a1e = MAKE_FUNCTION_FRAME(tstate, codeobj_7c913a640d0c3fd1a93ea657f7f92a1e, module_pandas$core$roperator, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7c913a640d0c3fd1a93ea657f7f92a1e->m_type_description == NULL);
    frame_7c913a640d0c3fd1a93ea657f7f92a1e = cache_frame_7c913a640d0c3fd1a93ea657f7f92a1e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7c913a640d0c3fd1a93ea657f7f92a1e);
    assert(Py_REFCNT(frame_7c913a640d0c3fd1a93ea657f7f92a1e) == 2);

    // Framed code:
    {
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        CHECK_OBJECT(par_right);
        tmp_floordiv_expr_left_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_floordiv_expr_right_1 = par_left;
        tmp_return_value = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_7c913a640d0c3fd1a93ea657f7f92a1e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7c913a640d0c3fd1a93ea657f7f92a1e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7c913a640d0c3fd1a93ea657f7f92a1e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7c913a640d0c3fd1a93ea657f7f92a1e,
        type_description_1,
        par_left,
        par_right
    );


    // Release cached frame if used for exception.
    if (frame_7c913a640d0c3fd1a93ea657f7f92a1e == cache_frame_7c913a640d0c3fd1a93ea657f7f92a1e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7c913a640d0c3fd1a93ea657f7f92a1e);
        cache_frame_7c913a640d0c3fd1a93ea657f7f92a1e = NULL;
    }

    assertFrameObject(frame_7c913a640d0c3fd1a93ea657f7f92a1e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$roperator$$$function__7_rmod(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    PyObject *var_typ = NULL;
    struct Nuitka_FrameObject *frame_9b6d73fbe6563eb5bb7abd3d153b3e3d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9b6d73fbe6563eb5bb7abd3d153b3e3d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9b6d73fbe6563eb5bb7abd3d153b3e3d)) {
        Py_XDECREF(cache_frame_9b6d73fbe6563eb5bb7abd3d153b3e3d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9b6d73fbe6563eb5bb7abd3d153b3e3d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9b6d73fbe6563eb5bb7abd3d153b3e3d = MAKE_FUNCTION_FRAME(tstate, codeobj_9b6d73fbe6563eb5bb7abd3d153b3e3d, module_pandas$core$roperator, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9b6d73fbe6563eb5bb7abd3d153b3e3d->m_type_description == NULL);
    frame_9b6d73fbe6563eb5bb7abd3d153b3e3d = cache_frame_9b6d73fbe6563eb5bb7abd3d153b3e3d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9b6d73fbe6563eb5bb7abd3d153b3e3d);
    assert(Py_REFCNT(frame_9b6d73fbe6563eb5bb7abd3d153b3e3d) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_right);
        tmp_isinstance_inst_1 = par_right;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_left);
        tmp_type_arg_1 = par_left;
        tmp_expression_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_expression_value_1 == NULL));
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_typ == NULL);
        var_typ = tmp_assign_source_1;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(var_typ);
        tmp_format_value_1 = var_typ;
        tmp_format_spec_1 = mod_consts[1];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[2];
        PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[1], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_9b6d73fbe6563eb5bb7abd3d153b3e3d->m_frame.f_lineno = 40;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 40;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        CHECK_OBJECT(par_right);
        tmp_mod_expr_left_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_mod_expr_right_1 = par_left;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_9b6d73fbe6563eb5bb7abd3d153b3e3d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9b6d73fbe6563eb5bb7abd3d153b3e3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9b6d73fbe6563eb5bb7abd3d153b3e3d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9b6d73fbe6563eb5bb7abd3d153b3e3d,
        type_description_1,
        par_left,
        par_right,
        var_typ
    );


    // Release cached frame if used for exception.
    if (frame_9b6d73fbe6563eb5bb7abd3d153b3e3d == cache_frame_9b6d73fbe6563eb5bb7abd3d153b3e3d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9b6d73fbe6563eb5bb7abd3d153b3e3d);
        cache_frame_9b6d73fbe6563eb5bb7abd3d153b3e3d = NULL;
    }

    assertFrameObject(frame_9b6d73fbe6563eb5bb7abd3d153b3e3d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    Py_XDECREF(var_typ);
    var_typ = NULL;
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
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$roperator$$$function__8_rdivmod(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    struct Nuitka_FrameObject *frame_e30ea32764b5ad3fc87d51792c093780;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e30ea32764b5ad3fc87d51792c093780 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e30ea32764b5ad3fc87d51792c093780)) {
        Py_XDECREF(cache_frame_e30ea32764b5ad3fc87d51792c093780);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e30ea32764b5ad3fc87d51792c093780 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e30ea32764b5ad3fc87d51792c093780 = MAKE_FUNCTION_FRAME(tstate, codeobj_e30ea32764b5ad3fc87d51792c093780, module_pandas$core$roperator, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e30ea32764b5ad3fc87d51792c093780->m_type_description == NULL);
    frame_e30ea32764b5ad3fc87d51792c093780 = cache_frame_e30ea32764b5ad3fc87d51792c093780;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e30ea32764b5ad3fc87d51792c093780);
    assert(Py_REFCNT(frame_e30ea32764b5ad3fc87d51792c093780) == 2);

    // Framed code:
    {
        PyObject *tmp_divmod_expr_left_1;
        PyObject *tmp_divmod_expr_right_1;
        CHECK_OBJECT(par_right);
        tmp_divmod_expr_left_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_divmod_expr_right_1 = par_left;
        tmp_return_value = BINARY_OPERATION_DIVMOD_OBJECT_OBJECT_OBJECT(tmp_divmod_expr_left_1, tmp_divmod_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_e30ea32764b5ad3fc87d51792c093780, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e30ea32764b5ad3fc87d51792c093780->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e30ea32764b5ad3fc87d51792c093780, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e30ea32764b5ad3fc87d51792c093780,
        type_description_1,
        par_left,
        par_right
    );


    // Release cached frame if used for exception.
    if (frame_e30ea32764b5ad3fc87d51792c093780 == cache_frame_e30ea32764b5ad3fc87d51792c093780) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e30ea32764b5ad3fc87d51792c093780);
        cache_frame_e30ea32764b5ad3fc87d51792c093780 = NULL;
    }

    assertFrameObject(frame_e30ea32764b5ad3fc87d51792c093780);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$roperator$$$function__9_rpow(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    struct Nuitka_FrameObject *frame_9aa9905aeeffc4b315939e990e8e396f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9aa9905aeeffc4b315939e990e8e396f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9aa9905aeeffc4b315939e990e8e396f)) {
        Py_XDECREF(cache_frame_9aa9905aeeffc4b315939e990e8e396f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9aa9905aeeffc4b315939e990e8e396f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9aa9905aeeffc4b315939e990e8e396f = MAKE_FUNCTION_FRAME(tstate, codeobj_9aa9905aeeffc4b315939e990e8e396f, module_pandas$core$roperator, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9aa9905aeeffc4b315939e990e8e396f->m_type_description == NULL);
    frame_9aa9905aeeffc4b315939e990e8e396f = cache_frame_9aa9905aeeffc4b315939e990e8e396f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9aa9905aeeffc4b315939e990e8e396f);
    assert(Py_REFCNT(frame_9aa9905aeeffc4b315939e990e8e396f) == 2);

    // Framed code:
    {
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        CHECK_OBJECT(par_right);
        tmp_pow_expr_left_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_pow_expr_right_1 = par_left;
        tmp_return_value = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_9aa9905aeeffc4b315939e990e8e396f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9aa9905aeeffc4b315939e990e8e396f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9aa9905aeeffc4b315939e990e8e396f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9aa9905aeeffc4b315939e990e8e396f,
        type_description_1,
        par_left,
        par_right
    );


    // Release cached frame if used for exception.
    if (frame_9aa9905aeeffc4b315939e990e8e396f == cache_frame_9aa9905aeeffc4b315939e990e8e396f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9aa9905aeeffc4b315939e990e8e396f);
        cache_frame_9aa9905aeeffc4b315939e990e8e396f = NULL;
    }

    assertFrameObject(frame_9aa9905aeeffc4b315939e990e8e396f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$roperator$$$function__10_rand_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    struct Nuitka_FrameObject *frame_a3ba9d7a42a2f8f0d48710ae29b3f6da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a3ba9d7a42a2f8f0d48710ae29b3f6da = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a3ba9d7a42a2f8f0d48710ae29b3f6da)) {
        Py_XDECREF(cache_frame_a3ba9d7a42a2f8f0d48710ae29b3f6da);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a3ba9d7a42a2f8f0d48710ae29b3f6da == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a3ba9d7a42a2f8f0d48710ae29b3f6da = MAKE_FUNCTION_FRAME(tstate, codeobj_a3ba9d7a42a2f8f0d48710ae29b3f6da, module_pandas$core$roperator, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a3ba9d7a42a2f8f0d48710ae29b3f6da->m_type_description == NULL);
    frame_a3ba9d7a42a2f8f0d48710ae29b3f6da = cache_frame_a3ba9d7a42a2f8f0d48710ae29b3f6da;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a3ba9d7a42a2f8f0d48710ae29b3f6da);
    assert(Py_REFCNT(frame_a3ba9d7a42a2f8f0d48710ae29b3f6da) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$roperator, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_right);
        tmp_args_element_value_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_args_element_value_2 = par_left;
        frame_a3ba9d7a42a2f8f0d48710ae29b3f6da->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[4],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_a3ba9d7a42a2f8f0d48710ae29b3f6da, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a3ba9d7a42a2f8f0d48710ae29b3f6da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a3ba9d7a42a2f8f0d48710ae29b3f6da, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a3ba9d7a42a2f8f0d48710ae29b3f6da,
        type_description_1,
        par_left,
        par_right
    );


    // Release cached frame if used for exception.
    if (frame_a3ba9d7a42a2f8f0d48710ae29b3f6da == cache_frame_a3ba9d7a42a2f8f0d48710ae29b3f6da) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a3ba9d7a42a2f8f0d48710ae29b3f6da);
        cache_frame_a3ba9d7a42a2f8f0d48710ae29b3f6da = NULL;
    }

    assertFrameObject(frame_a3ba9d7a42a2f8f0d48710ae29b3f6da);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$roperator$$$function__11_ror_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    struct Nuitka_FrameObject *frame_b2c00c90bb6061c19e80609994aff8bb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b2c00c90bb6061c19e80609994aff8bb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b2c00c90bb6061c19e80609994aff8bb)) {
        Py_XDECREF(cache_frame_b2c00c90bb6061c19e80609994aff8bb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b2c00c90bb6061c19e80609994aff8bb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b2c00c90bb6061c19e80609994aff8bb = MAKE_FUNCTION_FRAME(tstate, codeobj_b2c00c90bb6061c19e80609994aff8bb, module_pandas$core$roperator, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b2c00c90bb6061c19e80609994aff8bb->m_type_description == NULL);
    frame_b2c00c90bb6061c19e80609994aff8bb = cache_frame_b2c00c90bb6061c19e80609994aff8bb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b2c00c90bb6061c19e80609994aff8bb);
    assert(Py_REFCNT(frame_b2c00c90bb6061c19e80609994aff8bb) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$roperator, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_right);
        tmp_args_element_value_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_args_element_value_2 = par_left;
        frame_b2c00c90bb6061c19e80609994aff8bb->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[5],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_b2c00c90bb6061c19e80609994aff8bb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b2c00c90bb6061c19e80609994aff8bb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b2c00c90bb6061c19e80609994aff8bb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b2c00c90bb6061c19e80609994aff8bb,
        type_description_1,
        par_left,
        par_right
    );


    // Release cached frame if used for exception.
    if (frame_b2c00c90bb6061c19e80609994aff8bb == cache_frame_b2c00c90bb6061c19e80609994aff8bb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b2c00c90bb6061c19e80609994aff8bb);
        cache_frame_b2c00c90bb6061c19e80609994aff8bb = NULL;
    }

    assertFrameObject(frame_b2c00c90bb6061c19e80609994aff8bb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$roperator$$$function__12_rxor(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    struct Nuitka_FrameObject *frame_3f823fd416649c7ee34e97c612dee132;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3f823fd416649c7ee34e97c612dee132 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3f823fd416649c7ee34e97c612dee132)) {
        Py_XDECREF(cache_frame_3f823fd416649c7ee34e97c612dee132);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3f823fd416649c7ee34e97c612dee132 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3f823fd416649c7ee34e97c612dee132 = MAKE_FUNCTION_FRAME(tstate, codeobj_3f823fd416649c7ee34e97c612dee132, module_pandas$core$roperator, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3f823fd416649c7ee34e97c612dee132->m_type_description == NULL);
    frame_3f823fd416649c7ee34e97c612dee132 = cache_frame_3f823fd416649c7ee34e97c612dee132;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3f823fd416649c7ee34e97c612dee132);
    assert(Py_REFCNT(frame_3f823fd416649c7ee34e97c612dee132) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$roperator, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_right);
        tmp_args_element_value_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_args_element_value_2 = par_left;
        frame_3f823fd416649c7ee34e97c612dee132->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_3f823fd416649c7ee34e97c612dee132, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3f823fd416649c7ee34e97c612dee132->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3f823fd416649c7ee34e97c612dee132, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3f823fd416649c7ee34e97c612dee132,
        type_description_1,
        par_left,
        par_right
    );


    // Release cached frame if used for exception.
    if (frame_3f823fd416649c7ee34e97c612dee132 == cache_frame_3f823fd416649c7ee34e97c612dee132) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3f823fd416649c7ee34e97c612dee132);
        cache_frame_3f823fd416649c7ee34e97c612dee132 = NULL;
    }

    assertFrameObject(frame_3f823fd416649c7ee34e97c612dee132);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__10_rand_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$roperator$$$function__10_rand_,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a3ba9d7a42a2f8f0d48710ae29b3f6da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$roperator,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__11_ror_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$roperator$$$function__11_ror_,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b2c00c90bb6061c19e80609994aff8bb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$roperator,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__12_rxor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$roperator$$$function__12_rxor,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3f823fd416649c7ee34e97c612dee132,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$roperator,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__1_radd() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$roperator$$$function__1_radd,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ef101c5ee959098da0a1cc72dcf634ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$roperator,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__2_rsub() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$roperator$$$function__2_rsub,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3e70d2fb7e54c994cf01bdffff5d3238,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$roperator,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__3_rmul() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$roperator$$$function__3_rmul,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bf7beec97f80bda590919bbad20696de,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$roperator,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__4_rdiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$roperator$$$function__4_rdiv,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4460945de4ff149aec700b0e0e6d9d54,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$roperator,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__5_rtruediv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$roperator$$$function__5_rtruediv,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9b7448df3aea5043348cd6d631866bb6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$roperator,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__6_rfloordiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$roperator$$$function__6_rfloordiv,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7c913a640d0c3fd1a93ea657f7f92a1e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$roperator,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__7_rmod() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$roperator$$$function__7_rmod,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9b6d73fbe6563eb5bb7abd3d153b3e3d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$roperator,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__8_rdivmod() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$roperator$$$function__8_rdivmod,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e30ea32764b5ad3fc87d51792c093780,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$roperator,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$roperator$$$function__9_rpow() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$roperator$$$function__9_rpow,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9aa9905aeeffc4b315939e990e8e396f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$roperator,
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

static function_impl_code const function_table_pandas$core$roperator[] = {
    impl_pandas$core$roperator$$$function__1_radd,
    impl_pandas$core$roperator$$$function__2_rsub,
    impl_pandas$core$roperator$$$function__3_rmul,
    impl_pandas$core$roperator$$$function__4_rdiv,
    impl_pandas$core$roperator$$$function__5_rtruediv,
    impl_pandas$core$roperator$$$function__6_rfloordiv,
    impl_pandas$core$roperator$$$function__7_rmod,
    impl_pandas$core$roperator$$$function__8_rdivmod,
    impl_pandas$core$roperator$$$function__9_rpow,
    impl_pandas$core$roperator$$$function__10_rand_,
    impl_pandas$core$roperator$$$function__11_ror_,
    impl_pandas$core$roperator$$$function__12_rxor,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_pandas$core$roperator);

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
        module_pandas$core$roperator,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_pandas$core$roperator,
        sizeof(function_table_pandas$core$roperator) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_pandas$core$roperator(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pandas$core$roperator");

    // Store the module for future use.
    module_pandas$core$roperator = module;

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
        PRINT_STRING("pandas$core$roperator: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pandas$core$roperator: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pandas.core.roperator" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpandas$core$roperator\n");

    moduledict_pandas$core$roperator = MODULE_DICT(module_pandas$core$roperator);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$roperator, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pandas$core$roperator,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pandas$core$roperator,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[1]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$roperator, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pandas$core$roperator,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$roperator, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$roperator,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$roperator, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$roperator,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pandas$core$roperator);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pandas$core$roperator, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pandas$core$roperator, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pandas$core$roperator, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pandas$core$roperator, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pandas$core$roperator);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pandas$core$roperator, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_d0309545b21bd38c325efc720a751f38;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_pandas$core$roperator, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pandas$core$roperator, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_2);
    }
    frame_d0309545b21bd38c325efc720a751f38 = MAKE_MODULE_FRAME(codeobj_d0309545b21bd38c325efc720a751f38, module_pandas$core$roperator);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d0309545b21bd38c325efc720a751f38);
    assert(Py_REFCNT(frame_d0309545b21bd38c325efc720a751f38) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$roperator, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$roperator, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[12], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pandas$core$roperator, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[14]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$core$roperator, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[3];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$roperator;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[15];
        frame_d0309545b21bd38c325efc720a751f38->m_frame.f_lineno = 7;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$roperator, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_5);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d0309545b21bd38c325efc720a751f38, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d0309545b21bd38c325efc720a751f38->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d0309545b21bd38c325efc720a751f38, exception_lineno);
    }



    assertFrameObject(frame_d0309545b21bd38c325efc720a751f38);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_pandas$core$roperator$$$function__1_radd();

        UPDATE_STRING_DICT1(moduledict_pandas$core$roperator, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_pandas$core$roperator$$$function__2_rsub();

        UPDATE_STRING_DICT1(moduledict_pandas$core$roperator, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_pandas$core$roperator$$$function__3_rmul();

        UPDATE_STRING_DICT1(moduledict_pandas$core$roperator, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_pandas$core$roperator$$$function__4_rdiv();

        UPDATE_STRING_DICT1(moduledict_pandas$core$roperator, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_pandas$core$roperator$$$function__5_rtruediv();

        UPDATE_STRING_DICT1(moduledict_pandas$core$roperator, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_pandas$core$roperator$$$function__6_rfloordiv();

        UPDATE_STRING_DICT1(moduledict_pandas$core$roperator, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_pandas$core$roperator$$$function__7_rmod();

        UPDATE_STRING_DICT1(moduledict_pandas$core$roperator, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_pandas$core$roperator$$$function__8_rdivmod();

        UPDATE_STRING_DICT1(moduledict_pandas$core$roperator, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_pandas$core$roperator$$$function__9_rpow();

        UPDATE_STRING_DICT1(moduledict_pandas$core$roperator, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_pandas$core$roperator$$$function__10_rand_();

        UPDATE_STRING_DICT1(moduledict_pandas$core$roperator, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_pandas$core$roperator$$$function__11_ror_();

        UPDATE_STRING_DICT1(moduledict_pandas$core$roperator, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_pandas$core$roperator$$$function__12_rxor();

        UPDATE_STRING_DICT1(moduledict_pandas$core$roperator, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_17);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pandas$core$roperator", false);

    Py_INCREF(module_pandas$core$roperator);
    return module_pandas$core$roperator;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$roperator, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pandas$core$roperator", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
