#include "src/SnakeGame.h"
#include <iostream>

int main()
{
    SnakeGame game(10, 10, (float)1000.0);
    game.SetDirection(SnakeGame::Down);
    std::cout << game.GetDirection() << std::endl;
    return 0;
}
