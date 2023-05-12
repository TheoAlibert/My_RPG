/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** draw_map_combat.c
*/

#include "../../include/rpg.h"

void draw_sprite_map_combat(global_t *all)
{
    sfRenderWindow_drawSprite(WINDOW, IMG[41].sprite, NULL);
    if (CLICK.isClicked_P1) {
        sfRenderWindow_drawSprite(WINDOW, IMG[47].sprite, NULL);
    }
    if (CLICK.isClicked_P2) {
        sfRenderWindow_drawSprite(WINDOW, IMG[48].sprite, NULL);
    }
}

void draw_sprite2_boss_combat(global_t *all)
{
    if (BOSS.isGoblin) {
        IMG[32].position.x = 1450;
        IMG[32].position.y = 350;
        sfSprite_setPosition(IMG[32].sprite, IMG[32].position);
        sfRenderWindow_drawSprite(WINDOW, IMG[32].sprite, NULL);
    }
    if (BOSS.isMinotaur) {
        IMG[33].position.x = 1450;
        IMG[33].position.y = 350;
        sfSprite_setPosition(IMG[33].sprite, IMG[33].position);
        sfRenderWindow_drawSprite(WINDOW, IMG[33].sprite, NULL);
    }
    if (BOSS.isDemon) {
        IMG[34].position.x = 1450;
        IMG[34].position.y = 350;
        sfSprite_setPosition(IMG[34].sprite, IMG[34].position);
        sfRenderWindow_drawSprite(WINDOW, IMG[34].sprite, NULL);
    }
}

void draw_sprite_boss_combat(global_t *all)
{
    if (BOSS.isSkeleton) {
        IMG[30].position.x = 1450;
        IMG[30].position.y = 350;
        sfSprite_setPosition(IMG[30].sprite, IMG[30].position);
        sfRenderWindow_drawSprite(WINDOW, IMG[30].sprite, NULL);
    }
    if (BOSS.isWizard) {
        IMG[31].position.x = 1450;
        IMG[31].position.y = 350;
        sfSprite_setPosition(IMG[31].sprite, IMG[31].position);
        sfRenderWindow_drawSprite(WINDOW, IMG[31].sprite, NULL);
    }
    draw_sprite2_boss_combat(all);
}

void display_map_combat(global_t *all)
{
    while (sfRenderWindow_isOpen(WINDOW)) {
        sfRenderWindow_setKeyRepeatEnabled(WINDOW, sfTrue);
        while (sfRenderWindow_pollEvent(WINDOW, &EVENT)) {
            check_fullscreen(all);
            if_click_element_button(all);
            display_window_extension(all);
        }
        sfRenderWindow_clear(WINDOW, sfBlack);
        draw_sprite_map_combat(all);
        draw_sprite_attack_button(all);
        draw_sprite_boss_combat(all);
        sfRenderWindow_display(WINDOW);
    }
}
