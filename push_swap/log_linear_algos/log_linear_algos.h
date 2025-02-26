/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log_linear_algos.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:13:23 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:13:24 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOG_LINEAR_ALGOS_H
# define LOG_LINEAR_ALGOS_H
# include "../quadratic_algos/quadratic_algos.h"

typedef struct s_ins_sel_move
{
	int			index_a;
	int			num_a;
	int			index_b;
	int			num_b;
	t_move_name	move;
}				t_ins_sel_move;

void			add_log_linear_algos_to_list(void);
void			insertion_select_sort(void);
void			insertion_sort_stack_b_desc(void);
int				insertion_sort_index_place(int item);
void			insertion_sort_get_palce(int num, int index);
void			ins_sel_quick_sort(void);
int				is_min_and_max(int first, int secend);
void			ins_sel_quick_sort2(void);
void			ins_sel_quick_alae_sort(void);
t_cs_list		*sorted_in_stack_a8(void);
void			ins_sel_quick_alae_sort2(void);
void			sorted_items_asc8(int *nums, int count, int i,
					t_cs_list *should_stay_in_a);

#endif