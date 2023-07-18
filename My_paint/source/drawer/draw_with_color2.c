/*
** EPITECH PROJECT, 2023
** draw with color 2
** File description:
** the same
*/

#include "myprintflib.h"
#include "my.h"
#include <SFML/Graphics/Image.h>

void draw_pencil_green(sfRenderWindow* window, sfVector2i mousePosition)
{
    static sfCircleShape* circle = NULL;
    if (!circle) {
        circle = sfCircleShape_create();
        sfCircleShape_setRadius(circle, 3.0f);
        sfCircleShape_setFillColor(circle, sfGreen);
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

void draw_pencil_blue(sfRenderWindow* window, sfVector2i mousePosition)
{
    static sfCircleShape* circle = NULL;
    if (!circle) {
        circle = sfCircleShape_create();
        sfCircleShape_setRadius(circle, 3.0f);
        sfCircleShape_setFillColor(circle, sfBlue);
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

void draw_pencil_red(sfRenderWindow* window, sfVector2i mousePosition)
{
    static sfCircleShape* circle = NULL;
    if (!circle) {
        circle = sfCircleShape_create();
        sfCircleShape_setRadius(circle, 3.0f);
        sfCircleShape_setFillColor(circle, sfRed);
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

void draw_pencil_magenta(sfRenderWindow* window, sfVector2i mousePosition)
{
    static sfCircleShape* circle = NULL;
    if (!circle) {
        circle = sfCircleShape_create();
        sfCircleShape_setRadius(circle, 3.0f);
        sfCircleShape_setFillColor(circle, sfMagenta);
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

void draw_pencil_black(sfRenderWindow* window, sfVector2i mousePosition)
{
    static sfCircleShape* circle = NULL;
    if (!circle) {
        circle = sfCircleShape_create();
        sfCircleShape_setRadius(circle, 3.0f);
        sfCircleShape_setFillColor(circle, sfBlack);
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
