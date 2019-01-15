/*
** EPITECH PROJECT, 2018
** my_compute_power_rec
** File description:
** The task04 of the CPool Day05
*/

#include "lib.h"

int my_compute_power_rec(int nb, int p)
{
    int result = 1;
    int i = 0;

    if (p == 0) {
        return (1);
    }
    if (p < 0) {
        return (0);
    }
    return (nb * my_compute_power_rec(nb, p - 1));
}
