CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME 	= libftprintf.a
SRC		= ft_printf.c ft_convert.c ft_putchar.c ft_putstr.c
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