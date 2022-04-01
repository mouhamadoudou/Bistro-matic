/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main helo function
*/
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "my.h"
#include "bistromatic.h"

int main(int ac, char **av)
{
    unsigned int size;
    char *expr;

    if (ac != 4) {
        my_putstr("Usage: ");
        my_putstr(av[0]);
        my_putstr(" base ops\"()+_*/%\" exp_len\n");
        return (EXIT_USAGE);
    }
    check_base(av[1]);
    check_ops(av[2]);
    check_match_parenthesis(av[2]);
    check_op_base(av[1]);
    size = my_getnbr(av[3]);
    expr = get_expr(size);

    my_putstr(eval_expr(expr));
    return (EXIT_SUCCESS);
}
