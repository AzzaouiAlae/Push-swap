/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_list_insert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:22:59 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:23:00 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cs_list.h"

void	cs_list_inset_char(char *s, int count, char value, int index)
{
	while (count > index)
	{
		s[count] = s[count - 1];
		count--;
	}
	s[index] = value;
}

void	cs_list_inset_int(int *nums, int count, int value, int index)
{
	while (count > index)
	{
		nums[count] = nums[count - 1];
		count--;
	}
	nums[index] = value;
}

void	cs_list_inset_long(long *nums, int count, long value, int index)
{
	while (count > index)
	{
		nums[count] = nums[count - 1];
		count--;
	}
	nums[index] = value;
}

void	cs_list_inset_at(t_cs_list *list, int index, long item)
{
	if (!list)
		return ;
	if (!list->count)
	{
		cs_list_add(list, item);
		return ;
	}
	if (list->capacity - 1 == list->count)
		cs_list_resize(list, list->capacity * 2);
	if (list->size_of_type == 1)
		cs_list_inset_char(list->contate, list->count, (char)item, index);
	else if (list->size_of_type == 4)
		cs_list_inset_int(list->contate, list->count, (int)item, index);
	else if (list->size_of_type == 8)
		cs_list_inset_long(list->contate, list->count, (long)item, index);
	(list->count)++;
}
