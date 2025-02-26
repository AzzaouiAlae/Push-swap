/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_select_quick_sort2_4.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:12:57 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:12:58 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "insertion_select_quick_sort2.h"

int	calculate_cost9(int count, int index)
{
	int	cost;

	if (count / 2 <= index)
		cost = count - index - 1;
	else
		cost = index + 1;
	return (cost);
}

int	normal_cost9(t_ins_sel_move move)
{
	int	cost;

	cost = calculate_cost9(stack_a()->count, move.index_a);
	cost += calculate_cost9(stack_b()->count, move.index_b);
	return (cost);
}
