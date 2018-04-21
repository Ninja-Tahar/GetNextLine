/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 01:41:19 by mbenkara          #+#    #+#             */
/*   Updated: 2017/12/02 01:41:21 by mbenkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *csrc;
	char *cdst;

	csrc = (char *)src;
	cdst = (char *)dst;
	while (n--)
	{
		*cdst++ = *csrc++;
	}
	return (dst);
}
