/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_minus
*/

#include "../../../include/rpg.h"

void origin_minus2 (global_t *all)
{
    sfSprite_setTexture(IMG[12].sprite, IMG[12].texture1, sfFalse);
    sfSprite_setScale(IMG[12].sprite, IMG[12].scale);
    sfSprite_setPosition(IMG[12].sprite, IMG[12].position);
}

void hover_minus2 (global_t *all)
{
    sfSprite_setTexture(IMG[12].sprite, IMG[12].texture2, sfFalse);
    sfSprite_setScale(IMG[12].sprite, IMG[12].scale);
    sfSprite_setPosition(IMG[12].sprite, IMG[12].position);
}

void clicked_minus2 (global_t *all)
{
    sfSprite_setTexture(IMG[12].sprite, IMG[12].texture3, sfFalse);
    sfSprite_setScale(IMG[12].sprite, IMG[12].scale);
    sfSprite_setPosition(IMG[12].sprite, IMG[12].position);
}

void if_click_minus2 (global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[12].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_minus2(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            clicked_minus2(all);
        }
    } else {
        origin_minus2(all);
    }
}
