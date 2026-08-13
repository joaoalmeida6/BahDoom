#include <stdio.h>
#include "engine.h"
#include "time.h"
#include "../game/game.h"
#include "engine_state.h"
#include "../platform/platform.h"

//engine state
static EngineState engine;

static void process_input(void)
{

}

static void render(void)
{

}

//initialize engine
void engine_init(void)
{
    printf("Engine Init\n");


    //set engine state to running
    engine.running = 1;
    engine.initialized = 1;

    //initialize platform module
    if (!platform_init())
    {
        engine.running = 0;
        engine.initialized = 0;

        return;
    }

    //initialize time module
    time_init();
    //initialize game module
    game_init();
}

//run engine
void engine_run(void)
{
    double accumulator = 0.0;
    const double tick_duration = 1.0 / GAME_TICK_RATE;

    //game loop
    while (engine.running)
    {
        double delta_time = time_get_delta();

        accumulator += delta_time;

        platform_process_events();

        //check platform event
        PlatformEvent event = platform_process_events();
        if (event == PLATFORM_EVENT_QUIT)
        {
            engine_quit();
        }

        process_input();

        while (accumulator >= tick_duration)
        {
            //update game
            game_update(tick_duration);

            accumulator -= tick_duration;
        }
        render();
    }
}

//shutdown engine
void engine_shutdown(void)
{
    game_shutdown();
    platform_shutdown();

    //set engine state to not initialized
    engine.initialized = 0;
    //set engine state to not running
    engine.running = 0;

    printf("Engine Shutdown\n");
}

//engine quit
void engine_quit(void)
{
    engine.running = 0;
}
