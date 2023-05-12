/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** init_attack.c
*/

#include "../../../include/rpg.h"

void init_punch(global_t *all)
{
    IMG[51].texture1 =
    sfTexture_createFromFile("./content/buttons/button_punch.png", NULL);
    IMG[51].texture2 =
    sfTexture_createFromFile("./content/buttons/button_punch2.png", NULL);
    IMG[51].texture3 =
    sfTexture_createFromFile("./content/buttons/button_punch3.png", NULL);
    IMG[51].sprite = sfSprite_create();
    IMG[51].scale.x = 1;
    IMG[51].scale.y = 1;
    IMG[51].position.x = 400;
    IMG[51].position.y = 850;

    sfSprite_setTexture(IMG[51].sprite, IMG[51].texture1, sfFalse);
    sfSprite_setScale(IMG[51].sprite, IMG[51].scale);
    sfSprite_setPosition(IMG[51].sprite, IMG[51].position);
}

void init_fire(global_t *all)
{
    IMG[52].texture1 =
    sfTexture_createFromFile("./content/buttons/button_fire.png", NULL);
    IMG[52].texture2 =
    sfTexture_createFromFile("./content/buttons/button_fire2.png", NULL);
    IMG[52].texture3 =
    sfTexture_createFromFile("./content/buttons/button_fire3.png", NULL);
    IMG[52].sprite = sfSprite_create();
    IMG[52].scale.x = 1;
    IMG[52].scale.y = 1;
    IMG[52].position.x = 600;
    IMG[52].position.y = 850;

    sfSprite_setTexture(IMG[52].sprite, IMG[52].texture1, sfFalse);
    sfSprite_setScale(IMG[52].sprite, IMG[52].scale);
    sfSprite_setPosition(IMG[52].sprite, IMG[52].position);
}

void init_lightning(global_t *all)
{
    IMG[53].texture1 =
    sfTexture_createFromFile("./content/buttons/button_lightning.png", NULL);
    IMG[53].texture2 =
    sfTexture_createFromFile("./content/buttons/button_lightning2.png", NULL);
    IMG[53].texture3 =
    sfTexture_createFromFile("./content/buttons/button_lightning3.png", NULL);
    IMG[53].sprite = sfSprite_create();
    IMG[53].scale.x = 1;
    IMG[53].scale.y = 1;
    IMG[53].position.x = 800;
    IMG[53].position.y = 850;

    sfSprite_setTexture(IMG[53].sprite, IMG[53].texture1, sfFalse);
    sfSprite_setScale(IMG[53].sprite, IMG[53].scale);
    sfSprite_setPosition(IMG[53].sprite, IMG[53].position);
}

void init_wind(global_t *all)
{
    IMG[54].texture1 =
    sfTexture_createFromFile("./content/buttons/button_grass.png", NULL);
    IMG[54].texture2 =
    sfTexture_createFromFile("./content/buttons/button_grass2.png", NULL);
    IMG[54].texture3 =
    sfTexture_createFromFile("./content/buttons/button_grass3.png", NULL);
    IMG[54].sprite = sfSprite_create();
    IMG[54].scale.x = 1;
    IMG[54].scale.y = 1;
    IMG[54].position.x = 1000;
    IMG[54].position.y = 850;

    sfSprite_setTexture(IMG[54].sprite, IMG[54].texture1, sfFalse);
    sfSprite_setScale(IMG[54].sprite, IMG[54].scale);
    sfSprite_setPosition(IMG[54].sprite, IMG[54].position);
}

void init_water(global_t *all)
{
    IMG[55].texture1 =
    sfTexture_createFromFile("./content/buttons/button_water.png", NULL);
    IMG[55].texture2 =
    sfTexture_createFromFile("./content/buttons/button_water2.png", NULL);
    IMG[55].texture3 =
    sfTexture_createFromFile("./content/buttons/button_water3.png", NULL);
    IMG[55].sprite = sfSprite_create();
    IMG[55].scale.x = 1;
    IMG[55].scale.y = 1;
    IMG[55].position.x = 1200;
    IMG[55].position.y = 850;

    sfSprite_setTexture(IMG[55].sprite, IMG[55].texture1, sfFalse);
    sfSprite_setScale(IMG[55].sprite, IMG[55].scale);
    sfSprite_setPosition(IMG[55].sprite, IMG[55].position);
}
