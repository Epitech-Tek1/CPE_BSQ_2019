/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** error_form
*/

#include "../../include/my.h"

int error_form(int argc)
{
    if (2 != argc) {
        my_putstr("[ ERROR ] Please specify the path to the file.\n");
        my_putstr("./bsq [ PATH ]\n");
        return (EXIT_BAD_ARG);
    }
    return (EXIT_SUCCESS);
}