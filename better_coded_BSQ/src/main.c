/*
** EPITECH PROJECT, 2024
** Epitech-BSQ [WSL: Ubuntu]
** File description:
** main
*/

#include "display.h"
#include "map.h"
#include "replace.h"
#include "square.h"
#include "utils.h"

int main(int ac, char **av)
{
    map_t *map = NULL;
    square_t biggest = {0};

    if (ac == 2)
        map = get_map_from_file(av[1]);
    if (ac == 3)
        map = generate_map(av[1], av[2]);
    if (map == NULL)
        return 84;
    biggest = find_biggest_square(map);
    replace_biggest_square(map, &biggest);
    display_map(map);
    free_map(map);
    return 0;
}
