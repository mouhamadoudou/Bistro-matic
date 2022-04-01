/*
** EPITECH PROJECT, 2021
** calcul.c
** File description:
** hello
*/
#include <stdio.h>
#include <stdlib.h>

char *my_revstr(char *str);

char *calcul(char *valu, char *vald, int len)
{
    int result, are, b;
    int res2;
    char *stock = malloc(sizeof(char) * len + 2);

    valu = my_revstr(valu);
    vald = my_revstr(vald);
    for (int i = 0; i < len; i++) {
        result = (valu[i] - 48) + (vald[i] - 48);
        if (result >= 10) {
            b = 1;
            result = result % 10;
            stock[i] = result + '0';
            vald[i+1] = ((vald[i+1] - 48) + 1) + '0';
            stock[i+1] = '1';
        }
        if (result < 10)
            stock[i] = result + 48;
    }
    stock = my_revstr(stock);
    return stock;
}
