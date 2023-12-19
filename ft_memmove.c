/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:15:07 by elel-bah          #+#    #+#             */
/*   Updated: 2023/11/12 14:30:07 by elel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char			*p_dest;
	unsigned const char		*p_src;
	unsigned int			i;

	i = -1;
	p_dest = dest;
	p_src = src;
	if (dest == src)
		return (dest);
	if (dest < src)
	{
		while (++i < len)
			p_dest[i] = p_src[i];
	}
	else
	{
		while (++i < len)
			p_dest[len - 1 - i] = p_src[len - 1 - i];
	}
	return (dest);
}
