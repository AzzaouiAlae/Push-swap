/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_quadratic_algos_to_list.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:17:57 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:17:58 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	add_quadratic_algos_to_list(void)
{
	add_func(bubble_sort, "bubble sort\n");
	add_func(selection_sort, "selection sort\n");
	add_func(insertion_sort, "insertion sort\n");
	add_func(gnome_sort, "gnome sort\n");
	add_func(cocktail_shaker_sort, "cocktail shaker sort\n");
}
