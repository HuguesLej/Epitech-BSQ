/*
** EPITECH PROJECT, 2024
** Epitech-BSQ [WSL: Ubuntu]
** File description:
** replace
*/

#include "replace.h"

void replace_biggest_square(map_t *const map, const square_t *const sq)
{
    for (size_t i = sq->orig.y; i < sq->orig.y + sq->size; i++) {
        for (size_t j = sq->orig.x; j < sq->orig.x + sq->size; j++)
            map->map[i][j] = BIGGEST_CHAR;
    }
}
