//
// Created by RUSSO on 13/08/2026.
//
#include <SDL3/SDL.h>
#include <string.h>

#include "keyboard.h"

static unsigned char current_keys[KEY_ESCAPE + 1];
static unsigned char previous_keys[KEY_ESCAPE + 1];

static KeyboardKey keyboard_key_from_scancode(SDL_Scancode scancode)
{
    switch (scancode)
    {
        case SDL_SCANCODE_W:
            return KEY_W;
        case SDL_SCANCODE_A:
            return KEY_A;
        case SDL_SCANCODE_S:
            return KEY_S;
        case SDL_SCANCODE_D:
            return KEY_D;
        case SDL_SCANCODE_UP:
            return KEY_UP;
        case SDL_SCANCODE_LEFT:
            return KEY_LEFT;
        case SDL_SCANCODE_RIGHT:
            return KEY_RIGHT;
        case SDL_SCANCODE_SPACE:
            return KEY_SPACE;
        case SDL_SCANCODE_ESCAPE:
            return KEY_ESCAPE;
        default:
            return KEY_UNKNOWN;
    }
}

static int keyboard_key_is_valid(KeyboardKey key)
{
    return key > KEY_UNKNOWN && key <= KEY_ESCAPE;
}

void keyboard_init(void)
{
    memset(current_keys, 0, sizeof(current_keys));
    memset(previous_keys, 0, sizeof(previous_keys));
}

void keyboard_update(void)
{
    memcpy(previous_keys, current_keys, sizeof(current_keys));
}

void keyboard_process_event(const void *event)
{
    const SDL_Event *sdl_event = event;
    KeyboardKey key;

    if (sdl_event == NULL)
    {
        return;
    }

    if (sdl_event->type != SDL_EVENT_KEY_DOWN &&
        sdl_event->type != SDL_EVENT_KEY_UP)
    {
        return;
    }

    key = keyboard_key_from_scancode(sdl_event->key.scancode);

    if (!keyboard_key_is_valid(key))
    {
        return;
    }

    current_keys[key] = sdl_event->type == SDL_EVENT_KEY_DOWN;
}

int keyboard_is_down(KeyboardKey key)
{
    return keyboard_key_is_valid(key) && current_keys[key];
}

int keyboard_is_pressed(KeyboardKey key)
{
    return keyboard_key_is_valid(key) &&
           current_keys[key] && !previous_keys[key];
}

int keyboard_is_released(KeyboardKey key)
{
    return keyboard_key_is_valid(key) &&
           !current_keys[key] && previous_keys[key];
}

void keyboard_shutdown(void)
{
    memset(current_keys, 0, sizeof(current_keys));
    memset(previous_keys, 0, sizeof(previous_keys));

}
