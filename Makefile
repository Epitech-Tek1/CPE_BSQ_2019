##
## EPITECH PROJECT, 2019
## bsq
## File description:
## Makefile
##

NAME	=	bsq

RM	=	rm -f

SRC	=	src/bsq.c

OBJ	=	$(SRC:.c=.o)

GCC	=	gcc

CFLAGS	+=	-I./include \
		-Wall

LDFLAGS	+=	-L./lib -lmy

all:	$(NAME)

$(NAME):	$(OBJ)
		make -C ./lib/my/
		$(GCC) $(CFLAGS) $? $(LDFLAGS) -o $@
		rm -f src/*.o

clean:
	$(RM) $(OBJ)
	make clean -C ./lib/my/

./include/my.h:
	make -C ./lib/my

fclean: clean
	$(RM) $(NAME)
	make fclean -C ./lib/my/

re:	fclean all

.PHONY:	all clean fclean re

%.o: %.c ./include/my.h
	$(CC) $(CFLAGS) -c -o $@ $<