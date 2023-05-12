/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_settings
*/

#include "../../../include/rpg.h"

void origin_settings (global_t *all)
{
    sfSprite_setTexture(IMG[5].sprite, IMG[5].texture1, sfFalse);
    sfSprite_setScale(IMG[5].sprite, IMG[5].scale);
    sfSprite_setPosition(IMG[5].sprite, IMG[5].position);
}

void hover_settings (global_t *all)
{
    sfSprite_setTexture(IMG[5].sprite, IMG[5].texture2, sfFalse);
    sfSprite_setScale(IMG[5].sprite, IMG[5].scale);
    sfSprite_setPosition(IMG[5].sprite, IMG[5].position);
}

void clicked_settings (global_t *all)
{
    sfSprite_setTexture(IMG[5].sprite, IMG[5].texture3, sfFalse);
    sfSprite_setScale(IMG[5].sprite, IMG[5].scale);
    sfSprite_setPosition(IMG[5].sprite, IMG[5].position);
}

void close_settings_menu(global_t *all)
{
    if (CLICK.isClicked_settings) {
        CLICK.isClicked_settings = false;
    } else {
        CLICK.isClicked_settings = true;
    }
}

void if_click_settings (global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[5].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_settings(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            close_settings_menu(all);
            clicked_settings(all);
        }
    } else {
        if (CLICK.isClicked_settings) {
            handle_volume_settings(all);
        } else {
            origin_settings(all);
        }
    }
}
