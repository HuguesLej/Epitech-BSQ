/*
** EPITECH PROJECT, 2024
** Epitech-BSQ [WSL: Ubuntu]
** File description:
** split_str
*/

#include "utils.h"

static size_t get_sub_len(const char *const str, const char delim)
{
    size_t i = 0;

    while (str[i] != '\0' && str[i] != delim)
        i++;
    return i;
}

static char **resize_array(char **array, size_t size)
{
    char **ptr = NULL;

    ptr = realloc(array, sizeof(char *) * (size + 1));
    if (ptr == NULL) {
        free_str_array(array);
        return NULL;
    }
    array = ptr;
    array[size] = NULL;
    return array;
}

char **split_str(const char *const str, const char delim)
{
    size_t len = strlen(str);
    char **array = NULL;
    size_t size = 0;
    size_t i = 0;
    size_t sub_len = 0;

    while (i < len) {
        size++;
        array = resize_array(array, size);
        if (array == NULL)
            return NULL;
        sub_len = get_sub_len(&str[i], delim);
        array[size - 1] = strndup(&str[i], sub_len);
        if (array[size - 1] == NULL) {
            free_str_array(array);
            return NULL;
        }
        i += sub_len + 1;
    }
    return array;
}
