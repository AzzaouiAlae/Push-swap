/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_select_sort.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:10:16 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:13:06 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSERTION_SELECT_SORT_H
# define INSERTION_SELECT_SORT_H
# include "../push_swap.h"

int		calculate_cost(int count, int index);
int		insertion_select_sort_normal_cost(t_ins_sel_move move);
int		insertion_select_sort_rr_cost(t_ins_sel_move move);
int		insertion_select_sort_rrr_cost(t_ins_sel_move move);
int		set_move(int return_val, t_move_name mv_name, t_ins_sel_move *move);
int		insertion_select_best_b_move(t_ins_sel_move *move);
void	insertion_select_move(t_ins_sel_move best_move, int *a, int *b);
void	set_best_move2(t_ins_sel_move *best_move, t_ins_sel_move move);
void	insertion_select_make_move(int a_count, int *a, int *b);
void	insertion_select_sort(void);

#endif