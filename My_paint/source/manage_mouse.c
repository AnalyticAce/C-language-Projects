/*
** EPITECH PROJECT, 2022
** manage mouse click
** File description:
** manage mouse click
*/

#include "myprintflib.h"
#include "my.h"

void manage_mouse_click(sfMouseButtonEvent event, killer *win)
{
    int score = 0;
    if (event.type == sfEvtMouseButtonPressed) {
        my_printf("x = %d, y = %d\n", event.x, event.y);
    }
}
