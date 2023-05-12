/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** handle_colision
*/

#include "../../../include/rpg.h"

void check_to_changemap3(global_t *all, sfFloatRect playerRect)
{
    sfFloatRect portalRect = sfSprite_getGlobalBounds(IMG[29].sprite);
    if (sfFloatRect_intersects(&playerRect, &portalRect, NULL) == sfTrue) {
        CLICK.isKeyPressed = true;
        BOSS.isGoblin = false;
        BOSS.isMinotaur = true;
        ATK.isGrass = true;
        player_choice(all);
        set_pnj4(all);
        display_window_map4(all);
    }
}

void handle_colision3(global_t *all)
{
    int mapWidth = 1800;
    int mapHeight = 950;
    init_colision(all);
    sfFloatRect playerRect = sfSprite_getGlobalBounds(IMG[21].sprite);
    sfFloatRect leftBorder = {0, 0, 10, mapHeight};
    sfFloatRect rightBorder = {mapWidth - 10, 0, 10, mapHeight};
    sfFloatRect topBorder = {0, 0, mapWidth, 10};
    sfFloatRect bottomBorder = {0, mapHeight - 40, mapWidth, 10};
    pnj_coli(all);
    if (sfFloatRect_intersects(&playerRect, &leftBorder, NULL) == sfTrue)
        all->colision.stopleft = 1;
    if (sfFloatRect_intersects(&playerRect, &rightBorder, NULL) == sfTrue)
        all->colision.stopright = 1;
    if (sfFloatRect_intersects(&playerRect, &topBorder, NULL) == sfTrue)
        all->colision.stopup = 1;
    if (sfFloatRect_intersects(&playerRect, &bottomBorder, NULL) == sfTrue)
        all->colision.stopdown = 1;
    check_to_changemap3(all, playerRect);
    CLICK.isKeyPressed = false;
}
