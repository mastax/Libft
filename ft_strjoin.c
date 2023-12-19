/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:18:31 by elel-bah          #+#    #+#             */
/*   Updated: 2023/11/25 14:04:15 by elel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lenght1;
	size_t	lenght2;
	size_t	total_lenght;
	char	*result;

	lenght1 = 0;
	lenght2 = 0;
	if (s1 != NULL)
		lenght1 = ft_strlen(s1);
	if (s2 != NULL)
		lenght2 = ft_strlen(s2);
	total_lenght = lenght1 + lenght2;
	result = (char *)malloc((total_lenght + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	if (s1 != NULL)
		ft_memcpy(result, s1, lenght1);
	if (s2 != NULL)
		ft_memcpy(result + lenght1, s2, lenght2);
	result[total_lenght] = '\0';
	return (result);
}
