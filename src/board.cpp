//
// Created by Flumz on 14/10/2024.
//

#include <iostream>
#include "board.h"

board::board() {
}

    void board::display() const {
    for (int i = 0; i < 11; ++i) {
        if ( i == 0){
            std::string i = "  ";
            std::cout << i << " ";
        }
        else if (i < 10) {
            std::cout << i << "  ";
        } else {
            std::cout << i;
        }
    }
    std::cout << std::endl;


    for (int i = 1; i < rows; ++i) {
        if (i < 10){
            std::cout << i << " ";
        } else{
            std::cout << i;
        }
        for (int j = 1; j < cols; ++j) {
           std::cout << grid[i][j];
        }
    std::cout << std::endl;
    }

}

void board::build() {

    for (int i = 1; i < rows; ++i) {
        for (int j = 1; j < cols; ++j) {
            grid[i][j] = " . ";
        }
    }
}
