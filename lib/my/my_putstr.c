/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** hi
*/

#include<unistd.h>

void my_putchar(char c);

int my_putstr(char const *str)
{
    int  decompteur = 0;

    while (str[decompteur] != '\0') {
        my_putchar(str[decompteur]);
        decompteur = decompteur + 1;
    }
    return (0);
}
