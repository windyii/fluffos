/*
 * This file specifies the operators used by the interpreter.
 * Normally, these should not be commented out.
 */

operator pop_value, push;

operator number, real, byte, nbyte, string, short_string, const0, const1;

operator member, index, rindex, nn_range, rn_range, rr_range, nr_range, ne_range, re_range;
operator aggregate, aggregate_assoc;
#ifdef DEBUG
operator break_point;
#endif

/* these must be set up so that F_BRANCH is the last foward branch and
 * F_BRANCH_X + 3 == F_BBRANCH_X
 */
operator branch_when_zero, branch_when_non_zero, branch;
operator bbranch_when_zero, bbranch_when_non_zero, bbranch;

operator branch_ne, branch_ge, branch_le, branch_eq, bbranch_lt;

operator foreach, next_foreach, exit_foreach;
operator loop_cond;
operator loop_incr;
operator while_dec;

operator lor, land;

operator catch, end_catch;
operator time_expression, end_time_expression;

operator switch;

operator call_function_by_address, call_inherited, return, return_zero;

operator eq, ne, le, lt, ge, gt;

operator inc, dec, pre_inc, post_inc, pre_dec, post_dec;

operator local, global;
operator local_lvalue, global_lvalue;
operator index_lvalue, rindex_lvalue;
operator member_lvalue;

operator add, void_add_eq, add_eq;
operator subtract, sub_eq;
operator multiply, mult_eq;
operator divide, div_eq;
operator mod, mod_eq;
operator not;
operator and, and_eq;
operator or, or_eq;
operator xor, xor_eq;
operator lsh, lsh_eq, rsh, rsh_eq;
operator negate, compl;

operator assign, void_assign, void_assign_local;

operator function_constructor;
operator simul_efun;

operator sscanf;
operator parse_command;

operator new_class;

operator nn_range_lvalue, rn_range_lvalue, nr_range_lvalue, rr_range_lvalue;
operator call_extra;