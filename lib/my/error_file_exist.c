/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** error_file_exist
*/

#include "../../include/my.h"

int error_file_exist(int fd)
{
    if ((-1) == fd) {
        my_putstr("[ ERROR ] File doesn't exist. Please check it and retry.\n");
        return (EXIT_FNOT_EXIST);
    }
    return (EXIT_SUCCESS);
}