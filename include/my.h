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
    sfTexture* texture;
    sfSprite* sprite;

    sfTexture* texture1;
    sfSprite* sprite1;

    sfText* text_game;
    sfFloatRect click_button_setting;
    sfFloatRect click_button_exit;
    sfFloatRect click_button_play;
    sfFloatRect click_button_credits;
    sfFloatRect click_less;
    sfFloatRect click_plus;
    sfFloatRect click_home;
    sfFloatRect click_home1;


    sfMusic* music;

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

    sfTexture* text_plus;
    sfSprite* plus;

    sfTexture* text_less;
    sfSprite* less;

    sfTexture* text_set_menu;
    sfSprite* set_menu;
    sfTexture* text_crd_menu;
    sfSprite* crd_menu;

    sfTexture* text_home_butt;
    sfSprite* home_button;

    sfTexture* text_home_butt1;
    sfSprite* home_button1;

    sfSprite* sprites[31];

    sfEvent event;

}my_rpg;

void menu(my_rpg *rpg);
void loading_menu_sprite(my_rpg *rpg);
void menu_mouse_event(my_rpg *rpg, sfRenderWindow* window);
void sd_menu(my_rpg *rpg, sfRenderWindow* window);
int display_window(my_rpg *rpg, sfRenderWindow *window);
int open_setting_menu(my_rpg *rpg, sfRenderWindow* window);
int open_credits_menu(my_rpg *rpg, sfRenderWindow* window);
#endif