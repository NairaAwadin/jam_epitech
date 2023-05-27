/*
** EPITECH PROJECT, 2023
** personnage
** File description:
** anime
*/

#include "my_map.h"

anime_t *sprite_animation_d(anime_t *animation, sfRenderWindow *window)
{
    sfTime elapsed = sfClock_getElapsedTime(animation->clock);
    float dt = sfTime_asSeconds(elapsed);

    (animation->rect).top = 0;
    (animation->rect).width = 110;
    if (dt > 0.15) {
        animation->rect.left += 110;
        if (animation->rect.left >= 250) {
            animation->rect.left = 0;
        }
        sfClock_restart(animation->clock);
    }
    sfSprite_setTextureRect(animation->sprite_sans, animation->rect);
    sfSprite_setPosition(animation->sprite_sans, animation->pos);
    sfSprite_setScale(animation->sprite_sans, animation->scale);
    sfRenderWindow_drawSprite(window, animation->sprite_sans, NULL);
    return (animation);
}

anime_t *sprite_animation_r(anime_t *animation, sfRenderWindow *window)
{
    sfTime elapsed = sfClock_getElapsedTime(animation->clock);
    float dt = sfTime_asSeconds(elapsed);

    (animation->rect).top = 165;
    (animation->rect).width = 115;
    if (dt > 0.15) {
        animation->rect.left += 115;
        if (animation->rect.left >= 200) {
            animation->rect.left = 0;
        }
        sfClock_restart(animation->clock);
    }
    sfSprite_setTextureRect(animation->sprite_sans, animation->rect);
    sfSprite_setPosition(animation->sprite_sans, animation->pos);
    sfSprite_setScale(animation->sprite_sans, animation->scale);
    sfRenderWindow_drawSprite(window, animation->sprite_sans, NULL);
    return (animation);
}

anime_t *sprite_animation_l(anime_t *animation, sfRenderWindow *window)
{
    sfTime elapsed = sfClock_getElapsedTime(animation->clock);
    float dt = sfTime_asSeconds(elapsed);

    (animation->rect).top = 300;
    (animation->rect).width = 121;
    if (dt > 0.15) {
        animation->rect.left += 121;
        if (animation->rect.left >= 190) {
            animation->rect.left = 0;
        }
        sfClock_restart(animation->clock);
    }
    sfSprite_setTextureRect(animation->sprite_sans, animation->rect);
    sfSprite_setPosition(animation->sprite_sans, animation->pos);
    sfSprite_setScale(animation->sprite_sans, animation->scale);
    sfRenderWindow_drawSprite(window, animation->sprite_sans, NULL);
    return (animation);
}

anime_t *sprite_animation_u(anime_t *animation, sfRenderWindow *window)
{
    sfTime elapsed = sfClock_getElapsedTime(animation->clock);
    float dt = sfTime_asSeconds(elapsed);

    (animation->rect).top = 400;
    (animation->rect).width = 135;
    if (dt > 0.15) {
        animation->rect.left += 135;
        if (animation->rect.left >= 150) {
            animation->rect.left = 0;
        }
        sfClock_restart(animation->clock);
    }
    sfSprite_setTextureRect(animation->sprite_sans, animation->rect);
    sfSprite_setPosition(animation->sprite_sans, animation->pos);
    sfSprite_setScale(animation->sprite_sans, animation->scale);
    sfRenderWindow_drawSprite(window, animation->sprite_sans, NULL);
    return (animation);
}

int animation_on_key(anime_t *animation, sfRenderWindow *window)
{
    if (sfKeyboard_isKeyPressed(sfKeyDown))
        sprite_animation_d(animation, window);
    if (sfKeyboard_isKeyPressed(sfKeyRight))
        sprite_animation_r(animation, window);
    if (sfKeyboard_isKeyPressed(sfKeyLeft))
        sprite_animation_l(animation, window);
    if (sfKeyboard_isKeyPressed(sfKeyUp))
        sprite_animation_u(animation, window);
    return 0;
}
