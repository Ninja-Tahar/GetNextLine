/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 23:23:33 by mbenkara          #+#    #+#             */
/*   Updated: 2017/12/01 23:23:35 by mbenkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *big, const char *little)
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
	while (i++ <= big_s - lil_s)
	{
		j = 0;
		ok = 1;
		while (j < lil_s)
		{
			if (big[i + j] != little[j])
				ok = 0;
			j++;
		}
		if (ok)
			return ((char*)&big[i]);
	}
	return (0);
}
