/*
** EPITECH PROJECT, 2023
** jam_epitech
** File description:
** menu_mouse_events
*/
#include <stdio.h>
#include "my.h"

void button_event(my_rpg *rpg, sfRenderWindow* window)
{
    if (rpg->event.type == sfEvtMouseButtonPressed) {
        rpg->click_button_setting = sfSprite_getGlobalBounds(rpg->button_setting);
        sfSprite_getGlobalBounds(rpg->button_setting);
        if (sfFloatRect_contains(&rpg->click_button_setting,
        rpg->event.mouseButton.x, rpg->event.mouseButton.y)) {
            open_setting_menu(rpg, window);
        }
        rpg->click_button_exit = sfSprite_getGlobalBounds(rpg->button_exit);
        if (sfFloatRect_contains(&rpg->click_button_exit,
        rpg->event.mouseButton.x, rpg->event.mouseButton.y)) {
            sfRenderWindow_close(window);
        }
        rpg->click_button_play = sfSprite_getGlobalBounds(rpg->button_play);
        if (sfFloatRect_contains(&rpg->click_button_play,
        rpg->event.mouseButton.x, rpg->event.mouseButton.y)) {
            display_window(rpg, window);
        }
        rpg->click_button_credits = sfSprite_getGlobalBounds(rpg->button_credits);
        if (sfFloatRect_contains(&rpg->click_button_credits,
        rpg->event.mouseButton.x, rpg->event.mouseButton.y)) {
            open_credits_menu(rpg, window);
        }
    }
}

void menu_mouse_event(my_rpg *rpg, sfRenderWindow* window)
{
    rpg->event = (sfEvent){0};

    while (sfRenderWindow_pollEvent(window, &rpg->event)) {
        if (rpg->event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
        }
        sfRenderWindow_clear(window, sfBlack);
        button_event(rpg, window);
    }
}
