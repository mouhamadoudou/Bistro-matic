/*
** EPITECH PROJECT, 2021
** my_print_digits.c
** File description:
** hi
*/

#include<unistd.h>

void my_putchar(char c);

int my_print_digits(void)
{
    int c;

    for (int c = 48 ; c <= 57 ; c++) {
        my_putchar(c);
        my_putchar('\n');
    }
    return (0);
}
