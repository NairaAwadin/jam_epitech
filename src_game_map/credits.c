/*
** EPITECH PROJECT, 2023
** jam_epitech
** File description:
** credits
*/

#include "my.h"

void loading_credits_sprite(my_rpg *rpg)
{
    rpg->texture1 = sfTexture_createFromFile("assets/fond-noir.png", NULL);
    rpg->sprite1 = sfSprite_create();
    sfSprite_setTexture(rpg->sprite1, rpg->texture1, sfTrue);

    rpg->text_crd_menu = sfTexture_createFromFile("assets/credits.png", NULL);
    rpg->crd_menu = sfSprite_create();
    sfSprite_setTexture(rpg->crd_menu, rpg->text_crd_menu, sfTrue);
    sfSprite_setPosition(rpg->crd_menu, (sfVector2f){555, 160});
    //sfSprite_setScale(rpg->set_menu, (sfVector2f){1.50f, 1.50f});

    rpg->text_home_butt1 = sfTexture_createFromFile("assets/home_but.png", NULL);
    rpg->home_button1 = sfSprite_create();
    sfSprite_setTexture(rpg->home_button1, rpg->text_home_butt1, sfTrue);
    sfSprite_setPosition(rpg->home_button1, (sfVector2f){1010, 580});
    sfSprite_setScale(rpg->home_button1, (sfVector2f){0.3f, 0.3f});
}

void mouse_event_if_crd(my_rpg *rpg, sfRenderWindow* window)
{
    if (rpg->event.type == sfEvtMouseButtonPressed) {
        rpg->click_home1 = sfSprite_getGlobalBounds(rpg->home_button1);
        if (sfFloatRect_contains(&rpg->click_home1,
        rpg->event.mouseButton.x, rpg->event.mouseButton.y)) {
            sd_menu(rpg, window);
        }
    }
}

void handle_mouse_events_crd(my_rpg *rpg, sfRenderWindow* window)
{
    while (sfRenderWindow_pollEvent(window, &rpg->event)) {
        if (rpg->event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
        }
        mouse_event_if_crd(rpg, window);
    }
}

int open_credits_menu(my_rpg *rpg, sfRenderWindow* window)
{
    loading_credits_sprite(rpg);

    while (sfRenderWindow_isOpen(window)) {

        handle_mouse_events_crd(rpg, window);

        sfRenderWindow_drawSprite(window, rpg->sprite1, NULL);
        sfRenderWindow_drawSprite(window, rpg->crd_menu, NULL);
        sfRenderWindow_drawSprite(window, rpg->home_button1, NULL);

        sfRenderWindow_display(window);
    }
    return 0;
}