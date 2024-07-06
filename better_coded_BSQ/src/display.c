/*
** EPITECH PROJECT, 2024
** Epitech-BSQ [WSL: Ubuntu]
** File description:
** display
*/

#include "display.h"

void display_map(const map_t *const map)
{
    for (size_t i = 0; i < map->h; i++) {
        write(STDOUT_FILENO, map->map[i], map->w);
        write(STDOUT_FILENO, "\n", 1);
    }
}
