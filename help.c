/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** The help function of the my_runner project
*/

#include "lib.h"
#include "runner.h"

void help(void)
{
    my_putstr("Finite runner created with CSFML.\n\n");
    my_putstr("USAGE\n  ./my_runner map.txt\n\n\n");
    my_putstr("OPTIONS\n  -i\t\t\tlaunch the game in infinity mode.\n");
    my_putstr("  -h\t\t\tprint the usage and quit.\n\n");
    my_putstr("USER INTERACTIONS\n  SPACE_KEY\t\tjump.\n");
}
