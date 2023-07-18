/*
** EPITECH PROJECT, 2023
** draw with color
** File description:
** draw with color
*/

#include "myprintflib.h"
#include "my.h"

void draw_pencil_yellow(sfRenderWindow* window, sfVector2i mousePosition)
{
    static sfCircleShape* circle = NULL;
    if (!circle) {
        circle = sfCircleShape_create();
        sfCircleShape_setRadius(circle, 3.0f);
        sfCircleShape_setFillColor(circle, sfYellow);
    }
    if (mousePosition.x >= 107 && mousePosition.x <= 1180
        && mousePosition.y >= 122 && mousePosition.y <= 648) {
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            sfCircleShape_setPosition(circle, (sfVector2f)
            {mousePosition.x, mousePosition.y});
            sfRenderWindow_drawCircleShape(window, circle, NULL);
        }
    }
}

void eraser(sfRenderWindow* window, sfVector2i mousePosition)
{
    static sfCircleShape* circle = NULL;
    if (!circle) {
        circle = sfCircleShape_create();
        sfCircleShape_setRadius(circle, 10.0f);
        sfCircleShape_setFillColor(circle, sfWhite);
    }
    if (mousePosition.x >= 107 && mousePosition.x <= 1180
        && mousePosition.y >= 122 && mousePosition.y <= 648) {
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            sfCircleShape_setPosition(circle, (sfVector2f)
            {mousePosition.x, mousePosition.y});
            sfRenderWindow_drawCircleShape(window, circle, NULL);
        }
    }
}

void draw_pencil_cyan(sfRenderWindow* window, sfVector2i mousePosition)
{
    static sfCircleShape* circle = NULL;
    if (!circle) {
        circle = sfCircleShape_create();
        sfCircleShape_setRadius(circle, 3.0f);
        sfCircleShape_setFillColor(circle, sfCyan);
    }
    if (mousePosition.x >= 107 && mousePosition.x <= 1180
        && mousePosition.y >= 122 && mousePosition.y <= 648) {
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            sfCircleShape_setPosition(circle, (sfVector2f)
            {mousePosition.x, mousePosition.y});
            sfRenderWindow_drawCircleShape(window, circle, NULL);
        }
    }
}

void draw_pencil_grey(sfRenderWindow* window, sfVector2i mousePosition)
{
    static sfCircleShape* circle = NULL;
    if (!circle) {
        circle = sfCircleShape_create();
        sfCircleShape_setRadius(circle, 3.0f);
        sfCircleShape_setFillColor(circle, sfColor_fromRGBA(0, 0, 0, 2.5));
    }
    if (mousePosition.x >= 107 && mousePosition.x <= 1180
        && mousePosition.y >= 122 && mousePosition.y <= 648) {
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            sfCircleShape_setPosition(circle, (sfVector2f)
            {mousePosition.x, mousePosition.y});
            sfRenderWindow_drawCircleShape(window, circle, NULL);
        }
    }
}

void draw_pencil_marron(sfRenderWindow* window, sfVector2i mousePosition)
{
    static sfCircleShape* circle = NULL;
    if (!circle) {
        circle = sfCircleShape_create();
        sfCircleShape_setRadius(circle, 3.0f);
        sfCircleShape_setFillColor(circle, sfColor_fromRGB(165, 42, 42));
    }
    if (mousePosition.x >= 107 && mousePosition.x <= 1180
        && mousePosition.y >= 122 && mousePosition.y <= 648) {
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            sfCircleShape_setPosition(circle, (sfVector2f)
            {mousePosition.x, mousePosition.y});
            sfRenderWindow_drawCircleShape(window, circle, NULL);
        }
    }
}
