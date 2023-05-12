/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** destroy_textures
*/

#include "../include/rpg.h"

void destroy_textures1_1 (global_t *all)
{
    sfTexture_destroy(IMG[0].texture1);
    sfTexture_destroy(IMG[1].texture1);
    sfTexture_destroy(IMG[2].texture1);
    sfTexture_destroy(IMG[3].texture1);
    sfTexture_destroy(IMG[4].texture1);
    sfTexture_destroy(IMG[5].texture1);
    sfTexture_destroy(IMG[6].texture1);
    sfTexture_destroy(IMG[7].texture1);
    sfTexture_destroy(IMG[8].texture1);
}

void destroy_textures1_2 (global_t *all)
{
    if (CLICK.infos) {
        sfTexture_destroy(IMG[9].texture1);
    }
    destroy_textures_ingame(all);
}

void destroy_textures1_3 (global_t *all)
{
    sfTexture_destroy(IMG[10].texture1);
    sfTexture_destroy(IMG[11].texture1);
    sfTexture_destroy(IMG[12].texture1);
    sfTexture_destroy(IMG[13].texture1);
    sfTexture_destroy(IMG[14].texture1);
    sfTexture_destroy(IMG[15].texture1);
    sfTexture_destroy(IMG[16].texture1);
    sfTexture_destroy(IMG[17].texture1);
    sfTexture_destroy(IMG[18].texture1);
    sfTexture_destroy(IMG[19].texture1);
    sfTexture_destroy(IMG[22].texture1);
    sfTexture_destroy(IMG[23].texture1);
}

void destroy_textures2_1 (global_t *all)
{
    sfTexture_destroy(IMG[1].texture2);
    sfTexture_destroy(IMG[2].texture2);
    sfTexture_destroy(IMG[3].texture2);
    sfTexture_destroy(IMG[4].texture2);
    sfTexture_destroy(IMG[5].texture2);
    sfTexture_destroy(IMG[6].texture2);
    sfTexture_destroy(IMG[7].texture2);
    sfTexture_destroy(IMG[8].texture2);
    sfTexture_destroy(IMG[11].texture2);
    sfTexture_destroy(IMG[12].texture2);
    sfTexture_destroy(IMG[13].texture2);
    sfTexture_destroy(IMG[14].texture2);
    sfTexture_destroy(IMG[15].texture2);
    sfTexture_destroy(IMG[16].texture2);
    sfTexture_destroy(IMG[17].texture2);
    sfTexture_destroy(IMG[18].texture2);
    sfTexture_destroy(IMG[23].texture2);
}

void destroy_textures3_1 (global_t *all)
{
    sfTexture_destroy(IMG[1].texture3);
    sfTexture_destroy(IMG[2].texture3);
    sfTexture_destroy(IMG[3].texture3);
    sfTexture_destroy(IMG[4].texture3);
    sfTexture_destroy(IMG[5].texture3);
    sfTexture_destroy(IMG[6].texture3);
    sfTexture_destroy(IMG[7].texture3);
    sfTexture_destroy(IMG[11].texture3);
    sfTexture_destroy(IMG[12].texture3);
    sfTexture_destroy(IMG[13].texture3);
    sfTexture_destroy(IMG[14].texture3);
    sfTexture_destroy(IMG[15].texture3);
    sfTexture_destroy(IMG[16].texture3);
    sfTexture_destroy(IMG[17].texture3);
    sfTexture_destroy(IMG[18].texture3);
}
