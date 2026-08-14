//
// Created by RUSSO on 13/08/2026.
//

#ifndef BAHDOOM_INPUT_H
#define BAHDOOM_INPUT_H

typedef enum
{
    //input actions
    ACTION_MOVE_FORWARD,
    ACTION_MOVE_BACKWARD,
    ACTION_MOVE_LEFT,
    ACTION_MOVE_RIGHT,

    ACTION_TURN_LEFT,
    ACTION_TURN_RIGHT,

    ACTION_FIRE,
    ACTION_USE,

    ACTION_MENU,
    ACTION_PAUSE,

    ACTION_COUNT,
} InputAction;

int input_action_down(InputAction action);
int input_action_pressed(InputAction action);
int input_action_released(InputAction action);

#endif //BAHDOOM_INPUT_H
