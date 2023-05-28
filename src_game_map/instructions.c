/*
** EPITECH PROJECT, 2023
** jam_epitech
** File description:
** instructions
*/
#include <stdio.h>
#include "my.h"


int instructions(int ac, char **av)
{
    for (int i = 0; av[i] != NULL; i++) {
        i++;
        if (av[i][0] == '-' && av[i][1] == 'h') {
            printf("Hello, do you know Hoppy ? The Epitech's cat ? \nHoppy is lost, in a maze, and we need your help to find Hoppy.\nWill you find him ?\n");
        }
    }
    return 0;
}
