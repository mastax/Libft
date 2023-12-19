/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:09:04 by elel-bah          #+#    #+#             */
/*   Updated: 2023/11/24 15:50:44 by elel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	x;
	size_t	y;
	char	*substring;

	if (!s)
		return (NULL);
	x = 0;
	while (x < len && start < ft_strlen(s) && s[start + x])
		x++;
	y = 0;
	substring = malloc((x + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	while (y < x && start < ft_strlen(s))
	{
		substring[y] = s[start + y];
		y++;
	}
	substring[x] = '\0';
	return (substring);
}
