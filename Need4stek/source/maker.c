/*
** EPITECH PROJECT, 2023
** maker
** File description:
** maker
*/

#include "myprintflib.h"

void make(char *str)
{
    write(1, str, strlen(str));
}
