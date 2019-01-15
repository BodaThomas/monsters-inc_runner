/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** The task02 of the CPool Day04
*/

#include <unistd.h>
#include "lib.h"

int my_putstr(char const *str)
{
    int length = my_strlen(str);
    int status = 0;

    status = write(1, str, length);
    return (status);
}
