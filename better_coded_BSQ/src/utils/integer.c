/*
** EPITECH PROJECT, 2024
** Epitech-BSQ [WSL: Ubuntu]
** File description:
** integer
*/

#include "utils.h"

bool get_unsigned_long(const char *const str, size_t *const nb)
{
    char *endptr;

    errno = 0;
    if (str == NULL || str[0] == '-')
        return false;
    *nb = strtoul(str, &endptr, 10);
    if (errno == ERANGE || endptr[0] != '\0')
        return false;
    return true;
}
