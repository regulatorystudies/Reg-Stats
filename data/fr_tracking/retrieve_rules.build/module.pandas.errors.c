/* Generated code for Python module 'pandas$errors'
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

/* The "module_pandas$errors" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pandas$errors;
PyDictObject *moduledict_pandas$errors;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[164];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[164];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pandas.errors"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 164; i++) {
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
void checkModuleConstants_pandas$errors(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 164; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e530e0f9fa25c537a20459a9c1319f06;
static PyCodeObject *codeobj_7f59dbdf99b11c2a7f6274c70ad2d914;
static PyCodeObject *codeobj_c7cebc124f029485d0e2058d61f3e096;
static PyCodeObject *codeobj_8f0e93e0a278e511b126754d14fe7727;
static PyCodeObject *codeobj_577765aa58c091c7313e19f0d484ecaf;
static PyCodeObject *codeobj_f0c5f4f4d2acba2dfd2a7a42bebb9759;
static PyCodeObject *codeobj_fa226aa2ead0e9536fcd9884e90bd7fd;
static PyCodeObject *codeobj_45cf944405dc565b0b3569f5be697fbe;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[157]); CHECK_OBJECT(module_filename_obj);
    codeobj_e530e0f9fa25c537a20459a9c1319f06 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts[158], mod_consts[158], NULL, NULL, 0, 0, 0);
    codeobj_7f59dbdf99b11c2a7f6274c70ad2d914 = MAKE_CODE_OBJECT(module_filename_obj, 273, CO_FUTURE_ANNOTATIONS, mod_consts[81], mod_consts[81], mod_consts[159], NULL, 0, 0, 0);
    codeobj_c7cebc124f029485d0e2058d61f3e096 = MAKE_CODE_OBJECT(module_filename_obj, 580, CO_FUTURE_ANNOTATIONS, mod_consts[123], mod_consts[123], mod_consts[159], NULL, 0, 0, 0);
    codeobj_8f0e93e0a278e511b126754d14fe7727 = MAKE_CODE_OBJECT(module_filename_obj, 525, CO_FUTURE_ANNOTATIONS, mod_consts[113], mod_consts[113], mod_consts[159], NULL, 0, 0, 0);
    codeobj_577765aa58c091c7313e19f0d484ecaf = MAKE_CODE_OBJECT(module_filename_obj, 294, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[15], mod_consts[15], mod_consts[160], NULL, 3, 0, 0);
    codeobj_f0c5f4f4d2acba2dfd2a7a42bebb9759 = MAKE_CODE_OBJECT(module_filename_obj, 588, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[15], mod_consts[15], mod_consts[161], mod_consts[159], 2, 0, 0);
    codeobj_fa226aa2ead0e9536fcd9884e90bd7fd = MAKE_CODE_OBJECT(module_filename_obj, 542, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[15], mod_consts[15], mod_consts[162], mod_consts[159], 3, 0, 0);
    codeobj_45cf944405dc565b0b3569f5be697fbe = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[87], mod_consts[87], mod_consts[163], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pandas$errors$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$errors$$$function__2___str__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$errors$$$function__3___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$errors$$$function__4___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_pandas$errors$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_class_instance = python_pars[1];
    PyObject *par_methodtype = python_pars[2];
    PyObject *var_types = NULL;
    struct Nuitka_FrameObject *frame_577765aa58c091c7313e19f0d484ecaf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_577765aa58c091c7313e19f0d484ecaf = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PySet_New(mod_consts[0]);
        assert(var_types == NULL);
        var_types = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_577765aa58c091c7313e19f0d484ecaf)) {
        Py_XDECREF(cache_frame_577765aa58c091c7313e19f0d484ecaf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_577765aa58c091c7313e19f0d484ecaf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_577765aa58c091c7313e19f0d484ecaf = MAKE_FUNCTION_FRAME(tstate, codeobj_577765aa58c091c7313e19f0d484ecaf, module_pandas$errors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_577765aa58c091c7313e19f0d484ecaf->m_type_description == NULL);
    frame_577765aa58c091c7313e19f0d484ecaf = cache_frame_577765aa58c091c7313e19f0d484ecaf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_577765aa58c091c7313e19f0d484ecaf);
    assert(Py_REFCNT(frame_577765aa58c091c7313e19f0d484ecaf) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_methodtype);
        tmp_cmp_expr_left_1 = par_methodtype;
        CHECK_OBJECT(var_types);
        tmp_cmp_expr_right_1 = var_types;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[1];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_methodtype);
            tmp_format_value_1 = par_methodtype;
            tmp_format_spec_1 = mod_consts[2];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[3];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(var_types);
            tmp_format_value_2 = var_types;
            tmp_format_spec_2 = mod_consts[2];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[4];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_577765aa58c091c7313e19f0d484ecaf->m_frame.f_lineno = 297;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 297;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_methodtype);
        tmp_assattr_value_1 = par_methodtype;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_class_instance);
        tmp_assattr_value_2 = par_class_instance;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[6], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_577765aa58c091c7313e19f0d484ecaf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_577765aa58c091c7313e19f0d484ecaf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_577765aa58c091c7313e19f0d484ecaf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_577765aa58c091c7313e19f0d484ecaf,
        type_description_1,
        par_self,
        par_class_instance,
        par_methodtype,
        var_types
    );


    // Release cached frame if used for exception.
    if (frame_577765aa58c091c7313e19f0d484ecaf == cache_frame_577765aa58c091c7313e19f0d484ecaf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_577765aa58c091c7313e19f0d484ecaf);
        cache_frame_577765aa58c091c7313e19f0d484ecaf = NULL;
    }

    assertFrameObject(frame_577765aa58c091c7313e19f0d484ecaf);

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
    CHECK_OBJECT(var_types);
    Py_DECREF(var_types);
    var_types = NULL;
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

    CHECK_OBJECT(var_types);
    Py_DECREF(var_types);
    var_types = NULL;
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
    CHECK_OBJECT(par_class_instance);
    Py_DECREF(par_class_instance);
    CHECK_OBJECT(par_methodtype);
    Py_DECREF(par_methodtype);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_class_instance);
    Py_DECREF(par_class_instance);
    CHECK_OBJECT(par_methodtype);
    Py_DECREF(par_methodtype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$errors$$$function__2___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_name = NULL;
    struct Nuitka_FrameObject *frame_45cf944405dc565b0b3569f5be697fbe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_45cf944405dc565b0b3569f5be697fbe = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_45cf944405dc565b0b3569f5be697fbe)) {
        Py_XDECREF(cache_frame_45cf944405dc565b0b3569f5be697fbe);

#if _DEBUG_REFCOUNTS
        if (cache_frame_45cf944405dc565b0b3569f5be697fbe == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_45cf944405dc565b0b3569f5be697fbe = MAKE_FUNCTION_FRAME(tstate, codeobj_45cf944405dc565b0b3569f5be697fbe, module_pandas$errors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_45cf944405dc565b0b3569f5be697fbe->m_type_description == NULL);
    frame_45cf944405dc565b0b3569f5be697fbe = cache_frame_45cf944405dc565b0b3569f5be697fbe;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_45cf944405dc565b0b3569f5be697fbe);
    assert(Py_REFCNT(frame_45cf944405dc565b0b3569f5be697fbe) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[7];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
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
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[6]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[8]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_name == NULL);
        var_name = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_type_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[6]);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[8]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_name == NULL);
        var_name = tmp_assign_source_2;
    }
    branch_end_1:;
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[9];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_6 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[5]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[2];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[10];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(var_name);
            tmp_format_value_2 = var_name;
            tmp_format_spec_2 = mod_consts[2];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_45cf944405dc565b0b3569f5be697fbe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_45cf944405dc565b0b3569f5be697fbe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_45cf944405dc565b0b3569f5be697fbe, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_45cf944405dc565b0b3569f5be697fbe,
        type_description_1,
        par_self,
        var_name
    );


    // Release cached frame if used for exception.
    if (frame_45cf944405dc565b0b3569f5be697fbe == cache_frame_45cf944405dc565b0b3569f5be697fbe) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_45cf944405dc565b0b3569f5be697fbe);
        cache_frame_45cf944405dc565b0b3569f5be697fbe = NULL;
    }

    assertFrameObject(frame_45cf944405dc565b0b3569f5be697fbe);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_name);
    Py_DECREF(var_name);
    var_name = NULL;
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

    Py_XDECREF(var_name);
    var_name = NULL;
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


static PyObject *impl_pandas$errors$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_is_local = python_pars[2];
    PyObject *var_base_msg = NULL;
    PyObject *var_msg = NULL;
    struct Nuitka_FrameObject *frame_fa226aa2ead0e9536fcd9884e90bd7fd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_fa226aa2ead0e9536fcd9884e90bd7fd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fa226aa2ead0e9536fcd9884e90bd7fd)) {
        Py_XDECREF(cache_frame_fa226aa2ead0e9536fcd9884e90bd7fd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fa226aa2ead0e9536fcd9884e90bd7fd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fa226aa2ead0e9536fcd9884e90bd7fd = MAKE_FUNCTION_FRAME(tstate, codeobj_fa226aa2ead0e9536fcd9884e90bd7fd, module_pandas$errors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fa226aa2ead0e9536fcd9884e90bd7fd->m_type_description == NULL);
    frame_fa226aa2ead0e9536fcd9884e90bd7fd = cache_frame_fa226aa2ead0e9536fcd9884e90bd7fd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fa226aa2ead0e9536fcd9884e90bd7fd);
    assert(Py_REFCNT(frame_fa226aa2ead0e9536fcd9884e90bd7fd) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_name);
        tmp_operand_value_1 = par_name;
        tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
        if (tmp_format_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[2];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[11];
        PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        tmp_assign_source_1 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        assert(var_base_msg == NULL);
        var_base_msg = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_is_local);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_is_local);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[12];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_base_msg);
        tmp_tuple_element_2 = var_base_msg;
        PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
        tmp_assign_source_2 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        assert(var_msg == NULL);
        var_msg = tmp_assign_source_2;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[13];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_base_msg);
        tmp_tuple_element_3 = var_base_msg;
        PyTuple_SET_ITEM0(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
        tmp_assign_source_3 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        assert(var_msg == NULL);
        var_msg = tmp_assign_source_3;
    }
    branch_end_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 548;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_pandas$errors, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_msg);
        tmp_args_element_value_1 = var_msg;
        frame_fa226aa2ead0e9536fcd9884e90bd7fd->m_frame.f_lineno = 548;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[15], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fa226aa2ead0e9536fcd9884e90bd7fd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fa226aa2ead0e9536fcd9884e90bd7fd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fa226aa2ead0e9536fcd9884e90bd7fd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fa226aa2ead0e9536fcd9884e90bd7fd,
        type_description_1,
        par_self,
        par_name,
        par_is_local,
        var_base_msg,
        var_msg,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_fa226aa2ead0e9536fcd9884e90bd7fd == cache_frame_fa226aa2ead0e9536fcd9884e90bd7fd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fa226aa2ead0e9536fcd9884e90bd7fd);
        cache_frame_fa226aa2ead0e9536fcd9884e90bd7fd = NULL;
    }

    assertFrameObject(frame_fa226aa2ead0e9536fcd9884e90bd7fd);

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
    CHECK_OBJECT(var_base_msg);
    Py_DECREF(var_base_msg);
    var_base_msg = NULL;
    CHECK_OBJECT(var_msg);
    Py_DECREF(var_msg);
    var_msg = NULL;
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

    Py_XDECREF(var_base_msg);
    var_base_msg = NULL;
    Py_XDECREF(var_msg);
    var_msg = NULL;
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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_is_local);
    Py_DECREF(par_is_local);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_is_local);
    Py_DECREF(par_is_local);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$errors$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_message = python_pars[1];
    struct Nuitka_FrameObject *frame_f0c5f4f4d2acba2dfd2a7a42bebb9759;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f0c5f4f4d2acba2dfd2a7a42bebb9759 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f0c5f4f4d2acba2dfd2a7a42bebb9759)) {
        Py_XDECREF(cache_frame_f0c5f4f4d2acba2dfd2a7a42bebb9759);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f0c5f4f4d2acba2dfd2a7a42bebb9759 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f0c5f4f4d2acba2dfd2a7a42bebb9759 = MAKE_FUNCTION_FRAME(tstate, codeobj_f0c5f4f4d2acba2dfd2a7a42bebb9759, module_pandas$errors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f0c5f4f4d2acba2dfd2a7a42bebb9759->m_type_description == NULL);
    frame_f0c5f4f4d2acba2dfd2a7a42bebb9759 = cache_frame_f0c5f4f4d2acba2dfd2a7a42bebb9759;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f0c5f4f4d2acba2dfd2a7a42bebb9759);
    assert(Py_REFCNT(frame_f0c5f4f4d2acba2dfd2a7a42bebb9759) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_message);
        tmp_iadd_expr_left_1 = par_message;
        tmp_tuple_element_1 = mod_consts[16];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            assert(!(tmp_called_instance_1 == NULL));
            frame_f0c5f4f4d2acba2dfd2a7a42bebb9759->m_frame.f_lineno = 590;
            tmp_format_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[18]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 590;
                type_description_1 = "ooc";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[2];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 590;
                type_description_1 = "ooc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_iadd_expr_right_1 = PyUnicode_Join(mod_consts[2], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = tmp_iadd_expr_left_1;
        par_message = tmp_assign_source_1;

    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 591;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_2 = BUILTIN_SUPER0(tstate, moduledict_pandas$errors, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_message);
        tmp_args_element_value_1 = par_message;
        frame_f0c5f4f4d2acba2dfd2a7a42bebb9759->m_frame.f_lineno = 591;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[15], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f0c5f4f4d2acba2dfd2a7a42bebb9759, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f0c5f4f4d2acba2dfd2a7a42bebb9759->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f0c5f4f4d2acba2dfd2a7a42bebb9759, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f0c5f4f4d2acba2dfd2a7a42bebb9759,
        type_description_1,
        par_self,
        par_message,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_f0c5f4f4d2acba2dfd2a7a42bebb9759 == cache_frame_f0c5f4f4d2acba2dfd2a7a42bebb9759) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f0c5f4f4d2acba2dfd2a7a42bebb9759);
        cache_frame_f0c5f4f4d2acba2dfd2a7a42bebb9759 = NULL;
    }

    assertFrameObject(frame_f0c5f4f4d2acba2dfd2a7a42bebb9759);

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
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    par_message = NULL;
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

    Py_XDECREF(par_message);
    par_message = NULL;
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



static PyObject *MAKE_FUNCTION_pandas$errors$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$errors$$$function__1___init__,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[85],
#endif
        codeobj_577765aa58c091c7313e19f0d484ecaf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$errors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$errors$$$function__2___str__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$errors$$$function__2___str__,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        mod_consts[88],
#endif
        codeobj_45cf944405dc565b0b3569f5be697fbe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$errors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$errors$$$function__3___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$errors$$$function__3___init__,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[117],
#endif
        codeobj_fa226aa2ead0e9536fcd9884e90bd7fd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$errors,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$errors$$$function__4___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$errors$$$function__4___init__,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_f0c5f4f4d2acba2dfd2a7a42bebb9759,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$errors,
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

static function_impl_code const function_table_pandas$errors[] = {
    impl_pandas$errors$$$function__1___init__,
    impl_pandas$errors$$$function__2___str__,
    impl_pandas$errors$$$function__3___init__,
    impl_pandas$errors$$$function__4___init__,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_pandas$errors);

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
        module_pandas$errors,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_pandas$errors,
        sizeof(function_table_pandas$errors) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_pandas$errors(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pandas$errors");

    // Store the module for future use.
    module_pandas$errors = module;

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
        PRINT_STRING("pandas$errors: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pandas$errors: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pandas.errors" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpandas$errors\n");

    moduledict_pandas$errors = MODULE_DICT(module_pandas$errors);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pandas$errors,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pandas$errors,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[2]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pandas$errors,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$errors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$errors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pandas$errors);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pandas$errors, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pandas$errors, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pandas$errors, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pandas$errors);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *outline_13_var___class__ = NULL;
    PyObject *outline_14_var___class__ = NULL;
    PyObject *outline_15_var___class__ = NULL;
    PyObject *outline_16_var___class__ = NULL;
    PyObject *outline_17_var___class__ = NULL;
    PyObject *outline_18_var___class__ = NULL;
    PyObject *outline_19_var___class__ = NULL;
    struct Nuitka_CellObject *outline_20_var___class__ = NULL;
    PyObject *outline_21_var___class__ = NULL;
    PyObject *outline_22_var___class__ = NULL;
    struct Nuitka_CellObject *outline_23_var___class__ = NULL;
    PyObject *outline_24_var___class__ = NULL;
    PyObject *outline_25_var___class__ = NULL;
    PyObject *outline_26_var___class__ = NULL;
    PyObject *outline_27_var___class__ = NULL;
    PyObject *outline_28_var___class__ = NULL;
    PyObject *outline_29_var___class__ = NULL;
    PyObject *outline_30_var___class__ = NULL;
    PyObject *outline_31_var___class__ = NULL;
    PyObject *outline_32_var___class__ = NULL;
    PyObject *outline_33_var___class__ = NULL;
    PyObject *outline_34_var___class__ = NULL;
    PyObject *outline_35_var___class__ = NULL;
    PyObject *outline_36_var___class__ = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__bases = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__bases = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_14__bases = NULL;
    PyObject *tmp_class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_14__prepared = NULL;
    PyObject *tmp_class_creation_15__bases = NULL;
    PyObject *tmp_class_creation_15__class_decl_dict = NULL;
    PyObject *tmp_class_creation_15__metaclass = NULL;
    PyObject *tmp_class_creation_15__prepared = NULL;
    PyObject *tmp_class_creation_16__bases = NULL;
    PyObject *tmp_class_creation_16__class_decl_dict = NULL;
    PyObject *tmp_class_creation_16__metaclass = NULL;
    PyObject *tmp_class_creation_16__prepared = NULL;
    PyObject *tmp_class_creation_17__bases = NULL;
    PyObject *tmp_class_creation_17__class_decl_dict = NULL;
    PyObject *tmp_class_creation_17__metaclass = NULL;
    PyObject *tmp_class_creation_17__prepared = NULL;
    PyObject *tmp_class_creation_18__bases = NULL;
    PyObject *tmp_class_creation_18__bases_orig = NULL;
    PyObject *tmp_class_creation_18__class_decl_dict = NULL;
    PyObject *tmp_class_creation_18__metaclass = NULL;
    PyObject *tmp_class_creation_18__prepared = NULL;
    PyObject *tmp_class_creation_19__bases = NULL;
    PyObject *tmp_class_creation_19__bases_orig = NULL;
    PyObject *tmp_class_creation_19__class_decl_dict = NULL;
    PyObject *tmp_class_creation_19__metaclass = NULL;
    PyObject *tmp_class_creation_19__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_20__bases = NULL;
    PyObject *tmp_class_creation_20__class_decl_dict = NULL;
    PyObject *tmp_class_creation_20__metaclass = NULL;
    PyObject *tmp_class_creation_20__prepared = NULL;
    PyObject *tmp_class_creation_21__bases = NULL;
    PyObject *tmp_class_creation_21__class_decl_dict = NULL;
    PyObject *tmp_class_creation_21__metaclass = NULL;
    PyObject *tmp_class_creation_21__prepared = NULL;
    PyObject *tmp_class_creation_22__bases = NULL;
    PyObject *tmp_class_creation_22__class_decl_dict = NULL;
    PyObject *tmp_class_creation_22__metaclass = NULL;
    PyObject *tmp_class_creation_22__prepared = NULL;
    PyObject *tmp_class_creation_23__bases = NULL;
    PyObject *tmp_class_creation_23__class_decl_dict = NULL;
    PyObject *tmp_class_creation_23__metaclass = NULL;
    PyObject *tmp_class_creation_23__prepared = NULL;
    PyObject *tmp_class_creation_24__bases = NULL;
    PyObject *tmp_class_creation_24__bases_orig = NULL;
    PyObject *tmp_class_creation_24__class_decl_dict = NULL;
    PyObject *tmp_class_creation_24__metaclass = NULL;
    PyObject *tmp_class_creation_24__prepared = NULL;
    PyObject *tmp_class_creation_25__bases = NULL;
    PyObject *tmp_class_creation_25__bases_orig = NULL;
    PyObject *tmp_class_creation_25__class_decl_dict = NULL;
    PyObject *tmp_class_creation_25__metaclass = NULL;
    PyObject *tmp_class_creation_25__prepared = NULL;
    PyObject *tmp_class_creation_26__bases = NULL;
    PyObject *tmp_class_creation_26__class_decl_dict = NULL;
    PyObject *tmp_class_creation_26__metaclass = NULL;
    PyObject *tmp_class_creation_26__prepared = NULL;
    PyObject *tmp_class_creation_27__bases = NULL;
    PyObject *tmp_class_creation_27__class_decl_dict = NULL;
    PyObject *tmp_class_creation_27__metaclass = NULL;
    PyObject *tmp_class_creation_27__prepared = NULL;
    PyObject *tmp_class_creation_28__bases = NULL;
    PyObject *tmp_class_creation_28__bases_orig = NULL;
    PyObject *tmp_class_creation_28__class_decl_dict = NULL;
    PyObject *tmp_class_creation_28__metaclass = NULL;
    PyObject *tmp_class_creation_28__prepared = NULL;
    PyObject *tmp_class_creation_29__bases = NULL;
    PyObject *tmp_class_creation_29__bases_orig = NULL;
    PyObject *tmp_class_creation_29__class_decl_dict = NULL;
    PyObject *tmp_class_creation_29__metaclass = NULL;
    PyObject *tmp_class_creation_29__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_30__bases = NULL;
    PyObject *tmp_class_creation_30__class_decl_dict = NULL;
    PyObject *tmp_class_creation_30__metaclass = NULL;
    PyObject *tmp_class_creation_30__prepared = NULL;
    PyObject *tmp_class_creation_31__bases = NULL;
    PyObject *tmp_class_creation_31__bases_orig = NULL;
    PyObject *tmp_class_creation_31__class_decl_dict = NULL;
    PyObject *tmp_class_creation_31__metaclass = NULL;
    PyObject *tmp_class_creation_31__prepared = NULL;
    PyObject *tmp_class_creation_32__bases = NULL;
    PyObject *tmp_class_creation_32__bases_orig = NULL;
    PyObject *tmp_class_creation_32__class_decl_dict = NULL;
    PyObject *tmp_class_creation_32__metaclass = NULL;
    PyObject *tmp_class_creation_32__prepared = NULL;
    PyObject *tmp_class_creation_33__bases = NULL;
    PyObject *tmp_class_creation_33__bases_orig = NULL;
    PyObject *tmp_class_creation_33__class_decl_dict = NULL;
    PyObject *tmp_class_creation_33__metaclass = NULL;
    PyObject *tmp_class_creation_33__prepared = NULL;
    PyObject *tmp_class_creation_34__bases = NULL;
    PyObject *tmp_class_creation_34__bases_orig = NULL;
    PyObject *tmp_class_creation_34__class_decl_dict = NULL;
    PyObject *tmp_class_creation_34__metaclass = NULL;
    PyObject *tmp_class_creation_34__prepared = NULL;
    PyObject *tmp_class_creation_35__bases = NULL;
    PyObject *tmp_class_creation_35__class_decl_dict = NULL;
    PyObject *tmp_class_creation_35__metaclass = NULL;
    PyObject *tmp_class_creation_35__prepared = NULL;
    PyObject *tmp_class_creation_36__bases = NULL;
    PyObject *tmp_class_creation_36__class_decl_dict = NULL;
    PyObject *tmp_class_creation_36__metaclass = NULL;
    PyObject *tmp_class_creation_36__prepared = NULL;
    PyObject *tmp_class_creation_37__bases = NULL;
    PyObject *tmp_class_creation_37__class_decl_dict = NULL;
    PyObject *tmp_class_creation_37__metaclass = NULL;
    PyObject *tmp_class_creation_37__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__bases_orig = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_e530e0f9fa25c537a20459a9c1319f06;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *locals_pandas$errors$$$class__1_IntCastingNaNError_18 = NULL;
    PyObject *tmp_dictset_value;
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
    PyObject *locals_pandas$errors$$$class__2_NullFrequencyError_30 = NULL;
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
    PyObject *locals_pandas$errors$$$class__3_PerformanceWarning_46 = NULL;
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
    PyObject *locals_pandas$errors$$$class__4_UnsupportedFunctionCall_72 = NULL;
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
    PyObject *locals_pandas$errors$$$class__5_UnsortedIndexError_91 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *locals_pandas$errors$$$class__6_ParserError_118 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *locals_pandas$errors$$$class__7_DtypeWarning_143 = NULL;
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
    PyObject *locals_pandas$errors$$$class__8_EmptyDataError_198 = NULL;
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
    PyObject *locals_pandas$errors$$$class__9_ParserWarning_212 = NULL;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *locals_pandas$errors$$$class__10_MergeError_253 = NULL;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *locals_pandas$errors$$$class__11_AbstractMethodError_273 = NULL;
    struct Nuitka_FrameObject *frame_7f59dbdf99b11c2a7f6274c70ad2d914_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_pandas$errors$$$class__12_NumbaUtilError_311 = NULL;
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
    PyObject *locals_pandas$errors$$$class__13_DuplicateLabelError_328 = NULL;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *locals_pandas$errors$$$class__14_InvalidIndexError_349 = NULL;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *locals_pandas$errors$$$class__15_DataError_369 = NULL;
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
    PyObject *locals_pandas$errors$$$class__16_SpecificationError_385 = NULL;
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
    PyObject *locals_pandas$errors$$$class__17_SettingWithCopyError_413 = NULL;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *locals_pandas$errors$$$class__18_SettingWithCopyWarning_435 = NULL;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *locals_pandas$errors$$$class__19_ChainedAssignmentError_457 = NULL;
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
    PyObject *locals_pandas$errors$$$class__20_NumExprClobberingError_506 = NULL;
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
    PyObject *locals_pandas$errors$$$class__21_UndefinedVariableError_525 = NULL;
    struct Nuitka_FrameObject *frame_8f0e93e0a278e511b126754d14fe7727_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_62;
    PyObject *exception_keeper_value_62;
    PyTracebackObject *exception_keeper_tb_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
    PyObject *exception_keeper_type_63;
    PyObject *exception_keeper_value_63;
    PyTracebackObject *exception_keeper_tb_63;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
    PyObject *exception_keeper_type_64;
    PyObject *exception_keeper_value_64;
    PyTracebackObject *exception_keeper_tb_64;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
    PyObject *locals_pandas$errors$$$class__22_IndexingError_551 = NULL;
    PyObject *exception_keeper_type_65;
    PyObject *exception_keeper_value_65;
    PyTracebackObject *exception_keeper_tb_65;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
    PyObject *exception_keeper_type_66;
    PyObject *exception_keeper_value_66;
    PyTracebackObject *exception_keeper_tb_66;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
    PyObject *exception_keeper_type_67;
    PyObject *exception_keeper_value_67;
    PyTracebackObject *exception_keeper_tb_67;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
    PyObject *locals_pandas$errors$$$class__23_PyperclipException_572 = NULL;
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
    PyObject *locals_pandas$errors$$$class__24_PyperclipWindowsException_580 = NULL;
    struct Nuitka_FrameObject *frame_c7cebc124f029485d0e2058d61f3e096_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
    PyObject *locals_pandas$errors$$$class__25_CSSWarning_594 = NULL;
    PyObject *exception_keeper_type_74;
    PyObject *exception_keeper_value_74;
    PyTracebackObject *exception_keeper_tb_74;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_74;
    PyObject *exception_keeper_type_75;
    PyObject *exception_keeper_value_75;
    PyTracebackObject *exception_keeper_tb_75;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_75;
    PyObject *exception_keeper_type_76;
    PyObject *exception_keeper_value_76;
    PyTracebackObject *exception_keeper_tb_76;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_76;
    PyObject *locals_pandas$errors$$$class__26_PossibleDataLossError_615 = NULL;
    PyObject *exception_keeper_type_77;
    PyObject *exception_keeper_value_77;
    PyTracebackObject *exception_keeper_tb_77;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_77;
    PyObject *exception_keeper_type_78;
    PyObject *exception_keeper_value_78;
    PyTracebackObject *exception_keeper_tb_78;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_78;
    PyObject *exception_keeper_type_79;
    PyObject *exception_keeper_value_79;
    PyTracebackObject *exception_keeper_tb_79;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_79;
    PyObject *locals_pandas$errors$$$class__27_ClosedFileError_627 = NULL;
    PyObject *exception_keeper_type_80;
    PyObject *exception_keeper_value_80;
    PyTracebackObject *exception_keeper_tb_80;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_80;
    PyObject *exception_keeper_type_81;
    PyObject *exception_keeper_value_81;
    PyTracebackObject *exception_keeper_tb_81;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_81;
    PyObject *exception_keeper_type_82;
    PyObject *exception_keeper_value_82;
    PyTracebackObject *exception_keeper_tb_82;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_82;
    PyObject *locals_pandas$errors$$$class__28_IncompatibilityWarning_640 = NULL;
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
    PyObject *locals_pandas$errors$$$class__29_AttributeConflictWarning_646 = NULL;
    PyObject *exception_keeper_type_86;
    PyObject *exception_keeper_value_86;
    PyTracebackObject *exception_keeper_tb_86;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_86;
    PyObject *exception_keeper_type_87;
    PyObject *exception_keeper_value_87;
    PyTracebackObject *exception_keeper_tb_87;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_87;
    PyObject *exception_keeper_type_88;
    PyObject *exception_keeper_value_88;
    PyTracebackObject *exception_keeper_tb_88;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_88;
    PyObject *locals_pandas$errors$$$class__30_DatabaseError_667 = NULL;
    PyObject *exception_keeper_type_89;
    PyObject *exception_keeper_value_89;
    PyTracebackObject *exception_keeper_tb_89;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_89;
    PyObject *exception_keeper_type_90;
    PyObject *exception_keeper_value_90;
    PyTracebackObject *exception_keeper_tb_90;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_90;
    PyObject *exception_keeper_type_91;
    PyObject *exception_keeper_value_91;
    PyTracebackObject *exception_keeper_tb_91;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_91;
    PyObject *locals_pandas$errors$$$class__31_PossiblePrecisionLoss_680 = NULL;
    PyObject *exception_keeper_type_92;
    PyObject *exception_keeper_value_92;
    PyTracebackObject *exception_keeper_tb_92;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_92;
    PyObject *exception_keeper_type_93;
    PyObject *exception_keeper_value_93;
    PyTracebackObject *exception_keeper_tb_93;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_93;
    PyObject *exception_keeper_type_94;
    PyObject *exception_keeper_value_94;
    PyTracebackObject *exception_keeper_tb_94;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_94;
    PyObject *locals_pandas$errors$$$class__32_ValueLabelTypeMismatch_695 = NULL;
    PyObject *exception_keeper_type_95;
    PyObject *exception_keeper_value_95;
    PyTracebackObject *exception_keeper_tb_95;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_95;
    PyObject *exception_keeper_type_96;
    PyObject *exception_keeper_value_96;
    PyTracebackObject *exception_keeper_tb_96;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_96;
    PyObject *exception_keeper_type_97;
    PyObject *exception_keeper_value_97;
    PyTracebackObject *exception_keeper_tb_97;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_97;
    PyObject *locals_pandas$errors$$$class__33_InvalidColumnName_707 = NULL;
    PyObject *exception_keeper_type_98;
    PyObject *exception_keeper_value_98;
    PyTracebackObject *exception_keeper_tb_98;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_98;
    PyObject *exception_keeper_type_99;
    PyObject *exception_keeper_value_99;
    PyTracebackObject *exception_keeper_tb_99;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_99;
    PyObject *exception_keeper_type_100;
    PyObject *exception_keeper_value_100;
    PyTracebackObject *exception_keeper_tb_100;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_100;
    PyObject *locals_pandas$errors$$$class__34_CategoricalConversionWarning_722 = NULL;
    PyObject *exception_keeper_type_101;
    PyObject *exception_keeper_value_101;
    PyTracebackObject *exception_keeper_tb_101;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_101;
    PyObject *exception_keeper_type_102;
    PyObject *exception_keeper_value_102;
    PyTracebackObject *exception_keeper_tb_102;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_102;
    PyObject *exception_keeper_type_103;
    PyObject *exception_keeper_value_103;
    PyTracebackObject *exception_keeper_tb_103;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_103;
    PyObject *locals_pandas$errors$$$class__35_LossySetitemError_736 = NULL;
    PyObject *exception_keeper_type_104;
    PyObject *exception_keeper_value_104;
    PyTracebackObject *exception_keeper_tb_104;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_104;
    PyObject *exception_keeper_type_105;
    PyObject *exception_keeper_value_105;
    PyTracebackObject *exception_keeper_tb_105;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_105;
    PyObject *exception_keeper_type_106;
    PyObject *exception_keeper_value_106;
    PyTracebackObject *exception_keeper_tb_106;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_106;
    PyObject *locals_pandas$errors$$$class__36_NoBufferPresent_746 = NULL;
    PyObject *exception_keeper_type_107;
    PyObject *exception_keeper_value_107;
    PyTracebackObject *exception_keeper_tb_107;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_107;
    PyObject *exception_keeper_type_108;
    PyObject *exception_keeper_value_108;
    PyTracebackObject *exception_keeper_tb_108;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_108;
    PyObject *exception_keeper_type_109;
    PyObject *exception_keeper_value_109;
    PyTracebackObject *exception_keeper_tb_109;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_109;
    PyObject *locals_pandas$errors$$$class__37_InvalidComparison_752 = NULL;
    PyObject *exception_keeper_type_110;
    PyObject *exception_keeper_value_110;
    PyTracebackObject *exception_keeper_tb_110;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_110;
    PyObject *exception_keeper_type_111;
    PyObject *exception_keeper_value_111;
    PyTracebackObject *exception_keeper_tb_111;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_111;
    PyObject *exception_keeper_type_112;
    PyObject *exception_keeper_value_112;
    PyTracebackObject *exception_keeper_tb_112;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_112;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[20];
        UPDATE_STRING_DICT0(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_2);
    }
    frame_e530e0f9fa25c537a20459a9c1319f06 = MAKE_MODULE_FRAME(codeobj_e530e0f9fa25c537a20459a9c1319f06, module_pandas$errors);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e530e0f9fa25c537a20459a9c1319f06);
    assert(Py_REFCNT(frame_e530e0f9fa25c537a20459a9c1319f06) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 1;
        {
            PyObject *hard_module = IMPORT_HARD_OS();
            if (likely(hard_module != NULL)) {
                tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[23]);


            } else {
                tmp_expression_value_1 = NULL;
            }
        }
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[24]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = module_filename_obj;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_4;
            PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[23]);


                } else {
                    tmp_expression_value_2 = NULL;
                }
            }
            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[25]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[26]);


                } else {
                    tmp_expression_value_3 = NULL;
                }
            }
            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[27]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_called_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 1;
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_3, mod_consts[28]);

            Py_DECREF(tmp_called_value_3);
            if (tmp_args_element_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_args_element_value_3 = mod_consts[29];
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 1;
            {
                PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[26]);


                } else {
                    tmp_expression_value_4 = NULL;
                }
            }
            if (tmp_expression_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[27]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 1;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_4, mod_consts[30]);

            Py_DECREF(tmp_called_value_4);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[33], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[34], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[35], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[37]);
        }
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[38];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$errors;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[39];
        tmp_level_value_1 = mod_consts[40];
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 8;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$errors,
                mod_consts[41],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[41]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[42];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pandas$errors;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[43];
        tmp_level_value_2 = mod_consts[40];
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 10;
        tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pandas$errors,
                mod_consts[44],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[44]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_pandas$errors,
                mod_consts[45],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[45]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_10);
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
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[46];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pandas$errors;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[47];
        tmp_level_value_3 = mod_consts[40];
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 15;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_pandas$errors,
                mod_consts[48],
                mod_consts[40]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[48]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_11);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_12 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_5 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[40];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_14 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_14;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_7 = tmp_class_creation_1__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[50]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = mod_consts[51];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 18;
        tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_15;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_8 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
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
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_name_value_4;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_9 = tmp_class_creation_1__metaclass;
        tmp_name_value_4 = mod_consts[8];
        tmp_default_value_1 = mod_consts[54];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_9, tmp_name_value_4, tmp_default_value_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[8]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 18;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_16;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pandas$errors$$$class__1_IntCastingNaNError_18 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__1_IntCastingNaNError_18, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[57];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__1_IntCastingNaNError_18, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__1_IntCastingNaNError_18, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_4;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_1 = mod_consts[49];
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__1_IntCastingNaNError_18, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_6 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[51];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_pandas$errors$$$class__1_IntCastingNaNError_18;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 18;
            tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_18;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_17 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_17);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_pandas$errors$$$class__1_IntCastingNaNError_18);
        locals_pandas$errors$$$class__1_IntCastingNaNError_18 = NULL;
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

        Py_DECREF(locals_pandas$errors$$$class__1_IntCastingNaNError_18);
        locals_pandas$errors$$$class__1_IntCastingNaNError_18 = NULL;
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
        exception_lineno = 18;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_17);
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_19 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_5;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_11 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[40];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_21 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_21;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_12 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_5;
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
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_13 = tmp_class_creation_2__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[50]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_5;
        }
        tmp_tuple_element_4 = mod_consts[60];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_4 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 30;
        tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_22;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_14 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_5;
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
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_15 = tmp_class_creation_2__metaclass;
        tmp_name_value_5 = mod_consts[8];
        tmp_default_value_2 = mod_consts[54];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_15, tmp_name_value_5, tmp_default_value_2);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_16;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_16 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_16 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[8]);
            Py_DECREF(tmp_expression_value_16);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 30;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_23;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pandas$errors$$$class__2_NullFrequencyError_30 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__2_NullFrequencyError_30, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[61];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__2_NullFrequencyError_30, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[60];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__2_NullFrequencyError_30, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_7;
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            tmp_cmp_expr_right_2 = mod_consts[49];
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__2_NullFrequencyError_30, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_7;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_8 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_6 = mod_consts[60];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_pandas$errors$$$class__2_NullFrequencyError_30;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 30;
            tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_25;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_24 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_24);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_pandas$errors$$$class__2_NullFrequencyError_30);
        locals_pandas$errors$$$class__2_NullFrequencyError_30 = NULL;
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

        Py_DECREF(locals_pandas$errors$$$class__2_NullFrequencyError_30);
        locals_pandas$errors$$$class__2_NullFrequencyError_30 = NULL;
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
        exception_lineno = 30;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_24);
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
        PyObject *tmp_assign_source_26;
        PyObject *tmp_tuple_element_7;
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_8;
        }
        tmp_assign_source_26 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_26, 0, tmp_tuple_element_7);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_27 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_8;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_17 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[40];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_8;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_29 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_29;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_18 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_8;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_19 = tmp_class_creation_3__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[50]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_8;
        }
        tmp_tuple_element_8 = mod_consts[63];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_8 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 46;
        tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_30;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_20 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_8;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_21 = tmp_class_creation_3__metaclass;
        tmp_name_value_6 = mod_consts[8];
        tmp_default_value_3 = mod_consts[54];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_21, tmp_name_value_6, tmp_default_value_3);
        if (tmp_tuple_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_22;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_22 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_22 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[8]);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 46;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_31;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_32;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pandas$errors$$$class__3_PerformanceWarning_46 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__3_PerformanceWarning_46, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[64];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__3_PerformanceWarning_46, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__3_PerformanceWarning_46, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_10;
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto try_except_handler_10;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__3_PerformanceWarning_46, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_10;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_10 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_10 = mod_consts[63];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_10 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_pandas$errors$$$class__3_PerformanceWarning_46;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 46;
            tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_33;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_32 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_32);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_pandas$errors$$$class__3_PerformanceWarning_46);
        locals_pandas$errors$$$class__3_PerformanceWarning_46 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$errors$$$class__3_PerformanceWarning_46);
        locals_pandas$errors$$$class__3_PerformanceWarning_46 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 46;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_32);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
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
        PyObject *tmp_assign_source_34;
        PyObject *tmp_dircall_arg1_4;
        tmp_dircall_arg1_4 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_34 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_11;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_23 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[40];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_11;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_11;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_36 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_36;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_24 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_11;
        }
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_25 = tmp_class_creation_4__metaclass;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[50]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_11;
        }
        tmp_tuple_element_11 = mod_consts[65];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_11);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_11 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_11);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 72;
        tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_37;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_26 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_11;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_27 = tmp_class_creation_4__metaclass;
        tmp_name_value_7 = mod_consts[8];
        tmp_default_value_4 = mod_consts[54];
        tmp_tuple_element_12 = BUILTIN_GETATTR(tstate, tmp_expression_value_27, tmp_name_value_7, tmp_default_value_4);
        if (tmp_tuple_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_11;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_28;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_28 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_28 == NULL));
            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[8]);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_11;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 72;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_11;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_38;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_39;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_pandas$errors$$$class__4_UnsupportedFunctionCall_72 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__4_UnsupportedFunctionCall_72, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[66];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__4_UnsupportedFunctionCall_72, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__4_UnsupportedFunctionCall_72, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_13;
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            tmp_cmp_expr_right_4 = mod_consts[49];
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto try_except_handler_13;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__4_UnsupportedFunctionCall_72, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_13;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_12 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_13 = mod_consts[65];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_13 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = locals_pandas$errors$$$class__4_UnsupportedFunctionCall_72;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 72;
            tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto try_except_handler_13;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_40;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_39 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_39);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_pandas$errors$$$class__4_UnsupportedFunctionCall_72);
        locals_pandas$errors$$$class__4_UnsupportedFunctionCall_72 = NULL;
        goto try_return_handler_12;
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

        Py_DECREF(locals_pandas$errors$$$class__4_UnsupportedFunctionCall_72);
        locals_pandas$errors$$$class__4_UnsupportedFunctionCall_72 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 72;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_39);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
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
        PyObject *tmp_assign_source_41;
        PyObject *tmp_dircall_arg1_5;
        tmp_dircall_arg1_5 = mod_consts[67];
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_41 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_14;
        }
        tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_29 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[40];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_29, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_14;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_14;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_43 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_43;
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_expression_value_30;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_30 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_30, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_14;
        }
        tmp_condition_result_18 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_31 = tmp_class_creation_5__metaclass;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[50]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_14;
        }
        tmp_tuple_element_14 = mod_consts[68];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_14 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 91;
        tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_44;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_32 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_14;
        }
        tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_33 = tmp_class_creation_5__metaclass;
        tmp_name_value_8 = mod_consts[8];
        tmp_default_value_5 = mod_consts[54];
        tmp_tuple_element_15 = BUILTIN_GETATTR(tstate, tmp_expression_value_33, tmp_name_value_8, tmp_default_value_5);
        if (tmp_tuple_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_14;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_34;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_34 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_34 == NULL));
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[8]);
            Py_DECREF(tmp_expression_value_34);
            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_14;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 91;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_14;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_45;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_46;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_pandas$errors$$$class__5_UnsortedIndexError_91 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__5_UnsortedIndexError_91, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[69];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__5_UnsortedIndexError_91, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__5_UnsortedIndexError_91, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_16;
        }
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            tmp_cmp_expr_right_5 = mod_consts[67];
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto try_except_handler_16;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        tmp_dictset_value = mod_consts[67];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__5_UnsortedIndexError_91, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_16;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_14 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_16 = mod_consts[68];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_16 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_pandas$errors$$$class__5_UnsortedIndexError_91;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 91;
            tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto try_except_handler_16;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_47;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_46 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_46);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(locals_pandas$errors$$$class__5_UnsortedIndexError_91);
        locals_pandas$errors$$$class__5_UnsortedIndexError_91 = NULL;
        goto try_return_handler_15;
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

        Py_DECREF(locals_pandas$errors$$$class__5_UnsortedIndexError_91);
        locals_pandas$errors$$$class__5_UnsortedIndexError_91 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 91;
        goto try_except_handler_14;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_46);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_dircall_arg1_6;
        tmp_dircall_arg1_6 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_48 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_17;
        }
        tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_35 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[40];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_35, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_17;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_17;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_50 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_50;
    }
    {
        bool tmp_condition_result_22;
        PyObject *tmp_expression_value_36;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_36 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_36, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_17;
        }
        tmp_condition_result_22 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_37 = tmp_class_creation_6__metaclass;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[50]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_17;
        }
        tmp_tuple_element_17 = mod_consts[70];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_17);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_17 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_17);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 118;
        tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_51;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_38;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_38 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_17;
        }
        tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_39 = tmp_class_creation_6__metaclass;
        tmp_name_value_9 = mod_consts[8];
        tmp_default_value_6 = mod_consts[54];
        tmp_tuple_element_18 = BUILTIN_GETATTR(tstate, tmp_expression_value_39, tmp_name_value_9, tmp_default_value_6);
        if (tmp_tuple_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_17;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_40;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_40 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_40 == NULL));
            tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[8]);
            Py_DECREF(tmp_expression_value_40);
            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_18);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_17;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_17;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 118;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_17;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_52;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_53;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_pandas$errors$$$class__6_ParserError_118 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__6_ParserError_118, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[71];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__6_ParserError_118, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[70];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__6_ParserError_118, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_19;
        }
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_6__bases;
            tmp_cmp_expr_right_6 = mod_consts[49];
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto try_except_handler_19;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__6_ParserError_118, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_19;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_16 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_19 = mod_consts[70];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_19 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_19);
            tmp_tuple_element_19 = locals_pandas$errors$$$class__6_ParserError_118;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 118;
            tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto try_except_handler_19;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_54;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_53 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_53);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(locals_pandas$errors$$$class__6_ParserError_118);
        locals_pandas$errors$$$class__6_ParserError_118 = NULL;
        goto try_return_handler_18;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$errors$$$class__6_ParserError_118);
        locals_pandas$errors$$$class__6_ParserError_118 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 118;
        goto try_except_handler_17;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_53);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_tuple_element_20;
        tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_tuple_element_20 == NULL)) {
            tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_tuple_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_20;
        }
        tmp_assign_source_55 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_55, 0, tmp_tuple_element_20);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_56 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_metaclass_value_7;
        nuitka_bool tmp_condition_result_25;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_20;
        }
        tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_41 = tmp_class_creation_7__bases;
        tmp_subscript_value_7 = mod_consts[40];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_41, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_20;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_20;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_58 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_58;
    }
    {
        bool tmp_condition_result_26;
        PyObject *tmp_expression_value_42;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_42 = tmp_class_creation_7__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_42, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_20;
        }
        tmp_condition_result_26 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_43 = tmp_class_creation_7__metaclass;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[50]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_20;
        }
        tmp_tuple_element_21 = mod_consts[72];
        tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_21);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_21 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_21);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 143;
        tmp_assign_source_59 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_59;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_44;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_44 = tmp_class_creation_7__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_20;
        }
        tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_27 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_name_value_10;
        PyObject *tmp_default_value_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_45 = tmp_class_creation_7__metaclass;
        tmp_name_value_10 = mod_consts[8];
        tmp_default_value_7 = mod_consts[54];
        tmp_tuple_element_22 = BUILTIN_GETATTR(tstate, tmp_expression_value_45, tmp_name_value_10, tmp_default_value_7);
        if (tmp_tuple_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_20;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_46;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_46 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_46 == NULL));
            tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[8]);
            Py_DECREF(tmp_expression_value_46);
            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_22);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_20;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_20;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 143;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_20;
    }
    branch_no_20:;
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_60;
    }
    branch_end_19:;
    {
        PyObject *tmp_assign_source_61;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_pandas$errors$$$class__7_DtypeWarning_143 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__7_DtypeWarning_143, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_22;
        }
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__7_DtypeWarning_143, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_22;
        }
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__7_DtypeWarning_143, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_22;
        }
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto try_except_handler_22;
            }
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
        }
        branch_yes_21:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__7_DtypeWarning_143, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto try_except_handler_22;
        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_18 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_23 = mod_consts[72];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_23 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_23);
            tmp_tuple_element_23 = locals_pandas$errors$$$class__7_DtypeWarning_143;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 143;
            tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto try_except_handler_22;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_62;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_61 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_61);
        goto try_return_handler_22;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        Py_DECREF(locals_pandas$errors$$$class__7_DtypeWarning_143);
        locals_pandas$errors$$$class__7_DtypeWarning_143 = NULL;
        goto try_return_handler_21;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$errors$$$class__7_DtypeWarning_143);
        locals_pandas$errors$$$class__7_DtypeWarning_143 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto try_except_handler_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 143;
        goto try_except_handler_20;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_61);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_7__bases_orig);
    Py_DECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_dircall_arg1_8;
        tmp_dircall_arg1_8 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_63 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_metaclass_value_8;
        nuitka_bool tmp_condition_result_29;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_8;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_23;
        }
        tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_47 = tmp_class_creation_8__bases;
        tmp_subscript_value_8 = mod_consts[40];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_47, tmp_subscript_value_8, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_23;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_23;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_65 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_65;
    }
    {
        bool tmp_condition_result_30;
        PyObject *tmp_expression_value_48;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_48 = tmp_class_creation_8__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_48, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_23;
        }
        tmp_condition_result_30 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_24;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_49 = tmp_class_creation_8__metaclass;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[50]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_23;
        }
        tmp_tuple_element_24 = mod_consts[74];
        tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_24);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_24 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_24);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 198;
        tmp_assign_source_66 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_66;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_50;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_50 = tmp_class_creation_8__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_50, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_23;
        }
        tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_31 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_name_value_11;
        PyObject *tmp_default_value_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_51 = tmp_class_creation_8__metaclass;
        tmp_name_value_11 = mod_consts[8];
        tmp_default_value_8 = mod_consts[54];
        tmp_tuple_element_25 = BUILTIN_GETATTR(tstate, tmp_expression_value_51, tmp_name_value_11, tmp_default_value_8);
        if (tmp_tuple_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_23;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_52;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_value_52 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_52 == NULL));
            tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[8]);
            Py_DECREF(tmp_expression_value_52);
            if (tmp_tuple_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_25);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_23;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_23;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 198;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_23;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_67;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_68;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_pandas$errors$$$class__8_EmptyDataError_198 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__8_EmptyDataError_198, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_25;
        }
        tmp_dictset_value = mod_consts[75];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__8_EmptyDataError_198, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_25;
        }
        tmp_dictset_value = mod_consts[74];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__8_EmptyDataError_198, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_25;
        }
        {
            nuitka_bool tmp_condition_result_32;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_8__bases;
            tmp_cmp_expr_right_8 = mod_consts[49];
            tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto try_except_handler_25;
            }
            if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__8_EmptyDataError_198, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_25;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_69;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_20 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_26 = mod_consts[74];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_26 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_26);
            tmp_tuple_element_26 = locals_pandas$errors$$$class__8_EmptyDataError_198;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 198;
            tmp_assign_source_69 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto try_except_handler_25;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_69;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_68 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_68);
        goto try_return_handler_25;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        Py_DECREF(locals_pandas$errors$$$class__8_EmptyDataError_198);
        locals_pandas$errors$$$class__8_EmptyDataError_198 = NULL;
        goto try_return_handler_24;
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

        Py_DECREF(locals_pandas$errors$$$class__8_EmptyDataError_198);
        locals_pandas$errors$$$class__8_EmptyDataError_198 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto try_except_handler_24;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 198;
        goto try_except_handler_23;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_68);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_8__bases);
    Py_DECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_tuple_element_27;
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto try_except_handler_26;
        }
        tmp_assign_source_70 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_70, 0, tmp_tuple_element_27);
        assert(tmp_class_creation_9__bases_orig == NULL);
        tmp_class_creation_9__bases_orig = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_dircall_arg1_9;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dircall_arg1_9 = tmp_class_creation_9__bases_orig;
        Py_INCREF(tmp_dircall_arg1_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_71 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_metaclass_value_9;
        nuitka_bool tmp_condition_result_33;
        int tmp_truth_name_9;
        PyObject *tmp_type_arg_17;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_bases_value_9;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_9 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto try_except_handler_26;
        }
        tmp_condition_result_33 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_expression_value_53 = tmp_class_creation_9__bases;
        tmp_subscript_value_9 = mod_consts[40];
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_53, tmp_subscript_value_9, 0);
        if (tmp_type_arg_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto try_except_handler_26;
        }
        tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
        Py_DECREF(tmp_type_arg_17);
        if (tmp_metaclass_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto try_except_handler_26;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_9);
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_value_9 = tmp_class_creation_9__bases;
        tmp_assign_source_73 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
        Py_DECREF(tmp_metaclass_value_9);
        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_73;
    }
    {
        bool tmp_condition_result_34;
        PyObject *tmp_expression_value_54;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_54 = tmp_class_creation_9__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_54, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto try_except_handler_26;
        }
        tmp_condition_result_34 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_args_value_17;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_kwargs_value_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_55 = tmp_class_creation_9__metaclass;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[50]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto try_except_handler_26;
        }
        tmp_tuple_element_28 = mod_consts[76];
        tmp_args_value_17 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_28);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_28 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_28);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_17 = tmp_class_creation_9__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 212;
        tmp_assign_source_74 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_17, tmp_kwargs_value_17);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_value_17);
        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_74;
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_expression_value_56;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_56 = tmp_class_creation_9__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_56, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto try_except_handler_26;
        }
        tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_35 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_mod_expr_left_9;
        PyObject *tmp_mod_expr_right_9;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_name_value_12;
        PyObject *tmp_default_value_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_mod_expr_left_9 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_57 = tmp_class_creation_9__metaclass;
        tmp_name_value_12 = mod_consts[8];
        tmp_default_value_9 = mod_consts[54];
        tmp_tuple_element_29 = BUILTIN_GETATTR(tstate, tmp_expression_value_57, tmp_name_value_12, tmp_default_value_9);
        if (tmp_tuple_element_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto try_except_handler_26;
        }
        tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_58;
            PyObject *tmp_type_arg_18;
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_18 = tmp_class_creation_9__prepared;
            tmp_expression_value_58 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_expression_value_58 == NULL));
            tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[8]);
            Py_DECREF(tmp_expression_value_58);
            if (tmp_tuple_element_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_29);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_mod_expr_right_9);
        goto try_except_handler_26;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        Py_DECREF(tmp_mod_expr_right_9);
        if (tmp_raise_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto try_except_handler_26;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 212;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_26;
    }
    branch_no_26:;
    goto branch_end_25;
    branch_no_25:;
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_75;
    }
    branch_end_25:;
    {
        PyObject *tmp_assign_source_76;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_pandas$errors$$$class__9_ParserWarning_212 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__9_ParserWarning_212, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto try_except_handler_28;
        }
        tmp_dictset_value = mod_consts[77];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__9_ParserWarning_212, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto try_except_handler_28;
        }
        tmp_dictset_value = mod_consts[76];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__9_ParserWarning_212, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto try_except_handler_28;
        }
        {
            nuitka_bool tmp_condition_result_36;
            PyObject *tmp_cmp_expr_left_9;
            PyObject *tmp_cmp_expr_right_9;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_cmp_expr_left_9 = tmp_class_creation_9__bases;
            CHECK_OBJECT(tmp_class_creation_9__bases_orig);
            tmp_cmp_expr_right_9 = tmp_class_creation_9__bases_orig;
            tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
            if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto try_except_handler_28;
            }
            if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
                goto branch_yes_27;
            } else {
                goto branch_no_27;
            }
        }
        branch_yes_27:;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dictset_value = tmp_class_creation_9__bases_orig;
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__9_ParserWarning_212, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto try_except_handler_28;
        }
        branch_no_27:;
        {
            PyObject *tmp_assign_source_77;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_22 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_30 = mod_consts[76];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_30 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_30);
            tmp_tuple_element_30 = locals_pandas$errors$$$class__9_ParserWarning_212;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_18 = tmp_class_creation_9__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 212;
            tmp_assign_source_77 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto try_except_handler_28;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_77;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_76 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_76);
        goto try_return_handler_28;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        Py_DECREF(locals_pandas$errors$$$class__9_ParserWarning_212);
        locals_pandas$errors$$$class__9_ParserWarning_212 = NULL;
        goto try_return_handler_27;
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

        Py_DECREF(locals_pandas$errors$$$class__9_ParserWarning_212);
        locals_pandas$errors$$$class__9_ParserWarning_212 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto try_except_handler_27;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 212;
        goto try_except_handler_26;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_76);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_9__bases_orig);
    Py_DECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_9__bases);
    Py_DECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__metaclass);
    Py_DECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_dircall_arg1_10;
        tmp_dircall_arg1_10 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_10);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
            tmp_assign_source_78 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto try_except_handler_29;
        }
        assert(tmp_class_creation_10__bases == NULL);
        tmp_class_creation_10__bases = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_metaclass_value_10;
        nuitka_bool tmp_condition_result_37;
        int tmp_truth_name_10;
        PyObject *tmp_type_arg_19;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_10;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_creation_10__bases);
        if (tmp_truth_name_10 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto try_except_handler_29;
        }
        tmp_condition_result_37 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_expression_value_59 = tmp_class_creation_10__bases;
        tmp_subscript_value_10 = mod_consts[40];
        tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_59, tmp_subscript_value_10, 0);
        if (tmp_type_arg_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto try_except_handler_29;
        }
        tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
        Py_DECREF(tmp_type_arg_19);
        if (tmp_metaclass_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto try_except_handler_29;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_10);
        condexpr_end_10:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_bases_value_10 = tmp_class_creation_10__bases;
        tmp_assign_source_80 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
        Py_DECREF(tmp_metaclass_value_10);
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto try_except_handler_29;
        }
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_80;
    }
    {
        bool tmp_condition_result_38;
        PyObject *tmp_expression_value_60;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_60 = tmp_class_creation_10__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_60, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto try_except_handler_29;
        }
        tmp_condition_result_38 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_38 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_args_value_19;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_kwargs_value_19;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_61 = tmp_class_creation_10__metaclass;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[50]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto try_except_handler_29;
        }
        tmp_tuple_element_31 = mod_consts[78];
        tmp_args_value_19 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_31);
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_tuple_element_31 = tmp_class_creation_10__bases;
        PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_31);
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_kwargs_value_19 = tmp_class_creation_10__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 253;
        tmp_assign_source_81 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_19, tmp_kwargs_value_19);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_value_19);
        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto try_except_handler_29;
        }
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_81;
    }
    {
        bool tmp_condition_result_39;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_expression_value_62;
        CHECK_OBJECT(tmp_class_creation_10__prepared);
        tmp_expression_value_62 = tmp_class_creation_10__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_62, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto try_except_handler_29;
        }
        tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_39 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_raise_value_10;
        PyObject *tmp_mod_expr_left_10;
        PyObject *tmp_mod_expr_right_10;
        PyObject *tmp_tuple_element_32;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_name_value_13;
        PyObject *tmp_default_value_10;
        tmp_raise_type_10 = PyExc_TypeError;
        tmp_mod_expr_left_10 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_63 = tmp_class_creation_10__metaclass;
        tmp_name_value_13 = mod_consts[8];
        tmp_default_value_10 = mod_consts[54];
        tmp_tuple_element_32 = BUILTIN_GETATTR(tstate, tmp_expression_value_63, tmp_name_value_13, tmp_default_value_10);
        if (tmp_tuple_element_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto try_except_handler_29;
        }
        tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_64;
            PyObject *tmp_type_arg_20;
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_type_arg_20 = tmp_class_creation_10__prepared;
            tmp_expression_value_64 = BUILTIN_TYPE1(tmp_type_arg_20);
            assert(!(tmp_expression_value_64 == NULL));
            tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[8]);
            Py_DECREF(tmp_expression_value_64);
            if (tmp_tuple_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_32);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_mod_expr_right_10);
        goto try_except_handler_29;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
        Py_DECREF(tmp_mod_expr_right_10);
        if (tmp_raise_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto try_except_handler_29;
        }
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_value = tmp_raise_value_10;
        exception_lineno = 253;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_29;
    }
    branch_no_29:;
    goto branch_end_28;
    branch_no_28:;
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_82;
    }
    branch_end_28:;
    {
        PyObject *tmp_assign_source_83;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_pandas$errors$$$class__10_MergeError_253 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__10_MergeError_253, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto try_except_handler_31;
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__10_MergeError_253, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto try_except_handler_31;
        }
        tmp_dictset_value = mod_consts[78];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__10_MergeError_253, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto try_except_handler_31;
        }
        {
            nuitka_bool tmp_condition_result_40;
            PyObject *tmp_cmp_expr_left_10;
            PyObject *tmp_cmp_expr_right_10;
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_cmp_expr_left_10 = tmp_class_creation_10__bases;
            tmp_cmp_expr_right_10 = mod_consts[49];
            tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
            if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;

                goto try_except_handler_31;
            }
            if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
                goto branch_yes_30;
            } else {
                goto branch_no_30;
            }
        }
        branch_yes_30:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__10_MergeError_253, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto try_except_handler_31;
        }
        branch_no_30:;
        {
            PyObject *tmp_assign_source_84;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_value_20;
            PyObject *tmp_tuple_element_33;
            PyObject *tmp_kwargs_value_20;
            CHECK_OBJECT(tmp_class_creation_10__metaclass);
            tmp_called_value_24 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_33 = mod_consts[78];
            tmp_args_value_20 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_33);
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_tuple_element_33 = tmp_class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_33);
            tmp_tuple_element_33 = locals_pandas$errors$$$class__10_MergeError_253;
            PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_33);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_value_20 = tmp_class_creation_10__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 253;
            tmp_assign_source_84 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_20, tmp_kwargs_value_20);
            Py_DECREF(tmp_args_value_20);
            if (tmp_assign_source_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;

                goto try_except_handler_31;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_84;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_assign_source_83 = outline_9_var___class__;
        Py_INCREF(tmp_assign_source_83);
        goto try_return_handler_31;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        Py_DECREF(locals_pandas$errors$$$class__10_MergeError_253);
        locals_pandas$errors$$$class__10_MergeError_253 = NULL;
        goto try_return_handler_30;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_29 = exception_type;
        exception_keeper_value_29 = exception_value;
        exception_keeper_tb_29 = exception_tb;
        exception_keeper_lineno_29 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$errors$$$class__10_MergeError_253);
        locals_pandas$errors$$$class__10_MergeError_253 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;
        exception_lineno = exception_keeper_lineno_29;

        goto try_except_handler_30;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;
        exception_lineno = exception_keeper_lineno_30;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 253;
        goto try_except_handler_29;
        outline_result_10:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_83);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_10__bases);
    Py_DECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    Py_DECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__metaclass);
    Py_DECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_dircall_arg1_11;
        tmp_dircall_arg1_11 = mod_consts[80];
        Py_INCREF(tmp_dircall_arg1_11);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_11};
            tmp_assign_source_85 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_32;
        }
        assert(tmp_class_creation_11__bases == NULL);
        tmp_class_creation_11__bases = tmp_assign_source_85;
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_86;
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_metaclass_value_11;
        nuitka_bool tmp_condition_result_41;
        int tmp_truth_name_11;
        PyObject *tmp_type_arg_21;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_bases_value_11;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_creation_11__bases);
        if (tmp_truth_name_11 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_32;
        }
        tmp_condition_result_41 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_expression_value_65 = tmp_class_creation_11__bases;
        tmp_subscript_value_11 = mod_consts[40];
        tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_65, tmp_subscript_value_11, 0);
        if (tmp_type_arg_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_32;
        }
        tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
        Py_DECREF(tmp_type_arg_21);
        if (tmp_metaclass_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_32;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_11);
        condexpr_end_11:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_bases_value_11 = tmp_class_creation_11__bases;
        tmp_assign_source_87 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
        Py_DECREF(tmp_metaclass_value_11);
        if (tmp_assign_source_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_32;
        }
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_87;
    }
    {
        bool tmp_condition_result_42;
        PyObject *tmp_expression_value_66;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_66 = tmp_class_creation_11__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_66, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_32;
        }
        tmp_condition_result_42 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_42 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_args_value_21;
        PyObject *tmp_tuple_element_34;
        PyObject *tmp_kwargs_value_21;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_67 = tmp_class_creation_11__metaclass;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[50]);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_32;
        }
        tmp_tuple_element_34 = mod_consts[81];
        tmp_args_value_21 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_34);
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_tuple_element_34 = tmp_class_creation_11__bases;
        PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_34);
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_kwargs_value_21 = tmp_class_creation_11__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 273;
        tmp_assign_source_88 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_21, tmp_kwargs_value_21);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_value_21);
        if (tmp_assign_source_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_32;
        }
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_88;
    }
    {
        bool tmp_condition_result_43;
        PyObject *tmp_operand_value_11;
        PyObject *tmp_expression_value_68;
        CHECK_OBJECT(tmp_class_creation_11__prepared);
        tmp_expression_value_68 = tmp_class_creation_11__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_68, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_32;
        }
        tmp_operand_value_11 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
        assert(!(tmp_res == -1));
        tmp_condition_result_43 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_raise_type_11;
        PyObject *tmp_raise_value_11;
        PyObject *tmp_mod_expr_left_11;
        PyObject *tmp_mod_expr_right_11;
        PyObject *tmp_tuple_element_35;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_name_value_14;
        PyObject *tmp_default_value_11;
        tmp_raise_type_11 = PyExc_TypeError;
        tmp_mod_expr_left_11 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_69 = tmp_class_creation_11__metaclass;
        tmp_name_value_14 = mod_consts[8];
        tmp_default_value_11 = mod_consts[54];
        tmp_tuple_element_35 = BUILTIN_GETATTR(tstate, tmp_expression_value_69, tmp_name_value_14, tmp_default_value_11);
        if (tmp_tuple_element_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_32;
        }
        tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_70;
            PyObject *tmp_type_arg_22;
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_type_arg_22 = tmp_class_creation_11__prepared;
            tmp_expression_value_70 = BUILTIN_TYPE1(tmp_type_arg_22);
            assert(!(tmp_expression_value_70 == NULL));
            tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[8]);
            Py_DECREF(tmp_expression_value_70);
            if (tmp_tuple_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_35);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_mod_expr_right_11);
        goto try_except_handler_32;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_raise_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
        Py_DECREF(tmp_mod_expr_right_11);
        if (tmp_raise_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_32;
        }
        exception_type = tmp_raise_type_11;
        Py_INCREF(tmp_raise_type_11);
        exception_value = tmp_raise_value_11;
        exception_lineno = 273;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_32;
    }
    branch_no_32:;
    goto branch_end_31;
    branch_no_31:;
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_89;
    }
    branch_end_31:;
    {
        PyObject *tmp_assign_source_90;
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_pandas$errors$$$class__11_AbstractMethodError_273 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__11_AbstractMethodError_273, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_34;
        }
        tmp_dictset_value = mod_consts[82];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__11_AbstractMethodError_273, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_34;
        }
        tmp_dictset_value = mod_consts[81];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__11_AbstractMethodError_273, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_34;
        }
        frame_7f59dbdf99b11c2a7f6274c70ad2d914_2 = MAKE_CLASS_FRAME(tstate, codeobj_7f59dbdf99b11c2a7f6274c70ad2d914, module_pandas$errors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_7f59dbdf99b11c2a7f6274c70ad2d914_2);
        assert(Py_REFCNT(frame_7f59dbdf99b11c2a7f6274c70ad2d914_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            tmp_defaults_1 = mod_consts[83];
            tmp_annotations_1 = DICT_COPY(mod_consts[84]);
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_pandas$errors$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__11_AbstractMethodError_273, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_2;
            tmp_annotations_2 = DICT_COPY(mod_consts[86]);


            tmp_dictset_value = MAKE_FUNCTION_pandas$errors$$$function__2___str__(tmp_annotations_2);

            tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__11_AbstractMethodError_273, mod_consts[87], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7f59dbdf99b11c2a7f6274c70ad2d914_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7f59dbdf99b11c2a7f6274c70ad2d914_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7f59dbdf99b11c2a7f6274c70ad2d914_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7f59dbdf99b11c2a7f6274c70ad2d914_2,
            type_description_2,
            outline_10_var___class__
        );



        assertFrameObject(frame_7f59dbdf99b11c2a7f6274c70ad2d914_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_34;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_44;
            PyObject *tmp_cmp_expr_left_11;
            PyObject *tmp_cmp_expr_right_11;
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_cmp_expr_left_11 = tmp_class_creation_11__bases;
            tmp_cmp_expr_right_11 = mod_consts[80];
            tmp_condition_result_44 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
            if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;

                goto try_except_handler_34;
            }
            if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
                goto branch_yes_33;
            } else {
                goto branch_no_33;
            }
        }
        branch_yes_33:;
        tmp_dictset_value = mod_consts[80];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__11_AbstractMethodError_273, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_34;
        }
        branch_no_33:;
        {
            PyObject *tmp_assign_source_91;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_value_22;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_kwargs_value_22;
            CHECK_OBJECT(tmp_class_creation_11__metaclass);
            tmp_called_value_26 = tmp_class_creation_11__metaclass;
            tmp_tuple_element_36 = mod_consts[81];
            tmp_args_value_22 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_tuple_element_36 = tmp_class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_36);
            tmp_tuple_element_36 = locals_pandas$errors$$$class__11_AbstractMethodError_273;
            PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_value_22 = tmp_class_creation_11__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 273;
            tmp_assign_source_91 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_22, tmp_kwargs_value_22);
            Py_DECREF(tmp_args_value_22);
            if (tmp_assign_source_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;

                goto try_except_handler_34;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_91;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_assign_source_90 = outline_10_var___class__;
        Py_INCREF(tmp_assign_source_90);
        goto try_return_handler_34;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_34:;
        Py_DECREF(locals_pandas$errors$$$class__11_AbstractMethodError_273);
        locals_pandas$errors$$$class__11_AbstractMethodError_273 = NULL;
        goto try_return_handler_33;
        // Exception handler code:
        try_except_handler_34:;
        exception_keeper_type_32 = exception_type;
        exception_keeper_value_32 = exception_value;
        exception_keeper_tb_32 = exception_tb;
        exception_keeper_lineno_32 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$errors$$$class__11_AbstractMethodError_273);
        locals_pandas$errors$$$class__11_AbstractMethodError_273 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_32;
        exception_value = exception_keeper_value_32;
        exception_tb = exception_keeper_tb_32;
        exception_lineno = exception_keeper_lineno_32;

        goto try_except_handler_33;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_33:;
        exception_keeper_type_33 = exception_type;
        exception_keeper_value_33 = exception_value;
        exception_keeper_tb_33 = exception_tb;
        exception_keeper_lineno_33 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_33;
        exception_value = exception_keeper_value_33;
        exception_tb = exception_keeper_tb_33;
        exception_lineno = exception_keeper_lineno_33;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 273;
        goto try_except_handler_32;
        outline_result_11:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_90);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_class_creation_11__bases);
    Py_DECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    Py_DECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__metaclass);
    Py_DECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_dircall_arg1_12;
        tmp_dircall_arg1_12 = mod_consts[89];
        Py_INCREF(tmp_dircall_arg1_12);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_12};
            tmp_assign_source_92 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto try_except_handler_35;
        }
        assert(tmp_class_creation_12__bases == NULL);
        tmp_class_creation_12__bases = tmp_assign_source_92;
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__class_decl_dict == NULL);
        tmp_class_creation_12__class_decl_dict = tmp_assign_source_93;
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_metaclass_value_12;
        nuitka_bool tmp_condition_result_45;
        int tmp_truth_name_12;
        PyObject *tmp_type_arg_23;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_bases_value_12;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_truth_name_12 = CHECK_IF_TRUE(tmp_class_creation_12__bases);
        if (tmp_truth_name_12 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto try_except_handler_35;
        }
        tmp_condition_result_45 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_expression_value_71 = tmp_class_creation_12__bases;
        tmp_subscript_value_12 = mod_consts[40];
        tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_71, tmp_subscript_value_12, 0);
        if (tmp_type_arg_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto try_except_handler_35;
        }
        tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_23);
        Py_DECREF(tmp_type_arg_23);
        if (tmp_metaclass_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto try_except_handler_35;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_12);
        condexpr_end_12:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_bases_value_12 = tmp_class_creation_12__bases;
        tmp_assign_source_94 = SELECT_METACLASS(tstate, tmp_metaclass_value_12, tmp_bases_value_12);
        Py_DECREF(tmp_metaclass_value_12);
        if (tmp_assign_source_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto try_except_handler_35;
        }
        assert(tmp_class_creation_12__metaclass == NULL);
        tmp_class_creation_12__metaclass = tmp_assign_source_94;
    }
    {
        bool tmp_condition_result_46;
        PyObject *tmp_expression_value_72;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_72 = tmp_class_creation_12__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_72, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto try_except_handler_35;
        }
        tmp_condition_result_46 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_46 != false) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_args_value_23;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_kwargs_value_23;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_73 = tmp_class_creation_12__metaclass;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[50]);
        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto try_except_handler_35;
        }
        tmp_tuple_element_37 = mod_consts[90];
        tmp_args_value_23 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_37);
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_tuple_element_37 = tmp_class_creation_12__bases;
        PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_37);
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_kwargs_value_23 = tmp_class_creation_12__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 311;
        tmp_assign_source_95 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_23, tmp_kwargs_value_23);
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_value_23);
        if (tmp_assign_source_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto try_except_handler_35;
        }
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_95;
    }
    {
        bool tmp_condition_result_47;
        PyObject *tmp_operand_value_12;
        PyObject *tmp_expression_value_74;
        CHECK_OBJECT(tmp_class_creation_12__prepared);
        tmp_expression_value_74 = tmp_class_creation_12__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_74, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto try_except_handler_35;
        }
        tmp_operand_value_12 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_47 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_47 != false) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_raise_type_12;
        PyObject *tmp_raise_value_12;
        PyObject *tmp_mod_expr_left_12;
        PyObject *tmp_mod_expr_right_12;
        PyObject *tmp_tuple_element_38;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_name_value_15;
        PyObject *tmp_default_value_12;
        tmp_raise_type_12 = PyExc_TypeError;
        tmp_mod_expr_left_12 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_75 = tmp_class_creation_12__metaclass;
        tmp_name_value_15 = mod_consts[8];
        tmp_default_value_12 = mod_consts[54];
        tmp_tuple_element_38 = BUILTIN_GETATTR(tstate, tmp_expression_value_75, tmp_name_value_15, tmp_default_value_12);
        if (tmp_tuple_element_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto try_except_handler_35;
        }
        tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_76;
            PyObject *tmp_type_arg_24;
            PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_type_arg_24 = tmp_class_creation_12__prepared;
            tmp_expression_value_76 = BUILTIN_TYPE1(tmp_type_arg_24);
            assert(!(tmp_expression_value_76 == NULL));
            tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[8]);
            Py_DECREF(tmp_expression_value_76);
            if (tmp_tuple_element_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_38);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_mod_expr_right_12);
        goto try_except_handler_35;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_raise_value_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
        Py_DECREF(tmp_mod_expr_right_12);
        if (tmp_raise_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto try_except_handler_35;
        }
        exception_type = tmp_raise_type_12;
        Py_INCREF(tmp_raise_type_12);
        exception_value = tmp_raise_value_12;
        exception_lineno = 311;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_35;
    }
    branch_no_35:;
    goto branch_end_34;
    branch_no_34:;
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_96;
    }
    branch_end_34:;
    {
        PyObject *tmp_assign_source_97;
        {
            PyObject *tmp_set_locals_12;
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_set_locals_12 = tmp_class_creation_12__prepared;
            locals_pandas$errors$$$class__12_NumbaUtilError_311 = tmp_set_locals_12;
            Py_INCREF(tmp_set_locals_12);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__12_NumbaUtilError_311, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto try_except_handler_37;
        }
        tmp_dictset_value = mod_consts[91];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__12_NumbaUtilError_311, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto try_except_handler_37;
        }
        tmp_dictset_value = mod_consts[90];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__12_NumbaUtilError_311, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto try_except_handler_37;
        }
        {
            nuitka_bool tmp_condition_result_48;
            PyObject *tmp_cmp_expr_left_12;
            PyObject *tmp_cmp_expr_right_12;
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_cmp_expr_left_12 = tmp_class_creation_12__bases;
            tmp_cmp_expr_right_12 = mod_consts[89];
            tmp_condition_result_48 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
            if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;

                goto try_except_handler_37;
            }
            if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
                goto branch_yes_36;
            } else {
                goto branch_no_36;
            }
        }
        branch_yes_36:;
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__12_NumbaUtilError_311, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto try_except_handler_37;
        }
        branch_no_36:;
        {
            PyObject *tmp_assign_source_98;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_value_24;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_kwargs_value_24;
            CHECK_OBJECT(tmp_class_creation_12__metaclass);
            tmp_called_value_28 = tmp_class_creation_12__metaclass;
            tmp_tuple_element_39 = mod_consts[90];
            tmp_args_value_24 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_tuple_element_39 = tmp_class_creation_12__bases;
            PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_39);
            tmp_tuple_element_39 = locals_pandas$errors$$$class__12_NumbaUtilError_311;
            PyTuple_SET_ITEM0(tmp_args_value_24, 2, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
            tmp_kwargs_value_24 = tmp_class_creation_12__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 311;
            tmp_assign_source_98 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_24, tmp_kwargs_value_24);
            Py_DECREF(tmp_args_value_24);
            if (tmp_assign_source_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;

                goto try_except_handler_37;
            }
            assert(outline_11_var___class__ == NULL);
            outline_11_var___class__ = tmp_assign_source_98;
        }
        CHECK_OBJECT(outline_11_var___class__);
        tmp_assign_source_97 = outline_11_var___class__;
        Py_INCREF(tmp_assign_source_97);
        goto try_return_handler_37;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_37:;
        Py_DECREF(locals_pandas$errors$$$class__12_NumbaUtilError_311);
        locals_pandas$errors$$$class__12_NumbaUtilError_311 = NULL;
        goto try_return_handler_36;
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

        Py_DECREF(locals_pandas$errors$$$class__12_NumbaUtilError_311);
        locals_pandas$errors$$$class__12_NumbaUtilError_311 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_35;
        exception_value = exception_keeper_value_35;
        exception_tb = exception_keeper_tb_35;
        exception_lineno = exception_keeper_lineno_35;

        goto try_except_handler_36;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_36:;
        CHECK_OBJECT(outline_11_var___class__);
        Py_DECREF(outline_11_var___class__);
        outline_11_var___class__ = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_36:;
        exception_keeper_type_36 = exception_type;
        exception_keeper_value_36 = exception_value;
        exception_keeper_tb_36 = exception_tb;
        exception_keeper_lineno_36 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_36;
        exception_value = exception_keeper_value_36;
        exception_tb = exception_keeper_tb_36;
        exception_lineno = exception_keeper_lineno_36;

        goto outline_exception_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_12:;
        exception_lineno = 311;
        goto try_except_handler_35;
        outline_result_12:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_97);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    Py_XDECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_class_creation_12__bases);
    Py_DECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    Py_DECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_12__metaclass);
    Py_DECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_12__prepared);
    Py_DECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_dircall_arg1_13;
        tmp_dircall_arg1_13 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_13);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_13};
            tmp_assign_source_99 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_38;
        }
        assert(tmp_class_creation_13__bases == NULL);
        tmp_class_creation_13__bases = tmp_assign_source_99;
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_13__class_decl_dict == NULL);
        tmp_class_creation_13__class_decl_dict = tmp_assign_source_100;
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_metaclass_value_13;
        nuitka_bool tmp_condition_result_49;
        int tmp_truth_name_13;
        PyObject *tmp_type_arg_25;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_bases_value_13;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_truth_name_13 = CHECK_IF_TRUE(tmp_class_creation_13__bases);
        if (tmp_truth_name_13 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_38;
        }
        tmp_condition_result_49 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_expression_value_77 = tmp_class_creation_13__bases;
        tmp_subscript_value_13 = mod_consts[40];
        tmp_type_arg_25 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_77, tmp_subscript_value_13, 0);
        if (tmp_type_arg_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_38;
        }
        tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_25);
        Py_DECREF(tmp_type_arg_25);
        if (tmp_metaclass_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_38;
        }
        goto condexpr_end_13;
        condexpr_false_13:;
        tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_13);
        condexpr_end_13:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_bases_value_13 = tmp_class_creation_13__bases;
        tmp_assign_source_101 = SELECT_METACLASS(tstate, tmp_metaclass_value_13, tmp_bases_value_13);
        Py_DECREF(tmp_metaclass_value_13);
        if (tmp_assign_source_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_38;
        }
        assert(tmp_class_creation_13__metaclass == NULL);
        tmp_class_creation_13__metaclass = tmp_assign_source_101;
    }
    {
        bool tmp_condition_result_50;
        PyObject *tmp_expression_value_78;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_78 = tmp_class_creation_13__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_78, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_38;
        }
        tmp_condition_result_50 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_50 != false) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_args_value_25;
        PyObject *tmp_tuple_element_40;
        PyObject *tmp_kwargs_value_25;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_79 = tmp_class_creation_13__metaclass;
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[50]);
        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_38;
        }
        tmp_tuple_element_40 = mod_consts[92];
        tmp_args_value_25 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_40);
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_tuple_element_40 = tmp_class_creation_13__bases;
        PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_40);
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_kwargs_value_25 = tmp_class_creation_13__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 328;
        tmp_assign_source_102 = CALL_FUNCTION(tstate, tmp_called_value_29, tmp_args_value_25, tmp_kwargs_value_25);
        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_args_value_25);
        if (tmp_assign_source_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_38;
        }
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_102;
    }
    {
        bool tmp_condition_result_51;
        PyObject *tmp_operand_value_13;
        PyObject *tmp_expression_value_80;
        CHECK_OBJECT(tmp_class_creation_13__prepared);
        tmp_expression_value_80 = tmp_class_creation_13__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_80, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_38;
        }
        tmp_operand_value_13 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_51 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_51 != false) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_raise_type_13;
        PyObject *tmp_raise_value_13;
        PyObject *tmp_mod_expr_left_13;
        PyObject *tmp_mod_expr_right_13;
        PyObject *tmp_tuple_element_41;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_name_value_16;
        PyObject *tmp_default_value_13;
        tmp_raise_type_13 = PyExc_TypeError;
        tmp_mod_expr_left_13 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_81 = tmp_class_creation_13__metaclass;
        tmp_name_value_16 = mod_consts[8];
        tmp_default_value_13 = mod_consts[54];
        tmp_tuple_element_41 = BUILTIN_GETATTR(tstate, tmp_expression_value_81, tmp_name_value_16, tmp_default_value_13);
        if (tmp_tuple_element_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_38;
        }
        tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_82;
            PyObject *tmp_type_arg_26;
            PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_41);
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_type_arg_26 = tmp_class_creation_13__prepared;
            tmp_expression_value_82 = BUILTIN_TYPE1(tmp_type_arg_26);
            assert(!(tmp_expression_value_82 == NULL));
            tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[8]);
            Py_DECREF(tmp_expression_value_82);
            if (tmp_tuple_element_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_41);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_mod_expr_right_13);
        goto try_except_handler_38;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_raise_value_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
        Py_DECREF(tmp_mod_expr_right_13);
        if (tmp_raise_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_38;
        }
        exception_type = tmp_raise_type_13;
        Py_INCREF(tmp_raise_type_13);
        exception_value = tmp_raise_value_13;
        exception_lineno = 328;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_38;
    }
    branch_no_38:;
    goto branch_end_37;
    branch_no_37:;
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_103;
    }
    branch_end_37:;
    {
        PyObject *tmp_assign_source_104;
        {
            PyObject *tmp_set_locals_13;
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_set_locals_13 = tmp_class_creation_13__prepared;
            locals_pandas$errors$$$class__13_DuplicateLabelError_328 = tmp_set_locals_13;
            Py_INCREF(tmp_set_locals_13);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__13_DuplicateLabelError_328, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_40;
        }
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__13_DuplicateLabelError_328, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_40;
        }
        tmp_dictset_value = mod_consts[92];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__13_DuplicateLabelError_328, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_40;
        }
        {
            nuitka_bool tmp_condition_result_52;
            PyObject *tmp_cmp_expr_left_13;
            PyObject *tmp_cmp_expr_right_13;
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_cmp_expr_left_13 = tmp_class_creation_13__bases;
            tmp_cmp_expr_right_13 = mod_consts[49];
            tmp_condition_result_52 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
            if (tmp_condition_result_52 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto try_except_handler_40;
            }
            if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
                goto branch_yes_39;
            } else {
                goto branch_no_39;
            }
        }
        branch_yes_39:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__13_DuplicateLabelError_328, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_40;
        }
        branch_no_39:;
        {
            PyObject *tmp_assign_source_105;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_value_26;
            PyObject *tmp_tuple_element_42;
            PyObject *tmp_kwargs_value_26;
            CHECK_OBJECT(tmp_class_creation_13__metaclass);
            tmp_called_value_30 = tmp_class_creation_13__metaclass;
            tmp_tuple_element_42 = mod_consts[92];
            tmp_args_value_26 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_tuple_element_42 = tmp_class_creation_13__bases;
            PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_42);
            tmp_tuple_element_42 = locals_pandas$errors$$$class__13_DuplicateLabelError_328;
            PyTuple_SET_ITEM0(tmp_args_value_26, 2, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
            tmp_kwargs_value_26 = tmp_class_creation_13__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 328;
            tmp_assign_source_105 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_26, tmp_kwargs_value_26);
            Py_DECREF(tmp_args_value_26);
            if (tmp_assign_source_105 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto try_except_handler_40;
            }
            assert(outline_12_var___class__ == NULL);
            outline_12_var___class__ = tmp_assign_source_105;
        }
        CHECK_OBJECT(outline_12_var___class__);
        tmp_assign_source_104 = outline_12_var___class__;
        Py_INCREF(tmp_assign_source_104);
        goto try_return_handler_40;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_40:;
        Py_DECREF(locals_pandas$errors$$$class__13_DuplicateLabelError_328);
        locals_pandas$errors$$$class__13_DuplicateLabelError_328 = NULL;
        goto try_return_handler_39;
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

        Py_DECREF(locals_pandas$errors$$$class__13_DuplicateLabelError_328);
        locals_pandas$errors$$$class__13_DuplicateLabelError_328 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_38;
        exception_value = exception_keeper_value_38;
        exception_tb = exception_keeper_tb_38;
        exception_lineno = exception_keeper_lineno_38;

        goto try_except_handler_39;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_39:;
        CHECK_OBJECT(outline_12_var___class__);
        Py_DECREF(outline_12_var___class__);
        outline_12_var___class__ = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_39:;
        exception_keeper_type_39 = exception_type;
        exception_keeper_value_39 = exception_value;
        exception_keeper_tb_39 = exception_tb;
        exception_keeper_lineno_39 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_39;
        exception_value = exception_keeper_value_39;
        exception_tb = exception_keeper_tb_39;
        exception_lineno = exception_keeper_lineno_39;

        goto outline_exception_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_13:;
        exception_lineno = 328;
        goto try_except_handler_38;
        outline_result_13:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_104);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    Py_XDECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_class_creation_13__bases);
    Py_DECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
    Py_DECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_13__metaclass);
    Py_DECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_13__prepared);
    Py_DECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_dircall_arg1_14;
        tmp_dircall_arg1_14 = mod_consts[89];
        Py_INCREF(tmp_dircall_arg1_14);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_14};
            tmp_assign_source_106 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_41;
        }
        assert(tmp_class_creation_14__bases == NULL);
        tmp_class_creation_14__bases = tmp_assign_source_106;
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_14__class_decl_dict == NULL);
        tmp_class_creation_14__class_decl_dict = tmp_assign_source_107;
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_metaclass_value_14;
        nuitka_bool tmp_condition_result_53;
        int tmp_truth_name_14;
        PyObject *tmp_type_arg_27;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_bases_value_14;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_truth_name_14 = CHECK_IF_TRUE(tmp_class_creation_14__bases);
        if (tmp_truth_name_14 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_41;
        }
        tmp_condition_result_53 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_14;
        } else {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_expression_value_83 = tmp_class_creation_14__bases;
        tmp_subscript_value_14 = mod_consts[40];
        tmp_type_arg_27 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_83, tmp_subscript_value_14, 0);
        if (tmp_type_arg_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_41;
        }
        tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_27);
        Py_DECREF(tmp_type_arg_27);
        if (tmp_metaclass_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_41;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_14);
        condexpr_end_14:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_bases_value_14 = tmp_class_creation_14__bases;
        tmp_assign_source_108 = SELECT_METACLASS(tstate, tmp_metaclass_value_14, tmp_bases_value_14);
        Py_DECREF(tmp_metaclass_value_14);
        if (tmp_assign_source_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_41;
        }
        assert(tmp_class_creation_14__metaclass == NULL);
        tmp_class_creation_14__metaclass = tmp_assign_source_108;
    }
    {
        bool tmp_condition_result_54;
        PyObject *tmp_expression_value_84;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_84 = tmp_class_creation_14__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_84, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_41;
        }
        tmp_condition_result_54 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_54 != false) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_args_value_27;
        PyObject *tmp_tuple_element_43;
        PyObject *tmp_kwargs_value_27;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_85 = tmp_class_creation_14__metaclass;
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[50]);
        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_41;
        }
        tmp_tuple_element_43 = mod_consts[94];
        tmp_args_value_27 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_43);
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_tuple_element_43 = tmp_class_creation_14__bases;
        PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_43);
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_kwargs_value_27 = tmp_class_creation_14__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 349;
        tmp_assign_source_109 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_27, tmp_kwargs_value_27);
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_value_27);
        if (tmp_assign_source_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_41;
        }
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_109;
    }
    {
        bool tmp_condition_result_55;
        PyObject *tmp_operand_value_14;
        PyObject *tmp_expression_value_86;
        CHECK_OBJECT(tmp_class_creation_14__prepared);
        tmp_expression_value_86 = tmp_class_creation_14__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_86, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_41;
        }
        tmp_operand_value_14 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
        assert(!(tmp_res == -1));
        tmp_condition_result_55 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_55 != false) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_raise_type_14;
        PyObject *tmp_raise_value_14;
        PyObject *tmp_mod_expr_left_14;
        PyObject *tmp_mod_expr_right_14;
        PyObject *tmp_tuple_element_44;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_name_value_17;
        PyObject *tmp_default_value_14;
        tmp_raise_type_14 = PyExc_TypeError;
        tmp_mod_expr_left_14 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_87 = tmp_class_creation_14__metaclass;
        tmp_name_value_17 = mod_consts[8];
        tmp_default_value_14 = mod_consts[54];
        tmp_tuple_element_44 = BUILTIN_GETATTR(tstate, tmp_expression_value_87, tmp_name_value_17, tmp_default_value_14);
        if (tmp_tuple_element_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_41;
        }
        tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_88;
            PyObject *tmp_type_arg_28;
            PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_44);
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_type_arg_28 = tmp_class_creation_14__prepared;
            tmp_expression_value_88 = BUILTIN_TYPE1(tmp_type_arg_28);
            assert(!(tmp_expression_value_88 == NULL));
            tmp_tuple_element_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[8]);
            Py_DECREF(tmp_expression_value_88);
            if (tmp_tuple_element_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_44);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_mod_expr_right_14);
        goto try_except_handler_41;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_raise_value_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
        Py_DECREF(tmp_mod_expr_right_14);
        if (tmp_raise_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_41;
        }
        exception_type = tmp_raise_type_14;
        Py_INCREF(tmp_raise_type_14);
        exception_value = tmp_raise_value_14;
        exception_lineno = 349;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_41;
    }
    branch_no_41:;
    goto branch_end_40;
    branch_no_40:;
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_110;
    }
    branch_end_40:;
    {
        PyObject *tmp_assign_source_111;
        {
            PyObject *tmp_set_locals_14;
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_set_locals_14 = tmp_class_creation_14__prepared;
            locals_pandas$errors$$$class__14_InvalidIndexError_349 = tmp_set_locals_14;
            Py_INCREF(tmp_set_locals_14);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__14_InvalidIndexError_349, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_43;
        }
        tmp_dictset_value = mod_consts[95];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__14_InvalidIndexError_349, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_43;
        }
        tmp_dictset_value = mod_consts[94];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__14_InvalidIndexError_349, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_43;
        }
        {
            nuitka_bool tmp_condition_result_56;
            PyObject *tmp_cmp_expr_left_14;
            PyObject *tmp_cmp_expr_right_14;
            CHECK_OBJECT(tmp_class_creation_14__bases);
            tmp_cmp_expr_left_14 = tmp_class_creation_14__bases;
            tmp_cmp_expr_right_14 = mod_consts[89];
            tmp_condition_result_56 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
            if (tmp_condition_result_56 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;

                goto try_except_handler_43;
            }
            if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
                goto branch_yes_42;
            } else {
                goto branch_no_42;
            }
        }
        branch_yes_42:;
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__14_InvalidIndexError_349, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_43;
        }
        branch_no_42:;
        {
            PyObject *tmp_assign_source_112;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_value_28;
            PyObject *tmp_tuple_element_45;
            PyObject *tmp_kwargs_value_28;
            CHECK_OBJECT(tmp_class_creation_14__metaclass);
            tmp_called_value_32 = tmp_class_creation_14__metaclass;
            tmp_tuple_element_45 = mod_consts[94];
            tmp_args_value_28 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_45);
            CHECK_OBJECT(tmp_class_creation_14__bases);
            tmp_tuple_element_45 = tmp_class_creation_14__bases;
            PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_45);
            tmp_tuple_element_45 = locals_pandas$errors$$$class__14_InvalidIndexError_349;
            PyTuple_SET_ITEM0(tmp_args_value_28, 2, tmp_tuple_element_45);
            CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
            tmp_kwargs_value_28 = tmp_class_creation_14__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 349;
            tmp_assign_source_112 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_28, tmp_kwargs_value_28);
            Py_DECREF(tmp_args_value_28);
            if (tmp_assign_source_112 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;

                goto try_except_handler_43;
            }
            assert(outline_13_var___class__ == NULL);
            outline_13_var___class__ = tmp_assign_source_112;
        }
        CHECK_OBJECT(outline_13_var___class__);
        tmp_assign_source_111 = outline_13_var___class__;
        Py_INCREF(tmp_assign_source_111);
        goto try_return_handler_43;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_43:;
        Py_DECREF(locals_pandas$errors$$$class__14_InvalidIndexError_349);
        locals_pandas$errors$$$class__14_InvalidIndexError_349 = NULL;
        goto try_return_handler_42;
        // Exception handler code:
        try_except_handler_43:;
        exception_keeper_type_41 = exception_type;
        exception_keeper_value_41 = exception_value;
        exception_keeper_tb_41 = exception_tb;
        exception_keeper_lineno_41 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$errors$$$class__14_InvalidIndexError_349);
        locals_pandas$errors$$$class__14_InvalidIndexError_349 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_41;
        exception_value = exception_keeper_value_41;
        exception_tb = exception_keeper_tb_41;
        exception_lineno = exception_keeper_lineno_41;

        goto try_except_handler_42;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_42:;
        CHECK_OBJECT(outline_13_var___class__);
        Py_DECREF(outline_13_var___class__);
        outline_13_var___class__ = NULL;
        goto outline_result_14;
        // Exception handler code:
        try_except_handler_42:;
        exception_keeper_type_42 = exception_type;
        exception_keeper_value_42 = exception_value;
        exception_keeper_tb_42 = exception_tb;
        exception_keeper_lineno_42 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_42;
        exception_value = exception_keeper_value_42;
        exception_tb = exception_keeper_tb_42;
        exception_lineno = exception_keeper_lineno_42;

        goto outline_exception_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_14:;
        exception_lineno = 349;
        goto try_except_handler_41;
        outline_result_14:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_111);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_keeper_lineno_43 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    Py_XDECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_43;
    exception_value = exception_keeper_value_43;
    exception_tb = exception_keeper_tb_43;
    exception_lineno = exception_keeper_lineno_43;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_class_creation_14__bases);
    Py_DECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
    Py_DECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_14__metaclass);
    Py_DECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_14__prepared);
    Py_DECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_dircall_arg1_15;
        tmp_dircall_arg1_15 = mod_consts[89];
        Py_INCREF(tmp_dircall_arg1_15);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_15};
            tmp_assign_source_113 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto try_except_handler_44;
        }
        assert(tmp_class_creation_15__bases == NULL);
        tmp_class_creation_15__bases = tmp_assign_source_113;
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_15__class_decl_dict == NULL);
        tmp_class_creation_15__class_decl_dict = tmp_assign_source_114;
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_metaclass_value_15;
        nuitka_bool tmp_condition_result_57;
        int tmp_truth_name_15;
        PyObject *tmp_type_arg_29;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_bases_value_15;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_truth_name_15 = CHECK_IF_TRUE(tmp_class_creation_15__bases);
        if (tmp_truth_name_15 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto try_except_handler_44;
        }
        tmp_condition_result_57 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_57 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_15;
        } else {
            goto condexpr_false_15;
        }
        condexpr_true_15:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_expression_value_89 = tmp_class_creation_15__bases;
        tmp_subscript_value_15 = mod_consts[40];
        tmp_type_arg_29 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_89, tmp_subscript_value_15, 0);
        if (tmp_type_arg_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto try_except_handler_44;
        }
        tmp_metaclass_value_15 = BUILTIN_TYPE1(tmp_type_arg_29);
        Py_DECREF(tmp_type_arg_29);
        if (tmp_metaclass_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto try_except_handler_44;
        }
        goto condexpr_end_15;
        condexpr_false_15:;
        tmp_metaclass_value_15 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_15);
        condexpr_end_15:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_bases_value_15 = tmp_class_creation_15__bases;
        tmp_assign_source_115 = SELECT_METACLASS(tstate, tmp_metaclass_value_15, tmp_bases_value_15);
        Py_DECREF(tmp_metaclass_value_15);
        if (tmp_assign_source_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto try_except_handler_44;
        }
        assert(tmp_class_creation_15__metaclass == NULL);
        tmp_class_creation_15__metaclass = tmp_assign_source_115;
    }
    {
        bool tmp_condition_result_58;
        PyObject *tmp_expression_value_90;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_90 = tmp_class_creation_15__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_90, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto try_except_handler_44;
        }
        tmp_condition_result_58 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_58 != false) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_args_value_29;
        PyObject *tmp_tuple_element_46;
        PyObject *tmp_kwargs_value_29;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_91 = tmp_class_creation_15__metaclass;
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[50]);
        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto try_except_handler_44;
        }
        tmp_tuple_element_46 = mod_consts[96];
        tmp_args_value_29 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_46);
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_tuple_element_46 = tmp_class_creation_15__bases;
        PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_46);
        CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
        tmp_kwargs_value_29 = tmp_class_creation_15__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 369;
        tmp_assign_source_116 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_29, tmp_kwargs_value_29);
        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_value_29);
        if (tmp_assign_source_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto try_except_handler_44;
        }
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_116;
    }
    {
        bool tmp_condition_result_59;
        PyObject *tmp_operand_value_15;
        PyObject *tmp_expression_value_92;
        CHECK_OBJECT(tmp_class_creation_15__prepared);
        tmp_expression_value_92 = tmp_class_creation_15__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_92, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto try_except_handler_44;
        }
        tmp_operand_value_15 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_59 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_59 != false) {
            goto branch_yes_44;
        } else {
            goto branch_no_44;
        }
    }
    branch_yes_44:;
    {
        PyObject *tmp_raise_type_15;
        PyObject *tmp_raise_value_15;
        PyObject *tmp_mod_expr_left_15;
        PyObject *tmp_mod_expr_right_15;
        PyObject *tmp_tuple_element_47;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_name_value_18;
        PyObject *tmp_default_value_15;
        tmp_raise_type_15 = PyExc_TypeError;
        tmp_mod_expr_left_15 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_93 = tmp_class_creation_15__metaclass;
        tmp_name_value_18 = mod_consts[8];
        tmp_default_value_15 = mod_consts[54];
        tmp_tuple_element_47 = BUILTIN_GETATTR(tstate, tmp_expression_value_93, tmp_name_value_18, tmp_default_value_15);
        if (tmp_tuple_element_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto try_except_handler_44;
        }
        tmp_mod_expr_right_15 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_94;
            PyObject *tmp_type_arg_30;
            PyTuple_SET_ITEM(tmp_mod_expr_right_15, 0, tmp_tuple_element_47);
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_type_arg_30 = tmp_class_creation_15__prepared;
            tmp_expression_value_94 = BUILTIN_TYPE1(tmp_type_arg_30);
            assert(!(tmp_expression_value_94 == NULL));
            tmp_tuple_element_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[8]);
            Py_DECREF(tmp_expression_value_94);
            if (tmp_tuple_element_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_15, 1, tmp_tuple_element_47);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_mod_expr_right_15);
        goto try_except_handler_44;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_raise_value_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
        Py_DECREF(tmp_mod_expr_right_15);
        if (tmp_raise_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto try_except_handler_44;
        }
        exception_type = tmp_raise_type_15;
        Py_INCREF(tmp_raise_type_15);
        exception_value = tmp_raise_value_15;
        exception_lineno = 369;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_44;
    }
    branch_no_44:;
    goto branch_end_43;
    branch_no_43:;
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_117;
    }
    branch_end_43:;
    {
        PyObject *tmp_assign_source_118;
        {
            PyObject *tmp_set_locals_15;
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_set_locals_15 = tmp_class_creation_15__prepared;
            locals_pandas$errors$$$class__15_DataError_369 = tmp_set_locals_15;
            Py_INCREF(tmp_set_locals_15);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__15_DataError_369, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto try_except_handler_46;
        }
        tmp_dictset_value = mod_consts[97];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__15_DataError_369, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto try_except_handler_46;
        }
        tmp_dictset_value = mod_consts[96];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__15_DataError_369, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto try_except_handler_46;
        }
        {
            nuitka_bool tmp_condition_result_60;
            PyObject *tmp_cmp_expr_left_15;
            PyObject *tmp_cmp_expr_right_15;
            CHECK_OBJECT(tmp_class_creation_15__bases);
            tmp_cmp_expr_left_15 = tmp_class_creation_15__bases;
            tmp_cmp_expr_right_15 = mod_consts[89];
            tmp_condition_result_60 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
            if (tmp_condition_result_60 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;

                goto try_except_handler_46;
            }
            if (tmp_condition_result_60 == NUITKA_BOOL_TRUE) {
                goto branch_yes_45;
            } else {
                goto branch_no_45;
            }
        }
        branch_yes_45:;
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__15_DataError_369, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto try_except_handler_46;
        }
        branch_no_45:;
        {
            PyObject *tmp_assign_source_119;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_value_30;
            PyObject *tmp_tuple_element_48;
            PyObject *tmp_kwargs_value_30;
            CHECK_OBJECT(tmp_class_creation_15__metaclass);
            tmp_called_value_34 = tmp_class_creation_15__metaclass;
            tmp_tuple_element_48 = mod_consts[96];
            tmp_args_value_30 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_48);
            CHECK_OBJECT(tmp_class_creation_15__bases);
            tmp_tuple_element_48 = tmp_class_creation_15__bases;
            PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_48);
            tmp_tuple_element_48 = locals_pandas$errors$$$class__15_DataError_369;
            PyTuple_SET_ITEM0(tmp_args_value_30, 2, tmp_tuple_element_48);
            CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
            tmp_kwargs_value_30 = tmp_class_creation_15__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 369;
            tmp_assign_source_119 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_30, tmp_kwargs_value_30);
            Py_DECREF(tmp_args_value_30);
            if (tmp_assign_source_119 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;

                goto try_except_handler_46;
            }
            assert(outline_14_var___class__ == NULL);
            outline_14_var___class__ = tmp_assign_source_119;
        }
        CHECK_OBJECT(outline_14_var___class__);
        tmp_assign_source_118 = outline_14_var___class__;
        Py_INCREF(tmp_assign_source_118);
        goto try_return_handler_46;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_46:;
        Py_DECREF(locals_pandas$errors$$$class__15_DataError_369);
        locals_pandas$errors$$$class__15_DataError_369 = NULL;
        goto try_return_handler_45;
        // Exception handler code:
        try_except_handler_46:;
        exception_keeper_type_44 = exception_type;
        exception_keeper_value_44 = exception_value;
        exception_keeper_tb_44 = exception_tb;
        exception_keeper_lineno_44 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$errors$$$class__15_DataError_369);
        locals_pandas$errors$$$class__15_DataError_369 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_44;
        exception_value = exception_keeper_value_44;
        exception_tb = exception_keeper_tb_44;
        exception_lineno = exception_keeper_lineno_44;

        goto try_except_handler_45;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_45:;
        CHECK_OBJECT(outline_14_var___class__);
        Py_DECREF(outline_14_var___class__);
        outline_14_var___class__ = NULL;
        goto outline_result_15;
        // Exception handler code:
        try_except_handler_45:;
        exception_keeper_type_45 = exception_type;
        exception_keeper_value_45 = exception_value;
        exception_keeper_tb_45 = exception_tb;
        exception_keeper_lineno_45 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_45;
        exception_value = exception_keeper_value_45;
        exception_tb = exception_keeper_tb_45;
        exception_lineno = exception_keeper_lineno_45;

        goto outline_exception_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_15:;
        exception_lineno = 369;
        goto try_except_handler_44;
        outline_result_15:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_118);
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_44:;
    exception_keeper_type_46 = exception_type;
    exception_keeper_value_46 = exception_value;
    exception_keeper_tb_46 = exception_tb;
    exception_keeper_lineno_46 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    Py_XDECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_46;
    exception_value = exception_keeper_value_46;
    exception_tb = exception_keeper_tb_46;
    exception_lineno = exception_keeper_lineno_46;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_class_creation_15__bases);
    Py_DECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
    Py_DECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_15__metaclass);
    Py_DECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_15__prepared);
    Py_DECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_dircall_arg1_16;
        tmp_dircall_arg1_16 = mod_consts[89];
        Py_INCREF(tmp_dircall_arg1_16);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_16};
            tmp_assign_source_120 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_47;
        }
        assert(tmp_class_creation_16__bases == NULL);
        tmp_class_creation_16__bases = tmp_assign_source_120;
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_16__class_decl_dict == NULL);
        tmp_class_creation_16__class_decl_dict = tmp_assign_source_121;
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_metaclass_value_16;
        nuitka_bool tmp_condition_result_61;
        int tmp_truth_name_16;
        PyObject *tmp_type_arg_31;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_bases_value_16;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_truth_name_16 = CHECK_IF_TRUE(tmp_class_creation_16__bases);
        if (tmp_truth_name_16 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_47;
        }
        tmp_condition_result_61 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_61 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_16;
        } else {
            goto condexpr_false_16;
        }
        condexpr_true_16:;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_expression_value_95 = tmp_class_creation_16__bases;
        tmp_subscript_value_16 = mod_consts[40];
        tmp_type_arg_31 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_95, tmp_subscript_value_16, 0);
        if (tmp_type_arg_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_47;
        }
        tmp_metaclass_value_16 = BUILTIN_TYPE1(tmp_type_arg_31);
        Py_DECREF(tmp_type_arg_31);
        if (tmp_metaclass_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_47;
        }
        goto condexpr_end_16;
        condexpr_false_16:;
        tmp_metaclass_value_16 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_16);
        condexpr_end_16:;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_bases_value_16 = tmp_class_creation_16__bases;
        tmp_assign_source_122 = SELECT_METACLASS(tstate, tmp_metaclass_value_16, tmp_bases_value_16);
        Py_DECREF(tmp_metaclass_value_16);
        if (tmp_assign_source_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_47;
        }
        assert(tmp_class_creation_16__metaclass == NULL);
        tmp_class_creation_16__metaclass = tmp_assign_source_122;
    }
    {
        bool tmp_condition_result_62;
        PyObject *tmp_expression_value_96;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_96 = tmp_class_creation_16__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_96, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_47;
        }
        tmp_condition_result_62 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_62 != false) {
            goto branch_yes_46;
        } else {
            goto branch_no_46;
        }
    }
    branch_yes_46:;
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_args_value_31;
        PyObject *tmp_tuple_element_49;
        PyObject *tmp_kwargs_value_31;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_97 = tmp_class_creation_16__metaclass;
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[50]);
        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_47;
        }
        tmp_tuple_element_49 = mod_consts[98];
        tmp_args_value_31 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_49);
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_tuple_element_49 = tmp_class_creation_16__bases;
        PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_49);
        CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
        tmp_kwargs_value_31 = tmp_class_creation_16__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 385;
        tmp_assign_source_123 = CALL_FUNCTION(tstate, tmp_called_value_35, tmp_args_value_31, tmp_kwargs_value_31);
        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_args_value_31);
        if (tmp_assign_source_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_47;
        }
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_123;
    }
    {
        bool tmp_condition_result_63;
        PyObject *tmp_operand_value_16;
        PyObject *tmp_expression_value_98;
        CHECK_OBJECT(tmp_class_creation_16__prepared);
        tmp_expression_value_98 = tmp_class_creation_16__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_98, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_47;
        }
        tmp_operand_value_16 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_63 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_63 != false) {
            goto branch_yes_47;
        } else {
            goto branch_no_47;
        }
    }
    branch_yes_47:;
    {
        PyObject *tmp_raise_type_16;
        PyObject *tmp_raise_value_16;
        PyObject *tmp_mod_expr_left_16;
        PyObject *tmp_mod_expr_right_16;
        PyObject *tmp_tuple_element_50;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_name_value_19;
        PyObject *tmp_default_value_16;
        tmp_raise_type_16 = PyExc_TypeError;
        tmp_mod_expr_left_16 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_99 = tmp_class_creation_16__metaclass;
        tmp_name_value_19 = mod_consts[8];
        tmp_default_value_16 = mod_consts[54];
        tmp_tuple_element_50 = BUILTIN_GETATTR(tstate, tmp_expression_value_99, tmp_name_value_19, tmp_default_value_16);
        if (tmp_tuple_element_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_47;
        }
        tmp_mod_expr_right_16 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_100;
            PyObject *tmp_type_arg_32;
            PyTuple_SET_ITEM(tmp_mod_expr_right_16, 0, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_type_arg_32 = tmp_class_creation_16__prepared;
            tmp_expression_value_100 = BUILTIN_TYPE1(tmp_type_arg_32);
            assert(!(tmp_expression_value_100 == NULL));
            tmp_tuple_element_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[8]);
            Py_DECREF(tmp_expression_value_100);
            if (tmp_tuple_element_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_16, 1, tmp_tuple_element_50);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_mod_expr_right_16);
        goto try_except_handler_47;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_raise_value_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
        Py_DECREF(tmp_mod_expr_right_16);
        if (tmp_raise_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_47;
        }
        exception_type = tmp_raise_type_16;
        Py_INCREF(tmp_raise_type_16);
        exception_value = tmp_raise_value_16;
        exception_lineno = 385;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_47;
    }
    branch_no_47:;
    goto branch_end_46;
    branch_no_46:;
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_124;
    }
    branch_end_46:;
    {
        PyObject *tmp_assign_source_125;
        {
            PyObject *tmp_set_locals_16;
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_set_locals_16 = tmp_class_creation_16__prepared;
            locals_pandas$errors$$$class__16_SpecificationError_385 = tmp_set_locals_16;
            Py_INCREF(tmp_set_locals_16);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__16_SpecificationError_385, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_49;
        }
        tmp_dictset_value = mod_consts[99];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__16_SpecificationError_385, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_49;
        }
        tmp_dictset_value = mod_consts[98];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__16_SpecificationError_385, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_49;
        }
        {
            nuitka_bool tmp_condition_result_64;
            PyObject *tmp_cmp_expr_left_16;
            PyObject *tmp_cmp_expr_right_16;
            CHECK_OBJECT(tmp_class_creation_16__bases);
            tmp_cmp_expr_left_16 = tmp_class_creation_16__bases;
            tmp_cmp_expr_right_16 = mod_consts[89];
            tmp_condition_result_64 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
            if (tmp_condition_result_64 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;

                goto try_except_handler_49;
            }
            if (tmp_condition_result_64 == NUITKA_BOOL_TRUE) {
                goto branch_yes_48;
            } else {
                goto branch_no_48;
            }
        }
        branch_yes_48:;
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__16_SpecificationError_385, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_49;
        }
        branch_no_48:;
        {
            PyObject *tmp_assign_source_126;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_value_32;
            PyObject *tmp_tuple_element_51;
            PyObject *tmp_kwargs_value_32;
            CHECK_OBJECT(tmp_class_creation_16__metaclass);
            tmp_called_value_36 = tmp_class_creation_16__metaclass;
            tmp_tuple_element_51 = mod_consts[98];
            tmp_args_value_32 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_class_creation_16__bases);
            tmp_tuple_element_51 = tmp_class_creation_16__bases;
            PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_51);
            tmp_tuple_element_51 = locals_pandas$errors$$$class__16_SpecificationError_385;
            PyTuple_SET_ITEM0(tmp_args_value_32, 2, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
            tmp_kwargs_value_32 = tmp_class_creation_16__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 385;
            tmp_assign_source_126 = CALL_FUNCTION(tstate, tmp_called_value_36, tmp_args_value_32, tmp_kwargs_value_32);
            Py_DECREF(tmp_args_value_32);
            if (tmp_assign_source_126 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;

                goto try_except_handler_49;
            }
            assert(outline_15_var___class__ == NULL);
            outline_15_var___class__ = tmp_assign_source_126;
        }
        CHECK_OBJECT(outline_15_var___class__);
        tmp_assign_source_125 = outline_15_var___class__;
        Py_INCREF(tmp_assign_source_125);
        goto try_return_handler_49;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_49:;
        Py_DECREF(locals_pandas$errors$$$class__16_SpecificationError_385);
        locals_pandas$errors$$$class__16_SpecificationError_385 = NULL;
        goto try_return_handler_48;
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

        Py_DECREF(locals_pandas$errors$$$class__16_SpecificationError_385);
        locals_pandas$errors$$$class__16_SpecificationError_385 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_47;
        exception_value = exception_keeper_value_47;
        exception_tb = exception_keeper_tb_47;
        exception_lineno = exception_keeper_lineno_47;

        goto try_except_handler_48;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_48:;
        CHECK_OBJECT(outline_15_var___class__);
        Py_DECREF(outline_15_var___class__);
        outline_15_var___class__ = NULL;
        goto outline_result_16;
        // Exception handler code:
        try_except_handler_48:;
        exception_keeper_type_48 = exception_type;
        exception_keeper_value_48 = exception_value;
        exception_keeper_tb_48 = exception_tb;
        exception_keeper_lineno_48 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_48;
        exception_value = exception_keeper_value_48;
        exception_tb = exception_keeper_tb_48;
        exception_lineno = exception_keeper_lineno_48;

        goto outline_exception_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_16:;
        exception_lineno = 385;
        goto try_except_handler_47;
        outline_result_16:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_125);
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_47:;
    exception_keeper_type_49 = exception_type;
    exception_keeper_value_49 = exception_value;
    exception_keeper_tb_49 = exception_tb;
    exception_keeper_lineno_49 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_16__bases);
    tmp_class_creation_16__bases = NULL;
    Py_XDECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_49;
    exception_value = exception_keeper_value_49;
    exception_tb = exception_keeper_tb_49;
    exception_lineno = exception_keeper_lineno_49;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_class_creation_16__bases);
    Py_DECREF(tmp_class_creation_16__bases);
    tmp_class_creation_16__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
    Py_DECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_16__metaclass);
    Py_DECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_16__prepared);
    Py_DECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_dircall_arg1_17;
        tmp_dircall_arg1_17 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_17);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_17};
            tmp_assign_source_127 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_50;
        }
        assert(tmp_class_creation_17__bases == NULL);
        tmp_class_creation_17__bases = tmp_assign_source_127;
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_17__class_decl_dict == NULL);
        tmp_class_creation_17__class_decl_dict = tmp_assign_source_128;
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_metaclass_value_17;
        nuitka_bool tmp_condition_result_65;
        int tmp_truth_name_17;
        PyObject *tmp_type_arg_33;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_bases_value_17;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_truth_name_17 = CHECK_IF_TRUE(tmp_class_creation_17__bases);
        if (tmp_truth_name_17 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_50;
        }
        tmp_condition_result_65 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_65 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_17;
        } else {
            goto condexpr_false_17;
        }
        condexpr_true_17:;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_expression_value_101 = tmp_class_creation_17__bases;
        tmp_subscript_value_17 = mod_consts[40];
        tmp_type_arg_33 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_101, tmp_subscript_value_17, 0);
        if (tmp_type_arg_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_50;
        }
        tmp_metaclass_value_17 = BUILTIN_TYPE1(tmp_type_arg_33);
        Py_DECREF(tmp_type_arg_33);
        if (tmp_metaclass_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_50;
        }
        goto condexpr_end_17;
        condexpr_false_17:;
        tmp_metaclass_value_17 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_17);
        condexpr_end_17:;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_bases_value_17 = tmp_class_creation_17__bases;
        tmp_assign_source_129 = SELECT_METACLASS(tstate, tmp_metaclass_value_17, tmp_bases_value_17);
        Py_DECREF(tmp_metaclass_value_17);
        if (tmp_assign_source_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_50;
        }
        assert(tmp_class_creation_17__metaclass == NULL);
        tmp_class_creation_17__metaclass = tmp_assign_source_129;
    }
    {
        bool tmp_condition_result_66;
        PyObject *tmp_expression_value_102;
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_102 = tmp_class_creation_17__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_102, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_50;
        }
        tmp_condition_result_66 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_66 != false) {
            goto branch_yes_49;
        } else {
            goto branch_no_49;
        }
    }
    branch_yes_49:;
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_args_value_33;
        PyObject *tmp_tuple_element_52;
        PyObject *tmp_kwargs_value_33;
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_103 = tmp_class_creation_17__metaclass;
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[50]);
        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_50;
        }
        tmp_tuple_element_52 = mod_consts[100];
        tmp_args_value_33 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_33, 0, tmp_tuple_element_52);
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_tuple_element_52 = tmp_class_creation_17__bases;
        PyTuple_SET_ITEM0(tmp_args_value_33, 1, tmp_tuple_element_52);
        CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
        tmp_kwargs_value_33 = tmp_class_creation_17__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 413;
        tmp_assign_source_130 = CALL_FUNCTION(tstate, tmp_called_value_37, tmp_args_value_33, tmp_kwargs_value_33);
        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_args_value_33);
        if (tmp_assign_source_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_50;
        }
        assert(tmp_class_creation_17__prepared == NULL);
        tmp_class_creation_17__prepared = tmp_assign_source_130;
    }
    {
        bool tmp_condition_result_67;
        PyObject *tmp_operand_value_17;
        PyObject *tmp_expression_value_104;
        CHECK_OBJECT(tmp_class_creation_17__prepared);
        tmp_expression_value_104 = tmp_class_creation_17__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_104, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_50;
        }
        tmp_operand_value_17 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_17);
        assert(!(tmp_res == -1));
        tmp_condition_result_67 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_67 != false) {
            goto branch_yes_50;
        } else {
            goto branch_no_50;
        }
    }
    branch_yes_50:;
    {
        PyObject *tmp_raise_type_17;
        PyObject *tmp_raise_value_17;
        PyObject *tmp_mod_expr_left_17;
        PyObject *tmp_mod_expr_right_17;
        PyObject *tmp_tuple_element_53;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_name_value_20;
        PyObject *tmp_default_value_17;
        tmp_raise_type_17 = PyExc_TypeError;
        tmp_mod_expr_left_17 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_105 = tmp_class_creation_17__metaclass;
        tmp_name_value_20 = mod_consts[8];
        tmp_default_value_17 = mod_consts[54];
        tmp_tuple_element_53 = BUILTIN_GETATTR(tstate, tmp_expression_value_105, tmp_name_value_20, tmp_default_value_17);
        if (tmp_tuple_element_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_50;
        }
        tmp_mod_expr_right_17 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_106;
            PyObject *tmp_type_arg_34;
            PyTuple_SET_ITEM(tmp_mod_expr_right_17, 0, tmp_tuple_element_53);
            CHECK_OBJECT(tmp_class_creation_17__prepared);
            tmp_type_arg_34 = tmp_class_creation_17__prepared;
            tmp_expression_value_106 = BUILTIN_TYPE1(tmp_type_arg_34);
            assert(!(tmp_expression_value_106 == NULL));
            tmp_tuple_element_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts[8]);
            Py_DECREF(tmp_expression_value_106);
            if (tmp_tuple_element_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 413;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_17, 1, tmp_tuple_element_53);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_mod_expr_right_17);
        goto try_except_handler_50;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_raise_value_17 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_17, tmp_mod_expr_right_17);
        Py_DECREF(tmp_mod_expr_right_17);
        if (tmp_raise_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_50;
        }
        exception_type = tmp_raise_type_17;
        Py_INCREF(tmp_raise_type_17);
        exception_value = tmp_raise_value_17;
        exception_lineno = 413;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_50;
    }
    branch_no_50:;
    goto branch_end_49;
    branch_no_49:;
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_17__prepared == NULL);
        tmp_class_creation_17__prepared = tmp_assign_source_131;
    }
    branch_end_49:;
    {
        PyObject *tmp_assign_source_132;
        {
            PyObject *tmp_set_locals_17;
            CHECK_OBJECT(tmp_class_creation_17__prepared);
            tmp_set_locals_17 = tmp_class_creation_17__prepared;
            locals_pandas$errors$$$class__17_SettingWithCopyError_413 = tmp_set_locals_17;
            Py_INCREF(tmp_set_locals_17);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__17_SettingWithCopyError_413, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_52;
        }
        tmp_dictset_value = mod_consts[101];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__17_SettingWithCopyError_413, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_52;
        }
        tmp_dictset_value = mod_consts[100];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__17_SettingWithCopyError_413, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_52;
        }
        {
            nuitka_bool tmp_condition_result_68;
            PyObject *tmp_cmp_expr_left_17;
            PyObject *tmp_cmp_expr_right_17;
            CHECK_OBJECT(tmp_class_creation_17__bases);
            tmp_cmp_expr_left_17 = tmp_class_creation_17__bases;
            tmp_cmp_expr_right_17 = mod_consts[49];
            tmp_condition_result_68 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
            if (tmp_condition_result_68 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 413;

                goto try_except_handler_52;
            }
            if (tmp_condition_result_68 == NUITKA_BOOL_TRUE) {
                goto branch_yes_51;
            } else {
                goto branch_no_51;
            }
        }
        branch_yes_51:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__17_SettingWithCopyError_413, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_52;
        }
        branch_no_51:;
        {
            PyObject *tmp_assign_source_133;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_value_34;
            PyObject *tmp_tuple_element_54;
            PyObject *tmp_kwargs_value_34;
            CHECK_OBJECT(tmp_class_creation_17__metaclass);
            tmp_called_value_38 = tmp_class_creation_17__metaclass;
            tmp_tuple_element_54 = mod_consts[100];
            tmp_args_value_34 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_34, 0, tmp_tuple_element_54);
            CHECK_OBJECT(tmp_class_creation_17__bases);
            tmp_tuple_element_54 = tmp_class_creation_17__bases;
            PyTuple_SET_ITEM0(tmp_args_value_34, 1, tmp_tuple_element_54);
            tmp_tuple_element_54 = locals_pandas$errors$$$class__17_SettingWithCopyError_413;
            PyTuple_SET_ITEM0(tmp_args_value_34, 2, tmp_tuple_element_54);
            CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
            tmp_kwargs_value_34 = tmp_class_creation_17__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 413;
            tmp_assign_source_133 = CALL_FUNCTION(tstate, tmp_called_value_38, tmp_args_value_34, tmp_kwargs_value_34);
            Py_DECREF(tmp_args_value_34);
            if (tmp_assign_source_133 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 413;

                goto try_except_handler_52;
            }
            assert(outline_16_var___class__ == NULL);
            outline_16_var___class__ = tmp_assign_source_133;
        }
        CHECK_OBJECT(outline_16_var___class__);
        tmp_assign_source_132 = outline_16_var___class__;
        Py_INCREF(tmp_assign_source_132);
        goto try_return_handler_52;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_52:;
        Py_DECREF(locals_pandas$errors$$$class__17_SettingWithCopyError_413);
        locals_pandas$errors$$$class__17_SettingWithCopyError_413 = NULL;
        goto try_return_handler_51;
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

        Py_DECREF(locals_pandas$errors$$$class__17_SettingWithCopyError_413);
        locals_pandas$errors$$$class__17_SettingWithCopyError_413 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_50;
        exception_value = exception_keeper_value_50;
        exception_tb = exception_keeper_tb_50;
        exception_lineno = exception_keeper_lineno_50;

        goto try_except_handler_51;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_51:;
        CHECK_OBJECT(outline_16_var___class__);
        Py_DECREF(outline_16_var___class__);
        outline_16_var___class__ = NULL;
        goto outline_result_17;
        // Exception handler code:
        try_except_handler_51:;
        exception_keeper_type_51 = exception_type;
        exception_keeper_value_51 = exception_value;
        exception_keeper_tb_51 = exception_tb;
        exception_keeper_lineno_51 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_51;
        exception_value = exception_keeper_value_51;
        exception_tb = exception_keeper_tb_51;
        exception_lineno = exception_keeper_lineno_51;

        goto outline_exception_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_17:;
        exception_lineno = 413;
        goto try_except_handler_50;
        outline_result_17:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_132);
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_50:;
    exception_keeper_type_52 = exception_type;
    exception_keeper_value_52 = exception_value;
    exception_keeper_tb_52 = exception_tb;
    exception_keeper_lineno_52 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_17__bases);
    tmp_class_creation_17__bases = NULL;
    Py_XDECREF(tmp_class_creation_17__class_decl_dict);
    tmp_class_creation_17__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_17__metaclass);
    tmp_class_creation_17__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_17__prepared);
    tmp_class_creation_17__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_52;
    exception_value = exception_keeper_value_52;
    exception_tb = exception_keeper_tb_52;
    exception_lineno = exception_keeper_lineno_52;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_class_creation_17__bases);
    Py_DECREF(tmp_class_creation_17__bases);
    tmp_class_creation_17__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
    Py_DECREF(tmp_class_creation_17__class_decl_dict);
    tmp_class_creation_17__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_17__metaclass);
    Py_DECREF(tmp_class_creation_17__metaclass);
    tmp_class_creation_17__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_17__prepared);
    Py_DECREF(tmp_class_creation_17__prepared);
    tmp_class_creation_17__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_tuple_element_55;
        tmp_tuple_element_55 = GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_tuple_element_55 == NULL)) {
            tmp_tuple_element_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_tuple_element_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_53;
        }
        tmp_assign_source_134 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_134, 0, tmp_tuple_element_55);
        assert(tmp_class_creation_18__bases_orig == NULL);
        tmp_class_creation_18__bases_orig = tmp_assign_source_134;
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_dircall_arg1_18;
        CHECK_OBJECT(tmp_class_creation_18__bases_orig);
        tmp_dircall_arg1_18 = tmp_class_creation_18__bases_orig;
        Py_INCREF(tmp_dircall_arg1_18);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_18};
            tmp_assign_source_135 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_53;
        }
        assert(tmp_class_creation_18__bases == NULL);
        tmp_class_creation_18__bases = tmp_assign_source_135;
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_18__class_decl_dict == NULL);
        tmp_class_creation_18__class_decl_dict = tmp_assign_source_136;
    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_metaclass_value_18;
        nuitka_bool tmp_condition_result_69;
        int tmp_truth_name_18;
        PyObject *tmp_type_arg_35;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_bases_value_18;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_truth_name_18 = CHECK_IF_TRUE(tmp_class_creation_18__bases);
        if (tmp_truth_name_18 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_53;
        }
        tmp_condition_result_69 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_69 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_18;
        } else {
            goto condexpr_false_18;
        }
        condexpr_true_18:;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_expression_value_107 = tmp_class_creation_18__bases;
        tmp_subscript_value_18 = mod_consts[40];
        tmp_type_arg_35 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_107, tmp_subscript_value_18, 0);
        if (tmp_type_arg_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_53;
        }
        tmp_metaclass_value_18 = BUILTIN_TYPE1(tmp_type_arg_35);
        Py_DECREF(tmp_type_arg_35);
        if (tmp_metaclass_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_53;
        }
        goto condexpr_end_18;
        condexpr_false_18:;
        tmp_metaclass_value_18 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_18);
        condexpr_end_18:;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_bases_value_18 = tmp_class_creation_18__bases;
        tmp_assign_source_137 = SELECT_METACLASS(tstate, tmp_metaclass_value_18, tmp_bases_value_18);
        Py_DECREF(tmp_metaclass_value_18);
        if (tmp_assign_source_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_53;
        }
        assert(tmp_class_creation_18__metaclass == NULL);
        tmp_class_creation_18__metaclass = tmp_assign_source_137;
    }
    {
        bool tmp_condition_result_70;
        PyObject *tmp_expression_value_108;
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_value_108 = tmp_class_creation_18__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_108, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_53;
        }
        tmp_condition_result_70 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_70 != false) {
            goto branch_yes_52;
        } else {
            goto branch_no_52;
        }
    }
    branch_yes_52:;
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_args_value_35;
        PyObject *tmp_tuple_element_56;
        PyObject *tmp_kwargs_value_35;
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_value_109 = tmp_class_creation_18__metaclass;
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[50]);
        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_53;
        }
        tmp_tuple_element_56 = mod_consts[102];
        tmp_args_value_35 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_35, 0, tmp_tuple_element_56);
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_tuple_element_56 = tmp_class_creation_18__bases;
        PyTuple_SET_ITEM0(tmp_args_value_35, 1, tmp_tuple_element_56);
        CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
        tmp_kwargs_value_35 = tmp_class_creation_18__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 435;
        tmp_assign_source_138 = CALL_FUNCTION(tstate, tmp_called_value_39, tmp_args_value_35, tmp_kwargs_value_35);
        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_args_value_35);
        if (tmp_assign_source_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_53;
        }
        assert(tmp_class_creation_18__prepared == NULL);
        tmp_class_creation_18__prepared = tmp_assign_source_138;
    }
    {
        bool tmp_condition_result_71;
        PyObject *tmp_operand_value_18;
        PyObject *tmp_expression_value_110;
        CHECK_OBJECT(tmp_class_creation_18__prepared);
        tmp_expression_value_110 = tmp_class_creation_18__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_110, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_53;
        }
        tmp_operand_value_18 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_71 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_71 != false) {
            goto branch_yes_53;
        } else {
            goto branch_no_53;
        }
    }
    branch_yes_53:;
    {
        PyObject *tmp_raise_type_18;
        PyObject *tmp_raise_value_18;
        PyObject *tmp_mod_expr_left_18;
        PyObject *tmp_mod_expr_right_18;
        PyObject *tmp_tuple_element_57;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_name_value_21;
        PyObject *tmp_default_value_18;
        tmp_raise_type_18 = PyExc_TypeError;
        tmp_mod_expr_left_18 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_value_111 = tmp_class_creation_18__metaclass;
        tmp_name_value_21 = mod_consts[8];
        tmp_default_value_18 = mod_consts[54];
        tmp_tuple_element_57 = BUILTIN_GETATTR(tstate, tmp_expression_value_111, tmp_name_value_21, tmp_default_value_18);
        if (tmp_tuple_element_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_53;
        }
        tmp_mod_expr_right_18 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_112;
            PyObject *tmp_type_arg_36;
            PyTuple_SET_ITEM(tmp_mod_expr_right_18, 0, tmp_tuple_element_57);
            CHECK_OBJECT(tmp_class_creation_18__prepared);
            tmp_type_arg_36 = tmp_class_creation_18__prepared;
            tmp_expression_value_112 = BUILTIN_TYPE1(tmp_type_arg_36);
            assert(!(tmp_expression_value_112 == NULL));
            tmp_tuple_element_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts[8]);
            Py_DECREF(tmp_expression_value_112);
            if (tmp_tuple_element_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 435;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_18, 1, tmp_tuple_element_57);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_mod_expr_right_18);
        goto try_except_handler_53;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_raise_value_18 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_18, tmp_mod_expr_right_18);
        Py_DECREF(tmp_mod_expr_right_18);
        if (tmp_raise_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_53;
        }
        exception_type = tmp_raise_type_18;
        Py_INCREF(tmp_raise_type_18);
        exception_value = tmp_raise_value_18;
        exception_lineno = 435;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_53;
    }
    branch_no_53:;
    goto branch_end_52;
    branch_no_52:;
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_18__prepared == NULL);
        tmp_class_creation_18__prepared = tmp_assign_source_139;
    }
    branch_end_52:;
    {
        PyObject *tmp_assign_source_140;
        {
            PyObject *tmp_set_locals_18;
            CHECK_OBJECT(tmp_class_creation_18__prepared);
            tmp_set_locals_18 = tmp_class_creation_18__prepared;
            locals_pandas$errors$$$class__18_SettingWithCopyWarning_435 = tmp_set_locals_18;
            Py_INCREF(tmp_set_locals_18);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__18_SettingWithCopyWarning_435, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_55;
        }
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__18_SettingWithCopyWarning_435, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_55;
        }
        tmp_dictset_value = mod_consts[102];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__18_SettingWithCopyWarning_435, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_55;
        }
        {
            nuitka_bool tmp_condition_result_72;
            PyObject *tmp_cmp_expr_left_18;
            PyObject *tmp_cmp_expr_right_18;
            CHECK_OBJECT(tmp_class_creation_18__bases);
            tmp_cmp_expr_left_18 = tmp_class_creation_18__bases;
            CHECK_OBJECT(tmp_class_creation_18__bases_orig);
            tmp_cmp_expr_right_18 = tmp_class_creation_18__bases_orig;
            tmp_condition_result_72 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
            if (tmp_condition_result_72 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 435;

                goto try_except_handler_55;
            }
            if (tmp_condition_result_72 == NUITKA_BOOL_TRUE) {
                goto branch_yes_54;
            } else {
                goto branch_no_54;
            }
        }
        branch_yes_54:;
        CHECK_OBJECT(tmp_class_creation_18__bases_orig);
        tmp_dictset_value = tmp_class_creation_18__bases_orig;
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__18_SettingWithCopyWarning_435, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_55;
        }
        branch_no_54:;
        {
            PyObject *tmp_assign_source_141;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_value_36;
            PyObject *tmp_tuple_element_58;
            PyObject *tmp_kwargs_value_36;
            CHECK_OBJECT(tmp_class_creation_18__metaclass);
            tmp_called_value_40 = tmp_class_creation_18__metaclass;
            tmp_tuple_element_58 = mod_consts[102];
            tmp_args_value_36 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_36, 0, tmp_tuple_element_58);
            CHECK_OBJECT(tmp_class_creation_18__bases);
            tmp_tuple_element_58 = tmp_class_creation_18__bases;
            PyTuple_SET_ITEM0(tmp_args_value_36, 1, tmp_tuple_element_58);
            tmp_tuple_element_58 = locals_pandas$errors$$$class__18_SettingWithCopyWarning_435;
            PyTuple_SET_ITEM0(tmp_args_value_36, 2, tmp_tuple_element_58);
            CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
            tmp_kwargs_value_36 = tmp_class_creation_18__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 435;
            tmp_assign_source_141 = CALL_FUNCTION(tstate, tmp_called_value_40, tmp_args_value_36, tmp_kwargs_value_36);
            Py_DECREF(tmp_args_value_36);
            if (tmp_assign_source_141 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 435;

                goto try_except_handler_55;
            }
            assert(outline_17_var___class__ == NULL);
            outline_17_var___class__ = tmp_assign_source_141;
        }
        CHECK_OBJECT(outline_17_var___class__);
        tmp_assign_source_140 = outline_17_var___class__;
        Py_INCREF(tmp_assign_source_140);
        goto try_return_handler_55;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_55:;
        Py_DECREF(locals_pandas$errors$$$class__18_SettingWithCopyWarning_435);
        locals_pandas$errors$$$class__18_SettingWithCopyWarning_435 = NULL;
        goto try_return_handler_54;
        // Exception handler code:
        try_except_handler_55:;
        exception_keeper_type_53 = exception_type;
        exception_keeper_value_53 = exception_value;
        exception_keeper_tb_53 = exception_tb;
        exception_keeper_lineno_53 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$errors$$$class__18_SettingWithCopyWarning_435);
        locals_pandas$errors$$$class__18_SettingWithCopyWarning_435 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_53;
        exception_value = exception_keeper_value_53;
        exception_tb = exception_keeper_tb_53;
        exception_lineno = exception_keeper_lineno_53;

        goto try_except_handler_54;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_54:;
        CHECK_OBJECT(outline_17_var___class__);
        Py_DECREF(outline_17_var___class__);
        outline_17_var___class__ = NULL;
        goto outline_result_18;
        // Exception handler code:
        try_except_handler_54:;
        exception_keeper_type_54 = exception_type;
        exception_keeper_value_54 = exception_value;
        exception_keeper_tb_54 = exception_tb;
        exception_keeper_lineno_54 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_54;
        exception_value = exception_keeper_value_54;
        exception_tb = exception_keeper_tb_54;
        exception_lineno = exception_keeper_lineno_54;

        goto outline_exception_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_18:;
        exception_lineno = 435;
        goto try_except_handler_53;
        outline_result_18:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_140);
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_53:;
    exception_keeper_type_55 = exception_type;
    exception_keeper_value_55 = exception_value;
    exception_keeper_tb_55 = exception_tb;
    exception_keeper_lineno_55 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_18__bases_orig);
    tmp_class_creation_18__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_18__bases);
    tmp_class_creation_18__bases = NULL;
    Py_XDECREF(tmp_class_creation_18__class_decl_dict);
    tmp_class_creation_18__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_18__metaclass);
    tmp_class_creation_18__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_18__prepared);
    tmp_class_creation_18__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_55;
    exception_value = exception_keeper_value_55;
    exception_tb = exception_keeper_tb_55;
    exception_lineno = exception_keeper_lineno_55;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    CHECK_OBJECT(tmp_class_creation_18__bases_orig);
    Py_DECREF(tmp_class_creation_18__bases_orig);
    tmp_class_creation_18__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_18__bases);
    Py_DECREF(tmp_class_creation_18__bases);
    tmp_class_creation_18__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
    Py_DECREF(tmp_class_creation_18__class_decl_dict);
    tmp_class_creation_18__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_18__metaclass);
    Py_DECREF(tmp_class_creation_18__metaclass);
    tmp_class_creation_18__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_18__prepared);
    Py_DECREF(tmp_class_creation_18__prepared);
    tmp_class_creation_18__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_tuple_element_59;
        tmp_tuple_element_59 = GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_tuple_element_59 == NULL)) {
            tmp_tuple_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_tuple_element_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto try_except_handler_56;
        }
        tmp_assign_source_142 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_142, 0, tmp_tuple_element_59);
        assert(tmp_class_creation_19__bases_orig == NULL);
        tmp_class_creation_19__bases_orig = tmp_assign_source_142;
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_dircall_arg1_19;
        CHECK_OBJECT(tmp_class_creation_19__bases_orig);
        tmp_dircall_arg1_19 = tmp_class_creation_19__bases_orig;
        Py_INCREF(tmp_dircall_arg1_19);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_19};
            tmp_assign_source_143 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto try_except_handler_56;
        }
        assert(tmp_class_creation_19__bases == NULL);
        tmp_class_creation_19__bases = tmp_assign_source_143;
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_19__class_decl_dict == NULL);
        tmp_class_creation_19__class_decl_dict = tmp_assign_source_144;
    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_metaclass_value_19;
        nuitka_bool tmp_condition_result_73;
        int tmp_truth_name_19;
        PyObject *tmp_type_arg_37;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_bases_value_19;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_truth_name_19 = CHECK_IF_TRUE(tmp_class_creation_19__bases);
        if (tmp_truth_name_19 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto try_except_handler_56;
        }
        tmp_condition_result_73 = tmp_truth_name_19 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_73 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_19;
        } else {
            goto condexpr_false_19;
        }
        condexpr_true_19:;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_expression_value_113 = tmp_class_creation_19__bases;
        tmp_subscript_value_19 = mod_consts[40];
        tmp_type_arg_37 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_113, tmp_subscript_value_19, 0);
        if (tmp_type_arg_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto try_except_handler_56;
        }
        tmp_metaclass_value_19 = BUILTIN_TYPE1(tmp_type_arg_37);
        Py_DECREF(tmp_type_arg_37);
        if (tmp_metaclass_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto try_except_handler_56;
        }
        goto condexpr_end_19;
        condexpr_false_19:;
        tmp_metaclass_value_19 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_19);
        condexpr_end_19:;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_bases_value_19 = tmp_class_creation_19__bases;
        tmp_assign_source_145 = SELECT_METACLASS(tstate, tmp_metaclass_value_19, tmp_bases_value_19);
        Py_DECREF(tmp_metaclass_value_19);
        if (tmp_assign_source_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto try_except_handler_56;
        }
        assert(tmp_class_creation_19__metaclass == NULL);
        tmp_class_creation_19__metaclass = tmp_assign_source_145;
    }
    {
        bool tmp_condition_result_74;
        PyObject *tmp_expression_value_114;
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_value_114 = tmp_class_creation_19__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_114, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto try_except_handler_56;
        }
        tmp_condition_result_74 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_74 != false) {
            goto branch_yes_55;
        } else {
            goto branch_no_55;
        }
    }
    branch_yes_55:;
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_args_value_37;
        PyObject *tmp_tuple_element_60;
        PyObject *tmp_kwargs_value_37;
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_value_115 = tmp_class_creation_19__metaclass;
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts[50]);
        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto try_except_handler_56;
        }
        tmp_tuple_element_60 = mod_consts[104];
        tmp_args_value_37 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_37, 0, tmp_tuple_element_60);
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_tuple_element_60 = tmp_class_creation_19__bases;
        PyTuple_SET_ITEM0(tmp_args_value_37, 1, tmp_tuple_element_60);
        CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
        tmp_kwargs_value_37 = tmp_class_creation_19__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 457;
        tmp_assign_source_146 = CALL_FUNCTION(tstate, tmp_called_value_41, tmp_args_value_37, tmp_kwargs_value_37);
        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_value_37);
        if (tmp_assign_source_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto try_except_handler_56;
        }
        assert(tmp_class_creation_19__prepared == NULL);
        tmp_class_creation_19__prepared = tmp_assign_source_146;
    }
    {
        bool tmp_condition_result_75;
        PyObject *tmp_operand_value_19;
        PyObject *tmp_expression_value_116;
        CHECK_OBJECT(tmp_class_creation_19__prepared);
        tmp_expression_value_116 = tmp_class_creation_19__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_116, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto try_except_handler_56;
        }
        tmp_operand_value_19 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_75 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_75 != false) {
            goto branch_yes_56;
        } else {
            goto branch_no_56;
        }
    }
    branch_yes_56:;
    {
        PyObject *tmp_raise_type_19;
        PyObject *tmp_raise_value_19;
        PyObject *tmp_mod_expr_left_19;
        PyObject *tmp_mod_expr_right_19;
        PyObject *tmp_tuple_element_61;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_name_value_22;
        PyObject *tmp_default_value_19;
        tmp_raise_type_19 = PyExc_TypeError;
        tmp_mod_expr_left_19 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_value_117 = tmp_class_creation_19__metaclass;
        tmp_name_value_22 = mod_consts[8];
        tmp_default_value_19 = mod_consts[54];
        tmp_tuple_element_61 = BUILTIN_GETATTR(tstate, tmp_expression_value_117, tmp_name_value_22, tmp_default_value_19);
        if (tmp_tuple_element_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto try_except_handler_56;
        }
        tmp_mod_expr_right_19 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_118;
            PyObject *tmp_type_arg_38;
            PyTuple_SET_ITEM(tmp_mod_expr_right_19, 0, tmp_tuple_element_61);
            CHECK_OBJECT(tmp_class_creation_19__prepared);
            tmp_type_arg_38 = tmp_class_creation_19__prepared;
            tmp_expression_value_118 = BUILTIN_TYPE1(tmp_type_arg_38);
            assert(!(tmp_expression_value_118 == NULL));
            tmp_tuple_element_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts[8]);
            Py_DECREF(tmp_expression_value_118);
            if (tmp_tuple_element_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 457;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_19, 1, tmp_tuple_element_61);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_mod_expr_right_19);
        goto try_except_handler_56;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_raise_value_19 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_19, tmp_mod_expr_right_19);
        Py_DECREF(tmp_mod_expr_right_19);
        if (tmp_raise_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto try_except_handler_56;
        }
        exception_type = tmp_raise_type_19;
        Py_INCREF(tmp_raise_type_19);
        exception_value = tmp_raise_value_19;
        exception_lineno = 457;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_56;
    }
    branch_no_56:;
    goto branch_end_55;
    branch_no_55:;
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_19__prepared == NULL);
        tmp_class_creation_19__prepared = tmp_assign_source_147;
    }
    branch_end_55:;
    {
        PyObject *tmp_assign_source_148;
        {
            PyObject *tmp_set_locals_19;
            CHECK_OBJECT(tmp_class_creation_19__prepared);
            tmp_set_locals_19 = tmp_class_creation_19__prepared;
            locals_pandas$errors$$$class__19_ChainedAssignmentError_457 = tmp_set_locals_19;
            Py_INCREF(tmp_set_locals_19);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__19_ChainedAssignmentError_457, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto try_except_handler_58;
        }
        tmp_dictset_value = mod_consts[105];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__19_ChainedAssignmentError_457, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto try_except_handler_58;
        }
        tmp_dictset_value = mod_consts[104];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__19_ChainedAssignmentError_457, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto try_except_handler_58;
        }
        {
            nuitka_bool tmp_condition_result_76;
            PyObject *tmp_cmp_expr_left_19;
            PyObject *tmp_cmp_expr_right_19;
            CHECK_OBJECT(tmp_class_creation_19__bases);
            tmp_cmp_expr_left_19 = tmp_class_creation_19__bases;
            CHECK_OBJECT(tmp_class_creation_19__bases_orig);
            tmp_cmp_expr_right_19 = tmp_class_creation_19__bases_orig;
            tmp_condition_result_76 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
            if (tmp_condition_result_76 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 457;

                goto try_except_handler_58;
            }
            if (tmp_condition_result_76 == NUITKA_BOOL_TRUE) {
                goto branch_yes_57;
            } else {
                goto branch_no_57;
            }
        }
        branch_yes_57:;
        CHECK_OBJECT(tmp_class_creation_19__bases_orig);
        tmp_dictset_value = tmp_class_creation_19__bases_orig;
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__19_ChainedAssignmentError_457, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto try_except_handler_58;
        }
        branch_no_57:;
        {
            PyObject *tmp_assign_source_149;
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_value_38;
            PyObject *tmp_tuple_element_62;
            PyObject *tmp_kwargs_value_38;
            CHECK_OBJECT(tmp_class_creation_19__metaclass);
            tmp_called_value_42 = tmp_class_creation_19__metaclass;
            tmp_tuple_element_62 = mod_consts[104];
            tmp_args_value_38 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_38, 0, tmp_tuple_element_62);
            CHECK_OBJECT(tmp_class_creation_19__bases);
            tmp_tuple_element_62 = tmp_class_creation_19__bases;
            PyTuple_SET_ITEM0(tmp_args_value_38, 1, tmp_tuple_element_62);
            tmp_tuple_element_62 = locals_pandas$errors$$$class__19_ChainedAssignmentError_457;
            PyTuple_SET_ITEM0(tmp_args_value_38, 2, tmp_tuple_element_62);
            CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
            tmp_kwargs_value_38 = tmp_class_creation_19__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 457;
            tmp_assign_source_149 = CALL_FUNCTION(tstate, tmp_called_value_42, tmp_args_value_38, tmp_kwargs_value_38);
            Py_DECREF(tmp_args_value_38);
            if (tmp_assign_source_149 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 457;

                goto try_except_handler_58;
            }
            assert(outline_18_var___class__ == NULL);
            outline_18_var___class__ = tmp_assign_source_149;
        }
        CHECK_OBJECT(outline_18_var___class__);
        tmp_assign_source_148 = outline_18_var___class__;
        Py_INCREF(tmp_assign_source_148);
        goto try_return_handler_58;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_58:;
        Py_DECREF(locals_pandas$errors$$$class__19_ChainedAssignmentError_457);
        locals_pandas$errors$$$class__19_ChainedAssignmentError_457 = NULL;
        goto try_return_handler_57;
        // Exception handler code:
        try_except_handler_58:;
        exception_keeper_type_56 = exception_type;
        exception_keeper_value_56 = exception_value;
        exception_keeper_tb_56 = exception_tb;
        exception_keeper_lineno_56 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$errors$$$class__19_ChainedAssignmentError_457);
        locals_pandas$errors$$$class__19_ChainedAssignmentError_457 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_56;
        exception_value = exception_keeper_value_56;
        exception_tb = exception_keeper_tb_56;
        exception_lineno = exception_keeper_lineno_56;

        goto try_except_handler_57;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_57:;
        CHECK_OBJECT(outline_18_var___class__);
        Py_DECREF(outline_18_var___class__);
        outline_18_var___class__ = NULL;
        goto outline_result_19;
        // Exception handler code:
        try_except_handler_57:;
        exception_keeper_type_57 = exception_type;
        exception_keeper_value_57 = exception_value;
        exception_keeper_tb_57 = exception_tb;
        exception_keeper_lineno_57 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_57;
        exception_value = exception_keeper_value_57;
        exception_tb = exception_keeper_tb_57;
        exception_lineno = exception_keeper_lineno_57;

        goto outline_exception_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_19:;
        exception_lineno = 457;
        goto try_except_handler_56;
        outline_result_19:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_148);
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_56:;
    exception_keeper_type_58 = exception_type;
    exception_keeper_value_58 = exception_value;
    exception_keeper_tb_58 = exception_tb;
    exception_keeper_lineno_58 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_19__bases_orig);
    tmp_class_creation_19__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_19__bases);
    tmp_class_creation_19__bases = NULL;
    Py_XDECREF(tmp_class_creation_19__class_decl_dict);
    tmp_class_creation_19__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_19__metaclass);
    tmp_class_creation_19__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_19__prepared);
    tmp_class_creation_19__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_58;
    exception_value = exception_keeper_value_58;
    exception_tb = exception_keeper_tb_58;
    exception_lineno = exception_keeper_lineno_58;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    CHECK_OBJECT(tmp_class_creation_19__bases_orig);
    Py_DECREF(tmp_class_creation_19__bases_orig);
    tmp_class_creation_19__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_19__bases);
    Py_DECREF(tmp_class_creation_19__bases);
    tmp_class_creation_19__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
    Py_DECREF(tmp_class_creation_19__class_decl_dict);
    tmp_class_creation_19__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_19__metaclass);
    Py_DECREF(tmp_class_creation_19__metaclass);
    tmp_class_creation_19__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_19__prepared);
    Py_DECREF(tmp_class_creation_19__prepared);
    tmp_class_creation_19__prepared = NULL;
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = mod_consts[108];
        UPDATE_STRING_DICT0(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_151);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_dircall_arg1_20;
        tmp_dircall_arg1_20 = mod_consts[110];
        Py_INCREF(tmp_dircall_arg1_20);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_20};
            tmp_assign_source_152 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto try_except_handler_59;
        }
        assert(tmp_class_creation_20__bases == NULL);
        tmp_class_creation_20__bases = tmp_assign_source_152;
    }
    {
        PyObject *tmp_assign_source_153;
        tmp_assign_source_153 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_20__class_decl_dict == NULL);
        tmp_class_creation_20__class_decl_dict = tmp_assign_source_153;
    }
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_metaclass_value_20;
        nuitka_bool tmp_condition_result_77;
        int tmp_truth_name_20;
        PyObject *tmp_type_arg_39;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_bases_value_20;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_truth_name_20 = CHECK_IF_TRUE(tmp_class_creation_20__bases);
        if (tmp_truth_name_20 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto try_except_handler_59;
        }
        tmp_condition_result_77 = tmp_truth_name_20 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_77 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_20;
        } else {
            goto condexpr_false_20;
        }
        condexpr_true_20:;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_expression_value_119 = tmp_class_creation_20__bases;
        tmp_subscript_value_20 = mod_consts[40];
        tmp_type_arg_39 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_119, tmp_subscript_value_20, 0);
        if (tmp_type_arg_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto try_except_handler_59;
        }
        tmp_metaclass_value_20 = BUILTIN_TYPE1(tmp_type_arg_39);
        Py_DECREF(tmp_type_arg_39);
        if (tmp_metaclass_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto try_except_handler_59;
        }
        goto condexpr_end_20;
        condexpr_false_20:;
        tmp_metaclass_value_20 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_20);
        condexpr_end_20:;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_bases_value_20 = tmp_class_creation_20__bases;
        tmp_assign_source_154 = SELECT_METACLASS(tstate, tmp_metaclass_value_20, tmp_bases_value_20);
        Py_DECREF(tmp_metaclass_value_20);
        if (tmp_assign_source_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto try_except_handler_59;
        }
        assert(tmp_class_creation_20__metaclass == NULL);
        tmp_class_creation_20__metaclass = tmp_assign_source_154;
    }
    {
        bool tmp_condition_result_78;
        PyObject *tmp_expression_value_120;
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_value_120 = tmp_class_creation_20__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_120, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto try_except_handler_59;
        }
        tmp_condition_result_78 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_78 != false) {
            goto branch_yes_58;
        } else {
            goto branch_no_58;
        }
    }
    branch_yes_58:;
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_args_value_39;
        PyObject *tmp_tuple_element_63;
        PyObject *tmp_kwargs_value_39;
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_value_121 = tmp_class_creation_20__metaclass;
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts[50]);
        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto try_except_handler_59;
        }
        tmp_tuple_element_63 = mod_consts[111];
        tmp_args_value_39 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_39, 0, tmp_tuple_element_63);
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_tuple_element_63 = tmp_class_creation_20__bases;
        PyTuple_SET_ITEM0(tmp_args_value_39, 1, tmp_tuple_element_63);
        CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
        tmp_kwargs_value_39 = tmp_class_creation_20__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 506;
        tmp_assign_source_155 = CALL_FUNCTION(tstate, tmp_called_value_43, tmp_args_value_39, tmp_kwargs_value_39);
        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_value_39);
        if (tmp_assign_source_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto try_except_handler_59;
        }
        assert(tmp_class_creation_20__prepared == NULL);
        tmp_class_creation_20__prepared = tmp_assign_source_155;
    }
    {
        bool tmp_condition_result_79;
        PyObject *tmp_operand_value_20;
        PyObject *tmp_expression_value_122;
        CHECK_OBJECT(tmp_class_creation_20__prepared);
        tmp_expression_value_122 = tmp_class_creation_20__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_122, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto try_except_handler_59;
        }
        tmp_operand_value_20 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_20);
        assert(!(tmp_res == -1));
        tmp_condition_result_79 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_79 != false) {
            goto branch_yes_59;
        } else {
            goto branch_no_59;
        }
    }
    branch_yes_59:;
    {
        PyObject *tmp_raise_type_20;
        PyObject *tmp_raise_value_20;
        PyObject *tmp_mod_expr_left_20;
        PyObject *tmp_mod_expr_right_20;
        PyObject *tmp_tuple_element_64;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_name_value_23;
        PyObject *tmp_default_value_20;
        tmp_raise_type_20 = PyExc_TypeError;
        tmp_mod_expr_left_20 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_value_123 = tmp_class_creation_20__metaclass;
        tmp_name_value_23 = mod_consts[8];
        tmp_default_value_20 = mod_consts[54];
        tmp_tuple_element_64 = BUILTIN_GETATTR(tstate, tmp_expression_value_123, tmp_name_value_23, tmp_default_value_20);
        if (tmp_tuple_element_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto try_except_handler_59;
        }
        tmp_mod_expr_right_20 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_124;
            PyObject *tmp_type_arg_40;
            PyTuple_SET_ITEM(tmp_mod_expr_right_20, 0, tmp_tuple_element_64);
            CHECK_OBJECT(tmp_class_creation_20__prepared);
            tmp_type_arg_40 = tmp_class_creation_20__prepared;
            tmp_expression_value_124 = BUILTIN_TYPE1(tmp_type_arg_40);
            assert(!(tmp_expression_value_124 == NULL));
            tmp_tuple_element_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts[8]);
            Py_DECREF(tmp_expression_value_124);
            if (tmp_tuple_element_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 506;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_20, 1, tmp_tuple_element_64);
        }
        goto tuple_build_noexception_20;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_20:;
        Py_DECREF(tmp_mod_expr_right_20);
        goto try_except_handler_59;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_20:;
        tmp_raise_value_20 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_20, tmp_mod_expr_right_20);
        Py_DECREF(tmp_mod_expr_right_20);
        if (tmp_raise_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto try_except_handler_59;
        }
        exception_type = tmp_raise_type_20;
        Py_INCREF(tmp_raise_type_20);
        exception_value = tmp_raise_value_20;
        exception_lineno = 506;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_59;
    }
    branch_no_59:;
    goto branch_end_58;
    branch_no_58:;
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_20__prepared == NULL);
        tmp_class_creation_20__prepared = tmp_assign_source_156;
    }
    branch_end_58:;
    {
        PyObject *tmp_assign_source_157;
        {
            PyObject *tmp_set_locals_20;
            CHECK_OBJECT(tmp_class_creation_20__prepared);
            tmp_set_locals_20 = tmp_class_creation_20__prepared;
            locals_pandas$errors$$$class__20_NumExprClobberingError_506 = tmp_set_locals_20;
            Py_INCREF(tmp_set_locals_20);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__20_NumExprClobberingError_506, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto try_except_handler_61;
        }
        tmp_dictset_value = mod_consts[112];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__20_NumExprClobberingError_506, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto try_except_handler_61;
        }
        tmp_dictset_value = mod_consts[111];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__20_NumExprClobberingError_506, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto try_except_handler_61;
        }
        {
            nuitka_bool tmp_condition_result_80;
            PyObject *tmp_cmp_expr_left_20;
            PyObject *tmp_cmp_expr_right_20;
            CHECK_OBJECT(tmp_class_creation_20__bases);
            tmp_cmp_expr_left_20 = tmp_class_creation_20__bases;
            tmp_cmp_expr_right_20 = mod_consts[110];
            tmp_condition_result_80 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
            if (tmp_condition_result_80 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 506;

                goto try_except_handler_61;
            }
            if (tmp_condition_result_80 == NUITKA_BOOL_TRUE) {
                goto branch_yes_60;
            } else {
                goto branch_no_60;
            }
        }
        branch_yes_60:;
        tmp_dictset_value = mod_consts[110];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__20_NumExprClobberingError_506, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto try_except_handler_61;
        }
        branch_no_60:;
        {
            PyObject *tmp_assign_source_158;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_value_40;
            PyObject *tmp_tuple_element_65;
            PyObject *tmp_kwargs_value_40;
            CHECK_OBJECT(tmp_class_creation_20__metaclass);
            tmp_called_value_44 = tmp_class_creation_20__metaclass;
            tmp_tuple_element_65 = mod_consts[111];
            tmp_args_value_40 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_40, 0, tmp_tuple_element_65);
            CHECK_OBJECT(tmp_class_creation_20__bases);
            tmp_tuple_element_65 = tmp_class_creation_20__bases;
            PyTuple_SET_ITEM0(tmp_args_value_40, 1, tmp_tuple_element_65);
            tmp_tuple_element_65 = locals_pandas$errors$$$class__20_NumExprClobberingError_506;
            PyTuple_SET_ITEM0(tmp_args_value_40, 2, tmp_tuple_element_65);
            CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
            tmp_kwargs_value_40 = tmp_class_creation_20__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 506;
            tmp_assign_source_158 = CALL_FUNCTION(tstate, tmp_called_value_44, tmp_args_value_40, tmp_kwargs_value_40);
            Py_DECREF(tmp_args_value_40);
            if (tmp_assign_source_158 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 506;

                goto try_except_handler_61;
            }
            assert(outline_19_var___class__ == NULL);
            outline_19_var___class__ = tmp_assign_source_158;
        }
        CHECK_OBJECT(outline_19_var___class__);
        tmp_assign_source_157 = outline_19_var___class__;
        Py_INCREF(tmp_assign_source_157);
        goto try_return_handler_61;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_61:;
        Py_DECREF(locals_pandas$errors$$$class__20_NumExprClobberingError_506);
        locals_pandas$errors$$$class__20_NumExprClobberingError_506 = NULL;
        goto try_return_handler_60;
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

        Py_DECREF(locals_pandas$errors$$$class__20_NumExprClobberingError_506);
        locals_pandas$errors$$$class__20_NumExprClobberingError_506 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_59;
        exception_value = exception_keeper_value_59;
        exception_tb = exception_keeper_tb_59;
        exception_lineno = exception_keeper_lineno_59;

        goto try_except_handler_60;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_60:;
        CHECK_OBJECT(outline_19_var___class__);
        Py_DECREF(outline_19_var___class__);
        outline_19_var___class__ = NULL;
        goto outline_result_20;
        // Exception handler code:
        try_except_handler_60:;
        exception_keeper_type_60 = exception_type;
        exception_keeper_value_60 = exception_value;
        exception_keeper_tb_60 = exception_tb;
        exception_keeper_lineno_60 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_60;
        exception_value = exception_keeper_value_60;
        exception_tb = exception_keeper_tb_60;
        exception_lineno = exception_keeper_lineno_60;

        goto outline_exception_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_20:;
        exception_lineno = 506;
        goto try_except_handler_59;
        outline_result_20:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_157);
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_59:;
    exception_keeper_type_61 = exception_type;
    exception_keeper_value_61 = exception_value;
    exception_keeper_tb_61 = exception_tb;
    exception_keeper_lineno_61 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_20__bases);
    tmp_class_creation_20__bases = NULL;
    Py_XDECREF(tmp_class_creation_20__class_decl_dict);
    tmp_class_creation_20__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_20__metaclass);
    tmp_class_creation_20__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_20__prepared);
    tmp_class_creation_20__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_61;
    exception_value = exception_keeper_value_61;
    exception_tb = exception_keeper_tb_61;
    exception_lineno = exception_keeper_lineno_61;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    CHECK_OBJECT(tmp_class_creation_20__bases);
    Py_DECREF(tmp_class_creation_20__bases);
    tmp_class_creation_20__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
    Py_DECREF(tmp_class_creation_20__class_decl_dict);
    tmp_class_creation_20__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_20__metaclass);
    Py_DECREF(tmp_class_creation_20__metaclass);
    tmp_class_creation_20__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_20__prepared);
    Py_DECREF(tmp_class_creation_20__prepared);
    tmp_class_creation_20__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_dircall_arg1_21;
        tmp_dircall_arg1_21 = mod_consts[110];
        Py_INCREF(tmp_dircall_arg1_21);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_21};
            tmp_assign_source_159 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto try_except_handler_62;
        }
        assert(tmp_class_creation_21__bases == NULL);
        tmp_class_creation_21__bases = tmp_assign_source_159;
    }
    {
        PyObject *tmp_assign_source_160;
        tmp_assign_source_160 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_21__class_decl_dict == NULL);
        tmp_class_creation_21__class_decl_dict = tmp_assign_source_160;
    }
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_metaclass_value_21;
        nuitka_bool tmp_condition_result_81;
        int tmp_truth_name_21;
        PyObject *tmp_type_arg_41;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_bases_value_21;
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_truth_name_21 = CHECK_IF_TRUE(tmp_class_creation_21__bases);
        if (tmp_truth_name_21 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto try_except_handler_62;
        }
        tmp_condition_result_81 = tmp_truth_name_21 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_81 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_21;
        } else {
            goto condexpr_false_21;
        }
        condexpr_true_21:;
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_expression_value_125 = tmp_class_creation_21__bases;
        tmp_subscript_value_21 = mod_consts[40];
        tmp_type_arg_41 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_125, tmp_subscript_value_21, 0);
        if (tmp_type_arg_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto try_except_handler_62;
        }
        tmp_metaclass_value_21 = BUILTIN_TYPE1(tmp_type_arg_41);
        Py_DECREF(tmp_type_arg_41);
        if (tmp_metaclass_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto try_except_handler_62;
        }
        goto condexpr_end_21;
        condexpr_false_21:;
        tmp_metaclass_value_21 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_21);
        condexpr_end_21:;
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_bases_value_21 = tmp_class_creation_21__bases;
        tmp_assign_source_161 = SELECT_METACLASS(tstate, tmp_metaclass_value_21, tmp_bases_value_21);
        Py_DECREF(tmp_metaclass_value_21);
        if (tmp_assign_source_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto try_except_handler_62;
        }
        assert(tmp_class_creation_21__metaclass == NULL);
        tmp_class_creation_21__metaclass = tmp_assign_source_161;
    }
    {
        bool tmp_condition_result_82;
        PyObject *tmp_expression_value_126;
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_expression_value_126 = tmp_class_creation_21__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_126, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto try_except_handler_62;
        }
        tmp_condition_result_82 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_82 != false) {
            goto branch_yes_61;
        } else {
            goto branch_no_61;
        }
    }
    branch_yes_61:;
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_args_value_41;
        PyObject *tmp_tuple_element_66;
        PyObject *tmp_kwargs_value_41;
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_expression_value_127 = tmp_class_creation_21__metaclass;
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_127, mod_consts[50]);
        if (tmp_called_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto try_except_handler_62;
        }
        tmp_tuple_element_66 = mod_consts[113];
        tmp_args_value_41 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_41, 0, tmp_tuple_element_66);
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_tuple_element_66 = tmp_class_creation_21__bases;
        PyTuple_SET_ITEM0(tmp_args_value_41, 1, tmp_tuple_element_66);
        CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
        tmp_kwargs_value_41 = tmp_class_creation_21__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 525;
        tmp_assign_source_162 = CALL_FUNCTION(tstate, tmp_called_value_45, tmp_args_value_41, tmp_kwargs_value_41);
        Py_DECREF(tmp_called_value_45);
        Py_DECREF(tmp_args_value_41);
        if (tmp_assign_source_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto try_except_handler_62;
        }
        assert(tmp_class_creation_21__prepared == NULL);
        tmp_class_creation_21__prepared = tmp_assign_source_162;
    }
    {
        bool tmp_condition_result_83;
        PyObject *tmp_operand_value_21;
        PyObject *tmp_expression_value_128;
        CHECK_OBJECT(tmp_class_creation_21__prepared);
        tmp_expression_value_128 = tmp_class_creation_21__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_128, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto try_except_handler_62;
        }
        tmp_operand_value_21 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_21);
        assert(!(tmp_res == -1));
        tmp_condition_result_83 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_83 != false) {
            goto branch_yes_62;
        } else {
            goto branch_no_62;
        }
    }
    branch_yes_62:;
    {
        PyObject *tmp_raise_type_21;
        PyObject *tmp_raise_value_21;
        PyObject *tmp_mod_expr_left_21;
        PyObject *tmp_mod_expr_right_21;
        PyObject *tmp_tuple_element_67;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_name_value_24;
        PyObject *tmp_default_value_21;
        tmp_raise_type_21 = PyExc_TypeError;
        tmp_mod_expr_left_21 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_expression_value_129 = tmp_class_creation_21__metaclass;
        tmp_name_value_24 = mod_consts[8];
        tmp_default_value_21 = mod_consts[54];
        tmp_tuple_element_67 = BUILTIN_GETATTR(tstate, tmp_expression_value_129, tmp_name_value_24, tmp_default_value_21);
        if (tmp_tuple_element_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto try_except_handler_62;
        }
        tmp_mod_expr_right_21 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_130;
            PyObject *tmp_type_arg_42;
            PyTuple_SET_ITEM(tmp_mod_expr_right_21, 0, tmp_tuple_element_67);
            CHECK_OBJECT(tmp_class_creation_21__prepared);
            tmp_type_arg_42 = tmp_class_creation_21__prepared;
            tmp_expression_value_130 = BUILTIN_TYPE1(tmp_type_arg_42);
            assert(!(tmp_expression_value_130 == NULL));
            tmp_tuple_element_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, mod_consts[8]);
            Py_DECREF(tmp_expression_value_130);
            if (tmp_tuple_element_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 525;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_21, 1, tmp_tuple_element_67);
        }
        goto tuple_build_noexception_21;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_21:;
        Py_DECREF(tmp_mod_expr_right_21);
        goto try_except_handler_62;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_21:;
        tmp_raise_value_21 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_21, tmp_mod_expr_right_21);
        Py_DECREF(tmp_mod_expr_right_21);
        if (tmp_raise_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto try_except_handler_62;
        }
        exception_type = tmp_raise_type_21;
        Py_INCREF(tmp_raise_type_21);
        exception_value = tmp_raise_value_21;
        exception_lineno = 525;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_62;
    }
    branch_no_62:;
    goto branch_end_61;
    branch_no_61:;
    {
        PyObject *tmp_assign_source_163;
        tmp_assign_source_163 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_21__prepared == NULL);
        tmp_class_creation_21__prepared = tmp_assign_source_163;
    }
    branch_end_61:;
    {
        PyObject *tmp_assign_source_164;
        outline_20_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_21;
            CHECK_OBJECT(tmp_class_creation_21__prepared);
            tmp_set_locals_21 = tmp_class_creation_21__prepared;
            locals_pandas$errors$$$class__21_UndefinedVariableError_525 = tmp_set_locals_21;
            Py_INCREF(tmp_set_locals_21);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__21_UndefinedVariableError_525, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto try_except_handler_64;
        }
        tmp_dictset_value = mod_consts[114];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__21_UndefinedVariableError_525, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto try_except_handler_64;
        }
        tmp_dictset_value = mod_consts[113];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__21_UndefinedVariableError_525, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto try_except_handler_64;
        }
        frame_8f0e93e0a278e511b126754d14fe7727_3 = MAKE_CLASS_FRAME(tstate, codeobj_8f0e93e0a278e511b126754d14fe7727, module_pandas$errors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_8f0e93e0a278e511b126754d14fe7727_3);
        assert(Py_REFCNT(frame_8f0e93e0a278e511b126754d14fe7727_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_3;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_defaults_2 = mod_consts[115];
            tmp_annotations_3 = DICT_COPY(mod_consts[116]);
            Py_INCREF(tmp_defaults_2);

            tmp_closure_1[0] = outline_20_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_pandas$errors$$$function__3___init__(tmp_defaults_2, tmp_annotations_3, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__21_UndefinedVariableError_525, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8f0e93e0a278e511b126754d14fe7727_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8f0e93e0a278e511b126754d14fe7727_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8f0e93e0a278e511b126754d14fe7727_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8f0e93e0a278e511b126754d14fe7727_3,
            type_description_2,
            outline_20_var___class__
        );



        assertFrameObject(frame_8f0e93e0a278e511b126754d14fe7727_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_64;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_84;
            PyObject *tmp_cmp_expr_left_21;
            PyObject *tmp_cmp_expr_right_21;
            CHECK_OBJECT(tmp_class_creation_21__bases);
            tmp_cmp_expr_left_21 = tmp_class_creation_21__bases;
            tmp_cmp_expr_right_21 = mod_consts[110];
            tmp_condition_result_84 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
            if (tmp_condition_result_84 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 525;

                goto try_except_handler_64;
            }
            if (tmp_condition_result_84 == NUITKA_BOOL_TRUE) {
                goto branch_yes_63;
            } else {
                goto branch_no_63;
            }
        }
        branch_yes_63:;
        tmp_dictset_value = mod_consts[110];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__21_UndefinedVariableError_525, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto try_except_handler_64;
        }
        branch_no_63:;
        {
            PyObject *tmp_assign_source_165;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_value_42;
            PyObject *tmp_tuple_element_68;
            PyObject *tmp_kwargs_value_42;
            CHECK_OBJECT(tmp_class_creation_21__metaclass);
            tmp_called_value_46 = tmp_class_creation_21__metaclass;
            tmp_tuple_element_68 = mod_consts[113];
            tmp_args_value_42 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_42, 0, tmp_tuple_element_68);
            CHECK_OBJECT(tmp_class_creation_21__bases);
            tmp_tuple_element_68 = tmp_class_creation_21__bases;
            PyTuple_SET_ITEM0(tmp_args_value_42, 1, tmp_tuple_element_68);
            tmp_tuple_element_68 = locals_pandas$errors$$$class__21_UndefinedVariableError_525;
            PyTuple_SET_ITEM0(tmp_args_value_42, 2, tmp_tuple_element_68);
            CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
            tmp_kwargs_value_42 = tmp_class_creation_21__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 525;
            tmp_assign_source_165 = CALL_FUNCTION(tstate, tmp_called_value_46, tmp_args_value_42, tmp_kwargs_value_42);
            Py_DECREF(tmp_args_value_42);
            if (tmp_assign_source_165 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 525;

                goto try_except_handler_64;
            }
            assert(Nuitka_Cell_GET(outline_20_var___class__) == NULL);
            PyCell_SET(outline_20_var___class__, tmp_assign_source_165);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_20_var___class__));
        tmp_assign_source_164 = Nuitka_Cell_GET(outline_20_var___class__);
        Py_INCREF(tmp_assign_source_164);
        goto try_return_handler_64;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_64:;
        Py_DECREF(locals_pandas$errors$$$class__21_UndefinedVariableError_525);
        locals_pandas$errors$$$class__21_UndefinedVariableError_525 = NULL;
        goto try_return_handler_63;
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

        Py_DECREF(locals_pandas$errors$$$class__21_UndefinedVariableError_525);
        locals_pandas$errors$$$class__21_UndefinedVariableError_525 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_62;
        exception_value = exception_keeper_value_62;
        exception_tb = exception_keeper_tb_62;
        exception_lineno = exception_keeper_lineno_62;

        goto try_except_handler_63;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_63:;
        CHECK_OBJECT(outline_20_var___class__);
        Py_DECREF(outline_20_var___class__);
        outline_20_var___class__ = NULL;
        goto outline_result_21;
        // Exception handler code:
        try_except_handler_63:;
        exception_keeper_type_63 = exception_type;
        exception_keeper_value_63 = exception_value;
        exception_keeper_tb_63 = exception_tb;
        exception_keeper_lineno_63 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_63;
        exception_value = exception_keeper_value_63;
        exception_tb = exception_keeper_tb_63;
        exception_lineno = exception_keeper_lineno_63;

        goto outline_exception_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_21:;
        exception_lineno = 525;
        goto try_except_handler_62;
        outline_result_21:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_164);
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_62:;
    exception_keeper_type_64 = exception_type;
    exception_keeper_value_64 = exception_value;
    exception_keeper_tb_64 = exception_tb;
    exception_keeper_lineno_64 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_21__bases);
    tmp_class_creation_21__bases = NULL;
    Py_XDECREF(tmp_class_creation_21__class_decl_dict);
    tmp_class_creation_21__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_21__metaclass);
    tmp_class_creation_21__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_21__prepared);
    tmp_class_creation_21__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_64;
    exception_value = exception_keeper_value_64;
    exception_tb = exception_keeper_tb_64;
    exception_lineno = exception_keeper_lineno_64;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    CHECK_OBJECT(tmp_class_creation_21__bases);
    Py_DECREF(tmp_class_creation_21__bases);
    tmp_class_creation_21__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
    Py_DECREF(tmp_class_creation_21__class_decl_dict);
    tmp_class_creation_21__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_21__metaclass);
    Py_DECREF(tmp_class_creation_21__metaclass);
    tmp_class_creation_21__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_21__prepared);
    Py_DECREF(tmp_class_creation_21__prepared);
    tmp_class_creation_21__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_dircall_arg1_22;
        tmp_dircall_arg1_22 = mod_consts[89];
        Py_INCREF(tmp_dircall_arg1_22);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_22};
            tmp_assign_source_166 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto try_except_handler_65;
        }
        assert(tmp_class_creation_22__bases == NULL);
        tmp_class_creation_22__bases = tmp_assign_source_166;
    }
    {
        PyObject *tmp_assign_source_167;
        tmp_assign_source_167 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_22__class_decl_dict == NULL);
        tmp_class_creation_22__class_decl_dict = tmp_assign_source_167;
    }
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_metaclass_value_22;
        nuitka_bool tmp_condition_result_85;
        int tmp_truth_name_22;
        PyObject *tmp_type_arg_43;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_bases_value_22;
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_truth_name_22 = CHECK_IF_TRUE(tmp_class_creation_22__bases);
        if (tmp_truth_name_22 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto try_except_handler_65;
        }
        tmp_condition_result_85 = tmp_truth_name_22 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_85 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_22;
        } else {
            goto condexpr_false_22;
        }
        condexpr_true_22:;
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_expression_value_131 = tmp_class_creation_22__bases;
        tmp_subscript_value_22 = mod_consts[40];
        tmp_type_arg_43 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_131, tmp_subscript_value_22, 0);
        if (tmp_type_arg_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto try_except_handler_65;
        }
        tmp_metaclass_value_22 = BUILTIN_TYPE1(tmp_type_arg_43);
        Py_DECREF(tmp_type_arg_43);
        if (tmp_metaclass_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto try_except_handler_65;
        }
        goto condexpr_end_22;
        condexpr_false_22:;
        tmp_metaclass_value_22 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_22);
        condexpr_end_22:;
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_bases_value_22 = tmp_class_creation_22__bases;
        tmp_assign_source_168 = SELECT_METACLASS(tstate, tmp_metaclass_value_22, tmp_bases_value_22);
        Py_DECREF(tmp_metaclass_value_22);
        if (tmp_assign_source_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto try_except_handler_65;
        }
        assert(tmp_class_creation_22__metaclass == NULL);
        tmp_class_creation_22__metaclass = tmp_assign_source_168;
    }
    {
        bool tmp_condition_result_86;
        PyObject *tmp_expression_value_132;
        CHECK_OBJECT(tmp_class_creation_22__metaclass);
        tmp_expression_value_132 = tmp_class_creation_22__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_132, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto try_except_handler_65;
        }
        tmp_condition_result_86 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_86 != false) {
            goto branch_yes_64;
        } else {
            goto branch_no_64;
        }
    }
    branch_yes_64:;
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_args_value_43;
        PyObject *tmp_tuple_element_69;
        PyObject *tmp_kwargs_value_43;
        CHECK_OBJECT(tmp_class_creation_22__metaclass);
        tmp_expression_value_133 = tmp_class_creation_22__metaclass;
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, mod_consts[50]);
        if (tmp_called_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto try_except_handler_65;
        }
        tmp_tuple_element_69 = mod_consts[118];
        tmp_args_value_43 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_43, 0, tmp_tuple_element_69);
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_tuple_element_69 = tmp_class_creation_22__bases;
        PyTuple_SET_ITEM0(tmp_args_value_43, 1, tmp_tuple_element_69);
        CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
        tmp_kwargs_value_43 = tmp_class_creation_22__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 551;
        tmp_assign_source_169 = CALL_FUNCTION(tstate, tmp_called_value_47, tmp_args_value_43, tmp_kwargs_value_43);
        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_args_value_43);
        if (tmp_assign_source_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto try_except_handler_65;
        }
        assert(tmp_class_creation_22__prepared == NULL);
        tmp_class_creation_22__prepared = tmp_assign_source_169;
    }
    {
        bool tmp_condition_result_87;
        PyObject *tmp_operand_value_22;
        PyObject *tmp_expression_value_134;
        CHECK_OBJECT(tmp_class_creation_22__prepared);
        tmp_expression_value_134 = tmp_class_creation_22__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_134, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto try_except_handler_65;
        }
        tmp_operand_value_22 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_22);
        assert(!(tmp_res == -1));
        tmp_condition_result_87 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_87 != false) {
            goto branch_yes_65;
        } else {
            goto branch_no_65;
        }
    }
    branch_yes_65:;
    {
        PyObject *tmp_raise_type_22;
        PyObject *tmp_raise_value_22;
        PyObject *tmp_mod_expr_left_22;
        PyObject *tmp_mod_expr_right_22;
        PyObject *tmp_tuple_element_70;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_name_value_25;
        PyObject *tmp_default_value_22;
        tmp_raise_type_22 = PyExc_TypeError;
        tmp_mod_expr_left_22 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_22__metaclass);
        tmp_expression_value_135 = tmp_class_creation_22__metaclass;
        tmp_name_value_25 = mod_consts[8];
        tmp_default_value_22 = mod_consts[54];
        tmp_tuple_element_70 = BUILTIN_GETATTR(tstate, tmp_expression_value_135, tmp_name_value_25, tmp_default_value_22);
        if (tmp_tuple_element_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto try_except_handler_65;
        }
        tmp_mod_expr_right_22 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_136;
            PyObject *tmp_type_arg_44;
            PyTuple_SET_ITEM(tmp_mod_expr_right_22, 0, tmp_tuple_element_70);
            CHECK_OBJECT(tmp_class_creation_22__prepared);
            tmp_type_arg_44 = tmp_class_creation_22__prepared;
            tmp_expression_value_136 = BUILTIN_TYPE1(tmp_type_arg_44);
            assert(!(tmp_expression_value_136 == NULL));
            tmp_tuple_element_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_136, mod_consts[8]);
            Py_DECREF(tmp_expression_value_136);
            if (tmp_tuple_element_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_22, 1, tmp_tuple_element_70);
        }
        goto tuple_build_noexception_22;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_22:;
        Py_DECREF(tmp_mod_expr_right_22);
        goto try_except_handler_65;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_22:;
        tmp_raise_value_22 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_22, tmp_mod_expr_right_22);
        Py_DECREF(tmp_mod_expr_right_22);
        if (tmp_raise_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto try_except_handler_65;
        }
        exception_type = tmp_raise_type_22;
        Py_INCREF(tmp_raise_type_22);
        exception_value = tmp_raise_value_22;
        exception_lineno = 551;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_65;
    }
    branch_no_65:;
    goto branch_end_64;
    branch_no_64:;
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_22__prepared == NULL);
        tmp_class_creation_22__prepared = tmp_assign_source_170;
    }
    branch_end_64:;
    {
        PyObject *tmp_assign_source_171;
        {
            PyObject *tmp_set_locals_22;
            CHECK_OBJECT(tmp_class_creation_22__prepared);
            tmp_set_locals_22 = tmp_class_creation_22__prepared;
            locals_pandas$errors$$$class__22_IndexingError_551 = tmp_set_locals_22;
            Py_INCREF(tmp_set_locals_22);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__22_IndexingError_551, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto try_except_handler_67;
        }
        tmp_dictset_value = mod_consts[119];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__22_IndexingError_551, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto try_except_handler_67;
        }
        tmp_dictset_value = mod_consts[118];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__22_IndexingError_551, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto try_except_handler_67;
        }
        {
            nuitka_bool tmp_condition_result_88;
            PyObject *tmp_cmp_expr_left_22;
            PyObject *tmp_cmp_expr_right_22;
            CHECK_OBJECT(tmp_class_creation_22__bases);
            tmp_cmp_expr_left_22 = tmp_class_creation_22__bases;
            tmp_cmp_expr_right_22 = mod_consts[89];
            tmp_condition_result_88 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
            if (tmp_condition_result_88 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;

                goto try_except_handler_67;
            }
            if (tmp_condition_result_88 == NUITKA_BOOL_TRUE) {
                goto branch_yes_66;
            } else {
                goto branch_no_66;
            }
        }
        branch_yes_66:;
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__22_IndexingError_551, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto try_except_handler_67;
        }
        branch_no_66:;
        {
            PyObject *tmp_assign_source_172;
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_value_44;
            PyObject *tmp_tuple_element_71;
            PyObject *tmp_kwargs_value_44;
            CHECK_OBJECT(tmp_class_creation_22__metaclass);
            tmp_called_value_48 = tmp_class_creation_22__metaclass;
            tmp_tuple_element_71 = mod_consts[118];
            tmp_args_value_44 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_44, 0, tmp_tuple_element_71);
            CHECK_OBJECT(tmp_class_creation_22__bases);
            tmp_tuple_element_71 = tmp_class_creation_22__bases;
            PyTuple_SET_ITEM0(tmp_args_value_44, 1, tmp_tuple_element_71);
            tmp_tuple_element_71 = locals_pandas$errors$$$class__22_IndexingError_551;
            PyTuple_SET_ITEM0(tmp_args_value_44, 2, tmp_tuple_element_71);
            CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
            tmp_kwargs_value_44 = tmp_class_creation_22__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 551;
            tmp_assign_source_172 = CALL_FUNCTION(tstate, tmp_called_value_48, tmp_args_value_44, tmp_kwargs_value_44);
            Py_DECREF(tmp_args_value_44);
            if (tmp_assign_source_172 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;

                goto try_except_handler_67;
            }
            assert(outline_21_var___class__ == NULL);
            outline_21_var___class__ = tmp_assign_source_172;
        }
        CHECK_OBJECT(outline_21_var___class__);
        tmp_assign_source_171 = outline_21_var___class__;
        Py_INCREF(tmp_assign_source_171);
        goto try_return_handler_67;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_67:;
        Py_DECREF(locals_pandas$errors$$$class__22_IndexingError_551);
        locals_pandas$errors$$$class__22_IndexingError_551 = NULL;
        goto try_return_handler_66;
        // Exception handler code:
        try_except_handler_67:;
        exception_keeper_type_65 = exception_type;
        exception_keeper_value_65 = exception_value;
        exception_keeper_tb_65 = exception_tb;
        exception_keeper_lineno_65 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$errors$$$class__22_IndexingError_551);
        locals_pandas$errors$$$class__22_IndexingError_551 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_65;
        exception_value = exception_keeper_value_65;
        exception_tb = exception_keeper_tb_65;
        exception_lineno = exception_keeper_lineno_65;

        goto try_except_handler_66;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_66:;
        CHECK_OBJECT(outline_21_var___class__);
        Py_DECREF(outline_21_var___class__);
        outline_21_var___class__ = NULL;
        goto outline_result_22;
        // Exception handler code:
        try_except_handler_66:;
        exception_keeper_type_66 = exception_type;
        exception_keeper_value_66 = exception_value;
        exception_keeper_tb_66 = exception_tb;
        exception_keeper_lineno_66 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_66;
        exception_value = exception_keeper_value_66;
        exception_tb = exception_keeper_tb_66;
        exception_lineno = exception_keeper_lineno_66;

        goto outline_exception_22;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_22:;
        exception_lineno = 551;
        goto try_except_handler_65;
        outline_result_22:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_171);
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_65:;
    exception_keeper_type_67 = exception_type;
    exception_keeper_value_67 = exception_value;
    exception_keeper_tb_67 = exception_tb;
    exception_keeper_lineno_67 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_22__bases);
    tmp_class_creation_22__bases = NULL;
    Py_XDECREF(tmp_class_creation_22__class_decl_dict);
    tmp_class_creation_22__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_22__metaclass);
    tmp_class_creation_22__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_22__prepared);
    tmp_class_creation_22__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_67;
    exception_value = exception_keeper_value_67;
    exception_tb = exception_keeper_tb_67;
    exception_lineno = exception_keeper_lineno_67;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;
    CHECK_OBJECT(tmp_class_creation_22__bases);
    Py_DECREF(tmp_class_creation_22__bases);
    tmp_class_creation_22__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
    Py_DECREF(tmp_class_creation_22__class_decl_dict);
    tmp_class_creation_22__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_22__metaclass);
    Py_DECREF(tmp_class_creation_22__metaclass);
    tmp_class_creation_22__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_22__prepared);
    Py_DECREF(tmp_class_creation_22__prepared);
    tmp_class_creation_22__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_dircall_arg1_23;
        tmp_dircall_arg1_23 = mod_consts[120];
        Py_INCREF(tmp_dircall_arg1_23);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_23};
            tmp_assign_source_173 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto try_except_handler_68;
        }
        assert(tmp_class_creation_23__bases == NULL);
        tmp_class_creation_23__bases = tmp_assign_source_173;
    }
    {
        PyObject *tmp_assign_source_174;
        tmp_assign_source_174 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_23__class_decl_dict == NULL);
        tmp_class_creation_23__class_decl_dict = tmp_assign_source_174;
    }
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_metaclass_value_23;
        nuitka_bool tmp_condition_result_89;
        int tmp_truth_name_23;
        PyObject *tmp_type_arg_45;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_subscript_value_23;
        PyObject *tmp_bases_value_23;
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_truth_name_23 = CHECK_IF_TRUE(tmp_class_creation_23__bases);
        if (tmp_truth_name_23 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto try_except_handler_68;
        }
        tmp_condition_result_89 = tmp_truth_name_23 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_89 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_23;
        } else {
            goto condexpr_false_23;
        }
        condexpr_true_23:;
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_expression_value_137 = tmp_class_creation_23__bases;
        tmp_subscript_value_23 = mod_consts[40];
        tmp_type_arg_45 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_137, tmp_subscript_value_23, 0);
        if (tmp_type_arg_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto try_except_handler_68;
        }
        tmp_metaclass_value_23 = BUILTIN_TYPE1(tmp_type_arg_45);
        Py_DECREF(tmp_type_arg_45);
        if (tmp_metaclass_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto try_except_handler_68;
        }
        goto condexpr_end_23;
        condexpr_false_23:;
        tmp_metaclass_value_23 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_23);
        condexpr_end_23:;
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_bases_value_23 = tmp_class_creation_23__bases;
        tmp_assign_source_175 = SELECT_METACLASS(tstate, tmp_metaclass_value_23, tmp_bases_value_23);
        Py_DECREF(tmp_metaclass_value_23);
        if (tmp_assign_source_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto try_except_handler_68;
        }
        assert(tmp_class_creation_23__metaclass == NULL);
        tmp_class_creation_23__metaclass = tmp_assign_source_175;
    }
    {
        bool tmp_condition_result_90;
        PyObject *tmp_expression_value_138;
        CHECK_OBJECT(tmp_class_creation_23__metaclass);
        tmp_expression_value_138 = tmp_class_creation_23__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_138, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto try_except_handler_68;
        }
        tmp_condition_result_90 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_90 != false) {
            goto branch_yes_67;
        } else {
            goto branch_no_67;
        }
    }
    branch_yes_67:;
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_args_value_45;
        PyObject *tmp_tuple_element_72;
        PyObject *tmp_kwargs_value_45;
        CHECK_OBJECT(tmp_class_creation_23__metaclass);
        tmp_expression_value_139 = tmp_class_creation_23__metaclass;
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_139, mod_consts[50]);
        if (tmp_called_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto try_except_handler_68;
        }
        tmp_tuple_element_72 = mod_consts[121];
        tmp_args_value_45 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_45, 0, tmp_tuple_element_72);
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_tuple_element_72 = tmp_class_creation_23__bases;
        PyTuple_SET_ITEM0(tmp_args_value_45, 1, tmp_tuple_element_72);
        CHECK_OBJECT(tmp_class_creation_23__class_decl_dict);
        tmp_kwargs_value_45 = tmp_class_creation_23__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 572;
        tmp_assign_source_176 = CALL_FUNCTION(tstate, tmp_called_value_49, tmp_args_value_45, tmp_kwargs_value_45);
        Py_DECREF(tmp_called_value_49);
        Py_DECREF(tmp_args_value_45);
        if (tmp_assign_source_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto try_except_handler_68;
        }
        assert(tmp_class_creation_23__prepared == NULL);
        tmp_class_creation_23__prepared = tmp_assign_source_176;
    }
    {
        bool tmp_condition_result_91;
        PyObject *tmp_operand_value_23;
        PyObject *tmp_expression_value_140;
        CHECK_OBJECT(tmp_class_creation_23__prepared);
        tmp_expression_value_140 = tmp_class_creation_23__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_140, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto try_except_handler_68;
        }
        tmp_operand_value_23 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_23);
        assert(!(tmp_res == -1));
        tmp_condition_result_91 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_91 != false) {
            goto branch_yes_68;
        } else {
            goto branch_no_68;
        }
    }
    branch_yes_68:;
    {
        PyObject *tmp_raise_type_23;
        PyObject *tmp_raise_value_23;
        PyObject *tmp_mod_expr_left_23;
        PyObject *tmp_mod_expr_right_23;
        PyObject *tmp_tuple_element_73;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_name_value_26;
        PyObject *tmp_default_value_23;
        tmp_raise_type_23 = PyExc_TypeError;
        tmp_mod_expr_left_23 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_23__metaclass);
        tmp_expression_value_141 = tmp_class_creation_23__metaclass;
        tmp_name_value_26 = mod_consts[8];
        tmp_default_value_23 = mod_consts[54];
        tmp_tuple_element_73 = BUILTIN_GETATTR(tstate, tmp_expression_value_141, tmp_name_value_26, tmp_default_value_23);
        if (tmp_tuple_element_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto try_except_handler_68;
        }
        tmp_mod_expr_right_23 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_142;
            PyObject *tmp_type_arg_46;
            PyTuple_SET_ITEM(tmp_mod_expr_right_23, 0, tmp_tuple_element_73);
            CHECK_OBJECT(tmp_class_creation_23__prepared);
            tmp_type_arg_46 = tmp_class_creation_23__prepared;
            tmp_expression_value_142 = BUILTIN_TYPE1(tmp_type_arg_46);
            assert(!(tmp_expression_value_142 == NULL));
            tmp_tuple_element_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_142, mod_consts[8]);
            Py_DECREF(tmp_expression_value_142);
            if (tmp_tuple_element_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 572;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_23, 1, tmp_tuple_element_73);
        }
        goto tuple_build_noexception_23;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_23:;
        Py_DECREF(tmp_mod_expr_right_23);
        goto try_except_handler_68;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_23:;
        tmp_raise_value_23 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_23, tmp_mod_expr_right_23);
        Py_DECREF(tmp_mod_expr_right_23);
        if (tmp_raise_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto try_except_handler_68;
        }
        exception_type = tmp_raise_type_23;
        Py_INCREF(tmp_raise_type_23);
        exception_value = tmp_raise_value_23;
        exception_lineno = 572;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_68;
    }
    branch_no_68:;
    goto branch_end_67;
    branch_no_67:;
    {
        PyObject *tmp_assign_source_177;
        tmp_assign_source_177 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_23__prepared == NULL);
        tmp_class_creation_23__prepared = tmp_assign_source_177;
    }
    branch_end_67:;
    {
        PyObject *tmp_assign_source_178;
        {
            PyObject *tmp_set_locals_23;
            CHECK_OBJECT(tmp_class_creation_23__prepared);
            tmp_set_locals_23 = tmp_class_creation_23__prepared;
            locals_pandas$errors$$$class__23_PyperclipException_572 = tmp_set_locals_23;
            Py_INCREF(tmp_set_locals_23);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__23_PyperclipException_572, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto try_except_handler_70;
        }
        tmp_dictset_value = mod_consts[122];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__23_PyperclipException_572, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto try_except_handler_70;
        }
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__23_PyperclipException_572, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto try_except_handler_70;
        }
        {
            nuitka_bool tmp_condition_result_92;
            PyObject *tmp_cmp_expr_left_23;
            PyObject *tmp_cmp_expr_right_23;
            CHECK_OBJECT(tmp_class_creation_23__bases);
            tmp_cmp_expr_left_23 = tmp_class_creation_23__bases;
            tmp_cmp_expr_right_23 = mod_consts[120];
            tmp_condition_result_92 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
            if (tmp_condition_result_92 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 572;

                goto try_except_handler_70;
            }
            if (tmp_condition_result_92 == NUITKA_BOOL_TRUE) {
                goto branch_yes_69;
            } else {
                goto branch_no_69;
            }
        }
        branch_yes_69:;
        tmp_dictset_value = mod_consts[120];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__23_PyperclipException_572, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto try_except_handler_70;
        }
        branch_no_69:;
        {
            PyObject *tmp_assign_source_179;
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_value_46;
            PyObject *tmp_tuple_element_74;
            PyObject *tmp_kwargs_value_46;
            CHECK_OBJECT(tmp_class_creation_23__metaclass);
            tmp_called_value_50 = tmp_class_creation_23__metaclass;
            tmp_tuple_element_74 = mod_consts[121];
            tmp_args_value_46 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_46, 0, tmp_tuple_element_74);
            CHECK_OBJECT(tmp_class_creation_23__bases);
            tmp_tuple_element_74 = tmp_class_creation_23__bases;
            PyTuple_SET_ITEM0(tmp_args_value_46, 1, tmp_tuple_element_74);
            tmp_tuple_element_74 = locals_pandas$errors$$$class__23_PyperclipException_572;
            PyTuple_SET_ITEM0(tmp_args_value_46, 2, tmp_tuple_element_74);
            CHECK_OBJECT(tmp_class_creation_23__class_decl_dict);
            tmp_kwargs_value_46 = tmp_class_creation_23__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 572;
            tmp_assign_source_179 = CALL_FUNCTION(tstate, tmp_called_value_50, tmp_args_value_46, tmp_kwargs_value_46);
            Py_DECREF(tmp_args_value_46);
            if (tmp_assign_source_179 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 572;

                goto try_except_handler_70;
            }
            assert(outline_22_var___class__ == NULL);
            outline_22_var___class__ = tmp_assign_source_179;
        }
        CHECK_OBJECT(outline_22_var___class__);
        tmp_assign_source_178 = outline_22_var___class__;
        Py_INCREF(tmp_assign_source_178);
        goto try_return_handler_70;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_70:;
        Py_DECREF(locals_pandas$errors$$$class__23_PyperclipException_572);
        locals_pandas$errors$$$class__23_PyperclipException_572 = NULL;
        goto try_return_handler_69;
        // Exception handler code:
        try_except_handler_70:;
        exception_keeper_type_68 = exception_type;
        exception_keeper_value_68 = exception_value;
        exception_keeper_tb_68 = exception_tb;
        exception_keeper_lineno_68 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$errors$$$class__23_PyperclipException_572);
        locals_pandas$errors$$$class__23_PyperclipException_572 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_68;
        exception_value = exception_keeper_value_68;
        exception_tb = exception_keeper_tb_68;
        exception_lineno = exception_keeper_lineno_68;

        goto try_except_handler_69;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_69:;
        CHECK_OBJECT(outline_22_var___class__);
        Py_DECREF(outline_22_var___class__);
        outline_22_var___class__ = NULL;
        goto outline_result_23;
        // Exception handler code:
        try_except_handler_69:;
        exception_keeper_type_69 = exception_type;
        exception_keeper_value_69 = exception_value;
        exception_keeper_tb_69 = exception_tb;
        exception_keeper_lineno_69 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_69;
        exception_value = exception_keeper_value_69;
        exception_tb = exception_keeper_tb_69;
        exception_lineno = exception_keeper_lineno_69;

        goto outline_exception_23;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_23:;
        exception_lineno = 572;
        goto try_except_handler_68;
        outline_result_23:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_178);
    }
    goto try_end_24;
    // Exception handler code:
    try_except_handler_68:;
    exception_keeper_type_70 = exception_type;
    exception_keeper_value_70 = exception_value;
    exception_keeper_tb_70 = exception_tb;
    exception_keeper_lineno_70 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_23__bases);
    tmp_class_creation_23__bases = NULL;
    Py_XDECREF(tmp_class_creation_23__class_decl_dict);
    tmp_class_creation_23__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_23__metaclass);
    tmp_class_creation_23__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_23__prepared);
    tmp_class_creation_23__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_70;
    exception_value = exception_keeper_value_70;
    exception_tb = exception_keeper_tb_70;
    exception_lineno = exception_keeper_lineno_70;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    CHECK_OBJECT(tmp_class_creation_23__bases);
    Py_DECREF(tmp_class_creation_23__bases);
    tmp_class_creation_23__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_23__class_decl_dict);
    Py_DECREF(tmp_class_creation_23__class_decl_dict);
    tmp_class_creation_23__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_23__metaclass);
    Py_DECREF(tmp_class_creation_23__metaclass);
    tmp_class_creation_23__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_23__prepared);
    Py_DECREF(tmp_class_creation_23__prepared);
    tmp_class_creation_23__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_tuple_element_75;
        tmp_tuple_element_75 = GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_tuple_element_75 == NULL)) {
            tmp_tuple_element_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_tuple_element_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto try_except_handler_71;
        }
        tmp_assign_source_180 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_180, 0, tmp_tuple_element_75);
        assert(tmp_class_creation_24__bases_orig == NULL);
        tmp_class_creation_24__bases_orig = tmp_assign_source_180;
    }
    {
        PyObject *tmp_assign_source_181;
        PyObject *tmp_dircall_arg1_24;
        CHECK_OBJECT(tmp_class_creation_24__bases_orig);
        tmp_dircall_arg1_24 = tmp_class_creation_24__bases_orig;
        Py_INCREF(tmp_dircall_arg1_24);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_24};
            tmp_assign_source_181 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto try_except_handler_71;
        }
        assert(tmp_class_creation_24__bases == NULL);
        tmp_class_creation_24__bases = tmp_assign_source_181;
    }
    {
        PyObject *tmp_assign_source_182;
        tmp_assign_source_182 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_24__class_decl_dict == NULL);
        tmp_class_creation_24__class_decl_dict = tmp_assign_source_182;
    }
    {
        PyObject *tmp_assign_source_183;
        PyObject *tmp_metaclass_value_24;
        nuitka_bool tmp_condition_result_93;
        int tmp_truth_name_24;
        PyObject *tmp_type_arg_47;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_subscript_value_24;
        PyObject *tmp_bases_value_24;
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_truth_name_24 = CHECK_IF_TRUE(tmp_class_creation_24__bases);
        if (tmp_truth_name_24 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto try_except_handler_71;
        }
        tmp_condition_result_93 = tmp_truth_name_24 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_93 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_24;
        } else {
            goto condexpr_false_24;
        }
        condexpr_true_24:;
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_expression_value_143 = tmp_class_creation_24__bases;
        tmp_subscript_value_24 = mod_consts[40];
        tmp_type_arg_47 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_143, tmp_subscript_value_24, 0);
        if (tmp_type_arg_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto try_except_handler_71;
        }
        tmp_metaclass_value_24 = BUILTIN_TYPE1(tmp_type_arg_47);
        Py_DECREF(tmp_type_arg_47);
        if (tmp_metaclass_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto try_except_handler_71;
        }
        goto condexpr_end_24;
        condexpr_false_24:;
        tmp_metaclass_value_24 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_24);
        condexpr_end_24:;
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_bases_value_24 = tmp_class_creation_24__bases;
        tmp_assign_source_183 = SELECT_METACLASS(tstate, tmp_metaclass_value_24, tmp_bases_value_24);
        Py_DECREF(tmp_metaclass_value_24);
        if (tmp_assign_source_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto try_except_handler_71;
        }
        assert(tmp_class_creation_24__metaclass == NULL);
        tmp_class_creation_24__metaclass = tmp_assign_source_183;
    }
    {
        bool tmp_condition_result_94;
        PyObject *tmp_expression_value_144;
        CHECK_OBJECT(tmp_class_creation_24__metaclass);
        tmp_expression_value_144 = tmp_class_creation_24__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_144, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto try_except_handler_71;
        }
        tmp_condition_result_94 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_94 != false) {
            goto branch_yes_70;
        } else {
            goto branch_no_70;
        }
    }
    branch_yes_70:;
    {
        PyObject *tmp_assign_source_184;
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_args_value_47;
        PyObject *tmp_tuple_element_76;
        PyObject *tmp_kwargs_value_47;
        CHECK_OBJECT(tmp_class_creation_24__metaclass);
        tmp_expression_value_145 = tmp_class_creation_24__metaclass;
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_145, mod_consts[50]);
        if (tmp_called_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto try_except_handler_71;
        }
        tmp_tuple_element_76 = mod_consts[123];
        tmp_args_value_47 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_47, 0, tmp_tuple_element_76);
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_tuple_element_76 = tmp_class_creation_24__bases;
        PyTuple_SET_ITEM0(tmp_args_value_47, 1, tmp_tuple_element_76);
        CHECK_OBJECT(tmp_class_creation_24__class_decl_dict);
        tmp_kwargs_value_47 = tmp_class_creation_24__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 580;
        tmp_assign_source_184 = CALL_FUNCTION(tstate, tmp_called_value_51, tmp_args_value_47, tmp_kwargs_value_47);
        Py_DECREF(tmp_called_value_51);
        Py_DECREF(tmp_args_value_47);
        if (tmp_assign_source_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto try_except_handler_71;
        }
        assert(tmp_class_creation_24__prepared == NULL);
        tmp_class_creation_24__prepared = tmp_assign_source_184;
    }
    {
        bool tmp_condition_result_95;
        PyObject *tmp_operand_value_24;
        PyObject *tmp_expression_value_146;
        CHECK_OBJECT(tmp_class_creation_24__prepared);
        tmp_expression_value_146 = tmp_class_creation_24__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_146, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto try_except_handler_71;
        }
        tmp_operand_value_24 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_24);
        assert(!(tmp_res == -1));
        tmp_condition_result_95 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_95 != false) {
            goto branch_yes_71;
        } else {
            goto branch_no_71;
        }
    }
    branch_yes_71:;
    {
        PyObject *tmp_raise_type_24;
        PyObject *tmp_raise_value_24;
        PyObject *tmp_mod_expr_left_24;
        PyObject *tmp_mod_expr_right_24;
        PyObject *tmp_tuple_element_77;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_name_value_27;
        PyObject *tmp_default_value_24;
        tmp_raise_type_24 = PyExc_TypeError;
        tmp_mod_expr_left_24 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_24__metaclass);
        tmp_expression_value_147 = tmp_class_creation_24__metaclass;
        tmp_name_value_27 = mod_consts[8];
        tmp_default_value_24 = mod_consts[54];
        tmp_tuple_element_77 = BUILTIN_GETATTR(tstate, tmp_expression_value_147, tmp_name_value_27, tmp_default_value_24);
        if (tmp_tuple_element_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto try_except_handler_71;
        }
        tmp_mod_expr_right_24 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_148;
            PyObject *tmp_type_arg_48;
            PyTuple_SET_ITEM(tmp_mod_expr_right_24, 0, tmp_tuple_element_77);
            CHECK_OBJECT(tmp_class_creation_24__prepared);
            tmp_type_arg_48 = tmp_class_creation_24__prepared;
            tmp_expression_value_148 = BUILTIN_TYPE1(tmp_type_arg_48);
            assert(!(tmp_expression_value_148 == NULL));
            tmp_tuple_element_77 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_148, mod_consts[8]);
            Py_DECREF(tmp_expression_value_148);
            if (tmp_tuple_element_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 580;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_24, 1, tmp_tuple_element_77);
        }
        goto tuple_build_noexception_24;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_24:;
        Py_DECREF(tmp_mod_expr_right_24);
        goto try_except_handler_71;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_24:;
        tmp_raise_value_24 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_24, tmp_mod_expr_right_24);
        Py_DECREF(tmp_mod_expr_right_24);
        if (tmp_raise_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto try_except_handler_71;
        }
        exception_type = tmp_raise_type_24;
        Py_INCREF(tmp_raise_type_24);
        exception_value = tmp_raise_value_24;
        exception_lineno = 580;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_71;
    }
    branch_no_71:;
    goto branch_end_70;
    branch_no_70:;
    {
        PyObject *tmp_assign_source_185;
        tmp_assign_source_185 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_24__prepared == NULL);
        tmp_class_creation_24__prepared = tmp_assign_source_185;
    }
    branch_end_70:;
    {
        PyObject *tmp_assign_source_186;
        outline_23_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_24;
            CHECK_OBJECT(tmp_class_creation_24__prepared);
            tmp_set_locals_24 = tmp_class_creation_24__prepared;
            locals_pandas$errors$$$class__24_PyperclipWindowsException_580 = tmp_set_locals_24;
            Py_INCREF(tmp_set_locals_24);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__24_PyperclipWindowsException_580, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto try_except_handler_73;
        }
        tmp_dictset_value = mod_consts[124];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__24_PyperclipWindowsException_580, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto try_except_handler_73;
        }
        tmp_dictset_value = mod_consts[123];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__24_PyperclipWindowsException_580, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto try_except_handler_73;
        }
        frame_c7cebc124f029485d0e2058d61f3e096_4 = MAKE_CLASS_FRAME(tstate, codeobj_c7cebc124f029485d0e2058d61f3e096, module_pandas$errors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_c7cebc124f029485d0e2058d61f3e096_4);
        assert(Py_REFCNT(frame_c7cebc124f029485d0e2058d61f3e096_4) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_4;
            struct Nuitka_CellObject *tmp_closure_2[1];
            tmp_annotations_4 = DICT_COPY(mod_consts[125]);

            tmp_closure_2[0] = outline_23_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_dictset_value = MAKE_FUNCTION_pandas$errors$$$function__4___init__(tmp_annotations_4, tmp_closure_2);

            tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__24_PyperclipWindowsException_580, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 588;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c7cebc124f029485d0e2058d61f3e096_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c7cebc124f029485d0e2058d61f3e096_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c7cebc124f029485d0e2058d61f3e096_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c7cebc124f029485d0e2058d61f3e096_4,
            type_description_2,
            outline_23_var___class__
        );



        assertFrameObject(frame_c7cebc124f029485d0e2058d61f3e096_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_73;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_96;
            PyObject *tmp_cmp_expr_left_24;
            PyObject *tmp_cmp_expr_right_24;
            CHECK_OBJECT(tmp_class_creation_24__bases);
            tmp_cmp_expr_left_24 = tmp_class_creation_24__bases;
            CHECK_OBJECT(tmp_class_creation_24__bases_orig);
            tmp_cmp_expr_right_24 = tmp_class_creation_24__bases_orig;
            tmp_condition_result_96 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
            if (tmp_condition_result_96 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 580;

                goto try_except_handler_73;
            }
            if (tmp_condition_result_96 == NUITKA_BOOL_TRUE) {
                goto branch_yes_72;
            } else {
                goto branch_no_72;
            }
        }
        branch_yes_72:;
        CHECK_OBJECT(tmp_class_creation_24__bases_orig);
        tmp_dictset_value = tmp_class_creation_24__bases_orig;
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__24_PyperclipWindowsException_580, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto try_except_handler_73;
        }
        branch_no_72:;
        {
            PyObject *tmp_assign_source_187;
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_value_48;
            PyObject *tmp_tuple_element_78;
            PyObject *tmp_kwargs_value_48;
            CHECK_OBJECT(tmp_class_creation_24__metaclass);
            tmp_called_value_52 = tmp_class_creation_24__metaclass;
            tmp_tuple_element_78 = mod_consts[123];
            tmp_args_value_48 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_48, 0, tmp_tuple_element_78);
            CHECK_OBJECT(tmp_class_creation_24__bases);
            tmp_tuple_element_78 = tmp_class_creation_24__bases;
            PyTuple_SET_ITEM0(tmp_args_value_48, 1, tmp_tuple_element_78);
            tmp_tuple_element_78 = locals_pandas$errors$$$class__24_PyperclipWindowsException_580;
            PyTuple_SET_ITEM0(tmp_args_value_48, 2, tmp_tuple_element_78);
            CHECK_OBJECT(tmp_class_creation_24__class_decl_dict);
            tmp_kwargs_value_48 = tmp_class_creation_24__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 580;
            tmp_assign_source_187 = CALL_FUNCTION(tstate, tmp_called_value_52, tmp_args_value_48, tmp_kwargs_value_48);
            Py_DECREF(tmp_args_value_48);
            if (tmp_assign_source_187 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 580;

                goto try_except_handler_73;
            }
            assert(Nuitka_Cell_GET(outline_23_var___class__) == NULL);
            PyCell_SET(outline_23_var___class__, tmp_assign_source_187);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_23_var___class__));
        tmp_assign_source_186 = Nuitka_Cell_GET(outline_23_var___class__);
        Py_INCREF(tmp_assign_source_186);
        goto try_return_handler_73;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_73:;
        Py_DECREF(locals_pandas$errors$$$class__24_PyperclipWindowsException_580);
        locals_pandas$errors$$$class__24_PyperclipWindowsException_580 = NULL;
        goto try_return_handler_72;
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

        Py_DECREF(locals_pandas$errors$$$class__24_PyperclipWindowsException_580);
        locals_pandas$errors$$$class__24_PyperclipWindowsException_580 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_71;
        exception_value = exception_keeper_value_71;
        exception_tb = exception_keeper_tb_71;
        exception_lineno = exception_keeper_lineno_71;

        goto try_except_handler_72;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_72:;
        CHECK_OBJECT(outline_23_var___class__);
        Py_DECREF(outline_23_var___class__);
        outline_23_var___class__ = NULL;
        goto outline_result_24;
        // Exception handler code:
        try_except_handler_72:;
        exception_keeper_type_72 = exception_type;
        exception_keeper_value_72 = exception_value;
        exception_keeper_tb_72 = exception_tb;
        exception_keeper_lineno_72 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_72;
        exception_value = exception_keeper_value_72;
        exception_tb = exception_keeper_tb_72;
        exception_lineno = exception_keeper_lineno_72;

        goto outline_exception_24;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_24:;
        exception_lineno = 580;
        goto try_except_handler_71;
        outline_result_24:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_186);
    }
    goto try_end_25;
    // Exception handler code:
    try_except_handler_71:;
    exception_keeper_type_73 = exception_type;
    exception_keeper_value_73 = exception_value;
    exception_keeper_tb_73 = exception_tb;
    exception_keeper_lineno_73 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_24__bases_orig);
    tmp_class_creation_24__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_24__bases);
    tmp_class_creation_24__bases = NULL;
    Py_XDECREF(tmp_class_creation_24__class_decl_dict);
    tmp_class_creation_24__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_24__metaclass);
    tmp_class_creation_24__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_24__prepared);
    tmp_class_creation_24__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_73;
    exception_value = exception_keeper_value_73;
    exception_tb = exception_keeper_tb_73;
    exception_lineno = exception_keeper_lineno_73;

    goto frame_exception_exit_1;
    // End of try:
    try_end_25:;
    CHECK_OBJECT(tmp_class_creation_24__bases_orig);
    Py_DECREF(tmp_class_creation_24__bases_orig);
    tmp_class_creation_24__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_24__bases);
    Py_DECREF(tmp_class_creation_24__bases);
    tmp_class_creation_24__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_24__class_decl_dict);
    Py_DECREF(tmp_class_creation_24__class_decl_dict);
    tmp_class_creation_24__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_24__metaclass);
    Py_DECREF(tmp_class_creation_24__metaclass);
    tmp_class_creation_24__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_24__prepared);
    Py_DECREF(tmp_class_creation_24__prepared);
    tmp_class_creation_24__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_188;
        PyObject *tmp_tuple_element_79;
        tmp_tuple_element_79 = GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_tuple_element_79 == NULL)) {
            tmp_tuple_element_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[127]);
        }

        if (tmp_tuple_element_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_74;
        }
        tmp_assign_source_188 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_188, 0, tmp_tuple_element_79);
        assert(tmp_class_creation_25__bases_orig == NULL);
        tmp_class_creation_25__bases_orig = tmp_assign_source_188;
    }
    {
        PyObject *tmp_assign_source_189;
        PyObject *tmp_dircall_arg1_25;
        CHECK_OBJECT(tmp_class_creation_25__bases_orig);
        tmp_dircall_arg1_25 = tmp_class_creation_25__bases_orig;
        Py_INCREF(tmp_dircall_arg1_25);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_25};
            tmp_assign_source_189 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_74;
        }
        assert(tmp_class_creation_25__bases == NULL);
        tmp_class_creation_25__bases = tmp_assign_source_189;
    }
    {
        PyObject *tmp_assign_source_190;
        tmp_assign_source_190 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_25__class_decl_dict == NULL);
        tmp_class_creation_25__class_decl_dict = tmp_assign_source_190;
    }
    {
        PyObject *tmp_assign_source_191;
        PyObject *tmp_metaclass_value_25;
        nuitka_bool tmp_condition_result_97;
        int tmp_truth_name_25;
        PyObject *tmp_type_arg_49;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_subscript_value_25;
        PyObject *tmp_bases_value_25;
        CHECK_OBJECT(tmp_class_creation_25__bases);
        tmp_truth_name_25 = CHECK_IF_TRUE(tmp_class_creation_25__bases);
        if (tmp_truth_name_25 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_74;
        }
        tmp_condition_result_97 = tmp_truth_name_25 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_97 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_25;
        } else {
            goto condexpr_false_25;
        }
        condexpr_true_25:;
        CHECK_OBJECT(tmp_class_creation_25__bases);
        tmp_expression_value_149 = tmp_class_creation_25__bases;
        tmp_subscript_value_25 = mod_consts[40];
        tmp_type_arg_49 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_149, tmp_subscript_value_25, 0);
        if (tmp_type_arg_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_74;
        }
        tmp_metaclass_value_25 = BUILTIN_TYPE1(tmp_type_arg_49);
        Py_DECREF(tmp_type_arg_49);
        if (tmp_metaclass_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_74;
        }
        goto condexpr_end_25;
        condexpr_false_25:;
        tmp_metaclass_value_25 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_25);
        condexpr_end_25:;
        CHECK_OBJECT(tmp_class_creation_25__bases);
        tmp_bases_value_25 = tmp_class_creation_25__bases;
        tmp_assign_source_191 = SELECT_METACLASS(tstate, tmp_metaclass_value_25, tmp_bases_value_25);
        Py_DECREF(tmp_metaclass_value_25);
        if (tmp_assign_source_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_74;
        }
        assert(tmp_class_creation_25__metaclass == NULL);
        tmp_class_creation_25__metaclass = tmp_assign_source_191;
    }
    {
        bool tmp_condition_result_98;
        PyObject *tmp_expression_value_150;
        CHECK_OBJECT(tmp_class_creation_25__metaclass);
        tmp_expression_value_150 = tmp_class_creation_25__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_150, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_74;
        }
        tmp_condition_result_98 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_98 != false) {
            goto branch_yes_73;
        } else {
            goto branch_no_73;
        }
    }
    branch_yes_73:;
    {
        PyObject *tmp_assign_source_192;
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_args_value_49;
        PyObject *tmp_tuple_element_80;
        PyObject *tmp_kwargs_value_49;
        CHECK_OBJECT(tmp_class_creation_25__metaclass);
        tmp_expression_value_151 = tmp_class_creation_25__metaclass;
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_151, mod_consts[50]);
        if (tmp_called_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_74;
        }
        tmp_tuple_element_80 = mod_consts[128];
        tmp_args_value_49 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_49, 0, tmp_tuple_element_80);
        CHECK_OBJECT(tmp_class_creation_25__bases);
        tmp_tuple_element_80 = tmp_class_creation_25__bases;
        PyTuple_SET_ITEM0(tmp_args_value_49, 1, tmp_tuple_element_80);
        CHECK_OBJECT(tmp_class_creation_25__class_decl_dict);
        tmp_kwargs_value_49 = tmp_class_creation_25__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 594;
        tmp_assign_source_192 = CALL_FUNCTION(tstate, tmp_called_value_53, tmp_args_value_49, tmp_kwargs_value_49);
        Py_DECREF(tmp_called_value_53);
        Py_DECREF(tmp_args_value_49);
        if (tmp_assign_source_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_74;
        }
        assert(tmp_class_creation_25__prepared == NULL);
        tmp_class_creation_25__prepared = tmp_assign_source_192;
    }
    {
        bool tmp_condition_result_99;
        PyObject *tmp_operand_value_25;
        PyObject *tmp_expression_value_152;
        CHECK_OBJECT(tmp_class_creation_25__prepared);
        tmp_expression_value_152 = tmp_class_creation_25__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_152, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_74;
        }
        tmp_operand_value_25 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_25);
        assert(!(tmp_res == -1));
        tmp_condition_result_99 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_99 != false) {
            goto branch_yes_74;
        } else {
            goto branch_no_74;
        }
    }
    branch_yes_74:;
    {
        PyObject *tmp_raise_type_25;
        PyObject *tmp_raise_value_25;
        PyObject *tmp_mod_expr_left_25;
        PyObject *tmp_mod_expr_right_25;
        PyObject *tmp_tuple_element_81;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_name_value_28;
        PyObject *tmp_default_value_25;
        tmp_raise_type_25 = PyExc_TypeError;
        tmp_mod_expr_left_25 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_25__metaclass);
        tmp_expression_value_153 = tmp_class_creation_25__metaclass;
        tmp_name_value_28 = mod_consts[8];
        tmp_default_value_25 = mod_consts[54];
        tmp_tuple_element_81 = BUILTIN_GETATTR(tstate, tmp_expression_value_153, tmp_name_value_28, tmp_default_value_25);
        if (tmp_tuple_element_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_74;
        }
        tmp_mod_expr_right_25 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_154;
            PyObject *tmp_type_arg_50;
            PyTuple_SET_ITEM(tmp_mod_expr_right_25, 0, tmp_tuple_element_81);
            CHECK_OBJECT(tmp_class_creation_25__prepared);
            tmp_type_arg_50 = tmp_class_creation_25__prepared;
            tmp_expression_value_154 = BUILTIN_TYPE1(tmp_type_arg_50);
            assert(!(tmp_expression_value_154 == NULL));
            tmp_tuple_element_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_154, mod_consts[8]);
            Py_DECREF(tmp_expression_value_154);
            if (tmp_tuple_element_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 594;

                goto tuple_build_exception_25;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_25, 1, tmp_tuple_element_81);
        }
        goto tuple_build_noexception_25;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_25:;
        Py_DECREF(tmp_mod_expr_right_25);
        goto try_except_handler_74;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_25:;
        tmp_raise_value_25 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_25, tmp_mod_expr_right_25);
        Py_DECREF(tmp_mod_expr_right_25);
        if (tmp_raise_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_74;
        }
        exception_type = tmp_raise_type_25;
        Py_INCREF(tmp_raise_type_25);
        exception_value = tmp_raise_value_25;
        exception_lineno = 594;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_74;
    }
    branch_no_74:;
    goto branch_end_73;
    branch_no_73:;
    {
        PyObject *tmp_assign_source_193;
        tmp_assign_source_193 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_25__prepared == NULL);
        tmp_class_creation_25__prepared = tmp_assign_source_193;
    }
    branch_end_73:;
    {
        PyObject *tmp_assign_source_194;
        {
            PyObject *tmp_set_locals_25;
            CHECK_OBJECT(tmp_class_creation_25__prepared);
            tmp_set_locals_25 = tmp_class_creation_25__prepared;
            locals_pandas$errors$$$class__25_CSSWarning_594 = tmp_set_locals_25;
            Py_INCREF(tmp_set_locals_25);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__25_CSSWarning_594, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_76;
        }
        tmp_dictset_value = mod_consts[129];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__25_CSSWarning_594, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_76;
        }
        tmp_dictset_value = mod_consts[128];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__25_CSSWarning_594, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_76;
        }
        {
            nuitka_bool tmp_condition_result_100;
            PyObject *tmp_cmp_expr_left_25;
            PyObject *tmp_cmp_expr_right_25;
            CHECK_OBJECT(tmp_class_creation_25__bases);
            tmp_cmp_expr_left_25 = tmp_class_creation_25__bases;
            CHECK_OBJECT(tmp_class_creation_25__bases_orig);
            tmp_cmp_expr_right_25 = tmp_class_creation_25__bases_orig;
            tmp_condition_result_100 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
            if (tmp_condition_result_100 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 594;

                goto try_except_handler_76;
            }
            if (tmp_condition_result_100 == NUITKA_BOOL_TRUE) {
                goto branch_yes_75;
            } else {
                goto branch_no_75;
            }
        }
        branch_yes_75:;
        CHECK_OBJECT(tmp_class_creation_25__bases_orig);
        tmp_dictset_value = tmp_class_creation_25__bases_orig;
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__25_CSSWarning_594, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto try_except_handler_76;
        }
        branch_no_75:;
        {
            PyObject *tmp_assign_source_195;
            PyObject *tmp_called_value_54;
            PyObject *tmp_args_value_50;
            PyObject *tmp_tuple_element_82;
            PyObject *tmp_kwargs_value_50;
            CHECK_OBJECT(tmp_class_creation_25__metaclass);
            tmp_called_value_54 = tmp_class_creation_25__metaclass;
            tmp_tuple_element_82 = mod_consts[128];
            tmp_args_value_50 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_50, 0, tmp_tuple_element_82);
            CHECK_OBJECT(tmp_class_creation_25__bases);
            tmp_tuple_element_82 = tmp_class_creation_25__bases;
            PyTuple_SET_ITEM0(tmp_args_value_50, 1, tmp_tuple_element_82);
            tmp_tuple_element_82 = locals_pandas$errors$$$class__25_CSSWarning_594;
            PyTuple_SET_ITEM0(tmp_args_value_50, 2, tmp_tuple_element_82);
            CHECK_OBJECT(tmp_class_creation_25__class_decl_dict);
            tmp_kwargs_value_50 = tmp_class_creation_25__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 594;
            tmp_assign_source_195 = CALL_FUNCTION(tstate, tmp_called_value_54, tmp_args_value_50, tmp_kwargs_value_50);
            Py_DECREF(tmp_args_value_50);
            if (tmp_assign_source_195 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 594;

                goto try_except_handler_76;
            }
            assert(outline_24_var___class__ == NULL);
            outline_24_var___class__ = tmp_assign_source_195;
        }
        CHECK_OBJECT(outline_24_var___class__);
        tmp_assign_source_194 = outline_24_var___class__;
        Py_INCREF(tmp_assign_source_194);
        goto try_return_handler_76;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_76:;
        Py_DECREF(locals_pandas$errors$$$class__25_CSSWarning_594);
        locals_pandas$errors$$$class__25_CSSWarning_594 = NULL;
        goto try_return_handler_75;
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

        Py_DECREF(locals_pandas$errors$$$class__25_CSSWarning_594);
        locals_pandas$errors$$$class__25_CSSWarning_594 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_74;
        exception_value = exception_keeper_value_74;
        exception_tb = exception_keeper_tb_74;
        exception_lineno = exception_keeper_lineno_74;

        goto try_except_handler_75;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_75:;
        CHECK_OBJECT(outline_24_var___class__);
        Py_DECREF(outline_24_var___class__);
        outline_24_var___class__ = NULL;
        goto outline_result_25;
        // Exception handler code:
        try_except_handler_75:;
        exception_keeper_type_75 = exception_type;
        exception_keeper_value_75 = exception_value;
        exception_keeper_tb_75 = exception_tb;
        exception_keeper_lineno_75 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_75;
        exception_value = exception_keeper_value_75;
        exception_tb = exception_keeper_tb_75;
        exception_lineno = exception_keeper_lineno_75;

        goto outline_exception_25;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_25:;
        exception_lineno = 594;
        goto try_except_handler_74;
        outline_result_25:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_194);
    }
    goto try_end_26;
    // Exception handler code:
    try_except_handler_74:;
    exception_keeper_type_76 = exception_type;
    exception_keeper_value_76 = exception_value;
    exception_keeper_tb_76 = exception_tb;
    exception_keeper_lineno_76 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_25__bases_orig);
    tmp_class_creation_25__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_25__bases);
    tmp_class_creation_25__bases = NULL;
    Py_XDECREF(tmp_class_creation_25__class_decl_dict);
    tmp_class_creation_25__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_25__metaclass);
    tmp_class_creation_25__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_25__prepared);
    tmp_class_creation_25__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_76;
    exception_value = exception_keeper_value_76;
    exception_tb = exception_keeper_tb_76;
    exception_lineno = exception_keeper_lineno_76;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    CHECK_OBJECT(tmp_class_creation_25__bases_orig);
    Py_DECREF(tmp_class_creation_25__bases_orig);
    tmp_class_creation_25__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_25__bases);
    Py_DECREF(tmp_class_creation_25__bases);
    tmp_class_creation_25__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_25__class_decl_dict);
    Py_DECREF(tmp_class_creation_25__class_decl_dict);
    tmp_class_creation_25__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_25__metaclass);
    Py_DECREF(tmp_class_creation_25__metaclass);
    tmp_class_creation_25__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_25__prepared);
    Py_DECREF(tmp_class_creation_25__prepared);
    tmp_class_creation_25__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_196;
        PyObject *tmp_dircall_arg1_26;
        tmp_dircall_arg1_26 = mod_consts[89];
        Py_INCREF(tmp_dircall_arg1_26);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_26};
            tmp_assign_source_196 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;

            goto try_except_handler_77;
        }
        assert(tmp_class_creation_26__bases == NULL);
        tmp_class_creation_26__bases = tmp_assign_source_196;
    }
    {
        PyObject *tmp_assign_source_197;
        tmp_assign_source_197 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_26__class_decl_dict == NULL);
        tmp_class_creation_26__class_decl_dict = tmp_assign_source_197;
    }
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_metaclass_value_26;
        nuitka_bool tmp_condition_result_101;
        int tmp_truth_name_26;
        PyObject *tmp_type_arg_51;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_subscript_value_26;
        PyObject *tmp_bases_value_26;
        CHECK_OBJECT(tmp_class_creation_26__bases);
        tmp_truth_name_26 = CHECK_IF_TRUE(tmp_class_creation_26__bases);
        if (tmp_truth_name_26 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;

            goto try_except_handler_77;
        }
        tmp_condition_result_101 = tmp_truth_name_26 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_101 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_26;
        } else {
            goto condexpr_false_26;
        }
        condexpr_true_26:;
        CHECK_OBJECT(tmp_class_creation_26__bases);
        tmp_expression_value_155 = tmp_class_creation_26__bases;
        tmp_subscript_value_26 = mod_consts[40];
        tmp_type_arg_51 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_155, tmp_subscript_value_26, 0);
        if (tmp_type_arg_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;

            goto try_except_handler_77;
        }
        tmp_metaclass_value_26 = BUILTIN_TYPE1(tmp_type_arg_51);
        Py_DECREF(tmp_type_arg_51);
        if (tmp_metaclass_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;

            goto try_except_handler_77;
        }
        goto condexpr_end_26;
        condexpr_false_26:;
        tmp_metaclass_value_26 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_26);
        condexpr_end_26:;
        CHECK_OBJECT(tmp_class_creation_26__bases);
        tmp_bases_value_26 = tmp_class_creation_26__bases;
        tmp_assign_source_198 = SELECT_METACLASS(tstate, tmp_metaclass_value_26, tmp_bases_value_26);
        Py_DECREF(tmp_metaclass_value_26);
        if (tmp_assign_source_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;

            goto try_except_handler_77;
        }
        assert(tmp_class_creation_26__metaclass == NULL);
        tmp_class_creation_26__metaclass = tmp_assign_source_198;
    }
    {
        bool tmp_condition_result_102;
        PyObject *tmp_expression_value_156;
        CHECK_OBJECT(tmp_class_creation_26__metaclass);
        tmp_expression_value_156 = tmp_class_creation_26__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_156, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;

            goto try_except_handler_77;
        }
        tmp_condition_result_102 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_102 != false) {
            goto branch_yes_76;
        } else {
            goto branch_no_76;
        }
    }
    branch_yes_76:;
    {
        PyObject *tmp_assign_source_199;
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_157;
        PyObject *tmp_args_value_51;
        PyObject *tmp_tuple_element_83;
        PyObject *tmp_kwargs_value_51;
        CHECK_OBJECT(tmp_class_creation_26__metaclass);
        tmp_expression_value_157 = tmp_class_creation_26__metaclass;
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_157, mod_consts[50]);
        if (tmp_called_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;

            goto try_except_handler_77;
        }
        tmp_tuple_element_83 = mod_consts[130];
        tmp_args_value_51 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_51, 0, tmp_tuple_element_83);
        CHECK_OBJECT(tmp_class_creation_26__bases);
        tmp_tuple_element_83 = tmp_class_creation_26__bases;
        PyTuple_SET_ITEM0(tmp_args_value_51, 1, tmp_tuple_element_83);
        CHECK_OBJECT(tmp_class_creation_26__class_decl_dict);
        tmp_kwargs_value_51 = tmp_class_creation_26__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 615;
        tmp_assign_source_199 = CALL_FUNCTION(tstate, tmp_called_value_55, tmp_args_value_51, tmp_kwargs_value_51);
        Py_DECREF(tmp_called_value_55);
        Py_DECREF(tmp_args_value_51);
        if (tmp_assign_source_199 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;

            goto try_except_handler_77;
        }
        assert(tmp_class_creation_26__prepared == NULL);
        tmp_class_creation_26__prepared = tmp_assign_source_199;
    }
    {
        bool tmp_condition_result_103;
        PyObject *tmp_operand_value_26;
        PyObject *tmp_expression_value_158;
        CHECK_OBJECT(tmp_class_creation_26__prepared);
        tmp_expression_value_158 = tmp_class_creation_26__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_158, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;

            goto try_except_handler_77;
        }
        tmp_operand_value_26 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_26);
        assert(!(tmp_res == -1));
        tmp_condition_result_103 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_103 != false) {
            goto branch_yes_77;
        } else {
            goto branch_no_77;
        }
    }
    branch_yes_77:;
    {
        PyObject *tmp_raise_type_26;
        PyObject *tmp_raise_value_26;
        PyObject *tmp_mod_expr_left_26;
        PyObject *tmp_mod_expr_right_26;
        PyObject *tmp_tuple_element_84;
        PyObject *tmp_expression_value_159;
        PyObject *tmp_name_value_29;
        PyObject *tmp_default_value_26;
        tmp_raise_type_26 = PyExc_TypeError;
        tmp_mod_expr_left_26 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_26__metaclass);
        tmp_expression_value_159 = tmp_class_creation_26__metaclass;
        tmp_name_value_29 = mod_consts[8];
        tmp_default_value_26 = mod_consts[54];
        tmp_tuple_element_84 = BUILTIN_GETATTR(tstate, tmp_expression_value_159, tmp_name_value_29, tmp_default_value_26);
        if (tmp_tuple_element_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;

            goto try_except_handler_77;
        }
        tmp_mod_expr_right_26 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_160;
            PyObject *tmp_type_arg_52;
            PyTuple_SET_ITEM(tmp_mod_expr_right_26, 0, tmp_tuple_element_84);
            CHECK_OBJECT(tmp_class_creation_26__prepared);
            tmp_type_arg_52 = tmp_class_creation_26__prepared;
            tmp_expression_value_160 = BUILTIN_TYPE1(tmp_type_arg_52);
            assert(!(tmp_expression_value_160 == NULL));
            tmp_tuple_element_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_160, mod_consts[8]);
            Py_DECREF(tmp_expression_value_160);
            if (tmp_tuple_element_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 615;

                goto tuple_build_exception_26;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_26, 1, tmp_tuple_element_84);
        }
        goto tuple_build_noexception_26;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_26:;
        Py_DECREF(tmp_mod_expr_right_26);
        goto try_except_handler_77;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_26:;
        tmp_raise_value_26 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_26, tmp_mod_expr_right_26);
        Py_DECREF(tmp_mod_expr_right_26);
        if (tmp_raise_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;

            goto try_except_handler_77;
        }
        exception_type = tmp_raise_type_26;
        Py_INCREF(tmp_raise_type_26);
        exception_value = tmp_raise_value_26;
        exception_lineno = 615;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_77;
    }
    branch_no_77:;
    goto branch_end_76;
    branch_no_76:;
    {
        PyObject *tmp_assign_source_200;
        tmp_assign_source_200 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_26__prepared == NULL);
        tmp_class_creation_26__prepared = tmp_assign_source_200;
    }
    branch_end_76:;
    {
        PyObject *tmp_assign_source_201;
        {
            PyObject *tmp_set_locals_26;
            CHECK_OBJECT(tmp_class_creation_26__prepared);
            tmp_set_locals_26 = tmp_class_creation_26__prepared;
            locals_pandas$errors$$$class__26_PossibleDataLossError_615 = tmp_set_locals_26;
            Py_INCREF(tmp_set_locals_26);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__26_PossibleDataLossError_615, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;

            goto try_except_handler_79;
        }
        tmp_dictset_value = mod_consts[131];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__26_PossibleDataLossError_615, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;

            goto try_except_handler_79;
        }
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__26_PossibleDataLossError_615, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;

            goto try_except_handler_79;
        }
        {
            nuitka_bool tmp_condition_result_104;
            PyObject *tmp_cmp_expr_left_26;
            PyObject *tmp_cmp_expr_right_26;
            CHECK_OBJECT(tmp_class_creation_26__bases);
            tmp_cmp_expr_left_26 = tmp_class_creation_26__bases;
            tmp_cmp_expr_right_26 = mod_consts[89];
            tmp_condition_result_104 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_26, tmp_cmp_expr_right_26);
            if (tmp_condition_result_104 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 615;

                goto try_except_handler_79;
            }
            if (tmp_condition_result_104 == NUITKA_BOOL_TRUE) {
                goto branch_yes_78;
            } else {
                goto branch_no_78;
            }
        }
        branch_yes_78:;
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__26_PossibleDataLossError_615, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;

            goto try_except_handler_79;
        }
        branch_no_78:;
        {
            PyObject *tmp_assign_source_202;
            PyObject *tmp_called_value_56;
            PyObject *tmp_args_value_52;
            PyObject *tmp_tuple_element_85;
            PyObject *tmp_kwargs_value_52;
            CHECK_OBJECT(tmp_class_creation_26__metaclass);
            tmp_called_value_56 = tmp_class_creation_26__metaclass;
            tmp_tuple_element_85 = mod_consts[130];
            tmp_args_value_52 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_52, 0, tmp_tuple_element_85);
            CHECK_OBJECT(tmp_class_creation_26__bases);
            tmp_tuple_element_85 = tmp_class_creation_26__bases;
            PyTuple_SET_ITEM0(tmp_args_value_52, 1, tmp_tuple_element_85);
            tmp_tuple_element_85 = locals_pandas$errors$$$class__26_PossibleDataLossError_615;
            PyTuple_SET_ITEM0(tmp_args_value_52, 2, tmp_tuple_element_85);
            CHECK_OBJECT(tmp_class_creation_26__class_decl_dict);
            tmp_kwargs_value_52 = tmp_class_creation_26__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 615;
            tmp_assign_source_202 = CALL_FUNCTION(tstate, tmp_called_value_56, tmp_args_value_52, tmp_kwargs_value_52);
            Py_DECREF(tmp_args_value_52);
            if (tmp_assign_source_202 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 615;

                goto try_except_handler_79;
            }
            assert(outline_25_var___class__ == NULL);
            outline_25_var___class__ = tmp_assign_source_202;
        }
        CHECK_OBJECT(outline_25_var___class__);
        tmp_assign_source_201 = outline_25_var___class__;
        Py_INCREF(tmp_assign_source_201);
        goto try_return_handler_79;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_79:;
        Py_DECREF(locals_pandas$errors$$$class__26_PossibleDataLossError_615);
        locals_pandas$errors$$$class__26_PossibleDataLossError_615 = NULL;
        goto try_return_handler_78;
        // Exception handler code:
        try_except_handler_79:;
        exception_keeper_type_77 = exception_type;
        exception_keeper_value_77 = exception_value;
        exception_keeper_tb_77 = exception_tb;
        exception_keeper_lineno_77 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$errors$$$class__26_PossibleDataLossError_615);
        locals_pandas$errors$$$class__26_PossibleDataLossError_615 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_77;
        exception_value = exception_keeper_value_77;
        exception_tb = exception_keeper_tb_77;
        exception_lineno = exception_keeper_lineno_77;

        goto try_except_handler_78;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_78:;
        CHECK_OBJECT(outline_25_var___class__);
        Py_DECREF(outline_25_var___class__);
        outline_25_var___class__ = NULL;
        goto outline_result_26;
        // Exception handler code:
        try_except_handler_78:;
        exception_keeper_type_78 = exception_type;
        exception_keeper_value_78 = exception_value;
        exception_keeper_tb_78 = exception_tb;
        exception_keeper_lineno_78 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_78;
        exception_value = exception_keeper_value_78;
        exception_tb = exception_keeper_tb_78;
        exception_lineno = exception_keeper_lineno_78;

        goto outline_exception_26;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_26:;
        exception_lineno = 615;
        goto try_except_handler_77;
        outline_result_26:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_201);
    }
    goto try_end_27;
    // Exception handler code:
    try_except_handler_77:;
    exception_keeper_type_79 = exception_type;
    exception_keeper_value_79 = exception_value;
    exception_keeper_tb_79 = exception_tb;
    exception_keeper_lineno_79 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_26__bases);
    tmp_class_creation_26__bases = NULL;
    Py_XDECREF(tmp_class_creation_26__class_decl_dict);
    tmp_class_creation_26__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_26__metaclass);
    tmp_class_creation_26__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_26__prepared);
    tmp_class_creation_26__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_79;
    exception_value = exception_keeper_value_79;
    exception_tb = exception_keeper_tb_79;
    exception_lineno = exception_keeper_lineno_79;

    goto frame_exception_exit_1;
    // End of try:
    try_end_27:;
    CHECK_OBJECT(tmp_class_creation_26__bases);
    Py_DECREF(tmp_class_creation_26__bases);
    tmp_class_creation_26__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_26__class_decl_dict);
    Py_DECREF(tmp_class_creation_26__class_decl_dict);
    tmp_class_creation_26__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_26__metaclass);
    Py_DECREF(tmp_class_creation_26__metaclass);
    tmp_class_creation_26__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_26__prepared);
    Py_DECREF(tmp_class_creation_26__prepared);
    tmp_class_creation_26__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_203;
        PyObject *tmp_dircall_arg1_27;
        tmp_dircall_arg1_27 = mod_consts[89];
        Py_INCREF(tmp_dircall_arg1_27);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_27};
            tmp_assign_source_203 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;

            goto try_except_handler_80;
        }
        assert(tmp_class_creation_27__bases == NULL);
        tmp_class_creation_27__bases = tmp_assign_source_203;
    }
    {
        PyObject *tmp_assign_source_204;
        tmp_assign_source_204 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_27__class_decl_dict == NULL);
        tmp_class_creation_27__class_decl_dict = tmp_assign_source_204;
    }
    {
        PyObject *tmp_assign_source_205;
        PyObject *tmp_metaclass_value_27;
        nuitka_bool tmp_condition_result_105;
        int tmp_truth_name_27;
        PyObject *tmp_type_arg_53;
        PyObject *tmp_expression_value_161;
        PyObject *tmp_subscript_value_27;
        PyObject *tmp_bases_value_27;
        CHECK_OBJECT(tmp_class_creation_27__bases);
        tmp_truth_name_27 = CHECK_IF_TRUE(tmp_class_creation_27__bases);
        if (tmp_truth_name_27 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;

            goto try_except_handler_80;
        }
        tmp_condition_result_105 = tmp_truth_name_27 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_105 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_27;
        } else {
            goto condexpr_false_27;
        }
        condexpr_true_27:;
        CHECK_OBJECT(tmp_class_creation_27__bases);
        tmp_expression_value_161 = tmp_class_creation_27__bases;
        tmp_subscript_value_27 = mod_consts[40];
        tmp_type_arg_53 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_161, tmp_subscript_value_27, 0);
        if (tmp_type_arg_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;

            goto try_except_handler_80;
        }
        tmp_metaclass_value_27 = BUILTIN_TYPE1(tmp_type_arg_53);
        Py_DECREF(tmp_type_arg_53);
        if (tmp_metaclass_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;

            goto try_except_handler_80;
        }
        goto condexpr_end_27;
        condexpr_false_27:;
        tmp_metaclass_value_27 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_27);
        condexpr_end_27:;
        CHECK_OBJECT(tmp_class_creation_27__bases);
        tmp_bases_value_27 = tmp_class_creation_27__bases;
        tmp_assign_source_205 = SELECT_METACLASS(tstate, tmp_metaclass_value_27, tmp_bases_value_27);
        Py_DECREF(tmp_metaclass_value_27);
        if (tmp_assign_source_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;

            goto try_except_handler_80;
        }
        assert(tmp_class_creation_27__metaclass == NULL);
        tmp_class_creation_27__metaclass = tmp_assign_source_205;
    }
    {
        bool tmp_condition_result_106;
        PyObject *tmp_expression_value_162;
        CHECK_OBJECT(tmp_class_creation_27__metaclass);
        tmp_expression_value_162 = tmp_class_creation_27__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_162, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;

            goto try_except_handler_80;
        }
        tmp_condition_result_106 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_106 != false) {
            goto branch_yes_79;
        } else {
            goto branch_no_79;
        }
    }
    branch_yes_79:;
    {
        PyObject *tmp_assign_source_206;
        PyObject *tmp_called_value_57;
        PyObject *tmp_expression_value_163;
        PyObject *tmp_args_value_53;
        PyObject *tmp_tuple_element_86;
        PyObject *tmp_kwargs_value_53;
        CHECK_OBJECT(tmp_class_creation_27__metaclass);
        tmp_expression_value_163 = tmp_class_creation_27__metaclass;
        tmp_called_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_163, mod_consts[50]);
        if (tmp_called_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;

            goto try_except_handler_80;
        }
        tmp_tuple_element_86 = mod_consts[132];
        tmp_args_value_53 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_53, 0, tmp_tuple_element_86);
        CHECK_OBJECT(tmp_class_creation_27__bases);
        tmp_tuple_element_86 = tmp_class_creation_27__bases;
        PyTuple_SET_ITEM0(tmp_args_value_53, 1, tmp_tuple_element_86);
        CHECK_OBJECT(tmp_class_creation_27__class_decl_dict);
        tmp_kwargs_value_53 = tmp_class_creation_27__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 627;
        tmp_assign_source_206 = CALL_FUNCTION(tstate, tmp_called_value_57, tmp_args_value_53, tmp_kwargs_value_53);
        Py_DECREF(tmp_called_value_57);
        Py_DECREF(tmp_args_value_53);
        if (tmp_assign_source_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;

            goto try_except_handler_80;
        }
        assert(tmp_class_creation_27__prepared == NULL);
        tmp_class_creation_27__prepared = tmp_assign_source_206;
    }
    {
        bool tmp_condition_result_107;
        PyObject *tmp_operand_value_27;
        PyObject *tmp_expression_value_164;
        CHECK_OBJECT(tmp_class_creation_27__prepared);
        tmp_expression_value_164 = tmp_class_creation_27__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_164, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;

            goto try_except_handler_80;
        }
        tmp_operand_value_27 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_27);
        assert(!(tmp_res == -1));
        tmp_condition_result_107 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_107 != false) {
            goto branch_yes_80;
        } else {
            goto branch_no_80;
        }
    }
    branch_yes_80:;
    {
        PyObject *tmp_raise_type_27;
        PyObject *tmp_raise_value_27;
        PyObject *tmp_mod_expr_left_27;
        PyObject *tmp_mod_expr_right_27;
        PyObject *tmp_tuple_element_87;
        PyObject *tmp_expression_value_165;
        PyObject *tmp_name_value_30;
        PyObject *tmp_default_value_27;
        tmp_raise_type_27 = PyExc_TypeError;
        tmp_mod_expr_left_27 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_27__metaclass);
        tmp_expression_value_165 = tmp_class_creation_27__metaclass;
        tmp_name_value_30 = mod_consts[8];
        tmp_default_value_27 = mod_consts[54];
        tmp_tuple_element_87 = BUILTIN_GETATTR(tstate, tmp_expression_value_165, tmp_name_value_30, tmp_default_value_27);
        if (tmp_tuple_element_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;

            goto try_except_handler_80;
        }
        tmp_mod_expr_right_27 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_166;
            PyObject *tmp_type_arg_54;
            PyTuple_SET_ITEM(tmp_mod_expr_right_27, 0, tmp_tuple_element_87);
            CHECK_OBJECT(tmp_class_creation_27__prepared);
            tmp_type_arg_54 = tmp_class_creation_27__prepared;
            tmp_expression_value_166 = BUILTIN_TYPE1(tmp_type_arg_54);
            assert(!(tmp_expression_value_166 == NULL));
            tmp_tuple_element_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_166, mod_consts[8]);
            Py_DECREF(tmp_expression_value_166);
            if (tmp_tuple_element_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;

                goto tuple_build_exception_27;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_27, 1, tmp_tuple_element_87);
        }
        goto tuple_build_noexception_27;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_27:;
        Py_DECREF(tmp_mod_expr_right_27);
        goto try_except_handler_80;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_27:;
        tmp_raise_value_27 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_27, tmp_mod_expr_right_27);
        Py_DECREF(tmp_mod_expr_right_27);
        if (tmp_raise_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;

            goto try_except_handler_80;
        }
        exception_type = tmp_raise_type_27;
        Py_INCREF(tmp_raise_type_27);
        exception_value = tmp_raise_value_27;
        exception_lineno = 627;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_80;
    }
    branch_no_80:;
    goto branch_end_79;
    branch_no_79:;
    {
        PyObject *tmp_assign_source_207;
        tmp_assign_source_207 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_27__prepared == NULL);
        tmp_class_creation_27__prepared = tmp_assign_source_207;
    }
    branch_end_79:;
    {
        PyObject *tmp_assign_source_208;
        {
            PyObject *tmp_set_locals_27;
            CHECK_OBJECT(tmp_class_creation_27__prepared);
            tmp_set_locals_27 = tmp_class_creation_27__prepared;
            locals_pandas$errors$$$class__27_ClosedFileError_627 = tmp_set_locals_27;
            Py_INCREF(tmp_set_locals_27);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__27_ClosedFileError_627, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;

            goto try_except_handler_82;
        }
        tmp_dictset_value = mod_consts[133];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__27_ClosedFileError_627, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;

            goto try_except_handler_82;
        }
        tmp_dictset_value = mod_consts[132];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__27_ClosedFileError_627, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;

            goto try_except_handler_82;
        }
        {
            nuitka_bool tmp_condition_result_108;
            PyObject *tmp_cmp_expr_left_27;
            PyObject *tmp_cmp_expr_right_27;
            CHECK_OBJECT(tmp_class_creation_27__bases);
            tmp_cmp_expr_left_27 = tmp_class_creation_27__bases;
            tmp_cmp_expr_right_27 = mod_consts[89];
            tmp_condition_result_108 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_27, tmp_cmp_expr_right_27);
            if (tmp_condition_result_108 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;

                goto try_except_handler_82;
            }
            if (tmp_condition_result_108 == NUITKA_BOOL_TRUE) {
                goto branch_yes_81;
            } else {
                goto branch_no_81;
            }
        }
        branch_yes_81:;
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__27_ClosedFileError_627, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;

            goto try_except_handler_82;
        }
        branch_no_81:;
        {
            PyObject *tmp_assign_source_209;
            PyObject *tmp_called_value_58;
            PyObject *tmp_args_value_54;
            PyObject *tmp_tuple_element_88;
            PyObject *tmp_kwargs_value_54;
            CHECK_OBJECT(tmp_class_creation_27__metaclass);
            tmp_called_value_58 = tmp_class_creation_27__metaclass;
            tmp_tuple_element_88 = mod_consts[132];
            tmp_args_value_54 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_54, 0, tmp_tuple_element_88);
            CHECK_OBJECT(tmp_class_creation_27__bases);
            tmp_tuple_element_88 = tmp_class_creation_27__bases;
            PyTuple_SET_ITEM0(tmp_args_value_54, 1, tmp_tuple_element_88);
            tmp_tuple_element_88 = locals_pandas$errors$$$class__27_ClosedFileError_627;
            PyTuple_SET_ITEM0(tmp_args_value_54, 2, tmp_tuple_element_88);
            CHECK_OBJECT(tmp_class_creation_27__class_decl_dict);
            tmp_kwargs_value_54 = tmp_class_creation_27__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 627;
            tmp_assign_source_209 = CALL_FUNCTION(tstate, tmp_called_value_58, tmp_args_value_54, tmp_kwargs_value_54);
            Py_DECREF(tmp_args_value_54);
            if (tmp_assign_source_209 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;

                goto try_except_handler_82;
            }
            assert(outline_26_var___class__ == NULL);
            outline_26_var___class__ = tmp_assign_source_209;
        }
        CHECK_OBJECT(outline_26_var___class__);
        tmp_assign_source_208 = outline_26_var___class__;
        Py_INCREF(tmp_assign_source_208);
        goto try_return_handler_82;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_82:;
        Py_DECREF(locals_pandas$errors$$$class__27_ClosedFileError_627);
        locals_pandas$errors$$$class__27_ClosedFileError_627 = NULL;
        goto try_return_handler_81;
        // Exception handler code:
        try_except_handler_82:;
        exception_keeper_type_80 = exception_type;
        exception_keeper_value_80 = exception_value;
        exception_keeper_tb_80 = exception_tb;
        exception_keeper_lineno_80 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$errors$$$class__27_ClosedFileError_627);
        locals_pandas$errors$$$class__27_ClosedFileError_627 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_80;
        exception_value = exception_keeper_value_80;
        exception_tb = exception_keeper_tb_80;
        exception_lineno = exception_keeper_lineno_80;

        goto try_except_handler_81;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_81:;
        CHECK_OBJECT(outline_26_var___class__);
        Py_DECREF(outline_26_var___class__);
        outline_26_var___class__ = NULL;
        goto outline_result_27;
        // Exception handler code:
        try_except_handler_81:;
        exception_keeper_type_81 = exception_type;
        exception_keeper_value_81 = exception_value;
        exception_keeper_tb_81 = exception_tb;
        exception_keeper_lineno_81 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_81;
        exception_value = exception_keeper_value_81;
        exception_tb = exception_keeper_tb_81;
        exception_lineno = exception_keeper_lineno_81;

        goto outline_exception_27;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_27:;
        exception_lineno = 627;
        goto try_except_handler_80;
        outline_result_27:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_208);
    }
    goto try_end_28;
    // Exception handler code:
    try_except_handler_80:;
    exception_keeper_type_82 = exception_type;
    exception_keeper_value_82 = exception_value;
    exception_keeper_tb_82 = exception_tb;
    exception_keeper_lineno_82 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_27__bases);
    tmp_class_creation_27__bases = NULL;
    Py_XDECREF(tmp_class_creation_27__class_decl_dict);
    tmp_class_creation_27__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_27__metaclass);
    tmp_class_creation_27__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_27__prepared);
    tmp_class_creation_27__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_82;
    exception_value = exception_keeper_value_82;
    exception_tb = exception_keeper_tb_82;
    exception_lineno = exception_keeper_lineno_82;

    goto frame_exception_exit_1;
    // End of try:
    try_end_28:;
    CHECK_OBJECT(tmp_class_creation_27__bases);
    Py_DECREF(tmp_class_creation_27__bases);
    tmp_class_creation_27__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_27__class_decl_dict);
    Py_DECREF(tmp_class_creation_27__class_decl_dict);
    tmp_class_creation_27__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_27__metaclass);
    Py_DECREF(tmp_class_creation_27__metaclass);
    tmp_class_creation_27__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_27__prepared);
    Py_DECREF(tmp_class_creation_27__prepared);
    tmp_class_creation_27__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_210;
        PyObject *tmp_tuple_element_89;
        tmp_tuple_element_89 = GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_tuple_element_89 == NULL)) {
            tmp_tuple_element_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_tuple_element_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;

            goto try_except_handler_83;
        }
        tmp_assign_source_210 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_210, 0, tmp_tuple_element_89);
        assert(tmp_class_creation_28__bases_orig == NULL);
        tmp_class_creation_28__bases_orig = tmp_assign_source_210;
    }
    {
        PyObject *tmp_assign_source_211;
        PyObject *tmp_dircall_arg1_28;
        CHECK_OBJECT(tmp_class_creation_28__bases_orig);
        tmp_dircall_arg1_28 = tmp_class_creation_28__bases_orig;
        Py_INCREF(tmp_dircall_arg1_28);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_28};
            tmp_assign_source_211 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_211 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;

            goto try_except_handler_83;
        }
        assert(tmp_class_creation_28__bases == NULL);
        tmp_class_creation_28__bases = tmp_assign_source_211;
    }
    {
        PyObject *tmp_assign_source_212;
        tmp_assign_source_212 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_28__class_decl_dict == NULL);
        tmp_class_creation_28__class_decl_dict = tmp_assign_source_212;
    }
    {
        PyObject *tmp_assign_source_213;
        PyObject *tmp_metaclass_value_28;
        nuitka_bool tmp_condition_result_109;
        int tmp_truth_name_28;
        PyObject *tmp_type_arg_55;
        PyObject *tmp_expression_value_167;
        PyObject *tmp_subscript_value_28;
        PyObject *tmp_bases_value_28;
        CHECK_OBJECT(tmp_class_creation_28__bases);
        tmp_truth_name_28 = CHECK_IF_TRUE(tmp_class_creation_28__bases);
        if (tmp_truth_name_28 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;

            goto try_except_handler_83;
        }
        tmp_condition_result_109 = tmp_truth_name_28 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_109 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_28;
        } else {
            goto condexpr_false_28;
        }
        condexpr_true_28:;
        CHECK_OBJECT(tmp_class_creation_28__bases);
        tmp_expression_value_167 = tmp_class_creation_28__bases;
        tmp_subscript_value_28 = mod_consts[40];
        tmp_type_arg_55 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_167, tmp_subscript_value_28, 0);
        if (tmp_type_arg_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;

            goto try_except_handler_83;
        }
        tmp_metaclass_value_28 = BUILTIN_TYPE1(tmp_type_arg_55);
        Py_DECREF(tmp_type_arg_55);
        if (tmp_metaclass_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;

            goto try_except_handler_83;
        }
        goto condexpr_end_28;
        condexpr_false_28:;
        tmp_metaclass_value_28 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_28);
        condexpr_end_28:;
        CHECK_OBJECT(tmp_class_creation_28__bases);
        tmp_bases_value_28 = tmp_class_creation_28__bases;
        tmp_assign_source_213 = SELECT_METACLASS(tstate, tmp_metaclass_value_28, tmp_bases_value_28);
        Py_DECREF(tmp_metaclass_value_28);
        if (tmp_assign_source_213 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;

            goto try_except_handler_83;
        }
        assert(tmp_class_creation_28__metaclass == NULL);
        tmp_class_creation_28__metaclass = tmp_assign_source_213;
    }
    {
        bool tmp_condition_result_110;
        PyObject *tmp_expression_value_168;
        CHECK_OBJECT(tmp_class_creation_28__metaclass);
        tmp_expression_value_168 = tmp_class_creation_28__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_168, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;

            goto try_except_handler_83;
        }
        tmp_condition_result_110 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_110 != false) {
            goto branch_yes_82;
        } else {
            goto branch_no_82;
        }
    }
    branch_yes_82:;
    {
        PyObject *tmp_assign_source_214;
        PyObject *tmp_called_value_59;
        PyObject *tmp_expression_value_169;
        PyObject *tmp_args_value_55;
        PyObject *tmp_tuple_element_90;
        PyObject *tmp_kwargs_value_55;
        CHECK_OBJECT(tmp_class_creation_28__metaclass);
        tmp_expression_value_169 = tmp_class_creation_28__metaclass;
        tmp_called_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_169, mod_consts[50]);
        if (tmp_called_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;

            goto try_except_handler_83;
        }
        tmp_tuple_element_90 = mod_consts[134];
        tmp_args_value_55 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_55, 0, tmp_tuple_element_90);
        CHECK_OBJECT(tmp_class_creation_28__bases);
        tmp_tuple_element_90 = tmp_class_creation_28__bases;
        PyTuple_SET_ITEM0(tmp_args_value_55, 1, tmp_tuple_element_90);
        CHECK_OBJECT(tmp_class_creation_28__class_decl_dict);
        tmp_kwargs_value_55 = tmp_class_creation_28__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 640;
        tmp_assign_source_214 = CALL_FUNCTION(tstate, tmp_called_value_59, tmp_args_value_55, tmp_kwargs_value_55);
        Py_DECREF(tmp_called_value_59);
        Py_DECREF(tmp_args_value_55);
        if (tmp_assign_source_214 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;

            goto try_except_handler_83;
        }
        assert(tmp_class_creation_28__prepared == NULL);
        tmp_class_creation_28__prepared = tmp_assign_source_214;
    }
    {
        bool tmp_condition_result_111;
        PyObject *tmp_operand_value_28;
        PyObject *tmp_expression_value_170;
        CHECK_OBJECT(tmp_class_creation_28__prepared);
        tmp_expression_value_170 = tmp_class_creation_28__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_170, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;

            goto try_except_handler_83;
        }
        tmp_operand_value_28 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_28);
        assert(!(tmp_res == -1));
        tmp_condition_result_111 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_111 != false) {
            goto branch_yes_83;
        } else {
            goto branch_no_83;
        }
    }
    branch_yes_83:;
    {
        PyObject *tmp_raise_type_28;
        PyObject *tmp_raise_value_28;
        PyObject *tmp_mod_expr_left_28;
        PyObject *tmp_mod_expr_right_28;
        PyObject *tmp_tuple_element_91;
        PyObject *tmp_expression_value_171;
        PyObject *tmp_name_value_31;
        PyObject *tmp_default_value_28;
        tmp_raise_type_28 = PyExc_TypeError;
        tmp_mod_expr_left_28 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_28__metaclass);
        tmp_expression_value_171 = tmp_class_creation_28__metaclass;
        tmp_name_value_31 = mod_consts[8];
        tmp_default_value_28 = mod_consts[54];
        tmp_tuple_element_91 = BUILTIN_GETATTR(tstate, tmp_expression_value_171, tmp_name_value_31, tmp_default_value_28);
        if (tmp_tuple_element_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;

            goto try_except_handler_83;
        }
        tmp_mod_expr_right_28 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_172;
            PyObject *tmp_type_arg_56;
            PyTuple_SET_ITEM(tmp_mod_expr_right_28, 0, tmp_tuple_element_91);
            CHECK_OBJECT(tmp_class_creation_28__prepared);
            tmp_type_arg_56 = tmp_class_creation_28__prepared;
            tmp_expression_value_172 = BUILTIN_TYPE1(tmp_type_arg_56);
            assert(!(tmp_expression_value_172 == NULL));
            tmp_tuple_element_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_172, mod_consts[8]);
            Py_DECREF(tmp_expression_value_172);
            if (tmp_tuple_element_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;

                goto tuple_build_exception_28;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_28, 1, tmp_tuple_element_91);
        }
        goto tuple_build_noexception_28;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_28:;
        Py_DECREF(tmp_mod_expr_right_28);
        goto try_except_handler_83;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_28:;
        tmp_raise_value_28 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_28, tmp_mod_expr_right_28);
        Py_DECREF(tmp_mod_expr_right_28);
        if (tmp_raise_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;

            goto try_except_handler_83;
        }
        exception_type = tmp_raise_type_28;
        Py_INCREF(tmp_raise_type_28);
        exception_value = tmp_raise_value_28;
        exception_lineno = 640;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_83;
    }
    branch_no_83:;
    goto branch_end_82;
    branch_no_82:;
    {
        PyObject *tmp_assign_source_215;
        tmp_assign_source_215 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_28__prepared == NULL);
        tmp_class_creation_28__prepared = tmp_assign_source_215;
    }
    branch_end_82:;
    {
        PyObject *tmp_assign_source_216;
        {
            PyObject *tmp_set_locals_28;
            CHECK_OBJECT(tmp_class_creation_28__prepared);
            tmp_set_locals_28 = tmp_class_creation_28__prepared;
            locals_pandas$errors$$$class__28_IncompatibilityWarning_640 = tmp_set_locals_28;
            Py_INCREF(tmp_set_locals_28);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__28_IncompatibilityWarning_640, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;

            goto try_except_handler_85;
        }
        tmp_dictset_value = mod_consts[135];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__28_IncompatibilityWarning_640, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;

            goto try_except_handler_85;
        }
        tmp_dictset_value = mod_consts[134];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__28_IncompatibilityWarning_640, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;

            goto try_except_handler_85;
        }
        {
            nuitka_bool tmp_condition_result_112;
            PyObject *tmp_cmp_expr_left_28;
            PyObject *tmp_cmp_expr_right_28;
            CHECK_OBJECT(tmp_class_creation_28__bases);
            tmp_cmp_expr_left_28 = tmp_class_creation_28__bases;
            CHECK_OBJECT(tmp_class_creation_28__bases_orig);
            tmp_cmp_expr_right_28 = tmp_class_creation_28__bases_orig;
            tmp_condition_result_112 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_28, tmp_cmp_expr_right_28);
            if (tmp_condition_result_112 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;

                goto try_except_handler_85;
            }
            if (tmp_condition_result_112 == NUITKA_BOOL_TRUE) {
                goto branch_yes_84;
            } else {
                goto branch_no_84;
            }
        }
        branch_yes_84:;
        CHECK_OBJECT(tmp_class_creation_28__bases_orig);
        tmp_dictset_value = tmp_class_creation_28__bases_orig;
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__28_IncompatibilityWarning_640, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;

            goto try_except_handler_85;
        }
        branch_no_84:;
        {
            PyObject *tmp_assign_source_217;
            PyObject *tmp_called_value_60;
            PyObject *tmp_args_value_56;
            PyObject *tmp_tuple_element_92;
            PyObject *tmp_kwargs_value_56;
            CHECK_OBJECT(tmp_class_creation_28__metaclass);
            tmp_called_value_60 = tmp_class_creation_28__metaclass;
            tmp_tuple_element_92 = mod_consts[134];
            tmp_args_value_56 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_56, 0, tmp_tuple_element_92);
            CHECK_OBJECT(tmp_class_creation_28__bases);
            tmp_tuple_element_92 = tmp_class_creation_28__bases;
            PyTuple_SET_ITEM0(tmp_args_value_56, 1, tmp_tuple_element_92);
            tmp_tuple_element_92 = locals_pandas$errors$$$class__28_IncompatibilityWarning_640;
            PyTuple_SET_ITEM0(tmp_args_value_56, 2, tmp_tuple_element_92);
            CHECK_OBJECT(tmp_class_creation_28__class_decl_dict);
            tmp_kwargs_value_56 = tmp_class_creation_28__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 640;
            tmp_assign_source_217 = CALL_FUNCTION(tstate, tmp_called_value_60, tmp_args_value_56, tmp_kwargs_value_56);
            Py_DECREF(tmp_args_value_56);
            if (tmp_assign_source_217 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 640;

                goto try_except_handler_85;
            }
            assert(outline_27_var___class__ == NULL);
            outline_27_var___class__ = tmp_assign_source_217;
        }
        CHECK_OBJECT(outline_27_var___class__);
        tmp_assign_source_216 = outline_27_var___class__;
        Py_INCREF(tmp_assign_source_216);
        goto try_return_handler_85;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_85:;
        Py_DECREF(locals_pandas$errors$$$class__28_IncompatibilityWarning_640);
        locals_pandas$errors$$$class__28_IncompatibilityWarning_640 = NULL;
        goto try_return_handler_84;
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

        Py_DECREF(locals_pandas$errors$$$class__28_IncompatibilityWarning_640);
        locals_pandas$errors$$$class__28_IncompatibilityWarning_640 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_83;
        exception_value = exception_keeper_value_83;
        exception_tb = exception_keeper_tb_83;
        exception_lineno = exception_keeper_lineno_83;

        goto try_except_handler_84;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_84:;
        CHECK_OBJECT(outline_27_var___class__);
        Py_DECREF(outline_27_var___class__);
        outline_27_var___class__ = NULL;
        goto outline_result_28;
        // Exception handler code:
        try_except_handler_84:;
        exception_keeper_type_84 = exception_type;
        exception_keeper_value_84 = exception_value;
        exception_keeper_tb_84 = exception_tb;
        exception_keeper_lineno_84 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_84;
        exception_value = exception_keeper_value_84;
        exception_tb = exception_keeper_tb_84;
        exception_lineno = exception_keeper_lineno_84;

        goto outline_exception_28;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_28:;
        exception_lineno = 640;
        goto try_except_handler_83;
        outline_result_28:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_216);
    }
    goto try_end_29;
    // Exception handler code:
    try_except_handler_83:;
    exception_keeper_type_85 = exception_type;
    exception_keeper_value_85 = exception_value;
    exception_keeper_tb_85 = exception_tb;
    exception_keeper_lineno_85 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_28__bases_orig);
    tmp_class_creation_28__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_28__bases);
    tmp_class_creation_28__bases = NULL;
    Py_XDECREF(tmp_class_creation_28__class_decl_dict);
    tmp_class_creation_28__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_28__metaclass);
    tmp_class_creation_28__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_28__prepared);
    tmp_class_creation_28__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_85;
    exception_value = exception_keeper_value_85;
    exception_tb = exception_keeper_tb_85;
    exception_lineno = exception_keeper_lineno_85;

    goto frame_exception_exit_1;
    // End of try:
    try_end_29:;
    CHECK_OBJECT(tmp_class_creation_28__bases_orig);
    Py_DECREF(tmp_class_creation_28__bases_orig);
    tmp_class_creation_28__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_28__bases);
    Py_DECREF(tmp_class_creation_28__bases);
    tmp_class_creation_28__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_28__class_decl_dict);
    Py_DECREF(tmp_class_creation_28__class_decl_dict);
    tmp_class_creation_28__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_28__metaclass);
    Py_DECREF(tmp_class_creation_28__metaclass);
    tmp_class_creation_28__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_28__prepared);
    Py_DECREF(tmp_class_creation_28__prepared);
    tmp_class_creation_28__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_218;
        PyObject *tmp_tuple_element_93;
        tmp_tuple_element_93 = GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_tuple_element_93 == NULL)) {
            tmp_tuple_element_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_tuple_element_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;

            goto try_except_handler_86;
        }
        tmp_assign_source_218 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_218, 0, tmp_tuple_element_93);
        assert(tmp_class_creation_29__bases_orig == NULL);
        tmp_class_creation_29__bases_orig = tmp_assign_source_218;
    }
    {
        PyObject *tmp_assign_source_219;
        PyObject *tmp_dircall_arg1_29;
        CHECK_OBJECT(tmp_class_creation_29__bases_orig);
        tmp_dircall_arg1_29 = tmp_class_creation_29__bases_orig;
        Py_INCREF(tmp_dircall_arg1_29);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_29};
            tmp_assign_source_219 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_219 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;

            goto try_except_handler_86;
        }
        assert(tmp_class_creation_29__bases == NULL);
        tmp_class_creation_29__bases = tmp_assign_source_219;
    }
    {
        PyObject *tmp_assign_source_220;
        tmp_assign_source_220 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_29__class_decl_dict == NULL);
        tmp_class_creation_29__class_decl_dict = tmp_assign_source_220;
    }
    {
        PyObject *tmp_assign_source_221;
        PyObject *tmp_metaclass_value_29;
        nuitka_bool tmp_condition_result_113;
        int tmp_truth_name_29;
        PyObject *tmp_type_arg_57;
        PyObject *tmp_expression_value_173;
        PyObject *tmp_subscript_value_29;
        PyObject *tmp_bases_value_29;
        CHECK_OBJECT(tmp_class_creation_29__bases);
        tmp_truth_name_29 = CHECK_IF_TRUE(tmp_class_creation_29__bases);
        if (tmp_truth_name_29 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;

            goto try_except_handler_86;
        }
        tmp_condition_result_113 = tmp_truth_name_29 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_113 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_29;
        } else {
            goto condexpr_false_29;
        }
        condexpr_true_29:;
        CHECK_OBJECT(tmp_class_creation_29__bases);
        tmp_expression_value_173 = tmp_class_creation_29__bases;
        tmp_subscript_value_29 = mod_consts[40];
        tmp_type_arg_57 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_173, tmp_subscript_value_29, 0);
        if (tmp_type_arg_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;

            goto try_except_handler_86;
        }
        tmp_metaclass_value_29 = BUILTIN_TYPE1(tmp_type_arg_57);
        Py_DECREF(tmp_type_arg_57);
        if (tmp_metaclass_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;

            goto try_except_handler_86;
        }
        goto condexpr_end_29;
        condexpr_false_29:;
        tmp_metaclass_value_29 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_29);
        condexpr_end_29:;
        CHECK_OBJECT(tmp_class_creation_29__bases);
        tmp_bases_value_29 = tmp_class_creation_29__bases;
        tmp_assign_source_221 = SELECT_METACLASS(tstate, tmp_metaclass_value_29, tmp_bases_value_29);
        Py_DECREF(tmp_metaclass_value_29);
        if (tmp_assign_source_221 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;

            goto try_except_handler_86;
        }
        assert(tmp_class_creation_29__metaclass == NULL);
        tmp_class_creation_29__metaclass = tmp_assign_source_221;
    }
    {
        bool tmp_condition_result_114;
        PyObject *tmp_expression_value_174;
        CHECK_OBJECT(tmp_class_creation_29__metaclass);
        tmp_expression_value_174 = tmp_class_creation_29__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_174, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;

            goto try_except_handler_86;
        }
        tmp_condition_result_114 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_114 != false) {
            goto branch_yes_85;
        } else {
            goto branch_no_85;
        }
    }
    branch_yes_85:;
    {
        PyObject *tmp_assign_source_222;
        PyObject *tmp_called_value_61;
        PyObject *tmp_expression_value_175;
        PyObject *tmp_args_value_57;
        PyObject *tmp_tuple_element_94;
        PyObject *tmp_kwargs_value_57;
        CHECK_OBJECT(tmp_class_creation_29__metaclass);
        tmp_expression_value_175 = tmp_class_creation_29__metaclass;
        tmp_called_value_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_175, mod_consts[50]);
        if (tmp_called_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;

            goto try_except_handler_86;
        }
        tmp_tuple_element_94 = mod_consts[136];
        tmp_args_value_57 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_57, 0, tmp_tuple_element_94);
        CHECK_OBJECT(tmp_class_creation_29__bases);
        tmp_tuple_element_94 = tmp_class_creation_29__bases;
        PyTuple_SET_ITEM0(tmp_args_value_57, 1, tmp_tuple_element_94);
        CHECK_OBJECT(tmp_class_creation_29__class_decl_dict);
        tmp_kwargs_value_57 = tmp_class_creation_29__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 646;
        tmp_assign_source_222 = CALL_FUNCTION(tstate, tmp_called_value_61, tmp_args_value_57, tmp_kwargs_value_57);
        Py_DECREF(tmp_called_value_61);
        Py_DECREF(tmp_args_value_57);
        if (tmp_assign_source_222 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;

            goto try_except_handler_86;
        }
        assert(tmp_class_creation_29__prepared == NULL);
        tmp_class_creation_29__prepared = tmp_assign_source_222;
    }
    {
        bool tmp_condition_result_115;
        PyObject *tmp_operand_value_29;
        PyObject *tmp_expression_value_176;
        CHECK_OBJECT(tmp_class_creation_29__prepared);
        tmp_expression_value_176 = tmp_class_creation_29__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_176, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;

            goto try_except_handler_86;
        }
        tmp_operand_value_29 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_29);
        assert(!(tmp_res == -1));
        tmp_condition_result_115 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_115 != false) {
            goto branch_yes_86;
        } else {
            goto branch_no_86;
        }
    }
    branch_yes_86:;
    {
        PyObject *tmp_raise_type_29;
        PyObject *tmp_raise_value_29;
        PyObject *tmp_mod_expr_left_29;
        PyObject *tmp_mod_expr_right_29;
        PyObject *tmp_tuple_element_95;
        PyObject *tmp_expression_value_177;
        PyObject *tmp_name_value_32;
        PyObject *tmp_default_value_29;
        tmp_raise_type_29 = PyExc_TypeError;
        tmp_mod_expr_left_29 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_29__metaclass);
        tmp_expression_value_177 = tmp_class_creation_29__metaclass;
        tmp_name_value_32 = mod_consts[8];
        tmp_default_value_29 = mod_consts[54];
        tmp_tuple_element_95 = BUILTIN_GETATTR(tstate, tmp_expression_value_177, tmp_name_value_32, tmp_default_value_29);
        if (tmp_tuple_element_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;

            goto try_except_handler_86;
        }
        tmp_mod_expr_right_29 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_178;
            PyObject *tmp_type_arg_58;
            PyTuple_SET_ITEM(tmp_mod_expr_right_29, 0, tmp_tuple_element_95);
            CHECK_OBJECT(tmp_class_creation_29__prepared);
            tmp_type_arg_58 = tmp_class_creation_29__prepared;
            tmp_expression_value_178 = BUILTIN_TYPE1(tmp_type_arg_58);
            assert(!(tmp_expression_value_178 == NULL));
            tmp_tuple_element_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_178, mod_consts[8]);
            Py_DECREF(tmp_expression_value_178);
            if (tmp_tuple_element_95 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 646;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_29, 1, tmp_tuple_element_95);
        }
        goto tuple_build_noexception_29;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_29:;
        Py_DECREF(tmp_mod_expr_right_29);
        goto try_except_handler_86;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_29:;
        tmp_raise_value_29 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_29, tmp_mod_expr_right_29);
        Py_DECREF(tmp_mod_expr_right_29);
        if (tmp_raise_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;

            goto try_except_handler_86;
        }
        exception_type = tmp_raise_type_29;
        Py_INCREF(tmp_raise_type_29);
        exception_value = tmp_raise_value_29;
        exception_lineno = 646;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_86;
    }
    branch_no_86:;
    goto branch_end_85;
    branch_no_85:;
    {
        PyObject *tmp_assign_source_223;
        tmp_assign_source_223 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_29__prepared == NULL);
        tmp_class_creation_29__prepared = tmp_assign_source_223;
    }
    branch_end_85:;
    {
        PyObject *tmp_assign_source_224;
        {
            PyObject *tmp_set_locals_29;
            CHECK_OBJECT(tmp_class_creation_29__prepared);
            tmp_set_locals_29 = tmp_class_creation_29__prepared;
            locals_pandas$errors$$$class__29_AttributeConflictWarning_646 = tmp_set_locals_29;
            Py_INCREF(tmp_set_locals_29);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__29_AttributeConflictWarning_646, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;

            goto try_except_handler_88;
        }
        tmp_dictset_value = mod_consts[137];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__29_AttributeConflictWarning_646, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;

            goto try_except_handler_88;
        }
        tmp_dictset_value = mod_consts[136];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__29_AttributeConflictWarning_646, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;

            goto try_except_handler_88;
        }
        {
            nuitka_bool tmp_condition_result_116;
            PyObject *tmp_cmp_expr_left_29;
            PyObject *tmp_cmp_expr_right_29;
            CHECK_OBJECT(tmp_class_creation_29__bases);
            tmp_cmp_expr_left_29 = tmp_class_creation_29__bases;
            CHECK_OBJECT(tmp_class_creation_29__bases_orig);
            tmp_cmp_expr_right_29 = tmp_class_creation_29__bases_orig;
            tmp_condition_result_116 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_29, tmp_cmp_expr_right_29);
            if (tmp_condition_result_116 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 646;

                goto try_except_handler_88;
            }
            if (tmp_condition_result_116 == NUITKA_BOOL_TRUE) {
                goto branch_yes_87;
            } else {
                goto branch_no_87;
            }
        }
        branch_yes_87:;
        CHECK_OBJECT(tmp_class_creation_29__bases_orig);
        tmp_dictset_value = tmp_class_creation_29__bases_orig;
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__29_AttributeConflictWarning_646, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;

            goto try_except_handler_88;
        }
        branch_no_87:;
        {
            PyObject *tmp_assign_source_225;
            PyObject *tmp_called_value_62;
            PyObject *tmp_args_value_58;
            PyObject *tmp_tuple_element_96;
            PyObject *tmp_kwargs_value_58;
            CHECK_OBJECT(tmp_class_creation_29__metaclass);
            tmp_called_value_62 = tmp_class_creation_29__metaclass;
            tmp_tuple_element_96 = mod_consts[136];
            tmp_args_value_58 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_58, 0, tmp_tuple_element_96);
            CHECK_OBJECT(tmp_class_creation_29__bases);
            tmp_tuple_element_96 = tmp_class_creation_29__bases;
            PyTuple_SET_ITEM0(tmp_args_value_58, 1, tmp_tuple_element_96);
            tmp_tuple_element_96 = locals_pandas$errors$$$class__29_AttributeConflictWarning_646;
            PyTuple_SET_ITEM0(tmp_args_value_58, 2, tmp_tuple_element_96);
            CHECK_OBJECT(tmp_class_creation_29__class_decl_dict);
            tmp_kwargs_value_58 = tmp_class_creation_29__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 646;
            tmp_assign_source_225 = CALL_FUNCTION(tstate, tmp_called_value_62, tmp_args_value_58, tmp_kwargs_value_58);
            Py_DECREF(tmp_args_value_58);
            if (tmp_assign_source_225 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 646;

                goto try_except_handler_88;
            }
            assert(outline_28_var___class__ == NULL);
            outline_28_var___class__ = tmp_assign_source_225;
        }
        CHECK_OBJECT(outline_28_var___class__);
        tmp_assign_source_224 = outline_28_var___class__;
        Py_INCREF(tmp_assign_source_224);
        goto try_return_handler_88;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_88:;
        Py_DECREF(locals_pandas$errors$$$class__29_AttributeConflictWarning_646);
        locals_pandas$errors$$$class__29_AttributeConflictWarning_646 = NULL;
        goto try_return_handler_87;
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

        Py_DECREF(locals_pandas$errors$$$class__29_AttributeConflictWarning_646);
        locals_pandas$errors$$$class__29_AttributeConflictWarning_646 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_86;
        exception_value = exception_keeper_value_86;
        exception_tb = exception_keeper_tb_86;
        exception_lineno = exception_keeper_lineno_86;

        goto try_except_handler_87;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_87:;
        CHECK_OBJECT(outline_28_var___class__);
        Py_DECREF(outline_28_var___class__);
        outline_28_var___class__ = NULL;
        goto outline_result_29;
        // Exception handler code:
        try_except_handler_87:;
        exception_keeper_type_87 = exception_type;
        exception_keeper_value_87 = exception_value;
        exception_keeper_tb_87 = exception_tb;
        exception_keeper_lineno_87 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_87;
        exception_value = exception_keeper_value_87;
        exception_tb = exception_keeper_tb_87;
        exception_lineno = exception_keeper_lineno_87;

        goto outline_exception_29;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_29:;
        exception_lineno = 646;
        goto try_except_handler_86;
        outline_result_29:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_224);
    }
    goto try_end_30;
    // Exception handler code:
    try_except_handler_86:;
    exception_keeper_type_88 = exception_type;
    exception_keeper_value_88 = exception_value;
    exception_keeper_tb_88 = exception_tb;
    exception_keeper_lineno_88 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_29__bases_orig);
    tmp_class_creation_29__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_29__bases);
    tmp_class_creation_29__bases = NULL;
    Py_XDECREF(tmp_class_creation_29__class_decl_dict);
    tmp_class_creation_29__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_29__metaclass);
    tmp_class_creation_29__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_29__prepared);
    tmp_class_creation_29__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_88;
    exception_value = exception_keeper_value_88;
    exception_tb = exception_keeper_tb_88;
    exception_lineno = exception_keeper_lineno_88;

    goto frame_exception_exit_1;
    // End of try:
    try_end_30:;
    CHECK_OBJECT(tmp_class_creation_29__bases_orig);
    Py_DECREF(tmp_class_creation_29__bases_orig);
    tmp_class_creation_29__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_29__bases);
    Py_DECREF(tmp_class_creation_29__bases);
    tmp_class_creation_29__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_29__class_decl_dict);
    Py_DECREF(tmp_class_creation_29__class_decl_dict);
    tmp_class_creation_29__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_29__metaclass);
    Py_DECREF(tmp_class_creation_29__metaclass);
    tmp_class_creation_29__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_29__prepared);
    Py_DECREF(tmp_class_creation_29__prepared);
    tmp_class_creation_29__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_226;
        PyObject *tmp_dircall_arg1_30;
        tmp_dircall_arg1_30 = mod_consts[138];
        Py_INCREF(tmp_dircall_arg1_30);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_30};
            tmp_assign_source_226 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_226 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_89;
        }
        assert(tmp_class_creation_30__bases == NULL);
        tmp_class_creation_30__bases = tmp_assign_source_226;
    }
    {
        PyObject *tmp_assign_source_227;
        tmp_assign_source_227 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_30__class_decl_dict == NULL);
        tmp_class_creation_30__class_decl_dict = tmp_assign_source_227;
    }
    {
        PyObject *tmp_assign_source_228;
        PyObject *tmp_metaclass_value_30;
        nuitka_bool tmp_condition_result_117;
        int tmp_truth_name_30;
        PyObject *tmp_type_arg_59;
        PyObject *tmp_expression_value_179;
        PyObject *tmp_subscript_value_30;
        PyObject *tmp_bases_value_30;
        CHECK_OBJECT(tmp_class_creation_30__bases);
        tmp_truth_name_30 = CHECK_IF_TRUE(tmp_class_creation_30__bases);
        if (tmp_truth_name_30 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_89;
        }
        tmp_condition_result_117 = tmp_truth_name_30 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_117 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_30;
        } else {
            goto condexpr_false_30;
        }
        condexpr_true_30:;
        CHECK_OBJECT(tmp_class_creation_30__bases);
        tmp_expression_value_179 = tmp_class_creation_30__bases;
        tmp_subscript_value_30 = mod_consts[40];
        tmp_type_arg_59 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_179, tmp_subscript_value_30, 0);
        if (tmp_type_arg_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_89;
        }
        tmp_metaclass_value_30 = BUILTIN_TYPE1(tmp_type_arg_59);
        Py_DECREF(tmp_type_arg_59);
        if (tmp_metaclass_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_89;
        }
        goto condexpr_end_30;
        condexpr_false_30:;
        tmp_metaclass_value_30 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_30);
        condexpr_end_30:;
        CHECK_OBJECT(tmp_class_creation_30__bases);
        tmp_bases_value_30 = tmp_class_creation_30__bases;
        tmp_assign_source_228 = SELECT_METACLASS(tstate, tmp_metaclass_value_30, tmp_bases_value_30);
        Py_DECREF(tmp_metaclass_value_30);
        if (tmp_assign_source_228 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_89;
        }
        assert(tmp_class_creation_30__metaclass == NULL);
        tmp_class_creation_30__metaclass = tmp_assign_source_228;
    }
    {
        bool tmp_condition_result_118;
        PyObject *tmp_expression_value_180;
        CHECK_OBJECT(tmp_class_creation_30__metaclass);
        tmp_expression_value_180 = tmp_class_creation_30__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_180, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_89;
        }
        tmp_condition_result_118 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_118 != false) {
            goto branch_yes_88;
        } else {
            goto branch_no_88;
        }
    }
    branch_yes_88:;
    {
        PyObject *tmp_assign_source_229;
        PyObject *tmp_called_value_63;
        PyObject *tmp_expression_value_181;
        PyObject *tmp_args_value_59;
        PyObject *tmp_tuple_element_97;
        PyObject *tmp_kwargs_value_59;
        CHECK_OBJECT(tmp_class_creation_30__metaclass);
        tmp_expression_value_181 = tmp_class_creation_30__metaclass;
        tmp_called_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_181, mod_consts[50]);
        if (tmp_called_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_89;
        }
        tmp_tuple_element_97 = mod_consts[139];
        tmp_args_value_59 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_59, 0, tmp_tuple_element_97);
        CHECK_OBJECT(tmp_class_creation_30__bases);
        tmp_tuple_element_97 = tmp_class_creation_30__bases;
        PyTuple_SET_ITEM0(tmp_args_value_59, 1, tmp_tuple_element_97);
        CHECK_OBJECT(tmp_class_creation_30__class_decl_dict);
        tmp_kwargs_value_59 = tmp_class_creation_30__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 667;
        tmp_assign_source_229 = CALL_FUNCTION(tstate, tmp_called_value_63, tmp_args_value_59, tmp_kwargs_value_59);
        Py_DECREF(tmp_called_value_63);
        Py_DECREF(tmp_args_value_59);
        if (tmp_assign_source_229 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_89;
        }
        assert(tmp_class_creation_30__prepared == NULL);
        tmp_class_creation_30__prepared = tmp_assign_source_229;
    }
    {
        bool tmp_condition_result_119;
        PyObject *tmp_operand_value_30;
        PyObject *tmp_expression_value_182;
        CHECK_OBJECT(tmp_class_creation_30__prepared);
        tmp_expression_value_182 = tmp_class_creation_30__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_182, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_89;
        }
        tmp_operand_value_30 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_30);
        assert(!(tmp_res == -1));
        tmp_condition_result_119 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_119 != false) {
            goto branch_yes_89;
        } else {
            goto branch_no_89;
        }
    }
    branch_yes_89:;
    {
        PyObject *tmp_raise_type_30;
        PyObject *tmp_raise_value_30;
        PyObject *tmp_mod_expr_left_30;
        PyObject *tmp_mod_expr_right_30;
        PyObject *tmp_tuple_element_98;
        PyObject *tmp_expression_value_183;
        PyObject *tmp_name_value_33;
        PyObject *tmp_default_value_30;
        tmp_raise_type_30 = PyExc_TypeError;
        tmp_mod_expr_left_30 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_30__metaclass);
        tmp_expression_value_183 = tmp_class_creation_30__metaclass;
        tmp_name_value_33 = mod_consts[8];
        tmp_default_value_30 = mod_consts[54];
        tmp_tuple_element_98 = BUILTIN_GETATTR(tstate, tmp_expression_value_183, tmp_name_value_33, tmp_default_value_30);
        if (tmp_tuple_element_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_89;
        }
        tmp_mod_expr_right_30 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_184;
            PyObject *tmp_type_arg_60;
            PyTuple_SET_ITEM(tmp_mod_expr_right_30, 0, tmp_tuple_element_98);
            CHECK_OBJECT(tmp_class_creation_30__prepared);
            tmp_type_arg_60 = tmp_class_creation_30__prepared;
            tmp_expression_value_184 = BUILTIN_TYPE1(tmp_type_arg_60);
            assert(!(tmp_expression_value_184 == NULL));
            tmp_tuple_element_98 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_184, mod_consts[8]);
            Py_DECREF(tmp_expression_value_184);
            if (tmp_tuple_element_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 667;

                goto tuple_build_exception_30;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_30, 1, tmp_tuple_element_98);
        }
        goto tuple_build_noexception_30;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_30:;
        Py_DECREF(tmp_mod_expr_right_30);
        goto try_except_handler_89;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_30:;
        tmp_raise_value_30 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_30, tmp_mod_expr_right_30);
        Py_DECREF(tmp_mod_expr_right_30);
        if (tmp_raise_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_89;
        }
        exception_type = tmp_raise_type_30;
        Py_INCREF(tmp_raise_type_30);
        exception_value = tmp_raise_value_30;
        exception_lineno = 667;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_89;
    }
    branch_no_89:;
    goto branch_end_88;
    branch_no_88:;
    {
        PyObject *tmp_assign_source_230;
        tmp_assign_source_230 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_30__prepared == NULL);
        tmp_class_creation_30__prepared = tmp_assign_source_230;
    }
    branch_end_88:;
    {
        PyObject *tmp_assign_source_231;
        {
            PyObject *tmp_set_locals_30;
            CHECK_OBJECT(tmp_class_creation_30__prepared);
            tmp_set_locals_30 = tmp_class_creation_30__prepared;
            locals_pandas$errors$$$class__30_DatabaseError_667 = tmp_set_locals_30;
            Py_INCREF(tmp_set_locals_30);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__30_DatabaseError_667, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_91;
        }
        tmp_dictset_value = mod_consts[140];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__30_DatabaseError_667, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_91;
        }
        tmp_dictset_value = mod_consts[139];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__30_DatabaseError_667, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_91;
        }
        {
            nuitka_bool tmp_condition_result_120;
            PyObject *tmp_cmp_expr_left_30;
            PyObject *tmp_cmp_expr_right_30;
            CHECK_OBJECT(tmp_class_creation_30__bases);
            tmp_cmp_expr_left_30 = tmp_class_creation_30__bases;
            tmp_cmp_expr_right_30 = mod_consts[138];
            tmp_condition_result_120 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_30, tmp_cmp_expr_right_30);
            if (tmp_condition_result_120 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 667;

                goto try_except_handler_91;
            }
            if (tmp_condition_result_120 == NUITKA_BOOL_TRUE) {
                goto branch_yes_90;
            } else {
                goto branch_no_90;
            }
        }
        branch_yes_90:;
        tmp_dictset_value = mod_consts[138];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__30_DatabaseError_667, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto try_except_handler_91;
        }
        branch_no_90:;
        {
            PyObject *tmp_assign_source_232;
            PyObject *tmp_called_value_64;
            PyObject *tmp_args_value_60;
            PyObject *tmp_tuple_element_99;
            PyObject *tmp_kwargs_value_60;
            CHECK_OBJECT(tmp_class_creation_30__metaclass);
            tmp_called_value_64 = tmp_class_creation_30__metaclass;
            tmp_tuple_element_99 = mod_consts[139];
            tmp_args_value_60 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_60, 0, tmp_tuple_element_99);
            CHECK_OBJECT(tmp_class_creation_30__bases);
            tmp_tuple_element_99 = tmp_class_creation_30__bases;
            PyTuple_SET_ITEM0(tmp_args_value_60, 1, tmp_tuple_element_99);
            tmp_tuple_element_99 = locals_pandas$errors$$$class__30_DatabaseError_667;
            PyTuple_SET_ITEM0(tmp_args_value_60, 2, tmp_tuple_element_99);
            CHECK_OBJECT(tmp_class_creation_30__class_decl_dict);
            tmp_kwargs_value_60 = tmp_class_creation_30__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 667;
            tmp_assign_source_232 = CALL_FUNCTION(tstate, tmp_called_value_64, tmp_args_value_60, tmp_kwargs_value_60);
            Py_DECREF(tmp_args_value_60);
            if (tmp_assign_source_232 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 667;

                goto try_except_handler_91;
            }
            assert(outline_29_var___class__ == NULL);
            outline_29_var___class__ = tmp_assign_source_232;
        }
        CHECK_OBJECT(outline_29_var___class__);
        tmp_assign_source_231 = outline_29_var___class__;
        Py_INCREF(tmp_assign_source_231);
        goto try_return_handler_91;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_91:;
        Py_DECREF(locals_pandas$errors$$$class__30_DatabaseError_667);
        locals_pandas$errors$$$class__30_DatabaseError_667 = NULL;
        goto try_return_handler_90;
        // Exception handler code:
        try_except_handler_91:;
        exception_keeper_type_89 = exception_type;
        exception_keeper_value_89 = exception_value;
        exception_keeper_tb_89 = exception_tb;
        exception_keeper_lineno_89 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$errors$$$class__30_DatabaseError_667);
        locals_pandas$errors$$$class__30_DatabaseError_667 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_89;
        exception_value = exception_keeper_value_89;
        exception_tb = exception_keeper_tb_89;
        exception_lineno = exception_keeper_lineno_89;

        goto try_except_handler_90;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_90:;
        CHECK_OBJECT(outline_29_var___class__);
        Py_DECREF(outline_29_var___class__);
        outline_29_var___class__ = NULL;
        goto outline_result_30;
        // Exception handler code:
        try_except_handler_90:;
        exception_keeper_type_90 = exception_type;
        exception_keeper_value_90 = exception_value;
        exception_keeper_tb_90 = exception_tb;
        exception_keeper_lineno_90 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_90;
        exception_value = exception_keeper_value_90;
        exception_tb = exception_keeper_tb_90;
        exception_lineno = exception_keeper_lineno_90;

        goto outline_exception_30;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_30:;
        exception_lineno = 667;
        goto try_except_handler_89;
        outline_result_30:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_231);
    }
    goto try_end_31;
    // Exception handler code:
    try_except_handler_89:;
    exception_keeper_type_91 = exception_type;
    exception_keeper_value_91 = exception_value;
    exception_keeper_tb_91 = exception_tb;
    exception_keeper_lineno_91 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_30__bases);
    tmp_class_creation_30__bases = NULL;
    Py_XDECREF(tmp_class_creation_30__class_decl_dict);
    tmp_class_creation_30__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_30__metaclass);
    tmp_class_creation_30__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_30__prepared);
    tmp_class_creation_30__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_91;
    exception_value = exception_keeper_value_91;
    exception_tb = exception_keeper_tb_91;
    exception_lineno = exception_keeper_lineno_91;

    goto frame_exception_exit_1;
    // End of try:
    try_end_31:;
    CHECK_OBJECT(tmp_class_creation_30__bases);
    Py_DECREF(tmp_class_creation_30__bases);
    tmp_class_creation_30__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_30__class_decl_dict);
    Py_DECREF(tmp_class_creation_30__class_decl_dict);
    tmp_class_creation_30__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_30__metaclass);
    Py_DECREF(tmp_class_creation_30__metaclass);
    tmp_class_creation_30__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_30__prepared);
    Py_DECREF(tmp_class_creation_30__prepared);
    tmp_class_creation_30__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_233;
        PyObject *tmp_tuple_element_100;
        tmp_tuple_element_100 = GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_tuple_element_100 == NULL)) {
            tmp_tuple_element_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_tuple_element_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;

            goto try_except_handler_92;
        }
        tmp_assign_source_233 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_233, 0, tmp_tuple_element_100);
        assert(tmp_class_creation_31__bases_orig == NULL);
        tmp_class_creation_31__bases_orig = tmp_assign_source_233;
    }
    {
        PyObject *tmp_assign_source_234;
        PyObject *tmp_dircall_arg1_31;
        CHECK_OBJECT(tmp_class_creation_31__bases_orig);
        tmp_dircall_arg1_31 = tmp_class_creation_31__bases_orig;
        Py_INCREF(tmp_dircall_arg1_31);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_31};
            tmp_assign_source_234 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_234 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;

            goto try_except_handler_92;
        }
        assert(tmp_class_creation_31__bases == NULL);
        tmp_class_creation_31__bases = tmp_assign_source_234;
    }
    {
        PyObject *tmp_assign_source_235;
        tmp_assign_source_235 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_31__class_decl_dict == NULL);
        tmp_class_creation_31__class_decl_dict = tmp_assign_source_235;
    }
    {
        PyObject *tmp_assign_source_236;
        PyObject *tmp_metaclass_value_31;
        nuitka_bool tmp_condition_result_121;
        int tmp_truth_name_31;
        PyObject *tmp_type_arg_61;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_subscript_value_31;
        PyObject *tmp_bases_value_31;
        CHECK_OBJECT(tmp_class_creation_31__bases);
        tmp_truth_name_31 = CHECK_IF_TRUE(tmp_class_creation_31__bases);
        if (tmp_truth_name_31 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;

            goto try_except_handler_92;
        }
        tmp_condition_result_121 = tmp_truth_name_31 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_121 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_31;
        } else {
            goto condexpr_false_31;
        }
        condexpr_true_31:;
        CHECK_OBJECT(tmp_class_creation_31__bases);
        tmp_expression_value_185 = tmp_class_creation_31__bases;
        tmp_subscript_value_31 = mod_consts[40];
        tmp_type_arg_61 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_185, tmp_subscript_value_31, 0);
        if (tmp_type_arg_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;

            goto try_except_handler_92;
        }
        tmp_metaclass_value_31 = BUILTIN_TYPE1(tmp_type_arg_61);
        Py_DECREF(tmp_type_arg_61);
        if (tmp_metaclass_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;

            goto try_except_handler_92;
        }
        goto condexpr_end_31;
        condexpr_false_31:;
        tmp_metaclass_value_31 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_31);
        condexpr_end_31:;
        CHECK_OBJECT(tmp_class_creation_31__bases);
        tmp_bases_value_31 = tmp_class_creation_31__bases;
        tmp_assign_source_236 = SELECT_METACLASS(tstate, tmp_metaclass_value_31, tmp_bases_value_31);
        Py_DECREF(tmp_metaclass_value_31);
        if (tmp_assign_source_236 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;

            goto try_except_handler_92;
        }
        assert(tmp_class_creation_31__metaclass == NULL);
        tmp_class_creation_31__metaclass = tmp_assign_source_236;
    }
    {
        bool tmp_condition_result_122;
        PyObject *tmp_expression_value_186;
        CHECK_OBJECT(tmp_class_creation_31__metaclass);
        tmp_expression_value_186 = tmp_class_creation_31__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_186, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;

            goto try_except_handler_92;
        }
        tmp_condition_result_122 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_122 != false) {
            goto branch_yes_91;
        } else {
            goto branch_no_91;
        }
    }
    branch_yes_91:;
    {
        PyObject *tmp_assign_source_237;
        PyObject *tmp_called_value_65;
        PyObject *tmp_expression_value_187;
        PyObject *tmp_args_value_61;
        PyObject *tmp_tuple_element_101;
        PyObject *tmp_kwargs_value_61;
        CHECK_OBJECT(tmp_class_creation_31__metaclass);
        tmp_expression_value_187 = tmp_class_creation_31__metaclass;
        tmp_called_value_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_187, mod_consts[50]);
        if (tmp_called_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;

            goto try_except_handler_92;
        }
        tmp_tuple_element_101 = mod_consts[141];
        tmp_args_value_61 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_61, 0, tmp_tuple_element_101);
        CHECK_OBJECT(tmp_class_creation_31__bases);
        tmp_tuple_element_101 = tmp_class_creation_31__bases;
        PyTuple_SET_ITEM0(tmp_args_value_61, 1, tmp_tuple_element_101);
        CHECK_OBJECT(tmp_class_creation_31__class_decl_dict);
        tmp_kwargs_value_61 = tmp_class_creation_31__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 680;
        tmp_assign_source_237 = CALL_FUNCTION(tstate, tmp_called_value_65, tmp_args_value_61, tmp_kwargs_value_61);
        Py_DECREF(tmp_called_value_65);
        Py_DECREF(tmp_args_value_61);
        if (tmp_assign_source_237 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;

            goto try_except_handler_92;
        }
        assert(tmp_class_creation_31__prepared == NULL);
        tmp_class_creation_31__prepared = tmp_assign_source_237;
    }
    {
        bool tmp_condition_result_123;
        PyObject *tmp_operand_value_31;
        PyObject *tmp_expression_value_188;
        CHECK_OBJECT(tmp_class_creation_31__prepared);
        tmp_expression_value_188 = tmp_class_creation_31__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_188, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;

            goto try_except_handler_92;
        }
        tmp_operand_value_31 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_31);
        assert(!(tmp_res == -1));
        tmp_condition_result_123 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_123 != false) {
            goto branch_yes_92;
        } else {
            goto branch_no_92;
        }
    }
    branch_yes_92:;
    {
        PyObject *tmp_raise_type_31;
        PyObject *tmp_raise_value_31;
        PyObject *tmp_mod_expr_left_31;
        PyObject *tmp_mod_expr_right_31;
        PyObject *tmp_tuple_element_102;
        PyObject *tmp_expression_value_189;
        PyObject *tmp_name_value_34;
        PyObject *tmp_default_value_31;
        tmp_raise_type_31 = PyExc_TypeError;
        tmp_mod_expr_left_31 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_31__metaclass);
        tmp_expression_value_189 = tmp_class_creation_31__metaclass;
        tmp_name_value_34 = mod_consts[8];
        tmp_default_value_31 = mod_consts[54];
        tmp_tuple_element_102 = BUILTIN_GETATTR(tstate, tmp_expression_value_189, tmp_name_value_34, tmp_default_value_31);
        if (tmp_tuple_element_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;

            goto try_except_handler_92;
        }
        tmp_mod_expr_right_31 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_190;
            PyObject *tmp_type_arg_62;
            PyTuple_SET_ITEM(tmp_mod_expr_right_31, 0, tmp_tuple_element_102);
            CHECK_OBJECT(tmp_class_creation_31__prepared);
            tmp_type_arg_62 = tmp_class_creation_31__prepared;
            tmp_expression_value_190 = BUILTIN_TYPE1(tmp_type_arg_62);
            assert(!(tmp_expression_value_190 == NULL));
            tmp_tuple_element_102 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_190, mod_consts[8]);
            Py_DECREF(tmp_expression_value_190);
            if (tmp_tuple_element_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 680;

                goto tuple_build_exception_31;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_31, 1, tmp_tuple_element_102);
        }
        goto tuple_build_noexception_31;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_31:;
        Py_DECREF(tmp_mod_expr_right_31);
        goto try_except_handler_92;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_31:;
        tmp_raise_value_31 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_31, tmp_mod_expr_right_31);
        Py_DECREF(tmp_mod_expr_right_31);
        if (tmp_raise_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;

            goto try_except_handler_92;
        }
        exception_type = tmp_raise_type_31;
        Py_INCREF(tmp_raise_type_31);
        exception_value = tmp_raise_value_31;
        exception_lineno = 680;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_92;
    }
    branch_no_92:;
    goto branch_end_91;
    branch_no_91:;
    {
        PyObject *tmp_assign_source_238;
        tmp_assign_source_238 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_31__prepared == NULL);
        tmp_class_creation_31__prepared = tmp_assign_source_238;
    }
    branch_end_91:;
    {
        PyObject *tmp_assign_source_239;
        {
            PyObject *tmp_set_locals_31;
            CHECK_OBJECT(tmp_class_creation_31__prepared);
            tmp_set_locals_31 = tmp_class_creation_31__prepared;
            locals_pandas$errors$$$class__31_PossiblePrecisionLoss_680 = tmp_set_locals_31;
            Py_INCREF(tmp_set_locals_31);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__31_PossiblePrecisionLoss_680, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;

            goto try_except_handler_94;
        }
        tmp_dictset_value = mod_consts[142];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__31_PossiblePrecisionLoss_680, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;

            goto try_except_handler_94;
        }
        tmp_dictset_value = mod_consts[141];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__31_PossiblePrecisionLoss_680, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;

            goto try_except_handler_94;
        }
        {
            nuitka_bool tmp_condition_result_124;
            PyObject *tmp_cmp_expr_left_31;
            PyObject *tmp_cmp_expr_right_31;
            CHECK_OBJECT(tmp_class_creation_31__bases);
            tmp_cmp_expr_left_31 = tmp_class_creation_31__bases;
            CHECK_OBJECT(tmp_class_creation_31__bases_orig);
            tmp_cmp_expr_right_31 = tmp_class_creation_31__bases_orig;
            tmp_condition_result_124 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_31, tmp_cmp_expr_right_31);
            if (tmp_condition_result_124 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 680;

                goto try_except_handler_94;
            }
            if (tmp_condition_result_124 == NUITKA_BOOL_TRUE) {
                goto branch_yes_93;
            } else {
                goto branch_no_93;
            }
        }
        branch_yes_93:;
        CHECK_OBJECT(tmp_class_creation_31__bases_orig);
        tmp_dictset_value = tmp_class_creation_31__bases_orig;
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__31_PossiblePrecisionLoss_680, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;

            goto try_except_handler_94;
        }
        branch_no_93:;
        {
            PyObject *tmp_assign_source_240;
            PyObject *tmp_called_value_66;
            PyObject *tmp_args_value_62;
            PyObject *tmp_tuple_element_103;
            PyObject *tmp_kwargs_value_62;
            CHECK_OBJECT(tmp_class_creation_31__metaclass);
            tmp_called_value_66 = tmp_class_creation_31__metaclass;
            tmp_tuple_element_103 = mod_consts[141];
            tmp_args_value_62 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_62, 0, tmp_tuple_element_103);
            CHECK_OBJECT(tmp_class_creation_31__bases);
            tmp_tuple_element_103 = tmp_class_creation_31__bases;
            PyTuple_SET_ITEM0(tmp_args_value_62, 1, tmp_tuple_element_103);
            tmp_tuple_element_103 = locals_pandas$errors$$$class__31_PossiblePrecisionLoss_680;
            PyTuple_SET_ITEM0(tmp_args_value_62, 2, tmp_tuple_element_103);
            CHECK_OBJECT(tmp_class_creation_31__class_decl_dict);
            tmp_kwargs_value_62 = tmp_class_creation_31__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 680;
            tmp_assign_source_240 = CALL_FUNCTION(tstate, tmp_called_value_66, tmp_args_value_62, tmp_kwargs_value_62);
            Py_DECREF(tmp_args_value_62);
            if (tmp_assign_source_240 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 680;

                goto try_except_handler_94;
            }
            assert(outline_30_var___class__ == NULL);
            outline_30_var___class__ = tmp_assign_source_240;
        }
        CHECK_OBJECT(outline_30_var___class__);
        tmp_assign_source_239 = outline_30_var___class__;
        Py_INCREF(tmp_assign_source_239);
        goto try_return_handler_94;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_94:;
        Py_DECREF(locals_pandas$errors$$$class__31_PossiblePrecisionLoss_680);
        locals_pandas$errors$$$class__31_PossiblePrecisionLoss_680 = NULL;
        goto try_return_handler_93;
        // Exception handler code:
        try_except_handler_94:;
        exception_keeper_type_92 = exception_type;
        exception_keeper_value_92 = exception_value;
        exception_keeper_tb_92 = exception_tb;
        exception_keeper_lineno_92 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$errors$$$class__31_PossiblePrecisionLoss_680);
        locals_pandas$errors$$$class__31_PossiblePrecisionLoss_680 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_92;
        exception_value = exception_keeper_value_92;
        exception_tb = exception_keeper_tb_92;
        exception_lineno = exception_keeper_lineno_92;

        goto try_except_handler_93;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_93:;
        CHECK_OBJECT(outline_30_var___class__);
        Py_DECREF(outline_30_var___class__);
        outline_30_var___class__ = NULL;
        goto outline_result_31;
        // Exception handler code:
        try_except_handler_93:;
        exception_keeper_type_93 = exception_type;
        exception_keeper_value_93 = exception_value;
        exception_keeper_tb_93 = exception_tb;
        exception_keeper_lineno_93 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_93;
        exception_value = exception_keeper_value_93;
        exception_tb = exception_keeper_tb_93;
        exception_lineno = exception_keeper_lineno_93;

        goto outline_exception_31;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_31:;
        exception_lineno = 680;
        goto try_except_handler_92;
        outline_result_31:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_239);
    }
    goto try_end_32;
    // Exception handler code:
    try_except_handler_92:;
    exception_keeper_type_94 = exception_type;
    exception_keeper_value_94 = exception_value;
    exception_keeper_tb_94 = exception_tb;
    exception_keeper_lineno_94 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_31__bases_orig);
    tmp_class_creation_31__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_31__bases);
    tmp_class_creation_31__bases = NULL;
    Py_XDECREF(tmp_class_creation_31__class_decl_dict);
    tmp_class_creation_31__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_31__metaclass);
    tmp_class_creation_31__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_31__prepared);
    tmp_class_creation_31__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_94;
    exception_value = exception_keeper_value_94;
    exception_tb = exception_keeper_tb_94;
    exception_lineno = exception_keeper_lineno_94;

    goto frame_exception_exit_1;
    // End of try:
    try_end_32:;
    CHECK_OBJECT(tmp_class_creation_31__bases_orig);
    Py_DECREF(tmp_class_creation_31__bases_orig);
    tmp_class_creation_31__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_31__bases);
    Py_DECREF(tmp_class_creation_31__bases);
    tmp_class_creation_31__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_31__class_decl_dict);
    Py_DECREF(tmp_class_creation_31__class_decl_dict);
    tmp_class_creation_31__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_31__metaclass);
    Py_DECREF(tmp_class_creation_31__metaclass);
    tmp_class_creation_31__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_31__prepared);
    Py_DECREF(tmp_class_creation_31__prepared);
    tmp_class_creation_31__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_241;
        PyObject *tmp_tuple_element_104;
        tmp_tuple_element_104 = GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_tuple_element_104 == NULL)) {
            tmp_tuple_element_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_tuple_element_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;

            goto try_except_handler_95;
        }
        tmp_assign_source_241 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_241, 0, tmp_tuple_element_104);
        assert(tmp_class_creation_32__bases_orig == NULL);
        tmp_class_creation_32__bases_orig = tmp_assign_source_241;
    }
    {
        PyObject *tmp_assign_source_242;
        PyObject *tmp_dircall_arg1_32;
        CHECK_OBJECT(tmp_class_creation_32__bases_orig);
        tmp_dircall_arg1_32 = tmp_class_creation_32__bases_orig;
        Py_INCREF(tmp_dircall_arg1_32);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_32};
            tmp_assign_source_242 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_242 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;

            goto try_except_handler_95;
        }
        assert(tmp_class_creation_32__bases == NULL);
        tmp_class_creation_32__bases = tmp_assign_source_242;
    }
    {
        PyObject *tmp_assign_source_243;
        tmp_assign_source_243 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_32__class_decl_dict == NULL);
        tmp_class_creation_32__class_decl_dict = tmp_assign_source_243;
    }
    {
        PyObject *tmp_assign_source_244;
        PyObject *tmp_metaclass_value_32;
        nuitka_bool tmp_condition_result_125;
        int tmp_truth_name_32;
        PyObject *tmp_type_arg_63;
        PyObject *tmp_expression_value_191;
        PyObject *tmp_subscript_value_32;
        PyObject *tmp_bases_value_32;
        CHECK_OBJECT(tmp_class_creation_32__bases);
        tmp_truth_name_32 = CHECK_IF_TRUE(tmp_class_creation_32__bases);
        if (tmp_truth_name_32 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;

            goto try_except_handler_95;
        }
        tmp_condition_result_125 = tmp_truth_name_32 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_125 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_32;
        } else {
            goto condexpr_false_32;
        }
        condexpr_true_32:;
        CHECK_OBJECT(tmp_class_creation_32__bases);
        tmp_expression_value_191 = tmp_class_creation_32__bases;
        tmp_subscript_value_32 = mod_consts[40];
        tmp_type_arg_63 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_191, tmp_subscript_value_32, 0);
        if (tmp_type_arg_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;

            goto try_except_handler_95;
        }
        tmp_metaclass_value_32 = BUILTIN_TYPE1(tmp_type_arg_63);
        Py_DECREF(tmp_type_arg_63);
        if (tmp_metaclass_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;

            goto try_except_handler_95;
        }
        goto condexpr_end_32;
        condexpr_false_32:;
        tmp_metaclass_value_32 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_32);
        condexpr_end_32:;
        CHECK_OBJECT(tmp_class_creation_32__bases);
        tmp_bases_value_32 = tmp_class_creation_32__bases;
        tmp_assign_source_244 = SELECT_METACLASS(tstate, tmp_metaclass_value_32, tmp_bases_value_32);
        Py_DECREF(tmp_metaclass_value_32);
        if (tmp_assign_source_244 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;

            goto try_except_handler_95;
        }
        assert(tmp_class_creation_32__metaclass == NULL);
        tmp_class_creation_32__metaclass = tmp_assign_source_244;
    }
    {
        bool tmp_condition_result_126;
        PyObject *tmp_expression_value_192;
        CHECK_OBJECT(tmp_class_creation_32__metaclass);
        tmp_expression_value_192 = tmp_class_creation_32__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_192, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;

            goto try_except_handler_95;
        }
        tmp_condition_result_126 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_126 != false) {
            goto branch_yes_94;
        } else {
            goto branch_no_94;
        }
    }
    branch_yes_94:;
    {
        PyObject *tmp_assign_source_245;
        PyObject *tmp_called_value_67;
        PyObject *tmp_expression_value_193;
        PyObject *tmp_args_value_63;
        PyObject *tmp_tuple_element_105;
        PyObject *tmp_kwargs_value_63;
        CHECK_OBJECT(tmp_class_creation_32__metaclass);
        tmp_expression_value_193 = tmp_class_creation_32__metaclass;
        tmp_called_value_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_193, mod_consts[50]);
        if (tmp_called_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;

            goto try_except_handler_95;
        }
        tmp_tuple_element_105 = mod_consts[143];
        tmp_args_value_63 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_63, 0, tmp_tuple_element_105);
        CHECK_OBJECT(tmp_class_creation_32__bases);
        tmp_tuple_element_105 = tmp_class_creation_32__bases;
        PyTuple_SET_ITEM0(tmp_args_value_63, 1, tmp_tuple_element_105);
        CHECK_OBJECT(tmp_class_creation_32__class_decl_dict);
        tmp_kwargs_value_63 = tmp_class_creation_32__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 695;
        tmp_assign_source_245 = CALL_FUNCTION(tstate, tmp_called_value_67, tmp_args_value_63, tmp_kwargs_value_63);
        Py_DECREF(tmp_called_value_67);
        Py_DECREF(tmp_args_value_63);
        if (tmp_assign_source_245 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;

            goto try_except_handler_95;
        }
        assert(tmp_class_creation_32__prepared == NULL);
        tmp_class_creation_32__prepared = tmp_assign_source_245;
    }
    {
        bool tmp_condition_result_127;
        PyObject *tmp_operand_value_32;
        PyObject *tmp_expression_value_194;
        CHECK_OBJECT(tmp_class_creation_32__prepared);
        tmp_expression_value_194 = tmp_class_creation_32__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_194, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;

            goto try_except_handler_95;
        }
        tmp_operand_value_32 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_32);
        assert(!(tmp_res == -1));
        tmp_condition_result_127 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_127 != false) {
            goto branch_yes_95;
        } else {
            goto branch_no_95;
        }
    }
    branch_yes_95:;
    {
        PyObject *tmp_raise_type_32;
        PyObject *tmp_raise_value_32;
        PyObject *tmp_mod_expr_left_32;
        PyObject *tmp_mod_expr_right_32;
        PyObject *tmp_tuple_element_106;
        PyObject *tmp_expression_value_195;
        PyObject *tmp_name_value_35;
        PyObject *tmp_default_value_32;
        tmp_raise_type_32 = PyExc_TypeError;
        tmp_mod_expr_left_32 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_32__metaclass);
        tmp_expression_value_195 = tmp_class_creation_32__metaclass;
        tmp_name_value_35 = mod_consts[8];
        tmp_default_value_32 = mod_consts[54];
        tmp_tuple_element_106 = BUILTIN_GETATTR(tstate, tmp_expression_value_195, tmp_name_value_35, tmp_default_value_32);
        if (tmp_tuple_element_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;

            goto try_except_handler_95;
        }
        tmp_mod_expr_right_32 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_196;
            PyObject *tmp_type_arg_64;
            PyTuple_SET_ITEM(tmp_mod_expr_right_32, 0, tmp_tuple_element_106);
            CHECK_OBJECT(tmp_class_creation_32__prepared);
            tmp_type_arg_64 = tmp_class_creation_32__prepared;
            tmp_expression_value_196 = BUILTIN_TYPE1(tmp_type_arg_64);
            assert(!(tmp_expression_value_196 == NULL));
            tmp_tuple_element_106 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_196, mod_consts[8]);
            Py_DECREF(tmp_expression_value_196);
            if (tmp_tuple_element_106 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 695;

                goto tuple_build_exception_32;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_32, 1, tmp_tuple_element_106);
        }
        goto tuple_build_noexception_32;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_32:;
        Py_DECREF(tmp_mod_expr_right_32);
        goto try_except_handler_95;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_32:;
        tmp_raise_value_32 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_32, tmp_mod_expr_right_32);
        Py_DECREF(tmp_mod_expr_right_32);
        if (tmp_raise_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;

            goto try_except_handler_95;
        }
        exception_type = tmp_raise_type_32;
        Py_INCREF(tmp_raise_type_32);
        exception_value = tmp_raise_value_32;
        exception_lineno = 695;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_95;
    }
    branch_no_95:;
    goto branch_end_94;
    branch_no_94:;
    {
        PyObject *tmp_assign_source_246;
        tmp_assign_source_246 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_32__prepared == NULL);
        tmp_class_creation_32__prepared = tmp_assign_source_246;
    }
    branch_end_94:;
    {
        PyObject *tmp_assign_source_247;
        {
            PyObject *tmp_set_locals_32;
            CHECK_OBJECT(tmp_class_creation_32__prepared);
            tmp_set_locals_32 = tmp_class_creation_32__prepared;
            locals_pandas$errors$$$class__32_ValueLabelTypeMismatch_695 = tmp_set_locals_32;
            Py_INCREF(tmp_set_locals_32);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__32_ValueLabelTypeMismatch_695, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;

            goto try_except_handler_97;
        }
        tmp_dictset_value = mod_consts[144];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__32_ValueLabelTypeMismatch_695, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;

            goto try_except_handler_97;
        }
        tmp_dictset_value = mod_consts[143];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__32_ValueLabelTypeMismatch_695, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;

            goto try_except_handler_97;
        }
        {
            nuitka_bool tmp_condition_result_128;
            PyObject *tmp_cmp_expr_left_32;
            PyObject *tmp_cmp_expr_right_32;
            CHECK_OBJECT(tmp_class_creation_32__bases);
            tmp_cmp_expr_left_32 = tmp_class_creation_32__bases;
            CHECK_OBJECT(tmp_class_creation_32__bases_orig);
            tmp_cmp_expr_right_32 = tmp_class_creation_32__bases_orig;
            tmp_condition_result_128 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_32, tmp_cmp_expr_right_32);
            if (tmp_condition_result_128 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 695;

                goto try_except_handler_97;
            }
            if (tmp_condition_result_128 == NUITKA_BOOL_TRUE) {
                goto branch_yes_96;
            } else {
                goto branch_no_96;
            }
        }
        branch_yes_96:;
        CHECK_OBJECT(tmp_class_creation_32__bases_orig);
        tmp_dictset_value = tmp_class_creation_32__bases_orig;
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__32_ValueLabelTypeMismatch_695, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 695;

            goto try_except_handler_97;
        }
        branch_no_96:;
        {
            PyObject *tmp_assign_source_248;
            PyObject *tmp_called_value_68;
            PyObject *tmp_args_value_64;
            PyObject *tmp_tuple_element_107;
            PyObject *tmp_kwargs_value_64;
            CHECK_OBJECT(tmp_class_creation_32__metaclass);
            tmp_called_value_68 = tmp_class_creation_32__metaclass;
            tmp_tuple_element_107 = mod_consts[143];
            tmp_args_value_64 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_64, 0, tmp_tuple_element_107);
            CHECK_OBJECT(tmp_class_creation_32__bases);
            tmp_tuple_element_107 = tmp_class_creation_32__bases;
            PyTuple_SET_ITEM0(tmp_args_value_64, 1, tmp_tuple_element_107);
            tmp_tuple_element_107 = locals_pandas$errors$$$class__32_ValueLabelTypeMismatch_695;
            PyTuple_SET_ITEM0(tmp_args_value_64, 2, tmp_tuple_element_107);
            CHECK_OBJECT(tmp_class_creation_32__class_decl_dict);
            tmp_kwargs_value_64 = tmp_class_creation_32__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 695;
            tmp_assign_source_248 = CALL_FUNCTION(tstate, tmp_called_value_68, tmp_args_value_64, tmp_kwargs_value_64);
            Py_DECREF(tmp_args_value_64);
            if (tmp_assign_source_248 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 695;

                goto try_except_handler_97;
            }
            assert(outline_31_var___class__ == NULL);
            outline_31_var___class__ = tmp_assign_source_248;
        }
        CHECK_OBJECT(outline_31_var___class__);
        tmp_assign_source_247 = outline_31_var___class__;
        Py_INCREF(tmp_assign_source_247);
        goto try_return_handler_97;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_97:;
        Py_DECREF(locals_pandas$errors$$$class__32_ValueLabelTypeMismatch_695);
        locals_pandas$errors$$$class__32_ValueLabelTypeMismatch_695 = NULL;
        goto try_return_handler_96;
        // Exception handler code:
        try_except_handler_97:;
        exception_keeper_type_95 = exception_type;
        exception_keeper_value_95 = exception_value;
        exception_keeper_tb_95 = exception_tb;
        exception_keeper_lineno_95 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$errors$$$class__32_ValueLabelTypeMismatch_695);
        locals_pandas$errors$$$class__32_ValueLabelTypeMismatch_695 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_95;
        exception_value = exception_keeper_value_95;
        exception_tb = exception_keeper_tb_95;
        exception_lineno = exception_keeper_lineno_95;

        goto try_except_handler_96;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_96:;
        CHECK_OBJECT(outline_31_var___class__);
        Py_DECREF(outline_31_var___class__);
        outline_31_var___class__ = NULL;
        goto outline_result_32;
        // Exception handler code:
        try_except_handler_96:;
        exception_keeper_type_96 = exception_type;
        exception_keeper_value_96 = exception_value;
        exception_keeper_tb_96 = exception_tb;
        exception_keeper_lineno_96 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_96;
        exception_value = exception_keeper_value_96;
        exception_tb = exception_keeper_tb_96;
        exception_lineno = exception_keeper_lineno_96;

        goto outline_exception_32;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_32:;
        exception_lineno = 695;
        goto try_except_handler_95;
        outline_result_32:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_247);
    }
    goto try_end_33;
    // Exception handler code:
    try_except_handler_95:;
    exception_keeper_type_97 = exception_type;
    exception_keeper_value_97 = exception_value;
    exception_keeper_tb_97 = exception_tb;
    exception_keeper_lineno_97 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_32__bases_orig);
    tmp_class_creation_32__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_32__bases);
    tmp_class_creation_32__bases = NULL;
    Py_XDECREF(tmp_class_creation_32__class_decl_dict);
    tmp_class_creation_32__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_32__metaclass);
    tmp_class_creation_32__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_32__prepared);
    tmp_class_creation_32__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_97;
    exception_value = exception_keeper_value_97;
    exception_tb = exception_keeper_tb_97;
    exception_lineno = exception_keeper_lineno_97;

    goto frame_exception_exit_1;
    // End of try:
    try_end_33:;
    CHECK_OBJECT(tmp_class_creation_32__bases_orig);
    Py_DECREF(tmp_class_creation_32__bases_orig);
    tmp_class_creation_32__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_32__bases);
    Py_DECREF(tmp_class_creation_32__bases);
    tmp_class_creation_32__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_32__class_decl_dict);
    Py_DECREF(tmp_class_creation_32__class_decl_dict);
    tmp_class_creation_32__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_32__metaclass);
    Py_DECREF(tmp_class_creation_32__metaclass);
    tmp_class_creation_32__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_32__prepared);
    Py_DECREF(tmp_class_creation_32__prepared);
    tmp_class_creation_32__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_249;
        PyObject *tmp_tuple_element_108;
        tmp_tuple_element_108 = GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_tuple_element_108 == NULL)) {
            tmp_tuple_element_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_tuple_element_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;

            goto try_except_handler_98;
        }
        tmp_assign_source_249 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_249, 0, tmp_tuple_element_108);
        assert(tmp_class_creation_33__bases_orig == NULL);
        tmp_class_creation_33__bases_orig = tmp_assign_source_249;
    }
    {
        PyObject *tmp_assign_source_250;
        PyObject *tmp_dircall_arg1_33;
        CHECK_OBJECT(tmp_class_creation_33__bases_orig);
        tmp_dircall_arg1_33 = tmp_class_creation_33__bases_orig;
        Py_INCREF(tmp_dircall_arg1_33);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_33};
            tmp_assign_source_250 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_250 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;

            goto try_except_handler_98;
        }
        assert(tmp_class_creation_33__bases == NULL);
        tmp_class_creation_33__bases = tmp_assign_source_250;
    }
    {
        PyObject *tmp_assign_source_251;
        tmp_assign_source_251 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_33__class_decl_dict == NULL);
        tmp_class_creation_33__class_decl_dict = tmp_assign_source_251;
    }
    {
        PyObject *tmp_assign_source_252;
        PyObject *tmp_metaclass_value_33;
        nuitka_bool tmp_condition_result_129;
        int tmp_truth_name_33;
        PyObject *tmp_type_arg_65;
        PyObject *tmp_expression_value_197;
        PyObject *tmp_subscript_value_33;
        PyObject *tmp_bases_value_33;
        CHECK_OBJECT(tmp_class_creation_33__bases);
        tmp_truth_name_33 = CHECK_IF_TRUE(tmp_class_creation_33__bases);
        if (tmp_truth_name_33 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;

            goto try_except_handler_98;
        }
        tmp_condition_result_129 = tmp_truth_name_33 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_129 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_33;
        } else {
            goto condexpr_false_33;
        }
        condexpr_true_33:;
        CHECK_OBJECT(tmp_class_creation_33__bases);
        tmp_expression_value_197 = tmp_class_creation_33__bases;
        tmp_subscript_value_33 = mod_consts[40];
        tmp_type_arg_65 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_197, tmp_subscript_value_33, 0);
        if (tmp_type_arg_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;

            goto try_except_handler_98;
        }
        tmp_metaclass_value_33 = BUILTIN_TYPE1(tmp_type_arg_65);
        Py_DECREF(tmp_type_arg_65);
        if (tmp_metaclass_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;

            goto try_except_handler_98;
        }
        goto condexpr_end_33;
        condexpr_false_33:;
        tmp_metaclass_value_33 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_33);
        condexpr_end_33:;
        CHECK_OBJECT(tmp_class_creation_33__bases);
        tmp_bases_value_33 = tmp_class_creation_33__bases;
        tmp_assign_source_252 = SELECT_METACLASS(tstate, tmp_metaclass_value_33, tmp_bases_value_33);
        Py_DECREF(tmp_metaclass_value_33);
        if (tmp_assign_source_252 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;

            goto try_except_handler_98;
        }
        assert(tmp_class_creation_33__metaclass == NULL);
        tmp_class_creation_33__metaclass = tmp_assign_source_252;
    }
    {
        bool tmp_condition_result_130;
        PyObject *tmp_expression_value_198;
        CHECK_OBJECT(tmp_class_creation_33__metaclass);
        tmp_expression_value_198 = tmp_class_creation_33__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_198, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;

            goto try_except_handler_98;
        }
        tmp_condition_result_130 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_130 != false) {
            goto branch_yes_97;
        } else {
            goto branch_no_97;
        }
    }
    branch_yes_97:;
    {
        PyObject *tmp_assign_source_253;
        PyObject *tmp_called_value_69;
        PyObject *tmp_expression_value_199;
        PyObject *tmp_args_value_65;
        PyObject *tmp_tuple_element_109;
        PyObject *tmp_kwargs_value_65;
        CHECK_OBJECT(tmp_class_creation_33__metaclass);
        tmp_expression_value_199 = tmp_class_creation_33__metaclass;
        tmp_called_value_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_199, mod_consts[50]);
        if (tmp_called_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;

            goto try_except_handler_98;
        }
        tmp_tuple_element_109 = mod_consts[145];
        tmp_args_value_65 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_65, 0, tmp_tuple_element_109);
        CHECK_OBJECT(tmp_class_creation_33__bases);
        tmp_tuple_element_109 = tmp_class_creation_33__bases;
        PyTuple_SET_ITEM0(tmp_args_value_65, 1, tmp_tuple_element_109);
        CHECK_OBJECT(tmp_class_creation_33__class_decl_dict);
        tmp_kwargs_value_65 = tmp_class_creation_33__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 707;
        tmp_assign_source_253 = CALL_FUNCTION(tstate, tmp_called_value_69, tmp_args_value_65, tmp_kwargs_value_65);
        Py_DECREF(tmp_called_value_69);
        Py_DECREF(tmp_args_value_65);
        if (tmp_assign_source_253 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;

            goto try_except_handler_98;
        }
        assert(tmp_class_creation_33__prepared == NULL);
        tmp_class_creation_33__prepared = tmp_assign_source_253;
    }
    {
        bool tmp_condition_result_131;
        PyObject *tmp_operand_value_33;
        PyObject *tmp_expression_value_200;
        CHECK_OBJECT(tmp_class_creation_33__prepared);
        tmp_expression_value_200 = tmp_class_creation_33__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_200, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;

            goto try_except_handler_98;
        }
        tmp_operand_value_33 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_33);
        assert(!(tmp_res == -1));
        tmp_condition_result_131 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_131 != false) {
            goto branch_yes_98;
        } else {
            goto branch_no_98;
        }
    }
    branch_yes_98:;
    {
        PyObject *tmp_raise_type_33;
        PyObject *tmp_raise_value_33;
        PyObject *tmp_mod_expr_left_33;
        PyObject *tmp_mod_expr_right_33;
        PyObject *tmp_tuple_element_110;
        PyObject *tmp_expression_value_201;
        PyObject *tmp_name_value_36;
        PyObject *tmp_default_value_33;
        tmp_raise_type_33 = PyExc_TypeError;
        tmp_mod_expr_left_33 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_33__metaclass);
        tmp_expression_value_201 = tmp_class_creation_33__metaclass;
        tmp_name_value_36 = mod_consts[8];
        tmp_default_value_33 = mod_consts[54];
        tmp_tuple_element_110 = BUILTIN_GETATTR(tstate, tmp_expression_value_201, tmp_name_value_36, tmp_default_value_33);
        if (tmp_tuple_element_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;

            goto try_except_handler_98;
        }
        tmp_mod_expr_right_33 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_202;
            PyObject *tmp_type_arg_66;
            PyTuple_SET_ITEM(tmp_mod_expr_right_33, 0, tmp_tuple_element_110);
            CHECK_OBJECT(tmp_class_creation_33__prepared);
            tmp_type_arg_66 = tmp_class_creation_33__prepared;
            tmp_expression_value_202 = BUILTIN_TYPE1(tmp_type_arg_66);
            assert(!(tmp_expression_value_202 == NULL));
            tmp_tuple_element_110 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_202, mod_consts[8]);
            Py_DECREF(tmp_expression_value_202);
            if (tmp_tuple_element_110 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 707;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_33, 1, tmp_tuple_element_110);
        }
        goto tuple_build_noexception_33;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_33:;
        Py_DECREF(tmp_mod_expr_right_33);
        goto try_except_handler_98;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_33:;
        tmp_raise_value_33 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_33, tmp_mod_expr_right_33);
        Py_DECREF(tmp_mod_expr_right_33);
        if (tmp_raise_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;

            goto try_except_handler_98;
        }
        exception_type = tmp_raise_type_33;
        Py_INCREF(tmp_raise_type_33);
        exception_value = tmp_raise_value_33;
        exception_lineno = 707;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_98;
    }
    branch_no_98:;
    goto branch_end_97;
    branch_no_97:;
    {
        PyObject *tmp_assign_source_254;
        tmp_assign_source_254 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_33__prepared == NULL);
        tmp_class_creation_33__prepared = tmp_assign_source_254;
    }
    branch_end_97:;
    {
        PyObject *tmp_assign_source_255;
        {
            PyObject *tmp_set_locals_33;
            CHECK_OBJECT(tmp_class_creation_33__prepared);
            tmp_set_locals_33 = tmp_class_creation_33__prepared;
            locals_pandas$errors$$$class__33_InvalidColumnName_707 = tmp_set_locals_33;
            Py_INCREF(tmp_set_locals_33);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__33_InvalidColumnName_707, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;

            goto try_except_handler_100;
        }
        tmp_dictset_value = mod_consts[146];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__33_InvalidColumnName_707, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;

            goto try_except_handler_100;
        }
        tmp_dictset_value = mod_consts[145];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__33_InvalidColumnName_707, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;

            goto try_except_handler_100;
        }
        {
            nuitka_bool tmp_condition_result_132;
            PyObject *tmp_cmp_expr_left_33;
            PyObject *tmp_cmp_expr_right_33;
            CHECK_OBJECT(tmp_class_creation_33__bases);
            tmp_cmp_expr_left_33 = tmp_class_creation_33__bases;
            CHECK_OBJECT(tmp_class_creation_33__bases_orig);
            tmp_cmp_expr_right_33 = tmp_class_creation_33__bases_orig;
            tmp_condition_result_132 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_33, tmp_cmp_expr_right_33);
            if (tmp_condition_result_132 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 707;

                goto try_except_handler_100;
            }
            if (tmp_condition_result_132 == NUITKA_BOOL_TRUE) {
                goto branch_yes_99;
            } else {
                goto branch_no_99;
            }
        }
        branch_yes_99:;
        CHECK_OBJECT(tmp_class_creation_33__bases_orig);
        tmp_dictset_value = tmp_class_creation_33__bases_orig;
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__33_InvalidColumnName_707, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 707;

            goto try_except_handler_100;
        }
        branch_no_99:;
        {
            PyObject *tmp_assign_source_256;
            PyObject *tmp_called_value_70;
            PyObject *tmp_args_value_66;
            PyObject *tmp_tuple_element_111;
            PyObject *tmp_kwargs_value_66;
            CHECK_OBJECT(tmp_class_creation_33__metaclass);
            tmp_called_value_70 = tmp_class_creation_33__metaclass;
            tmp_tuple_element_111 = mod_consts[145];
            tmp_args_value_66 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_66, 0, tmp_tuple_element_111);
            CHECK_OBJECT(tmp_class_creation_33__bases);
            tmp_tuple_element_111 = tmp_class_creation_33__bases;
            PyTuple_SET_ITEM0(tmp_args_value_66, 1, tmp_tuple_element_111);
            tmp_tuple_element_111 = locals_pandas$errors$$$class__33_InvalidColumnName_707;
            PyTuple_SET_ITEM0(tmp_args_value_66, 2, tmp_tuple_element_111);
            CHECK_OBJECT(tmp_class_creation_33__class_decl_dict);
            tmp_kwargs_value_66 = tmp_class_creation_33__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 707;
            tmp_assign_source_256 = CALL_FUNCTION(tstate, tmp_called_value_70, tmp_args_value_66, tmp_kwargs_value_66);
            Py_DECREF(tmp_args_value_66);
            if (tmp_assign_source_256 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 707;

                goto try_except_handler_100;
            }
            assert(outline_32_var___class__ == NULL);
            outline_32_var___class__ = tmp_assign_source_256;
        }
        CHECK_OBJECT(outline_32_var___class__);
        tmp_assign_source_255 = outline_32_var___class__;
        Py_INCREF(tmp_assign_source_255);
        goto try_return_handler_100;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_100:;
        Py_DECREF(locals_pandas$errors$$$class__33_InvalidColumnName_707);
        locals_pandas$errors$$$class__33_InvalidColumnName_707 = NULL;
        goto try_return_handler_99;
        // Exception handler code:
        try_except_handler_100:;
        exception_keeper_type_98 = exception_type;
        exception_keeper_value_98 = exception_value;
        exception_keeper_tb_98 = exception_tb;
        exception_keeper_lineno_98 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$errors$$$class__33_InvalidColumnName_707);
        locals_pandas$errors$$$class__33_InvalidColumnName_707 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_98;
        exception_value = exception_keeper_value_98;
        exception_tb = exception_keeper_tb_98;
        exception_lineno = exception_keeper_lineno_98;

        goto try_except_handler_99;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_99:;
        CHECK_OBJECT(outline_32_var___class__);
        Py_DECREF(outline_32_var___class__);
        outline_32_var___class__ = NULL;
        goto outline_result_33;
        // Exception handler code:
        try_except_handler_99:;
        exception_keeper_type_99 = exception_type;
        exception_keeper_value_99 = exception_value;
        exception_keeper_tb_99 = exception_tb;
        exception_keeper_lineno_99 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_99;
        exception_value = exception_keeper_value_99;
        exception_tb = exception_keeper_tb_99;
        exception_lineno = exception_keeper_lineno_99;

        goto outline_exception_33;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_33:;
        exception_lineno = 707;
        goto try_except_handler_98;
        outline_result_33:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_255);
    }
    goto try_end_34;
    // Exception handler code:
    try_except_handler_98:;
    exception_keeper_type_100 = exception_type;
    exception_keeper_value_100 = exception_value;
    exception_keeper_tb_100 = exception_tb;
    exception_keeper_lineno_100 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_33__bases_orig);
    tmp_class_creation_33__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_33__bases);
    tmp_class_creation_33__bases = NULL;
    Py_XDECREF(tmp_class_creation_33__class_decl_dict);
    tmp_class_creation_33__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_33__metaclass);
    tmp_class_creation_33__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_33__prepared);
    tmp_class_creation_33__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_100;
    exception_value = exception_keeper_value_100;
    exception_tb = exception_keeper_tb_100;
    exception_lineno = exception_keeper_lineno_100;

    goto frame_exception_exit_1;
    // End of try:
    try_end_34:;
    CHECK_OBJECT(tmp_class_creation_33__bases_orig);
    Py_DECREF(tmp_class_creation_33__bases_orig);
    tmp_class_creation_33__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_33__bases);
    Py_DECREF(tmp_class_creation_33__bases);
    tmp_class_creation_33__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_33__class_decl_dict);
    Py_DECREF(tmp_class_creation_33__class_decl_dict);
    tmp_class_creation_33__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_33__metaclass);
    Py_DECREF(tmp_class_creation_33__metaclass);
    tmp_class_creation_33__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_33__prepared);
    Py_DECREF(tmp_class_creation_33__prepared);
    tmp_class_creation_33__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_257;
        PyObject *tmp_tuple_element_112;
        tmp_tuple_element_112 = GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_tuple_element_112 == NULL)) {
            tmp_tuple_element_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_tuple_element_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;

            goto try_except_handler_101;
        }
        tmp_assign_source_257 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_257, 0, tmp_tuple_element_112);
        assert(tmp_class_creation_34__bases_orig == NULL);
        tmp_class_creation_34__bases_orig = tmp_assign_source_257;
    }
    {
        PyObject *tmp_assign_source_258;
        PyObject *tmp_dircall_arg1_34;
        CHECK_OBJECT(tmp_class_creation_34__bases_orig);
        tmp_dircall_arg1_34 = tmp_class_creation_34__bases_orig;
        Py_INCREF(tmp_dircall_arg1_34);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_34};
            tmp_assign_source_258 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_258 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;

            goto try_except_handler_101;
        }
        assert(tmp_class_creation_34__bases == NULL);
        tmp_class_creation_34__bases = tmp_assign_source_258;
    }
    {
        PyObject *tmp_assign_source_259;
        tmp_assign_source_259 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_34__class_decl_dict == NULL);
        tmp_class_creation_34__class_decl_dict = tmp_assign_source_259;
    }
    {
        PyObject *tmp_assign_source_260;
        PyObject *tmp_metaclass_value_34;
        nuitka_bool tmp_condition_result_133;
        int tmp_truth_name_34;
        PyObject *tmp_type_arg_67;
        PyObject *tmp_expression_value_203;
        PyObject *tmp_subscript_value_34;
        PyObject *tmp_bases_value_34;
        CHECK_OBJECT(tmp_class_creation_34__bases);
        tmp_truth_name_34 = CHECK_IF_TRUE(tmp_class_creation_34__bases);
        if (tmp_truth_name_34 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;

            goto try_except_handler_101;
        }
        tmp_condition_result_133 = tmp_truth_name_34 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_133 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_34;
        } else {
            goto condexpr_false_34;
        }
        condexpr_true_34:;
        CHECK_OBJECT(tmp_class_creation_34__bases);
        tmp_expression_value_203 = tmp_class_creation_34__bases;
        tmp_subscript_value_34 = mod_consts[40];
        tmp_type_arg_67 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_203, tmp_subscript_value_34, 0);
        if (tmp_type_arg_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;

            goto try_except_handler_101;
        }
        tmp_metaclass_value_34 = BUILTIN_TYPE1(tmp_type_arg_67);
        Py_DECREF(tmp_type_arg_67);
        if (tmp_metaclass_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;

            goto try_except_handler_101;
        }
        goto condexpr_end_34;
        condexpr_false_34:;
        tmp_metaclass_value_34 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_34);
        condexpr_end_34:;
        CHECK_OBJECT(tmp_class_creation_34__bases);
        tmp_bases_value_34 = tmp_class_creation_34__bases;
        tmp_assign_source_260 = SELECT_METACLASS(tstate, tmp_metaclass_value_34, tmp_bases_value_34);
        Py_DECREF(tmp_metaclass_value_34);
        if (tmp_assign_source_260 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;

            goto try_except_handler_101;
        }
        assert(tmp_class_creation_34__metaclass == NULL);
        tmp_class_creation_34__metaclass = tmp_assign_source_260;
    }
    {
        bool tmp_condition_result_134;
        PyObject *tmp_expression_value_204;
        CHECK_OBJECT(tmp_class_creation_34__metaclass);
        tmp_expression_value_204 = tmp_class_creation_34__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_204, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;

            goto try_except_handler_101;
        }
        tmp_condition_result_134 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_134 != false) {
            goto branch_yes_100;
        } else {
            goto branch_no_100;
        }
    }
    branch_yes_100:;
    {
        PyObject *tmp_assign_source_261;
        PyObject *tmp_called_value_71;
        PyObject *tmp_expression_value_205;
        PyObject *tmp_args_value_67;
        PyObject *tmp_tuple_element_113;
        PyObject *tmp_kwargs_value_67;
        CHECK_OBJECT(tmp_class_creation_34__metaclass);
        tmp_expression_value_205 = tmp_class_creation_34__metaclass;
        tmp_called_value_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_205, mod_consts[50]);
        if (tmp_called_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;

            goto try_except_handler_101;
        }
        tmp_tuple_element_113 = mod_consts[147];
        tmp_args_value_67 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_67, 0, tmp_tuple_element_113);
        CHECK_OBJECT(tmp_class_creation_34__bases);
        tmp_tuple_element_113 = tmp_class_creation_34__bases;
        PyTuple_SET_ITEM0(tmp_args_value_67, 1, tmp_tuple_element_113);
        CHECK_OBJECT(tmp_class_creation_34__class_decl_dict);
        tmp_kwargs_value_67 = tmp_class_creation_34__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 722;
        tmp_assign_source_261 = CALL_FUNCTION(tstate, tmp_called_value_71, tmp_args_value_67, tmp_kwargs_value_67);
        Py_DECREF(tmp_called_value_71);
        Py_DECREF(tmp_args_value_67);
        if (tmp_assign_source_261 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;

            goto try_except_handler_101;
        }
        assert(tmp_class_creation_34__prepared == NULL);
        tmp_class_creation_34__prepared = tmp_assign_source_261;
    }
    {
        bool tmp_condition_result_135;
        PyObject *tmp_operand_value_34;
        PyObject *tmp_expression_value_206;
        CHECK_OBJECT(tmp_class_creation_34__prepared);
        tmp_expression_value_206 = tmp_class_creation_34__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_206, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;

            goto try_except_handler_101;
        }
        tmp_operand_value_34 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_34);
        assert(!(tmp_res == -1));
        tmp_condition_result_135 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_135 != false) {
            goto branch_yes_101;
        } else {
            goto branch_no_101;
        }
    }
    branch_yes_101:;
    {
        PyObject *tmp_raise_type_34;
        PyObject *tmp_raise_value_34;
        PyObject *tmp_mod_expr_left_34;
        PyObject *tmp_mod_expr_right_34;
        PyObject *tmp_tuple_element_114;
        PyObject *tmp_expression_value_207;
        PyObject *tmp_name_value_37;
        PyObject *tmp_default_value_34;
        tmp_raise_type_34 = PyExc_TypeError;
        tmp_mod_expr_left_34 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_34__metaclass);
        tmp_expression_value_207 = tmp_class_creation_34__metaclass;
        tmp_name_value_37 = mod_consts[8];
        tmp_default_value_34 = mod_consts[54];
        tmp_tuple_element_114 = BUILTIN_GETATTR(tstate, tmp_expression_value_207, tmp_name_value_37, tmp_default_value_34);
        if (tmp_tuple_element_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;

            goto try_except_handler_101;
        }
        tmp_mod_expr_right_34 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_208;
            PyObject *tmp_type_arg_68;
            PyTuple_SET_ITEM(tmp_mod_expr_right_34, 0, tmp_tuple_element_114);
            CHECK_OBJECT(tmp_class_creation_34__prepared);
            tmp_type_arg_68 = tmp_class_creation_34__prepared;
            tmp_expression_value_208 = BUILTIN_TYPE1(tmp_type_arg_68);
            assert(!(tmp_expression_value_208 == NULL));
            tmp_tuple_element_114 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_208, mod_consts[8]);
            Py_DECREF(tmp_expression_value_208);
            if (tmp_tuple_element_114 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 722;

                goto tuple_build_exception_34;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_34, 1, tmp_tuple_element_114);
        }
        goto tuple_build_noexception_34;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_34:;
        Py_DECREF(tmp_mod_expr_right_34);
        goto try_except_handler_101;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_34:;
        tmp_raise_value_34 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_34, tmp_mod_expr_right_34);
        Py_DECREF(tmp_mod_expr_right_34);
        if (tmp_raise_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;

            goto try_except_handler_101;
        }
        exception_type = tmp_raise_type_34;
        Py_INCREF(tmp_raise_type_34);
        exception_value = tmp_raise_value_34;
        exception_lineno = 722;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_101;
    }
    branch_no_101:;
    goto branch_end_100;
    branch_no_100:;
    {
        PyObject *tmp_assign_source_262;
        tmp_assign_source_262 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_34__prepared == NULL);
        tmp_class_creation_34__prepared = tmp_assign_source_262;
    }
    branch_end_100:;
    {
        PyObject *tmp_assign_source_263;
        {
            PyObject *tmp_set_locals_34;
            CHECK_OBJECT(tmp_class_creation_34__prepared);
            tmp_set_locals_34 = tmp_class_creation_34__prepared;
            locals_pandas$errors$$$class__34_CategoricalConversionWarning_722 = tmp_set_locals_34;
            Py_INCREF(tmp_set_locals_34);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__34_CategoricalConversionWarning_722, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;

            goto try_except_handler_103;
        }
        tmp_dictset_value = mod_consts[148];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__34_CategoricalConversionWarning_722, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;

            goto try_except_handler_103;
        }
        tmp_dictset_value = mod_consts[147];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__34_CategoricalConversionWarning_722, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;

            goto try_except_handler_103;
        }
        {
            nuitka_bool tmp_condition_result_136;
            PyObject *tmp_cmp_expr_left_34;
            PyObject *tmp_cmp_expr_right_34;
            CHECK_OBJECT(tmp_class_creation_34__bases);
            tmp_cmp_expr_left_34 = tmp_class_creation_34__bases;
            CHECK_OBJECT(tmp_class_creation_34__bases_orig);
            tmp_cmp_expr_right_34 = tmp_class_creation_34__bases_orig;
            tmp_condition_result_136 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_34, tmp_cmp_expr_right_34);
            if (tmp_condition_result_136 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 722;

                goto try_except_handler_103;
            }
            if (tmp_condition_result_136 == NUITKA_BOOL_TRUE) {
                goto branch_yes_102;
            } else {
                goto branch_no_102;
            }
        }
        branch_yes_102:;
        CHECK_OBJECT(tmp_class_creation_34__bases_orig);
        tmp_dictset_value = tmp_class_creation_34__bases_orig;
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__34_CategoricalConversionWarning_722, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;

            goto try_except_handler_103;
        }
        branch_no_102:;
        {
            PyObject *tmp_assign_source_264;
            PyObject *tmp_called_value_72;
            PyObject *tmp_args_value_68;
            PyObject *tmp_tuple_element_115;
            PyObject *tmp_kwargs_value_68;
            CHECK_OBJECT(tmp_class_creation_34__metaclass);
            tmp_called_value_72 = tmp_class_creation_34__metaclass;
            tmp_tuple_element_115 = mod_consts[147];
            tmp_args_value_68 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_68, 0, tmp_tuple_element_115);
            CHECK_OBJECT(tmp_class_creation_34__bases);
            tmp_tuple_element_115 = tmp_class_creation_34__bases;
            PyTuple_SET_ITEM0(tmp_args_value_68, 1, tmp_tuple_element_115);
            tmp_tuple_element_115 = locals_pandas$errors$$$class__34_CategoricalConversionWarning_722;
            PyTuple_SET_ITEM0(tmp_args_value_68, 2, tmp_tuple_element_115);
            CHECK_OBJECT(tmp_class_creation_34__class_decl_dict);
            tmp_kwargs_value_68 = tmp_class_creation_34__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 722;
            tmp_assign_source_264 = CALL_FUNCTION(tstate, tmp_called_value_72, tmp_args_value_68, tmp_kwargs_value_68);
            Py_DECREF(tmp_args_value_68);
            if (tmp_assign_source_264 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 722;

                goto try_except_handler_103;
            }
            assert(outline_33_var___class__ == NULL);
            outline_33_var___class__ = tmp_assign_source_264;
        }
        CHECK_OBJECT(outline_33_var___class__);
        tmp_assign_source_263 = outline_33_var___class__;
        Py_INCREF(tmp_assign_source_263);
        goto try_return_handler_103;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_103:;
        Py_DECREF(locals_pandas$errors$$$class__34_CategoricalConversionWarning_722);
        locals_pandas$errors$$$class__34_CategoricalConversionWarning_722 = NULL;
        goto try_return_handler_102;
        // Exception handler code:
        try_except_handler_103:;
        exception_keeper_type_101 = exception_type;
        exception_keeper_value_101 = exception_value;
        exception_keeper_tb_101 = exception_tb;
        exception_keeper_lineno_101 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$errors$$$class__34_CategoricalConversionWarning_722);
        locals_pandas$errors$$$class__34_CategoricalConversionWarning_722 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_101;
        exception_value = exception_keeper_value_101;
        exception_tb = exception_keeper_tb_101;
        exception_lineno = exception_keeper_lineno_101;

        goto try_except_handler_102;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_102:;
        CHECK_OBJECT(outline_33_var___class__);
        Py_DECREF(outline_33_var___class__);
        outline_33_var___class__ = NULL;
        goto outline_result_34;
        // Exception handler code:
        try_except_handler_102:;
        exception_keeper_type_102 = exception_type;
        exception_keeper_value_102 = exception_value;
        exception_keeper_tb_102 = exception_tb;
        exception_keeper_lineno_102 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_102;
        exception_value = exception_keeper_value_102;
        exception_tb = exception_keeper_tb_102;
        exception_lineno = exception_keeper_lineno_102;

        goto outline_exception_34;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_34:;
        exception_lineno = 722;
        goto try_except_handler_101;
        outline_result_34:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_263);
    }
    goto try_end_35;
    // Exception handler code:
    try_except_handler_101:;
    exception_keeper_type_103 = exception_type;
    exception_keeper_value_103 = exception_value;
    exception_keeper_tb_103 = exception_tb;
    exception_keeper_lineno_103 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_34__bases_orig);
    tmp_class_creation_34__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_34__bases);
    tmp_class_creation_34__bases = NULL;
    Py_XDECREF(tmp_class_creation_34__class_decl_dict);
    tmp_class_creation_34__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_34__metaclass);
    tmp_class_creation_34__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_34__prepared);
    tmp_class_creation_34__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_103;
    exception_value = exception_keeper_value_103;
    exception_tb = exception_keeper_tb_103;
    exception_lineno = exception_keeper_lineno_103;

    goto frame_exception_exit_1;
    // End of try:
    try_end_35:;
    CHECK_OBJECT(tmp_class_creation_34__bases_orig);
    Py_DECREF(tmp_class_creation_34__bases_orig);
    tmp_class_creation_34__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_34__bases);
    Py_DECREF(tmp_class_creation_34__bases);
    tmp_class_creation_34__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_34__class_decl_dict);
    Py_DECREF(tmp_class_creation_34__class_decl_dict);
    tmp_class_creation_34__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_34__metaclass);
    Py_DECREF(tmp_class_creation_34__metaclass);
    tmp_class_creation_34__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_34__prepared);
    Py_DECREF(tmp_class_creation_34__prepared);
    tmp_class_creation_34__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_265;
        PyObject *tmp_dircall_arg1_35;
        tmp_dircall_arg1_35 = mod_consts[89];
        Py_INCREF(tmp_dircall_arg1_35);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_35};
            tmp_assign_source_265 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_265 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_104;
        }
        assert(tmp_class_creation_35__bases == NULL);
        tmp_class_creation_35__bases = tmp_assign_source_265;
    }
    {
        PyObject *tmp_assign_source_266;
        tmp_assign_source_266 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_35__class_decl_dict == NULL);
        tmp_class_creation_35__class_decl_dict = tmp_assign_source_266;
    }
    {
        PyObject *tmp_assign_source_267;
        PyObject *tmp_metaclass_value_35;
        nuitka_bool tmp_condition_result_137;
        int tmp_truth_name_35;
        PyObject *tmp_type_arg_69;
        PyObject *tmp_expression_value_209;
        PyObject *tmp_subscript_value_35;
        PyObject *tmp_bases_value_35;
        CHECK_OBJECT(tmp_class_creation_35__bases);
        tmp_truth_name_35 = CHECK_IF_TRUE(tmp_class_creation_35__bases);
        if (tmp_truth_name_35 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_104;
        }
        tmp_condition_result_137 = tmp_truth_name_35 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_137 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_35;
        } else {
            goto condexpr_false_35;
        }
        condexpr_true_35:;
        CHECK_OBJECT(tmp_class_creation_35__bases);
        tmp_expression_value_209 = tmp_class_creation_35__bases;
        tmp_subscript_value_35 = mod_consts[40];
        tmp_type_arg_69 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_209, tmp_subscript_value_35, 0);
        if (tmp_type_arg_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_104;
        }
        tmp_metaclass_value_35 = BUILTIN_TYPE1(tmp_type_arg_69);
        Py_DECREF(tmp_type_arg_69);
        if (tmp_metaclass_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_104;
        }
        goto condexpr_end_35;
        condexpr_false_35:;
        tmp_metaclass_value_35 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_35);
        condexpr_end_35:;
        CHECK_OBJECT(tmp_class_creation_35__bases);
        tmp_bases_value_35 = tmp_class_creation_35__bases;
        tmp_assign_source_267 = SELECT_METACLASS(tstate, tmp_metaclass_value_35, tmp_bases_value_35);
        Py_DECREF(tmp_metaclass_value_35);
        if (tmp_assign_source_267 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_104;
        }
        assert(tmp_class_creation_35__metaclass == NULL);
        tmp_class_creation_35__metaclass = tmp_assign_source_267;
    }
    {
        bool tmp_condition_result_138;
        PyObject *tmp_expression_value_210;
        CHECK_OBJECT(tmp_class_creation_35__metaclass);
        tmp_expression_value_210 = tmp_class_creation_35__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_210, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_104;
        }
        tmp_condition_result_138 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_138 != false) {
            goto branch_yes_103;
        } else {
            goto branch_no_103;
        }
    }
    branch_yes_103:;
    {
        PyObject *tmp_assign_source_268;
        PyObject *tmp_called_value_73;
        PyObject *tmp_expression_value_211;
        PyObject *tmp_args_value_69;
        PyObject *tmp_tuple_element_116;
        PyObject *tmp_kwargs_value_69;
        CHECK_OBJECT(tmp_class_creation_35__metaclass);
        tmp_expression_value_211 = tmp_class_creation_35__metaclass;
        tmp_called_value_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_211, mod_consts[50]);
        if (tmp_called_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_104;
        }
        tmp_tuple_element_116 = mod_consts[149];
        tmp_args_value_69 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_69, 0, tmp_tuple_element_116);
        CHECK_OBJECT(tmp_class_creation_35__bases);
        tmp_tuple_element_116 = tmp_class_creation_35__bases;
        PyTuple_SET_ITEM0(tmp_args_value_69, 1, tmp_tuple_element_116);
        CHECK_OBJECT(tmp_class_creation_35__class_decl_dict);
        tmp_kwargs_value_69 = tmp_class_creation_35__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 736;
        tmp_assign_source_268 = CALL_FUNCTION(tstate, tmp_called_value_73, tmp_args_value_69, tmp_kwargs_value_69);
        Py_DECREF(tmp_called_value_73);
        Py_DECREF(tmp_args_value_69);
        if (tmp_assign_source_268 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_104;
        }
        assert(tmp_class_creation_35__prepared == NULL);
        tmp_class_creation_35__prepared = tmp_assign_source_268;
    }
    {
        bool tmp_condition_result_139;
        PyObject *tmp_operand_value_35;
        PyObject *tmp_expression_value_212;
        CHECK_OBJECT(tmp_class_creation_35__prepared);
        tmp_expression_value_212 = tmp_class_creation_35__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_212, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_104;
        }
        tmp_operand_value_35 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_35);
        assert(!(tmp_res == -1));
        tmp_condition_result_139 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_139 != false) {
            goto branch_yes_104;
        } else {
            goto branch_no_104;
        }
    }
    branch_yes_104:;
    {
        PyObject *tmp_raise_type_35;
        PyObject *tmp_raise_value_35;
        PyObject *tmp_mod_expr_left_35;
        PyObject *tmp_mod_expr_right_35;
        PyObject *tmp_tuple_element_117;
        PyObject *tmp_expression_value_213;
        PyObject *tmp_name_value_38;
        PyObject *tmp_default_value_35;
        tmp_raise_type_35 = PyExc_TypeError;
        tmp_mod_expr_left_35 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_35__metaclass);
        tmp_expression_value_213 = tmp_class_creation_35__metaclass;
        tmp_name_value_38 = mod_consts[8];
        tmp_default_value_35 = mod_consts[54];
        tmp_tuple_element_117 = BUILTIN_GETATTR(tstate, tmp_expression_value_213, tmp_name_value_38, tmp_default_value_35);
        if (tmp_tuple_element_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_104;
        }
        tmp_mod_expr_right_35 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_214;
            PyObject *tmp_type_arg_70;
            PyTuple_SET_ITEM(tmp_mod_expr_right_35, 0, tmp_tuple_element_117);
            CHECK_OBJECT(tmp_class_creation_35__prepared);
            tmp_type_arg_70 = tmp_class_creation_35__prepared;
            tmp_expression_value_214 = BUILTIN_TYPE1(tmp_type_arg_70);
            assert(!(tmp_expression_value_214 == NULL));
            tmp_tuple_element_117 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_214, mod_consts[8]);
            Py_DECREF(tmp_expression_value_214);
            if (tmp_tuple_element_117 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 736;

                goto tuple_build_exception_35;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_35, 1, tmp_tuple_element_117);
        }
        goto tuple_build_noexception_35;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_35:;
        Py_DECREF(tmp_mod_expr_right_35);
        goto try_except_handler_104;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_35:;
        tmp_raise_value_35 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_35, tmp_mod_expr_right_35);
        Py_DECREF(tmp_mod_expr_right_35);
        if (tmp_raise_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_104;
        }
        exception_type = tmp_raise_type_35;
        Py_INCREF(tmp_raise_type_35);
        exception_value = tmp_raise_value_35;
        exception_lineno = 736;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_104;
    }
    branch_no_104:;
    goto branch_end_103;
    branch_no_103:;
    {
        PyObject *tmp_assign_source_269;
        tmp_assign_source_269 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_35__prepared == NULL);
        tmp_class_creation_35__prepared = tmp_assign_source_269;
    }
    branch_end_103:;
    {
        PyObject *tmp_assign_source_270;
        {
            PyObject *tmp_set_locals_35;
            CHECK_OBJECT(tmp_class_creation_35__prepared);
            tmp_set_locals_35 = tmp_class_creation_35__prepared;
            locals_pandas$errors$$$class__35_LossySetitemError_736 = tmp_set_locals_35;
            Py_INCREF(tmp_set_locals_35);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__35_LossySetitemError_736, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_106;
        }
        tmp_dictset_value = mod_consts[150];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__35_LossySetitemError_736, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_106;
        }
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__35_LossySetitemError_736, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_106;
        }
        {
            nuitka_bool tmp_condition_result_140;
            PyObject *tmp_cmp_expr_left_35;
            PyObject *tmp_cmp_expr_right_35;
            CHECK_OBJECT(tmp_class_creation_35__bases);
            tmp_cmp_expr_left_35 = tmp_class_creation_35__bases;
            tmp_cmp_expr_right_35 = mod_consts[89];
            tmp_condition_result_140 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_35, tmp_cmp_expr_right_35);
            if (tmp_condition_result_140 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 736;

                goto try_except_handler_106;
            }
            if (tmp_condition_result_140 == NUITKA_BOOL_TRUE) {
                goto branch_yes_105;
            } else {
                goto branch_no_105;
            }
        }
        branch_yes_105:;
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__35_LossySetitemError_736, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 736;

            goto try_except_handler_106;
        }
        branch_no_105:;
        {
            PyObject *tmp_assign_source_271;
            PyObject *tmp_called_value_74;
            PyObject *tmp_args_value_70;
            PyObject *tmp_tuple_element_118;
            PyObject *tmp_kwargs_value_70;
            CHECK_OBJECT(tmp_class_creation_35__metaclass);
            tmp_called_value_74 = tmp_class_creation_35__metaclass;
            tmp_tuple_element_118 = mod_consts[149];
            tmp_args_value_70 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_70, 0, tmp_tuple_element_118);
            CHECK_OBJECT(tmp_class_creation_35__bases);
            tmp_tuple_element_118 = tmp_class_creation_35__bases;
            PyTuple_SET_ITEM0(tmp_args_value_70, 1, tmp_tuple_element_118);
            tmp_tuple_element_118 = locals_pandas$errors$$$class__35_LossySetitemError_736;
            PyTuple_SET_ITEM0(tmp_args_value_70, 2, tmp_tuple_element_118);
            CHECK_OBJECT(tmp_class_creation_35__class_decl_dict);
            tmp_kwargs_value_70 = tmp_class_creation_35__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 736;
            tmp_assign_source_271 = CALL_FUNCTION(tstate, tmp_called_value_74, tmp_args_value_70, tmp_kwargs_value_70);
            Py_DECREF(tmp_args_value_70);
            if (tmp_assign_source_271 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 736;

                goto try_except_handler_106;
            }
            assert(outline_34_var___class__ == NULL);
            outline_34_var___class__ = tmp_assign_source_271;
        }
        CHECK_OBJECT(outline_34_var___class__);
        tmp_assign_source_270 = outline_34_var___class__;
        Py_INCREF(tmp_assign_source_270);
        goto try_return_handler_106;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_106:;
        Py_DECREF(locals_pandas$errors$$$class__35_LossySetitemError_736);
        locals_pandas$errors$$$class__35_LossySetitemError_736 = NULL;
        goto try_return_handler_105;
        // Exception handler code:
        try_except_handler_106:;
        exception_keeper_type_104 = exception_type;
        exception_keeper_value_104 = exception_value;
        exception_keeper_tb_104 = exception_tb;
        exception_keeper_lineno_104 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$errors$$$class__35_LossySetitemError_736);
        locals_pandas$errors$$$class__35_LossySetitemError_736 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_104;
        exception_value = exception_keeper_value_104;
        exception_tb = exception_keeper_tb_104;
        exception_lineno = exception_keeper_lineno_104;

        goto try_except_handler_105;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_105:;
        CHECK_OBJECT(outline_34_var___class__);
        Py_DECREF(outline_34_var___class__);
        outline_34_var___class__ = NULL;
        goto outline_result_35;
        // Exception handler code:
        try_except_handler_105:;
        exception_keeper_type_105 = exception_type;
        exception_keeper_value_105 = exception_value;
        exception_keeper_tb_105 = exception_tb;
        exception_keeper_lineno_105 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_105;
        exception_value = exception_keeper_value_105;
        exception_tb = exception_keeper_tb_105;
        exception_lineno = exception_keeper_lineno_105;

        goto outline_exception_35;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_35:;
        exception_lineno = 736;
        goto try_except_handler_104;
        outline_result_35:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_270);
    }
    goto try_end_36;
    // Exception handler code:
    try_except_handler_104:;
    exception_keeper_type_106 = exception_type;
    exception_keeper_value_106 = exception_value;
    exception_keeper_tb_106 = exception_tb;
    exception_keeper_lineno_106 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_35__bases);
    tmp_class_creation_35__bases = NULL;
    Py_XDECREF(tmp_class_creation_35__class_decl_dict);
    tmp_class_creation_35__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_35__metaclass);
    tmp_class_creation_35__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_35__prepared);
    tmp_class_creation_35__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_106;
    exception_value = exception_keeper_value_106;
    exception_tb = exception_keeper_tb_106;
    exception_lineno = exception_keeper_lineno_106;

    goto frame_exception_exit_1;
    // End of try:
    try_end_36:;
    CHECK_OBJECT(tmp_class_creation_35__bases);
    Py_DECREF(tmp_class_creation_35__bases);
    tmp_class_creation_35__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_35__class_decl_dict);
    Py_DECREF(tmp_class_creation_35__class_decl_dict);
    tmp_class_creation_35__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_35__metaclass);
    Py_DECREF(tmp_class_creation_35__metaclass);
    tmp_class_creation_35__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_35__prepared);
    Py_DECREF(tmp_class_creation_35__prepared);
    tmp_class_creation_35__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_272;
        PyObject *tmp_dircall_arg1_36;
        tmp_dircall_arg1_36 = mod_consts[89];
        Py_INCREF(tmp_dircall_arg1_36);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_36};
            tmp_assign_source_272 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_272 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;

            goto try_except_handler_107;
        }
        assert(tmp_class_creation_36__bases == NULL);
        tmp_class_creation_36__bases = tmp_assign_source_272;
    }
    {
        PyObject *tmp_assign_source_273;
        tmp_assign_source_273 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_36__class_decl_dict == NULL);
        tmp_class_creation_36__class_decl_dict = tmp_assign_source_273;
    }
    {
        PyObject *tmp_assign_source_274;
        PyObject *tmp_metaclass_value_36;
        nuitka_bool tmp_condition_result_141;
        int tmp_truth_name_36;
        PyObject *tmp_type_arg_71;
        PyObject *tmp_expression_value_215;
        PyObject *tmp_subscript_value_36;
        PyObject *tmp_bases_value_36;
        CHECK_OBJECT(tmp_class_creation_36__bases);
        tmp_truth_name_36 = CHECK_IF_TRUE(tmp_class_creation_36__bases);
        if (tmp_truth_name_36 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;

            goto try_except_handler_107;
        }
        tmp_condition_result_141 = tmp_truth_name_36 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_141 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_36;
        } else {
            goto condexpr_false_36;
        }
        condexpr_true_36:;
        CHECK_OBJECT(tmp_class_creation_36__bases);
        tmp_expression_value_215 = tmp_class_creation_36__bases;
        tmp_subscript_value_36 = mod_consts[40];
        tmp_type_arg_71 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_215, tmp_subscript_value_36, 0);
        if (tmp_type_arg_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;

            goto try_except_handler_107;
        }
        tmp_metaclass_value_36 = BUILTIN_TYPE1(tmp_type_arg_71);
        Py_DECREF(tmp_type_arg_71);
        if (tmp_metaclass_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;

            goto try_except_handler_107;
        }
        goto condexpr_end_36;
        condexpr_false_36:;
        tmp_metaclass_value_36 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_36);
        condexpr_end_36:;
        CHECK_OBJECT(tmp_class_creation_36__bases);
        tmp_bases_value_36 = tmp_class_creation_36__bases;
        tmp_assign_source_274 = SELECT_METACLASS(tstate, tmp_metaclass_value_36, tmp_bases_value_36);
        Py_DECREF(tmp_metaclass_value_36);
        if (tmp_assign_source_274 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;

            goto try_except_handler_107;
        }
        assert(tmp_class_creation_36__metaclass == NULL);
        tmp_class_creation_36__metaclass = tmp_assign_source_274;
    }
    {
        bool tmp_condition_result_142;
        PyObject *tmp_expression_value_216;
        CHECK_OBJECT(tmp_class_creation_36__metaclass);
        tmp_expression_value_216 = tmp_class_creation_36__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_216, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;

            goto try_except_handler_107;
        }
        tmp_condition_result_142 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_142 != false) {
            goto branch_yes_106;
        } else {
            goto branch_no_106;
        }
    }
    branch_yes_106:;
    {
        PyObject *tmp_assign_source_275;
        PyObject *tmp_called_value_75;
        PyObject *tmp_expression_value_217;
        PyObject *tmp_args_value_71;
        PyObject *tmp_tuple_element_119;
        PyObject *tmp_kwargs_value_71;
        CHECK_OBJECT(tmp_class_creation_36__metaclass);
        tmp_expression_value_217 = tmp_class_creation_36__metaclass;
        tmp_called_value_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_217, mod_consts[50]);
        if (tmp_called_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;

            goto try_except_handler_107;
        }
        tmp_tuple_element_119 = mod_consts[151];
        tmp_args_value_71 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_71, 0, tmp_tuple_element_119);
        CHECK_OBJECT(tmp_class_creation_36__bases);
        tmp_tuple_element_119 = tmp_class_creation_36__bases;
        PyTuple_SET_ITEM0(tmp_args_value_71, 1, tmp_tuple_element_119);
        CHECK_OBJECT(tmp_class_creation_36__class_decl_dict);
        tmp_kwargs_value_71 = tmp_class_creation_36__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 746;
        tmp_assign_source_275 = CALL_FUNCTION(tstate, tmp_called_value_75, tmp_args_value_71, tmp_kwargs_value_71);
        Py_DECREF(tmp_called_value_75);
        Py_DECREF(tmp_args_value_71);
        if (tmp_assign_source_275 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;

            goto try_except_handler_107;
        }
        assert(tmp_class_creation_36__prepared == NULL);
        tmp_class_creation_36__prepared = tmp_assign_source_275;
    }
    {
        bool tmp_condition_result_143;
        PyObject *tmp_operand_value_36;
        PyObject *tmp_expression_value_218;
        CHECK_OBJECT(tmp_class_creation_36__prepared);
        tmp_expression_value_218 = tmp_class_creation_36__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_218, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;

            goto try_except_handler_107;
        }
        tmp_operand_value_36 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_36);
        assert(!(tmp_res == -1));
        tmp_condition_result_143 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_143 != false) {
            goto branch_yes_107;
        } else {
            goto branch_no_107;
        }
    }
    branch_yes_107:;
    {
        PyObject *tmp_raise_type_36;
        PyObject *tmp_raise_value_36;
        PyObject *tmp_mod_expr_left_36;
        PyObject *tmp_mod_expr_right_36;
        PyObject *tmp_tuple_element_120;
        PyObject *tmp_expression_value_219;
        PyObject *tmp_name_value_39;
        PyObject *tmp_default_value_36;
        tmp_raise_type_36 = PyExc_TypeError;
        tmp_mod_expr_left_36 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_36__metaclass);
        tmp_expression_value_219 = tmp_class_creation_36__metaclass;
        tmp_name_value_39 = mod_consts[8];
        tmp_default_value_36 = mod_consts[54];
        tmp_tuple_element_120 = BUILTIN_GETATTR(tstate, tmp_expression_value_219, tmp_name_value_39, tmp_default_value_36);
        if (tmp_tuple_element_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;

            goto try_except_handler_107;
        }
        tmp_mod_expr_right_36 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_220;
            PyObject *tmp_type_arg_72;
            PyTuple_SET_ITEM(tmp_mod_expr_right_36, 0, tmp_tuple_element_120);
            CHECK_OBJECT(tmp_class_creation_36__prepared);
            tmp_type_arg_72 = tmp_class_creation_36__prepared;
            tmp_expression_value_220 = BUILTIN_TYPE1(tmp_type_arg_72);
            assert(!(tmp_expression_value_220 == NULL));
            tmp_tuple_element_120 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_220, mod_consts[8]);
            Py_DECREF(tmp_expression_value_220);
            if (tmp_tuple_element_120 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 746;

                goto tuple_build_exception_36;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_36, 1, tmp_tuple_element_120);
        }
        goto tuple_build_noexception_36;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_36:;
        Py_DECREF(tmp_mod_expr_right_36);
        goto try_except_handler_107;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_36:;
        tmp_raise_value_36 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_36, tmp_mod_expr_right_36);
        Py_DECREF(tmp_mod_expr_right_36);
        if (tmp_raise_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;

            goto try_except_handler_107;
        }
        exception_type = tmp_raise_type_36;
        Py_INCREF(tmp_raise_type_36);
        exception_value = tmp_raise_value_36;
        exception_lineno = 746;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_107;
    }
    branch_no_107:;
    goto branch_end_106;
    branch_no_106:;
    {
        PyObject *tmp_assign_source_276;
        tmp_assign_source_276 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_36__prepared == NULL);
        tmp_class_creation_36__prepared = tmp_assign_source_276;
    }
    branch_end_106:;
    {
        PyObject *tmp_assign_source_277;
        {
            PyObject *tmp_set_locals_36;
            CHECK_OBJECT(tmp_class_creation_36__prepared);
            tmp_set_locals_36 = tmp_class_creation_36__prepared;
            locals_pandas$errors$$$class__36_NoBufferPresent_746 = tmp_set_locals_36;
            Py_INCREF(tmp_set_locals_36);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__36_NoBufferPresent_746, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;

            goto try_except_handler_109;
        }
        tmp_dictset_value = mod_consts[152];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__36_NoBufferPresent_746, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;

            goto try_except_handler_109;
        }
        tmp_dictset_value = mod_consts[151];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__36_NoBufferPresent_746, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;

            goto try_except_handler_109;
        }
        {
            nuitka_bool tmp_condition_result_144;
            PyObject *tmp_cmp_expr_left_36;
            PyObject *tmp_cmp_expr_right_36;
            CHECK_OBJECT(tmp_class_creation_36__bases);
            tmp_cmp_expr_left_36 = tmp_class_creation_36__bases;
            tmp_cmp_expr_right_36 = mod_consts[89];
            tmp_condition_result_144 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_36, tmp_cmp_expr_right_36);
            if (tmp_condition_result_144 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 746;

                goto try_except_handler_109;
            }
            if (tmp_condition_result_144 == NUITKA_BOOL_TRUE) {
                goto branch_yes_108;
            } else {
                goto branch_no_108;
            }
        }
        branch_yes_108:;
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__36_NoBufferPresent_746, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;

            goto try_except_handler_109;
        }
        branch_no_108:;
        {
            PyObject *tmp_assign_source_278;
            PyObject *tmp_called_value_76;
            PyObject *tmp_args_value_72;
            PyObject *tmp_tuple_element_121;
            PyObject *tmp_kwargs_value_72;
            CHECK_OBJECT(tmp_class_creation_36__metaclass);
            tmp_called_value_76 = tmp_class_creation_36__metaclass;
            tmp_tuple_element_121 = mod_consts[151];
            tmp_args_value_72 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_72, 0, tmp_tuple_element_121);
            CHECK_OBJECT(tmp_class_creation_36__bases);
            tmp_tuple_element_121 = tmp_class_creation_36__bases;
            PyTuple_SET_ITEM0(tmp_args_value_72, 1, tmp_tuple_element_121);
            tmp_tuple_element_121 = locals_pandas$errors$$$class__36_NoBufferPresent_746;
            PyTuple_SET_ITEM0(tmp_args_value_72, 2, tmp_tuple_element_121);
            CHECK_OBJECT(tmp_class_creation_36__class_decl_dict);
            tmp_kwargs_value_72 = tmp_class_creation_36__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 746;
            tmp_assign_source_278 = CALL_FUNCTION(tstate, tmp_called_value_76, tmp_args_value_72, tmp_kwargs_value_72);
            Py_DECREF(tmp_args_value_72);
            if (tmp_assign_source_278 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 746;

                goto try_except_handler_109;
            }
            assert(outline_35_var___class__ == NULL);
            outline_35_var___class__ = tmp_assign_source_278;
        }
        CHECK_OBJECT(outline_35_var___class__);
        tmp_assign_source_277 = outline_35_var___class__;
        Py_INCREF(tmp_assign_source_277);
        goto try_return_handler_109;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_109:;
        Py_DECREF(locals_pandas$errors$$$class__36_NoBufferPresent_746);
        locals_pandas$errors$$$class__36_NoBufferPresent_746 = NULL;
        goto try_return_handler_108;
        // Exception handler code:
        try_except_handler_109:;
        exception_keeper_type_107 = exception_type;
        exception_keeper_value_107 = exception_value;
        exception_keeper_tb_107 = exception_tb;
        exception_keeper_lineno_107 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$errors$$$class__36_NoBufferPresent_746);
        locals_pandas$errors$$$class__36_NoBufferPresent_746 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_107;
        exception_value = exception_keeper_value_107;
        exception_tb = exception_keeper_tb_107;
        exception_lineno = exception_keeper_lineno_107;

        goto try_except_handler_108;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_108:;
        CHECK_OBJECT(outline_35_var___class__);
        Py_DECREF(outline_35_var___class__);
        outline_35_var___class__ = NULL;
        goto outline_result_36;
        // Exception handler code:
        try_except_handler_108:;
        exception_keeper_type_108 = exception_type;
        exception_keeper_value_108 = exception_value;
        exception_keeper_tb_108 = exception_tb;
        exception_keeper_lineno_108 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_108;
        exception_value = exception_keeper_value_108;
        exception_tb = exception_keeper_tb_108;
        exception_lineno = exception_keeper_lineno_108;

        goto outline_exception_36;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_36:;
        exception_lineno = 746;
        goto try_except_handler_107;
        outline_result_36:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_277);
    }
    goto try_end_37;
    // Exception handler code:
    try_except_handler_107:;
    exception_keeper_type_109 = exception_type;
    exception_keeper_value_109 = exception_value;
    exception_keeper_tb_109 = exception_tb;
    exception_keeper_lineno_109 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_36__bases);
    tmp_class_creation_36__bases = NULL;
    Py_XDECREF(tmp_class_creation_36__class_decl_dict);
    tmp_class_creation_36__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_36__metaclass);
    tmp_class_creation_36__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_36__prepared);
    tmp_class_creation_36__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_109;
    exception_value = exception_keeper_value_109;
    exception_tb = exception_keeper_tb_109;
    exception_lineno = exception_keeper_lineno_109;

    goto frame_exception_exit_1;
    // End of try:
    try_end_37:;
    CHECK_OBJECT(tmp_class_creation_36__bases);
    Py_DECREF(tmp_class_creation_36__bases);
    tmp_class_creation_36__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_36__class_decl_dict);
    Py_DECREF(tmp_class_creation_36__class_decl_dict);
    tmp_class_creation_36__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_36__metaclass);
    Py_DECREF(tmp_class_creation_36__metaclass);
    tmp_class_creation_36__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_36__prepared);
    Py_DECREF(tmp_class_creation_36__prepared);
    tmp_class_creation_36__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_279;
        PyObject *tmp_dircall_arg1_37;
        tmp_dircall_arg1_37 = mod_consts[89];
        Py_INCREF(tmp_dircall_arg1_37);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_37};
            tmp_assign_source_279 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_279 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 752;

            goto try_except_handler_110;
        }
        assert(tmp_class_creation_37__bases == NULL);
        tmp_class_creation_37__bases = tmp_assign_source_279;
    }
    {
        PyObject *tmp_assign_source_280;
        tmp_assign_source_280 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_37__class_decl_dict == NULL);
        tmp_class_creation_37__class_decl_dict = tmp_assign_source_280;
    }
    {
        PyObject *tmp_assign_source_281;
        PyObject *tmp_metaclass_value_37;
        nuitka_bool tmp_condition_result_145;
        int tmp_truth_name_37;
        PyObject *tmp_type_arg_73;
        PyObject *tmp_expression_value_221;
        PyObject *tmp_subscript_value_37;
        PyObject *tmp_bases_value_37;
        CHECK_OBJECT(tmp_class_creation_37__bases);
        tmp_truth_name_37 = CHECK_IF_TRUE(tmp_class_creation_37__bases);
        if (tmp_truth_name_37 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 752;

            goto try_except_handler_110;
        }
        tmp_condition_result_145 = tmp_truth_name_37 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_145 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_37;
        } else {
            goto condexpr_false_37;
        }
        condexpr_true_37:;
        CHECK_OBJECT(tmp_class_creation_37__bases);
        tmp_expression_value_221 = tmp_class_creation_37__bases;
        tmp_subscript_value_37 = mod_consts[40];
        tmp_type_arg_73 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_221, tmp_subscript_value_37, 0);
        if (tmp_type_arg_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 752;

            goto try_except_handler_110;
        }
        tmp_metaclass_value_37 = BUILTIN_TYPE1(tmp_type_arg_73);
        Py_DECREF(tmp_type_arg_73);
        if (tmp_metaclass_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 752;

            goto try_except_handler_110;
        }
        goto condexpr_end_37;
        condexpr_false_37:;
        tmp_metaclass_value_37 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_37);
        condexpr_end_37:;
        CHECK_OBJECT(tmp_class_creation_37__bases);
        tmp_bases_value_37 = tmp_class_creation_37__bases;
        tmp_assign_source_281 = SELECT_METACLASS(tstate, tmp_metaclass_value_37, tmp_bases_value_37);
        Py_DECREF(tmp_metaclass_value_37);
        if (tmp_assign_source_281 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 752;

            goto try_except_handler_110;
        }
        assert(tmp_class_creation_37__metaclass == NULL);
        tmp_class_creation_37__metaclass = tmp_assign_source_281;
    }
    {
        bool tmp_condition_result_146;
        PyObject *tmp_expression_value_222;
        CHECK_OBJECT(tmp_class_creation_37__metaclass);
        tmp_expression_value_222 = tmp_class_creation_37__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_222, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 752;

            goto try_except_handler_110;
        }
        tmp_condition_result_146 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_146 != false) {
            goto branch_yes_109;
        } else {
            goto branch_no_109;
        }
    }
    branch_yes_109:;
    {
        PyObject *tmp_assign_source_282;
        PyObject *tmp_called_value_77;
        PyObject *tmp_expression_value_223;
        PyObject *tmp_args_value_73;
        PyObject *tmp_tuple_element_122;
        PyObject *tmp_kwargs_value_73;
        CHECK_OBJECT(tmp_class_creation_37__metaclass);
        tmp_expression_value_223 = tmp_class_creation_37__metaclass;
        tmp_called_value_77 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_223, mod_consts[50]);
        if (tmp_called_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 752;

            goto try_except_handler_110;
        }
        tmp_tuple_element_122 = mod_consts[153];
        tmp_args_value_73 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_73, 0, tmp_tuple_element_122);
        CHECK_OBJECT(tmp_class_creation_37__bases);
        tmp_tuple_element_122 = tmp_class_creation_37__bases;
        PyTuple_SET_ITEM0(tmp_args_value_73, 1, tmp_tuple_element_122);
        CHECK_OBJECT(tmp_class_creation_37__class_decl_dict);
        tmp_kwargs_value_73 = tmp_class_creation_37__class_decl_dict;
        frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 752;
        tmp_assign_source_282 = CALL_FUNCTION(tstate, tmp_called_value_77, tmp_args_value_73, tmp_kwargs_value_73);
        Py_DECREF(tmp_called_value_77);
        Py_DECREF(tmp_args_value_73);
        if (tmp_assign_source_282 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 752;

            goto try_except_handler_110;
        }
        assert(tmp_class_creation_37__prepared == NULL);
        tmp_class_creation_37__prepared = tmp_assign_source_282;
    }
    {
        bool tmp_condition_result_147;
        PyObject *tmp_operand_value_37;
        PyObject *tmp_expression_value_224;
        CHECK_OBJECT(tmp_class_creation_37__prepared);
        tmp_expression_value_224 = tmp_class_creation_37__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_224, mod_consts[52]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 752;

            goto try_except_handler_110;
        }
        tmp_operand_value_37 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_37);
        assert(!(tmp_res == -1));
        tmp_condition_result_147 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_147 != false) {
            goto branch_yes_110;
        } else {
            goto branch_no_110;
        }
    }
    branch_yes_110:;
    {
        PyObject *tmp_raise_type_37;
        PyObject *tmp_raise_value_37;
        PyObject *tmp_mod_expr_left_37;
        PyObject *tmp_mod_expr_right_37;
        PyObject *tmp_tuple_element_123;
        PyObject *tmp_expression_value_225;
        PyObject *tmp_name_value_40;
        PyObject *tmp_default_value_37;
        tmp_raise_type_37 = PyExc_TypeError;
        tmp_mod_expr_left_37 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_37__metaclass);
        tmp_expression_value_225 = tmp_class_creation_37__metaclass;
        tmp_name_value_40 = mod_consts[8];
        tmp_default_value_37 = mod_consts[54];
        tmp_tuple_element_123 = BUILTIN_GETATTR(tstate, tmp_expression_value_225, tmp_name_value_40, tmp_default_value_37);
        if (tmp_tuple_element_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 752;

            goto try_except_handler_110;
        }
        tmp_mod_expr_right_37 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_226;
            PyObject *tmp_type_arg_74;
            PyTuple_SET_ITEM(tmp_mod_expr_right_37, 0, tmp_tuple_element_123);
            CHECK_OBJECT(tmp_class_creation_37__prepared);
            tmp_type_arg_74 = tmp_class_creation_37__prepared;
            tmp_expression_value_226 = BUILTIN_TYPE1(tmp_type_arg_74);
            assert(!(tmp_expression_value_226 == NULL));
            tmp_tuple_element_123 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_226, mod_consts[8]);
            Py_DECREF(tmp_expression_value_226);
            if (tmp_tuple_element_123 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 752;

                goto tuple_build_exception_37;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_37, 1, tmp_tuple_element_123);
        }
        goto tuple_build_noexception_37;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_37:;
        Py_DECREF(tmp_mod_expr_right_37);
        goto try_except_handler_110;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_37:;
        tmp_raise_value_37 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_37, tmp_mod_expr_right_37);
        Py_DECREF(tmp_mod_expr_right_37);
        if (tmp_raise_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 752;

            goto try_except_handler_110;
        }
        exception_type = tmp_raise_type_37;
        Py_INCREF(tmp_raise_type_37);
        exception_value = tmp_raise_value_37;
        exception_lineno = 752;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_110;
    }
    branch_no_110:;
    goto branch_end_109;
    branch_no_109:;
    {
        PyObject *tmp_assign_source_283;
        tmp_assign_source_283 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_37__prepared == NULL);
        tmp_class_creation_37__prepared = tmp_assign_source_283;
    }
    branch_end_109:;
    {
        PyObject *tmp_assign_source_284;
        {
            PyObject *tmp_set_locals_37;
            CHECK_OBJECT(tmp_class_creation_37__prepared);
            tmp_set_locals_37 = tmp_class_creation_37__prepared;
            locals_pandas$errors$$$class__37_InvalidComparison_752 = tmp_set_locals_37;
            Py_INCREF(tmp_set_locals_37);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__37_InvalidComparison_752, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 752;

            goto try_except_handler_112;
        }
        tmp_dictset_value = mod_consts[154];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__37_InvalidComparison_752, mod_consts[21], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 752;

            goto try_except_handler_112;
        }
        tmp_dictset_value = mod_consts[153];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__37_InvalidComparison_752, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 752;

            goto try_except_handler_112;
        }
        {
            nuitka_bool tmp_condition_result_148;
            PyObject *tmp_cmp_expr_left_37;
            PyObject *tmp_cmp_expr_right_37;
            CHECK_OBJECT(tmp_class_creation_37__bases);
            tmp_cmp_expr_left_37 = tmp_class_creation_37__bases;
            tmp_cmp_expr_right_37 = mod_consts[89];
            tmp_condition_result_148 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_37, tmp_cmp_expr_right_37);
            if (tmp_condition_result_148 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 752;

                goto try_except_handler_112;
            }
            if (tmp_condition_result_148 == NUITKA_BOOL_TRUE) {
                goto branch_yes_111;
            } else {
                goto branch_no_111;
            }
        }
        branch_yes_111:;
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_pandas$errors$$$class__37_InvalidComparison_752, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 752;

            goto try_except_handler_112;
        }
        branch_no_111:;
        {
            PyObject *tmp_assign_source_285;
            PyObject *tmp_called_value_78;
            PyObject *tmp_args_value_74;
            PyObject *tmp_tuple_element_124;
            PyObject *tmp_kwargs_value_74;
            CHECK_OBJECT(tmp_class_creation_37__metaclass);
            tmp_called_value_78 = tmp_class_creation_37__metaclass;
            tmp_tuple_element_124 = mod_consts[153];
            tmp_args_value_74 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_74, 0, tmp_tuple_element_124);
            CHECK_OBJECT(tmp_class_creation_37__bases);
            tmp_tuple_element_124 = tmp_class_creation_37__bases;
            PyTuple_SET_ITEM0(tmp_args_value_74, 1, tmp_tuple_element_124);
            tmp_tuple_element_124 = locals_pandas$errors$$$class__37_InvalidComparison_752;
            PyTuple_SET_ITEM0(tmp_args_value_74, 2, tmp_tuple_element_124);
            CHECK_OBJECT(tmp_class_creation_37__class_decl_dict);
            tmp_kwargs_value_74 = tmp_class_creation_37__class_decl_dict;
            frame_e530e0f9fa25c537a20459a9c1319f06->m_frame.f_lineno = 752;
            tmp_assign_source_285 = CALL_FUNCTION(tstate, tmp_called_value_78, tmp_args_value_74, tmp_kwargs_value_74);
            Py_DECREF(tmp_args_value_74);
            if (tmp_assign_source_285 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 752;

                goto try_except_handler_112;
            }
            assert(outline_36_var___class__ == NULL);
            outline_36_var___class__ = tmp_assign_source_285;
        }
        CHECK_OBJECT(outline_36_var___class__);
        tmp_assign_source_284 = outline_36_var___class__;
        Py_INCREF(tmp_assign_source_284);
        goto try_return_handler_112;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_112:;
        Py_DECREF(locals_pandas$errors$$$class__37_InvalidComparison_752);
        locals_pandas$errors$$$class__37_InvalidComparison_752 = NULL;
        goto try_return_handler_111;
        // Exception handler code:
        try_except_handler_112:;
        exception_keeper_type_110 = exception_type;
        exception_keeper_value_110 = exception_value;
        exception_keeper_tb_110 = exception_tb;
        exception_keeper_lineno_110 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$errors$$$class__37_InvalidComparison_752);
        locals_pandas$errors$$$class__37_InvalidComparison_752 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_110;
        exception_value = exception_keeper_value_110;
        exception_tb = exception_keeper_tb_110;
        exception_lineno = exception_keeper_lineno_110;

        goto try_except_handler_111;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_111:;
        CHECK_OBJECT(outline_36_var___class__);
        Py_DECREF(outline_36_var___class__);
        outline_36_var___class__ = NULL;
        goto outline_result_37;
        // Exception handler code:
        try_except_handler_111:;
        exception_keeper_type_111 = exception_type;
        exception_keeper_value_111 = exception_value;
        exception_keeper_tb_111 = exception_tb;
        exception_keeper_lineno_111 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_111;
        exception_value = exception_keeper_value_111;
        exception_tb = exception_keeper_tb_111;
        exception_lineno = exception_keeper_lineno_111;

        goto outline_exception_37;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_37:;
        exception_lineno = 752;
        goto try_except_handler_110;
        outline_result_37:;
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_284);
    }
    goto try_end_38;
    // Exception handler code:
    try_except_handler_110:;
    exception_keeper_type_112 = exception_type;
    exception_keeper_value_112 = exception_value;
    exception_keeper_tb_112 = exception_tb;
    exception_keeper_lineno_112 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_37__bases);
    tmp_class_creation_37__bases = NULL;
    Py_XDECREF(tmp_class_creation_37__class_decl_dict);
    tmp_class_creation_37__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_37__metaclass);
    tmp_class_creation_37__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_37__prepared);
    tmp_class_creation_37__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_112;
    exception_value = exception_keeper_value_112;
    exception_tb = exception_keeper_tb_112;
    exception_lineno = exception_keeper_lineno_112;

    goto frame_exception_exit_1;
    // End of try:
    try_end_38:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e530e0f9fa25c537a20459a9c1319f06, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e530e0f9fa25c537a20459a9c1319f06->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e530e0f9fa25c537a20459a9c1319f06, exception_lineno);
    }



    assertFrameObject(frame_e530e0f9fa25c537a20459a9c1319f06);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;
    CHECK_OBJECT(tmp_class_creation_37__bases);
    Py_DECREF(tmp_class_creation_37__bases);
    tmp_class_creation_37__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_37__class_decl_dict);
    Py_DECREF(tmp_class_creation_37__class_decl_dict);
    tmp_class_creation_37__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_37__metaclass);
    Py_DECREF(tmp_class_creation_37__metaclass);
    tmp_class_creation_37__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_37__prepared);
    Py_DECREF(tmp_class_creation_37__prepared);
    tmp_class_creation_37__prepared = NULL;
    {
        PyObject *tmp_assign_source_286;
        tmp_assign_source_286 = LIST_COPY(mod_consts[155]);
        UPDATE_STRING_DICT1(moduledict_pandas$errors, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_286);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pandas$errors", false);

    Py_INCREF(module_pandas$errors);
    return module_pandas$errors;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$errors, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pandas$errors", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
