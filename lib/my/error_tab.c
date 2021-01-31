/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** error_tab
*/

int error_tab(int swap, char **tab, int buffer_width, int length)
{
    if (tab[length][buffer_width] != '.')
        return (0);
    for (int i = 0; i < swap; ++i)
        if (tab[length][buffer_width + i] != '.'
        || tab[length + i][buffer_width] != '.')
            return (0);
    return (1);
}