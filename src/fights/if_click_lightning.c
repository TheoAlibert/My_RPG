/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_punch
*/

#include "../../include/rpg.h"

void origin_lightning (global_t *all)
{
    sfSprite_setTexture(IMG[53].sprite, IMG[53].texture1, sfFalse);
    sfSprite_setScale(IMG[53].sprite, IMG[53].scale);
    sfSprite_setPosition(IMG[53].sprite, IMG[53].position);
}

void hover_lightning (global_t *all)
{
    sfSprite_setTexture(IMG[53].sprite, IMG[53].texture2, sfFalse);
    sfSprite_setScale(IMG[53].sprite, IMG[53].scale);
    sfSprite_setPosition(IMG[53].sprite, IMG[53].position);
}

void clicked_lightning (global_t *all)
{
    sfSprite_setTexture(IMG[53].sprite, IMG[53].texture3, sfFalse);
    sfSprite_setScale(IMG[53].sprite, IMG[53].scale);
    sfSprite_setPosition(IMG[53].sprite, IMG[53].position);
}

void if_click_lightning(global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[53].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_lightning(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            clicked_lightning(all);
            display_window_map3v2(all);
        }
    } else {
        origin_lightning(all);
    }
}
