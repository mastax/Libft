/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:36:51 by elel-bah          #+#    #+#             */
/*   Updated: 2023/11/10 17:41:18 by elel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t ds_size)
{
	size_t			src_len;
	size_t			i;

	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (ds_size > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < ds_size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
/*
int main()
{
	char dst[9];
	const char src[] = "Hello mama";
	size_t cp = ft_strlcpy(dst, src, sizeof(dst));
	printf("cp: %zu\n", cp);
	printf("dst: %s\n", dst);
}*/
