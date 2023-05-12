/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** my_destroy
*/

#include "../include/rpg.h"

void destroy_clock (global_t *all)
{
    sfClock_destroy(GUY[0].clock);
    sfClock_destroy(GUY[1].clock);
    sfClock_destroy(GUY[2].clock);
    sfClock_destroy(GUY[3].clock);
    sfClock_destroy(GUY[4].clock);
    sfClock_destroy(GUY[5].clock);
    sfClock_destroy(GUY[6].clock);
    sfClock_destroy(GUY[7].clock);
}

void destroy_sprites1 (global_t *all)
{
    sfSprite_destroy(IMG[0].sprite);
    sfSprite_destroy(IMG[1].sprite);
    sfSprite_destroy(IMG[2].sprite);
    sfSprite_destroy(IMG[3].sprite);
    sfSprite_destroy(IMG[4].sprite);
    sfSprite_destroy(IMG[5].sprite);
    sfSprite_destroy(IMG[6].sprite);
    sfSprite_destroy(IMG[7].sprite);
    sfSprite_destroy(IMG[8].sprite);
}

void destroy_sprites2 (global_t *all)
{
    if (CLICK.infos) {
        sfSprite_destroy(IMG[9].sprite);
    }
    destroy_sprites_ingame(all);
}

void destroy_sprites3 (global_t *all)
{
    sfSprite_destroy(IMG[10].sprite);
    sfSprite_destroy(IMG[11].sprite);
    sfSprite_destroy(IMG[12].sprite);
    sfSprite_destroy(IMG[13].sprite);
    sfSprite_destroy(IMG[14].sprite);
    sfSprite_destroy(IMG[15].sprite);
    sfSprite_destroy(IMG[16].sprite);
    sfSprite_destroy(IMG[17].sprite);
    sfSprite_destroy(IMG[18].sprite);
    sfSprite_destroy(IMG[19].sprite);
    sfSprite_destroy(IMG[22].sprite);
    sfSprite_destroy(IMG[23].sprite);
}
