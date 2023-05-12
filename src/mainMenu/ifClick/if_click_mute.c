/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_mute
*/

#include "../../../include/rpg.h"

void origin_mute (global_t *all)
{
    sfSprite_setTexture(IMG[14].sprite, IMG[14].texture1, sfFalse);
    sfSprite_setScale(IMG[14].sprite, IMG[14].scale);
    sfSprite_setPosition(IMG[14].sprite, IMG[14].position);
}

void hover_mute (global_t *all)
{
    sfSprite_setTexture(IMG[14].sprite, IMG[14].texture2, sfFalse);
    sfSprite_setScale(IMG[14].sprite, IMG[14].scale);
    sfSprite_setPosition(IMG[14].sprite, IMG[14].position);
}

void clicked_mute (global_t *all)
{
    sfSprite_setTexture(IMG[14].sprite, IMG[14].texture3, sfFalse);
    sfSprite_setScale(IMG[14].sprite, IMG[14].scale);
    sfSprite_setPosition(IMG[14].sprite, IMG[14].position);
}

void if_click_mute (global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[14].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_mute(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            clicked_mute(all);
        }
    } else {
        origin_mute(all);
    }
}
