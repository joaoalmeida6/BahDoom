//
// Created by RUSSO on 10/08/2026.
//
#include <time.h>
#include "time.h"

//initialize time module
static clock_t previous_time;

void time_init(void)
{
    previous_time = clock();
}

//get delta time
double time_get_delta(void)
{
    clock_t current_time;
    double delta;

    current_time = clock();

    delta = (double)(current_time - previous_time) / CLOCKS_PER_SEC;

    previous_time = current_time;

    return delta;
}