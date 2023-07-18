/*
** EPITECH PROJECT, 2023
** function to open and manage event
** File description:
** the same
*/

#include "myprintflib.h"
#include "my.h"

sfRenderWindow *create_window(unsigned int x, unsigned int y,
    unsigned int bpp, char *title)
{
    sfVideoMode video_mode = {x, y, bpp};
    return (sfRenderWindow_create(video_mode, title,
    sfClose | sfResize, NULL));
}

void close_window(sfRenderWindow *my_hunter, sfEvent event, killer *win)
{
    while (sfRenderWindow_pollEvent(win->my_hunter, &event)) {
        switch (event.type) {
        case sfEvtClosed : sfRenderWindow_close(win->my_hunter); break;
        case sfEvtKeyReleased: my_printf("key has been released\n"); break;
        case sfEvtKeyPressed: my_printf("key has been pressed\n"); break;
        }
        if (event.type == sfEvtKeyPressed) {
            if (event.key.code == sfKeyEscape) {
                sfRenderWindow_close(win->my_hunter);
            }
        }
        manage_mouse_click(event.mouseButton, win);
        mouse_click(win->my_hunter, event.mouseButton);
    }
}

void mouse_click(sfRenderWindow *my_hunter, sfMouseButtonEvent event)
{
    sfEvent event1;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(my_hunter);
    if (mouse.x >= 18 && mouse.x <= 55 &&
        mouse.y >= 168 && mouse.y <= 200) {
        if (event.type == sfEvtMouseButtonPressed) {
            my_printf("quit zone\n");
            sfRenderWindow_close(my_hunter);
        }
    }
}
