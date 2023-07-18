/*
** EPITECH PROJECT, 2023
** all main draw
** File description:
** the same
*/

#include "myprintflib.h"
#include "my.h"

void initialize_bool(killer *win)
{
    win->black_pencil = false; win->green_pencil = false;
    win->yellow_pencil = false; win->blue_pencil = false;
    win->red_pencil = false; win->eraser_tool = false;
    win->cyan_pencil = false; win->grey_pencil = false;
    win->magenta_pencil = false; win->marron_pencil = false;
    win->darkgreen_pencil = false; win->purple_pencil = false;
    win->bciel_pencil = false; win->orange_pencil = false;
    win->yellowdark_pencil = false; win->now_pencil = false;
}

void all_main_draw(killer *win)
{
    main_drawblack(win); main_drawred(win);
    main_drawyellow(win); main_drawgreen(win); main_drawblue(win);
    main_drawmagenta(win); main_drawcyan(win); main_drawgrey(win);
    main_eraser(win); main_drawmarron(win); main_draw_darkgreen(win);
    main_drawpurple(win); main_drawbciel(win); main_draworange(win);
    main_drawdark_yellow(win);
}
