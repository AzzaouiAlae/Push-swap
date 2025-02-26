/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:19:54 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/22 14:09:58 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_input_to_stack(char *arg)
{
	t_cs_list	*stack;
	char		**nums;
	int			num;
	int			i;

	i = 0;
	stack = origin_stack();
	nums = ft_split(arg, " \t\n");
	while (nums[i])
	{
		num = ft_atoi(nums[i]);
		if (cs_list_contains(stack, num))
		{
			ft_putstr_fd("Error\n", 2);
			ft_exit(255);
		}
		cs_list_inset_at(stack, 0, (long)num);
		ft_free(nums[i]);
		i++;
	}
	ft_free(nums);
}

void	set_inputs_to_stack(char **arg_v)
{
	int	i;

	i = 1;
	while (arg_v[i])
	{
		set_input_to_stack(arg_v[i]);
		i++;
	}
}
