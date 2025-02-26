/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:19:50 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:19:51 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_cs_list	*stack_a(void)
{
	static t_cs_list	*a = NULL;

	if (!a)
		a = cs_list_new(sizeof(int));
	return (a);
}

t_cs_list	*stack_b(void)
{
	static t_cs_list	*b = NULL;

	if (!b)
		b = cs_list_new(sizeof(int));
	return (b);
}

t_cs_list	*origin_stack(void)
{
	static t_cs_list	*a = NULL;

	if (!a)
		a = cs_list_new(sizeof(int));
	return (a);
}

void	reset_stacks(void)
{
	t_cs_list	*a;
	t_cs_list	*b;
	t_cs_list	*origin_a;

	origin_a = origin_stack();
	a = stack_a();
	b = stack_b();
	cs_list_clear(a);
	cs_list_clear(b);
	cs_list_add_range(a, origin_a->count, origin_a->contate);
}

int	is_sorted(void)
{
	int	*nums;
	int	i;

	if (stack_b()->count > 0)
		return (0);
	nums = stack_a()->contate;
	i = 0;
	while (i < stack_a()->count - 1)
	{
		if (nums[i] < nums[i + 1])
			return (0);
		i++;
	}
	return (1);
}
