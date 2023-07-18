/*
** EPITECH PROJECT, 2023
** sprite creator
** File description:
** sprite creator
*/

#include "myprintflib.h"
#include "my.h"

void create_andfirst_sprite(killer *win)
{
    win->my_hunter = create_window(1185, 650, 32, "mypaint");
    win->my_texture = sfTexture_createFromFile("images/paint.jpg", NULL);
    win->my_sprite = sfSprite_create();
    sfSprite_setTexture(win->my_sprite, win->my_texture, sfTrue);
}

void upload_sprite(killer *win)
{
    win->st = sfTexture_createFromFile("images/upload.png", NULL);
    win->sp = sfSprite_create();
    sfSprite_setTexture(win->sp, win->st, sfTrue);
}

void quit_sprite(killer *win)
{
    win->quit_texture = sfTexture_createFromFile
    ("images/quitp-removebg-preview.png", NULL);
    win->quit_sprite = sfSprite_create();
    sfSprite_setTexture(win->quit_sprite, win->quit_texture, sfTrue);
}

void save_sprite(killer *win)
{
    win->save_texture = sfTexture_createFromFile
    ("images/save-removebg-preview.png", NULL);
    win->save_sprite = sfSprite_create();
    sfSprite_setTexture(win->save_sprite, win->save_texture, sfTrue);
}

void trait_sprite(killer *win)
{
    win->trait_texture = sfTexture_createFromFile("images/trait.png", NULL);
    win->trait_sprite = sfSprite_create();
    sfSprite_setTexture(win->trait_sprite, win->trait_texture, sfTrue);
}
