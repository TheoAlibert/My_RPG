/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_close
*/

#include "../../../../include/rpg.h"

void origin_close (global_t *all)
{
    sfSprite_setTexture(IMG[46].sprite, IMG[46].texture1, sfFalse);
    sfSprite_setScale(IMG[46].sprite, IMG[46].scale);
    sfSprite_setPosition(IMG[46].sprite, IMG[46].position);
}

void hover_close (global_t *all)
{
    sfSprite_setTexture(IMG[46].sprite, IMG[46].texture2, sfFalse);
    sfSprite_setScale(IMG[46].sprite, IMG[46].scale);
    sfSprite_setPosition(IMG[46].sprite, IMG[46].position);
}

void clicked_close (global_t *all)
{
    sfSprite_setTexture(IMG[46].sprite, IMG[46].texture3, sfFalse);
    sfSprite_setScale(IMG[46].sprite, IMG[46].scale);
    sfSprite_setPosition(IMG[46].sprite, IMG[46].position);
}

void if_click_close(global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[46].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_close(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            clicked_close(all);
            sfRenderWindow_close(WINDOW);
        }
    } else {
        origin_close(all);
    }
}
