/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgingast <jgingast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 17:17:54 by jgingast          #+#    #+#             */
/*   Updated: 2021/01/15 15:48:36 by jgingast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	*str2;

	str = (char*)dest;
	str2 = (char*)src;
	i = 0;
	while (i < n && *(char*)src != c)
	{
		str[i] = str2[i];
		if (str2[i] == c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
