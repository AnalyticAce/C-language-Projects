/*
** EPITECH PROJECT, 2023
** split_lidar
** File description:
** split_lidar
*/
#include "myprintflib.h"

int main(void)
{
    char *str = NULL;
    char *start = "start_simulation\n";
    size_t nb = 0;
    write(1, start, strlen(start));
    if (getline(&str, &nb, stdin) < 0) return 0;
    getlidar_en_double();
}
