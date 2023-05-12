/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** init_infos_player
*/

#include "../../../include/rpg.h"

void init_infos_players (global_t *all)
{
    IMG[9].texture1 =
    sfTexture_createFromFile("./content/player/info_P1.png", NULL);
    IMG[9].texture2 =
    sfTexture_createFromFile("./content/player/info_P2.png", NULL);
    IMG[9].texture3 =
    sfTexture_createFromFile("./content/player/info_P3.png", NULL);
    IMG[9].sprite = sfSprite_create();
    IMG[9].scale.x = 0.5;
    IMG[9].scale.y = 0.5;
    IMG[9].position.x = 1090;
    IMG[9].position.y = 680;
}

void infos_player3 (global_t *all)
{
    sfSprite_setTexture(IMG[9].sprite, IMG[9].texture3, sfFalse);
    sfSprite_setScale(IMG[9].sprite, IMG[9].scale);
    sfSprite_setPosition(IMG[9].sprite, IMG[9].position);
}

void infos_player2 (global_t *all)
{
    sfSprite_setTexture(IMG[9].sprite, IMG[9].texture2, sfFalse);
    sfSprite_setScale(IMG[9].sprite, IMG[9].scale);
    sfSprite_setPosition(IMG[9].sprite, IMG[9].position);
}

void infos_player1 (global_t *all)
{
    sfSprite_setTexture(IMG[9].sprite, IMG[9].texture1, sfFalse);
    sfSprite_setScale(IMG[9].sprite, IMG[9].scale);
    sfSprite_setPosition(IMG[9].sprite, IMG[9].position);
}

void init_infos_player(global_t *all)
{
    if (CLICK.isClicked_P1)
        infos_player1(all);
    if (CLICK.isClicked_P2)
        infos_player2(all);
    if (CLICK.isClicked_P3)
        infos_player3(all);
}
