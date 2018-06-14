#include "SnakePart.h"
#include "SnakeGameItem.h"
#include <vector>

#ifndef _SnakeGame_
#define _SnakeGame_

class SnakeGame
{
public:
    enum Direction
    {
        Up,
        Down,
        Right,
        Left
    };
    SnakeGame(int xSize, int ySize, float tickInterval);
    ~SnakeGame();
    Direction GetDirection();
    bool SetDirection(Direction direction);
    
    void TempMove();
private:
    std::vector<SnakeGameItem*> _map;
    int _xSize;
    int _ySize;
    Direction _direction;
    void _moveSnake();
};
#endif
