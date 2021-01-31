/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** my
*/

#ifndef MY_H_
# define MY_H_

#include "my_struct.h"
#include <stdarg.h>

/* WILL BE DELETED */

#define         EXIT_SUCCESS    0
#define         EXIT_SEG_FAULT  84
#define         EXIT_MALLOC     84
#define         EXIT_HANDLING   84
#define         EXIT_READ       84
#define         EXIT_WRONG_FILE 84
#define         EXIT_BAD_ARG    84
#define         EXIT_FNOT_EXIST 84
#define         MY_MAP_BUFFER   4096
#define         _END_S_         '\0'
#define         _END_LINE_      '\n'
#define         PREG_MATCH      c != '.' && c != 'o' && c != '\n' && c != '\0'

void            my_putchar(char c);
void            my_putstr(char *str);
int             my_strlen(char *str);

void            end_bounds(char *, int);
int             error_form(int);
int             error_file_exist(int);
int             error_file_empty(char);
int             error_handling(int, char *);
int             error_tab(int, char **, int, int);
int             error_preg_match(char);
int             my_create_tab(char *);
int             my_nbr_line(char *);
int             my_length_line(char *);
int             my_exchange(char **, int, int);
int             my_swap_tab(char **, int, int, int);
int             my_sswap_tab(char **);
int             my_find_square(char **, int *, int *, my_list_t *);
int             my_find_ssquare(char **, int *, int *, my_list_t *);
int             my_insert_to_tab(char *, char **, int, int);
char            *my_resize(char *, char *, int);

#endif /* !MY_H_ */
