/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** my_resize
*/

#include "../../include/my.h"
#include <stdlib.h>

char *my_resize(char *map_buffer, char *full_buffer, int length)
{
    char *realloc = NULL;
    int i = 0;
    int count = 0;

    realloc = malloc(sizeof(*realloc) * (my_strlen(full_buffer) + length + 1));
    if (realloc == NULL)
        return ("EXIT_MALLOC");
    for (; full_buffer != NULL && full_buffer[i] != _END_S_; ++i)
        realloc[i] = full_buffer[i];
    free(full_buffer);
    for (; map_buffer[count] != _END_S_; ++i) {
        realloc[i] = map_buffer[count];
        ++count;
    }
    realloc[i] = '\0';
    return (realloc);
}