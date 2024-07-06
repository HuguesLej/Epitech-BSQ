/*
** EPITECH PROJECT, 2024
** Epitech-BSQ [WSL: Ubuntu]
** File description:
** utils
*/

#pragma once

#include "commons.h"


/**
 * @brief Get an unsigned long from a string.
 *
 * @param str The string to convert.
 * @param nb The pointer to the unsigned long to store the result.
 * @return `true` If the conversion was successful. `false` Otherwise.
 */
bool get_unsigned_long(const char *const str, size_t *const nb);


/**
 * @brief Free a string array.
 *
 * @param array The string array to free.
 */
void free_str_array(char **array);


/**
 * @brief Free a map.
 *
 * @param map The map to free.
 */
void free_map(map_t *map);


/**
 * @brief Split a string into an array of strings.
 *
 * @param str The string to split.
 * @param delim The delimiter.
 * @return `char**` The array of strings.
 */
char **split_str(const char *const str, const char delim);
