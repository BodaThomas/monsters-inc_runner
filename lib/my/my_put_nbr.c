/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** The task07 of the CPool Day03
*/

#include "lib.h"

int my_put_nbr(int nb)
{
    long mod;

    if (nb == -2147483648) {
        my_put_nbr(-214748364);
        my_putchar('8');
        return (1);
    }
    if (nb < 10 && nb >= 0) {
        my_putchar(nb + '0');
    } else if (nb < 0) {
        my_putchar(45);
        nb = nb * (-1);
        my_put_nbr(nb);
    } else {
        my_put_nbr(nb/10);
        my_putchar(nb%10 + '0');
    }
    return (0);
}
