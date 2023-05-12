/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** init_gameplayer
*/

#include "../../../include/rpg.h"

void init_gameplayer (global_t *all)
{
    IMG[21].texture1 =
    sfTexture_createFromFile("./content/player/moove_sheet.png", NULL);
    IMG[21].sprite = sfSprite_create();
    IMG[21].scale.x = 2;
    IMG[21].scale.y = 2;
    IMG[21].position.x = 20;
    IMG[21].position.y = 300;

    sfSprite_setTexture(IMG[21].sprite, IMG[21].texture1, sfFalse);
    sfSprite_setScale(IMG[21].sprite, IMG[21].scale);
    sfSprite_setPosition(IMG[21].sprite, IMG[21].position);
}

void init_gameplayer1 (global_t *all)
{
    sfIntRect rect = {70, 10, 50, 110};

    sfSprite_setTextureRect(IMG[21].sprite, rect);
}

void init_gameplayer2 (global_t *all)
{
    sfIntRect rect = {350, 10, 50, 115};

    sfSprite_setTextureRect(IMG[21].sprite, rect);
}
