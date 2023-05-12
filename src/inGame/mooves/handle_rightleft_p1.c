/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-21-myrpg-remy.canal
** File description:
** handle_keypress
*/

#include "../../../include/rpg.h"

void animated_right_p1 (global_t *all)
{
    GUY[0].elapsed = sfClock_getElapsedTime(GUY[0].clock);
    if (sfTime_asSeconds(GUY[0].elapsed) >= GUY[0].frameTime) {
        GUY[0].rect.left = GUY[0].currentFrame * GUY[0].frameWidth;
        sfSprite_setTextureRect(IMG[21].sprite, GUY[0].rect);
        GUY[0].currentFrame = (GUY[0].currentFrame + 1) % GUY[0].frameCount;
        sfClock_restart(GUY[0].clock);
    }
}

void init_animated_right_p1 (global_t *all)
{
    GUY[0].currentFrame = 0;
    GUY[0].frameCount = 3;
    GUY[0].frameWidth = 65;
    GUY[0].frameHeight = 110;
    GUY[0].rect.left = 0;
    GUY[0].rect.top = 335;
    GUY[0].rect.width = GUY[0].frameWidth;
    GUY[0].rect.height = GUY[0].frameHeight;
    GUY[0].clock = sfClock_create();
    GUY[0].frameTime = 0.1f;
}

void animated_left_p1 (global_t *all)
{
    GUY[1].elapsed = sfClock_getElapsedTime(GUY[1].clock);
    if (sfTime_asSeconds(GUY[1].elapsed) >= GUY[1].frameTime) {
        GUY[1].rect.left = GUY[1].currentFrame * GUY[1].frameWidth;
        sfSprite_setTextureRect(IMG[21].sprite, GUY[1].rect);
        GUY[1].currentFrame = (GUY[1].currentFrame + 1) % GUY[1].frameCount;
        sfClock_restart(GUY[1].clock);
    }
}

void init_animated_left_p1 (global_t *all)
{
    GUY[1].currentFrame = 0;
    GUY[1].frameCount = 3;
    GUY[1].frameWidth = 65;
    GUY[1].frameHeight = 110;
    GUY[1].rect.left = 0;
    GUY[1].rect.top = 225;
    GUY[1].rect.width = GUY[1].frameWidth;
    GUY[1].rect.height = GUY[1].frameHeight;
    GUY[1].clock = sfClock_create();
    GUY[1].frameTime = 0.1f;
}

void handle_rightleft_p1 (global_t *all)
{
    if (EVENT.key.code == sfKeyRight && all->colision.stopright != 1) {
        IMG[21].position.x += 20;
        sfSprite_setPosition(IMG[21].sprite, IMG[21].position);
        animated_right_p1(all);
    }
    if (EVENT.key.code == sfKeyLeft && all->colision.stopleft != 1) {
        IMG[21].position.x -= 20;
        sfSprite_setPosition(IMG[21].sprite, IMG[21].position);
        animated_left_p1(all);
    }
}
