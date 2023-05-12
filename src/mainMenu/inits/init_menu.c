/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** init_menu_buttons
*/

#include "../../../include/rpg.h"

void init_menu (global_t *all)
{
    IMG[0].texture1 =
    sfTexture_createFromFile("./content/back_menu.jpg", NULL);
    IMG[0].sprite = sfSprite_create();
    IMG[0].scale.x = 1.6;
    IMG[0].scale.y = 1.3;
    IMG[0].position.x = 0;
    IMG[0].position.y = 0;

    sfSprite_setTexture(IMG[0].sprite, IMG[0].texture1, sfFalse);
    sfSprite_setScale(IMG[0].sprite, IMG[0].scale);
    sfSprite_setPosition(IMG[0].sprite, IMG[0].position);
}

void init_player1 (global_t *all)
{
    IMG[1].texture1 =
    sfTexture_createFromFile("./content/player/Player1.png", NULL);
    IMG[1].texture2 =
    sfTexture_createFromFile("./content/player/Player1_outline.png", NULL);
    IMG[1].texture3 =
    sfTexture_createFromFile("./content/player/Player1_click.png", NULL);
    IMG[1].sprite = sfSprite_create();
    IMG[1].scale.x = 1;
    IMG[1].scale.y = 1;
    IMG[1].position.x = 650;
    IMG[1].position.y = 650;

    sfSprite_setTexture(IMG[1].sprite, IMG[1].texture1, sfFalse);
    sfSprite_setScale(IMG[1].sprite, IMG[1].scale);
    sfSprite_setPosition(IMG[1].sprite, IMG[1].position);
}

void init_player2 (global_t *all)
{
    IMG[2].texture1 =
    sfTexture_createFromFile("./content/player/Player2.png", NULL);
    IMG[2].texture2 =
    sfTexture_createFromFile("./content/player/Player2_outline.png", NULL);
    IMG[2].texture3 =
    sfTexture_createFromFile("./content/player/Player2_click.png", NULL);
    IMG[2].sprite = sfSprite_create();
    IMG[2].scale.x = 1;
    IMG[2].scale.y = 1;
    IMG[2].position.x = 850;
    IMG[2].position.y = 650;

    sfSprite_setTexture(IMG[2].sprite, IMG[2].texture1, sfFalse);
    sfSprite_setScale(IMG[2].sprite, IMG[2].scale);
    sfSprite_setPosition(IMG[2].sprite, IMG[2].position);
}

void init_startbutton (global_t *all)
{
    IMG[3].texture1 =
    sfTexture_createFromFile("./content/buttons/start.png", NULL);
    IMG[3].texture2 =
    sfTexture_createFromFile("./content/buttons/start2.png", NULL);
    IMG[3].texture3 =
    sfTexture_createFromFile("./content/buttons/start3.png", NULL);
    IMG[3].sprite = sfSprite_create();
    IMG[3].scale.x = 0.8;
    IMG[3].scale.y = 0.8;
    IMG[3].position.x = 800;
    IMG[3].position.y = 360;

    sfSprite_setTexture(IMG[3].sprite, IMG[3].texture1, sfFalse);
    sfSprite_setScale(IMG[3].sprite, IMG[3].scale);
    sfSprite_setPosition(IMG[3].sprite, IMG[3].position);
}

void init_quitbutton (global_t *all)
{
    IMG[4].texture1 =
    sfTexture_createFromFile("./content/buttons/quit.png", NULL);
    IMG[4].texture2 =
    sfTexture_createFromFile("./content/buttons/quit2.png", NULL);
    IMG[4].texture3 =
    sfTexture_createFromFile("./content/buttons/quit3.png", NULL);
    IMG[4].sprite = sfSprite_create();
    IMG[4].scale.x = 0.8;
    IMG[4].scale.y = 0.8;
    IMG[4].position.x = 1810;
    IMG[4].position.y = 10;

    sfSprite_setTexture(IMG[4].sprite, IMG[4].texture1, sfFalse);
    sfSprite_setScale(IMG[4].sprite, IMG[4].scale);
    sfSprite_setPosition(IMG[4].sprite, IMG[4].position);
}
