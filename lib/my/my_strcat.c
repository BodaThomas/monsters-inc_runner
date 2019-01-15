/*
** EPITECH PROJECT, 2018
** my_strcat
** File description:
** The task02 of the CPool Day07
*/

#include <stdlib.h>
#include "lib.h"

char *my_strcat(char *dest, char const *src)
{
    int dest_length = my_strlen(dest);
    int i = 0;
    char* final = malloc(sizeof(char) * (my_strlen(src) + dest_length + 1));

    while (dest[i] != '\0') {
        final[i] = dest[i];
        i++;
    }
    i = 0;
    while (src[i] != '\0') {
        final[dest_length + i] = src[i];
        i++;
    }
    final[dest_length + i] = '\0';
    return (final);
}
