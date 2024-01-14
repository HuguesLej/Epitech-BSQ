/*
** EPITECH PROJECT, 2022
** my_str_to_word_array
** File description:
** Splits a string into words and returns
** an array which contains them
*/

#include "include/include.h"

void str_to_array(char const *buff, char **file_array, int const *dim, int i)
{
    int lines = 0;
    int col = 0;

    while (lines < dim[0]) {
        file_array[lines][col] = buff[i];
        col++;
        if (col > dim[1]) {
            lines++;
            col = 0;
        }
        i++;
    }
    return;
}
