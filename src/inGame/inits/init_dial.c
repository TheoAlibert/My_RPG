/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** init_dial
*/

#include "../../../include/rpg.h"

void init_dial1 (global_t *all)
{
    IMG[36].texture1 =
    sfTexture_createFromFile("./content/ingame/bulle_dial_pnj1.png", NULL);
    IMG[36].sprite = sfSprite_create();
    IMG[36].scale.x = 0.4;
    IMG[36].scale.y = 0.4;
    IMG[36].position.x = 430;
    IMG[36].position.y = 50;

    sfSprite_setTexture(IMG[36].sprite, IMG[36].texture1, sfFalse);
    sfSprite_setScale(IMG[36].sprite, IMG[36].scale);
    sfSprite_setPosition(IMG[36].sprite, IMG[36].position);
}

void init_dial2 (global_t *all)
{
    IMG[37].texture1 =
    sfTexture_createFromFile("./content/ingame/bulle_dial_pnj2.png", NULL);
    IMG[37].sprite = sfSprite_create();
    IMG[37].scale.x = 0.4;
    IMG[37].scale.y = 0.4;
    IMG[37].position.x = 590;
    IMG[37].position.y = 80;

    sfSprite_setTexture(IMG[37].sprite, IMG[37].texture1, sfFalse);
    sfSprite_setScale(IMG[37].sprite, IMG[37].scale);
    sfSprite_setPosition(IMG[37].sprite, IMG[37].position);
}

void init_dial3 (global_t *all)
{
    IMG[38].texture1 =
    sfTexture_createFromFile("./content/ingame/bulle_dial_pnj3.png", NULL);
    IMG[38].sprite = sfSprite_create();
    IMG[38].scale.x = 0.4;
    IMG[38].scale.y = 0.4;
    IMG[38].position.x = 430;
    IMG[38].position.y = 50;

    sfSprite_setTexture(IMG[38].sprite, IMG[38].texture1, sfFalse);
    sfSprite_setScale(IMG[38].sprite, IMG[38].scale);
    sfSprite_setPosition(IMG[38].sprite, IMG[38].position);
}

void init_dial4 (global_t *all)
{
    IMG[39].texture1 =
    sfTexture_createFromFile("./content/ingame/bulle_dial_pnj4.png", NULL);
    IMG[39].sprite = sfSprite_create();
    IMG[39].scale.x = 0.4;
    IMG[39].scale.y = 0.4;
    IMG[39].position.x = 370;
    IMG[39].position.y = 50;

    sfSprite_setTexture(IMG[39].sprite, IMG[39].texture1, sfFalse);
    sfSprite_setScale(IMG[39].sprite, IMG[39].scale);
    sfSprite_setPosition(IMG[39].sprite, IMG[39].position);
}

void init_dial5 (global_t *all)
{
    IMG[40].texture1 =
    sfTexture_createFromFile("./content/ingame/bulle_dial_pnj5.png", NULL);
    IMG[40].sprite = sfSprite_create();
    IMG[40].scale.x = 0.4;
    IMG[40].scale.y = 0.4;
    IMG[40].position.x = 380;
    IMG[40].position.y = 60;

    sfSprite_setTexture(IMG[40].sprite, IMG[40].texture1, sfFalse);
    sfSprite_setScale(IMG[40].sprite, IMG[40].scale);
    sfSprite_setPosition(IMG[40].sprite, IMG[40].position);
}
