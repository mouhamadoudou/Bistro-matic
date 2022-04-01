/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** hello
*/

#include<unistd.h>

int my_strlen(char *str)
{
    int decompteur = 1;
    int compteur = 1;

    while ( str[decompteur] != '\0'){
        compteur = compteur + 1;
        decompteur = decompteur + 1;
    }
    return (compteur);
}
