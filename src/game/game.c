//
// Created by RUSSO on 10/08/2026.
//

#include <stdio.h>
#include "game.h"

//player position
static double player_position = 0.0;
static double player_speed = 100.0;

//initialize game
void game_init(void)
{
    printf("Game Init\n");
}

//update game
void game_update(double tic_delta, const PlayerCommand *command)
{
    //update player position
    if (command->move_forward)
    {
        player_position += player_speed * tic_delta;
    }
    if (command->move_backward)
    {
        player_position -= player_speed * tic_delta;
    }
}

//shutdown game
void game_shutdown(void)
{
    printf("Game Shutdown\n");
}
