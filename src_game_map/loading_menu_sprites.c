/*
** EPITECH PROJECT, 2023
** jam_epitech
** File description:
** loading_menu_sprites
*/

#include "my.h"

void loading_menu_button(my_rpg *rpg)
{
    rpg->text_button_play = sfTexture_createFromFile("assets/play_butjam.png", NULL);
    rpg->button_play = sfSprite_create();
    rpg->text_button_setting = sfTexture_createFromFile("assets/sett_butjam.png",NULL);
    rpg->button_setting = sfSprite_create();
    rpg->text_button_exit = sfTexture_createFromFile("assets/exit_butjam.png", NULL);
    rpg->button_exit = sfSprite_create();
    rpg->text_button_credits = sfTexture_createFromFile("assets/credits_butjam.png", NULL);
    rpg->button_credits = sfSprite_create();

    sfSprite_setTexture(rpg->button_play, rpg->text_button_play, sfTrue);
    sfSprite_setPosition(rpg->button_play, (sfVector2f){800, 700});
    sfSprite_setTexture(rpg->button_setting, rpg->text_button_setting, sfTrue);
    sfSprite_setPosition(rpg->button_setting, (sfVector2f){1700, -15});
    sfSprite_setTexture(rpg->button_exit, rpg->text_button_exit, sfTrue);
    sfSprite_setPosition(rpg->button_exit, (sfVector2f){10, -10});
    sfSprite_setTexture(rpg->button_credits, rpg->text_button_credits, sfTrue);
    sfSprite_setPosition(rpg->button_credits, (sfVector2f){10, 925});
    sfSprite_setScale(rpg->button_play, (sfVector2f){0.9f, 0.9f});
    sfSprite_setScale(rpg->button_setting, (sfVector2f){0.7f, 0.7f});
    sfSprite_setScale(rpg->button_exit, (sfVector2f){0.7f, 0.7f});
    sfSprite_setScale(rpg->button_credits, (sfVector2f){0.7f, 0.7f});
}

