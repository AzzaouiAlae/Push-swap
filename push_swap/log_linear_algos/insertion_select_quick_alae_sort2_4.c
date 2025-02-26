/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_select_quick_alae_sort2_4.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:12:14 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:12:15 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "insertion_select_quick_alae_sort2.h"

int	calculate_cost10(int count, int index)
{
	int	cost;

	if (count / 2 <= index)
		cost = count - index - 1;
	else
		cost = index + 1;
	return (cost);
}

int	normal_cost10(t_ins_sel_move move)
{
	int	cost;

	cost = calculate_cost10(stack_a()->count, move.index_a);
	cost += calculate_cost10(stack_b()->count, move.index_b);
	return (cost);
}

int	rr_cost10(t_ins_sel_move move)
{
	int	cost_a;
	int	cost_b;

	cost_a = stack_a()->count - move.index_a - 1;
	cost_b = stack_b()->count - move.index_b - 1;
	if (cost_a > cost_b)
		return (cost_a);
	return (cost_b);
}

int	rrr_cost10(t_ins_sel_move move)
{
	if (move.index_a > move.index_b)
		return (move.index_a + 1);
	return (move.index_b + 1);
}

int	set_move10(int return_val, t_move_name mv_name, t_ins_sel_move *move)
{
	move->move = mv_name;
	return (return_val);
}
