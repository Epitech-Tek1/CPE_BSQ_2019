/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** my_swap_tab
*/

#include "../../include/my.h"
#include "../../include/my_struct.h"

int my_swap_tab(char **tab, int col, int field, int count)
{
    int i = count - 1;
    int line = count - 1;
    int n = 0;

    for (; i > 0; --i) {
        for (; line > 0; --line) {
            tab[col][field - n] = 'x';
            ++n;
        }
        line = count - 1;
        n = 0;
        --col;
    }
    return (EXIT_SUCCESS);
}