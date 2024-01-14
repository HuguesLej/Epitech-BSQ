/*
** EPITECH PROJECT, 2022
** square_finder
** File description:
** Find the biggest square in the buff map
*/

#include "include/include.h"

bool is_an_obstacle(char c)
{
    if (c != '.')
        return false;
    return true;
}

bool test_square(char **file_array, int const *co, int const size,
    int const *dim)
{
    bool verifier = true;
    int limit[2] = {co[0] + size, co[1] + size};
    int j;

    if (limit[0] > dim[0] || limit[1] > dim[1])
        return false;
    for (int i = co[0]; i < limit[0]; i++) {
        j = co[1];
        while (j < limit[1] && verifier == true) {
            verifier = is_an_obstacle(file_array[i][j]);
            j++;
        }
    }
    return verifier;
}

void find_max_square(char **file_array, int const *co, int *point,
    int const *dim)
{
    bool toggle = true;

    if (file_array[co[0]][co[1]] == 'o')
        return;
    while (toggle == true) {
        toggle = test_square(file_array, co, point[2] + 1, dim);
        if (toggle == true) {
            point[0] = co[0];
            point[1] = co[1];
            point[2] += 1;
        }
    }
    return;
}

void square_finder(char **file_array, int const *dim)
{
    int point[3] = {0, 0, 0};
    int coordinates[2] = {0, 0};
    int err;

    for (coordinates[0]; coordinates[0] < dim[0]; coordinates[0]++) {
        for (coordinates[1]; coordinates[1] < dim[1]; coordinates[1]++)
            find_max_square(file_array, coordinates, point, dim);
        coordinates[1] = 0;
    }
    replace_square(file_array, point);
    for (int i = 0; i < dim[0]; i++)
        err = write(1, file_array[i], dim[1] + 1);
    if (err == -1)
        exit(84);
    return;
}
