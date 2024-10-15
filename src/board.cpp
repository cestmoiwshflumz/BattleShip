//
// Created by Flumz on 14/10/2024.
//

#include <iostream>
#include "board.h"

board::board() {
}

void board::display() const{

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
           std::cout << grid[i][j];
        }
    std::cout << std::endl;
    }

}

void board::build() {

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            grid[i][j] = ". ";
        }
    }
}
