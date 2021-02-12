/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgingast <jgingast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 20:12:56 by jgingast          #+#    #+#             */
/*   Updated: 2020/12/29 12:39:30 by jgingast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*sdest;
	char	*ssrc;

	i = 0;
	sdest = (char*)dest;
	ssrc = (char*)src;
	if (!src || !dest)
		return (NULL);
	if (ssrc < sdest)
		while (++i <= n)
			sdest[n - i] = ssrc[n - i];
	else
		while (n-- > 0)
			*(sdest++) = *(ssrc++);
	return (dest);
}