void loading_menu_sprite(my_rpg *rpg)
{
    /*rpg->music = sfMusic_createFromFile("wondrous-waters-119518.ogg");
    sfMusic_setLoop(rpg->music, sfTrue);
    sfMusic_play(rpg->music);*/

    sfTexture* texture1 = sfTexture_createFromFile("assets/frame-01.gif", NULL);
    sfTexture* texture2 = sfTexture_createFromFile("assets/frame-02.gif", NULL);
    sfTexture* texture3 = sfTexture_createFromFile("assets/frame-03.gif", NULL);
    sfTexture* texture4 = sfTexture_createFromFile("assets/frame-04.gif", NULL);
    sfTexture* texture5 = sfTexture_createFromFile("assets/frame-05.gif", NULL);
    sfTexture* texture6 = sfTexture_createFromFile("assets/frame-06.gif", NULL);
    sfTexture* texture7 = sfTexture_createFromFile("assets/frame-07.gif", NULL);
    sfTexture* texture8 = sfTexture_createFromFile("assets/frame-08.gif", NULL);
    sfTexture* texture9 = sfTexture_createFromFile("assets/frame-09.gif", NULL);
    sfTexture* texture10 = sfTexture_createFromFile("assets/frame-10.gif", NULL);
    sfTexture* texture11 = sfTexture_createFromFile("assets/frame-11.gif", NULL);
    sfTexture* texture12 = sfTexture_createFromFile("assets/frame-12.gif", NULL);
    sfTexture* texture13 = sfTexture_createFromFile("assets/frame-13.gif", NULL);
    sfTexture* texture14 = sfTexture_createFromFile("assets/frame-14.gif", NULL);
    sfTexture* texture15 = sfTexture_createFromFile("assets/frame-15.gif", NULL);
    sfTexture* texture16 = sfTexture_createFromFile("assets/frame-16.gif", NULL);
    sfTexture* texture17 = sfTexture_createFromFile("assets/frame-17.gif", NULL);
    sfTexture* texture18 = sfTexture_createFromFile("assets/frame-18.gif", NULL);
    sfTexture* texture19 = sfTexture_createFromFile("assets/frame-19.gif", NULL);
    sfTexture* texture20 = sfTexture_createFromFile("assets/frame-20.gif", NULL);
    sfTexture* texture21 = sfTexture_createFromFile("assets/frame-21.gif", NULL);
    sfTexture* texture22 = sfTexture_createFromFile("assets/frame-22.gif", NULL);
    sfTexture* texture23 = sfTexture_createFromFile("assets/frame-23.gif", NULL);
    sfTexture* texture24 = sfTexture_createFromFile("assets/frame-24.gif", NULL);
    sfTexture* texture25 = sfTexture_createFromFile("assets/frame-25.gif", NULL);
    sfTexture* texture26 = sfTexture_createFromFile("assets/frame-26.gif", NULL);
    sfTexture* texture27 = sfTexture_createFromFile("assets/frame-27.gif", NULL);
    sfTexture* texture28 = sfTexture_createFromFile("assets/frame-28.gif", NULL);
    sfTexture* texture29 = sfTexture_createFromFile("assets/frame-29.gif", NULL);
    sfTexture* texture30 = sfTexture_createFromFile("assets/frame-30.gif", NULL);
    sfTexture* texture31 = sfTexture_createFromFile("assets/frame-31.gif", NULL);


    int i = 0;
    while (i < 31) {
    rpg->sprites[i] = sfSprite_create();
    i++;
    }
    sfSprite_setTexture(rpg->sprites[0], texture1, sfTrue);
    sfSprite_setTexture(rpg->sprites[1], texture2, sfTrue);
    sfSprite_setTexture(rpg->sprites[2], texture3, sfTrue);
    sfSprite_setTexture(rpg->sprites[3], texture4, sfTrue);
    sfSprite_setTexture(rpg->sprites[4], texture5, sfTrue);
    sfSprite_setTexture(rpg->sprites[5], texture6, sfTrue);
    sfSprite_setTexture(rpg->sprites[6], texture7, sfTrue);
    sfSprite_setTexture(rpg->sprites[7], texture8, sfTrue);
    sfSprite_setTexture(rpg->sprites[8], texture9, sfTrue);
    sfSprite_setTexture(rpg->sprites[9], texture10, sfTrue);
    sfSprite_setTexture(rpg->sprites[10], texture11, sfTrue);
    sfSprite_setTexture(rpg->sprites[11], texture12, sfTrue);
    sfSprite_setTexture(rpg->sprites[12], texture13, sfTrue);
    sfSprite_setTexture(rpg->sprites[13], texture14, sfTrue);
    sfSprite_setTexture(rpg->sprites[14], texture15, sfTrue);
    sfSprite_setTexture(rpg->sprites[15], texture16, sfTrue);
    sfSprite_setTexture(rpg->sprites[16], texture17, sfTrue);
    sfSprite_setTexture(rpg->sprites[17], texture18, sfTrue);
    sfSprite_setTexture(rpg->sprites[18], texture19, sfTrue);
    sfSprite_setTexture(rpg->sprites[19], texture20, sfTrue);
    sfSprite_setTexture(rpg->sprites[20], texture21, sfTrue);
    sfSprite_setTexture(rpg->sprites[21], texture22, sfTrue);
    sfSprite_setTexture(rpg->sprites[22], texture23, sfTrue);
    sfSprite_setTexture(rpg->sprites[23], texture24, sfTrue);
    sfSprite_setTexture(rpg->sprites[24], texture25, sfTrue);
    sfSprite_setTexture(rpg->sprites[25], texture26, sfTrue);
    sfSprite_setTexture(rpg->sprites[26], texture27, sfTrue);
    sfSprite_setTexture(rpg->sprites[27], texture28, sfTrue);
    sfSprite_setTexture(rpg->sprites[28], texture29, sfTrue);
    sfSprite_setTexture(rpg->sprites[29], texture30, sfTrue);
    sfSprite_setTexture(rpg->sprites[30], texture31, sfTrue);

    loading_menu_button(rpg);
}
