#include <stdio.h>
#include "engine.h"
#include "time.h"
#include "../game/game.h"


static void process_input(void)
{
    printf("Input\n");
}

static void render(void)
{
    printf("Render\n");
}

//initialize engine
void engine_init(void)
{
    printf("Engine Init\n");

    //initialize time module
    time_init();
    //initialize game module
    game_init();
}

//run engine
void engine_run(void)
{
    int running = 1;

    double accumulator = 0.0;
    const double tick_duration = 1.0 / GAME_TICK_RATE;

    //game loop
    while (running)
    {
        double delta_time = time_get_delta();

        accumulator += delta_time;

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
    printf("Engine Shutdown\n");
}
