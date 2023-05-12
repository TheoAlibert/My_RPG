/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** init_pnj
*/

#include "../../../include/rpg.h"

void init_pnj (global_t *all)
{
    IMG[35].texture1 =
    sfTexture_createFromFile("./content/tools_player/pnj_sheet.png", NULL);
    IMG[35].sprite = sfSprite_create();
    IMG[35].scale.x = 3;
    IMG[35].scale.y = 3;
    IMG[35].position.x = 350;
    IMG[35].position.y = 150;

    sfSprite_setTexture(IMG[35].sprite, IMG[35].texture1, sfFalse);
    sfSprite_setScale(IMG[35].sprite, IMG[35].scale);
    sfSprite_setPosition(IMG[35].sprite, IMG[35].position);
}
