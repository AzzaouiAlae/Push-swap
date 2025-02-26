/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_select_quick_sort1_3.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:12:29 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:12:30 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "insertion_select_quick_sort1.h"

int	rr_cost7(t_ins_sel_move move)
{
	int	cost_a;
	int	cost_b;

	cost_a = stack_a()->count - move.index_a - 1;
	cost_b = stack_b()->count - move.index_b - 1;
	if (cost_a > cost_b)
		return (cost_a);
	return (cost_b);
}

int	rrr_cost7(t_ins_sel_move move)
{
	if (move.index_a > move.index_b)
		return (move.index_a + 1);
	return (move.index_b + 1);
}

int	set_move7(int return_val, t_move_name mv_name, t_ins_sel_move *move)
{
	move->move = mv_name;
	return (return_val);
}

void	set_min_max_value7(int *nums, int count, int *min, int *max)
{
	*min = min_num(nums, count);
	*max = max_num(nums, count);
}

int	is_min_and_max7(int first, int secend)
{
	int	min;
	int	max;

	set_min_max_value7(stack_a()->contate, stack_a()->count, &min, &max);
	if (stack_a()->count <= 2)
		return (0);
	if ((first == max || first == min) && (secend == max || secend == min))
		return (1);
	return (0);
}
