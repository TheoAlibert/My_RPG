/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** init_map_combat.c
*/

#include "../../../include/rpg.h"

void init_player1_combat(global_t *all)
{
    IMG[47].texture1 =
    sfTexture_createFromFile("./content/player/player1_combat.png", NULL);
    IMG[47].sprite = sfSprite_create();
    IMG[47].scale.x = 2;
    IMG[47].scale.y = 2;
    IMG[47].position.x = 280;
    IMG[47].position.y = 350;

    sfSprite_setTexture(IMG[47].sprite, IMG[47].texture1, sfFalse);
    sfSprite_setScale(IMG[47].sprite, IMG[47].scale);
    sfSprite_setPosition(IMG[47].sprite, IMG[47].position);
}

void init_player2_combat(global_t *all)
{
    IMG[48].texture1 =
    sfTexture_createFromFile("./content/player/player2_combat.png", NULL);
    IMG[48].sprite = sfSprite_create();
    IMG[48].scale.x = 2;
    IMG[48].scale.y = 2;
    IMG[48].position.x = 280;
    IMG[48].position.y = 350;

    sfSprite_setTexture(IMG[48].sprite, IMG[48].texture1, sfFalse);
    sfSprite_setScale(IMG[48].sprite, IMG[48].scale);
    sfSprite_setPosition(IMG[48].sprite, IMG[48].position);
}

void init_map_combat(global_t *all)
{
    IMG[41].texture1 =
    sfTexture_createFromFile("./content/ingame/map_combat.jpg", NULL);
    IMG[41].sprite = sfSprite_create();
    IMG[41].scale.x = 1;
    IMG[41].scale.y = 1;
    IMG[41].position.x = 0;
    IMG[41].position.y = 0;

    sfSprite_setTexture(IMG[41].sprite, IMG[41].texture1, sfFalse);
    sfSprite_setScale(IMG[41].sprite, IMG[41].scale);
    sfSprite_setPosition(IMG[41].sprite, IMG[41].position);
}
