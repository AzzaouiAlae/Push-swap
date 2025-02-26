/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_select_quick_alae_sort1_5.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:11:53 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:11:54 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "insertion_select_quick_alae_sort1.h"

int	calculate_cost8(int count, int index)
{
	int	cost;

	if (count / 2 <= index)
		cost = count - index - 1;
	else
		cost = index + 1;
	return (cost);
}
