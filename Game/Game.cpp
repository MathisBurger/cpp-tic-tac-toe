//
// Created by Mathis Burger on 01.01.23.
//

#include "Game.h"
#include <iostream>

Game::Game() {
    this->lastPlayer = 'B';
}

void Game::startGame() {
    std::cout << "Welcome to this amazing Tic Tac Toe game!" << std::endl;
    std::cout << "Player one: A; Player two: B" << std::endl;
    std::cout << "Happy playing" << std::endl << std::endl;
    this->playground->printPlayground();
}

void Game::nextStep() {
    if (this->lastPlayer == 'B') {
        this->promptInput('A');
        this->playground->printPlayground();
        this->lastPlayer = 'A';
    } else {
        this->promptInput('B');
        this->playground->printPlayground();
        this->lastPlayer = 'B';
    }
}

bool Game::checkGameOver() {
    if (this->validator.isFieldFilled()) {
        return true;
    }

    return false;
}

void Game::promptInput(char player) {
    std::cout << "Player " << player << " please insert the field number you want to occupy:" << std::endl;
    char c;
    std::cin >> c;
    int pos = (int)c - 48;
    if (pos < 0 || 9 < pos) {
        std::cout << "Invalid input! Try again." << std::endl;
        this->promptInput(player);
    }
    bool isOccupied = this->playground->isOccupied(pos);
    if (isOccupied) {
        std::cout << "Field already occupied! Try again." << std::endl;
        this->promptInput(player);
    }
    int playerAsInt = this->resolvePlayer(player);
    this->playground->updatePlayground(pos, playerAsInt);
}

int Game::resolvePlayer(char player) {
    switch (player) {
        case 'A':
            return 1;
        case 'B':
            return 2;
        default:
            return 0;
    }
}
