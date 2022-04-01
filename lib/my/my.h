/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** hello
*/

#ifndef _MY_H_
    #define _MY_H_

int compar(int x, int y);
char *compar_long_tab(char *valu, char *vald);
char *compar_small_tab(char *valu, char *vald);
char *infin_add( char *valu, char *vald);
char *calcul(char *valu, char *vald, int len);
char *my_regul(char *petit, int len_grand);
char *eval_expr(char *op_len);
char *mod_div_mul(char **tab, int i);
int do_op(char *nb1, char *ope, char *nb2);
int my_show_word_array(char * const *tab);
int nb_dig_int(int nb);
int count_nb(char *str, int len);
int next_str(int j, char **tab, int len);
char **my_shunting(char *str, int len, int j, int c);
int tab_len(char **tab);
char *int_to_str(int nb);
char *mult(char **tab, int i);
void my_putchar(char c);
char *my_strstr(char *str, char const *to_find);
int my_isneg(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(int nb);
int my_strncmp(char const *s1, char const *s2, int n);
void my_swap(int *a, int *b);
char *my_strupcase(char *str);
int my_putstr(char const *str);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
char *my_strcapitalize(char *str);
int my_getnbr(char const *str);
int my_str_isalpha(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isnum(char const *str);
int my_compute_power_rec(int nb, int power);
int my_str_islower(char const *str);
int my_compute_square_root(int nb);
int my_str_isupper(char const *str);
int my_is_prime(int nb);
int my_str_isprintable(char const *str);
int my_find_prime_sup(int nb);
int my_showstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_showmem(char const *str, int size);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);
char *my_strncat(char *dest, char const *src, int nb);

#endif
