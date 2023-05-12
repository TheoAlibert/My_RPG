/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** init_boss.c
*/

#include "../../../include/rpg.h"

void init_boss_skeleton(global_t *all)
{
    IMG[30].texture1 =
    sfTexture_createFromFile("./content/ingame/perso/skeleton.png", NULL);
    IMG[30].sprite = sfSprite_create();
    IMG[30].scale.x = 1.4;
    IMG[30].scale.y = 1.4;
    IMG[30].position.x = 1000;
    IMG[30].position.y = 325;

    sfSprite_setTexture(IMG[30].sprite, IMG[30].texture1, sfFalse);
    sfSprite_setScale(IMG[30].sprite, IMG[30].scale);
    sfSprite_setPosition(IMG[30].sprite, IMG[30].position);
}

void init_boss_wizard(global_t *all)
{
    IMG[31].texture1 =
    sfTexture_createFromFile("./content/ingame/perso/wizard.png", NULL);
    IMG[31].sprite = sfSprite_create();
    IMG[31].scale.x = 1.5;
    IMG[31].scale.y = 1.5;
    IMG[31].position.x = 1000;
    IMG[31].position.y = 290;

    sfSprite_setTexture(IMG[31].sprite, IMG[31].texture1, sfFalse);
    sfSprite_setScale(IMG[31].sprite, IMG[31].scale);
    sfSprite_setPosition(IMG[31].sprite, IMG[31].position);
}

void init_boss_goblin(global_t *all)
{
    IMG[32].texture1 =
    sfTexture_createFromFile("./content/ingame/perso/goblin.png", NULL);
    IMG[32].sprite = sfSprite_create();
    IMG[32].scale.x = 1.6;
    IMG[32].scale.y = 1.6;
    IMG[32].position.x = 1200;
    IMG[32].position.y = 325;

    sfSprite_setTexture(IMG[32].sprite, IMG[32].texture1, sfFalse);
    sfSprite_setScale(IMG[32].sprite, IMG[32].scale);
    sfSprite_setPosition(IMG[32].sprite, IMG[32].position);
}

void init_boss_minotaur(global_t *all)
{
    IMG[33].texture1 =
    sfTexture_createFromFile("./content/ingame/perso/minotaur.png", NULL);
    IMG[33].sprite = sfSprite_create();
    IMG[33].scale.x = 1.7;
    IMG[33].scale.y = 1.7;
    IMG[33].position.x = 1000;
    IMG[33].position.y = 325;

    sfSprite_setTexture(IMG[33].sprite, IMG[33].texture1, sfFalse);
    sfSprite_setScale(IMG[33].sprite, IMG[33].scale);
    sfSprite_setPosition(IMG[33].sprite, IMG[33].position);
}

void init_boss_demon(global_t *all)
{
    IMG[34].texture1 =
    sfTexture_createFromFile("./content/ingame/perso/demon.png", NULL);
    IMG[34].sprite = sfSprite_create();
    IMG[34].scale.x = 1.8;
    IMG[34].scale.y = 1.8;
    IMG[34].position.x = 1000;
    IMG[34].position.y = 250;

    sfSprite_setTexture(IMG[34].sprite, IMG[34].texture1, sfFalse);
    sfSprite_setScale(IMG[34].sprite, IMG[34].scale);
    sfSprite_setPosition(IMG[34].sprite, IMG[34].position);
}
