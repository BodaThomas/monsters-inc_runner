##
## EPITECH PROJECT, 2019
## CLib
## File description:
## An example of a Makefile who compile with the library
##

NAME	=	my_runner

SRC	=	src/my_runner.c \
		src/background.c \
		src/sprite.c \
		src/help.c \
		src/error.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-g -Wall -Wextra -Iinclude

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C lib/my
		gcc $(OBJ) -o $(NAME) $(CFLAGS) -Llib/my -lmy -lcsfml-audio -lcsfml-graphics -lcsfml-system -lcsfml-window

clean:
		rm -f $(OBJ)
		rm -f *~ \#*\#

fclean:		clean
		rm -f $(NAME)
		make -C lib/my fclean

re:		fclean all

.PHONY:		all clean fclean re
