/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** main
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"

int	main(int argc, char *argv[])
{
    char map_buffer[MY_MAP_BUFFER + 1];
    char *full_buffer;
    int length = 0;
    int fd = 0;
    int error = 0;

    if ((error = error_form(argc)) == 84)
        return (EXIT_BAD_ARG);
    end_bounds(map_buffer, MY_MAP_BUFFER);
    fd = open(argv[1], O_RDONLY);
    if ((error = error_file_exist(fd)) == 84)
        return (EXIT_FNOT_EXIST);
    while ((length = read(fd, map_buffer, MY_MAP_BUFFER)) > 0) {
        map_buffer[length] = 0;
        full_buffer = my_resize(map_buffer, full_buffer, length);
        end_bounds(map_buffer, MY_MAP_BUFFER);
    }
    if ((error = error_handling(length, full_buffer)) == 84)
        return (EXIT_HANDLING);
    my_create_tab(full_buffer);
    return (EXIT_SUCCESS);
}
