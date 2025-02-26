/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_select_quick_alae_sort1_2.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:11:38 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:15:42 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "insertion_select_quick_alae_sort1.h"

void	set_best_move8(t_ins_sel_move *best_move, t_ins_sel_move move)
{
	best_move->index_a = move.index_a;
	best_move->index_b = move.index_b;
	best_move->move = move.move;
	best_move->num_a = move.num_a;
	best_move->num_b = move.num_b;
}

void	make_move8(int b_count, int *a, int *b)
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
		cost = best_a_move8(&move);
		if (i == 0 || cost <= final_cost)
		{
			final_cost = cost;
			set_best_move8(&best_move, move);
		}
		else if (i >= final_cost && i < b_count / 2)
			i = b_count - i - 2;
		i++;
	}
	move8(best_move, a, b);
}

int	is_rest_stack_sorted8(int *nums, int count)
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

t_cs_list	*sorted_in_stack_a8(void)
{
	static t_cs_list	*sorted_stack_a;

	if (!sorted_stack_a)
		sorted_stack_a = cs_list_new(sizeof(int));
	return (sorted_stack_a);
}

void	sort_by_mid_num8(void)
{
	int		index;
	int		mid;
	int		*b_nums;
	int		b_count;

	index = mid_num(stack_a()->contate, stack_a()->count);
	mid = ((int *)(stack_a()->contate))[index];
	while (stack_a()->count > 2 && !is_rest_stack_sorted8(stack_a()->contate,
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
			else if (b_nums[b_count - 1] <= mid && b_nums[b_count - 2] > mid)
				rb();
		}
	}
}
