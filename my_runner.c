/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** The main file of the my_runner project
*/

#include "lib.h"
#include "runner.h"

int game(void)
{
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc > 1) {
        if (my_strcmp(argv[1], "-h") == 0) {
            help();
        } else {
            game();
        }
    } else {
        print_error(1);
    }
    return (0);
}
