/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:49:20 by elel-bah          #+#    #+#             */
/*   Updated: 2023/11/09 18:52:01 by elel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
		{
			return ((void *)(p + i));
		}
		i++;
	}
	return (NULL);
}
/*int main()
{
	char data[] = "hello Mama";
	char target = 'M';
	void *result = ft_memchr(data, target, sizeof(data));
	if (result != NULL)
	{
		printf("Found '%c' at index %ld\n", target, (char *)result - data);
	}
	else
		printf("'%c' not fount int the data \n", target);
	return (0);
}*/
