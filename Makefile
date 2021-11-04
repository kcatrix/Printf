CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME 	= libftprintf.a
SRC		= ft_printf.c
LIB = ft
LIB_DIR = /Users/kcatrix/Desktop/Libft

OBJ		= $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS) -I


$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean all 

.PHONY: clean fclean re