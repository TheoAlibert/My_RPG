/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** disp_win_maps
*/

#include "../../include/rpg.h"

void display_window_map1v2 (global_t *all)
{
    while (sfRenderWindow_isOpen(WINDOW)) {
        sfRenderWindow_setKeyRepeatEnabled(WINDOW, sfTrue);
        while (sfRenderWindow_pollEvent(WINDOW, &EVENT)) {
            display_window_extension2v2(all);
            if_click_ingame(all);
        }
        animated_portal(all);
        sfRenderWindow_clear(WINDOW, sfBlack);
        draw_sprites_map1v2(all);
        draw_sprites_menu_ingame(all);
        handle_colision1(all);
        sfRenderWindow_display(WINDOW);
    }
}

void display_window_map2v2 (global_t *all)
{
    while (sfRenderWindow_isOpen(WINDOW)) {
        sfRenderWindow_setKeyRepeatEnabled(WINDOW, sfTrue);
        while (sfRenderWindow_pollEvent(WINDOW, &EVENT)) {
            display_window_extension2v2(all);
            if_click_ingame(all);
        }
        animated_portal(all);
        sfRenderWindow_clear(WINDOW, sfBlack);
        draw_sprites_map2v2(all);
        draw_sprites_menu_ingame(all);
        handle_colision2(all);
        sfRenderWindow_display(WINDOW);
    }
}

void display_window_map3v2 (global_t *all)
{
    while (sfRenderWindow_isOpen(WINDOW)) {
        sfRenderWindow_setKeyRepeatEnabled(WINDOW, sfTrue);
        while (sfRenderWindow_pollEvent(WINDOW, &EVENT)) {
            display_window_extension2v2(all);
            if_click_ingame(all);
        }
        animated_portal(all);
        sfRenderWindow_clear(WINDOW, sfBlack);
        draw_sprites_map3v2(all);
        draw_sprites_menu_ingame(all);
        handle_colision3(all);
        sfRenderWindow_display(WINDOW);
    }
}

void display_window_map4v2 (global_t *all)
{
    while (sfRenderWindow_isOpen(WINDOW)) {
        sfRenderWindow_setKeyRepeatEnabled(WINDOW, sfTrue);
        while (sfRenderWindow_pollEvent(WINDOW, &EVENT)) {
            display_window_extension2v2(all);
            if_click_ingame(all);
        }
        animated_portal(all);
        sfRenderWindow_clear(WINDOW, sfBlack);
        draw_sprites_map4v2(all);
        draw_sprites_menu_ingame(all);
        handle_colision4(all);
        sfRenderWindow_display(WINDOW);
    }
}

void display_window_map_bossv2(global_t *all)
{
    while (sfRenderWindow_isOpen(WINDOW)) {
        sfRenderWindow_setKeyRepeatEnabled(WINDOW, sfTrue);
        while (sfRenderWindow_pollEvent(WINDOW, &EVENT)) {
            display_window_extension2v2(all);
            if_click_ingame(all);
        }
        sfRenderWindow_clear(WINDOW, sfBlack);
        draw_sprites_map_bossv2(all);
        draw_sprites_menu_ingame(all);
        handle_colision_boss(all);
        sfRenderWindow_display(WINDOW);
    }
}
