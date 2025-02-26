/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_select_quick_alae_sort2_1.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:12:02 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:17:06 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "insertion_select_quick_alae_sort2.h"

void	rotate_stack_a10(void)
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

void	sorted_items_desc10(int *nums, int count, int i,
		t_cs_list *should_stay_in_a)
{
	int	index;
	int	first_time;
	int	*temp_nums;

	index = index_min_num(nums, count);
	cs_list_add(should_stay_in_a, nums[i]);
	first_time = (index != count - 1);
	while (i != index)
	{
		temp_nums = should_stay_in_a->contate;
		if (temp_nums[should_stay_in_a->count - 1] > nums[i])
			cs_list_add(should_stay_in_a, nums[i]);
		if (i == count - 1 && first_time)
		{
			i = -1;
			first_time = 0;
		}
		i++;
	}
	cs_list_add(should_stay_in_a, nums[index]);
}

void	sorted_items_asc10(int *nums, int count, int i,
		t_cs_list *should_stay_in_a)
{
	int	index;
	int	first_time;
	int	*temp_nums;
	int	c;

	index = index_min_num(nums, count);
	first_time = (index != 0);
	c = 0;
	while (i != index)
	{
		temp_nums = should_stay_in_a->contate;
		if (temp_nums[c] < nums[i])
		{
			cs_list_add(should_stay_in_a, nums[i]);
			c = should_stay_in_a->count - 1;
		}
		if (i == 0 && first_time)
		{
			i = count;
			first_time = 0;
		}
		i--;
	}
}

void	sorted_a_items10(int *nums, int count, int i,
		t_cs_list *should_stay_in_a)
{
	t_cs_list	*temp;
	int			index;
	int			first_time;

	index = index_min_num(nums, count);
	temp = cs_list_new(sizeof(int));
	first_time = (index != count - 1);
	while (i != index)
	{
		sorted_items_desc10(nums, count, i, temp);
		sorted_items_asc10(nums, count, i, temp);
		if (temp->count > should_stay_in_a->count)
		{
			cs_list_clear(should_stay_in_a);
			cs_list_add_range(should_stay_in_a, temp->count, temp->contate);
		}
		cs_list_clear(temp);
		if (i == count - 1 && first_time)
		{
			i = -1;
			first_time = 0;
		}
		i++;
	}
}

void	ins_sel_quick_alae_sort2(void)
{
	t_cs_list	*b;
	int			min;

	b = stack_b();
	min = index_min_num(stack_a()->contate, stack_a()->count);
	if (min == stack_a()->count - 1)
		min = -1;
	sorted_a_items10(stack_a()->contate, stack_a()->count, min + 1,
		sorted_in_stack_a8());
	sort_by_mid_num10();
	while (!is_sorted())
	{
		if (b->count > 0)
			make_move10(b->count, stack_a()->contate, b->contate);
		pa();
		if (b->count == 0)
			rotate_stack_a10();
	}
	cs_list_clear(sorted_in_stack_a8());
}
