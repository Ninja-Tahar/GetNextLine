/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 19:07:21 by mbenkara          #+#    #+#             */
/*   Updated: 2017/12/04 19:07:27 by mbenkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int				i;
	unsigned int	d;
	int				*aux;

	d = max - min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	aux = (int*)malloc(sizeof(int) * (d));
	while (min < max)
	{
		aux[i] = min;
		min++;
		i++;
	}
	*range = aux;
	return (i);
}
