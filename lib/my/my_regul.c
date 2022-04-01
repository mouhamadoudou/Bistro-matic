/*
** EPITECH PROJECT, 2021
** my_regul.c
** File description:
** hello
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_strlen(char *str);

char *my_regul(char *petit, int len_grand)
{
    int len_petit = my_strlen(petit);
    int comp = 0;
    int small = len_petit;
    char *dest = malloc(sizeof(char) * len_grand + 1);

    while (len_petit < len_grand){
        dest[comp] = '0';
        comp ++;
        len_petit ++;
    }
    for (int comp1 = 0; comp1 < small; comp1 ++){
        dest[comp] = petit[comp1];
        comp ++;
    }
    dest[comp] = '\0';
    return dest;
}
