/*
** EPITECH PROJECT, 2018
** my_is_prime
** File description:
** The task06 of the CPool Day05
*/

#include "lib.h"

int my_is_prime(int nb)
{
    int i = nb - 1;
    int div_true_numb = 0;

    while (i >= 2) {
        if (nb % i == 0) {
            div_true_numb++;
        }
        i--;
    }
    if (div_true_numb == 0 && nb >= 2) {
        return (1);
    } else {
        return (0);
    }
}
