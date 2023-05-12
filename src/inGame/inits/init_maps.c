/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** init_maps
*/

#include "../../../include/rpg.h"

void init_map1 (global_t *all)
{
    IMG[20].texture1 =
    sfTexture_createFromFile("./content/maps/map1.png", NULL);
    IMG[20].sprite = sfSprite_create();
    IMG[20].scale.x = 1;
    IMG[20].scale.y = 1;
    IMG[20].position.x = 0;
    IMG[20].position.y = 0;

    sfSprite_setTexture(IMG[20].sprite, IMG[20].texture1, sfFalse);
    sfSprite_setScale(IMG[20].sprite, IMG[20].scale);
    sfSprite_setPosition(IMG[20].sprite, IMG[20].position);
}

void init_map2 (global_t *all)
{
    IMG[24].texture1 =
    sfTexture_createFromFile("./content/maps/map2.png", NULL);
    IMG[24].sprite = sfSprite_create();
    IMG[24].scale.x = 1;
    IMG[24].scale.y = 1;
    IMG[24].position.x = 0;
    IMG[24].position.y = 0;

    sfSprite_setTexture(IMG[24].sprite, IMG[24].texture1, sfFalse);
    sfSprite_setScale(IMG[24].sprite, IMG[24].scale);
    sfSprite_setPosition(IMG[24].sprite, IMG[24].position);
}

void init_map3 (global_t *all)
{
    IMG[25].texture1 =
    sfTexture_createFromFile("./content/maps/map3.png", NULL);
    IMG[25].sprite = sfSprite_create();
    IMG[25].scale.x = 1;
    IMG[25].scale.y = 1;
    IMG[25].position.x = 0;
    IMG[25].position.y = 0;

    sfSprite_setTexture(IMG[25].sprite, IMG[25].texture1, sfFalse);
    sfSprite_setScale(IMG[25].sprite, IMG[25].scale);
    sfSprite_setPosition(IMG[25].sprite, IMG[25].position);
}

void init_map4 (global_t *all)
{
    IMG[26].texture1 =
    sfTexture_createFromFile("./content/maps/map4.png", NULL);
    IMG[26].sprite = sfSprite_create();
    IMG[26].scale.x = 1;
    IMG[26].scale.y = 1;
    IMG[26].position.x = 0;
    IMG[26].position.y = 0;

    sfSprite_setTexture(IMG[26].sprite, IMG[26].texture1, sfFalse);
    sfSprite_setScale(IMG[26].sprite, IMG[26].scale);
    sfSprite_setPosition(IMG[26].sprite, IMG[26].position);
}
