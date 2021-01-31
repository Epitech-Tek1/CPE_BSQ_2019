/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** create_tab
*/

#include <stdlib.h>
#include "../../include/my.h"

int my_create_tab(char *full_buffer)
{
    char **tab = NULL;
    int _my_nbr_line =  my_nbr_line(full_buffer);
    int _my_length_line = my_length_line(full_buffer);

    tab = malloc(sizeof(*tab) * (_my_nbr_line + 1));
    if (tab == NULL)
        exit(EXIT_MALLOC);
    for (int i = 0; i < _my_nbr_line; ++i) {
        tab[i] = malloc(sizeof(tab) * (_my_length_line + 1));
        if (tab[i] == NULL)
            return (EXIT_MALLOC);
    }
    my_insert_to_tab(full_buffer, tab, 0, 0);
    my_exchange(tab, my_nbr_line(full_buffer) - 1,
    my_length_line(full_buffer) - 1);
    return (EXIT_SUCCESS);
}