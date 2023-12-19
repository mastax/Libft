/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:46:30 by elel-bah          #+#    #+#             */
/*   Updated: 2023/11/11 19:05:11 by elel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	remai_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if (!dstsize && !dst)
	{
		return (src_len);
	}
	dst_len = ft_strlen(dst);
	remai_len = dstsize - dst_len;
	if (dst_len >= dstsize)
	{
		return (src_len + dstsize);
	}
	while (src[i] && i < (remai_len - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
