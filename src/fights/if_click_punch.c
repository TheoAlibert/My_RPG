/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_punch
*/

#include "../../include/rpg.h"

void origin_punch (global_t *all)
{
    sfSprite_setTexture(IMG[51].sprite, IMG[51].texture1, sfFalse);
    sfSprite_setScale(IMG[51].sprite, IMG[51].scale);
    sfSprite_setPosition(IMG[51].sprite, IMG[51].position);
}

void hover_punch (global_t *all)
{
    sfSprite_setTexture(IMG[51].sprite, IMG[51].texture2, sfFalse);
    sfSprite_setScale(IMG[51].sprite, IMG[51].scale);
    sfSprite_setPosition(IMG[51].sprite, IMG[51].position);
}

void clicked_punch (global_t *all)
{
    sfSprite_setTexture(IMG[51].sprite, IMG[51].texture3, sfFalse);
    sfSprite_setScale(IMG[51].sprite, IMG[51].scale);
    sfSprite_setPosition(IMG[51].sprite, IMG[51].position);
}

void if_click_punch(global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[51].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_punch(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            clicked_punch(all);
            display_window_map1v2(all);
        }
    } else {
        origin_punch(all);
    }
}
