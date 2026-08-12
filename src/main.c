#include <stdio.h>
#include "core/engine.h"

int main(void)
{

    printf("Doom Engine\n");

    engine_init();

    engine_run();

    engine_shutdown();
    
    return 0;
}
