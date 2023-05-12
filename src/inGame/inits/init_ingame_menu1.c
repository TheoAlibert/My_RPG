/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** init_ingame_menu1
*/

#include "../../../include/rpg.h"

void init_closebutton(global_t *all)
{
    IMG[46].texture1 =
    sfTexture_createFromFile("./content/buttons/quit.png", NULL);
    IMG[46].texture2 =
    sfTexture_createFromFile("./content/buttons/quit2.png", NULL);
    IMG[46].texture3 =
    sfTexture_createFromFile("./content/buttons/quit3.png", NULL);
    IMG[46].sprite = sfSprite_create();
    IMG[46].scale.x = 0.8;
    IMG[46].scale.y = 0.8;
    IMG[46].position.x = 1345;
    IMG[46].position.y = 10;

    sfSprite_setTexture(IMG[46].sprite, IMG[46].texture1, sfFalse);
    sfSprite_setScale(IMG[46].sprite, IMG[46].scale);
    sfSprite_setPosition(IMG[46].sprite, IMG[46].position);
}

void init_informationbutton(global_t *all)
{
    IMG[45].texture1 =
    sfTexture_createFromFile("./content/buttons/info.png", NULL);
    IMG[45].texture2 =
    sfTexture_createFromFile("./content/buttons/info2.png", NULL);
    IMG[45].texture3 =
    sfTexture_createFromFile("./content/buttons/info3.png", NULL);
    IMG[45].sprite = sfSprite_create();
    IMG[45].scale.x = 0.8;
    IMG[45].scale.y = 0.8;
    IMG[45].position.x = 1460;
    IMG[45].position.y = 10;

    sfSprite_setTexture(IMG[45].sprite, IMG[45].texture1, sfFalse);
    sfSprite_setScale(IMG[45].sprite, IMG[45].scale);
    sfSprite_setPosition(IMG[45].sprite, IMG[45].position);
}

void init_parambutton(global_t *all)
{
    IMG[44].texture1 =
    sfTexture_createFromFile("./content/buttons/setting.png", NULL);
    IMG[44].texture2 =
    sfTexture_createFromFile("./content/buttons/setting2.png", NULL);
    IMG[44].texture3 =
    sfTexture_createFromFile("./content/buttons/setting3.png", NULL);
    IMG[44].sprite = sfSprite_create();
    IMG[44].scale.x = 0.8;
    IMG[44].scale.y = 0.8;
    IMG[44].position.x = 1575;
    IMG[44].position.y = 10;

    sfSprite_setTexture(IMG[44].sprite, IMG[44].texture1, sfFalse);
    sfSprite_setScale(IMG[44].sprite, IMG[44].scale);
    sfSprite_setPosition(IMG[44].sprite, IMG[44].position);
}

void init_homebutton(global_t *all)
{
    IMG[43].texture1 =
    sfTexture_createFromFile("./content/buttons/home.png", NULL);
    IMG[43].texture2 =
    sfTexture_createFromFile("./content/buttons/home2.png", NULL);
    IMG[43].texture3 =
    sfTexture_createFromFile("./content/buttons/home3.png", NULL);
    IMG[43].sprite = sfSprite_create();
    IMG[43].scale.x = 0.8;
    IMG[43].scale.y = 0.8;
    IMG[43].position.x = 1690;
    IMG[43].position.y = 10;

    sfSprite_setTexture(IMG[43].sprite, IMG[43].texture1, sfFalse);
    sfSprite_setScale(IMG[43].sprite, IMG[43].scale);
    sfSprite_setPosition(IMG[43].sprite, IMG[43].position);
}

void init_pausebutton(global_t *all)
{
    IMG[42].texture1 =
    sfTexture_createFromFile("./content/buttons/pause.png", NULL);
    IMG[42].texture2 =
    sfTexture_createFromFile("./content/buttons/pause2.png", NULL);
    IMG[42].texture3 =
    sfTexture_createFromFile("./content/buttons/pause3.png", NULL);
    IMG[42].sprite = sfSprite_create();
    IMG[42].scale.x = 0.8;
    IMG[42].scale.y = 0.8;
    IMG[42].position.x = 1805;
    IMG[42].position.y = 10;

    sfSprite_setTexture(IMG[42].sprite, IMG[42].texture1, sfFalse);
    sfSprite_setScale(IMG[42].sprite, IMG[42].scale);
    sfSprite_setPosition(IMG[42].sprite, IMG[42].position);
}
