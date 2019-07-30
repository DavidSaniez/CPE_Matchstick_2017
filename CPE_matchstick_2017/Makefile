##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## SANIEZ David
##

NAME	=	matchstick

SRC	=	src/main.c 		\
		src/map.c		\
		src/turn.c		\
		src/arg_error.c		\
		src/check_win.c		\
		src/end.c		\
		src/error.c		\
		src/print_map.c		\
		src/ia.c		\

LIB_DIR	=	$(realpath ./lib/my)

LIB	=	my


GCC_ARG	=		-L$(LIB_DIR) -l$(LIB) -I$(INC_DIR)
GCC_ARG_DEBUG	=	-L$(LIB_DIR) -l$(LIB) -I$(INC_DIR) -g
CFLAGS	=		-g -L$(LIB_DIR) -l$(LIB) -W -Wall -Wextra -Iinclude/

all:		$(NAME)

$(NAME):
		make -C $(LIB_DIR)
		gcc -o $(NAME) $(SRC) $(CFLAGS)

clean:
		make clean -C $(LIB_DIR)
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		make fclean -C $(LIB_DIR)

re:		fclean all
