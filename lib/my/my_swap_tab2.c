/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** my_sswap_tab
*/

#include "../../include/my.h"

int my_sswap_tab(char **tab)
{
    int j = 0;
    int k = 0;

    for (; tab[j][k] != 0;) {
        if (tab[j][k] == '.') {
            tab[j][k] = 'x';
            return (0);
        } else if (tab[j][k] == 'o')
            ++k;
        else {
            k = 0;
            ++j;
        }
    }
    return (EXIT_SUCCESS);
}