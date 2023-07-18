/*
** EPITECH PROJECT, 2023
** main drawer 2
** File description:
** main drawer 2
*/

#include "myprintflib.h"
#include "my.h"

void main_drawblack(killer *win)
{
    if ((win->pencil_pos.x >= 836 && win->pencil_pos.x <= 848)
        && (win->pencil_pos.y >= 29 && win->pencil_pos.y <= 48)) {
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            win->green_pencil = false; win->yellow_pencil = false;
            win->red_pencil = false; win->blue_pencil = false;
            win->eraser_tool = false; win->magenta_pencil = false;
            win->black_pencil = true; win->grey_pencil = false;
            win->cyan_pencil = false; win->marron_pencil = false;
            win->darkgreen_pencil = false; win->purple_pencil = false;
            win->bciel_pencil = false; win->orange_pencil = false;
            win->yellowdark_pencil = false;
        }
    }
    if (win->black_pencil == true)
        draw_pencil_black(win->my_hunter, win->mousePosition);
}

void main_drawgreen(killer *win)
{
    if ((win->pencil_pos.x >= 980 && win->pencil_pos.x <= 995)
        && (win->pencil_pos.y >= 29 && win->pencil_pos.y <= 48)) {
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            win->black_pencil = false; win ->yellow_pencil = false;
            win->blue_pencil = false; win->red_pencil = false;
            win->eraser_tool = false; win->magenta_pencil = false;
            win->green_pencil = true; win->grey_pencil = false;
            win->cyan_pencil = false; win->marron_pencil = false;
            win->darkgreen_pencil = false; win->purple_pencil = false;
            win->bciel_pencil = false; win->orange_pencil = false;
            win->yellowdark_pencil = false;
        }
    }
    if (win->green_pencil == true)
        draw_pencil_green(win->my_hunter, win->mousePosition);
}

void main_drawyellow(killer *win)
{
    if ((win->pencil_pos.x >= 955 && win->pencil_pos.x <= 969)
        && (win->pencil_pos.y >= 29 && win->pencil_pos.y <= 48)) {
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            win->black_pencil = false; win->green_pencil = false;
            win->blue_pencil = false; win->red_pencil = false;
            win->eraser_tool = false; win->magenta_pencil = false;
            win->cyan_pencil = false; win->yellow_pencil = true;
            win->grey_pencil = false; win->marron_pencil = false;
            win->darkgreen_pencil = false; win->purple_pencil = false;
            win->bciel_pencil = false; win->orange_pencil = false;
            win->yellowdark_pencil = false;
        }
    }
    if (win->yellow_pencil == true)
        draw_pencil_yellow(win->my_hunter, win->mousePosition);
}

void main_drawblue(killer *win)
{
    if ((win->pencil_pos.x >= 1029 && win->pencil_pos.x <= 1041)
        && (win->pencil_pos.y >= 29 && win->pencil_pos.y <= 48)) {
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            win->black_pencil = false; win->green_pencil = false;
            win->yellow_pencil = false; win->red_pencil = false;
            win->eraser_tool = false; win->magenta_pencil = false;
            win->cyan_pencil = false; win->blue_pencil = true;
            win->grey_pencil = false; win->marron_pencil = false;
            win->darkgreen_pencil = false; win->purple_pencil = false;
            win->bciel_pencil = false; win->orange_pencil = false;
            win->yellowdark_pencil = false;
        }
    }
    if (win->blue_pencil == true)
        draw_pencil_blue(win->my_hunter, win->mousePosition);
}

void main_drawred(killer *win)
{
    if ((win->pencil_pos.x >= 908 && win->pencil_pos.x <= 920)
        && (win->pencil_pos.y >= 29 && win->pencil_pos.y <= 48)) {
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            win->black_pencil = false; win->green_pencil = false;
            win->yellow_pencil = false; win->blue_pencil = false;
            win->eraser_tool = false; win->cyan_pencil = false;
            win->magenta_pencil = false; win->red_pencil = true;
            win->grey_pencil = false; win->marron_pencil = false;
            win->darkgreen_pencil = false; win->purple_pencil = false;
            win->bciel_pencil = false; win->orange_pencil = false;
            win->yellowdark_pencil = false;
        }
    }
    if (win->red_pencil == true)
        draw_pencil_red(win->my_hunter, win->mousePosition);
}
