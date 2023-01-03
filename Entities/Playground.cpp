//
// Created by Mathis Burger on 20.12.22.
//

#include "Playground.h"
#include <iostream>
#include <string>

/**
 * Inits empty playground
 */
Playground::Playground() {
    *this->fields = new int[]{0,0,0,0,0,0,0,0,0};
}

/**
 * Prints the whole playground to the CLI.
 */
void Playground::printPlayground() {
    std::cout << std::endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<=2; j++) {
            int index = i*3+j;
            int num = (*this->fields)[index];
            switch (num) {
                case 1:
                    this->printChar('A');
                    break;
                case 2:
                    this->printChar('B');
                    break;
                default:
                    this->printChar('0');
                    break;
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void Playground::updatePlayground(int pos, int val) {
    (*this->fields)[pos] = val;
}

void Playground::printChar(char c) {
    std::cout << c << " ";
}

bool Playground::isOccupied(int pos) {
    int val = (*this->fields)[pos];
    return val > 0;
}

bool Playground::isFieldFilled() {
    for (int i=0; i<9; i++) {
        int val = (*this->fields)[i];
        if (val == 0) {
            return false;
        }
    }
    return true;
}
