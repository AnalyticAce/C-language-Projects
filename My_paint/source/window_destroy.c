/*
** EPITECH PROJECT, 2022
** sf destroyer
** File description:
** sf destroyer
*/
#include "myprintflib.h"
#include "my.h"

void window_destroy(killer *destroy)
{
    sfRenderWindow_destroy(destroy->my_hunter);
    sfSprite_destroy(destroy->my_sprite);
    sfSprite_destroy(destroy->trait_sprite);
    sfSprite_destroy(destroy->save_sprite);
    sfTexture_destroy(destroy->my_texture);
    sfTexture_destroy(destroy->st);
    sfTexture_destroy(destroy->save_texture);
    sfTexture_destroy(destroy->trait_texture);
    sfSprite_destroy(destroy->sp);
    sfSprite_destroy(destroy->quit_sprite);
    sfTexture_destroy(destroy->quit_texture);
    if (destroy) {
        free(destroy);
    }
    destroy = NULL;
}
