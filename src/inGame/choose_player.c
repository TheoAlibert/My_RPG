/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** choose_player
*/

#include "../../include/rpg.h"

void player_choice (global_t *all)
{
    init_gameplayer(all);
    if (CLICK.isClicked_P1) {
        init_gameplayer1(all);
    } else if (CLICK.isClicked_P2) {
        init_gameplayer2(all);
    }
}
