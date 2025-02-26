/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_select_quick_alae_sort2.h                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:12:18 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:12:19 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSERTION_SELECT_QUICK_ALAE_SORT2_H
# define INSERTION_SELECT_QUICK_ALAE_SORT2_H
# include "../push_swap.h"

int		calculate_cost10(int count, int index);
int		normal_cost10(t_ins_sel_move move);
int		rr_cost10(t_ins_sel_move move);
int		rrr_cost10(t_ins_sel_move move);
int		set_move10(int return_val, t_move_name mv_name, t_ins_sel_move *move);
void	set_min_max_value10(int *nums, int count, int *min, int *max);
int		is_between_0_and_count10(int item);
int		is_min_and_max10(int first, int secend);
int		index_place10(int item);
int		best_a_move10(t_ins_sel_move *move);
void	move10(t_ins_sel_move best_move, int *a, int *b);
void	set_best_move10(t_ins_sel_move *best_move, t_ins_sel_move move);
void	make_move10(int b_count, int *a, int *b);
int		is_rest_stack_sorted10(int *nums, int count);
void	sort_by_mid_num10(void);
void	rotate_stack_a10(void);
void	sorted_items_desc10(int *nums, int count, int i,
			t_cs_list *should_stay_in_a);
void	sorted_items_asc10(int *nums, int count, int i,
			t_cs_list *should_stay_in_a);
void	sorted_a_items10(int *nums, int count, int i,
			t_cs_list *should_stay_in_a);
void	ins_sel_quick_alae_sort2(void);

#endif