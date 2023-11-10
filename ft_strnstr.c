/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:29:05 by elel-bah          #+#    #+#             */
/*   Updated: 2023/11/09 18:24:00 by elel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	needle_len = ft_strlen(needle);
	if (len < needle_len)
	{
		return (NULL);
	}
	i = 0;
	while (i <= len - needle_len)
	{
		if (ft_strncmp(haystack + i, needle, needle_len) == 0)
		{
			return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
/*int main()
{

}*/
