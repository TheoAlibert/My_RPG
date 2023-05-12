/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_home
*/

#include "../../../../include/rpg.h"

void origin_home (global_t *all)
{
    sfSprite_setTexture(IMG[43].sprite, IMG[43].texture1, sfFalse);
    sfSprite_setScale(IMG[43].sprite, IMG[43].scale);
    sfSprite_setPosition(IMG[43].sprite, IMG[43].position);
}

void hover_home (global_t *all)
{
    sfSprite_setTexture(IMG[43].sprite, IMG[43].texture2, sfFalse);
    sfSprite_setScale(IMG[43].sprite, IMG[43].scale);
    sfSprite_setPosition(IMG[43].sprite, IMG[43].position);
}

void clicked_home (global_t *all)
{
    sfSprite_setTexture(IMG[43].sprite, IMG[43].texture3, sfFalse);
    sfSprite_setScale(IMG[43].sprite, IMG[43].scale);
    sfSprite_setPosition(IMG[43].sprite, IMG[43].position);
}

void if_click_home(global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[43].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_home(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            clicked_home(all);
            display_window(all);
        }
    } else {
        origin_home(all);
    }
}
