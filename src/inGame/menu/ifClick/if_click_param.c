/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_param
*/

#include "../../../../include/rpg.h"

void origin_param (global_t *all)
{
    sfSprite_setTexture(IMG[44].sprite, IMG[44].texture1, sfFalse);
    sfSprite_setScale(IMG[44].sprite, IMG[44].scale);
    sfSprite_setPosition(IMG[44].sprite, IMG[44].position);
}

void hover_param (global_t *all)
{
    sfSprite_setTexture(IMG[44].sprite, IMG[44].texture2, sfFalse);
    sfSprite_setScale(IMG[44].sprite, IMG[44].scale);
    sfSprite_setPosition(IMG[44].sprite, IMG[44].position);
}

void clicked_param (global_t *all)
{
    sfSprite_setTexture(IMG[44].sprite, IMG[44].texture3, sfFalse);
    sfSprite_setScale(IMG[44].sprite, IMG[44].scale);
    sfSprite_setPosition(IMG[44].sprite, IMG[44].position);
}

void close_param_menu(global_t *all)
{
    if (CLICK.isClicked_param) {
        CLICK.isClicked_param = false;
    } else {
        CLICK.isClicked_param = true;
    }
}

void if_click_param(global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[44].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_param(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            close_param_menu(all);
            clicked_param(all);
        }
    } else {
        if (CLICK.isClicked_param) {
            handle_volume_settings(all);
        } else {
            origin_param(all);
        }
    }
}
