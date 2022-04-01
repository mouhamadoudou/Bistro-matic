/*
** EPITECH PROJECT, 2021
** f_other.c
** File description:
** helloo
*/
#include <stdlib.h>
#include <unistd.h>
#include "include/my.h"
#include "include/shaunting_value.h"

int my_show_word_array(char * const *tab)
{
    int i = 0;

    while (tab[i] != 0) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
    return 0;
}

int nb_dig_int(int nb)
{
    int i = 0;

    while (nb > 0) {
        nb = nb / 10;
        i++;
    }
    return i;
}

int count_nb(char *str, int len)
{
    int i = 0;

    while (i < len && (str[i] >= 48 && str[i] <= 57)) {
        i++;
    }
    return i;
}

int next_str(int j, char **tab, int len)
{
    if (tab[j][0] != '\0') {
        j++;
        tab[j] = malloc(sizeof(char) * len + 2);
    }
    return j;
}

char **my_shunting(char *str, int len, int j, int c)
{
    char **tab = malloc(sizeof(char *) * len + 1);
    tab[0] = malloc(sizeof(char) * 4);
    int b = 0;

    for (int i = 0; i < len;) {
        for (;str[i] >= 48 && str[i] <= 57; c++, i++) {
            tab[j][c] = str[i];
            b = 1;
        }
        for (;b == 0 && (STRA || STRB || STRC || STRD || STRE); i++, c++)
            tab[j][c] = str[i];
        c = b = 0;
        j = next_str(j, tab, len);
        if (str[i] == 40 || str[i] == 41) {
            tab[j][c] = str[i];
            i++;
            b = 1;
        }
        j = next_str(j, tab, len);
    }
    return tab;
}
