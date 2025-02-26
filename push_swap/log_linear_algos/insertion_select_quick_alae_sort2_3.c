/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_select_quick_alae_sort2_3.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:12:10 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/22 14:13:43 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "insertion_select_quick_alae_sort2.h"

void	set_min_max_value10(int *nums, int count, int *min, int *max)
{
	*min = min_num(nums, count);
	*max = max_num(nums, count);
}

int	is_between_0_and_count10(int item)
{
	int	min;
	int	max;
	int	*nums;

	set_min_max_value10(stack_a()->contate, stack_a()->count, &min, &max);
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

int	is_min_and_max10(int first, int secend)
{
	int	min;
	int	max;

	set_min_max_value10(stack_a()->contate, stack_a()->count, &min, &max);
	if (stack_a()->count <= 2)
		return (0);
	if ((first == max || first == min) && (secend == max || secend == min))
		return (1);
	return (0);
}

int	index_place10(int item)
{
	int	i;
	int	*nums;
	int	min;
	int	max;
	int	index;

	i = 0;
	set_min_max_value10(stack_a()->contate, stack_a()->count, &min, &max);
	index = index_min_num(stack_a()->contate, stack_a()->count);
	if (item > max || item < min)
		return (index);
	nums = stack_a()->contate;
	while (i < stack_a()->count - 1)
	{
		if (!is_min_and_max10(nums[i], nums[i + 1]))
		{
			if (nums[i] > item && item > nums[i + 1])
				return (i);
			else if (nums[i] < item && item < nums[i + 1])
				return (i + 1);
		}
		i++;
	}
	return (is_between_0_and_count10(item));
}

int	best_a_move10(t_ins_sel_move *move)
{
	int	cost;
	int	rr_cost;
	int	rrr_cost;

	move->index_a = index_place10(move->num_b);
	if (move->index_a == -1)
		return (100);
	move->num_a = ((int *)(stack_a()->contate))[move->index_a];
	cost = normal_cost10(*move);
	rr_cost = rr_cost10(*move);
	rrr_cost = rrr_cost10(*move);
	if (rr_cost <= rrr_cost && rr_cost < cost)
		return (set_move10(rr_cost, en_rr, move));
	if (rrr_cost < rr_cost && rrr_cost < cost)
		return (set_move10(rrr_cost, en_rrr, move));
	return (set_move10(cost, en_sa, move));
}
