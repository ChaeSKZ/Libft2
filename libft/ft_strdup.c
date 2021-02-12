/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgingast <jgingast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 15:13:39 by jgingast          #+#    #+#             */
/*   Updated: 2021/01/15 15:38:25 by jgingast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*new_ptr;

	i = 0;
	if (!(new_ptr = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (i < ft_strlen(s))
	{
		new_ptr[i] = s[i];
		i++;
	}
	new_ptr[i] = '\0';
	return (new_ptr);
}
