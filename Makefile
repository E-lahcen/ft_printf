SRC= ft_printf.c \
	ft_putchar.c \
	ft_putnbr_hexa.c \
	ft_putnbr_unsigned.c \
	ft_putnbr.c \
	ft_putstr.c

FLAGS= -Werror -Wextra -Wall

OBJ= $(SRC:.c=.o)

RM= rm -f

NAME= libftprintf.a

all: $(NAME)
	@echo Prog has been compiled

$(NAME):
	cc $(FLAGS) -c $(SRC)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all re