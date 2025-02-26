/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:18:41 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:18:42 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	insertion_sort_get_palce(int num, int index)
{
	if (stack_b()->count == 0)
		return ;
	while (num != ((int *)(stack_b()->contate))[stack_b()->count - 1])
	{
		if (stack_b()->count / 2 <= index)
			rb();
		else
			rrb();
	}
}

void	insertion_sort_stack_b_desc(void)
{
	int	*nums;
	int	index;

	nums = stack_b()->contate;
	while (stack_b()->count > 0)
	{
		index = index_max_num(nums, stack_b()->count);
		insertion_sort_get_palce(nums[index], index);
		pa();
	}
}

void	set_min_max_value(int *nums, int count, int *min, int *max)
{
	*min = min_num(nums, count);
	*max = max_num(nums, count);
}
