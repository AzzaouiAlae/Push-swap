/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:19:21 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:19:22 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_curent_to_lowest_actions(char *algo_name)
{
	t_cs_list	*cur_mv;
	t_cs_list	*lowest_mv;

	cur_mv = *current_actions();
	lowest_mv = *lowest_actions();
	lowest_mv->contate = cur_mv->contate;
	lowest_mv->count = cur_mv->count;
	lowest_algo_name(algo_name);
}
