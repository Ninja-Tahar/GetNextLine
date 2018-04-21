/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 00:43:22 by mbenkara          #+#    #+#             */
/*   Updated: 2017/12/02 00:43:24 by mbenkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	i = 0;
	if (n == 0)
		return (0);
	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	while (ss1[i] == ss2[i] && ss1[i] != '\0' && i < (int)(n - 1))
		i++;
	return (ss1[i] - ss2[i]);
}
