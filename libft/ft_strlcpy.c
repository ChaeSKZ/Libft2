/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgingast <jgingast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 12:50:40 by jgingast          #+#    #+#             */
/*   Updated: 2020/12/29 13:06:51 by jgingast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i < size - 1 && size != 0)
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size && size != 0)
		dst[i] = 0;
	while (src[i])
		i++;
	return (i);
}
