/*
** EPITECH PROJECT, 2023
** collision_in_map
** File description:
** map_collision
*/
#include "my_map.h"

int handle_collision(long unsigned int x, long unsigned int y)
{
    sfEvent event;
    sfImage *image = sfImage_createFromFile("assets/map_jam.png");
    sfColor color = sfImage_getPixel(image, x, y);

    if (color.r == 255 && color.b == 255 && color.g == 255) {
        printf("avance r: %d g: %d b: %d\n", color.r, color.g, color.b);
        return 1;
    } else {
        printf("r: %d g: %d b: %d\n", color.r, color.g, color.b);
        return 0;
    }
    sfImage_destroy(image);
}
