/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgingast <jgingast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:12:00 by jgingast          #+#    #+#             */
/*   Updated: 2021/01/15 15:36:09 by jgingast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	get_positive(long int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int			check_len(long int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len = 1;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*new;

	sign = 1;
	if (n < 0)
		sign = -sign;
	len = check_len(n);
	new = malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (0);
	new[len] = '\0';
	len--;
	while (len >= 0)
	{
		new[len] = '0' + get_positive(n % 10);
		n = get_positive(n / 10);
		len--;
	}
	if (sign == -1)
		new[0] = '-';
	return (new);
}
