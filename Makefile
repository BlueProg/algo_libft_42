# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmole <mmole@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/19 15:21:33 by mmole             #+#    #+#              #
#    Updated: 2015/01/19 15:21:38 by mmole            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	=	ft_strlen.c ft_bzero.c ft_memset.c ft_memcpy.c \
			ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
			ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
			ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
			ft_strcmp.c ft_strncmp.c \
			ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
			ft_isprint.c ft_toupper.c ft_tolower.c \
			ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c \
			ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c \
			ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c \
			ft_strtrim.c ft_strsplit.c ft_putchar.c ft_putstr.c \
			ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c

			# ft_strstr.c ft_strnstr.c \ p1
			# ft_atoi.c

			# ft_itoa.c \ p2

OBJS	= ${SRCS:.c=.o}
FLAGS	= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): includes/libft.h
		gcc $(FLAGS) -c $(SRCS) -I includes/
		ar rc $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re