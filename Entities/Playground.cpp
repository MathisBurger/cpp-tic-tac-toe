//
// Created by Mathis Burger on 20.12.22.
//

#include "Playground.h"
#include <iostream>
#include <string>

/*
 * Inits empty playground
 */
Playground::Playground() {
    *this->fields = new int[]{0,0,0,0,0,0,0,0,0};
}

void Playground::printPlayground() {
    std::cout << "= = = = = = = = = = =" << std::endl;
    for (int r=0; r<3; r++) {
        std::string row = "";
        for (int i=1; i<=3; i++) {
            int index = (r*3) + i;
            row = row + "|| " + std::to_string(*this->fields[index]) + " ||";
        }
        std::cout << row << std::endl;
    }
}
