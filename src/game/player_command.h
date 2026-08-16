//
// Created by RUSSO on 16/08/2026.
//

#ifndef BAHDOOM_PLAYER_COMMAND_H
#define BAHDOOM_PLAYER_COMMAND_H

typedef struct
{
    int move_forward;
    int move_backward;
    int move_left;
    int move_right;

    int turn_left;
    int turn_right;

    int fire;
    int use;

    int menu;
    int pause;
} PlayerCommand;

void player_command_clear(PlayerCommand *command);
void player_command_from_input(PlayerCommand *command);

#endif //BAHDOOM_PLAYER_COMMAND_H
