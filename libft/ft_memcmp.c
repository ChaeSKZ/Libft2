/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgingast <jgingast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 20:37:33 by jgingast          #+#    #+#             */
/*   Updated: 2020/12/29 12:39:01 by jgingast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*(unsigned char*)s1 == *(unsigned char*)s2 && i < n)
	{
		i++;
		s1++;
		s2++;
	}
	if (i >= n)
		return (0);
	return ((int)(*(unsigned char*)s1 - *(unsigned char*)s2));
}
