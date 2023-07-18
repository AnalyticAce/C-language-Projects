/*
** EPITECH PROJECT, 2023
** sprite setPosition, scale and display
** File description:
** displayer
*/

#include <stddef.h>
#include "my.h"

void uploade_sprite_displayer(killer *win)
{
    sfSprite_setScale(win->sp, win->upload);
    sfSprite_setPosition(win->sp, win->pos);
    sfRenderWindow_drawSprite(win->my_hunter, win->sp, NULL);
}

void quit_sprite_displayer(killer *win)
{
    sfSprite_setScale(win->quit_sprite, win->quit_scale);
    sfSprite_setPosition(win->quit_sprite, win->quit_pos);
    sfRenderWindow_drawSprite(win->my_hunter, win->quit_sprite, NULL);
}

void save_sprite_displayer(killer *win)
{
    sfSprite_setScale(win->save_sprite, win->save_scale);
    sfSprite_setPosition(win->save_sprite, win->save_pos);
    sfRenderWindow_drawSprite(win->my_hunter, win->save_sprite, NULL);
}

void trait_sprite_displayer(killer *win)
{
    sfSprite_setScale(win->trait_sprite, win->trait_scale);
    sfSprite_setPosition(win->trait_sprite, win->trait_pos);
    sfRenderWindow_drawSprite(win->my_hunter, win->trait_sprite, NULL);
}

void sprite_displayer(killer *win)
{
    main_sprite(win);
    uploade_sprite_displayer(win);
    quit_sprite_displayer(win);
    save_sprite_displayer(win);
    trait_sprite_displayer(win);
}
