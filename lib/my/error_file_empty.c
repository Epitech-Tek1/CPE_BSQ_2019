/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** error_file_empty
*/

#include "../../include/my.h"

int error_file_empty(char c)
{
    if (_END_S_ == c) {
        my_putstr("[ ERROR ] Your file is wrong. Please check it and retry\n");
        return (EXIT_WRONG_FILE);
    }
    return (EXIT_SUCCESS);
}