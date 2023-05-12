/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** destroy
*/

#include "../include/rpg.h"

void destroy_music(global_t *all)
{
    sfMusic_stop(SONG.music);
    sfMusic_destroy(SONG.music);
}

void destroy (global_t *all)
{
    sfRenderWindow_destroy(WINDOW);
    destroy_sprites1(all);
    destroy_sprites2(all);
    destroy_sprites3(all);
    destroy_textures1_1(all);
    destroy_textures1_2(all);
    destroy_textures1_3(all);
    destroy_textures2_1(all);
    destroy_textures3_1(all);
    destroy_music(all);
    free(IMG);
}
