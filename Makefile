# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 17:35:26 by vguidoni          #+#    #+#              #
#    Updated: 2022/10/15 16:33:26 by vguidoni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstdelone.c ft_lstclear.c ft_lstadd_back.c \
		ft_lstiter.c ft_lstmap.c

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

CC = gcc

CC_FLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: ${NAME}

${NAME}:
	${CC} ${CC_FLAG} -c ${SRC}
	ar -rsv libft.a ${OBJ}
bonus:
	${CC} ${CC_FLAG} -c ${SRC_BONUS}
	ar -rsv libft.a ${OBJ_BONUS}

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

rebonus: fclean bonus

.PHONY:	all clean fclean re bonus
