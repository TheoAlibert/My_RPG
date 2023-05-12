/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_minus
*/

#include "../../../include/rpg.h"

void origin_minus (global_t *all)
{
    sfSprite_setTexture(IMG[6].sprite, IMG[6].texture1, sfFalse);
    sfSprite_setScale(IMG[6].sprite, IMG[6].scale);
    sfSprite_setPosition(IMG[6].sprite, IMG[6].position);
}

void hover_minus (global_t *all)
{
    sfSprite_setTexture(IMG[6].sprite, IMG[6].texture2, sfFalse);
    sfSprite_setScale(IMG[6].sprite, IMG[6].scale);
    sfSprite_setPosition(IMG[6].sprite, IMG[6].position);
}

void clicked_minus (global_t *all)
{
    sfSprite_setTexture(IMG[6].sprite, IMG[6].texture3, sfFalse);
    sfSprite_setScale(IMG[6].sprite, IMG[6].scale);
    sfSprite_setPosition(IMG[6].sprite, IMG[6].position);
}

void if_click_minus (global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[6].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_minus(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            clicked_minus(all);
        }
    } else {
        origin_minus(all);
    }
}
