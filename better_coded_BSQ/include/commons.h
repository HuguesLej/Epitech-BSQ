/*
** EPITECH PROJECT, 2024
** Epitech-BSQ [WSL: Ubuntu]
** File description:
** commons
*/

#pragma once

#include <errno.h>
#include <fcntl.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>


/**
 * @brief The character representing an obstacle in a map.
 *
 */
#define OBSTACLE 'o'

/**
 * @brief The character representing an empty space in a map.
 *
 */
#define EMPTY '.'

/**
 * @brief The character representing the biggest square in a map.
 *
 */
#define BIGGEST_CHAR 'x'


/**
 * @brief Structure representing a file.
 *
 */
typedef struct file_s {
    int fd;
    size_t size;
    char *content;
} file_t;


/**
 * @brief Structure representing a map.
 *
 */
typedef struct map_s {
    size_t w;
    size_t h;
    char **map;
} map_t;


/**
 * @brief Structure representing a point.
 *
 */
typedef struct point_s {
    size_t x;
    size_t y;
} point_t;


/**
 * @brief Structure representing a square.
 *
 */
typedef struct square_s {
    point_t orig;
    size_t size;
} square_t;
