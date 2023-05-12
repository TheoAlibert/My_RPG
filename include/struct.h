/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-myrpg-remy.canal
** File description:
** struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

    typedef struct params {
        sfVideoMode mode;
        sfRenderWindow *window;
        sfEvent event;
    } params_t;

    typedef struct images {
        sfTexture *texture1;
        sfTexture *texture2;
        sfTexture *texture3;
        sfSprite *sprite;
        sfVector2f position;
        sfVector2f scale;
    } images_t;

    typedef struct click {
        bool isClicked_P1;
        bool isClicked_P2;
        bool isClicked_P3;
        bool isClicked_buy;
        bool isClicked_info;
        bool isIngame;
        bool infos;
        bool isFullscreen;
        bool isClicked_settings;
        bool isKeyPressed;
        bool isClicked_pause;
        bool isClicked_param;
        bool isClicked_information;
        bool isClicked_inventory;
        int oc;
    } click_t;

    typedef struct boss {
        bool isSkeleton;
        bool isGoblin;
        bool isMinotaur;
        bool isDemon;
        bool isWizard;
    } boss_t;

    typedef struct atk {
        bool isPunch;
        bool isFire;
        bool isGrass;
        bool isLightning;
        bool isWater;
    } atk_t;

    typedef struct colision {
        int stop;
        int stopleft;
        int stopright;
        int stopup;
        int stopdown;
    } colision_t;

    typedef struct song {
        sfMusic *music;
        float volume;
        int currentVol;
    } song_t;

    typedef struct animated {
        int currentFrame;
        int frameCount;
        int frameWidth;
        int frameHeight;
        sfIntRect rect;
        sfClock *clock;
        sfTime elapsed;
        float frameTime;
    } animated_t;

    typedef struct guy {
        int currentFrame;
        int frameCount;
        int frameWidth;
        int frameHeight;
        sfIntRect rect;
        sfClock *clock;
        sfTime elapsed;
        float frameTime;
    } guy_t;

    typedef struct global {
        params_t settings;
        images_t *pictures;
        click_t click;
        colision_t colision;
        song_t song;
        animated_t animated;
        guy_t *guy;
        boss_t boss;
        atk_t atk;
    } global_t;

#endif /* !STRUCT_H_ */
