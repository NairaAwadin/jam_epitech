/*
** EPITECH PROJECT, 2023
** jam_epitech
** File description:
** setting_menu
*/

#include "my.h"

void loading_butt(my_rpg *rpg)
{
    rpg->text_plus = sfTexture_createFromFile("assets/plus.png", NULL);
    rpg->plus = sfSprite_create();
    sfSprite_setTexture(rpg->plus, rpg->text_plus, sfTrue);
    sfSprite_setPosition(rpg->plus, (sfVector2f){1050, 400});
    sfSprite_setScale(rpg->plus, (sfVector2f){0.3f, 0.3f});
    rpg->text_less = sfTexture_createFromFile("assets/less.png", NULL);
    rpg->less = sfSprite_create();
    sfSprite_setTexture(rpg->less, rpg->text_less, sfTrue);
    sfSprite_setPosition(rpg->less, (sfVector2f){950, 400});
    sfSprite_setScale(rpg->less, (sfVector2f){0.3f, 0.3f});
}

void loading_setting_sprite(my_rpg *rpg)
{
    rpg->texture = sfTexture_createFromFile("assets/fond-noir.png", NULL);
    rpg->sprite = sfSprite_create();
    sfSprite_setTexture(rpg->sprite, rpg->texture, sfTrue);

    rpg->text_set_menu = sfTexture_createFromFile("assets/set_menu.png", NULL);
    rpg->set_menu = sfSprite_create();
    sfSprite_setTexture(rpg->set_menu, rpg->text_set_menu, sfTrue);
    sfSprite_setPosition(rpg->set_menu, (sfVector2f){555, 160});
    //sfSprite_setScale(rpg->set_menu, (sfVector2f){1.50f, 1.50f});

    rpg->text_home_butt = sfTexture_createFromFile("assets/home_but.png", NULL);
    rpg->home_button = sfSprite_create();
    sfSprite_setTexture(rpg->home_button, rpg->text_home_butt, sfTrue);
    sfSprite_setPosition(rpg->home_button, (sfVector2f){1070, 580});
    sfSprite_setScale(rpg->home_button, (sfVector2f){0.3f, 0.3f});

    loading_butt(rpg);
}

void mouse_event_if(my_rpg *rpg, sfRenderWindow* window)
{
    if (rpg->event.type == sfEvtMouseButtonPressed) {
        rpg->click_home = sfSprite_getGlobalBounds(rpg->home_button);
        if (sfFloatRect_contains(&rpg->click_home,
        rpg->event.mouseButton.x, rpg->event.mouseButton.y)) {
            sd_menu(rpg, window);
        }
        rpg->click_less = sfSprite_getGlobalBounds(rpg->less);
        if (sfFloatRect_contains(&rpg->click_less,
        rpg->event.mouseButton.x, rpg->event.mouseButton.y)) {
            sfMusic_setVolume(rpg->music, sfMusic_getVolume(rpg->music) - 10);
        }
        rpg->click_plus = sfSprite_getGlobalBounds(rpg->plus);
        if (sfFloatRect_contains(&rpg->click_plus,
        rpg->event.mouseButton.x, rpg->event.mouseButton.y)) {
            sfMusic_setVolume(rpg->music, sfMusic_getVolume(rpg->music) + 10);
        }
    }
}

void handle_mouse_events(my_rpg *rpg, sfRenderWindow* window)
{
    while (sfRenderWindow_pollEvent(window, &rpg->event)) {
        if (rpg->event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
        }
        mouse_event_if(rpg, window);
    }
}

int open_setting_menu(my_rpg *rpg, sfRenderWindow* window)
{
    loading_setting_sprite(rpg);

    while (sfRenderWindow_isOpen(window)) {

        handle_mouse_events(rpg, window);

        sfRenderWindow_drawSprite(window, rpg->sprite, NULL);
        sfRenderWindow_drawSprite(window, rpg->set_menu, NULL);
        sfRenderWindow_drawSprite(window, rpg->home_button, NULL);
        sfRenderWindow_drawSprite(window, rpg->plus, NULL);
        sfRenderWindow_drawSprite(window, rpg->less, NULL);
        sfRenderWindow_display(window);
    }
    return 0;
}


