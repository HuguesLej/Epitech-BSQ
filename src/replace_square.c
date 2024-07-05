/*
** EPITECH PROJECT, 2022
** replace_square
** File description:
** Replaces the dots of the square found by x
*/

#include "include.h"

void replace_square(char **file_array, int const *point)
{
    int limit[2] = {point[0] + point[2], point[1] + point[2]};

    for (int x = point[0]; x < limit[0]; x++) {
        for (int y = point[1]; y < limit[1]; y++) {
            file_array[x][y] = 'x';
        }
    }
    return;
}
