//
// Created by Flumz on 14/10/2024.
//

#ifndef BATTLESHIP_BOARD_H
#define BATTLESHIP_BOARD_H


class board {
public:
    board();
    void display() const;
    void build();

private:
    static const int rows = 11;
    static const int cols = 11;
    std::string grid[rows][cols];

};


#endif //BATTLESHIP_BOARD_H
