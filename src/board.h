//
// Created by Flumz on 14/10/2024.
//

#ifndef BATTLESHIP_BOARD_H
#define BATTLESHIP_BOARD_H


class board {
public:
    board();
    void display() const;

private:
    static const int rows = 10;
    static const int cols = 10;
    char grid[rows][cols];
};


#endif //BATTLESHIP_BOARD_H
