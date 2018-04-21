/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 22:03:29 by mbenkara          #+#    #+#             */
/*   Updated: 2017/12/01 22:03:31 by mbenkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *saux;

	saux = (char*)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!saux)
		return (NULL);
	ft_strcpy(saux, s1);
	return (saux);
}
