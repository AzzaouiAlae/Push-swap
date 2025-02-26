/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:09:28 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/26 12:52:58 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	error(void)
{
	ft_putstr_fd("Error\n", 2);
	ft_exit(255);
}

void	run_instructions(char *inst)
{
	if (!ft_strncmp(inst, "sa\n", 4))
		sa();
	else if (!ft_strncmp(inst, "sb\n", 4))
		sb();
	else if (!ft_strncmp(inst, "ss\n", 4))
		ss();
	else if (!ft_strncmp(inst, "pa\n", 4))
		pa();
	else if (!ft_strncmp(inst, "pb\n", 4))
		pb();
	else if (!ft_strncmp(inst, "ra\n", 4))
		ra();
	else if (!ft_strncmp(inst, "rra\n", 4))
		rra();
	else if (!ft_strncmp(inst, "rb\n", 4))
		rb();
	else if (!ft_strncmp(inst, "rrb\n", 4))
		rrb();
	else if (!ft_strncmp(inst, "rr\n", 4))
		rr();
	else if (!ft_strncmp(inst, "rrr\n", 4))
		rrr();
	else
		error();
}

void	read_instructions(void)
{
	char	move[5];
	int		n;
	int		i;

	while (1)
	{
		ft_bzero(move, 5);
		n = read(0, move, 1);
		i = 1;
		while (n > 0 && i < 4 && move[i - 1] != '\n')
		{
			n = read(0, &(move[i]), 1);
			i++;
		}
		if (n > 0)
			run_instructions(move);
		else
			return ;
	}
}
/*
int	main(int arg_c, char *arg_v[])
{
	if (arg_c == 1)
		return (0);
	set_inputs_to_stack(arg_v);
	if (origin_stack()->count == 0)
	{
		ft_putstr("Error\n");
		return (255);
	}
	reset_stacks();
	read_instructions();
	if (is_sorted())
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	ft_free_all();
}
*/