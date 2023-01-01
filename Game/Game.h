//
// Created by Mathis Burger on 01.01.23.
//

#ifndef TIC_TAC_TOE_GAME_H
#define TIC_TAC_TOE_GAME_H
#include "../Entities/Playground.h"


class Game {
private:
    Playground* playground;
    void promptInput();

public:
    Game();
    void startGame();
    void nextStep();
    bool checkGameOver();

};


#endif //TIC_TAC_TOE_GAME_H
