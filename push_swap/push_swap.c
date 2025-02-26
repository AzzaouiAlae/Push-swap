/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:19:25 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/26 12:52:49 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	run_algos(void)
{
	int			i;
	t_cs_list	*algo_func;
	t_cs_list	*algo_name;
	char		**names;
	void		(**func)(void);

	algo_func = algo_func_list();
	algo_name = algo_name_list();
	names = algo_name->contate;
	func = algo_func->contate;
	i = 0;
	while (i < algo_func->count)
	{
		(func[i])();
		if (i == 0 || (is_sorted() && is_lowest_actions_greter()))
			set_curent_to_lowest_actions(names[i]);
		reset_stacks();
		reset_current_actions();
		i++;
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
	add_quadratic_algos_to_list();
	add_log_linear_algos_to_list();
	run_algos();
	print_actions(*lowest_actions());
	ft_free_all();
	(void)arg_c;
	return (0);
}
*/