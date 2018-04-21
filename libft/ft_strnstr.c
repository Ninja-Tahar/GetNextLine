/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 23:29:18 by mbenkara          #+#    #+#             */
/*   Updated: 2017/12/01 23:29:21 by mbenkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		lil_s;
	int		big_s;
	int		ok;
	int		i;
	int		j;

	if (*little == '\0')
		return ((char*)big);
	lil_s = ft_strlen(little);
	big_s = ft_strlen(big);
	i = -1;
	while (++i <= big_s - lil_s)
	{
		j = -1;
		ok = 1;
		if ((size_t)(i + lil_s) > len)
			return (0);
		while (++j < lil_s)
			if (big[i + j] != little[j])
				ok = 0;
		if (ok)
			return ((char*)&big[i]);
	}
	return (0);
}
