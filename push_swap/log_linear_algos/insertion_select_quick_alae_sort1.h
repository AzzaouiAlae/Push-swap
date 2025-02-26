/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_select_quick_alae_sort1.h                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:11:59 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:12:00 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSERTION_SELECT_QUICK_ALAE_SORT1_H
# define INSERTION_SELECT_QUICK_ALAE_SORT1_H
# include "../push_swap.h"

int			calculate_cost8(int count, int index);
int			normal_cost8(t_ins_sel_move move);
int			rr_cost8(t_ins_sel_move move);
int			rrr_cost8(t_ins_sel_move move);
int			set_move8(int return_val, t_move_name mv_name,
				t_ins_sel_move *move);
void		set_min_max_value8(int *nums, int count, int *min, int *max);
int			is_between_0_and_count8(int item);
int			is_min_and_max8(int first, int secend);
int			index_place8(int item);
int			best_a_move8(t_ins_sel_move *move);
void		move8(t_ins_sel_move best_move, int *a, int *b);
void		set_best_move8(t_ins_sel_move *best_move, t_ins_sel_move move);
void		make_move8(int b_count, int *a, int *b);
int			is_rest_stack_sorted8(int *nums, int count);
t_cs_list	*sorted_in_stack_a8(void);
void		sort_by_mid_num8(void);
void		rotate_stack_a8(void);
void		sorted_items_desc8(int *nums, int count, int i,
				t_cs_list *should_stay_in_a);
void		sorted_a_items8(int *nums, int count, int i,
				t_cs_list *should_stay_in_a);
void		sorted_items_asc8(int *nums, int count, int i,
				t_cs_list *should_stay_in_a);
void		ins_sel_quick_alae_sort(void);

#endif