/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** if_click_inventory
*/

#include "../../../../include/rpg.h"

void close_inventory_menu(global_t *all)
{
    if (CLICK.isClicked_inventory) {
        CLICK.isClicked_inventory = false;
    } else {
        CLICK.isClicked_inventory = true;
    }
}

void if_click_inventory (global_t *all)
{
    if ((EVENT.type == sfEvtKeyPressed && EVENT.key.code == sfKeyI)) {
        close_inventory_menu(all);
    }
}
