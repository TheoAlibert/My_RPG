/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** handle_colision
*/

#include "../../../include/rpg.h"

void check_to_changemap_boss(global_t *all,
sfFloatRect playerRect, sfFloatRect rightBorder)
{
    if (!CLICK.isKeyPressed && sfKeyboard_isKeyPressed(sfKeySpace)) {
        if (sfFloatRect_intersects(&playerRect, &rightBorder, NULL) == sfTrue) {
            CLICK.isKeyPressed = true;
            BOSS.isDemon = false;
            BOSS.isSkeleton = true;
            player_choice(all);
            set_pnj1(all);
            display_splash_end(all);
        }
    }
}

void handle_colision_boss(global_t *all)
{
    int mapWidth = 1790;
    int mapHeight = 950;
    init_colision(all);
    sfFloatRect playerRect = sfSprite_getGlobalBounds(IMG[21].sprite);
    sfFloatRect leftBorder = {0, 0, 200, mapHeight};
    sfFloatRect rightBorder = {mapWidth - 300, 0, 10, mapHeight};
    sfFloatRect topBorder = {0, 0, mapWidth, 10};
    sfFloatRect bottomBorder = {0, mapHeight - 30, mapWidth, 10};
    pnj_coli(all);
    if (sfFloatRect_intersects(&playerRect, &leftBorder, NULL) == sfTrue)
        all->colision.stopleft = 1;
    if (sfFloatRect_intersects(&playerRect, &rightBorder, NULL) == sfTrue)
        all->colision.stopright = 1;
    if (sfFloatRect_intersects(&playerRect, &topBorder, NULL) == sfTrue)
        all->colision.stopup = 1;
    if (sfFloatRect_intersects(&playerRect, &bottomBorder, NULL) == sfTrue)
        all->colision.stopdown = 1;
    check_to_changemap_boss(all, playerRect, rightBorder);
    CLICK.isKeyPressed = false;
}
