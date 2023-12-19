/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:04:09 by elel-bah          #+#    #+#             */
/*   Updated: 2023/11/25 16:35:08 by elel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *s, char c)
{
	int	x;
	int	count;

	x = 0;
	count = 0;
	while (s[x])
	{
		if (s[x] != c)
			count++;
		while (s[x] != c && s[x])
			x++;
		if (s[x])
			x++;
	}
	return (count);
}

static int	len_wor(char const *s, char c)
{
	int	word;
	int	i;

	word = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			word++;
			i++;
		}
		return (word);
	}
	return (0);
}

static char	**ft_free(char **res)
{
	int	i;

	i = 0;
	if (res)
	{
		while (res[i])
		{
			free(res[i]);
			i++;
		}
		free(res);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		y;

	y = 0;
	if (!s)
		return (NULL);
	res = ft_calloc(count(s, c) + 1, sizeof(char *));
	if (!res)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			res[y] = ft_substr(s, 0, len_wor(s, c));
			if (!res[y])
				return (ft_free(res));
			s += len_wor(s, c);
			y++;
		}
		else
			s++;
	}
	res[y] = NULL;
	return (res);
}
