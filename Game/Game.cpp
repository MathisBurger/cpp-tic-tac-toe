//
// Created by Mathis Burger on 01.01.23.
//

#include "Game.h"
#include <iostream>

/**
 * Game constructor
 */
Game::Game() {
    this->lastPlayer = 'B';
}

/**
 * Starts the game by printing out most important information
 */
void Game::startGame() {
    std::cout << "Welcome to this amazing Tic Tac Toe game!" << std::endl;
    std::cout << "Player one: A; Player two: B" << std::endl;
    std::cout << "Happy playing" << std::endl << std::endl;
    this->playground->printPlayground();
}

/**
 * Goes on with the next step. Switches players and prompts for inputs
 */
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

/**
 * Checks if the game is over.
 *
 * @return If the game is over
 */
bool Game::checkGameOver() {
    if (this->validator.isDiagonalWinner()) {
        int player = this->validator.getDiagonalWinner();
        std::cout << "Player " << this->resolvePlayer(player) << " won!" << std::endl;
        return true;
    }
    if (this->validator.isHorizontalWinner()) {
        int player = this->validator.getHorizontalWinner();
        std::cout << "Player " << this->resolvePlayer(player) << " won!" << std::endl;
        return true;
    }
    if (this->validator.isVerticalWinner()) {
        int player = this->validator.getVerticalWinner();
        std::cout << "Player " << this->resolvePlayer(player) << " won!" << std::endl;
        return true;
    }
    if (this->validator.isFieldFilled()) {
        std::cout << "It`s a draw!" << std::endl;
        return true;
    }

    return false;
}

/**
 * Promts the user to input the number of the field he wants to occupy
 *
 * @param player The player that should be prompted
 */
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

/**
 *  Resolves a player by the character
 *
 * @param player The player character
 * @return The ID of the player
 */
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

/**
 * Resolves a player by the ID
 *
 * @param player The player ID
 * @return The character of the player
 */
char Game::resolvePlayer(int player) {
    switch (player) {
        case 1:
            return 'A';
        case 2:
            return 'B';
        default:
            return 'x';
    }
}
