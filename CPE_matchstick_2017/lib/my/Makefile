##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## SANIEZ David
##

NAME=		libmy.a

SRC=		count_char.c			\
		my_getnbr.c			\
		my_putchar.c			\
		my_putnbr.c			\
		my_putstr.c			\
		my_strlen.c			\
		my_swap.c			\
		str_to_int.c			\
		my_str_to_word_array.c		\
		my_atoi.c			\
		get_next_line.c			\
		my_str_is_num.c			

OBJ=		$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
