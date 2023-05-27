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
        elapsedTime += sfTime_asSeconds(sfClock_getElapsedTime(clock));
        if (elapsedTime > timePerFrame) {
            currentSprite = (currentSprite + 1) % numSprites;
            elapsedTime = 0.f;
        }
        sfRenderWindow_drawSprite(window, rpg->sprites[currentSprite], NULL);
        sfSleep(sfMilliseconds(130));
        sfRenderWindow_drawSprite(window, rpg->button_play, NULL);
        sfRenderWindow_drawSprite(window, rpg->button_setting, NULL);
        sfRenderWindow_drawSprite(window, rpg->button_exit, NULL);
        sfRenderWindow_drawSprite(window, rpg->button_credits, NULL);
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

    loading_menu_sprite(rpg);

    principale_loop_menu(rpg, window);
}