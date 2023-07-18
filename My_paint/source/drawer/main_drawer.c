/*
** EPITECH PROJECT, 2023
** main of earch draw function of color
** File description:
** the same
*/

#include "myprintflib.h"
#include "my.h"
#include <SFML/Graphics/Image.h>

void main_eraser(killer *win)
{
    if ((win->pencil_pos.x >= 261 && win->pencil_pos.x <= 278)
        && (win->pencil_pos.y >= 65 && win->pencil_pos.y <= 86)) {
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            win->black_pencil = false; win->green_pencil = false;
            win->yellow_pencil = false; win->red_pencil = false;
            win->blue_pencil = false; win->magenta_pencil = false;
            win->cyan_pencil = false; win->eraser_tool = true;
            win->grey_pencil = false; win->marron_pencil = false;
            win->darkgreen_pencil = false; win->purple_pencil = false;
            win->bciel_pencil = false; win->orange_pencil = false;
            win->yellowdark_pencil = false;
        }
    }
    if (win->eraser_tool == true)
        eraser(win->my_hunter, win->mousePosition);
}

void main_drawcyan(killer *win)
{
    if ((win->pencil_pos.x >= 1004 && win->pencil_pos.x <= 1017)
        && (win->pencil_pos.y >= 53 && win->pencil_pos.y <= 69)) {
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            win->black_pencil = false; win->green_pencil = false;
            win->yellow_pencil = false; win->blue_pencil = false;
            win->eraser_tool = false; win->red_pencil = false;
            win->magenta_pencil = false; win->cyan_pencil = true;
            win->grey_pencil = false; win->marron_pencil = false;
            win->darkgreen_pencil = false; win->purple_pencil = false;
            win->bciel_pencil = false; win->orange_pencil = false;
            win->yellowdark_pencil = false;
        }
    }
    if (win->cyan_pencil == true)
        draw_pencil_cyan(win->my_hunter, win->mousePosition);
}

void main_drawmarron(killer *win)
{
    if ((win->pencil_pos.x >= 884 && win->pencil_pos.x <= 896)
        && (win->pencil_pos.y >= 29 && win->pencil_pos.y <= 48)) {
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            win->black_pencil = false; win->green_pencil = false;
            win->yellow_pencil = false; win->blue_pencil = false;
            win->eraser_tool = false; win->red_pencil = false;
            win->magenta_pencil = false; win->cyan_pencil = false;
            win->grey_pencil = false; win->darkgreen_pencil = false;
            win->marron_pencil = true; win->purple_pencil = false;
            win->bciel_pencil = false; win->orange_pencil = false;
            win->yellowdark_pencil = false;
        }
    }
    if (win->marron_pencil == true)
        draw_pencil_marron(win->my_hunter, win->mousePosition);
}

void main_drawpurple(killer *win)
{
    if ((win->pencil_pos.x >= 1054 && win->pencil_pos.x <= 1066)
        && (win->pencil_pos.y >= 29 && win->pencil_pos.y <= 48)) {
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            win->black_pencil = false; win->green_pencil = false;
            win->yellow_pencil = false; win->blue_pencil = false;
            win->eraser_tool = false; win->red_pencil = false;
            win->magenta_pencil = false; win->cyan_pencil = false;
            win->grey_pencil = false; win->marron_pencil = false;
            win->darkgreen_pencil = false; win->purple_pencil = true;
            win->bciel_pencil = false; win->orange_pencil = false;
            win->yellowdark_pencil = false;
        }
    }
    if (win->purple_pencil == true)
        draw_pencil_purple(win->my_hunter, win->mousePosition);
}

void main_drawdark_yellow(killer *win)
{
    if ((win->pencil_pos.x >= 932 && win->pencil_pos.x <= 944)
        && (win->pencil_pos.y >= 53 && win->pencil_pos.y <= 69)) {
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            win->black_pencil = false; win->green_pencil = false;
            win->yellow_pencil = false; win->blue_pencil = false;
            win->eraser_tool = false; win->red_pencil = false;
            win->magenta_pencil = false; win->cyan_pencil = false;
            win->grey_pencil = false; win->marron_pencil = false;
            win->darkgreen_pencil = false; win->purple_pencil = false;
            win->bciel_pencil = false; win->orange_pencil = false;
            win->yellowdark_pencil = true;
        }
    }
    if (win->yellowdark_pencil == true)
        draw_pencil_yellowdark(win->my_hunter, win->mousePosition);
}
