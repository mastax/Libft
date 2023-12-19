/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-bah <elel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:32:13 by elel-bah          #+#    #+#             */
/*   Updated: 2023/11/20 14:46:52 by elel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
	{
		return ;
	}
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
