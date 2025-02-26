/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_select_quick_sort2_1.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:12:44 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:12:45 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "insertion_select_quick_sort2.h"

void	make_move9(int b_count, int *a, int *b)
{
	t_ins_sel_move	move;
	t_ins_sel_move	best_move;
	int				cost;
	int				final_cost;
	int				i;

	i = 0;
	while (i < b_count)
	{
		move.index_b = i;
		move.num_b = b[i];
		cost = best_a_move9(&move);
		if (i == 0 || cost <= final_cost)
		{
			final_cost = cost;
			set_best_move9(&best_move, move);
		}
		else if (i >= final_cost && i < b_count / 2)
			i = b_count - i - 2;
		i++;
	}
	move9(best_move, a, b);
}

int	is_rest_stack_sorted9(int *nums, int count)
{
	int	index;
	int	i;
	int	first_time;

	index = index_min_num(nums, count);
	i = index;
	first_time = (index != count - 1);
	while ((i || first_time) && (first_time || index != i - 1 || index == count
			- 1))
	{
		if (i == 0 && nums[i] > nums[count - 1])
			return (0);
		if (i && nums[i] > nums[i - 1])
			return (0);
		if (i == 0 && first_time)
		{
			i = count;
			first_time = 0;
		}
		i--;
	}
	return (1);
}

void	sort_by_mid_num9(void)
{
	int	index;
	int	mid;
	int	*b_nums;
	int	b_count;

	index = mid_num(stack_a()->contate, stack_a()->count);
	mid = ((int *)(stack_a()->contate))[index];
	while (stack_a()->count > 2 && !is_rest_stack_sorted9(stack_a()->contate,
			stack_a()->count))
	{
		pb();
		b_nums = stack_b()->contate;
		b_count = stack_b()->count;
		if (b_count > 2)
		{
			if (b_nums[b_count - 1] > mid && b_nums[b_count - 2] < mid)
				rb();
			else if (b_nums[b_count - 1] < mid && b_nums[b_count - 2] > mid)
				rb();
		}
	}
}

void	rotate_stack_a9(void)
{
	int	min_i;
	int	min_n;
	int	*a;

	a = stack_a()->contate;
	min_i = index_min_num(a, stack_a()->count);
	min_n = min_num(a, stack_a()->count);
	while (min_n != a[stack_a()->count - 1])
	{
		if (stack_a()->count / 2 <= min_i)
			ra();
		else
			rra();
	}
}

void	ins_sel_quick_sort2(void)
{
	t_cs_list	*b;

	b = stack_b();
	sort_by_mid_num9();
	while (!is_sorted())
	{
		if (b->count > 0)
			make_move9(b->count, stack_a()->contate, b->contate);
		pa();
		if (b->count == 0)
			rotate_stack_a9();
	}
}
