/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_player3_is_buy
*/

#include "../../include/rpg.h"

void p3_buy (global_t *all)
{
    sfSprite_setTexture(IMG[8].sprite, IMG[8].texture2, sfFalse);
    sfSprite_setScale(IMG[8].sprite, IMG[8].scale);
    sfSprite_setPosition(IMG[8].sprite, IMG[8].position);
}

void p3_buy_hover (global_t *all)
{
    sfSprite_setTexture(IMG[8].sprite, IMG[8].texture3, sfFalse);
    sfSprite_setScale(IMG[8].sprite, IMG[8].scale);
    sfSprite_setPosition(IMG[8].sprite, IMG[8].position);
}

void erase_unbuy_p3 (global_t *all)
{
    sfFloatRect p3Bounds = sfSprite_getGlobalBounds(IMG[8].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&p3Bounds, mouseX, mouseY)) {
        p3_buy_hover(all);
        CLICK.oc++;
    } else {
        p3_buy(all);
        CLICK.oc++;
    }
}
