/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 10:33:28 by elel-bah          #+#    #+#             */
/*   Updated: 2023/11/29 15:20:16 by elel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenght(long nbr)
{
	int	lenght;

	lenght = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr *= -1;
		lenght++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		lenght++;
	}
	return (lenght);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		i;

	nbr = n;
	i = lenght(nbr);
	str = (char *)malloc (i + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (nbr == 0)
		str[0] = 48;
	else if (n < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0 && i-- >= 0)
	{
		str[i] = 48 + (nbr % 10);
		nbr = nbr / 10;
	}
	return (str);
}
