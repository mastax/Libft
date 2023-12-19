/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:29:05 by elel-bah          #+#    #+#             */
/*   Updated: 2023/11/14 14:35:09 by elel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		lenght;
	size_t	i;
	char	*hayst;
	char	*needl;

	if (!*needle)
		return ((char *)haystack);
	hayst = (char *)haystack;
	needl = (char *)needle;
	i = 0;
	lenght = ft_strlen(needl);
	if (len == 0)
		return (NULL);
	while (hayst[i] != '\0' && (i + lenght) <= len)
	{
		if (ft_strncmp((hayst + i), needl, lenght) == 0)
			return (hayst + i);
		i++;
	}
	return (NULL);
}
