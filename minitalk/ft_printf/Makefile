# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bstablo <bstablo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 16:06:17 by bstablo           #+#    #+#              #
#    Updated: 2023/06/05 19:15:19 by bstablo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
SRC	= ft_printf.c ft_print_display.c ft_print_itoa_ptr.c ft_print_puts.c ft_print_itoa.c
OBJ = ${SRC:.c=.o}
DLIBFT = ./libft/libft.a

CCF = gcc -Wall -Wextra -Werror -I
RM = rm -f

.c.o:
	${CCF} -I $< -o ${<:.c=.o} -c

all: $(NAME)
$(NAME): $(OBJ)
		@make -C libft
		cp $(DLIBFT) $(NAME)
		ar rcs $(NAME) $(OBJ)
clean:
		@make clean -C libft
		$(RM) $(OBJ)
fclean:	clean
		@make fclean -C libft
		$(RM) $(NAME)
re: fclean $(NAME)
		@make re -C libft

.PHONY: all clean fclean re
