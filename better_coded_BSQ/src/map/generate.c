/*
** EPITECH PROJECT, 2024
** Epitech-BSQ [WSL: Ubuntu]
** File description:
** generate
*/

#include "map.h"
#include "utils.h"

static bool check_pattern(const char *const pattern)
{
    for (size_t i = 0; pattern[i] != '\0'; i++) {
        if (pattern[i] != EMPTY && pattern[i] != OBSTACLE)
            return false;
    }
    return true;
}

static bool create_map(map_t *map, const char *const pattern)
{
    map->map = malloc(sizeof(char *) * (map->h + 1));
    if (map->map == NULL) {
        free_map(map);
        return false;
    }
    memset(map->map, 0, sizeof(char *) * (map->h + 1));
    for (size_t i = 0; i < map->h; i++) {
        map->map[i] = malloc(sizeof(char) * (map->w + 1));
        if (map->map[i] == NULL) {
            free_map(map);
            return false;
        }
        memset(map->map[i], 0, sizeof(char) * (map->w + 1));
        for (size_t j = 0; j < map->w; j++)
            map->map[i][j] = pattern[(i * map->w + j) % strlen(pattern)];
    }
    return true;
}

map_t *generate_map(const char *const size_str, const char *const pattern)
{
    map_t *map = init_map();
    bool status;

    if (map == NULL)
        return NULL;
    status = get_unsigned_long(size_str, &map->h);
    if (!status)
        return NULL;
    map->w = map->h;
    status = check_pattern(pattern);
    if (!status)
        return NULL;
    status = create_map(map, pattern);
    if (!status)
        return NULL;
    return map;
}
