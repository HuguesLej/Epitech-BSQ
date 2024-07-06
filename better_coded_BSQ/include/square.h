/*
** EPITECH PROJECT, 2024
** Epitech-BSQ [WSL: Ubuntu]
** File description:
** square
*/

#pragma once

#include "commons.h"


/**
 * @brief Check if a square is valid.
 *
 * @param map The map to check.
 * @param sq The square to check.
 * @return `true` if the square is valid, `false` otherwise.
 */
bool is_valid_square(const map_t *const map, const square_t *const sq);


/**
 * @brief Find the biggest square in a map.
 *
 * @param map The map to check.
 * @return `square_t` The biggest square found.
 */
square_t find_biggest_square(const map_t *const map);
