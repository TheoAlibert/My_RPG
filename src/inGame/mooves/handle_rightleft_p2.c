/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-21-myrpg-remy.canal
** File description:
** handle_keypress
*/

#include "../../../include/rpg.h"

void animated_right_p2 (global_t *all)
{
    GUY[6].elapsed = sfClock_getElapsedTime(GUY[6].clock);
    if (sfTime_asSeconds(GUY[6].elapsed) >= GUY[6].frameTime) {
        GUY[6].rect.left = GUY[6].currentFrame * GUY[6].frameWidth + 285;
        sfSprite_setTextureRect(IMG[21].sprite, GUY[6].rect);
        GUY[6].currentFrame = (GUY[6].currentFrame + 1) % GUY[6].frameCount;
        sfClock_restart(GUY[6].clock);
    }
}

void init_animated_right_p2 (global_t *all)
{
    GUY[6].currentFrame = 0;
    GUY[6].frameCount = 3;
    GUY[6].frameWidth = 65;
    GUY[6].frameHeight = 110;
    GUY[6].rect.left = 285;
    GUY[6].rect.top = 335;
    GUY[6].rect.width = GUY[6].frameWidth;
    GUY[6].rect.height = GUY[6].frameHeight;
    GUY[6].clock = sfClock_create();
    GUY[6].frameTime = 0.1f;
}

void animated_left_p2 (global_t *all)
{
    GUY[7].elapsed = sfClock_getElapsedTime(GUY[7].clock);
    if (sfTime_asSeconds(GUY[7].elapsed) >= GUY[7].frameTime) {
        GUY[7].rect.left = GUY[7].currentFrame * GUY[7].frameWidth + 285;
        sfSprite_setTextureRect(IMG[21].sprite, GUY[7].rect);
        GUY[7].currentFrame = (GUY[7].currentFrame + 1) % GUY[7].frameCount;
        sfClock_restart(GUY[7].clock);
    }
}

void init_animated_left_p2 (global_t *all)
{
    GUY[7].currentFrame = 0;
    GUY[7].frameCount = 3;
    GUY[7].frameWidth = 65;
    GUY[7].frameHeight = 110;
    GUY[7].rect.left = 285;
    GUY[7].rect.top = 225;
    GUY[7].rect.width = GUY[7].frameWidth;
    GUY[7].rect.height = GUY[7].frameHeight;
    GUY[7].clock = sfClock_create();
    GUY[7].frameTime = 0.1f;
}

void handle_rightleft_p2 (global_t *all)
{
    if (EVENT.key.code == sfKeyRight && all->colision.stopright != 1) {
        IMG[21].position.x += 20;
        sfSprite_setPosition(IMG[21].sprite, IMG[21].position);
        animated_right_p2(all);
    }
    if (EVENT.key.code == sfKeyLeft && all->colision.stopleft != 1) {
        IMG[21].position.x -= 20;
        sfSprite_setPosition(IMG[21].sprite, IMG[21].position);
        animated_left_p2(all);
    }
}
