/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** my_find_square2
*/

#include "../../include/my.h"
#include "../../include/my_struct.h"

int my_find_ssquare(char **tab, int *length, int *width, my_list_t *list)
{
    list->swap_width = *width;
    list->swap_lenght = *length;
    list->swap = 1;
    for (; *length >= 0 && *width >= 0 && error_tab(list->swap, tab, *width,
    *length) == 1;) {
        --*length;
        --*width;
        ++list->swap;
    }
    if (list->swap >= list->count) {
        list->count = list->swap;
        list->col = *length + list->count - 1;
        list->field = *width + list->count - 1;
    }
    *width = list->swap_width;
    *length = list->swap_lenght;
    --*width;
    return (EXIT_SUCCESS);
}