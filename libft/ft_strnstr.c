/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgingast <jgingast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 13:49:46 by jgingast          #+#    #+#             */
/*   Updated: 2020/12/29 14:04:39 by jgingast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (!little)
		return ((char*)big);
	while (big[i])
	{
		n = 0;
		while (big[i + n] == little[n] && little[n] && n + i < len)
			n++;
		if (!little[n])
			return ((char*)big + i);
		i++;
	}
	return (NULL);
}
