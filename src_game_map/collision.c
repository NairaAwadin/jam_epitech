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
    sfImage *image = sfImage_createFromFile("assets/sous_map.png");
    sfVector2i mouse = sfMouse_getPosition(NULL);
    sfColor color = sfImage_getPixel(image, x, y);

    if (color.r >= 240 && color.b >= 240 && color.g >= 240) {
        return 1;
    }
    if (color.r <= 11 && color.g <= 130 && color.b <= 54 && color.g > 14 && color.b > 15) {
        return 0;
    }
    if (color.r == 48 && color.g == 14 && color.b == 15) {
        return 2;
    }
    if (color.r == 86 && color.g == 58 && color.b == 59) {
        return 2;
    }
    sfImage_destroy(image);
}
