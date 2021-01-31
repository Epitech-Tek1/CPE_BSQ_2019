/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** my_nbr_line
*/

#include "../../include/my.h"

int my_nbr_line(char *tab)
{
    int i = 0;
    int line = 0;

    for (; tab[i] != _END_S_; ++i)
        line = (tab[i] == _END_LINE_) ? line + 1 : line;
    if (tab[ i - 1] == _END_LINE_)
        --line;
    return (line);
}