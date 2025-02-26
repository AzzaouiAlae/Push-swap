/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:19:36 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:19:37 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_item(t_cs_list *from, t_cs_list *to)
{
	int	*nums;

	if (from->count > 0)
	{
		nums = from->contate;
		cs_list_add(to, nums[from->count - 1]);
		cs_list_delete(from, from->count - 1);
		return (1);
	}
	return (0);
}

void	pa(void)
{
	if (push_item(stack_b(), stack_a()))
		add_current_move(en_pa);
}

void	pb(void)
{
	if (push_item(stack_a(), stack_b()))
		add_current_move(en_pb);
}
