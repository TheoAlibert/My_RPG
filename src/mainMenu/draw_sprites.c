/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** draw_sprites
*/

#include "../../include/rpg.h"

void draw_sprites_initmenu (global_t *all)
{
    sfRenderWindow_drawSprite(WINDOW, IMG[0].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[1].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[2].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[3].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[4].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[5].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[8].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[18].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[23].sprite, NULL);
}

void draw_sprites_settings (global_t *all)
{
    if (CLICK.isClicked_settings) {
        sfRenderWindow_drawSprite(WINDOW, IMG[10].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMG[6].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMG[7].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMG[12].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMG[13].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMG[14].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMG[15].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMG[16].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMG[17].sprite, NULL);
    }
}

void draw_sprites_menu (global_t *all)
{
    draw_sprites_initmenu(all);
    draw_sprites_settings(all);
    if (CLICK.oc == 0) {
        sfRenderWindow_drawSprite(WINDOW, IMG[11].sprite, NULL);
    }
    if (CLICK.isClicked_P1 || CLICK.isClicked_P2 || CLICK.isClicked_P3) {
        CLICK.infos = true;
        init_infos_player(all);
        sfRenderWindow_drawSprite(WINDOW, IMG[9].sprite, NULL);
    }
    if (CLICK.isClicked_info) {
        sfRenderWindow_drawSprite(WINDOW, IMG[19].sprite, NULL);
    }
}
