/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** init_song
*/

#include "../include/rpg.h"

void init_song(global_t *all)
{
    SONG.music = sfMusic_createFromFile("./content/song/song.ogg");
    sfMusic_setLoop(SONG.music, sfTrue);
    sfMusic_play(SONG.music);

    SONG.volume = 60.0f;
    sfMusic_setVolume(SONG.music, SONG.volume);
}
