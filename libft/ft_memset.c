/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 01:24:51 by mbenkara          #+#    #+#             */
/*   Updated: 2017/12/02 01:24:55 by mbenkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	z;
	size_t			i;

	i = 0;
	p = (unsigned char*)b;
	z = (unsigned char)c;
	while (i < len)
	{
		p[i] = z;
		i++;
	}
	return (b);
}
