/*
** EPITECH PROJECT, 2023
** lidar info
** File description:
** lidar info in double
*/

#include "myprintflib.h"

int getlidar_en_double(void)
{
    char **tab; char *str = NULL; size_t n = 0;
    make("car_forward:0.45\n");
    if (getline(&str, &n, stdin) < 0) return 0;
    while (1) {
        write(1, "get_info_lidar\n", strlen("get_info_lidar\n"));
        if (getline(&str, &n, stdin) < 0) return 0;
        tab = parsing_string2(str, SIZE, ":");
        double gauche = atof(tab[3]);
        double milieu = atof(tab[19]);
        double droit = atof(tab[34]);
        if (gauche > droit) {
            displace_k(gauche, milieu, droit, 0);
        } else {
            displace_k(gauche, milieu, droit, 1);
        }
    }
}
