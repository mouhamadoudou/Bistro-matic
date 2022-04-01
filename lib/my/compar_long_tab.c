/*
** EPITECH PROJECT, 2021
** compar_long_tab.c
** File description:
** compar_long_tab
*/
#include <stdio.h>
#include <stdlib.h>

int compar(int x, int y);
int my_strlen(char *str);

char *compar_long_tab(char *valu, char *vald)
{
    int x;
    int b = my_strlen(vald);
    int a = my_strlen(valu);

    x = compar(a, b);
    if (a >= b) {
        return valu;
    }
    return vald;
}
