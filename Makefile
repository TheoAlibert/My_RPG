##
## EPITECH PROJECT, 2023
## B-MUL-200-LYN-2-1-myrpg-remy.canal
## File description:
## Makefile
##

SRC =      	src/main.c \
			src/init.c \
			src/mainMenu/inits/init_menu.c \
			src/mainMenu/inits/init_menu2.c \
			src/mainMenu/inits/init_infos_player.c \
			src/mainMenu/ifClick/if_click.c \
			src/mainMenu/ifClick/if_click_quit.c \
			src/mainMenu/ifClick/if_click_start.c \
			src/mainMenu/ifClick/if_click_settings.c \
			src/mainMenu/ifClick/if_click_player1.c \
			src/mainMenu/ifClick/if_click_player2.c \
			src/mainMenu/ifClick/if_click_player3.c \
			src/mainMenu/draw_sprites.c \
			src/mainMenu/display_window.c \
			src/destroy.c \
			src/destroy_sprites.c \
			src/destroy_sprites2.c \
			src/destroy_textures.c \
			src/destroy_textures2.c \
			src/init_song.c \
			src/handle_volume.c \
			src/splash_screen.c \
			src/splash_end.c \
			src/mainMenu/ifClick/if_click_plus.c \
			src/mainMenu/ifClick/if_click_minus.c \
			src/mainMenu/ifClick/if_click_plus2.c \
			src/mainMenu/ifClick/if_click_minus2.c \
			src/mainMenu/ifClick/if_click_mute.c \
			src/mainMenu/ifClick/if_click_max.c \
			src/mainMenu/ifClick/if_click_check.c \
			src/mainMenu/ifClick/if_click_null.c \
			src/mainMenu/ifClick/if_click_info.c \
			src/mainMenu/inits/init_menu3.c \
			src/mainMenu/ifClick/if_click_buy.c \
			src/mainMenu/if_player3_is_buy.c \
			src/mainMenu/inits/init_menu4.c \
			src/mainMenu/inits/init_resume.c \
			src/inGame/inits/init_ingame.c \
			src/inGame/inits/init_ingame2.c \
			src/inGame/inits/init_maps.c \
			src/inGame/inits/init_bossmaps.c \
			src/inGame/inits/init_pnj.c \
			src/inGame/inits/init_dial.c \
			src/inGame/inits/set_pnj.c \
			src/inGame/draw_ingame_sprites.c \
			src/inGame/draw_sprites_winmap.c \
			src/inGame/mooves/handle_updown_p1.c \
			src/inGame/mooves/handle_updown_p2.c \
			src/inGame/mooves/handle_rightleft_p1.c \
			src/inGame/mooves/handle_rightleft_p2.c \
			src/inGame/choose_player.c \
			src/inGame/colision/handle_colision1.c \
			src/inGame/colision/handle_colision2.c \
			src/inGame/colision/handle_colision3.c \
			src/inGame/colision/handle_colision4.c \
			src/inGame/colision/init_colision.c \
			src/inGame/colision/handle_colision_boss.c \
			src/inGame/colision/handle_pnj_coli.c \
			src/inGame/display_window2.c \
			src/inGame/disp_map.c \
			src/inGame/disp_win_maps.c \
			src/inGame/inits/init_boss.c \
			src/inGame/inits/init_gameplayer.c \
			src/inGame/inits/init_ingame_menu1.c \
			src/inGame/inits/init_ingame_menu2.c \
			src/inGame/menu/draw_sprites_menu_ingame.c \
			src/inGame/menu/init_menu_ingame.c \
			src/inGame/menu/if_click_ingame.c \
			src/inGame/menu/ifClick/if_click_pause.c \
			src/inGame/menu/ifClick/if_click_param.c \
			src/inGame/menu/ifClick/if_click_information.c \
			src/inGame/menu/ifClick/if_click_home.c \
			src/inGame/menu/ifClick/if_click_close.c \
			src/inGame/menu/ifClick/if_click_inventory.c \
			src/inGame/inits/init_portal.c \
			src/inGame/draw_map_combat.c \
			src/inGame/inits/init_map_combat.c \
			src/fights/detect_fight.c \
			src/fights/draw_attack.c \
			src/fights/if_click_punch.c \
			src/fights/if_click_fire.c \
			src/fights/if_click_lightning.c \
			src/fights/if_click_grass.c \
			src/fights/if_click_water.c \
			src/inGame/inits/init_attack.c

CFLAGS =    -Wall -Wextra -g3

CFLAGS +=	-lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio

CC =		gcc -o my_rpg

OBJ =      	$(SRC:.c=.o)

NAME =  	my_rpg

$(NAME):    $(OBJ)
	$(CC) $(OBJ) $(CFLAGS)

all:    $(NAME)

clean:
	rm $(OBJ)

fclean: clean
	rm my_rpg

re: fclean all
