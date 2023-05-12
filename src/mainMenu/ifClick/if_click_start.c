/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_start
*/

#include "../../../include/rpg.h"

void origin_start (global_t *all)
{
    sfSprite_setTexture(IMG[3].sprite, IMG[3].texture1, sfFalse);
    sfSprite_setScale(IMG[3].sprite, IMG[3].scale);
    sfSprite_setPosition(IMG[3].sprite, IMG[3].position);
}

void second_start (global_t *all)
{
    sfSprite_setTexture(IMG[3].sprite, IMG[3].texture2, sfFalse);
    sfSprite_setScale(IMG[3].sprite, IMG[3].scale);
    sfSprite_setPosition(IMG[3].sprite, IMG[3].position);
}

void third_start (global_t *all)
{
    sfSprite_setTexture(IMG[3].sprite, IMG[3].texture3, sfFalse);
    sfSprite_setScale(IMG[3].sprite, IMG[3].scale);
    sfSprite_setPosition(IMG[3].sprite, IMG[3].position);
}

void if_click_start (global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[3].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        second_start(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            CLICK.isIngame = true;
            init_ingame(all);
            third_start(all);
            set_pnj1(all);
            display_window_map1(all);
        }
    } else {
        origin_start(all);
    }
}
