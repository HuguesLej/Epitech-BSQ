/*
** EPITECH PROJECT, 2024
** Epitech-BSQ [WSL: Ubuntu]
** File description:
** get
*/

#include "file.h"
#include "map.h"
#include "utils.h"

static void fill_map(map_t *map, const char **const array)
{
    size_t size = 0;

    while (array[size + 1] != NULL)
        size++;
    map->map = malloc(sizeof(char *) * (size + 1));
    if (map->map == NULL)
        return;
    memset(map->map, 0, sizeof(char *) * (size + 1));
    for (size_t i = 0; i < size; i++) {
        map->map[i] = strdup(array[i + 1]);
        if (map->map[i] == NULL) {
            free_str_array(map->map);
            map->map = NULL;
            return;
        }
    }
}

static bool verify_map_line(const char *line, size_t w)
{
    size_t i = 0;

    while (line[i] != '\0') {
        if (line[i] != EMPTY && line[i] != OBSTACLE)
            return false;
        i++;
    }
    if (i != w)
        return false;
    return true;
}

static bool verify_map(map_t *map)
{
    bool status;
    size_t i = 0;

    if (map->h == 0 || map->map == NULL)
        return false;
    while (map->map[i] != NULL) {
        status = verify_map_line(map->map[i], map->w);
        if (!status)
            return false;
        i++;
    }
    if (i != map->h)
        return false;
    return true;
}

static map_t *get_map(const char **const array)
{
    map_t *map = init_map();
    bool status;

    if (map == NULL)
        return NULL;
    status = get_unsigned_long(array[0], &map->h);
    if (!status) {
        free(map);
        return NULL;
    }
    if (array[1] != NULL)
        map->w = strlen(array[1]);
    fill_map(map, array);
    status = verify_map(map);
    if (!status) {
        free_map(map);
        return NULL;
    }
    return map;
}

map_t *get_map_from_file(const char *path)
{
    file_t file = open_file(path);
    char **array;
    map_t *map = NULL;

    if (file.fd == -1)
        return NULL;
    read_file(&file);
    if (file.content == NULL)
        return NULL;
    if (file.content[file.size - 1] != '\n') {
        free(file.content);
        return NULL;
    }
    array = split_str(file.content, '\n');
    if (array != NULL)
        map = get_map((const char **)array);
    free_str_array(array);
    free(file.content);
    return map;
}
