/*
** EPITECH PROJECT, 2018
** my_strncpy
** File description:
** The task02 of the CPool Day06
*/

#include "lib.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i != n) {
        dest[i] = src[i];
        i++;
        if (src[i] == '\0') {
            dest[i] = '\0';
            return (dest);
        }
    }
    return (dest);
}
