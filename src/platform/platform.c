//
// Created by RUSSO on 11/08/2026.
//

#include "platform.h"
#include <stdio.h>

//initialize platform module
int platform_init(void)
{
    printf("Platform Init\n");
    return 1;
}

//process platform events
void platform_process_events(void)
{
    printf("Platform Events\n");
}

//shutdown platform module
void platform_shutdown(void)
{
    printf("Platform Shutdown\n");
}