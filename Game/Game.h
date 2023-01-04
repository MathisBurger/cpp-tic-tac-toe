//
// Created by Mathis Burger on 01.01.23.
//

#ifndef TIC_TAC_TOE_GAME_H
#define TIC_TAC_TOE_GAME_H
#include "../Entities/Playground.h"
#include "../Validator/GameOverValidator.h"


class Game {
private:
    Playground* playground = new Playground();
    GameOverValidator validator = GameOverValidator(playground);
    char lastPlayer;
    void promptInput(char player);
    int resolvePlayer(char player);
    char resolvePlayer(int player);

public:
    Game();
    void startGame();
    void nextStep();
    bool checkGameOver();

};


#endif //TIC_TAC_TOE_GAME_H
