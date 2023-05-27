/*
** EPITECH PROJECT, 2023
** while_poll_event
** File description:
** pollçevent
*/
#include "my_map.h"

void cond_key_l_r(sfEvent event, sfView *view, anime_t *anim)
{
    sfVector2f move_r = {3, 0};
    sfVector2f move_l = {-3, 0};
    sfVector2f cat = sfSprite_getPosition(anim->sprite_sans);

    if (event.key.code == sfKeyRight) {
        if (handle_collision(cat.x + 7, cat.y + 2) == 0)
            return;
        if (handle_collision(cat.x + 7, cat.y + - 2) == 0)
            return;
        if (handle_collision(cat.x + 7, cat.y + 2) == 2)
            exit(0);
        if (handle_collision(cat.x + 7, cat.y + - 2) == 2)
            exit(0);
        sfView_move(view, move_r);
        anim->pos.x += 3;
    }
    if (event.key.code == sfKeyLeft) {
        if (handle_collision(cat.x, cat.y) == 0)
            return;
        if (handle_collision(cat.x, cat.y - 2) == 0)
            return;
        if (handle_collision(cat.x, cat.y) == 2)
            exit(0);
        if (handle_collision(cat.x, cat.y - 2) == 2)
            exit(0);
        sfView_move(view, move_l);
        anim->pos.x -= 3;
    }
}

void cond_key_u_d(sfEvent event, sfView *view, anime_t *anim)
{
    sfVector2f move_u = {0, -3};
    sfVector2f move_d = {0, 3};
    sfVector2f cat = sfSprite_getPosition(anim->sprite_sans);

    if (event.key.code == sfKeyUp) {
        if (handle_collision(cat.x + 2, cat.y) == 0)
            return;
        if (handle_collision(cat.x, cat.y) == 0)
            return;
        if (handle_collision(cat.x + 2, cat.y) == 2)
            exit(0);
        if (handle_collision(cat.x, cat.y) == 2)
            exit(0);
        sfView_move(view, move_u);
        anim->pos.y -= 3;
    }
    if (event.key.code == sfKeyDown) {
        if (handle_collision(cat.x, cat.y + 3) == 0)
            return;
        if (handle_collision(cat.x + 2, cat.y + 3) == 0)
            return;
        if (handle_collision(cat.x, cat.y + 3) == 2)
            exit(0);
        if (handle_collision(cat.x + 2, cat.y + 3) == 2)
            exit(0);
        sfView_move(view, move_d);
        anim->pos.y += 3;
    }
}

int while_for_display(sfRenderWindow *w, sfEvent event, sfView *v, anime_t *a)
{
    while (sfRenderWindow_pollEvent(w, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(w);
        }
        if (event.type == sfEvtKeyReleased) {
            return 1;
        }
        cond_key_l_r(event, v, a);
        cond_key_u_d(event, v, a);
        return 0;
    }
}
