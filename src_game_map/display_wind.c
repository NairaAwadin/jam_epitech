/*
** EPITECH PROJECT, 2023
** display_a_wind
** File description:
** window
*/
#include "my_map.h"

int all_set(maps_t *maps, anime_t *anim, sfView *view)
{
    sfSprite_setScale(maps->sprite, maps->scale);
    sfSprite_setTexture(maps->sprite, maps->texture, sfTrue);
    sfSprite_setTexture(anim->sprite_sans, anim->texture_sans, sfTrue);
    sfSprite_setScale(maps->sprite_sous_map, maps->scale);
    sfSprite_setTexture(maps->sprite_sous_map, maps->texture_sous, sfTrue);
    sfView_setCenter(view, maps->center);
    sfView_setSize(view, maps->size_map);
    sfView_setCenter(view, maps->center);
    sfView_setSize(view, maps->size_map);
    return 0;
}

int disp_split(sfRenderWindow *w, maps_t *map, anime_t *ani, sfView *view)
{
    sfRenderWindow_clear(w, sfWhite);
    sfRenderWindow_setView(w, view);
    sfRenderWindow_drawSprite(w, map->sprite_sous_map, NULL);
    //sfRenderWindow_drawSprite(w, map->sprite, NULL);
    animation_on_key(ani, w);
    sfRenderWindow_display(w);
    return 0;
}

int free_destroy(sfRenderWindow *window, maps_t *maps, anime_t *anime)
{
    sfSprite_destroy(maps->sprite);
    sfTexture_destroy(maps->texture);
    sfSprite_destroy(maps->sprite_sous_map);
    sfTexture_destroy(maps->texture_sous);
    sfRenderWindow_destroy(window);
    free(maps);
    free(anime);
}

int display_window(sfEvent event)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window;
    window = sfRenderWindow_create(mode, "...", sfResize | sfClose, NULL);
    anime_t *animation = NULL;
    maps_t *maps = NULL;
    sfView *view = sfView_create();

    animation = init_anime();
    maps = init_maps_s();
    all_set(maps, animation, view);
    while (sfRenderWindow_isOpen(window)) {
        while_for_display(window, event, view, animation);
        disp_split(window, maps, animation, view);
    }
    free_destroy(window, maps, animation);
    return 0;
}
