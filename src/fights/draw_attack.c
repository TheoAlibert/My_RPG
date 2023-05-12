/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** draw_attack
*/

#include "../../include/rpg.h"

void draw_sprite_attack_button (global_t *all)
{
    if (ATK.isPunch) {
        sfRenderWindow_drawSprite(WINDOW, IMG[51].sprite, NULL);
    }
    if (ATK.isFire) {
        sfRenderWindow_drawSprite(WINDOW, IMG[52].sprite, NULL);
    }
    if (ATK.isLightning) {
        sfRenderWindow_drawSprite(WINDOW, IMG[53].sprite, NULL);
    }
    if (ATK.isGrass) {
        sfRenderWindow_drawSprite(WINDOW, IMG[54].sprite, NULL);
    }
    if (ATK.isWater) {
        sfRenderWindow_drawSprite(WINDOW, IMG[55].sprite, NULL);
    }
}
