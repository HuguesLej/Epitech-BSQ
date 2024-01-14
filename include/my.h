/*
** EPITECH PROJECT, 2022
** my_h
** File description:
** Contains function declarations
*/

#include "include.h"

#ifndef MY_H_
    #define MY_H_

    void open_file(int const ac, char **av, int *fd, int *file_size);
    void verify_map_generator_param(int const ac, char **av);
    void read_error(int const read_size, char *buff);
    void buffer_handler(char const *buff);
    void str_to_array(char const *buff, char **file_array, int const *dim,
        int i);
    void square_finder(char **file_array, int const *dim);
    void replace_square(char **file_array, int const *point);

#endif
