/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:21:43 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/20 13:21:49 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

static int	ft_isdgit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (!is_space(c) && c != 0)
	{
		ft_putstr_fd("Error\n", 2);
		ft_exit(255);
	}
	return (0);
}

void	set_sign(const char *str, int *sign, int *i)
{
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			*sign *= -1;
		(*i)++;
	}
	if (str[(*i)] == 0)
	{
		ft_putstr_fd("Error\n", 2);
		ft_exit(255);
	}
}

int	ft_atoi(const char *str)
{
	int		i;
	long	total;
	int		sign;
	int		num;

	i = 0;
	total = 0;
	sign = 1;
	while (is_space(str[i]))
		i++;
	set_sign(str, &sign, &i);
	while (ft_isdgit(str[i]))
	{
		num = (str[i] - '0') * sign;
		total = total * 10 + num;
		if (total > 2147483647 || total < -2147483648)
		{
			ft_putstr_fd("Error\n", 2);
			ft_exit(255);
		}
		i++;
	}
	return ((int)total);
}
