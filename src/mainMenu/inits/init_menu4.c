/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** init_menu4
*/

#include "../../../include/rpg.h"

void init_checkbutton(global_t *all)
{
    IMG[16].texture1 =
    sfTexture_createFromFile("./content/buttons/check.png", NULL);
    IMG[16].texture2 =
    sfTexture_createFromFile("./content/buttons/check2.png", NULL);
    IMG[16].texture3 =
    sfTexture_createFromFile("./content/buttons/check3.png", NULL);
    IMG[16].sprite = sfSprite_create();
    IMG[16].scale.x = 0.4;
    IMG[16].scale.y = 0.4;
    IMG[16].position.x = 465;
    IMG[16].position.y = 370;

    sfSprite_setTexture(IMG[16].sprite, IMG[16].texture1, sfFalse);
    sfSprite_setScale(IMG[16].sprite, IMG[16].scale);
    sfSprite_setPosition(IMG[16].sprite, IMG[16].position);
}

void init_nullbutton(global_t *all)
{
    IMG[17].texture1 =
    sfTexture_createFromFile("./content/buttons/quit.png", NULL);
    IMG[17].texture2 =
    sfTexture_createFromFile("./content/buttons/quit2.png", NULL);
    IMG[17].texture3 =
    sfTexture_createFromFile("./content/buttons/quit3.png", NULL);
    IMG[17].sprite = sfSprite_create();
    IMG[17].scale.x = 0.4;
    IMG[17].scale.y = 0.4;
    IMG[17].position.x = 170;
    IMG[17].position.y = 370;

    sfSprite_setTexture(IMG[17].sprite, IMG[17].texture1, sfFalse);
    sfSprite_setScale(IMG[17].sprite, IMG[17].scale);
    sfSprite_setPosition(IMG[17].sprite, IMG[17].position);
}

void init_infosbutton(global_t *all)
{
    IMG[18].texture1 =
    sfTexture_createFromFile("./content/buttons/info.png", NULL);
    IMG[18].texture2 =
    sfTexture_createFromFile("./content/buttons/info2.png", NULL);
    IMG[18].texture3 =
    sfTexture_createFromFile("./content/buttons/info3.png", NULL);
    IMG[18].sprite = sfSprite_create();
    IMG[18].scale.x = 0.6;
    IMG[18].scale.y = 0.6;
    IMG[18].position.x = 15;
    IMG[18].position.y = 15;

    sfSprite_setTexture(IMG[18].sprite, IMG[18].texture1, sfFalse);
    sfSprite_setScale(IMG[18].sprite, IMG[18].scale);
    sfSprite_setPosition(IMG[18].sprite, IMG[18].position);
}

void init_infos(global_t *all)
{
    IMG[19].texture1 =
    sfTexture_createFromFile("./content/buttons/info_menu.png", NULL);
    IMG[19].sprite = sfSprite_create();
    IMG[19].scale.x = 0.8;
    IMG[19].scale.y = 0.8;
    IMG[19].position.x = 100;
    IMG[19].position.y = 110;

    sfSprite_setTexture(IMG[19].sprite, IMG[19].texture1, sfFalse);
    sfSprite_setScale(IMG[19].sprite, IMG[19].scale);
    sfSprite_setPosition(IMG[19].sprite, IMG[19].position);
}
