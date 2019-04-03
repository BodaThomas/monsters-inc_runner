/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** The file who manage sprites of the game
*/

#include "runner.h"

void destroy_sprite(game_t *game)
{
    sfSprite_destroy(game->sky_sprite);
    sfSprite_destroy(game->road_sprite);
    sfSprite_destroy(game->road_sprite2);
    sfSprite_destroy(game->houses_sprite);
    sfSprite_destroy(game->houses_sprite2);
}
