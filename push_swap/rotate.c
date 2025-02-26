/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:19:46 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:19:47 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate(t_cs_list *stack)
{
	int	*nums;
	int	num;

	if (stack->count < 2)
		return (0);
	nums = stack->contate;
	num = nums[stack->count - 1];
	cs_list_delete(stack, stack->count - 1);
	cs_list_inset_at(stack, 0, num);
	return (1);
}

void	ra(void)
{
	if (rotate(stack_a()))
		add_current_move(en_ra);
}

void	rb(void)
{
	if (rotate(stack_b()))
		add_current_move(en_rb);
}

void	rr(void)
{
	int	a;
	int	b;

	a = rotate(stack_a());
	b = rotate(stack_b());
	if (a || b)
		add_current_move(en_rr);
}
