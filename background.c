/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** The file who manage the background of the game
*/

#include <SFML/Graphics.h>
#include "lib.h"
#include "runner.h"
#include "game.h"

void launch_parallax(game_t *game)
{
    float posX = 0;
    float posY = 0;
    sfVector2f road_pos = {posX, posY};

    posX = posX - 0.1;
    if (posX > 800)
        posX = -130;
    road_pos.x = posX;
    sfSprite_setPosition(game->road_sprite, road_pos);
    sfRenderWindow_drawSprite(game->window, game->sky_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, game->road_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, game->houses_sprite, NULL);
}

void set_background(game_t *game)
{
    sfSprite_setTexture(game->sky_sprite, game->sky, sfTrue);
    sfSprite_setTexture(game->road_sprite, game->road, sfTrue);
    sfSprite_setTexture(game->road_sprite2, game->road, sfTrue);
    sfSprite_setTexture(game->houses_sprite, game->houses, sfTrue);
}
