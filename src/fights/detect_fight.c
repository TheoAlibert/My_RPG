/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** detect_fight
*/

#include "../../include/rpg.h"

void detect_fights (global_t *all)
{
    sfVector2f player_pos = sfSprite_getPosition(IMG[21].sprite);

    if (player_pos.x >= 900) {
        display_map_combat(all);
    }
}
