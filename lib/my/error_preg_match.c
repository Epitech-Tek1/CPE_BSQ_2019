/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** error_preg_match
*/

#include "../../include/my.h"

int error_preg_match(char c)
{
    if (PREG_MATCH) {
        my_putstr("[ ERROR ] Your file is wrong. Please check it and retry\n");
        return (EXIT_WRONG_FILE);
    }
    return (EXIT_SUCCESS);
}