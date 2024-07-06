/*
** EPITECH PROJECT, 2024
** Epitech-BSQ [WSL: Ubuntu]
** File description:
** map
*/

#pragma once

#include "commons.h"


/**
 * @brief Initialize a map.
 *
 * @return `map_t*` The map if it was successfully created. `NULL` Otherwise.
 */
map_t *init_map(void);


/**
 * @brief Get the map from a file.
 *
 * @param path The path to the file.
 * @return `map_t` The map if it was successfully created. `NULL` Otherwise.
 */
map_t *get_map_from_file(const char *path);


/**
 * @brief Generate a map from a size and a patern.
 *
 * @param size_str The size of the map.
 * @param pattern The pattern of the map.
 * @return `map_t*` The map if it was successfully created. `NULL` Otherwise.
 */
map_t *generate_map(const char *const size_str, const char *const pattern);
