/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** The task11 of the CPool Day06
*/

#include "lib.h"

int my_str_isnum(char const *str)
{
    int str_length = my_strlen(str);
    int i = 0;

    while (i != str_length) {
        if (!(str[i] > 47 && str[i] < 58))
            return (0);
        i++;
    }
    return (1);
}
