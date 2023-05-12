/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** init_portal
*/

#include "../../../include/rpg.h"

void animated_portal (global_t *all)
{
    CLOCK.elapsed = sfClock_getElapsedTime(CLOCK.clock);
    if (sfTime_asSeconds(CLOCK.elapsed) >= CLOCK.frameTime) {
        CLOCK.rect.left = CLOCK.currentFrame * CLOCK.frameWidth;
        sfSprite_setTextureRect(IMG[29].sprite, CLOCK.rect);
        CLOCK.currentFrame = (CLOCK.currentFrame + 1) % CLOCK.frameCount;
        sfClock_restart(CLOCK.clock);
    }
}

void init_animated_portal (global_t *all)
{
    CLOCK.currentFrame = 0;
    CLOCK.frameCount = 4;
    CLOCK.frameWidth = 250;
    CLOCK.frameHeight = 592;
    CLOCK.rect.left = 0;
    CLOCK.rect.top = 0;
    CLOCK.rect.width = CLOCK.frameWidth;
    CLOCK.rect.height = CLOCK.frameHeight;
    CLOCK.clock = sfClock_create();
    CLOCK.frameTime = 0.2f;
}

void init_portal (global_t *all)
{
    IMG[29].texture1 =
    sfTexture_createFromFile("./content/ingame/portal.png", NULL);
    IMG[29].sprite = sfSprite_create();
    IMG[29].scale.x = 0.7;
    IMG[29].scale.y = 0.7;
    IMG[29].position.x = 1740;
    IMG[29].position.y = 230;
    sfSprite_setTexture(IMG[29].sprite, IMG[29].texture1, sfFalse);
    sfSprite_setScale(IMG[29].sprite, IMG[29].scale);
    sfSprite_setPosition(IMG[29].sprite, IMG[29].position);

    init_animated_portal(all);
}
