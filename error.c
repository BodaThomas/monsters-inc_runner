/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** The error function of the my_runner project
*/

#include "lib.h"
#include "runner.h"

void print_error(int mode)
{
    if (mode == 1) {
        my_putstr("./my_runner: bad arguments: 0 given but 1 is required\n");
        my_putstr("retry with -h\n");
    }
}
