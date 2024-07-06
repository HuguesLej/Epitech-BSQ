/*
** EPITECH PROJECT, 2024
** Epitech-BSQ [WSL: Ubuntu]
** File description:
** my_memory
*/

#include "utils.h"

void free_str_array(char **array)
{
    if (array == NULL)
        return;
    for (size_t i = 0; array[i] != NULL; i++)
        free(array[i]);
    free(array);
}

void free_map(map_t *map)
{
    if (map == NULL)
        return;
    if (map->map != NULL) {
        for (size_t i = 0; map->map[i] != NULL; i++)
            free(map->map[i]);
        free(map->map);
    }
    free(map);
}
