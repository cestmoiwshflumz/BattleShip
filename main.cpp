#include <iostream>
#include "include/board.h"
#include "include/player.h"
#include "include/ship.h"
#include "include/shooting.h"

int main() {
    board b;
    b.build();
    b.display();
    return 0;
}
