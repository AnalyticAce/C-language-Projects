/*
** EPITECH PROJECT, 2022
** manage mouse click
** File description:
** manage mouse click
*/

#include "myprintflib.h"
#include "my.h"

void window_sprite(killer *win)
{
    create_andfirst_sprite(win);
    upload_sprite(win);
    quit_sprite(win);
    save_sprite(win);
    trait_sprite(win);
}

void scale_and_position(killer *win)
{
    window_scale(win);
    upload_scale(win);
    save_scale(win);
    quit_scale(win);
    trait_scale(win);
}

void main_sprite(killer *win)
{
    sfSprite_setScale(win->my_sprite, win->scale);
    sfRenderWindow_drawSprite(win->my_hunter, win->my_sprite, NULL);
}

void mouse_and_pencil_pos(killer *win)
{
    win->mousePosition = sfMouse_getPositionRenderWindow(win->my_hunter);
    win->pencil_pos = sfMouse_getPositionRenderWindow(win->my_hunter);
}

int main(void)
{
    killer *win = malloc(sizeof(killer)); window_sprite(win);
    scale_and_position(win); sfRenderWindow_clear(win->my_hunter, sfWhite);
    initialize_bool(win);
    while (sfRenderWindow_isOpen(win->my_hunter)) {
        close_window(win->my_hunter, win->event, win);
        mouse_and_pencil_pos(win);
        sprite_displayer(win);
        all_main_draw(win);
        save_event(win);
        sfRenderWindow_display(win->my_hunter);
    }
    window_destroy(win);
}
