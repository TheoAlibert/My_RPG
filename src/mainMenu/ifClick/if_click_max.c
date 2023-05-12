/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_max
*/

#include "../../../include/rpg.h"

void origin_max (global_t *all)
{
    sfSprite_setTexture(IMG[15].sprite, IMG[15].texture1, sfFalse);
    sfSprite_setScale(IMG[15].sprite, IMG[15].scale);
    sfSprite_setPosition(IMG[15].sprite, IMG[15].position);
}

void hover_max (global_t *all)
{
    sfSprite_setTexture(IMG[15].sprite, IMG[15].texture2, sfFalse);
    sfSprite_setScale(IMG[15].sprite, IMG[15].scale);
    sfSprite_setPosition(IMG[15].sprite, IMG[15].position);
}

void clicked_max (global_t *all)
{
    sfSprite_setTexture(IMG[15].sprite, IMG[15].texture3, sfFalse);
    sfSprite_setScale(IMG[15].sprite, IMG[15].scale);
    sfSprite_setPosition(IMG[15].sprite, IMG[15].position);
}

void if_click_max (global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[15].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_max(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            clicked_max(all);
        }
    } else {
        origin_max(all);
    }
}
