/*
** EPITECH PROJECT, 2023
** game levels
** File description:
** game levels
*/

#include "myprintflib.h"
#include "my.h"

void manage_mouse_levels(sfMouseButtonEvent event)
{
    int score = 0;
    if (event.type == sfEvtMouseButtonPressed) {
        my_printf("x = %d, y = %d\n", event.x, event.y);
    }
}

void close_levels(sfRenderWindow *levels, sfEvent event)
{
    while (sfRenderWindow_pollEvent(levels, &event)) {
        switch (event.type) {
        case sfEvtClosed : sfRenderWindow_close(levels); break;
        case sfEvtKeyReleased: my_printf("key has been released\n"); break;
        }
        if (event.type == sfEvtKeyPressed) {
            if (event.key.code == sfKeyEscape) {
                sfRenderWindow_close(levels);
            }
        }
        manage_mouse_levels(event.mouseButton);
    }
}

void display2(sfRenderWindow *levels, sfEvent event)
{
    sfTexture *my_texture; sfSprite *my_sprite; sfTexture *st; sfSprite *sp;
    my_texture = sfTexture_createFromFile("cangame.png", NULL);
    my_sprite = sfSprite_create();
    st = sfTexture_createFromFile("niveau-removebg-preview.png", NULL);
    sp = sfSprite_create();
    sfVector2f scale = {0.75, 0.75};
    sfVector2f sp_pos = {300, 130};
    while (sfRenderWindow_isOpen(levels)) {
        sfRenderWindow_display(levels);
        sfSprite_setTexture(my_sprite, my_texture, sfTrue);
        sfSprite_setScale(my_sprite, scale);
        sfRenderWindow_drawSprite(levels, my_sprite, NULL);
        sfSprite_setTexture(sp, st, sfTrue);
        sfSprite_setPosition(sp, sp_pos);
        sfRenderWindow_drawSprite(levels, sp, NULL);
        close_levels(levels, event);
    }
}
