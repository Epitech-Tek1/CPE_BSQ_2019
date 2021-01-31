##
## EPITECH PROJECT, 2019
## bsq
## File description:
## Makefile
##

CC	= gcc -Wall -W

NAME	= libmy.a

RM	= rm -f

SRC	= $(wildcard *.c)

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME):	 $(OBJ)
	ar rc $(NAME) $(OBJ)
	$(RM) $(OBJ)
	cp $(NAME) ../
	$(RM) $(NAME)

clean:
	$(RM) $(OBJ)
	$(RM) $(NAME)

fclean: clean
	$(RM) ../$(NAME)

re:	fclean all

.PHONY:	all clean fclean re
