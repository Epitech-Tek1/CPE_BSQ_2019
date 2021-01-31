/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** my_putstr
*/

#include "../../include/my.h"

void my_putstr(char *str)
{
    for (int i = 0; str[i]; ++i)
        my_putchar(str[i]);
}