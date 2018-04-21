/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 01:49:18 by mbenkara          #+#    #+#             */
/*   Updated: 2017/12/03 13:11:53 by mbenkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	const unsigned char	*src_data;
	unsigned char		*dst_data;

	src_data = (const unsigned char*)src;
	dst_data = (unsigned char*)dst;
	if (len == 0)
		return (dst);
	if (dst_data < src_data)
	{
		i = -1;
		while (++i < len)
			dst_data[i] = src_data[i];
	}
	else
	{
		i = len;
		while (--i > 0)
			dst_data[i] = src_data[i];
		dst_data[i] = src_data[i];
	}
	return (dst);
}
