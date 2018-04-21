/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 19:02:03 by mbenkara          #+#    #+#             */
/*   Updated: 2017/12/04 19:02:04 by mbenkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*aux;
	t_list	*aux_c;
	t_list	*aux_s;

	aux_c = NULL;
	while (lst)
	{
		aux = f(lst);
		if (!aux_c)
		{
			aux_c = ft_lstnew(aux->content, aux->content_size);
			aux_s = aux_c;
		}
		else
		{
			aux_c->next = ft_lstnew(aux->content, aux->content_size);
			aux_c = aux_c->next;
		}
		lst = lst->next;
	}
	return (aux_s);
}
