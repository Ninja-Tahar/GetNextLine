/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 20:54:29 by mbenkara          #+#    #+#             */
/*   Updated: 2017/12/02 20:54:31 by mbenkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;
	size_t	i;

	s = (char*)malloc(sizeof(*s) * (size + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		s[i] = '\0';
		i++;
	}
	return (s);
}
