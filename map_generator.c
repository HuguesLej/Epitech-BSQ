/*
** EPITECH PROJECT, 2022
** map_generator
** File description:
** Generates a map based on given parameters
*/

#include "include/include.h"

void convert_pattern_to_map(char **map, int const dim, char const *pattern)
{
    int size[2] = {0, 0};
    int count = 0;

    while (size[0] < dim) {
        if (pattern[count] == '\0')
            count = 0;
        if (size[1] < dim) {
            map[size[0]][size[1]] = pattern[count];
            size[1]++;
        } else {
            map[size[0]][size[1]] = '\n';
            size[0]++;
            size[1] = 0;
            count--;
        }
        count++;
    }
    return;
}

void generate_map(int const dim, char const *pattern)
{
    char **map = (char**) malloc(sizeof(char *) * (dim + 1));
    int dim_array[2] = {dim, dim};

    for (int i = 0; i < dim; i++)
        map[i] = (char*) malloc(sizeof(char) * (dim + 1));
    convert_pattern_to_map(map, dim, pattern);
    square_finder(map, dim_array);
    for (int i = 0; i < dim + 1; i++)
        free(map[i]);
    free(map);
    return;
}

void verify_map_generator_param(int const ac, char **av)
{
    int dimension = 0;

    if (ac < 3)
        exit(84);
    for (int i = 0; av[1][i] != '\0'; i++) {
        if (av[1][i] < '0' || av[1][i] > '9')
            exit(84);
        dimension = dimension * 10 + av[1][i] - '0';
    }
    for (int i = 0; av[2][i] != '\0'; i++) {
        if (av[2][i] != '.' && av[2][i] != 'o')
            exit(84);
    }
    generate_map(dimension, av[2]);
    return;
}
