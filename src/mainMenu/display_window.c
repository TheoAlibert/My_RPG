/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** display_window
*/

#include "../../include/rpg.h"

void display_window_extension(global_t *all)
{
    if (EVENT.type == sfEvtClosed)
        sfRenderWindow_close(WINDOW);
}

void switch_screen(global_t *all)
{
    sfRenderWindow_destroy(WINDOW);

    if (CLICK.isFullscreen) {
        WINDOW =
        sfRenderWindow_create(MODE, "My_RPG", sfResize | sfClose, NULL);
        CLICK.isFullscreen = false;
    } else {
        WINDOW = sfRenderWindow_create(*sfVideoMode_getFullscreenModes(NULL),
        "My_RPG", sfFullscreen | sfResize | sfClose, NULL);
        CLICK.isFullscreen = true;
    }
}

void check_fullscreen(global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[16].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            CLICK.isFullscreen = false;
            switch_screen(all);
        }
    }
    if (EVENT.type == sfEvtKeyPressed && EVENT.key.code == sfKeyF11) {
        switch_screen(all);
    }
}

void check_originscreen(global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[17].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        if (EVENT.type == sfEvtMouseButtonPressed) {
            CLICK.isFullscreen = true;
            switch_screen(all);
        }
    }
}

void display_window(global_t *all)
{
    while (sfRenderWindow_isOpen(WINDOW)) {
        sfRenderWindow_setKeyRepeatEnabled(WINDOW, sfTrue);
        while (sfRenderWindow_pollEvent(WINDOW, &EVENT)) {
            display_window_extension(all);
            if_click_menu(all);
        }
        sfRenderWindow_clear(WINDOW, sfBlack);
        draw_sprites_menu(all);
        sfRenderWindow_display(WINDOW);
    }
}
