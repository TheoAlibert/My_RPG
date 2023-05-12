/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_pause
*/

#include "../../../../include/rpg.h"

void origin_pause (global_t *all)
{
    sfSprite_setTexture(IMG[42].sprite, IMG[42].texture1, sfFalse);
    sfSprite_setScale(IMG[42].sprite, IMG[42].scale);
    sfSprite_setPosition(IMG[42].sprite, IMG[42].position);
}

void hover_pause (global_t *all)
{
    sfSprite_setTexture(IMG[42].sprite, IMG[42].texture2, sfFalse);
    sfSprite_setScale(IMG[42].sprite, IMG[42].scale);
    sfSprite_setPosition(IMG[42].sprite, IMG[42].position);
}

void clicked_pause (global_t *all)
{
    sfSprite_setTexture(IMG[42].sprite, IMG[42].texture3, sfFalse);
    sfSprite_setScale(IMG[42].sprite, IMG[42].scale);
    sfSprite_setPosition(IMG[42].sprite, IMG[42].position);
}

void close_pause_menu(global_t *all)
{
    if (CLICK.isClicked_pause) {
        CLICK.isClicked_pause = false;
    } else {
        CLICK.isClicked_pause = true;
    }
}

void if_click_pause(global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[42].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if ((EVENT.type == sfEvtKeyPressed && EVENT.key.code == sfKeyEscape)) {
        close_pause_menu(all);
    }

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_pause(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            close_pause_menu(all);
            clicked_pause(all);
        }
    } else {
        origin_pause(all);
    }
}
