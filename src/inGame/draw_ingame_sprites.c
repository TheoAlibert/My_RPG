/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** draw_ingame_sprites
*/

#include "../../include/rpg.h"

void draw_sprites_map1 (global_t *all)
{
    sfRenderWindow_drawSprite(WINDOW, IMG[20].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[29].sprite, NULL);
    if (CLICK.isClicked_P1 || CLICK.isClicked_P2) {
        sfRenderWindow_drawSprite(WINDOW, IMG[21].sprite, NULL);
    }
    sfRenderWindow_drawSprite(WINDOW, IMG[30].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[35].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[36].sprite, NULL);
}

void draw_sprites_map2 (global_t *all)
{
    sfRenderWindow_drawSprite(WINDOW, IMG[24].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[29].sprite, NULL);
    if (CLICK.isClicked_P1 || CLICK.isClicked_P2) {
        sfRenderWindow_drawSprite(WINDOW, IMG[21].sprite, NULL);
    }
    sfRenderWindow_drawSprite(WINDOW, IMG[31].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[35].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[37].sprite, NULL);
}

void draw_sprites_map3 (global_t *all)
{
    sfRenderWindow_drawSprite(WINDOW, IMG[25].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[29].sprite, NULL);
    if (CLICK.isClicked_P1 || CLICK.isClicked_P2) {
        sfRenderWindow_drawSprite(WINDOW, IMG[21].sprite, NULL);
    }
    sfRenderWindow_drawSprite(WINDOW, IMG[32].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[35].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[38].sprite, NULL);
}

void draw_sprites_map4 (global_t *all)
{
    sfRenderWindow_drawSprite(WINDOW, IMG[26].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[29].sprite, NULL);
    if (CLICK.isClicked_P1 || CLICK.isClicked_P2) {
        sfRenderWindow_drawSprite(WINDOW, IMG[21].sprite, NULL);
    }
    sfRenderWindow_drawSprite(WINDOW, IMG[33].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[35].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[39].sprite, NULL);
}

void draw_sprites_map_boss (global_t *all)
{
    sfRenderWindow_drawSprite(WINDOW, IMG[27].sprite, NULL);
    if (CLICK.isClicked_P1 || CLICK.isClicked_P2) {
        sfRenderWindow_drawSprite(WINDOW, IMG[21].sprite, NULL);
    }
    sfRenderWindow_drawSprite(WINDOW, IMG[34].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[35].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[40].sprite, NULL);
}
