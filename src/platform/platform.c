//
// Created by RUSSO on 11/08/2026.
//

#include <stdio.h>
#include <SDL3/SDL.h>

#include "platform.h"

//platform window
static SDL_Window *window = NULL;

//initialize platform module
int platform_init(void)
{
    //initialize SDL
    if (!SDL_Init(SDL_INIT_VIDEO))
    {
        printf("SDL_Init failed: %s\n", SDL_GetError());
        return 0;
    }

    //create window
    window = SDL_CreateWindow(
    "BahDoom",
    1280,
    720,
    SDL_WINDOW_RESIZABLE
    );

    //check if window creation failed
    if (window == NULL)
    {
        printf("SDL_CreateWindow failed: %s\n", SDL_GetError());

        SDL_Quit();

        return 0;
    }

    printf("Platform Init\n");
    printf("BahDoom Window Created\n");

    return 1;
}

//process platform events
PlatformEvent platform_process_events(void)
{
    //process events
    SDL_Event event;

    //poll events
    while (SDL_PollEvent(&event))
    {
        //check if event is quit
        if (event.type == SDL_EVENT_QUIT)
        {
            printf("Quit Event\n");
            return PLATFORM_EVENT_QUIT;
        }
    }

    return PLATFORM_EVENT_NONE;
}

//shutdown platform module
void platform_shutdown(void)
{
    //destroy window
    if (window != NULL)
    {
        SDL_DestroyWindow(window);
        window = NULL;
    }

    //shutdown SDL
    SDL_Quit();

    printf("Platform Shutdown\n");
}