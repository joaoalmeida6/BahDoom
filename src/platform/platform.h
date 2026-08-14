//
// Created by RUSSO on 11/08/2026.
//

#ifndef BAHDOOM_PLATFORM_H
#define BAHDOOM_PLATFORM_H

//platform event enum
typedef enum
{
    PLATFORM_EVENT_NONE,
    PLATFORM_EVENT_QUIT

} PlatformEvent;

//initialize platform module
int platform_init(void);
//process platform events
PlatformEvent platform_process_events(void);
//set window title
void platform_set_window_title(const char *title);
//shutdown platform module
void platform_shutdown(void);

#endif //BAHDOOM_PLATFORM_H
