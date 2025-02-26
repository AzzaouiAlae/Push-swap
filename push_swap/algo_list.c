/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:18:58 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:18:59 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_cs_list	*algo_func_list(void)
{
	static t_cs_list	*list;

	if (!list)
		list = cs_list_new(sizeof(void (*)(void)));
	return (list);
}

t_cs_list	*algo_name_list(void)
{
	static t_cs_list	*list;

	if (!list)
		list = cs_list_new(sizeof(void (*)(void)));
	reset_stacks();
	return (list);
}

void	add_func(void (*func)(void), char *name)
{
	t_cs_list	*list;

	list = algo_func_list();
	cs_list_add(list, (long)func);
	list = algo_name_list();
	cs_list_add(list, (long)name);
}
