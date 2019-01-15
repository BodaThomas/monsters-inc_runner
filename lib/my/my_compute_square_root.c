/*
** EPITECH PROJECT, 2018
** my_compute_square_root
** File description:
** The task05 of the CPool Day05
*/

#include "lib.h"

int my_compute_square_root(int nb)
{
    int searcher = 0;

    if (nb <= 0) {
        searcher = 0;
        return (searcher);
    }
    while (searcher * searcher != nb) {
        searcher = searcher + 1;
        if (nb < searcher) {
            searcher = 0;
            return (searcher);
        }
    }
    return (searcher);
}
