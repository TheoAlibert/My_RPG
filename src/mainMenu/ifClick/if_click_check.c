/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_check
*/

#include "../../../include/rpg.h"

void origin_check (global_t *all)
{
    sfSprite_setTexture(IMG[16].sprite, IMG[16].texture1, sfFalse);
    sfSprite_setScale(IMG[16].sprite, IMG[16].scale);
    sfSprite_setPosition(IMG[16].sprite, IMG[16].position);
}

void hover_check (global_t *all)
{
    sfSprite_setTexture(IMG[16].sprite, IMG[16].texture2, sfFalse);
    sfSprite_setScale(IMG[16].sprite, IMG[16].scale);
    sfSprite_setPosition(IMG[16].sprite, IMG[16].position);
}

void clicked_check (global_t *all)
{
    sfSprite_setTexture(IMG[16].sprite, IMG[16].texture3, sfFalse);
    sfSprite_setScale(IMG[16].sprite, IMG[16].scale);
    sfSprite_setPosition(IMG[16].sprite, IMG[16].position);
}

void if_click_check (global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[16].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_check(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            clicked_check(all);
        }
    } else {
        origin_check(all);
    }
}
