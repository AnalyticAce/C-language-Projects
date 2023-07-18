/*
** EPITECH PROJECT, 2023
** scalator
** File description:
** scal setter
*/

#include "myprintflib.h"
#include "my.h"

void window_scale(killer *win)
{
    win->scale.x = 1.1; win->scale.y = 1;
}

void upload_scale(killer *win)
{
    win->upload.x = 0.35; win->upload.y = 0.35;
    win->pos.x = -7; win->pos.y = 210;
}

void save_scale(killer *win)
{
    win->save_scale.x = 0.16; win->save_scale.y = 0.16;
    win->save_pos.x = -18; win->save_pos.y = 120;
}

void quit_scale(killer *win)
{
    win->quit_scale.x = 0.1; win->quit_scale.y = 0.1;
    win->quit_pos.x = 15; win->quit_pos.y = 160;
}

void trait_scale(killer *win)
{
    win->trait_pos.x = 0; win->trait_pos.y = 120;
    win->trait_scale.x = 0.99; win->trait_scale.y = 3;
}
