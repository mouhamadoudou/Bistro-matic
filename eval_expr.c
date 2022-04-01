/*
** EPITECH PROJECT, 2021
** eval_expr.c
** File description:
** eval_expr
*/
#include <stdlib.h>
#include <unistd.h>
#include "include/my.h"
#include "include/priority_cal.h"

char *priority_cal(char **tab, int i)
{
    int comp = i + 1;
    char *result;

    tab[i][0] = 'e';
    while (tab[comp][0] != ')') {
        if (MULT || DIV || MOD) {
            result = mod_div_mul(tab, comp);
        } else if (PLUS || OP_V || SUB)
            result = mod_div_mul(tab, comp);
        comp = comp + 1;
    }
    return result;
}

char *eval_expr2(char **tab, int len)
{
    char *result2;

    for (int i = 0; i < len; i++) {
        if (tab[i][0] == '+' || tab[i][0] == 'v' || tab[i][0] == '-') {
            result2 = mod_div_mul(tab, i);
        }
    }
    return result2;
}

char *eval_expr_1(char **tab)
{
    int len = tab_len(tab);
    char *result2;

    for (int i = 0; i < len; i++) {
        if (tab[i][0] == '(') {
            result2 = priority_cal(tab, i);
            tab[i] = my_strcpy(tab[i], result2);
        }
    }
    for (int i = 0; i < len; i++) {
        if (tab[i][0] == '*' || tab[i][0] == '/' || tab[i][0] == '%') {
            result2 = mod_div_mul(tab, i);
        }
    }
    result2 = eval_expr2(tab, len);
    return result2;
}

char *eval_expr(char *op_len)
{
    int j = 0;
    int c = 0;
    int len = my_strlen(op_len);
    char **tab = my_shunting(op_len, len, j, c);
    char *res = eval_expr_1(tab);
    return (res);
}
