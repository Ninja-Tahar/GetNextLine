/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 23:04:44 by mbenkara          #+#    #+#             */
/*   Updated: 2017/12/01 23:04:46 by mbenkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t s;

	i = 0;
	s = 0;
	while (dst[s] != '\0')
	{
		if (s == size)
			return (s + ft_strlen(src));
		s++;
	}
	size--;
	while (s + i < size && src[i] != '\0')
	{
		dst[s + i] = src[i];
		i++;
	}
	dst[s + i] = '\0';
	return (s + ft_strlen(src));
}
