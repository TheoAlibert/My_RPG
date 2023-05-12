/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-8-1-myrpg-remy.canal
** File description:
** init_menu2
*/

#include "../../../include/rpg.h"

void init_settingbutton (global_t *all)
{
    IMG[5].texture1 =
    sfTexture_createFromFile("./content/buttons/settings.png", NULL);
    IMG[5].texture2 =
    sfTexture_createFromFile("./content/buttons/settings2.png", NULL);
    IMG[5].texture3 =
    sfTexture_createFromFile("./content/buttons/settings3.png", NULL);
    IMG[5].sprite = sfSprite_create();
    IMG[5].scale.x = 0.8;
    IMG[5].scale.y = 0.8;
    IMG[5].position.x = 800;
    IMG[5].position.y = 100;

    sfSprite_setTexture(IMG[5].sprite, IMG[5].texture1, sfFalse);
    sfSprite_setScale(IMG[5].sprite, IMG[5].scale);
    sfSprite_setPosition(IMG[5].sprite, IMG[5].position);
}

void init_settingmenu (global_t *all)
{
    IMG[10].texture1 =
    sfTexture_createFromFile("./content/buttons/settings_menu.png", NULL);
    IMG[10].sprite = sfSprite_create();
    IMG[10].scale.x = 0.8;
    IMG[10].scale.y = 0.8;
    IMG[10].position.x = 100;
    IMG[10].position.y = 110;

    sfSprite_setTexture(IMG[10].sprite, IMG[10].texture1, sfFalse);
    sfSprite_setScale(IMG[10].sprite, IMG[10].scale);
    sfSprite_setPosition(IMG[10].sprite, IMG[10].position);
}

void init_minusbutton(global_t *all)
{
    IMG[6].texture1 =
    sfTexture_createFromFile("./content/buttons/minus.png", NULL);
    IMG[6].texture2 =
    sfTexture_createFromFile("./content/buttons/minus2.png", NULL);
    IMG[6].texture3 =
    sfTexture_createFromFile("./content/buttons/minus3.png", NULL);
    IMG[6].sprite = sfSprite_create();
    IMG[6].scale.x = 0.3;
    IMG[6].scale.y = 0.3;
    IMG[6].position.x = 210;
    IMG[6].position.y = 155;

    sfSprite_setTexture(IMG[6].sprite, IMG[6].texture1, sfFalse);
    sfSprite_setScale(IMG[6].sprite, IMG[6].scale);
    sfSprite_setPosition(IMG[6].sprite, IMG[6].position);
}

void init_plusbutton(global_t *all)
{
    IMG[7].texture1 =
    sfTexture_createFromFile("./content/buttons/plus.png", NULL);
    IMG[7].texture2 =
    sfTexture_createFromFile("./content/buttons/plus2.png", NULL);
    IMG[7].texture3 =
    sfTexture_createFromFile("./content/buttons/plus3.png", NULL);
    IMG[7].sprite = sfSprite_create();
    IMG[7].scale.x = 0.3;
    IMG[7].scale.y = 0.3;
    IMG[7].position.x = 435;
    IMG[7].position.y = 155;

    sfSprite_setTexture(IMG[7].sprite, IMG[7].texture1, sfFalse);
    sfSprite_setScale(IMG[7].sprite, IMG[7].scale);
    sfSprite_setPosition(IMG[7].sprite, IMG[7].position);
}

void init_player3 (global_t *all)
{
    IMG[8].texture1 =
    sfTexture_createFromFile("./content/player/Player3.png", NULL);
    IMG[8].texture2 =
    sfTexture_createFromFile("./content/player/player3_buy.png", NULL);
    IMG[8].texture3 =
    sfTexture_createFromFile("./content/player/player3_buy2.png", NULL);
    IMG[8].sprite = sfSprite_create();
    IMG[8].scale.x = 1.1;
    IMG[8].scale.y = 1.1;
    IMG[8].position.x = 1500;
    IMG[8].position.y = 600;

    sfSprite_setTexture(IMG[8].sprite, IMG[8].texture1, sfFalse);
    sfSprite_setScale(IMG[8].sprite, IMG[8].scale);
    sfSprite_setPosition(IMG[8].sprite, IMG[8].position);
}
