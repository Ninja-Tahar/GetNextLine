/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 00:46:24 by mbenkara          #+#    #+#             */
/*   Updated: 2017/12/02 00:46:26 by mbenkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		ok;
	int		i;
	long	nr;

	nr = 0;
	i = 0;
	ok = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == '\f' || str[i] == '\v' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			ok = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nr = nr * 10 + (str[i] - '0');
		i++;
	}
	if (ok == -1)
		nr = nr * ok;
	return (nr);
}
