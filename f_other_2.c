/*
** EPITECH PROJECT, 2021
** f_other2.c
** File description:
** hello N
*/
#include <stdlib.h>
#include <unistd.h>
#include "include/my.h"

int tab_len(char **tab)
{
    int i = 0;

    while (tab[i + 1] != NULL) {
        i++;
    }
    return i;
}

char *int_to_str(int nb)
{
    int len = nb_dig_int(nb);
    char *str = malloc(sizeof(char) * len);
    int j = len - 1;

    for (int i = 0; i < len; i++) {
        str[j] = (nb % 10) + '0';
        nb = nb / 10;
        j--;
    }

    return str;
}

int negative(int result)
{
    if (result < 0) {
        my_putchar('-');
        result = result * (-1);
    }
    if (result == 0)
        my_putchar(0);
    return result;
}

char *mult(char **tab, int i)
{
    int a = i;
    int b = i;
    int result = 0;
    char *str;

    while (tab[a - 1][0] < 48 || tab[a - 1][0] > 57)
        a--;
    while (tab[b + 1][0] < 48 || tab[b + 1][0] > 57)
        b++;
    a--;
    b++;
    if (tab[i][0] == '+') {
        str = infin_add(tab[a], tab[b]);
        return str;
    }
    result = do_op(tab[a], tab[i], tab[b]);
    result = negative(result);
    str = int_to_str(result);
    tab[a][0] = 'e';
    tab[b][0] = 'e';
    return str;
}

char *mod_div_mul(char **tab, int i)
{
    char *stock_str;
    char *stock_str2;

    stock_str = mult(tab, i);
    stock_str2 = stock_str;
    tab[i + 1] = stock_str2;
    tab[i][0] = '\0';
    tab[i][0] = 'e';
    tab[i - 1][0] = '\0';
    tab[i - 1][0] = 'e';
    return stock_str2;
}
