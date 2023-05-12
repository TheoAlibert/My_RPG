/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** display_window2
*/

#include "../../include/rpg.h"

void display_window_extension2(global_t *all)
{
    detect_fights(all);
    if (EVENT.type == sfEvtClosed) {
        sfRenderWindow_close(WINDOW);
    }
    if (CLICK.isClicked_P1) {
        handle_updown_p1(all);
        handle_rightleft_p1(all);
    } else if (CLICK.isClicked_P2) {
        handle_updown_p2(all);
        handle_rightleft_p2(all);
    }
}

void display_window_extension2v2 (global_t *all)
{
    if (EVENT.type == sfEvtClosed) {
        sfRenderWindow_close(WINDOW);
    }
    if (CLICK.isClicked_P1) {
        handle_updown_p1(all);
        handle_rightleft_p1(all);
    } else if (CLICK.isClicked_P2) {
        handle_updown_p2(all);
        handle_rightleft_p2(all);
    }
}
