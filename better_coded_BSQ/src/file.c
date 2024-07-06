/*
** EPITECH PROJECT, 2024
** Epitech-BSQ [WSL: Ubuntu]
** File description:
** file
*/

#include "file.h"

file_t open_file(const char *path)
{
    file_t file = {0};
    struct stat st = {0};
    int err;

    file.fd = open(path, O_RDONLY);
    err = stat(path, &st);
    if (err == -1 || !S_ISREG(st.st_mode)) {
        if (file.fd != -1)
            close(file.fd);
        file.fd = -1;
    }
    if (file.fd == -1)
        return file;
    file.size = (size_t)st.st_size;
    return file;
}

void read_file(file_t *file)
{
    ssize_t read_size;

    file->content = malloc(file->size + 1);
    if (file->content == NULL)
        return;
    memset(file->content, 0, file->size + 1);
    read_size = read(file->fd, file->content, file->size);
    if (read_size <= 0) {
        free(file->content);
        file->content = NULL;
    }
    close(file->fd);
}
