/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_punch
*/

#include "../../include/rpg.h"

void origin_water (global_t *all)
{
    sfSprite_setTexture(IMG[55].sprite, IMG[55].texture1, sfFalse);
    sfSprite_setScale(IMG[55].sprite, IMG[55].scale);
    sfSprite_setPosition(IMG[55].sprite, IMG[55].position);
}

void hover_water (global_t *all)
{
    sfSprite_setTexture(IMG[55].sprite, IMG[55].texture2, sfFalse);
    sfSprite_setScale(IMG[55].sprite, IMG[55].scale);
    sfSprite_setPosition(IMG[55].sprite, IMG[55].position);
}

void clicked_water (global_t *all)
{
    sfSprite_setTexture(IMG[55].sprite, IMG[55].texture3, sfFalse);
    sfSprite_setScale(IMG[55].sprite, IMG[55].scale);
    sfSprite_setPosition(IMG[55].sprite, IMG[55].position);
}

void if_click_water(global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[55].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_water(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            clicked_water(all);
            display_splash_end(all);
        }
    } else {
        origin_water(all);
    }
}
