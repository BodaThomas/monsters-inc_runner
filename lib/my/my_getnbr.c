/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** The task05 of the CPool Day04
*/

#include <stdlib.h>
#include "lib.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int length = my_strlen(str);
    int find = 0;
    int final = 0;

    while (i != length) {
        if (str[i] >= 48 && str[i] <= 57) {
            final = final * 10 + (str[i] - '0');
            find = find + 1;
        }
            i++;
        if (!(str[i] >= 48 && str[i] <= 57) && (str[i - 1] >= 48 &&
            str[i - 1] <= 57)) {
            return (final);
        }
    }
}
