/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_log_linear_algos_to_list.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:11:26 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:11:27 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	add_log_linear_algos_to_list(void)
{
	add_func(insertion_select_sort, "insertion select sort\n");
	add_func(ins_sel_quick_sort, "insertion select quick sort\n");
	add_func(ins_sel_quick_alae_sort, "insertion select quick alae sort\n");
	add_func(ins_sel_quick_sort2, "insertion select quick sort2\n");
	add_func(ins_sel_quick_alae_sort2, "insertion select quick alae sort2\n");
}
