/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-21-myrpg-remy.canal
** File description:
** handle_keypress
*/

#include "../../../include/rpg.h"

void animated_up_p2 (global_t *all)
{
    GUY[4].elapsed = sfClock_getElapsedTime(GUY[4].clock);
    if (sfTime_asSeconds(GUY[4].elapsed) >= GUY[4].frameTime) {
        GUY[4].rect.left = GUY[4].currentFrame * GUY[4].frameWidth + 285;
        sfSprite_setTextureRect(IMG[21].sprite, GUY[4].rect);
        GUY[4].currentFrame = (GUY[4].currentFrame + 1) % GUY[4].frameCount;
        sfClock_restart(GUY[4].clock);
    }
}

void init_animated_up_p2 (global_t *all)
{
    GUY[4].currentFrame = 0;
    GUY[4].frameCount = 3;
    GUY[4].frameWidth = 65;
    GUY[4].frameHeight = 110;
    GUY[4].rect.left = 285;
    GUY[4].rect.top = 115;
    GUY[4].rect.width = GUY[4].frameWidth;
    GUY[4].rect.height = GUY[4].frameHeight;
    GUY[4].clock = sfClock_create();
    GUY[4].frameTime = 0.1f;
}

void animated_down_p2 (global_t *all)
{
    GUY[5].elapsed = sfClock_getElapsedTime(GUY[5].clock);
    if (sfTime_asSeconds(GUY[5].elapsed) >= GUY[5].frameTime) {
        GUY[5].rect.left = GUY[5].currentFrame * GUY[5].frameWidth + 285;
        sfSprite_setTextureRect(IMG[21].sprite, GUY[5].rect);
        GUY[5].currentFrame = (GUY[5].currentFrame + 1) % GUY[5].frameCount;
        sfClock_restart(GUY[5].clock);
    }
}

void init_animated_down_p2 (global_t *all)
{
    GUY[5].currentFrame = 0;
    GUY[5].frameCount = 3;
    GUY[5].frameWidth = 65;
    GUY[5].frameHeight = 110;
    GUY[5].rect.left = 285;
    GUY[5].rect.top = 5;
    GUY[5].rect.width = GUY[5].frameWidth;
    GUY[5].rect.height = GUY[5].frameHeight;
    GUY[5].clock = sfClock_create();
    GUY[5].frameTime = 0.1f;
}

void handle_updown_p2 (global_t *all)
{
    if (EVENT.key.code == sfKeyDown && all->colision.stopdown != 1) {
        IMG[21].position.y += 20;
        sfSprite_setPosition(IMG[21].sprite, IMG[21].position);
        animated_down_p2(all);
    }
    if (EVENT.key.code == sfKeyUp && all->colision.stopup != 1) {
        IMG[21].position.y -= 20;
        sfSprite_setPosition(IMG[21].sprite, IMG[21].position);
        animated_up_p2(all);
    }
}
