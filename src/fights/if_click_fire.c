/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_punch
*/

#include "../../include/rpg.h"

void origin_fire (global_t *all)
{
    sfSprite_setTexture(IMG[52].sprite, IMG[52].texture1, sfFalse);
    sfSprite_setScale(IMG[52].sprite, IMG[52].scale);
    sfSprite_setPosition(IMG[52].sprite, IMG[52].position);
}

void hover_fire (global_t *all)
{
    sfSprite_setTexture(IMG[52].sprite, IMG[52].texture2, sfFalse);
    sfSprite_setScale(IMG[52].sprite, IMG[52].scale);
    sfSprite_setPosition(IMG[52].sprite, IMG[52].position);
}

void clicked_fire (global_t *all)
{
    sfSprite_setTexture(IMG[52].sprite, IMG[52].texture3, sfFalse);
    sfSprite_setScale(IMG[52].sprite, IMG[52].scale);
    sfSprite_setPosition(IMG[52].sprite, IMG[52].position);
}

void if_click_fire(global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[52].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_fire(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            clicked_fire(all);
            display_window_map2v2(all);
        }
    } else {
        origin_fire(all);
    }
}
