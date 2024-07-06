/*
** EPITECH PROJECT, 2024
** Epitech-BSQ [WSL: Ubuntu]
** File description:
** init
*/

#include "map.h"

map_t *init_map(void)
{
    map_t *map = malloc(sizeof(map_t));

    if (map == NULL)
        return NULL;
    map->h = 0;
    map->w = 0;
    map->map = NULL;
    return map;
}
