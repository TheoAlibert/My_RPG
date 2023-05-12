/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_information
*/

#include "../../../../include/rpg.h"

void origin_information (global_t *all)
{
    sfSprite_setTexture(IMG[45].sprite, IMG[45].texture1, sfFalse);
    sfSprite_setScale(IMG[45].sprite, IMG[45].scale);
    sfSprite_setPosition(IMG[45].sprite, IMG[45].position);
}

void hover_information (global_t *all)
{
    sfSprite_setTexture(IMG[45].sprite, IMG[45].texture2, sfFalse);
    sfSprite_setScale(IMG[45].sprite, IMG[45].scale);
    sfSprite_setPosition(IMG[45].sprite, IMG[45].position);
}

void clicked_information (global_t *all)
{
    sfSprite_setTexture(IMG[45].sprite, IMG[45].texture3, sfFalse);
    sfSprite_setScale(IMG[45].sprite, IMG[45].scale);
    sfSprite_setPosition(IMG[45].sprite, IMG[45].position);
}

void close_information_menu(global_t *all)
{
    if (CLICK.isClicked_information) {
        CLICK.isClicked_information = false;
    } else {
        CLICK.isClicked_information = true;
    }
}

void if_click_information(global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[45].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_information(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            close_information_menu(all);
            clicked_information(all);
        }
    } else {
        origin_information(all);
    }
}
