/*
** EPITECH PROJECT, 2018
** my_str_isalpha
** File description:
** The task10 of the CPool Day06
*/

#include "lib.h"

int my_str_isalpha(char const *str)
{
    int str_length = my_strlen(str);
    int i = 0;

    while (i != str_length) {
        if (!((str[i] > 64 && str[i] < 91) ||
        (str[i] > 96 && str[i] < 123)))
            return (0);
        i++;
    }
    return (1);
}
