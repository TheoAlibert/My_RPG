/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** set_pnj
*/

#include "../../../include/rpg.h"

void set_pnj1 (global_t *all)
{
    sfIntRect rect = {130, 0, 30, 50};

    sfSprite_setTextureRect(IMG[35].sprite, rect);
}

void set_pnj2 (global_t *all)
{
    sfIntRect rect = {130, 192, 30, 50};
    IMG[35].position.x = 510;
    IMG[35].position.y = 180;

    sfSprite_setTextureRect(IMG[35].sprite, rect);
    sfSprite_setPosition(IMG[35].sprite, IMG[35].position);
}

void set_pnj3 (global_t *all)
{
    sfIntRect rect = {227.5, 191, 29, 49};
    IMG[35].position.x = 350;
    IMG[35].position.y = 130;

    sfSprite_setTextureRect(IMG[35].sprite, rect);
    sfSprite_setPosition(IMG[35].sprite, IMG[35].position);
}

void set_pnj4 (global_t *all)
{
    sfIntRect rect = {320, 0, 30, 50};
    IMG[35].position.x = 260;
    IMG[35].position.y = 120;

    sfSprite_setTextureRect(IMG[35].sprite, rect);
    sfSprite_setPosition(IMG[35].sprite, IMG[35].position);
}

void set_pnj5 (global_t *all)
{
    sfIntRect rect = {30, 0, 30, 50};
    IMG[35].position.x = 260;
    IMG[35].position.y = 120;

    sfSprite_setTextureRect(IMG[35].sprite, rect);
    sfSprite_setPosition(IMG[35].sprite, IMG[35].position);
}
