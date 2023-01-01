//
// Created by Mathis Burger on 01.01.23.
//

#include "Game.h"
#include <iostream>

Game::Game() {
    this->playground = new Playground();
}

void Game::startGame() {
    std::cout << "Welcome to this amazing Tic Tac Toe game!" << std::endl;
    std::cout << "Player one: 1; Player two: 2" << std::endl;
    std::cout << "Happy playing" << std::endl << std::endl;
    this->playground->printPlayground();
}

void Game::nextStep() {

}

bool Game::checkGameOver() {
    return false;
}

void Game::promptInput() {

}
