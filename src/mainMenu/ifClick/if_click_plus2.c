/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_plus
*/

#include "../../../include/rpg.h"

void origin_plus2 (global_t *all)
{
    sfSprite_setTexture(IMG[13].sprite, IMG[13].texture1, sfFalse);
    sfSprite_setScale(IMG[13].sprite, IMG[13].scale);
    sfSprite_setPosition(IMG[13].sprite, IMG[13].position);
}

void hover_plus2 (global_t *all)
{
    sfSprite_setTexture(IMG[13].sprite, IMG[13].texture2, sfFalse);
    sfSprite_setScale(IMG[13].sprite, IMG[13].scale);
    sfSprite_setPosition(IMG[13].sprite, IMG[13].position);
}

void clicked_plus2 (global_t *all)
{
    sfSprite_setTexture(IMG[13].sprite, IMG[13].texture3, sfFalse);
    sfSprite_setScale(IMG[13].sprite, IMG[13].scale);
    sfSprite_setPosition(IMG[13].sprite, IMG[13].position);
}

void if_click_plus2 (global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[13].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_plus2(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            clicked_plus2(all);
        }
    } else {
        origin_plus2(all);
    }
}
