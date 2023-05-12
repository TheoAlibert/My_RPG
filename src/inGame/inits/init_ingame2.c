/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-21-myrpg-remy.canal
** File description:
** init_ingame
*/

#include "../../../include/rpg.h"

void init_bool_ingame (global_t *all)
{
    CLICK.isKeyPressed = false;
    BOSS.isSkeleton = true;
    BOSS.isGoblin = false;
    BOSS.isMinotaur = false;
    BOSS.isDemon = false;
    BOSS.isWizard = false;
    CLICK.isClicked_pause = false;
    CLICK.isClicked_param = false;
    CLICK.isClicked_information = false;
    CLICK.isClicked_inventory = false;
    ATK.isPunch = true;
    ATK.isFire = false;
    ATK.isLightning = false;
    ATK.isGrass = false;
    ATK.isWater = false;
}

void init_button_attack(global_t *all)
{
    init_punch(all);
    init_fire(all);
    init_lightning(all);
    init_wind(all);
    init_water(all);
}

void init_ingame (global_t *all)
{
    init_bool_ingame(all);
    init_map1(all);
    init_map2(all);
    init_map3(all);
    init_map4(all);
    init_map5(all);
    init_map6(all);
    init_gameplayer(all);
    init_pnj(all);
    init_dial(all);
    init_boss(all);
    init_combat(all);
    init_allmap(all);
    init_menu_ingame(all);
    init_button_attack(all);
    if (CLICK.isClicked_P1) {
        init_gameplayer1(all);
    } else if (CLICK.isClicked_P2) {
        init_gameplayer2(all);
    }
}
