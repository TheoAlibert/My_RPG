/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_info
*/

#include "../../../include/rpg.h"

void origin_info (global_t *all)
{
    sfSprite_setTexture(IMG[18].sprite, IMG[18].texture1, sfFalse);
    sfSprite_setScale(IMG[18].sprite, IMG[18].scale);
    sfSprite_setPosition(IMG[18].sprite, IMG[18].position);
}

void hover_info (global_t *all)
{
    sfSprite_setTexture(IMG[18].sprite, IMG[18].texture2, sfFalse);
    sfSprite_setScale(IMG[18].sprite, IMG[18].scale);
    sfSprite_setPosition(IMG[18].sprite, IMG[18].position);
}

void clicked_info (global_t *all)
{
    sfSprite_setTexture(IMG[18].sprite, IMG[18].texture3, sfFalse);
    sfSprite_setScale(IMG[18].sprite, IMG[18].scale);
    sfSprite_setPosition(IMG[18].sprite, IMG[18].position);
}

void close_infos_menu(global_t *all)
{
    if (CLICK.isClicked_info) {
        CLICK.isClicked_info = false;
    } else {
        CLICK.isClicked_info = true;
    }
}

void if_click_info (global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[18].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_info(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            clicked_info(all);
            close_infos_menu(all);
        }
    } else {
        origin_info(all);
    }
}
