/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** init_resume
*/

#include "../../../include/rpg.h"

void init_resume(global_t *all)
{
    IMG[23].texture1 =
    sfTexture_createFromFile("./content/buttons/resume_button.png", NULL);
    IMG[23].texture2 =
    sfTexture_createFromFile("./content/buttons/resume_button2.png", NULL);
    IMG[23].sprite = sfSprite_create();
    IMG[23].scale.x = 0.8;
    IMG[23].scale.y = 0.8;
    IMG[23].position.x = 800;
    IMG[23].position.y = 230;

    sfSprite_setTexture(IMG[23].sprite, IMG[23].texture1, sfFalse);
    sfSprite_setScale(IMG[23].sprite, IMG[23].scale);
    sfSprite_setPosition(IMG[23].sprite, IMG[23].position);
}

void origin_resume(global_t *all)
{
    sfSprite_setTexture(IMG[23].sprite, IMG[23].texture1, sfFalse);
    sfSprite_setScale(IMG[23].sprite, IMG[23].scale);
    sfSprite_setPosition(IMG[23].sprite, IMG[23].position);
}

void hover_resume(global_t *all)
{
    sfSprite_setTexture(IMG[23].sprite, IMG[23].texture2, sfFalse);
    sfSprite_setScale(IMG[23].sprite, IMG[23].scale);
    sfSprite_setPosition(IMG[23].sprite, IMG[23].position);
}

void if_click_resume (global_t *all)
{
    sfFloatRect buttonBounds = sfSprite_getGlobalBounds(IMG[23].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&buttonBounds, mouseX, mouseY)) {
        hover_resume(all);
    } else {
        origin_resume(all);
    }
}
