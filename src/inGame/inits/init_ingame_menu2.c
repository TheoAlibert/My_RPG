/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** init_ingame_menu2
*/

#include "../../../include/rpg.h"

void init_inventory(global_t *all)
{
    IMG[50].texture1 =
    sfTexture_createFromFile("./content/buttons/inventory.png", NULL);
    IMG[50].sprite = sfSprite_create();
    IMG[50].scale.x = 0.5;
    IMG[50].scale.y = 0.5;
    IMG[50].position.x = 1470;
    IMG[50].position.y = 680;

    sfSprite_setTexture(IMG[50].sprite, IMG[50].texture1, sfFalse);
    sfSprite_setScale(IMG[50].sprite, IMG[50].scale);
    sfSprite_setPosition(IMG[50].sprite, IMG[50].position);
}

void init_commands(global_t *all)
{
    IMG[49].texture1 =
    sfTexture_createFromFile("./content/buttons/commands_menu.png", NULL);
    IMG[49].sprite = sfSprite_create();
    IMG[49].scale.x = 0.8;
    IMG[49].scale.y = 0.8;
    IMG[49].position.x = 100;
    IMG[49].position.y = 550;

    sfSprite_setTexture(IMG[49].sprite, IMG[49].texture1, sfFalse);
    sfSprite_setScale(IMG[49].sprite, IMG[49].scale);
    sfSprite_setPosition(IMG[49].sprite, IMG[49].position);
}
