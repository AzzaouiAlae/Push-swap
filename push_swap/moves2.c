/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:19:15 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:19:16 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_move(t_move_name moves)
{
	if (moves == en_sa)
		ft_putstr("sa\n");
	else if (moves == en_sb)
		ft_putstr("sb\n");
	else if (moves == en_ss)
		ft_putstr("ss\n");
	else if (moves == en_pa)
		ft_putstr("pa\n");
	else if (moves == en_pb)
		ft_putstr("pb\n");
	else if (moves == en_rra)
		ft_putstr("rra\n");
	else if (moves == en_rrb)
		ft_putstr("rrb\n");
	else if (moves == en_rrr)
		ft_putstr("rrr\n");
	else if (moves == en_ra)
		ft_putstr("ra\n");
	else if (moves == en_rb)
		ft_putstr("rb\n");
	else if (moves == en_rr)
		ft_putstr("rr\n");
}

void	print_actions(t_cs_list *lowest_mv)
{
	t_move_name	*moves;
	int			i;

	i = 0;
	if (!lowest_mv || !lowest_mv->count)
		return ;
	moves = (lowest_mv->contate);
	while (i < lowest_mv->count)
	{
		print_move(moves[i]);
		i++;
	}
}

int	is_rest_stack_sorted(void)
{
	int	*nums;
	int	i;

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

int	is_rest_stack_b_sorted(void)
{
	int	*nums;
	int	i;

	nums = stack_b()->contate;
	i = 0;
	while (i < stack_b()->count - 1)
	{
		if (nums[i] > nums[i + 1])
			return (0);
		i++;
	}
	return (1);
}

char	*lowest_algo_name(char *s)
{
	static char	*algo_name;

	if (s)
		algo_name = s;
	return (algo_name);
}
