/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:59:45 by elel-bah          #+#    #+#             */
/*   Updated: 2023/11/10 17:30:03 by elel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t nb)
{
	size_t	x;
	size_t	y;

	if (nb < 1)
	{
		return (dst);
	}
	x = 0;
	y = ft_strlen(dst);
	while (src[x] != '\0' && x < nb)
	{
		dst[x + y] = src[x];
		x++;
	}
	dst[x + y] = '\0';
	return (dst);
}
