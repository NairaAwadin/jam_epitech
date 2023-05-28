/*
** EPITECH PROJECT, 2023
** jam
** File description:
** jam
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>

#ifndef MY_H_
    #define MY_H_

typedef struct my_rpg_s {
    //sfTexture* texture;
    //sfSprite* sprite;

    sfText* text_game;
    sfFloatRect click_button_exit;
    sfFloatRect click_button_play;

    sfTexture* text_button_play;
    sfSprite* button_play;
    sfRectangleShape* rect_p;

    sfTexture* text_button_setting;
    sfSprite* button_setting;
    sfRectangleShape* rect_s;

    sfTexture* text_button_exit;
    sfSprite* button_exit;
    sfRectangleShape* rect_e;

    sfTexture* text_button_credits;
    sfSprite* button_credits;
    sfRectangleShape* rect_c;

    sfSprite* sprites[31];

    sfEvent event;

}my_rpg;

void menu(my_rpg *rpg);
void loading_menu_sprite(my_rpg *rpg);
void menu_mouse_event(my_rpg *rpg, sfRenderWindow* window);
int display_window(sfEvent event);
#endif