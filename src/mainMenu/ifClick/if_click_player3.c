/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-8-1-myrpg-remy.canal
** File description:
** if_click_player3
*/

#include "../../../include/rpg.h"

void origin_player3 (global_t *all)
{
    sfSprite_setTexture(IMG[8].sprite, IMG[8].texture1, sfFalse);
    sfSprite_setScale(IMG[8].sprite, IMG[8].scale);
    sfSprite_setPosition(IMG[8].sprite, IMG[8].position);
}

void p3_is_clicked(global_t *all)
{
    CLICK.isClicked_P3 = true;
}

void if_click_player3 (global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[8].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            p3_is_clicked(all);
        }
    } else {
        origin_player3(all);
    }
}
