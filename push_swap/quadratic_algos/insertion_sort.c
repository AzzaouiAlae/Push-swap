/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:18:37 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/22 14:06:35 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_min_and_max(int first, int secend)
{
	int	min;
	int	max;

	set_min_max_value(stack_b()->contate, stack_b()->count, &min, &max);
	if (stack_b()->count <= 2)
		return (0);
	if ((first == max || first == min) && (secend == max || secend == min))
		return (1);
	return (0);
}

int	is_between_0_and_max(int item)
{
	int	min;
	int	max;
	int	*nums;

	if (!stack_b()->count)
		return (-1);
	set_min_max_value(stack_b()->contate, stack_b()->count, &min, &max);
	nums = stack_b()->contate;
	if ((nums[0] == min && nums[stack_b()->count - 1] == max) || (nums[0] == max
			&& nums[stack_b()->count - 1] == min))
		return (-1);
	if (nums[0] < item && nums[stack_b()->count - 1] > item)
		return (0);
	else if (nums[0] > item && nums[stack_b()->count - 1] < item)
		return (stack_b()->count - 1);
	return (-1);
}

int	insertion_sort_index_place(int item)
{
	int	i;
	int	*nums;
	int	min;
	int	max;
	int	index;

	i = 0;
	set_min_max_value(stack_b()->contate, stack_b()->count, &min, &max);
	index = index_max_num(stack_b()->contate, stack_b()->count);
	if (item > max || item < min)
		return (index);
	nums = stack_b()->contate;
	while (i < stack_b()->count - 1)
	{
		if (!is_min_and_max(nums[i], nums[i + 1]))
		{
			if (nums[i] > item && item > nums[i + 1])
				return (i + 1);
			else if (nums[i] < item && item < nums[i + 1])
				return (i);
		}
		i++;
	}
	return (is_between_0_and_max(item));
}

void	insertion_sort_find_item_place(int item)
{
	int	index;
	int	num;

	index = insertion_sort_index_place(item);
	if (index == -1)
		return ;
	num = ((int *)(stack_b()->contate))[index];
	insertion_sort_get_palce(num, index);
}

void	insertion_sort(void)
{
	t_cs_list	*a;
	int			*nums;
	int			i;

	i = 0;
	a = stack_a();
	nums = a->contate;
	while (!is_sorted())
	{
		if (a->count > 0)
			insertion_sort_find_item_place(nums[a->count - 1]);
		if (a->count == 0)
			insertion_sort_stack_b_desc();
		else
			pb();
		i++;
		if (i == 40000)
			return ;
	}
}
