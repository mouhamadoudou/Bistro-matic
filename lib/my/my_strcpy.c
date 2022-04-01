/*
** EPITECH PROJECT, 2021
** my_strcpy.c
** File description:
** hello!
*/

#include<unistd.h>

char *my_strcpy(char *dest, char const *src)
{
    size_t i;
    int x = 10;

    for (i = 0; i < x && src[i] != '\0'; i++)
        dest[i] = src[i];
    for ( ; i < x; i++) {
        dest[i] = '\0';
    }
    return dest;
}
