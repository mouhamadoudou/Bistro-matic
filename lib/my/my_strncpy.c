/*
** EPITECH PROJECT, 2021
** my_strncpy.c
** File description:
** hello
*/

#include<unistd.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    size_t i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    while ( i < n) {
        i++;
        dest[i] = '\0';
    }
    return dest;
}
