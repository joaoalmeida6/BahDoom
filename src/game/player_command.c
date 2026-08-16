//
// Created by RUSSO on 16/08/2026.
//

#include "player_command.h"
#include "../input/input.h"

void player_command_clear(PlayerCommand *command)
{
    command->move_forward = 0;
    command->move_backward = 0;
    command->move_left = 0;
    command->move_right = 0;

    command->turn_left = 0;
    command->turn_right = 0;

    command->fire = 0;
    command->use = 0;

    command->menu = 0;
    command->pause = 0;
}

void player_command_from_input(PlayerCommand *command)
{
    player_command_clear(command);

    command->move_forward =
        input_action_down(ACTION_MOVE_FORWARD);

    command->move_backward =
        input_action_down(ACTION_MOVE_BACKWARD);

    command->move_left =
        input_action_down(ACTION_MOVE_LEFT);

    command->move_right =
        input_action_down(ACTION_MOVE_RIGHT);
}