/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_select_sort2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:10:30 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:11:02 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "insertion_select_sort.h"

int	insertion_select_best_b_move(t_ins_sel_move *move)
{
	int	cost;
	int	rr_cost;
	int	rrr_cost;

	move->index_b = insertion_sort_index_place(move->num_a);
	if (move->index_b == -1)
		return (0);
	move->num_b = ((int *)(stack_b()->contate))[move->index_b];
	cost = insertion_select_sort_normal_cost(*move);
	rr_cost = insertion_select_sort_rr_cost(*move);
	rrr_cost = insertion_select_sort_rrr_cost(*move);
	if (rr_cost <= rrr_cost && rr_cost < cost)
		return (set_move(rr_cost, en_rr, move));
	if (rrr_cost < rr_cost && rrr_cost < cost)
		return (set_move(rrr_cost, en_rrr, move));
	return (set_move(cost, en_sa, move));
}

void	insertion_select_move(t_ins_sel_move best_move, int *a, int *b)
{
	if (best_move.move == en_rr)
	{
		while (a[stack_a()->count - 1] != best_move.num_a && b[stack_b()->count
				- 1] != best_move.num_b)
			rr();
	}
	else if (best_move.move == en_rrr)
	{
		while (a[stack_a()->count - 1] != best_move.num_a && b[stack_b()->count
				- 1] != best_move.num_b)
			rrr();
	}
	insertion_sort_get_palce(best_move.num_b, best_move.index_b);
	while (best_move.num_a != a[stack_a()->count - 1])
	{
		if (stack_a()->count / 2 <= best_move.index_a)
			ra();
		else
			rra();
	}
}

void	set_best_move2(t_ins_sel_move *best_move, t_ins_sel_move move)
{
	best_move->index_a = move.index_a;
	best_move->index_b = move.index_b;
	best_move->move = move.move;
	best_move->num_a = move.num_a;
	best_move->num_b = move.num_b;
}

void	insertion_select_make_move(int a_count, int *a, int *b)
{
	t_ins_sel_move	move;
	t_ins_sel_move	best_move;
	int				cost;
	int				final_cost;
	int				i;

	i = 0;
	if (stack_b()->count <= 1)
		return ;
	while (i < a_count)
	{
		move.index_a = i;
		move.num_a = a[i];
		cost = insertion_select_best_b_move(&move);
		if (i == 0 || cost <= final_cost)
		{
			final_cost = cost;
			set_best_move2(&best_move, move);
		}
		else if (i > final_cost && i < a_count / 2)
			i = a_count - i - 2;
		i++;
	}
	insertion_select_move(best_move, a, b);
}

void	insertion_select_sort(void)
{
	t_cs_list	*a;

	a = stack_a();
	while (!is_sorted())
	{
		if (a->count > 0)
			insertion_select_make_move(a->count, a->contate,
				stack_b()->contate);
		if (a->count == 0)
			insertion_sort_stack_b_desc();
		else
			pb();
	}
}
