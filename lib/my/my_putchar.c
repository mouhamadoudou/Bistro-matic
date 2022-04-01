/*
** EPITECH PROJECT, 2021
** my_putchard.C
** File description:
** hi
*/

#include<unistd.h>

void my_putchard(char c)
{
    write(1, &c, 1);
}
