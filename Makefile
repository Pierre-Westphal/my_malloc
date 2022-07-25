##
## EPITECH PROJECT, 2020
## B-CPE-100-LYN-1-1-cpoolday10-pierre1.westphal
## File description:
## Makefile
##

SRC	=	src/malloc.c	\
		src/calloc.c	\
		src/realloc.c	\
		src/reallocarray.c	\
		src/free.c	\
		src/tools.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy_malloc.so

CFLAGS	=	-I./include

CC	=	gcc -deprecated -fPIC

all:	$(NAME)

$(NAME):	$(OBJ)
			@$(CC) -shared -o $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJ)
	@rm -f src/*.o
	@rm -f src/*.c.*
	@rm -f my_malloc
	@rm -f a.out

fclean:	clean
	@rm -f $(NAME)

re:	fclean all
