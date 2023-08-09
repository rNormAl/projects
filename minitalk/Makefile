# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bstablo <bstablo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 15:37:31 by bstablo           #+#    #+#              #
#    Updated: 2023/06/05 19:15:35 by bstablo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROJECT		= minitalk
NAME		= client
NAMESERV	= server
PRINTF			= ft_printf/libftprintf.a
CLIENT_FILES	= client.c
SERVER_FILES	= server.c
CFILES			= $(addprefix $(SRC), $(CLIENT_FILES))
SFILES 			= $(addprefix $(SRC), $(SERVER_FILES))
CC			= gcc
FLAGS		= -Wall -Werror -Wextra
RM			= rm -f
HEADER		= -I includes
SRC			= sources/
OBJC 		= ${CFILES:.c=.o}
OBJS		= ${SFILES:.c=.o}

all: $(NAME) $(NAMESERV)

$(NAME) : $(OBJC)
					@make -C ft_printf
					$(CC) $(FLAGS) $(OBJC) $(HEADER) $(PRINTF) -o $(NAME)
					
$(NAMESERV) : $(OBJS)
					$(CC) $(FLAGS) $(OBJS) $(HEADER) $(PRINTF) -o $(NAMESERV)

clean :
				@make clean -C ft_printf
				${RM} ${OBJC}
				${RM} ${OBJS}

fclean : clean
				@make fclean -C ft_printf
				${RM} $(NAME)
				${RM} $(NAMESERV)
				${RM} $(PRINTF)

re: fclean all

.PHONY: all clean fclean re
