/*
** EPITECH PROJECT, 2019
** my_list
** File description:
** my_exchange
*/

#include "../../include/my.h"
#include "../../include/my_struct.h"

int my_exchange(char **tab, int len, int buff_width)
{
    my_list_t	list;

    list.length = len;
    list.buffer_width = buff_width;
    list.count = 0;
    list.swap = 0;
    list.i = 0;
    for (; list.i < (list.length + 1) * (list.buffer_width + 1);)
        my_find_square(tab, &len, &buff_width, &list);
    (list.count > 2) ? my_swap_tab(tab, list.col, list.field, list.count) :
    my_sswap_tab(tab);
    list.i = 0;
    for (; list.i <= list.length; ++list.i) {
        my_putstr(tab[list.i]);
        my_putchar('\n');
    }
    return (EXIT_SUCCESS);
}
