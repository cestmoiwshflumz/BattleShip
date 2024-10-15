#include <iostream>
#include "src/board.h"
#include "src/player.h"
#include "src/ship.h"
#include "src/shooting.h"

int main() {
    board b;
    b.build();
    b.display();
    return 0;
}
