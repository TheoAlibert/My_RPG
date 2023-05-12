/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** my_destroy
*/

#include "../include/rpg.h"

void destroy_sprites_ingame1 (global_t *all)
{
    sfSprite_destroy(IMG[20].sprite);
    sfSprite_destroy(IMG[21].sprite);
    sfSprite_destroy(IMG[24].sprite);
    sfSprite_destroy(IMG[25].sprite);
    sfSprite_destroy(IMG[26].sprite);
    sfSprite_destroy(IMG[27].sprite);
    sfSprite_destroy(IMG[28].sprite);
    sfSprite_destroy(IMG[29].sprite);
    sfSprite_destroy(IMG[30].sprite);
    sfSprite_destroy(IMG[31].sprite);
    sfSprite_destroy(IMG[32].sprite);
    sfSprite_destroy(IMG[33].sprite);
    sfSprite_destroy(IMG[34].sprite);
    sfSprite_destroy(IMG[35].sprite);
    sfSprite_destroy(IMG[36].sprite);
    sfSprite_destroy(IMG[37].sprite);
    sfSprite_destroy(IMG[38].sprite);
    sfSprite_destroy(IMG[39].sprite);
    sfSprite_destroy(IMG[40].sprite);
    sfSprite_destroy(IMG[41].sprite);
}

void destroy_sprites_ingame2 (global_t *all)
{
    sfSprite_destroy(IMG[42].sprite);
    sfSprite_destroy(IMG[43].sprite);
    sfSprite_destroy(IMG[44].sprite);
    sfSprite_destroy(IMG[45].sprite);
    sfSprite_destroy(IMG[46].sprite);
    sfSprite_destroy(IMG[47].sprite);
    sfSprite_destroy(IMG[48].sprite);
    sfSprite_destroy(IMG[49].sprite);
    sfSprite_destroy(IMG[50].sprite);
    sfSprite_destroy(IMG[51].sprite);
    sfSprite_destroy(IMG[52].sprite);
    sfSprite_destroy(IMG[53].sprite);
    sfSprite_destroy(IMG[54].sprite);
    sfSprite_destroy(IMG[55].sprite);
    sfSprite_destroy(IMG[56].sprite);
}

void destroy_sprites_ingame (global_t *all)
{
    if (CLICK.isIngame) {
        destroy_sprites_ingame1(all);
        destroy_sprites_ingame2(all);
        free(GUY);
    }
}
