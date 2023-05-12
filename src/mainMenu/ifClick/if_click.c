/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click
*/

#include "../../../include/rpg.h"

void if_click_menu (global_t *all)
{
    if_click_quit(all);
    if_click_start(all);
    if_click_player1(all);
    if_click_player2(all);
    if_click_player3(all);
    if_click_settings(all);
    if_click_plus(all);
    if_click_minus(all);
    if_click_buy(all);
    if_click_plus2(all);
    if_click_minus2(all);
    if_click_mute(all);
    if_click_max(all);
    if_click_check(all);
    if_click_null(all);
    if_click_info(all);
    if_click_resume(all);
    check_fullscreen(all);
    check_originscreen(all);
}
