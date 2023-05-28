/*
** EPITECH PROJECT, 2023
** jam_epitech
** File description:
** menu
*/

#include "my.h"

void principale_loop_menu(my_rpg *rpg, sfRenderWindow* window)
{
    int currentSprite = 0, numSprites = 31;
    float elapsedTime = 0.f, timePerFrame = 1.0f;
    sfClock* clock = sfClock_create();
    while (sfRenderWindow_isOpen(window)) {
        sfVector2i mouseposition = sfMouse_getPositionRenderWindow(window);
        sfFloatRect spritebounds = sfSprite_getGlobalBounds(rpg->button_play);
        sfBool mouseoversprite = sfFloatRect_contains(&spritebounds, mouseposition.x, mouseposition.y);
        sfFloatRect spritebounds2 = sfSprite_getGlobalBounds(rpg->button_setting);
        sfBool mouseoversprite2 = sfFloatRect_contains(&spritebounds2, mouseposition.x, mouseposition.y);
        sfFloatRect spritebounds3 = sfSprite_getGlobalBounds(rpg->button_exit);
        sfBool mouseoversprite3 = sfFloatRect_contains(&spritebounds3, mouseposition.x, mouseposition.y);
        sfFloatRect spritebounds4 = sfSprite_getGlobalBounds(rpg->button_credits);
        sfBool mouseoversprite4 = sfFloatRect_contains(&spritebounds4, mouseposition.x, mouseposition.y);

        elapsedTime += sfTime_asSeconds(sfClock_getElapsedTime(clock));
        if (elapsedTime > timePerFrame) {
            currentSprite = (currentSprite + 1) % numSprites;
            elapsedTime = 0.f;
        }

        sfRenderWindow_drawSprite(window, rpg->sprites[currentSprite], NULL);
        sfSleep(sfMilliseconds(130));
        sfRenderWindow_drawText(window, rpg->text_game, NULL);
        sfRenderWindow_drawSprite(window, rpg->button_play, NULL);
        sfRenderWindow_drawSprite(window, rpg->button_setting, NULL);
        sfRenderWindow_drawSprite(window, rpg->button_exit, NULL);
        sfRenderWindow_drawSprite(window, rpg->button_credits, NULL);

        if (mouseoversprite) {
            sfRenderWindow_drawRectangleShape(window, rpg->rect_p, NULL);
        }
        if (mouseoversprite2) {
            sfRenderWindow_drawRectangleShape(window, rpg->rect_s, NULL);
        }
        if (mouseoversprite3) {
            sfRenderWindow_drawRectangleShape(window, rpg->rect_e, NULL);
        }
        if (mouseoversprite4) {
            sfRenderWindow_drawRectangleShape(window, rpg->rect_c, NULL);
        }
        sfRenderWindow_display(window);
        menu_mouse_event(rpg, window);
    }
}

void menu(my_rpg *rpg)
{
    sfRenderWindow* window;
    sfVideoMode video_mode = {1920, 1080};

    window = sfRenderWindow_create(video_mode, "Where is Hoppy ?",
    sfResize | sfClose, NULL);

    rpg->music = sfMusic_createFromFile("assets/music.ogg");
    sfMusic_setLoop(rpg->music, sfTrue);
    sfMusic_play(rpg->music);

    loading_menu_sprite(rpg);
    principale_loop_menu(rpg, window);
}

void sd_menu(my_rpg *rpg, sfRenderWindow* window)
{
    loading_menu_sprite(rpg);

    principale_loop_menu(rpg, window);
}