/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_null
*/

#include "../../../include/rpg.h"

void origin_null (global_t *all)
{
    sfSprite_setTexture(IMG[17].sprite, IMG[17].texture1, sfFalse);
    sfSprite_setScale(IMG[17].sprite, IMG[17].scale);
    sfSprite_setPosition(IMG[17].sprite, IMG[17].position);
}

void hover_null (global_t *all)
{
    sfSprite_setTexture(IMG[17].sprite, IMG[17].texture2, sfFalse);
    sfSprite_setScale(IMG[17].sprite, IMG[17].scale);
    sfSprite_setPosition(IMG[17].sprite, IMG[17].position);
}

void clicked_null (global_t *all)
{
    sfSprite_setTexture(IMG[17].sprite, IMG[17].texture3, sfFalse);
    sfSprite_setScale(IMG[17].sprite, IMG[17].scale);
    sfSprite_setPosition(IMG[17].sprite, IMG[17].position);
}

void if_click_null (global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[17].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_null(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            clicked_null(all);
        }
    } else {
        origin_null(all);
    }
}
