/*
** EPITECH PROJECT, 2023
** choise
** File description:
** choise
*/

#include "myprintflib.h"

int make_choise_between(int n, double pos)
{
    char *str = NULL; size_t nb = 0;
    make("wheels_dir:"); char buf[6];
    if (n == 1)
        write(1, "-", 1);
    sprintf(buf, "%.2f\n", pos);
    make(buf);
    if (getline(&str, &nb, stdin) < 0) return 0;
}
