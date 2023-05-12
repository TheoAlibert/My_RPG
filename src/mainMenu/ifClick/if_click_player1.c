/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_player1
*/

#include "../../../include/rpg.h"

void origin_player1 (global_t *all)
{
    sfSprite_setTexture(IMG[1].sprite, IMG[1].texture1, sfFalse);
    sfSprite_setScale(IMG[1].sprite, IMG[1].scale);
    sfSprite_setPosition(IMG[1].sprite, IMG[1].position);
}

void hover_player1 (global_t *all)
{
    sfSprite_setTexture(IMG[1].sprite, IMG[1].texture2, sfFalse);
    sfSprite_setScale(IMG[1].sprite, IMG[1].scale);
    sfSprite_setPosition(IMG[1].sprite, IMG[1].position);
}

void clicked_player1 (global_t *all)
{
    IMG[1].position.x = 640;
    IMG[1].position.y = 521;
    sfSprite_setTexture(IMG[1].sprite, IMG[1].texture3, sfTrue);
    sfSprite_setScale(IMG[1].sprite, IMG[1].scale);
    sfSprite_setPosition(IMG[1].sprite, IMG[1].position);
    IMG[1].position.x = 650;
    IMG[1].position.y = 650;
}

void from_p2_to_p1(global_t *all)
{
    if (CLICK.isClicked_P2) {
        CLICK.isClicked_P2 = false;
    }
    if (CLICK.isClicked_P3) {
        CLICK.isClicked_P3 = false;
    }
    CLICK.isClicked_P1 = true;
}

void if_click_player1(global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[1].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_player1(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            from_p2_to_p1(all);
        }
    } else {
        if (CLICK.isClicked_P1) {
            clicked_player1(all);
        } else {
            origin_player1(all);
        }
    }
}
