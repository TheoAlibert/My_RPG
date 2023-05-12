/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** draw_sprites_winmap
*/

#include "../../include/rpg.h"

void draw_sprites_map1v2 (global_t *all)
{
    sfRenderWindow_drawSprite(WINDOW, IMG[20].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[29].sprite, NULL);
    if (CLICK.isClicked_P1 || CLICK.isClicked_P2) {
        sfRenderWindow_drawSprite(WINDOW, IMG[21].sprite, NULL);
    }
    sfRenderWindow_drawSprite(WINDOW, IMG[35].sprite, NULL);
}

void draw_sprites_map2v2 (global_t *all)
{
    sfRenderWindow_drawSprite(WINDOW, IMG[24].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[29].sprite, NULL);
    if (CLICK.isClicked_P1 || CLICK.isClicked_P2) {
        sfRenderWindow_drawSprite(WINDOW, IMG[21].sprite, NULL);
    }
    sfRenderWindow_drawSprite(WINDOW, IMG[35].sprite, NULL);
}

void draw_sprites_map3v2 (global_t *all)
{
    sfRenderWindow_drawSprite(WINDOW, IMG[25].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[29].sprite, NULL);
    if (CLICK.isClicked_P1 || CLICK.isClicked_P2) {
        sfRenderWindow_drawSprite(WINDOW, IMG[21].sprite, NULL);
    }
    sfRenderWindow_drawSprite(WINDOW, IMG[35].sprite, NULL);
}

void draw_sprites_map4v2 (global_t *all)
{
    sfRenderWindow_drawSprite(WINDOW, IMG[26].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[29].sprite, NULL);
    if (CLICK.isClicked_P1 || CLICK.isClicked_P2) {
        sfRenderWindow_drawSprite(WINDOW, IMG[21].sprite, NULL);
    }
    sfRenderWindow_drawSprite(WINDOW, IMG[35].sprite, NULL);
}

void draw_sprites_map_bossv2 (global_t *all)
{
    sfRenderWindow_drawSprite(WINDOW, IMG[27].sprite, NULL);
    if (CLICK.isClicked_P1 || CLICK.isClicked_P2) {
        sfRenderWindow_drawSprite(WINDOW, IMG[21].sprite, NULL);
    }
    sfRenderWindow_drawSprite(WINDOW, IMG[35].sprite, NULL);
}
