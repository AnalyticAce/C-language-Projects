/*
** EPITECH PROJECT, 2023
** deplacement
** File description:
** deplacement
*/
#include "myprintflib.h"

void displace_k(double gauche, double milieu, double droit, int nb)
{
    double pos[6] = {0.33, 0.31, 0.22, 0.19, 0.03, 0.01};
    int map[5] = {225, 325, 525, 875, 1145};
    for (int i = 0; i < 5; i++) {
        if (milieu < map[i]) {
            (nb == 1) ? (make_choise_between(1, pos[i])) :
            (make_choise_between(0, pos[i]));
            return;
        }
    }
}
