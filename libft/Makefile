# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenkara <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/29 13:50:40 by mbenkara          #+#    #+#              #
#    Updated: 2017/12/04 19:41:01 by mbenkara         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRS = \
	ft_putchar.c ft_putstr.c ft_putnbr.c\
	ft_putendl.c ft_putchar_fd.c ft_putstr_fd.c\
	ft_putnbr_fd.c ft_putendl_fd.c\
	ft_strlen.c ft_strstr.c ft_strchr.c\
	ft_strrchr.c ft_strnstr.c ft_strdup.c\
	ft_strcpy.c ft_strcat.c ft_strcmp.c\
	ft_strncpy.c ft_strncat.c ft_strncmp.c\
	ft_strlcat.c ft_strnew.c ft_strdel.c\
	ft_strclr.c ft_striter.c ft_striteri.c\
	ft_strmap.c ft_strmapi.c ft_strequ.c\
	ft_strnequ.c ft_strsub.c ft_strjoin.c\
	ft_strtrim.c ft_strsplit.c\
	\
	ft_isdigit.c ft_isalpha.c ft_isalnum.c\
	ft_isascii.c ft_isprint.c\
	\
	ft_toupper.c ft_tolower.c\
	\
	ft_memset.c ft_bzero.c ft_memcpy.c\
	ft_memccpy.c ft_memmove.c ft_memchr.c\
	ft_memcmp.c ft_memalloc.c ft_memdel.c\
	\
	ft_atoi.c ft_itoa.c\
	\
	ft_lstnew.c ft_lstdelone.c ft_lstdel.c\
	ft_lstadd.c ft_lstiter.c ft_lstmap.c\
	\
	ft_fibonacci.c ft_range.c ft_rot42.c\
	ft_strrev.c ft_ultimate_range.c\

OBJ = $(subst .c,.o,$(SRS))

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(SRS)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
	
