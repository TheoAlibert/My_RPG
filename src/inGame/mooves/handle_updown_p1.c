/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-21-myrpg-remy.canal
** File description:
** handle_keypress
*/

#include "../../../include/rpg.h"

void animated_up_p1 (global_t *all)
{
    GUY[2].elapsed = sfClock_getElapsedTime(GUY[2].clock);
    if (sfTime_asSeconds(GUY[2].elapsed) >= GUY[2].frameTime) {
        GUY[2].rect.left = GUY[2].currentFrame * GUY[2].frameWidth;
        sfSprite_setTextureRect(IMG[21].sprite, GUY[2].rect);
        GUY[2].currentFrame = (GUY[2].currentFrame + 1) % GUY[2].frameCount;
        sfClock_restart(GUY[2].clock);
    }
}

void init_animated_up_p1 (global_t *all)
{
    GUY[2].currentFrame = 0;
    GUY[2].frameCount = 3;
    GUY[2].frameWidth = 65;
    GUY[2].frameHeight = 110;
    GUY[2].rect.left = 0;
    GUY[2].rect.top = 115;
    GUY[2].rect.width = GUY[2].frameWidth;
    GUY[2].rect.height = GUY[2].frameHeight;
    GUY[2].clock = sfClock_create();
    GUY[2].frameTime = 0.1f;
}

void animated_down_p1 (global_t *all)
{
    GUY[3].elapsed = sfClock_getElapsedTime(GUY[3].clock);
    if (sfTime_asSeconds(GUY[3].elapsed) >= GUY[3].frameTime) {
        GUY[3].rect.left = GUY[3].currentFrame * GUY[3].frameWidth;
        sfSprite_setTextureRect(IMG[21].sprite, GUY[3].rect);
        GUY[3].currentFrame = (GUY[3].currentFrame + 1) % GUY[3].frameCount;
        sfClock_restart(GUY[3].clock);
    }
}

void init_animated_down_p1 (global_t *all)
{
    GUY[3].currentFrame = 0;
    GUY[3].frameCount = 3;
    GUY[3].frameWidth = 65;
    GUY[3].frameHeight = 110;
    GUY[3].rect.left = 0;
    GUY[3].rect.top = 5;
    GUY[3].rect.width = GUY[3].frameWidth;
    GUY[3].rect.height = GUY[3].frameHeight;
    GUY[3].clock = sfClock_create();
    GUY[3].frameTime = 0.1f;
}

void handle_updown_p1 (global_t *all)
{
    if (EVENT.key.code == sfKeyDown && all->colision.stopdown != 1) {
        IMG[21].position.y += 20;
        sfSprite_setPosition(IMG[21].sprite, IMG[21].position);
        animated_down_p1(all);
    }
    if (EVENT.key.code == sfKeyUp && all->colision.stopup != 1) {
        IMG[21].position.y -= 20;
        sfSprite_setPosition(IMG[21].sprite, IMG[21].position);
        animated_up_p1(all);
    }
}
