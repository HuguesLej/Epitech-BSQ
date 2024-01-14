/*
** EPITECH PROJECT, 2022
** open_file
** File description:
** Opens a file and set file descriptor and stat structure
*/

#include "include/include.h"

void open_file(int const ac, char **av, int *fd, int *file_size)
{
    struct stat file_struct;
    int err;

    *fd = open(av[1], O_RDONLY);
    if (*fd == -1) {
        verify_map_generator_param(ac, av);
        exit(0);
    }
    err = stat(av[1], &file_struct);
    if (err == -1 || (file_struct.st_mode & S_IFMT) == S_IFDIR)
        exit(84);
    *file_size = file_struct.st_size;
    return;
}
