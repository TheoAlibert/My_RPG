/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** destroy_textures2
*/

#include "../include/rpg.h"

void destroy_textures_ingame1 (global_t *all)
{
    sfTexture_destroy(IMG[20].texture1);
    sfTexture_destroy(IMG[21].texture1);
    sfTexture_destroy(IMG[24].texture1);
    sfTexture_destroy(IMG[25].texture1);
    sfTexture_destroy(IMG[26].texture1);
    sfTexture_destroy(IMG[27].texture1);
    sfTexture_destroy(IMG[28].texture1);
    sfTexture_destroy(IMG[29].texture1);
    sfTexture_destroy(IMG[30].texture1);
    sfTexture_destroy(IMG[31].texture1);
    sfTexture_destroy(IMG[32].texture1);
    sfTexture_destroy(IMG[33].texture1);
    sfTexture_destroy(IMG[34].texture1);
    sfTexture_destroy(IMG[35].texture1);
    sfTexture_destroy(IMG[36].texture1);
    sfTexture_destroy(IMG[37].texture1);
    sfTexture_destroy(IMG[38].texture1);
    sfTexture_destroy(IMG[39].texture1);
    sfTexture_destroy(IMG[40].texture1);
    sfTexture_destroy(IMG[41].texture1);
}

void destroy_textures_ingame2 (global_t *all)
{
    sfTexture_destroy(IMG[42].texture1);
    sfTexture_destroy(IMG[43].texture1);
    sfTexture_destroy(IMG[44].texture1);
    sfTexture_destroy(IMG[45].texture1);
    sfTexture_destroy(IMG[46].texture1);
    sfTexture_destroy(IMG[47].texture1);
    sfTexture_destroy(IMG[48].texture1);
    sfTexture_destroy(IMG[49].texture1);
    sfTexture_destroy(IMG[50].texture1);
    sfTexture_destroy(IMG[51].texture1);
    sfTexture_destroy(IMG[52].texture1);
    sfTexture_destroy(IMG[53].texture1);
    sfTexture_destroy(IMG[54].texture1);
    sfTexture_destroy(IMG[55].texture1);
    sfTexture_destroy(IMG[56].texture1);
}

void destroy_textures2_ingame (global_t *all)
{
    sfTexture_destroy(IMG[42].texture2);
    sfTexture_destroy(IMG[43].texture2);
    sfTexture_destroy(IMG[44].texture2);
    sfTexture_destroy(IMG[45].texture2);
    sfTexture_destroy(IMG[46].texture2);
    sfTexture_destroy(IMG[51].texture2);
    sfTexture_destroy(IMG[52].texture2);
    sfTexture_destroy(IMG[53].texture2);
    sfTexture_destroy(IMG[54].texture2);
    sfTexture_destroy(IMG[55].texture2);
}

void destroy_textures3_ingame (global_t *all)
{
    sfTexture_destroy(IMG[42].texture3);
    sfTexture_destroy(IMG[43].texture3);
    sfTexture_destroy(IMG[44].texture3);
    sfTexture_destroy(IMG[45].texture3);
    sfTexture_destroy(IMG[46].texture3);
    sfTexture_destroy(IMG[51].texture3);
    sfTexture_destroy(IMG[52].texture3);
    sfTexture_destroy(IMG[53].texture3);
    sfTexture_destroy(IMG[54].texture3);
    sfTexture_destroy(IMG[55].texture3);
}

void destroy_textures_ingame (global_t *all)
{
    if (CLICK.isIngame) {
        destroy_textures_ingame1(all);
        destroy_textures_ingame2(all);
        destroy_textures2_ingame(all);
        destroy_textures3_ingame(all);
    }
}
