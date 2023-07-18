/*
** EPITECH PROJECT, 2023
** save screen
** File description:
** save screen
*/

#include "myprintflib.h"
#include "my.h"

void save_screenshot(sfRenderWindow* window, const char* filename)
{
    sfVector2u windowSize = sfRenderWindow_getSize(window);
    sfTexture* texture = sfTexture_create(windowSize.x, windowSize.y);
    sfTexture_updateFromRenderWindow(texture, window, 0, 0);
    sfImage* image = sfTexture_copyToImage(texture);
    sfImage_saveToFile(image, filename);
    sfImage_destroy(image);
    sfTexture_destroy(texture);
}

void save_event(killer *win)
{
    if (sfKeyboard_isKeyPressed(sfKeyP)) {
        save_screenshot(win->my_hunter,"images/images.png");
        my_printf("images png saved\n");
    }
    if (sfKeyboard_isKeyPressed(sfKeyJ)) {
        save_screenshot(win->my_hunter,"images/imagesjpg.jpg");
        my_printf("images jpg saved\n");
    }
    if (win->mousePosition.x >= 2 && win->mousePosition.x <= 90
        && win->mousePosition.y >= 128 && win->mousePosition.y <= 157) {
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            save_screenshot(win->my_hunter,"images/imagesbyclick.png");
        }
    }
}
