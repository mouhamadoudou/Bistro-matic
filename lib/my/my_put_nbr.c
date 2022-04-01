/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** hi
*/
#include<unistd.h>
#include<stdio.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + '0');
    } else if (nb < 10) {
        my_putchar(nb + '0');
    } else {
        my_putchar('-');
        nb = -nb;
    }
    return nb;
}
