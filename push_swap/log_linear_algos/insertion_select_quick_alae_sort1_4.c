/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_select_quick_alae_sort1_4.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:11:47 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:11:48 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "insertion_select_quick_alae_sort1.h"

int	normal_cost8(t_ins_sel_move move)
{
	int	cost;

	cost = calculate_cost8(stack_a()->count, move.index_a);
	cost += calculate_cost8(stack_b()->count, move.index_b);
	return (cost);
}

int	rr_cost8(t_ins_sel_move move)
{
	int	cost_a;
	int	cost_b;

	cost_a = stack_a()->count - move.index_a - 1;
	cost_b = stack_b()->count - move.index_b - 1;
	if (cost_a > cost_b)
		return (cost_a);
	return (cost_b);
}

int	rrr_cost8(t_ins_sel_move move)
{
	if (move.index_a > move.index_b)
		return (move.index_a + 1);
	return (move.index_b + 1);
}

int	set_move8(int return_val, t_move_name mv_name, t_ins_sel_move *move)
{
	move->move = mv_name;
	return (return_val);
}

void	set_min_max_value8(int *nums, int count, int *min, int *max)
{
	*min = min_num(nums, count);
	*max = max_num(nums, count);
}
