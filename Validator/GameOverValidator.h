//
// Created by Mathis Burger on 03.01.23.
//

#ifndef TIC_TAC_TOE_GAMEOVERVALIDATOR_H
#define TIC_TAC_TOE_GAMEOVERVALIDATOR_H

#include "../Entities/Playground.h"


class GameOverValidator {
private:
    Playground* playground;
public:
    GameOverValidator(Playground* playground);
    bool isFieldFilled();
    bool isVerticalWinner();
    int getVerticalWinner();
    bool isHorizontalWinner();
    int getHorizontalWinner();
    bool isDiagonalWinner();
    int getDiagonalWinner();
};


#endif //TIC_TAC_TOE_GAMEOVERVALIDATOR_H
