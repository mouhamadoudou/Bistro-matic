/*
** EPITECH PROJECT, 2021
** error_handler
** File description:
** error_gestion
*/
#include <unistd.h>
#include <stdlib.h>
#include "include/my.h"
#include "include/bistromatic.h"
#include "include/shaunting_value.h"

char  *get_expr(unsigned int size)
{
    char *expr;

    if (size <= 0) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_SIZE_NEG);
    }
    expr = malloc(size + 1);
    if (expr == 0) {
        my_putstr(ERROR_MSG);
        exit(EXIT_MALLOC);
    }
    if (read(0, expr, size) != size) {
        my_putstr(ERROR_MSG);
        exit(EXIT_READ);
    }
    expr[size] = 0;
    return (expr);
}

void check_match_parenthesis(char *str)
{
    int par = 0;
    int i = 0;
    int len = my_strlen(str);

    while (i != len) {
        if (str[i] == '(') {
            par++;
        } else if (str[i] == ')') {
            par--;
        }
        i++;
    }
    if (par != 0) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_BASE);
    }
}

void check_op_base(char const *str)
{
    int i = 0;
    int e = 0;
    int len = my_strlen(str);

    for (; i < len; i++) {
        if (STRA || STRB || STRC || STRD || STRE) {
            e++;
        }
    }
    if (e != 0) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_OPS);
    }
}

void check_ops(char const *ops)
{
    if (my_strlen(ops) != 7) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_OPS);
    }
}

void check_base(char const *b)
{
    if (my_strlen(b) < 2) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_BASE);
    }
}
