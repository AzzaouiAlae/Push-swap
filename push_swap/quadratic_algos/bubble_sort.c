/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:18:24 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:21:24 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_all_to_a(void)
{
	t_cs_list	*b;

	b = stack_b();
	while (b->count > 0)
		pa();
}

void	bubble_sort_stack_a(void)
{
	t_cs_list	*a;
	int			*nums;

	a = stack_a();
	if (a->count < 2)
		return ;
	nums = a->contate;
	if (nums[a->count - 1] > nums[a->count - 2] && nums[a->count - 1] > nums[0]
		&& nums[a->count - 2] > nums[0])
		ra();
	else if (nums[0] < nums[a->count - 1] && nums[0] < nums[a->count - 2])
		rra();
	else if (nums[a->count - 2] > nums[a->count - 1] && nums[a->count
			- 2] > nums[0])
	{
		sa();
		ra();
	}
	else if (nums[a->count - 1] > nums[a->count - 2])
		sa();
}

void	bubble_sort_stack_b(void)
{
	t_cs_list	*b;
	int			*nums;

	b = stack_b();
	if (b->count < 2)
		return ;
	nums = b->contate;
	if (nums[0] > nums[b->count - 1] && nums[0] > nums[b->count - 2])
		rrb();
	else if (nums[b->count - 1] < nums[b->count - 2] && nums[0] > nums[b->count
			- 1])
		rb();
	else if (nums[b->count - 1] > nums[b->count - 2] && nums[0] > nums[b->count
			- 2])
	{
		sb();
		rb();
	}
	else if (nums[b->count - 1] < nums[b->count - 2])
		sb();
}

void	move(void)
{
	bubble_sort_stack_a();
	bubble_sort_stack_b();
	if (is_sorted() || is_rest_stack_sorted())
		return ;
	if (stack_a()->count > 3)
		pb();
}

void	bubble_sort(void)
{
	int			i;
	int			j;
	t_cs_list	*a;

	i = 0;
	a = stack_a();
	while (a->count > i)
	{
		j = 0;
		while (a->count > i + j)
		{
			move();
			if (is_sorted() || is_rest_stack_sorted())
				j = a->count;
		}
		push_all_to_a();
		if (is_sorted())
			return ;
		i++;
	}
}
