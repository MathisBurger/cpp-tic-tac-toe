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
