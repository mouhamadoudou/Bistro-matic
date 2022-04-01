/*
** EPITECH PROJECT, 2021
** compar_small_tab.c
** File description:
** hello
*/
#include <stdio.h>
#include <stdlib.h>

int my_strlen(char *str);
int compar(int x, int y);

char *compar_small_tab(char *valu, char *vald)
{
    int x;
    int b = my_strlen(vald);
    int a = my_strlen(valu);

    x = compar(a, b);
    if (a >= b)
        return vald;
    return valu;
}
