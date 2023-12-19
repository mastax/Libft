/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-bah <elel-bah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:13:23 by elel-bah          #+#    #+#             */
/*   Updated: 2023/11/20 11:39:12 by elel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	lenght;
	char	*resulta;

	if (s == NULL || f == NULL)
	{
		return (NULL);
	}
	lenght = 0;
	while (s[lenght] != '\0')
		lenght++;
	resulta = (char *)malloc((lenght + 1) * sizeof(char));
	if (resulta == NULL)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		resulta[i] = f(i, s[i]);
		i++;
	}
	resulta[lenght] = '\0';
	return (resulta);
}
