/*
** EPITECH PROJECT, 2024
** Epitech-BSQ [WSL: Ubuntu]
** File description:
** square
*/

#include "square.h"

bool is_valid_square(const map_t *const map, const square_t *const sq)
{
    size_t i = 0;
    size_t j = 0;

    if (sq->orig.x + sq->size > map->w || sq->orig.y + sq->size > map->h)
        return false;
    while (i < sq->size) {
        if (j >= sq->size) {
            i++;
            j = 0;
            continue;
        }
        if (map->map[i + sq->orig.y][j + sq->orig.x] == OBSTACLE)
            return false;
        j++;
    }
    return true;
}

square_t find_biggest_square(const map_t *const map)
{
    square_t found = {0};
    square_t to_find = {{0, 0}, 1};
    size_t i = 0;
    size_t j = 0;

    while (i < map->h) {
        if (j >= map->w) {
            i++;
            j = 0;
            continue;
        }
        to_find.orig.x = j;
        to_find.orig.y = i;
        while (is_valid_square(map, &to_find)) {
            found = to_find;
            to_find.size++;
        }
        j++;
    }
    return found;
}
