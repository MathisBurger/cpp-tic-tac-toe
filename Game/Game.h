//
// Created by Mathis Burger on 01.01.23.
//

#ifndef TIC_TAC_TOE_GAME_H
#define TIC_TAC_TOE_GAME_H
#include "../Entities/Playground.h"


class Game {
private:
    Playground* playground;
    char lastPlayer;
    void promptInput(char player);
    int resolvePlayer(char player);

public:
    Game();
    void startGame();
    void nextStep();
    bool checkGameOver();

};


#endif //TIC_TAC_TOE_GAME_H
