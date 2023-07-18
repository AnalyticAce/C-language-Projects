/*
** EPITECH PROJECT, 2023
** main drawer 3
** File description:
** main drawer 3
*/

#include "myprintflib.h"
#include "my.h"

void main_drawmagenta(killer *win)
{
    if ((win->pencil_pos.x >= 906 && win->pencil_pos.x <= 921)
        && (win->pencil_pos.y >= 53 && win->pencil_pos.y <= 69)) {
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            win->black_pencil = false; win->green_pencil = false;
            win->yellow_pencil = false; win->blue_pencil = false;
            win->eraser_tool = false; win->red_pencil = false;
            win->cyan_pencil = false; win->magenta_pencil = true;
            win->grey_pencil = false; win->marron_pencil = false;
            win->darkgreen_pencil = false; win->purple_pencil = false;
            win->bciel_pencil = false; win->orange_pencil = false;
            win->yellowdark_pencil = false;
        }
    }
    if (win->magenta_pencil == true)
        draw_pencil_magenta(win->my_hunter, win->mousePosition);
}

void main_drawgrey(killer *win)
{
    if ((win->pencil_pos.x >= 860 && win->pencil_pos.x <= 872)
        && (win->pencil_pos.y >= 29 && win->pencil_pos.y <= 48)) {
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            win->black_pencil = false; win->green_pencil = false;
            win->yellow_pencil = false; win->blue_pencil = false;
            win->eraser_tool = false; win->red_pencil = false;
            win->magenta_pencil = false; win->cyan_pencil = false;
            win->darkgreen_pencil = false; win->marron_pencil = false;
            win->grey_pencil = true; win->purple_pencil = false;
            win->bciel_pencil = false; win->orange_pencil = false;
            win->yellowdark_pencil = false;
        }
    }
    if (win->grey_pencil == true)
        draw_pencil_grey(win->my_hunter, win->mousePosition);
}

void main_draw_darkgreen(killer *win)
{
    if ((win->pencil_pos.x >= 980 && win->pencil_pos.x <= 992)
        && (win->pencil_pos.y >= 53 && win->pencil_pos.y <= 69)) {
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            win->black_pencil = false; win->green_pencil = false;
            win->yellow_pencil = false; win->blue_pencil = false;
            win->eraser_tool = false; win->red_pencil = false;
            win->magenta_pencil = false; win->cyan_pencil = false;
            win->grey_pencil = false; win->marron_pencil = false;
            win->darkgreen_pencil = true; win->purple_pencil = false;
            win->bciel_pencil = false; win->orange_pencil = false;
            win->yellowdark_pencil = false;
        }
    }
    if (win->darkgreen_pencil == true)
        draw_pencil_darkgreen(win->my_hunter, win->mousePosition);
}

void main_drawbciel(killer *win)
{
    if ((win->pencil_pos.x >= 1005 && win->pencil_pos.x <= 1018)
        && (win->pencil_pos.y >= 29 && win->pencil_pos.y <= 48)) {
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            win->black_pencil = false; win->green_pencil = false;
            win->yellow_pencil = false; win->blue_pencil = false;
            win->eraser_tool = false; win->red_pencil = false;
            win->magenta_pencil = false; win->cyan_pencil = false;
            win->grey_pencil = false; win->marron_pencil = false;
            win->darkgreen_pencil = false; win->purple_pencil = false;
            win->bciel_pencil = true; win->orange_pencil = false;
            win->yellowdark_pencil = false;
        }
    }
    if (win->bciel_pencil == true)
        draw_pencil_bciel(win->my_hunter, win->mousePosition);
}

void main_draworange(killer *win)
{
    if ((win->pencil_pos.x >= 933 && win->pencil_pos.x <= 945)
        && (win->pencil_pos.y >= 29 && win->pencil_pos.y <= 48)) {
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            win->black_pencil = false; win->green_pencil = false;
            win->yellow_pencil = false; win->blue_pencil = false;
            win->eraser_tool = false; win->red_pencil = false;
            win->magenta_pencil = false; win->cyan_pencil = false;
            win->grey_pencil = false; win->marron_pencil = false;
            win->darkgreen_pencil = false; win->purple_pencil = false;
            win->bciel_pencil = false; win->orange_pencil = true;
            win->yellowdark_pencil = false;
        }
    }
    if (win->orange_pencil == true)
        draw_pencil_orange(win->my_hunter, win->mousePosition);
}
