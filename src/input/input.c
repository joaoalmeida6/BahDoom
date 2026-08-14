//
// Created by RUSSO on 13/08/2026.
//

#include "input.h"
#include "../platform/keyboard.h"

static int action_key(InputAction action)
{
    switch (action)
    {
        case ACTION_MOVE_FORWARD:
            return KEY_W;

        case ACTION_MOVE_BACKWARD:
            return KEY_S;

        case ACTION_MOVE_LEFT:
            return KEY_A;

        case ACTION_MOVE_RIGHT:
            return KEY_D;

        default:
            return -1;
    }
}

int input_action_down(InputAction action)
{
    int key = action_key(action);

    if (key == -1)
        return 0;

    return keyboard_is_down(key);
}