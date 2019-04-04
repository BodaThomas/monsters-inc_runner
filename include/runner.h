/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** The .h file of the my_runner project
*/

#ifndef RUNNER_H
#define RUNNER_H

#include "game.h"
#include "lib.h"

void set_background(game_t *game);
int init_game(game_t *game);
int game(void);
void help(void);
void print_error(int mode);

#endif
