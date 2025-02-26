/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:19:11 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:19:12 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_cs_list	**current_actions(void)
{
	static t_cs_list	*cur_mv = NULL;

	if (!cur_mv)
		cur_mv = cs_list_new(sizeof(t_move_name));
	return (&cur_mv);
}

t_cs_list	**lowest_actions(void)
{
	static t_cs_list	*lowest_mv = NULL;

	if (!lowest_mv)
		lowest_mv = cs_list_new(sizeof(t_move_name));
	return (&lowest_mv);
}

void	reset_current_actions(void)
{
	t_cs_list	**cur_mv;

	cur_mv = current_actions();
	*cur_mv = cs_list_new(sizeof(t_move_name));
}

void	add_current_move(t_move_name move)
{
	t_cs_list	**cur_mv;

	cur_mv = current_actions();
	cs_list_add(*cur_mv, move);
}

int	is_lowest_actions_greter(void)
{
	t_cs_list	**lowest_mv;
	t_cs_list	**cur_mv;

	cur_mv = current_actions();
	lowest_mv = lowest_actions();
	if (!lowest_mv || !cur_mv)
		return (0);
	if ((*lowest_mv)->count > (*cur_mv)->count)
		return (1);
	return (0);
}
