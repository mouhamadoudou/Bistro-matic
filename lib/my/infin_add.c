/*
** EPITECH PROJECT, 2021
** infin_add.c
** File description:
** hello
*/
#include <stdio.h>
#include <stdlib.h>

char *compar_long_tab(char *valu, char *vald);
char *compar_small_tab(char *valu, char *vald);
int compar(int x, int y);
int my_strlen(char *str);
char *my_regul(char *petit, int len_grand);
char *calcul(char *valu, char *vald, int strl_up);
char *my_regul(char *petit, int len_grand);

char *infin_add( char *valu, char *vald)
{
    char *b;
    int strl_valu = my_strlen(valu);
    int strl_vald = my_strlen(vald);
    int strl_up = compar(strl_valu, strl_vald);
    char *long_tab = compar_long_tab(valu, vald);
    char *small_tab = compar_small_tab(valu, vald);

    small_tab = my_regul(small_tab, strl_up);
    if (valu[0] == '0')
        return vald;
    else if (vald[0] == '0')
        return valu;
    b = calcul(long_tab, small_tab, strl_up);
    return b;
}
