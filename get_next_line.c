/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 14:26:52 by mbenkara          #+#    #+#             */
/*   Updated: 2018/02/09 17:51:46 by mbenkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int						read_file(t_new_l *line)
{
	int		ret;
	char	*str;
	char	buff[BUFF_SIZE + 1];

	if (!(line->str))
		line->str = ft_strnew(0);
	while ((ret = read(line->file, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		str = ft_strjoin(line->str, buff);
		ft_strdel(&(line->str));
		line->str = str;
		if (ft_strrchr(buff, '\n'))
			return (1);
	}
	if (ret == 0 && line->str[0])
		return (1);
	return (ret);
}

void					fin(t_new_l *newl, char **line)
{
	char	*strbuff;
	char	*strmem;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (newl->str[i] && newl->str[i] != '\n')
		i++;
	if (!(strbuff = ft_strnew(i)))
		return ;
	ft_strncpy(strbuff, newl->str, i);
	if (newl->str[i] == '\n')
		i++;
	if (!(strmem = ft_strnew(ft_strlen(newl->str) - i)))
		return ;
	while (newl->str[i + j])
	{
		strmem[j] = newl->str[i + j];
		j++;
	}
	*line = strbuff;
	ft_strdel(&newl->str);
	newl->str = strmem;
}

t_new_l					*list(t_new_l **lst, int fd)
{
	t_new_l		*node;
	t_new_l		*prev;

	if (fd < 0)
		return (NULL);
	node = *lst;
	prev = NULL;
	while (node)
	{
		if (node->file == fd)
			return (node);
		prev = node;
		node = node->next;
	}
	if (!(node = (t_new_l*)malloc(sizeof(t_new_l))))
		return (NULL);
	node->file = fd;
	node->next = NULL;
	node->str = NULL;
	if (prev == NULL)
		*lst = node;
	else
		prev->next = node;
	return (node);
}

int						get_next_line(int const fd, char **line)
{
	static t_new_l		*newl;
	t_new_l				*node;
	int					ret;

	if (!line)
		return (-1);
	node = list(&newl, fd);
	if (node == NULL)
		return (-1);
	if ((ret = read_file(node)) > 0)
		fin(node, line);
	return (ret);
}
