/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_select_quick_sort1.h                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:12:41 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:12:42 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSERTION_SELECT_QUICK_SORT1_H
# define INSERTION_SELECT_QUICK_SORT1_H
# include "../push_swap.h"

int		calculate_cost7(int count, int index);
int		normal_cost7(t_ins_sel_move move);
int		rr_cost7(t_ins_sel_move move);
int		rrr_cost7(t_ins_sel_move move);
int		set_move7(int return_val, t_move_name mv_name, t_ins_sel_move *move);
void	set_min_max_value7(int *nums, int count, int *min, int *max);
int		is_min_and_max7(int first, int secend);
int		is_between_0_and_count7(int item);
int		index_place7(int item);
int		best_a_move7(t_ins_sel_move *move);
void	move7(t_ins_sel_move best_move, int *a, int *b);
void	set_best_move7(t_ins_sel_move *best_move, t_ins_sel_move move);
void	make_move7(int b_count, int *a, int *b);
int		is_rest_stack_sorted7(int *nums, int count);
void	sort_by_mid_num7(void);
void	rotate_stack_a7(void);
void	ins_sel_quick_sort(void);

#endif