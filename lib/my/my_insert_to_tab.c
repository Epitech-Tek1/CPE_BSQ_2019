/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** my_insert_to_tab
*/

#include "../../include/my.h"

int my_insert_to_tab(char *full_buffer, char **tab, int j, int k)
{
    int i = 0;
    int error = 0;

    for (; full_buffer[i] != _END_LINE_ && full_buffer[i] != _END_S_; ++i);
    ++i;
    if ((error = error_file_empty(full_buffer[i + 1])) == 84)
        return (EXIT_WRONG_FILE);
    for (; full_buffer[i] != _END_S_; ++i) {
        if ((error = error_preg_match(full_buffer[i])) == 84)
            return (EXIT_WRONG_FILE);
        if (full_buffer[i] == _END_LINE_ || full_buffer[i] == _END_S_) {
            tab[j][k] = _END_S_;
            ++j;
            k = 0;
        } else {
            tab[j][k] = full_buffer[i];
            ++k;
        }
    }
    return (EXIT_SUCCESS);
}