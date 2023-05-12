/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-10-myrpg-remy.canal
** File description:
** init_menu3
*/

#include "../../../include/rpg.h"

void init_buybutton (global_t *all)
{
    IMG[11].texture1 =
    sfTexture_createFromFile("./content/buttons/buy.png", NULL);
    IMG[11].texture2 =
    sfTexture_createFromFile("./content/buttons/buy2.png", NULL);
    IMG[11].texture3 =
    sfTexture_createFromFile("./content/buttons/buy3.png", NULL);
    IMG[11].sprite = sfSprite_create();
    IMG[11].scale.x = 0.4;
    IMG[11].scale.y = 0.4;
    IMG[11].position.x = 1550;
    IMG[11].position.y = 860;

    sfSprite_setTexture(IMG[11].sprite, IMG[11].texture1, sfFalse);
    sfSprite_setScale(IMG[11].sprite, IMG[11].scale);
    sfSprite_setPosition(IMG[11].sprite, IMG[11].position);
}

void init_minusbutton2(global_t *all)
{
    IMG[12].texture1 =
    sfTexture_createFromFile("./content/buttons/minus.png", NULL);
    IMG[12].texture2 =
    sfTexture_createFromFile("./content/buttons/minus2.png", NULL);
    IMG[12].texture3 =
    sfTexture_createFromFile("./content/buttons/minus3.png", NULL);
    IMG[12].sprite = sfSprite_create();
    IMG[12].scale.x = 0.3;
    IMG[12].scale.y = 0.3;
    IMG[12].position.x = 180;
    IMG[12].position.y = 270;

    sfSprite_setTexture(IMG[12].sprite, IMG[12].texture1, sfFalse);
    sfSprite_setScale(IMG[12].sprite, IMG[12].scale);
    sfSprite_setPosition(IMG[12].sprite, IMG[12].position);
}

void init_plusbutton2(global_t *all)
{
    IMG[13].texture1 =
    sfTexture_createFromFile("./content/buttons/plus.png", NULL);
    IMG[13].texture2 =
    sfTexture_createFromFile("./content/buttons/plus2.png", NULL);
    IMG[13].texture3 =
    sfTexture_createFromFile("./content/buttons/plus3.png", NULL);
    IMG[13].sprite = sfSprite_create();
    IMG[13].scale.x = 0.3;
    IMG[13].scale.y = 0.3;
    IMG[13].position.x = 465;
    IMG[13].position.y = 270;

    sfSprite_setTexture(IMG[13].sprite, IMG[13].texture1, sfFalse);
    sfSprite_setScale(IMG[13].sprite, IMG[13].scale);
    sfSprite_setPosition(IMG[13].sprite, IMG[13].position);
}

void init_mutebutton(global_t *all)
{
    IMG[14].texture1 =
    sfTexture_createFromFile("./content/buttons/mute.png", NULL);
    IMG[14].texture2 =
    sfTexture_createFromFile("./content/buttons/mute2.png", NULL);
    IMG[14].texture3 =
    sfTexture_createFromFile("./content/buttons/mute3.png", NULL);
    IMG[14].sprite = sfSprite_create();
    IMG[14].scale.x = 0.4;
    IMG[14].scale.y = 0.4;
    IMG[14].position.x = 142;
    IMG[14].position.y = 150;

    sfSprite_setTexture(IMG[14].sprite, IMG[14].texture1, sfFalse);
    sfSprite_setScale(IMG[14].sprite, IMG[14].scale);
    sfSprite_setPosition(IMG[14].sprite, IMG[14].position);
}

void init_maxbutton(global_t *all)
{
    IMG[15].texture1 =
    sfTexture_createFromFile("./content/buttons/max.png", NULL);
    IMG[15].texture2 =
    sfTexture_createFromFile("./content/buttons/max2.png", NULL);
    IMG[15].texture3 =
    sfTexture_createFromFile("./content/buttons/max3.png", NULL);
    IMG[15].sprite = sfSprite_create();
    IMG[15].scale.x = 0.4;
    IMG[15].scale.y = 0.4;
    IMG[15].position.x = 490;
    IMG[15].position.y = 150;

    sfSprite_setTexture(IMG[15].sprite, IMG[15].texture1, sfFalse);
    sfSprite_setScale(IMG[15].sprite, IMG[15].scale);
    sfSprite_setPosition(IMG[15].sprite, IMG[15].position);
}
