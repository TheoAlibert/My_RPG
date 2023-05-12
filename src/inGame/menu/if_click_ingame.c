/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_ingame
*/

#include "../../../include/rpg.h"

void if_click_element_button (global_t *all)
{
    if_click_punch(all);
    if_click_fire(all);
    if_click_lightning(all);
    if_click_grass(all);
    if_click_water(all);
}

void if_click_ingame (global_t *all)
{
    if_click_pause(all);
    if_click_inventory(all);
    check_fullscreen(all);
    check_originscreen(all);
    if (CLICK.isClicked_pause) {
        if_click_param(all);
        if_click_information(all);
        if_click_home(all);
        if_click_close(all);
        if_click_check(all);
        if_click_null(all);
        if_click_minus(all);
        if_click_plus(all);
        if_click_minus2(all);
        if_click_plus2(all);
        if_click_mute(all);
        if_click_max(all);
    }
}
