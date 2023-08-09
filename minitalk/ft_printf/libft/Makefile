# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bstablo <bstablo@student.42nice.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 17:18:55 by bstablo           #+#    #+#              #
#    Updated: 2023/06/12 11:10:48 by bstablo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_strlen.c ft_strjoin.c

INCLUDE = ./includes

OBJS = ${SRCS:.c=.o}

CC = gcc

RM = rm -f

CFLAGS = -Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -I ${INCLUDE} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
				ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re: fclean all

.phony: all clean fclean re
