/*
** EPITECH PROJECT, 2021
** do_op.c
** File description:
** do_op h
*/
#include <unistd.h>

void my_putchar(char c);

int my_put_nbr(int nb);

int my_getnbr(char *str);

int do_op3(int n1, int n2, char *ope)
{
    int result = 0;

    if (ope[0] == '%') {
        result = n1 % n2;
    }
    return result;
}

int do_op2(int n1, int n2, char *ope)
{
    int result = 0;

    if (ope[0] == '*') {
        result = n1 * n2;
    } else if (ope[0] == '/') {
        result = n1 / n2;
    } else {
        result = do_op3(n1, n2, ope);
    }
    return result;
}

int do_op(char *nb1, char *ope, char *nb2)
{
    int n1 = my_getnbr(nb1);
    int n2 = my_getnbr(nb2);
    int result = 0;

    if (ope[0] == '+')
        result = n1 + n2;
    else if (ope[0] == '-')
        result = n1 - n2;
    else
        result = do_op2(n1, n2, ope);
    return result;
}
