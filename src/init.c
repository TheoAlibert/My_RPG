/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** init
*/

#include "../include/rpg.h"

void init_window(global_t *all)
{
    MODE.bitsPerPixel = 90;
    MODE.height = 1080;
    MODE.width = 1920;
    WINDOW = sfRenderWindow_create(MODE, "MY RPG", sfResize | sfClose, NULL);
}

void init_settings(global_t *all)
{
    init_settingbutton(all);
    init_minusbutton(all);
    init_plusbutton(all);
    init_settingmenu(all);
    init_minusbutton2(all);
    init_plusbutton2(all);
    init_mutebutton(all);
    init_maxbutton(all);
    init_checkbutton(all);
    init_nullbutton(all);
    init_infos_players(all);
    init_resume(all);
}

void init_sprites(global_t *all)
{
    int nbr_sprites = 57;

    IMG = malloc(sizeof(images_t) * nbr_sprites);

    init_menu(all);
    init_player1(all);
    init_player2(all);
    init_player3(all);
    init_startbutton(all);
    init_quitbutton(all);
    init_buybutton(all);
    init_infosbutton(all);
    init_infos(all);
    init_settings(all);
    init_splash_screen(all);
    init_splash_end(all);
    init_resume(all);
}

void init_is_click(global_t *all)
{
    CLICK.isClicked_P1 = true;
    CLICK.isClicked_P2 = false;
    CLICK.isClicked_P3 = false;
    CLICK.isClicked_buy = false;
    CLICK.isClicked_info = false;
    CLICK.isClicked_settings = false;
    CLICK.isIngame = false;
    CLICK.infos = false;
    CLICK.oc = 0;
    all->colision.stop = 0;
}

void init(global_t *all)
{
    init_window(all);
    init_sprites(all);
    init_is_click(all);
    init_song(all);
}
