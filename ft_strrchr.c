/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:51:47 by elel-bah          #+#    #+#             */
/*   Updated: 2023/11/09 18:59:21 by elel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p_null;

	p_null = NULL;
	while (*s)
	{
		if (*s == c)
		{
			p_null = (char *)s;
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (p_null);
}
/*int main()
{
	const char str[] = "FUCK U!";
	char target = '!';
	char *result = ft_strrchr(str, target);
	if (result != NULL)
	{
		printf("last one '%c' found at index: %ld\n", target, result - str);
	}
	else
	{
		printf("'%c' not found int the string\n", target);
	}

}*/
