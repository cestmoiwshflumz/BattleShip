//
// Created by Flumz on 14/10/2024.
//

#include "board.h"

board::board() {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            grid[i][j] = '.';
        }
    }
}