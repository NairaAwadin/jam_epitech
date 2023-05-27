##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## jam3
##

CC      =       gcc

SRC     =       src_game_map/display_wind.c     \
                src_game_map/perso.c    \
                src_game_map/collision.c        \
                src_game_map/initialisation.c   \
                src_game_map/split_while_poll_event.c   \
                src_game_map/main.c

OBJ     =       $(SRC:.c=.o)

NAME    =       my_rpg

CPPFLAGS = -I./include/ -g

CFLAGS = -lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system -lncurses

CFLAG = -Wall -Wextra

all:$(NAME)

$(NAME):        $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(CFLAG)

debug:  all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
