/*
** EPITECH PROJECT, 2023
** parsing
** File description:
** parsing
*/

#include "myprintflib.h"

char **parsing_string2(char *str, int max_size, char *deli)
{
    char **map = (char **)malloc(MAX_LINES *sizeof(char*));
    if (map == NULL) return NULL;
    char *map_line = strtok(str, deli);
    int i = 0;
    while (map_line != NULL && i < max_size) {
        map[i] = (char*)malloc((strlen(map_line) + 1) *sizeof(char));
        strcpy(map[i], map_line);
        map_line = strtok(NULL, deli);
        i++;
    } if (str == NULL || map[0] == NULL) {
        free(map); return NULL;
    }
    map[i] = NULL;
    return map;
}
