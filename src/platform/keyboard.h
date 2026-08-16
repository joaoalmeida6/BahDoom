//
// Created by RUSSO on 13/08/2026.
//

#ifndef BAHDOOM_KEYBOARD_H
#define BAHDOOM_KEYBOARD_H

typedef enum
{
    KEY_UNKNOWN = 0,

    KEY_W,
    KEY_A,
    KEY_S,
    KEY_D,

    KEY_UP,
    KEY_LEFT,
    KEY_RIGHT,

    KEY_SPACE,
    KEY_ESCAPE,
} KeyboardKey;

//initialize keyboard module
void keyboard_init(void);
//update keyboard module
void keyboard_update(void);
//process keyboard event
void keyboard_process_event(const void *event);

//check if key is down
int keyboard_is_down(KeyboardKey key);
//check if key is pressed
int keyboard_is_pressed(KeyboardKey key);
//check if key is released
int keyboard_is_released(KeyboardKey key);

//shutdown keyboard module
void keyboard_shutdown(void);


#endif //BAHDOOM_KEYBOARD_H
