##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

CC ?= gcc

SRC =	main.c 		\

OBJ =	$(SRC:.c=.o)

CPPFLAGS += -iquote./include

CFLAGS += -Wall -Wextra

NAME = jam

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) -f $(OBJ)
	$(RM) -f *~

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
