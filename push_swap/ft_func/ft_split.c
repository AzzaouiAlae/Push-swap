/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:21:56 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/23 13:30:43 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	count_words(const char *s, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (ft_strchr(sep, s[i]))
			i++;
		if (s[i])
			count++;
		while (s[i] && !ft_strchr(sep, s[i]))
			i++;
	}
	return (count);
}

static char	*create_word(char *s, char *sep, int *j)
{
	int		i;
	char	*str;

	while (ft_strchr(sep, s[*j]))
		(*j)++;
	i = *j;
	while (s[i] && !ft_strchr(sep, s[i]))
		i++;
	str = ft_substr(s, *j, i - *j);
	*j = i;
	return (str);
}

char	**ft_split(const char *s, char *sep)
{
	int		words_len;
	char	**words;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	words_len = count_words(s, sep);
	if (!words_len)
	{
		ft_putstr_fd("Error\n", 2);
		ft_exit(255);
	}
	words = ft_calloc(words_len + 1, sizeof(char *));
	i = 0;
	j = 0;
	while (i < words_len)
	{
		words[i] = create_word((char *)s, sep, &j);
		i++;
	}
	return (words);
}
