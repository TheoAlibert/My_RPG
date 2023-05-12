/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** pnj_colision
*/

#include "../../../include/rpg.h"

void pnj_coli (global_t *all)
{
    sfFloatRect playerRect = sfSprite_getGlobalBounds(IMG[21].sprite);
    sfFloatRect pnjRect = sfSprite_getGlobalBounds(IMG[35].sprite);
    sfVector2f player_pos = sfSprite_getPosition(IMG[21].sprite);
    sfVector2f sprite_pos = sfSprite_getPosition(IMG[35].sprite);

    if (sfFloatRect_intersects(&playerRect, &pnjRect, NULL) == sfTrue) {
        if (player_pos.x <= sprite_pos.x)
            all->colision.stopright = 1;
        if (player_pos.x >= sprite_pos.x)
            all->colision.stopleft = 1;
        if (player_pos.y <= sprite_pos.y + 120)
            all->colision.stopup = 1;
    }
}
