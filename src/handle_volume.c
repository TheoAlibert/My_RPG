/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** handle_volume
*/

#include "../include/rpg.h"

void volume_plus(global_t *all)
{
    sfFloatRect plusBounds = sfSprite_getGlobalBounds(IMG[7].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&plusBounds, mouseX, mouseY)) {
        SONG.volume += 10.0f;
        if (SONG.volume < 0.0f) {
            SONG.volume = 0.0f;
        }
        sfMusic_setVolume(SONG.music, SONG.volume);
        SONG.currentVol++;
        if (SONG.currentVol > 10) {
            SONG.currentVol = 10;
        }
    }
}

void volume_minus(global_t *all)
{
    sfFloatRect minusBounds = sfSprite_getGlobalBounds(IMG[6].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&minusBounds, mouseX, mouseY)) {
        SONG.volume -= 10.0f;
        if (SONG.volume < 0.0f) {
            SONG.volume = 0.0f;
        }
        sfMusic_setVolume(SONG.music, SONG.volume);
        SONG.currentVol--;
        if (SONG.currentVol < 0) {
            SONG.currentVol = 0;
        }
    }
}

void volume_mute(global_t *all)
{
    sfFloatRect minusBounds = sfSprite_getGlobalBounds(IMG[14].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&minusBounds, mouseX, mouseY)) {
        SONG.volume = 0.0f;
        sfMusic_setVolume(SONG.music, SONG.volume);
        SONG.currentVol = 0;
    }
}

void volume_max(global_t *all)
{
    sfFloatRect minusBounds = sfSprite_getGlobalBounds(IMG[15].sprite);

    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    int mouseX = mousePos.x;
    int mouseY = mousePos.y;

    if (sfFloatRect_contains(&minusBounds, mouseX, mouseY)) {
        SONG.volume = 100.0f;
        sfMusic_setVolume(SONG.music, SONG.volume);
        SONG.currentVol = 10;
    }
}

void handle_volume_settings(global_t *all)
{
    if (EVENT.type == sfEvtMouseButtonPressed) {
        volume_minus(all);
        volume_plus(all);
        volume_mute(all);
        volume_max(all);
    }
}
