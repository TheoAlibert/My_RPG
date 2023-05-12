/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** init_menu_ingame
*/

#include "../../../include/rpg.h"

void init_menu_ingame (global_t *all)
{
    init_pausebutton(all);
    init_homebutton(all);
    init_parambutton(all);
    init_informationbutton(all);
    init_closebutton(all);
    init_commands(all);
    init_inventory(all);
}
