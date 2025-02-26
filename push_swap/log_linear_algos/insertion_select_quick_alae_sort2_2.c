/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_select_quick_alae_sort2_2.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:12:06 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:16:43 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "insertion_select_quick_alae_sort2.h"

void	move10(t_ins_sel_move best_move, int *a, int *b)
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

void	set_best_move10(t_ins_sel_move *best_move, t_ins_sel_move move)
{
	best_move->index_a = move.index_a;
	best_move->index_b = move.index_b;
	best_move->move = move.move;
	best_move->num_a = move.num_a;
	best_move->num_b = move.num_b;
}

void	make_move10(int b_count, int *a, int *b)
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
		cost = best_a_move10(&move);
		if (i == 0 || cost <= final_cost)
		{
			final_cost = cost;
			set_best_move10(&best_move, move);
		}
		else if (i >= final_cost && i < b_count / 2)
			i = b_count - i - 2;
		i++;
	}
	move10(best_move, a, b);
}

int	is_rest_stack_sorted10(int *nums, int count)
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

void	sort_by_mid_num10(void)
{
	int	index;
	int	mid;
	int	*b_nums;
	int	b_count;

	index = mid_num(stack_a()->contate, stack_a()->count);
	mid = ((int *)(stack_a()->contate))[index];
	while (stack_a()->count > 2 && !is_rest_stack_sorted10(stack_a()->contate,
			stack_a()->count))
	{
		if (cs_list_contains(sorted_in_stack_a8(),
				((int *)(stack_a()->contate))[stack_a()->count - 1]))
			ra();
		else
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
