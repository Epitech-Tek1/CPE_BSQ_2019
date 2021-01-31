/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** my_strlen
*/

#include <stdlib.h>

int my_strlen(char *str)
{
    int i = 0;

    if (str == NULL)
        return (0);
    for (; str[i]; ++i);
    return (i);
}