/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_plus
*/

#include "../../../include/rpg.h"

void origin_plus (global_t *all)
{
    sfSprite_setTexture(IMG[7].sprite, IMG[7].texture1, sfFalse);
    sfSprite_setScale(IMG[7].sprite, IMG[7].scale);
    sfSprite_setPosition(IMG[7].sprite, IMG[7].position);
}

void hover_plus (global_t *all)
{
    sfSprite_setTexture(IMG[7].sprite, IMG[7].texture2, sfFalse);
    sfSprite_setScale(IMG[7].sprite, IMG[7].scale);
    sfSprite_setPosition(IMG[7].sprite, IMG[7].position);
}

void clicked_plus (global_t *all)
{
    sfSprite_setTexture(IMG[7].sprite, IMG[7].texture3, sfFalse);
    sfSprite_setScale(IMG[7].sprite, IMG[7].scale);
    sfSprite_setPosition(IMG[7].sprite, IMG[7].position);
}

void if_click_plus (global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[7].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_plus(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            clicked_plus(all);
        }
    } else {
        origin_plus(all);
    }
}
