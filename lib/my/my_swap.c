/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** hello
*/

void my_swap(int *pt_x, int *pt_y)
{
    int change;

    change = *pt_x;
    *pt_x = *pt_y;
    *pt_y = change;
}
