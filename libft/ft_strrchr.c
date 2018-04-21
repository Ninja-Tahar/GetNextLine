/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 23:16:09 by mbenkara          #+#    #+#             */
/*   Updated: 2017/12/01 23:16:10 by mbenkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*aux;
	int		i;

	i = 0;
	aux = (char*)s;
	while (*aux != '\0')
	{
		aux++;
		i++;
	}
	while (i > 0)
	{
		if (*aux == (char)c)
			return (aux);
		aux--;
		i--;
	}
	return (0);
}
