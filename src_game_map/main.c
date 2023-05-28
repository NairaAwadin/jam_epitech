/*
** EPITECH PROJECT, 2023
** main
** File description:
** for_rpg
*/
#include "my_map.h"
#include "my.h"

int main(int ac, char **av)
{
    my_rpg *rpg = malloc (sizeof(my_rpg));
   if (ac == 1)
        menu(rpg);
    if (ac == 2)
        instructions(ac, av);
    free(rpg);
    return 0;
}
