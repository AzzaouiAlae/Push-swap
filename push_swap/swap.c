/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:19:58 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:19:59 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *n1, int *n2)
{
	int	n;

	n = *n1;
	*n1 = *n2;
	*n2 = n;
}

int	swap(t_cs_list *list)
{
	int	*nums;

	if (list->count > 1)
	{
		nums = list->contate;
		ft_swap(&(nums[list->count - 1]), &(nums[list->count - 2]));
		return (1);
	}
	return (0);
}

void	sa(void)
{
	if (swap(stack_a()))
		add_current_move(en_sa);
}

void	sb(void)
{
	if (swap(stack_b()))
		add_current_move(en_sb);
}

void	ss(void)
{
	int	a;
	int	b;

	a = swap(stack_a());
	b = swap(stack_b());
	if (a || b)
		add_current_move(en_ss);
}
