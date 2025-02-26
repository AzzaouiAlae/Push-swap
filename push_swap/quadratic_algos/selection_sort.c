/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:18:53 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:18:54 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	selection_sort(void)
{
	t_cs_list	*a;
	int			index;
	int			num;
	int			i;

	a = stack_a();
	i = 0;
	while (!is_sorted())
	{
		index = index_min_num(a->contate, a->count);
		num = ((int *)(a->contate))[index];
		while (num != ((int *)(a->contate))[a->count - 1])
		{
			if (a->count / 2 <= index)
				ra();
			else
				rra();
		}
		if (a->count < 2)
			push_all_to_a();
		else
			pb();
		if (i == 40000)
			return ;
	}
}
