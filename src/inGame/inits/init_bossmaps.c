/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** init_bossmaps
*/

#include "../../../include/rpg.h"

void init_map5 (global_t *all)
{
    IMG[27].texture1 =
    sfTexture_createFromFile("./content/maps/mapbigboss.png", NULL);
    IMG[27].sprite = sfSprite_create();
    IMG[27].scale.x = 1;
    IMG[27].scale.y = 1;
    IMG[27].position.x = 0;
    IMG[27].position.y = 0;

    sfSprite_setTexture(IMG[27].sprite, IMG[27].texture1, sfFalse);
    sfSprite_setScale(IMG[27].sprite, IMG[27].scale);
    sfSprite_setPosition(IMG[27].sprite, IMG[27].position);
}

void init_map6 (global_t *all)
{
    IMG[28].texture1 =
    sfTexture_createFromFile("./content/maps/mapboss.png", NULL);
    IMG[28].sprite = sfSprite_create();
    IMG[28].scale.x = 1;
    IMG[28].scale.y = 1;
    IMG[28].position.x = 0;
    IMG[28].position.y = 0;

    sfSprite_setTexture(IMG[28].sprite, IMG[28].texture1, sfFalse);
    sfSprite_setScale(IMG[28].sprite, IMG[28].scale);
    sfSprite_setPosition(IMG[28].sprite, IMG[28].position);
}
