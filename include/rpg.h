/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** rpg
*/

#ifndef RPG_H_
    #define RPG_H_

    #include <SFML/Audio.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <SFML/Graphics.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <string.h>
    #include <stdbool.h>
    #include "struct.h"
    #define MODE all->settings.mode
    #define WINDOW all->settings.window
    #define EVENT all->settings.event
    #define SET all->settings
    #define IMG all->pictures
    #define CLICK all->click
    #define SONG all->song
    #define CLOCK all->animated
    #define GUY all->guy
    #define BOSS all->boss
    #define ATK all->atk

int main (int ac, char **av);

void init(global_t *all);
void init_sprites(global_t *all);
void init_window(global_t *all);
void init_is_click(global_t *all);

void init_menu (global_t *all);
void init_player1 (global_t *all);
void init_player2 (global_t *all);
void init_player3 (global_t *all);
void init_startbutton (global_t *all);
void init_quitbutton (global_t *all);
void init_settingbutton (global_t *all);
void init_plusbutton(global_t *all);
void init_minusbutton(global_t *all);
void init_song(global_t *all);
void init_infos_player(global_t *all);
void init_settingmenu (global_t *all);
void init_buybutton (global_t *all);
void init_plusbutton2(global_t *all);
void init_minusbutton2(global_t *all);
void init_mutebutton(global_t *all);
void init_maxbutton(global_t *all);
void init_checkbutton(global_t *all);
void init_nullbutton(global_t *all);
void init_infosbutton(global_t *all);
void init_infos(global_t *all);
void init_resume(global_t *all);
void init_infos_players (global_t *all);
void init_resume(global_t *all);

void init_ingame (global_t *all);

void if_click_menu (global_t *all);
void if_click_quit (global_t *all);
void if_click_start (global_t *all);
void if_click_settings (global_t *all);
void if_click_plus (global_t *all);
void if_click_minus (global_t *all);
void if_click_plus2 (global_t *all);
void if_click_minus2 (global_t *all);
void if_click_player1 (global_t *all);
void if_click_player2 (global_t *all);
void if_click_player3 (global_t *all);
void if_click_buy (global_t *all);
void if_click_mute (global_t *all);
void if_click_max (global_t *all);
void if_click_check (global_t *all);
void if_click_null (global_t *all);
void if_click_info (global_t *all);
void if_click_resume (global_t *all);

void erase_unbuy_p3 (global_t *all);
void p3_buy_hover (global_t *all);
void p3_buy (global_t *all);

void display_sprite_map_combat(global_t *all);
void display_map_combat(global_t *all);
void init_player2_combat(global_t *all);
void init_player1_combat(global_t *all);
void init_map_combat(global_t *all);
void draw_sprite_boss_combat(global_t *all);
void init_combat(global_t *all);

void draw_sprites_menu (global_t *all);
void draw_sprites_map1 (global_t *all);
void draw_sprites_map2 (global_t *all);
void draw_sprites_map3 (global_t *all);
void draw_sprites_map4 (global_t *all);
void draw_sprites_map_boss (global_t *all);

void draw_sprites_map1v2 (global_t *all);
void draw_sprites_map2v2 (global_t *all);
void draw_sprites_map3v2 (global_t *all);
void draw_sprites_map4v2 (global_t *all);
void draw_sprites_map_bossv2 (global_t *all);

void clicked_player1 (global_t *all);

void handle_volume_settings(global_t *all);

void init_splash_screen(global_t *all);
void init_splash_end(global_t *all);

void init_gameplayer (global_t *all);
void init_gameplayer1 (global_t *all);
void init_gameplayer2 (global_t *all);
void init_map1 (global_t *all);
void init_map2 (global_t *all);
void init_map3 (global_t *all);
void init_map4 (global_t *all);
void init_map5 (global_t *all);
void init_map6 (global_t *all);
void init_colision(global_t *all);
void init_portal (global_t *all);
void init_pnj (global_t *all);

void init_boss(global_t *all);
void init_dial (global_t *all);
void init_allmap (global_t *all);
void init_combat(global_t *all);

void init_dial1 (global_t *all);
void init_dial2 (global_t *all);
void init_dial3 (global_t *all);
void init_dial4 (global_t *all);
void init_dial5 (global_t *all);

