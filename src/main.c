/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** main
*/

#include "../include/rpg.h"

int main (int ac, __attribute__((unused))char **av)
{
    global_t all;
    if (ac != 1) {
        return 84;
    } else {
        init(&all);
        display_splash_screen(&all);
        destroy(&all);
    }
    return EXIT_SUCCESS;
}
