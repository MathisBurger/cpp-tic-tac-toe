//
// Created by Mathis Burger on 03.01.23.
//

#include "GameOverValidator.h"

GameOverValidator::GameOverValidator(Playground* playground) {
    this->playground = playground;
}

bool GameOverValidator::isFieldFilled() {
    for (int i=0; i<9; i++) {
        int val = this->playground->getPlaygroundPos(i);
        if (val == 0) {
            return false;
        }
    }
    return true;
}

int GameOverValidator::getHorizontalWinner() {
    for (int i=0; i<3; i++) {
        int x = this->playground->getPlaygroundPos(i*3);
        int y = this->playground->getPlaygroundPos(i*3+1);
        int z = this->playground->getPlaygroundPos(i*3+2);
        if (x == y && y == z && x != 0) {
            return x;
        }
    }
    return 0;
}

int GameOverValidator::getVerticalWinner() {
    for (int i=0; i<3; i++) {
        int x = this->playground->getPlaygroundPos(0+i);
        int y = this->playground->getPlaygroundPos(3+i);
        int z = this->playground->getPlaygroundPos(6+i);
        if (x == y && y == z && x != 0) {
            return x;
        }
    }
    return 0;
}

int GameOverValidator::getDiagonalWinner() {
    int lr_x = this->playground->getPlaygroundPos(0);
    int lr_y = this->playground->getPlaygroundPos(4);
    int lr_z = this->playground->getPlaygroundPos(8);
    if (lr_x == lr_y && lr_y == lr_z && lr_x != 0) {
        return lr_x;
    }
    int rl_x = this->playground->getPlaygroundPos(2);
    int rl_y = this->playground->getPlaygroundPos(4);
    int rl_z = this->playground->getPlaygroundPos(6);
    if (rl_x == rl_y && rl_y == rl_z && rl_x != 0) {
        return rl_x;
    }
    return 0;
}

bool GameOverValidator::isHorizontalWinner() {
    return this->getHorizontalWinner() != 0;
}

bool GameOverValidator::isVerticalWinner() {
    return this->getVerticalWinner() != 0;
}

bool GameOverValidator::isDiagonalWinner() {
    return this->getDiagonalWinner() != 0;
}
