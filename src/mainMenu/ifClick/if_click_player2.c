/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_player2
*/

#include "../../../include/rpg.h"

void origin_player2 (global_t *all)
{
    sfSprite_setTexture(IMG[2].sprite, IMG[2].texture1, sfFalse);
    sfSprite_setScale(IMG[2].sprite, IMG[2].scale);
    sfSprite_setPosition(IMG[2].sprite, IMG[2].position);
}

void hover_player2 (global_t *all)
{
    sfSprite_setTexture(IMG[2].sprite, IMG[2].texture2, sfFalse);
    sfSprite_setScale(IMG[2].sprite, IMG[2].scale);
    sfSprite_setPosition(IMG[2].sprite, IMG[2].position);
}

void clicked_player2 (global_t *all)
{
    IMG[2].scale.x = 1;
    IMG[2].scale.y = 1;
    IMG[2].position.x = 819;
    IMG[2].position.y = 566;
    sfSprite_setTexture(IMG[2].sprite, IMG[2].texture3, sfTrue);
    sfSprite_setScale(IMG[2].sprite, IMG[2].scale);
    sfSprite_setPosition(IMG[2].sprite, IMG[2].position);
    IMG[2].scale.x = 1;
    IMG[2].scale.y = 1;
    IMG[2].position.x = 850;
    IMG[2].position.y = 650;
}

void from_p1_to_p2(global_t *all)
{
    if (CLICK.isClicked_P1) {
        CLICK.isClicked_P1 = false;
    }
    if (CLICK.isClicked_P3) {
        CLICK.isClicked_P3 = false;
    }
    CLICK.isClicked_P2 = true;
}

void if_click_player2 (global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[2].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_player2(all);
        if (EVENT.type == sfEvtMouseButtonPressed) {
            from_p1_to_p2(all);
        }
    } else {
        if (CLICK.isClicked_P2) {
            clicked_player2(all);
        } else {
            origin_player2(all);
        }
    }
}
