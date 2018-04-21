/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 14:27:34 by mbenkara          #+#    #+#             */
/*   Updated: 2018/02/09 14:27:39 by mbenkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include <fcntl.h>

# define BUFF_SIZE 403

typedef struct			s_new_l
{
	char				*str;
	int					file;
	struct s_new_l		*next;

}						t_new_l;

int						get_next_line(int const fd, char **line);

#endif
