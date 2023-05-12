/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** splash_end
*/

#include "../include/rpg.h"

void init_splash_end(global_t *all)
{
    IMG[56].texture1 =
        sfTexture_createFromFile("./content/earth.png", NULL);
    IMG[56].sprite = sfSprite_create();
    IMG[56].scale.x = 1;
    IMG[56].scale.y = 1;
    IMG[56].position.x = 0;
    IMG[56].position.y = 0;

    sfSprite_setTexture(IMG[56].sprite, IMG[56].texture1, sfFalse);
    sfSprite_setScale(IMG[56].sprite, IMG[56].scale);
    sfSprite_setPosition(IMG[56].sprite, IMG[56].position);
}

void display_splash_end(global_t *all)
{
    while (sfRenderWindow_isOpen(WINDOW)) {
        sfRenderWindow_setKeyRepeatEnabled(WINDOW, sfTrue);
        while (sfRenderWindow_pollEvent(WINDOW, &EVENT)) {
            display_window_extension(all);
        }
        sfRenderWindow_clear(WINDOW, sfBlack);
        sfRenderWindow_drawSprite(WINDOW, IMG[56].sprite, NULL);
        sfRenderWindow_display(WINDOW);
    }
}
