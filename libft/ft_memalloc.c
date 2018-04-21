/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 20:49:10 by mbenkara          #+#    #+#             */
/*   Updated: 2017/12/02 20:49:11 by mbenkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*p;
	char	*c;

	p = malloc(size);
	if (p == NULL)
		return (NULL);
	c = p;
	i = 0;
	while (i < size)
	{
		c[i] = 0;
		i++;
	}
	return (p);
}
