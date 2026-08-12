//
// Created by RUSSO on 10/08/2026.
//

#ifndef BAHDOOM_GAME_H
#define BAHDOOM_GAME_H

#define GAME_TICK_RATE 35.0

//initialize game
void game_init(void);
//update game
void game_update(double delta_time);
//shutdown game
void game_shutdown(void);

#endif //BAHDOOM_GAME_H
