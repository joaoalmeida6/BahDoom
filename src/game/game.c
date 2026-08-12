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
void game_update(double delta_time)
{
    //update player position
    player_position += player_speed * delta_time;
    printf("Game Update: %.6f\n", delta_time);
}

//shutdown game
void game_shutdown(void)
{
    printf("Game Shutdown\n");
}
