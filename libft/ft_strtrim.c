/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 02:18:28 by mbenkara          #+#    #+#             */
/*   Updated: 2017/12/03 02:18:30 by mbenkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_new(size_t size)
{
	char	*str;
	size_t	i;

	str = (char*)malloc(sizeof(*str) * (size + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

char		*ft_strtrim(char const *s)
{
	size_t			i;
	char			*str;
	size_t			size;
	size_t			j;

	size = ft_strlen(s);
	if (size == 0)
		return (ft_new(0));
	size--;
	i = 0;
	while ((s[size] == '\n' || s[size] == '\t' || s[size] == ' '))
	{
		if (size == 0)
			return (ft_new(0));
		size--;
	}
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	str = ft_new(size - i + 1);
	if (!str)
		return (NULL);
	j = 0;
	while (i <= size)
		str[j++] = s[i++];
	return (str);
}
