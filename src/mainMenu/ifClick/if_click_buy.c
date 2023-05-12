/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_buy
*/

#include "../../../include/rpg.h"

void origin_buy (global_t *all)
{
    sfSprite_setTexture(IMG[11].sprite, IMG[11].texture1, sfFalse);
    sfSprite_setScale(IMG[11].sprite, IMG[11].scale);
    sfSprite_setPosition(IMG[11].sprite, IMG[11].position);
}

void hover_buy (global_t *all)
{
    sfSprite_setTexture(IMG[11].sprite, IMG[11].texture2, sfFalse);
    sfSprite_setScale(IMG[11].sprite, IMG[11].scale);
    sfSprite_setPosition(IMG[11].sprite, IMG[11].position);
}

void clicked_buy (global_t *all)
{
    sfSprite_setTexture(IMG[11].sprite, IMG[11].texture3, sfFalse);
    sfSprite_setScale(IMG[11].sprite, IMG[11].scale);
    sfSprite_setPosition(IMG[11].sprite, IMG[11].position);
}

void if_buy(global_t *all)
{
    if (CLICK.isClicked_buy) {
        CLICK.isClicked_buy = false;
    } else {
        CLICK.isClicked_buy = true;
    }
}

void if_click_buy (global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[11].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_buy(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            if_buy(all);
            clicked_buy(all);
        }
    } else {
        if (CLICK.isClicked_buy) {
            erase_unbuy_p3(all);
        } else {
            origin_buy(all);
        }
    }
}
