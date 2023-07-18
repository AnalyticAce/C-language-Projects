##
## EPITECH PROJECT, 2022
## my_printf_Makefile
## File description:
## my_printf_Makefile
##

TST =	source/my_printf/my_strlen.c	\
		source/my_printf/my_putchar.c	\
		source/my_printf/my_putstr.c	\
		source/my_printf/my_putnbr.c	\
		source/my_printf/my_getnbr.c	\
		source/my_printf/my_strcmp.c	\

STST =	tests/test_my_strlen.c	\
		tests/test_my_putstr.c	\
		tests/test_my_getnbr.c	\

SRC	=	source/tools/my_putstr.c	\
		source/tools/my_putchar.c	\
		source/sprites/sprite_displayer.c	\
		source/drawer/main_drawer.c	\
		source/drawer/main_drawer2.c	\
		source/drawer/main_drawer3.c	\
		source/scalator.c	\
		source/drawer/main_drawer_content.c	\
		source/open_and_close.c	\
		source/tools/my_putnbr.c	\
		source/drawer/draw_with_color.c	\
		source/drawer/draw_with_color2.c	\
		source/drawer/draw_with_color3.c	\
		source/save_screen.c	\
		source/manage_mouse.c	\
		source/sprites/sprite_creator.c	\
		source/tools/my_printf.c	\
		source/move_rect.c	\
		source/window_destroy.c	\
		source/levels.c\
		source/my_hunter.c	\

OBJ     =       $(SRC:.c=.o)
CC      = gcc

STAY    =       -lcsfml-system -lcsfml-audio -lcsfml-window
NAME    =       my_paint

all:    $(NAME)

$(NAME) :               $(OBJ)
		$(CC) $(OBJ)  -o $(NAME) -lcsfml-graphics $(STAY)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)
		rm -f *~
		clear
re:     fclean all
