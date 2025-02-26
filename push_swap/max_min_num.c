/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_min_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:19:05 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:19:06 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_num(int *nums, int count)
{
	int	min;

	if (count == 0)
		return (0);
	min = nums[count - 1];
	while (count--)
	{
		if (min > nums[count])
			min = nums[count];
	}
	return (min);
}

int	index_min_num(int *nums, int count)
{
	int	min;
	int	index;

	if (count == 0)
		return (0);
	min = nums[count - 1];
	index = count - 1;
	while (count--)
	{
		if (min > nums[count])
		{
			min = nums[count];
			index = count;
		}
	}
	return (index);
}

int	max_num(int *nums, int count)
{
	int	max;

	if (count == 0)
		return (0);
	max = nums[count - 1];
	while (count--)
	{
		if (max < nums[count])
			max = nums[count];
	}
	return (max);
}

int	index_max_num(int *nums, int count)
{
	int	max;
	int	index;

	if (count == 0)
		return (0);
	max = nums[count - 1];
	index = count - 1;
	while (count--)
	{
		if (max < nums[count])
		{
			max = nums[count];
			index = count;
		}
	}
	return (index);
}

int	mid_num(int *nums, int count)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	while (i < count)
	{
		j = 0;
		c = 0;
		while (j < count && !cs_list_contains(sorted_in_stack_a8(), nums[i]))
		{
			if (nums[i] < nums[j] && !cs_list_contains(sorted_in_stack_a8(),
					nums[j]))
				c++;
			j++;
		}
		if (c == (count - sorted_in_stack_a8()->count) / 2)
			return (i);
		i++;
	}
	return (-1);
}
