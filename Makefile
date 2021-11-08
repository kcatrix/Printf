# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 17:47:21 by kevyn             #+#    #+#              #
#    Updated: 2021/11/08 11:10:57 by kcatrix          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME 	= libftprintf.a
SRC		= ft_printf.c ft_convert.c ft_putchar.c ft_putstr.c ft_putnbr.c \
			ft_putnbru.c ft_putnbrh.c ft_putnbrhl.c
LIB = ft
LIB_DIR = ../Libft/

OBJ		= $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS) -I.

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re