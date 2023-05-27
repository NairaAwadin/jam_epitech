/*
** EPITECH PROJECT, 2023
** main
** File description:
** for_rpg
*/
#include "my_map.h"
#include "my.h"

int main(void)
{
    sfEvent event;

    my_rpg *rpg = malloc (sizeof(my_rpg));
    menu(rpg);
    return 0;
}
