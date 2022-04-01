/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** hello !
*/

#include <stdlib.h>
#include <unistd.h>

int my_strlen(char *str);

char *my_revstr(char *str)
{
    int i;
    int c;
    int o = 0;

    c = my_strlen(str);
    char *dest = malloc(sizeof(char) * 2);

    dest[c] = str[c];
    for (i = c - 1 ; i >= 0; i--, o++){
        dest[o] = str[i];
    }
    str = dest;
    return dest;
}
