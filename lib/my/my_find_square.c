/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** my_find_square
*/

#include "../../include/my.h"
#include "../../include/my_struct.h"

int my_find_square(char **tab, int *length, int *buff_width, my_list_t *list)
{
    if (tab[*length][*buff_width] == 'o' && *buff_width != 0)
        --*buff_width;
    else if (*buff_width == 0) {
        --*length;
        *buff_width = list->buffer_width;
    } else if (tab[*length][*buff_width] == '.')
        my_find_ssquare(tab, length, buff_width, list);
    list->i = list->i + 1;
    return (EXIT_SUCCESS);
}