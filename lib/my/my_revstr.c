/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** The task03 of the CPool Day06
*/

#include "lib.h"

char *my_revstr(char *str)
{
    int str_length = my_strlen(str) - 1;
    int i = 0;
    char temp;

    while (i < str_length) {
        temp = str[str_length];
        str[str_length] = str[i];
        str[i] = temp;
        i++;
        str_length--;
    }
    return (str);
}
