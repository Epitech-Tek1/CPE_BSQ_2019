/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** end_bounds
*/

#include "../../include/my.h"

void end_bounds(char *full_buffer, int size)
{
    for (int i = 0; i < size; ++i)
        full_buffer[i] = _END_S_;
}