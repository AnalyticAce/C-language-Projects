/*
** EPITECH PROJECT, 2023
** draw with kind of color
** File description:
** draw with kind of color
*/

#include "myprintflib.h"
#include "my.h"

void draw_pencil_darkgreen(sfRenderWindow* window, sfVector2i mousePosition)
{
    static sfCircleShape* circle = NULL;
    if (!circle) {
        circle = sfCircleShape_create();
        sfCircleShape_setRadius(circle, 3.0f);
        sfCircleShape_setFillColor(circle, sfColor_fromRGB(141, 209, 23));
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

void draw_pencil_purple(sfRenderWindow* window, sfVector2i mousePosition)
{
    static sfCircleShape* circle = NULL;
    if (!circle) {
        circle = sfCircleShape_create();
        sfCircleShape_setRadius(circle, 3.0f);
        sfCircleShape_setFillColor(circle, sfColor_fromRGB(110, 16, 105));
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

void draw_pencil_bciel(sfRenderWindow* window, sfVector2i mousePosition)
{
    static sfCircleShape* circle = NULL;
    if (!circle) {
        circle = sfCircleShape_create();
        sfCircleShape_setRadius(circle, 3.0f);
        sfCircleShape_setFillColor(circle, sfColor_fromRGB(78, 143, 212));
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

void draw_pencil_orange(sfRenderWindow* window, sfVector2i mousePosition)
{
    static sfCircleShape* circle = NULL;
    if (!circle) {
        circle = sfCircleShape_create();
        sfCircleShape_setRadius(circle, 3.0f);
        sfCircleShape_setFillColor(circle, sfColor_fromRGB(227, 102, 18));
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

void draw_pencil_yellowdark(sfRenderWindow* window, sfVector2i mousePosition)
{
    static sfCircleShape* circle = NULL;
    if (!circle) {
        circle = sfCircleShape_create();
        sfCircleShape_setRadius(circle, 3.0f);
        sfCircleShape_setFillColor(circle, sfColor_fromRGB(235, 174, 33));
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
