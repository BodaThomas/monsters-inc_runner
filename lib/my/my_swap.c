/*
** EPITECH PROJECT, 2018
** my_swap
** File description:
** The task01 of the CPool Day04
*/

#include "lib.h"

void my_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
