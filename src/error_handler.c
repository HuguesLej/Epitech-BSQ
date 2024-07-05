/*
** EPITECH PROJECT, 2022
** error_handler
** File description:
** Handles errors
*/

#include "include.h"

void read_error(int const read_size, char *buff)
{
    if (read_size == 0) {
        free(buff);
        exit(84);
    }
    return;
}
