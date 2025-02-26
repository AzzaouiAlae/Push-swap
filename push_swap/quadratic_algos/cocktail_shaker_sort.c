/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cocktail_shaker_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:18:27 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:18:30 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_to_b(void)
{
	t_cs_list	*a;
	int			*nums;

	a = stack_a();
	nums = a->contate;
	while (a->count && (!is_rest_stack_sorted() || a->count == 1))
	{
		if (nums[0] < nums[a->count - 1] && nums[0] < nums[a->count - 2])
			rra();
		else if (a->count >= 2 && nums[a->count - 1] > nums[a->count - 2])
			sa();
		pb();
	}
}

void	push_to_a(void)
{
	t_cs_list	*b;
	int			*nums;

	b = stack_b();
	nums = b->contate;
	while (b->count && !is_rest_stack_b_sorted())
	{
		if (nums[0] > nums[b->count - 1] && nums[0] > nums[b->count - 2])
			rrb();
		if (b->count >= 2 && nums[b->count - 1] < nums[b->count - 2])
			sb();
		pa();
	}
}

void	cocktail_shaker_sort(void)
{
	t_cs_list	*a;
	int			i;

	a = stack_a();
	if (a->count < 2)
		return ;
	i = 0;
	while (!is_sorted())
	{
		push_to_b();
		push_to_a();
		if (is_rest_stack_b_sorted() && is_rest_stack_sorted())
			push_all_to_a();
		i++;
		if (i == 300000)
			return ;
	}
}
