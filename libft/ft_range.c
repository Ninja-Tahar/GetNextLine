/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 19:06:54 by mbenkara          #+#    #+#             */
/*   Updated: 2017/12/04 19:06:55 by mbenkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*str;

	i = 0;
	if (min >= max)
		return (0);
	str = (int*)malloc(sizeof(*str) * (max - min));
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
