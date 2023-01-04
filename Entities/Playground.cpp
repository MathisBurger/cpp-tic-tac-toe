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

/**
 * Updates the playground
 *
 * @param pos The position in the array that should be updated
 * @param val The value that should be set
 */
void Playground::updatePlayground(int pos, int val) {
    (*this->fields)[pos] = val;
}

/**
 * Prints a specific character with spaces to the playground
 *
 * @param c The char that should be printed
 */
void Playground::printChar(char c) {
    std::cout << c << " ";
}

/**
 * Checks if a field is occupied
 *
 * @param pos The position in the array that should be checked
 * @return If the field is occupied
 */
bool Playground::isOccupied(int pos) {
    int val = (*this->fields)[pos];
    return val > 0;
}

/**
 * Gets a specific value of a position on the playground
 *
 * @param pos The position that should be get
 * @return The value of the position
 */
int Playground::getPlaygroundPos(int pos) {
    return (*this->fields)[pos];
}
