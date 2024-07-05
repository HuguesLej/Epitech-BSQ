/*
** EPITECH PROJECT, 2022
** main
** File description:
** Main file
*/

#include "include.h"

int main(int ac, char **av)
{
    int fd;
    int file_size;
    char *buff;
    int read_size;

    if (ac < 2)
        return 84;
    open_file(ac, av, &fd, &file_size);
    buff = malloc(sizeof(char) * (file_size + 1));
    read_size = read(fd, buff, file_size);
    close(fd);
    read_error(read_size, buff);
    buffer_handler(buff);
    free(buff);
    return 0;
}
