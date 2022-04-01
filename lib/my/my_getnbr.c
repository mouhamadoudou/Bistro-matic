/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** hello
*/

int my_getnbr(char const *str)
{
    int pos_or = 1;
    int var = 0;
    int comp = 0;
    int check = 0;

    while (str[comp] != '\0') {
        while (str[comp] == '-') {
            pos_or = pos_or * -1;
            comp = comp + 1;
        }
        while (str[comp] - 48 < 10 && str[comp] -48 >= 0) {
            var = var * 10 + str [comp] - 48;
            comp = comp + 1;
            check = 1;
        }
        if (check == 1)
            var = var * pos_or;
        return var;
        comp = comp + 1;
    }
    return (var);
}
