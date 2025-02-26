/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:19:41 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:19:42 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	reverse_rotate(t_cs_list *stack)
{
	int	*nums;
	int	num;

	if (stack->count < 2)
		return (0);
	nums = stack->contate;
	num = nums[0];
	cs_list_delete(stack, 0);
	cs_list_add(stack, num);
	return (1);
}

void	rra(void)
{
	if (reverse_rotate(stack_a()))
		add_current_move(en_rra);
}

void	rrb(void)
{
	if (reverse_rotate(stack_b()))
		add_current_move(en_rrb);
}

void	rrr(void)
{
	int	a;
	int	b;

	a = reverse_rotate(stack_a());
	b = reverse_rotate(stack_b());
	if (a || b)
		add_current_move(en_rrr);
}
