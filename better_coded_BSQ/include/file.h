/*
** EPITECH PROJECT, 2024
** Epitech-BSQ [WSL: Ubuntu]
** File description:
** file
*/

#pragma once

#include "commons.h"


/**
 * @brief Open a file.
 *
 * @param path The path to the file.
 * @return `file_t` A structure representing the file.
 * In case of error, the `fd` field is set to -1.
 */
file_t open_file(const char *path);


/**
 * @brief Read the content of a file. In case of error, the
 * `content` field of the `file` structure is reset to NULL.
 * The file descriptor is closed in any case.
 *
 * @param file The file to read.
 */
void read_file(file_t *file);
