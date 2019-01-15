/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** The task03 of the CPool Day04
*/

#include "lib.h"

int my_strlen(char const *str)
{
    int rep = 0;
    while (str[rep] != '\0') {
        rep = rep + 1;
    }
    return (rep);
}
