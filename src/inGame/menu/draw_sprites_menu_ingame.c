/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** draw_sprites_menu_ingame
*/

#include "../../../include/rpg.h"

void draw_sprites1_menu_ingame (global_t * all)
{
    if (CLICK.isClicked_pause) {
        sfRenderWindow_drawSprite(WINDOW, IMG[43].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMG[44].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMG[45].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, IMG[46].sprite, NULL);
    }
    if (CLICK.isClicked_param) {
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

void draw_sprites2_menu_ingame (global_t * all)
{
    if (CLICK.isClicked_information) {
        sfRenderWindow_drawSprite(WINDOW, IMG[49].sprite, NULL);
    }
    if (CLICK.isClicked_inventory) {
        sfRenderWindow_drawSprite(WINDOW, IMG[50].sprite, NULL);
        if (CLICK.isClicked_P1 || CLICK.isClicked_P2 || CLICK.isClicked_P3) {
            CLICK.infos = true;
            init_infos_player(all);
            sfRenderWindow_drawSprite(WINDOW, IMG[9].sprite, NULL);
        }
    }
}

void draw_sprites_menu_ingame (global_t * all)
{
    sfRenderWindow_drawSprite(WINDOW, IMG[42].sprite, NULL);
    draw_sprites1_menu_ingame(all);
    draw_sprites2_menu_ingame(all);
}
