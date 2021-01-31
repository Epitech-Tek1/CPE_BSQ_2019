/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** error_handling
*/

#include <stdlib.h>
#include "../../include/my.h"

int error_handling(int length, char *full_buffer)
{
    if ((-1) == length) {
        my_putstr("[ ERROR ] Cannot read the file Please check it and retry\n");
        return (EXIT_READ);
    }
    if (full_buffer == NULL) {
        my_putstr("[ ERROR ] Your file is wrong. Please check it and retry\n");
        return (EXIT_WRONG_FILE);
    }
    return (EXIT_SUCCESS);
}