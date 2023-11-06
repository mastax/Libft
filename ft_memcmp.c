/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:01:42 by elel-bah          #+#    #+#             */
/*   Updated: 2023/11/05 17:08:41 by elel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *s1, void *s2, unsigned int n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	unsigned		i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;

	while (i < n)
	{
		if (p1[i] < p2[i])
		{
			return (-1);
		}
		else if(p1[i] > p2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
int main(void)
{
	char str[] = "hayhayhay";
	char str1[] = "hayhayhay";
	char str2[] = "ksksksksk";
	int result;
	int result1;

	result = ft_memcmp(str, str1, 9);
	result1 = ft_memcmp(str, str2, 9);
	printf("result: %d\n", result);
	printf("result1: %d\n", result1);
}
