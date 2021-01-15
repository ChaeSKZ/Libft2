/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgingast <jgingast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 16:33:04 by jgingast          #+#    #+#             */
/*   Updated: 2021/01/15 15:43:06 by jgingast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*new;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = 0;
	while (s1[len])
		len++;
	while (ft_strchr(set, s1[len]) && len >= 0)
		len--;
	new = ft_substr((char*)s1, 0, len + 1);
	return (new);
}
