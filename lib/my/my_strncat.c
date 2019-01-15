/*
** EPITECH PROJECT, 2018
** my_strncat
** File description:
** The task03 of the CPool Day07
*/

#include "lib.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int dest_length = my_strlen(dest);
    int i = 0;

    while (i != nb) {
        dest[dest_length + i] = src[i];
        i++;
    }
    dest[dest_length + i] = '\0';
    return (dest);
}
