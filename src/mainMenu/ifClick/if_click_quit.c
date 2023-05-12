/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_quit
*/

#include "../../../include/rpg.h"

void origin_quit (global_t *all)
{
    sfSprite_setTexture(IMG[4].sprite, IMG[4].texture1, sfFalse);
    sfSprite_setScale(IMG[4].sprite, IMG[4].scale);
    sfSprite_setPosition(IMG[4].sprite, IMG[4].position);
}

void hover_quit (global_t *all)
{
    sfSprite_setTexture(IMG[4].sprite, IMG[4].texture2, sfFalse);
    sfSprite_setScale(IMG[4].sprite, IMG[4].scale);
    sfSprite_setPosition(IMG[4].sprite, IMG[4].position);
}

void clicked_quit (global_t *all)
{
    sfSprite_setTexture(IMG[4].sprite, IMG[4].texture3, sfFalse);
    sfSprite_setScale(IMG[4].sprite, IMG[4].scale);
    sfSprite_setPosition(IMG[4].sprite, IMG[4].position);
}

void if_click_quit(global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[4].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_quit(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            clicked_quit(all);
            sfRenderWindow_close(WINDOW);
        }
    } else {
        origin_quit(all);
    }
}
