/*
** EPITECH PROJECT, 2018
** my_find_prime_sup
** File description:
** The task07 of the CPool Day05
*/

#include "lib.h"

int my_find_prime_sup(int nb)
{
    int i = nb + 1;
    int div_true_numb = 0;
    int i_prime = nb;

    if (nb <= 2) {
        return (2);
    }
    while (div_true_numb == 0) {
        if (i_prime % i == 0) {
            div_true_numb++;
            return (i_prime);
        } else {
            i_prime++;
        }
    }
    return (0);
}
