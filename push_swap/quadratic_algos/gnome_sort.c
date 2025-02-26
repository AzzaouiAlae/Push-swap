/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnome_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:18:31 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:20:46 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	smallest_is_last(void)
{
	t_cs_list	*a;
	int			*nums;

	a = stack_a();
	nums = a->contate;
	if (a->count >= 2 && nums[0] < nums[a->count - 1] && nums[0] < nums[a->count
			- 2])
	{
		rra();
		return (1);
	}
	return (0);
}

int	should_return(void)
{
	static int	i = 0;

	i++;
	if (i == 300000)
		return (1);
	return (0);
}

void	gnome_sort(void)
{
	t_cs_list	*a;
	int			*nums;

	a = stack_a();
	if (a->count < 2)
		return ;
	nums = a->contate;
	while (!is_sorted())
	{
		if (a->count == 1)
			pa();
		else if (smallest_is_last())
			pa();
		else if (a->count >= 2 && nums[a->count - 1] > nums[a->count - 2])
		{
			sa();
			pa();
		}
		else if (a->count == 0 || is_rest_stack_sorted())
			push_all_to_a();
		else
			pb();
		if (should_return())
			return ;
	}
}
