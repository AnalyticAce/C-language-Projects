/*
** EPITECH PROJECT, 2022
** my_printflib
** File description:
** my_printflib
*/

#ifndef ELEMENTS_H
    #define ELEMENTS_H
    #include <SFML/Graphics/Image.h>
    #include <stdio.h>
    #include <stdbool.h>
    #include <stddef.h>
    #include "myprintflib.h"
    #include <SFML/Graphics.h>
    #include <SFML/System/Export.h>
    #include <SFML/System/Time.h>
    #include <SFML/System/Types.h>
    #include <SFML/Audio/Music.h>
    #include <SFML/Audio/Sound.h>
    #include <SFML/Window/Export.h>
    #include <SFML/Window/Types.h>
    #include <SFML/System/Vector2.h>
    #include <SFML/Window.h>
    #include <SFML/Window/Event.h>
    #include <SFML/System.h>

typedef struct hunter{
    sfRenderWindow *my_hunter;
    sfEvent event;
    sfIntRect rect;
    sfVector2f pos;
    sfMusic *my_music;
    sfMouseButtonEvent mousevent;
    sfTexture *my_texture;
    sfVector2i bird_posi;
    sfSprite *my_sprite;
    sfTexture *st;
    sfSprite *sp;
    sfTexture *quit_texture;
    sfSprite *quit_sprite;
    sfTexture *save_texture;
    sfSprite *save_sprite;
    sfVector2f save_pos;
    sfTexture *trait_texture;
    sfSprite *trait_sprite;
    sfVector2f quit_pos;
    sfVector2f trait_pos;
    sfMusic *kill_sound;
    int x;
    int y;
    sfVector2f scale;
    sfVector2f upload;
    sfVector2f save_scale;
    sfVector2f trait_scale;
    sfVector2f quit_scale;
    sfVector2i mouse;
    sfCircleShape *circle;
    sfVector2i mousePosition;
    sfVector2i pencil_pos;
    bool black_pencil;
    bool green_pencil;
    bool yellow_pencil;
    bool blue_pencil;
    bool red_pencil;
    bool eraser_tool;
    bool magenta_pencil;
    bool cyan_pencil;
    bool grey_pencil;
    bool marron_pencil;
    bool darkgreen_pencil;
    bool purple_pencil;
    bool bciel_pencil;
    bool orange_pencil;
    bool yellowdark_pencil;
    bool now_pencil;
}killer;
void draw_pencil_darkgreen(sfRenderWindow* window, sfVector2i mousePosition);
void draw_pencil_purple(sfRenderWindow* window, sfVector2i mousePosition);
void draw_pencil_bciel(sfRenderWindow* window, sfVector2i mousePosition);
void draw_pencil_orange(sfRenderWindow* window, sfVector2i mousePosition);
void draw_pencil_yellowdark(sfRenderWindow* window, sfVector2i mousePosition);
void draw_pencil_green(sfRenderWindow* window, sfVector2i mousePosition);
void draw_pencil_blue(sfRenderWindow* window, sfVector2i mousePosition);
void draw_pencil_red(sfRenderWindow* window, sfVector2i mousePosition);
void draw_pencil_magenta(sfRenderWindow* window, sfVector2i mousePosition);
void draw_pencil_black(sfRenderWindow* window, sfVector2i mousePosition);
void draw_pencil_yellow(sfRenderWindow* window, sfVector2i mousePosition);
void eraser(sfRenderWindow* window, sfVector2i mousePosition);
void draw_pencil_cyan(sfRenderWindow* window, sfVector2i mousePosition);
void draw_pencil_grey(sfRenderWindow* window, sfVector2i mousePosition);
void draw_pencil_marron(sfRenderWindow* window, sfVector2i mousePosition);
void manage_mouse_levels(sfMouseButtonEvent event);
void close_levels(sfRenderWindow *levels, sfEvent event);
void display2(sfRenderWindow *levels, sfEvent event);
void initialize_bool(killer *win);
void all_main_draw(killer *win);
void main_eraser(killer *win);
void main_drawcyan(killer *win);
void main_drawmarron(killer *win);
void main_drawpurple(killer *win);
void main_drawdark_yellow(killer *win);
void main_drawblack(killer *win);
void main_drawgreen(killer *win);
void main_drawyellow(killer *win);
void main_drawblue(killer *win);
void main_drawred(killer *win);
void main_drawmagenta(killer *win);
void main_drawgrey(killer *win);
void main_draw_darkgreen(killer *win);
void main_drawbciel(killer *win);
void main_draworange(killer *win);
void manage_mouse_click(sfMouseButtonEvent event, killer *win);
void move_rect(sfIntRect *rect, int offset, int max_value);
void window_sprite(killer *win);
void scale_and_position(killer *win);
void main_sprite(killer *win);
void mouse_and_pencil_pos(killer *win);
sfRenderWindow *create_window(unsigned int x, unsigned int y,
unsigned int bpp, char *title);
void close_window(sfRenderWindow *my_hunter, sfEvent event, killer *win);
void mouse_click(sfRenderWindow *my_hunter, sfMouseButtonEvent event);
void save_screenshot(sfRenderWindow* window, const char* filename);
void save_event(killer *win);
void window_scale(killer *win);
void upload_scale(killer *win);
void save_scale(killer *win);
void quit_scale(killer *win);
void trait_scale(killer *win);
void create_andfirst_sprite(killer *win);
void upload_sprite(killer *win);
void quit_sprite(killer *win);
void save_sprite(killer *win);
void trait_sprite(killer *win);
void uploade_sprite_displayer(killer *win);
void quit_sprite_displayer(killer *win);
void save_sprite_displayer(killer *win);
void trait_sprite_displayer(killer *win);
void sprite_displayer(killer *win);
void window_destroy(killer *destroy);
#endif
