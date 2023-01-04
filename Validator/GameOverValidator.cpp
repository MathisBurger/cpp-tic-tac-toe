//
// Created by Mathis Burger on 03.01.23.
//

#include "GameOverValidator.h"

/**
 * GameOverValidator constructor
 *
 * @param playground The playground
 */
GameOverValidator::GameOverValidator(Playground* playground) {
    this->playground = playground;
}

/**
 * Checks if the field is filled
 *
 * @return If the field is filled
 */
bool GameOverValidator::isFieldFilled() {
    for (int i=0; i<9; i++) {
        int val = this->playground->getPlaygroundPos(i);
        if (val == 0) {
            return false;
        }
    }
    return true;
}

/**
 * Gets the horizontal winner (zero means no winner)
 *
 * @return The winner ID
 */
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

/**
 * Gets the vertical winner (zero means no winner)
 *
 * @return The winner ID
 */
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

/**
 * Gets the diagonal winner (zero means no winner)
 *
 * @return The winner ID
 */
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

/**
 * Checks if there is a horizontal winner.
 *
 * @return If there is a horizontal winner
 */
bool GameOverValidator::isHorizontalWinner() {
    return this->getHorizontalWinner() != 0;
}

/**
 * Checks if there is a vertical winner.
 *
 * @return If there is a vertical winner
 */
bool GameOverValidator::isVerticalWinner() {
    return this->getVerticalWinner() != 0;
}

/**
 * Checks if there is a diagonal winner.
 *
 * @return If there is a diagonal winner
 */
bool GameOverValidator::isDiagonalWinner() {
    return this->getDiagonalWinner() != 0;
}
