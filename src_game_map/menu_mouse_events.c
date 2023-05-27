/*
** EPITECH PROJECT, 2023
** jam_epitech
** File description:
** menu_mouse_events
*/

#include "my.h"

/*void button_event(my_rpg *rpg, my_box *box, sfRenderWindow* window)
{
    if (rpg->event.type == sfEvtMouseButtonPressed) {
        rpg->click_button_setting =
        sfSprite_getGlobalBounds(rpg->button_setting);
        if (sfFloatRect_contains(&rpg->click_button_setting,
        rpg->event.mouseButton.x, rpg->event.mouseButton.y)) {
            open_setting_menu(rpg, box, window);
        }
        rpg->click_button_exit = sfSprite_getGlobalBounds(rpg->button_exit);
        if (sfFloatRect_contains(&rpg->click_button_exit,
        rpg->event.mouseButton.x, rpg->event.mouseButton.y)) {
            sfRenderWindow_close(window);
        }
        rpg->click_button_play = sfSprite_getGlobalBounds(rpg->button_play);
        if (sfFloatRect_contains(&rpg->click_button_play,
        rpg->event.mouseButton.x, rpg->event.mouseButton.y)) {
            play_intro(rpg, box, window);
        }
    }
}*/

void menu_mouse_event(my_rpg *rpg, sfRenderWindow* window)
{
    rpg->event = (sfEvent){0};

    while (sfRenderWindow_pollEvent(window, &rpg->event)) {
        if (rpg->event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
        }
        //button_event(rpg, box, window);
    }
}
