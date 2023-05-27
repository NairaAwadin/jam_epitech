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
    (animation->rect).width = 105;
    if (dt > 0.15) {
        animation->rect.left += 105;
        if (animation->rect.left >= 420) {
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

    (animation->rect).top = 135;
    (animation->rect).width = 78;
    if (dt > 0.15) {
        animation->rect.left += 78;
        if (animation->rect.left >= 312) {
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

    (animation->rect).top = 270;
    (animation->rect).width = 80;
    if (dt > 0.15) {
        animation->rect.left += 80;
        if (animation->rect.left >= 320) {
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

    (animation->rect).top = 0;
    (animation->rect).width = 105;
    (animation->rect).left = 443;
    if (dt > 0.15) {
        animation->rect.left += 105;
        if (animation->rect.left >= 862) {
            animation->rect.left = 443;
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
