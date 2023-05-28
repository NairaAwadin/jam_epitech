/*
** EPITECH PROJECT, 2023
** init_struct_anime_t
** File description:
** anime_t_init$
*/
#include "my_map.h"

anime_t *init_anime(void)
{
    anime_t *anim = malloc(sizeof(anime_t));

    anim->clock = sfClock_create();
    anim->sprite_sans = sfSprite_create();
    anim->texture_sans = sfTexture_createFromFile("assets/main_perso.png", NULL);
    (anim->rect).top = 0;
    (anim->rect).left = 0;
    (anim->rect).width = 105;
    (anim->rect).height = 135;
    (anim->pos).x = 300;
    (anim->pos).y = 620;
    (anim->scale).x = 0.4;
    (anim->scale).y = 0.4;
    (anim->mouv).x = 7;
    (anim->mouv).y = 2;
    anim->pos_timer.x = 200;
    anim->pos_timer.y =	400;
    sfSprite_setTextureRect(anim->sprite_sans, anim->rect);
    sfSprite_setTexture(anim->sprite_sans, anim->texture_sans, sfTrue);
    return anim;
}

maps_t *init_maps_s(void)
{
    maps_t *maps = malloc(sizeof(maps_t));

    maps->sprite_sous_map = sfSprite_create();
    maps->texture_sous = sfTexture_createFromFile("assets/sous_map.png", NULL);
    (maps->scale).x = 1.0;
    (maps->scale).y = 1.05;
    maps->sprite = sfSprite_create();
    maps->texture_hoppy = sfTexture_createFromFile("assets/hoppy.png", NULL);
    maps->sprite_hoppy = sfSprite_create();
    sfSprite_setTexture(maps->sprite_hoppy, maps->texture_hoppy, sfTrue);
    sfSprite_setPosition(maps->sprite_hoppy, (sfVector2f){250, 100});
    sfSprite_setScale(maps->sprite_hoppy, (sfVector2f){0.08f, 0.08f});
    maps->texture = sfTexture_createFromFile("assets/map_jam.png", NULL);
    (maps->center).x = 410;
    (maps->center).y = 540;
    (maps->size).x = 500;
    (maps->size).y = 400;
    (maps->size_map).x = 420;
    (maps->size_map).y = 320;
    return maps;
}
