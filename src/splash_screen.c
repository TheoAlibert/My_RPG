/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** splash_screen
*/

#include "../include/rpg.h"

void init_splash_screen(global_t *all)
{
    IMG[22].texture1 =
    sfTexture_createFromFile("./content/splash_screen.jpg", NULL);
    IMG[22].sprite = sfSprite_create();
    IMG[22].scale.x = 1;
    IMG[22].scale.y = 1;
    IMG[22].position.x = 0;
    IMG[22].position.y = 0;

    sfSprite_setTexture(IMG[22].sprite, IMG[22].texture1, sfFalse);
    sfSprite_setScale(IMG[22].sprite, IMG[22].scale);
    sfSprite_setPosition(IMG[22].sprite, IMG[22].position);
}

void if_click_splash_screen (global_t *all)
{
    if ((EVENT.type == sfEvtKeyPressed && EVENT.key.code == sfKeyReturn) ||
    (EVENT.type == sfEvtKeyPressed && EVENT.key.code == sfKeySpace)) {
        display_window(all);
    } else if (EVENT.type == sfEvtMouseButtonPressed) {
        display_window(all);
    }
}

void display_splash_screen(global_t *all)
{
    while (sfRenderWindow_isOpen(WINDOW)) {
        sfRenderWindow_setKeyRepeatEnabled(WINDOW, sfTrue);
        while (sfRenderWindow_pollEvent(WINDOW, &EVENT)) {
            display_window_extension(all);
            if_click_splash_screen(all);
        }
        sfRenderWindow_clear(WINDOW, sfBlack);
        sfRenderWindow_drawSprite(WINDOW, IMG[22].sprite, NULL);
        sfRenderWindow_display(WINDOW);
    }
}
