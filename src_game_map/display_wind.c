/*
** EPITECH PROJECT, 2023
** display_a_wind
** File description:
** window
*/
#include "my_map.h"
#include "my.h"

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

int disp_split(sfRenderWindow *w, maps_t *map, anime_t *ani, sfView *view, int test, my_rpg *rpg)
{
    sfRenderWindow_clear(w, sfWhite);
    sfRenderWindow_setView(w, view);
    sfRenderWindow_drawSprite(w, map->sprite_sous_map, NULL);
    if (test == 2)
        exit(0);
    if (test == 1) {
        sfSprite_setTextureRect(ani->sprite_sans, ani->rect);
        sfSprite_setPosition(ani->sprite_sans, ani->pos);
        sfSprite_setScale(ani->sprite_sans, ani->scale);
        sfRenderWindow_drawSprite(w, ani->sprite_sans, NULL);
    }
    sfRenderWindow_drawSprite(w, map->sprite, NULL);
    sfRenderWindow_drawSprite(w, map->sprite_hoppy, NULL);
    animation_on_key(ani, w);
    rpg->text_timer = sfText_create();
    sfText_setFont(rpg->text_timer, rpg->font_timer);
    sfText_setCharacterSize(rpg->text_timer, 30);
    sfText_setFillColor(rpg->text_timer, sfRed);
    sfTime elapsedTime = sfClock_getElapsedTime(rpg->clock_timer);
    float seconds = sfTime_asSeconds(elapsedTime);
    char timeString[50];
    sprintf(timeString, "Temps : %.2f secondes", seconds);
    sfText_setPosition(rpg->text_timer, ani->pos_timer);
    sfText_setScale(rpg->text_timer, (sfVector2f) {0.5, 0.5});
    sfText_setString(rpg->text_timer, timeString);
    sfRenderWindow_drawText(w, rpg->text_timer, NULL);
    if (sfTime_asSeconds(elapsedTime) >= sfTime_asSeconds(rpg->timer)) {
        printf("Game over!\n");
        sfRenderWindow_close(w);
    }
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

int display_window(my_rpg *rpg, sfRenderWindow *window)
{
    anime_t *animation = NULL;
    maps_t *maps = NULL;
    int test = 0;
    sfView *view = sfView_create();

    animation = init_anime();
    maps = init_maps_s();
    all_set(maps, animation, view);
    rpg->clock_timer = sfClock_create();
    rpg->timer = sfSeconds(60);
    rpg->font_timer = sfFont_createFromFile("assets/Macaroni.ttf");
    while (sfRenderWindow_isOpen(window)) {
        if (while_for_display(window, rpg->event, view, animation) == 1) {
            test = 1;
        }
        if (while_for_display(window, rpg->event, view, animation) == 2) {
            test = 2;
        }
        disp_split(window, maps, animation, view, test, rpg);
    }
    //free_destroy(window, maps, animation);
     return 0;
}
