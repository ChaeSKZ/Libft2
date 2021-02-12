/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgingast <jgingast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 16:27:28 by jgingast          #+#    #+#             */
/*   Updated: 2021/01/15 15:37:31 by jgingast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		t_len;
	int		i;
	int		n;
	char	*new;

	t_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(new = malloc(sizeof(char) * t_len)))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	n = 0;
	while (s2[n])
	{
		new[i + n] = s2[n];
		n++;
	}
	new[i + n] = '\0';
	return (new);
}
