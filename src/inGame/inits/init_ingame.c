/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-21-myrpg-remy.canal
** File description:
** init_ingame
*/

#include "../../../include/rpg.h"

void init_boss(global_t *all)
{
    init_boss_skeleton(all);
    init_boss_wizard(all);
    init_boss_goblin(all);
    init_boss_minotaur(all);
    init_boss_demon(all);
}

void init_dial (global_t *all)
{
    init_dial1(all);
    init_dial2(all);
    init_dial3(all);
    init_dial4(all);
    init_dial5(all);
}

void init_allmap (global_t *all)
{
    int nbr_mooves = 8;

    GUY = malloc(sizeof(guy_t) * nbr_mooves);

    init_animated_right_p1(all);
    init_animated_left_p1(all);
    init_animated_up_p1(all);
    init_animated_down_p1(all);
    init_animated_right_p2(all);
    init_animated_left_p2(all);
    init_animated_up_p2(all);
    init_animated_down_p2(all);

    init_portal(all);
}

void init_combat(global_t *all)
{
    init_map_combat(all);
    init_player2_combat(all);
    init_player1_combat(all);
}
