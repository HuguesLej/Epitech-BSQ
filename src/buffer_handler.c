/*
** EPITECH PROJECT, 2022
** buffer_handler
** File description:
** Handles the buffer which contains the map
*/

#include "include.h"

void buffer_handler(char const *buff)
{
    char **file_array;
    int dimension[2] = {0, 0};
    int count[2] = {0, 0};

    for (count[0]; buff[count[0]] != '\n'; count[0]++)
        dimension[0] = dimension[0] * 10 + buff[count[0]] - '0';
    file_array = (char**) malloc(sizeof(char *) * (dimension[0] + 1));
    count[1] = count[0] + 1;
    for (count[1]; buff[count[1]] != '\n'; count[1]++) {
        if (buff[count[1]] != '.' && buff[count[1]] != 'o')
            exit(84);
        dimension[1]++;
    }
    for (int k = 0; k < dimension[0] + 1; k++)
        file_array[k] = (char*) malloc(sizeof(char) * (dimension[1] + 1));
    str_to_array(buff, file_array, dimension, ++count[0]);
    square_finder(file_array, dimension);
    for (int k = 0; k < dimension[0] + 1; k++)
        free(file_array[k]);
    free(file_array);
}
