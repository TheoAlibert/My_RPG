/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** init_colision4
*/

#include "../../../include/rpg.h"

void init_colision(global_t *all)
{
    all->colision.stopdown = 0;
    all->colision.stopup = 0;
    all->colision.stopright = 0;
    all->colision.stopleft = 0;
}
