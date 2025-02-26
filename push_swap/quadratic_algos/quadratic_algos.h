/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quadratic_algos.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:18:46 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:18:47 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUADRATIC_ALGOS_H
# define QUADRATIC_ALGOS_H

typedef enum e_move_name
{
	en_sa,
	en_sb,
	en_ss,
	en_pa,
	en_pb,
	en_rra,
	en_rrb,
	en_rrr,
	en_ra,
	en_rb,
	en_rr
}		t_move_name;

void	bubble_sort(void);
void	add_quadratic_algos_to_list(void);
void	push_all_to_a(void);
void	selection_sort(void);
void	insertion_sort(void);
int		insertion_sort_get_index(int item);
void	gnome_sort(void);
void	cocktail_shaker_sort(void);
void	set_min_max_value(int *nums, int count, int *min, int *max);
void	insertion_sort_stack_b_desc(void);
void	insertion_sort_get_palce(int num, int index);

#endif