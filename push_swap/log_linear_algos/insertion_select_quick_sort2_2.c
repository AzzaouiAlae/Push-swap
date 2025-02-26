/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_select_quick_sort2_2.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:12:48 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/22 14:14:03 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "insertion_select_quick_sort2.h"

int	is_between_0_and_count9(int item)
{
	int	min;
	int	max;
	int	*nums;

	set_min_max_value9(stack_a()->contate, stack_a()->count, &min, &max);
	nums = stack_a()->contate;
	if ((nums[0] == min && nums[stack_a()->count - 1] == max) || (nums[0] == max
			&& nums[stack_a()->count - 1] == min))
		return (-1);
	if (nums[0] < item && nums[stack_a()->count - 1] > item)
		return (stack_a()->count - 1);
	else if (nums[0] > item && nums[stack_a()->count - 1] < item)
		return (0);
	return (-1);
}

int	index_place9(int item)
{
	int	i;
	int	*nums;
	int	min;
	int	max;
	int	index;

	i = 0;
	set_min_max_value9(stack_a()->contate, stack_a()->count, &min, &max);
	index = index_min_num(stack_a()->contate, stack_a()->count);
	if (item > max || item < min)
		return (index);
	nums = stack_a()->contate;
	while (i < stack_a()->count - 1)
	{
		if (!is_min_and_max9(nums[i], nums[i + 1]))
		{
			if (nums[i] > item && item > nums[i + 1])
				return (i);
			else if (nums[i] < item && item < nums[i + 1])
				return (i + 1);
		}
		i++;
	}
	return (is_between_0_and_count9(item));
}

int	best_a_move9(t_ins_sel_move *move)
{
	int	cost;
	int	rr_cost;
	int	rrr_cost;

	move->index_a = index_place9(move->num_b);
	if (move->index_a == -1)
		return (100);
	move->num_a = ((int *)(stack_a()->contate))[move->index_a];
	cost = normal_cost9(*move);
	rr_cost = rr_cost9(*move);
	rrr_cost = rrr_cost9(*move);
	if (rr_cost <= rrr_cost && rr_cost < cost)
		return (set_move9(rr_cost, en_rr, move));
	if (rrr_cost < rr_cost && rrr_cost < cost)
		return (set_move9(rrr_cost, en_rrr, move));
	return (set_move9(cost, en_sa, move));
}

void	move9(t_ins_sel_move best_move, int *a, int *b)
{
	if (best_move.move == en_rr)
	{
		while (a[stack_a()->count - 1] != best_move.num_a && b[stack_b()->count
				- 1] != best_move.num_b)
			rr();
	}
	else if (best_move.move == en_rrr)
	{
		while (a[stack_a()->count - 1] != best_move.num_a && b[stack_b()->count
				- 1] != best_move.num_b)
			rrr();
	}
	insertion_sort_get_palce(best_move.num_b, best_move.index_b);
	while (best_move.num_a != a[stack_a()->count - 1])
	{
		if (stack_a()->count / 2 <= best_move.index_a)
			ra();
		else
			rra();
	}
}

void	set_best_move9(t_ins_sel_move *best_move, t_ins_sel_move move)
{
	best_move->index_a = move.index_a;
	best_move->index_b = move.index_b;
	best_move->move = move.move;
	best_move->num_a = move.num_a;
	best_move->num_b = move.num_b;
}
