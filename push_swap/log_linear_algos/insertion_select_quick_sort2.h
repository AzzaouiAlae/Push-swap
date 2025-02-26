/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_select_quick_sort2.h                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:13:01 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:13:02 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSERTION_SELECT_QUICK_SORT2_H
# define INSERTION_SELECT_QUICK_SORT2_H
# include "../push_swap.h"

int		calculate_cost9(int count, int index);
int		normal_cost9(t_ins_sel_move move);
int		rr_cost9(t_ins_sel_move move);
int		rrr_cost9(t_ins_sel_move move);
int		set_move9(int return_val, t_move_name mv_name, t_ins_sel_move *move);
void	set_min_max_value9(int *nums, int count, int *min, int *max);
int		is_min_and_max9(int first, int secend);
int		is_between_0_and_count9(int item);
int		index_place9(int item);
int		best_a_move9(t_ins_sel_move *move);
void	move9(t_ins_sel_move best_move, int *a, int *b);
void	set_best_move9(t_ins_sel_move *best_move, t_ins_sel_move move);
void	make_move9(int b_count, int *a, int *b);
int		is_rest_stack_sorted9(int *nums, int count);
void	sort_by_mid_num9(void);
void	rotate_stack_a9(void);
void	ins_sel_quick_sort2(void);

#endif