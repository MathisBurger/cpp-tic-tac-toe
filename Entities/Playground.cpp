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
    for (int i=0; i<3; i++) {
        for (int j=0; j<=2; j++) {
            int index = i*3+j;
            int num = (*this->fields)[index];
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}

void Playground::updatePlayground(int pos, int val) {
    (*this->fields)[pos] = val;
}
