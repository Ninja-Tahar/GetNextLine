/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 19:01:44 by mbenkara          #+#    #+#             */
/*   Updated: 2017/12/04 19:01:45 by mbenkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*aux;

	aux = (t_list*)malloc(sizeof(t_list));
	if (aux)
	{
		if (!content)
		{
			aux->content = NULL;
			aux->content_size = 0;
		}
		else
		{
			aux->content = malloc(content_size);
			aux->content_size = content_size;
			ft_memcpy(aux->content, content, content_size);
		}
		aux->next = NULL;
	}
	return (aux);
}
