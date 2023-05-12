/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_punch
*/

#include "../../include/rpg.h"

void origin_grass (global_t *all)
{
    sfSprite_setTexture(IMG[54].sprite, IMG[54].texture1, sfFalse);
    sfSprite_setScale(IMG[54].sprite, IMG[54].scale);
    sfSprite_setPosition(IMG[54].sprite, IMG[54].position);
}

void hover_grass (global_t *all)
{
    sfSprite_setTexture(IMG[54].sprite, IMG[54].texture2, sfFalse);
    sfSprite_setScale(IMG[54].sprite, IMG[54].scale);
    sfSprite_setPosition(IMG[54].sprite, IMG[54].position);
}

void clicked_grass (global_t *all)
{
    sfSprite_setTexture(IMG[54].sprite, IMG[54].texture3, sfFalse);
    sfSprite_setScale(IMG[54].sprite, IMG[54].scale);
    sfSprite_setPosition(IMG[54].sprite, IMG[54].position);
}

void if_click_grass(global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[54].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_grass(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            clicked_grass(all);
            display_window_map4v2(all);
        }
    } else {
        origin_grass(all);
    }
}