void set_pnj1 (global_t *all);
void set_pnj2 (global_t *all);
void set_pnj3 (global_t *all);
void set_pnj4 (global_t *all);
void set_pnj5 (global_t *all);

void pnj_coli (global_t *all);

void animated_portal (global_t *all);

void init_boss_skeleton(global_t *all);
void init_boss_wizard(global_t *all);
void init_boss_goblin(global_t *all);
void init_boss_minotaur(global_t *all);
void init_boss_demon(global_t *all);

void init_punch(global_t *all);
void init_fire(global_t *all);
void init_lightning(global_t *all);
void init_wind(global_t *all);
void init_water(global_t *all);

void init_map_combat(global_t *all);

void display_splash_screen(global_t *all);
void display_splash_end(global_t *all);
void display_window(global_t *all);
void display_window_map1(global_t *all);
void display_window_map2(global_t *all);
void display_window_map3(global_t *all);
void display_window_map4(global_t *all);
void display_window_map_boss(global_t *all);
void display_window_extension(global_t *all);
void display_window_extension2(global_t *all);
void display_window_extension2v2 (global_t *all);
void switch_screen(global_t *all);
void check_fullscreen(global_t *all);
void check_originscreen(global_t *all);
void display_window_map1v2 (global_t *all);
void display_window_map2v2 (global_t *all);
void display_window_map3v2 (global_t *all);
void display_window_map4v2 (global_t *all);
void display_window_map_bossv2(global_t *all);

void handle_updown_p1 (global_t *all);
void handle_rightleft_p1 (global_t *all);
void handle_updown_p2 (global_t *all);
void handle_rightleft_p2 (global_t *all);

void handle_colision1 (global_t *all);
void handle_colision2 (global_t *all);
void handle_colision3 (global_t *all);
void handle_colision4 (global_t *all);
void handle_colision_boss (global_t *all);
void if_click_element_button (global_t *all);
void player_choice (global_t *all);
void animated_right_p1 (global_t *all);
void init_animated_right_p1 (global_t *all);
void animated_left_p1 (global_t *all);
void init_animated_left_p1 (global_t *all);
void animated_up_p1 (global_t *all);
void init_animated_up_p1 (global_t *all);
void animated_down_p1 (global_t *all);
void init_animated_down_p1 (global_t *all);
void animated_right_p2 (global_t *all);
void init_animated_right_p2 (global_t *all);
void animated_left_p2 (global_t *all);
void init_animated_left_p2 (global_t *all);
void animated_up_p2 (global_t *all);
void init_animated_up_p2 (global_t *all);
void animated_down_p2 (global_t *all);
void init_animated_down_p2 (global_t *all);

void draw_sprite_attack_button (global_t *all);

void if_click_fire(global_t *all);
void if_click_grass(global_t *all);
void if_click_water(global_t *all);
void if_click_lightning(global_t *all);
void if_click_punch(global_t *all);

void init_menu_ingame (global_t *all);
void init_inventory(global_t *all);
void init_commands(global_t *all);
void init_closebutton(global_t *all);
void init_informationbutton(global_t *all);
void init_parambutton(global_t *all);
void init_homebutton(global_t *all);
void init_pausebutton(global_t *all);

void if_click_ingame (global_t *all);
void if_click_pause (global_t *all);
void if_click_param (global_t *all);
void if_click_information (global_t *all);
void if_click_home (global_t *all);
void if_click_close (global_t *all);
void if_click_inventory (global_t *all);
void draw_sprites_menu_ingame (global_t *all);

void detect_fights (global_t *all);

void destroy (global_t *all);
void destroy_sprites_ingame (global_t *all);
void destroy_textures_ingame (global_t *all);
void destroy_textures1_1 (global_t *all);
void destroy_textures1_2 (global_t *all);
void destroy_textures1_3 (global_t *all);
void destroy_sprites1 (global_t *all);
void destroy_sprites2 (global_t *all);
void destroy_sprites3 (global_t *all);
void destroy_textures2_1 (global_t *all);
void destroy_textures3_1 (global_t *all);

#endif /* !RPG_H_ */
