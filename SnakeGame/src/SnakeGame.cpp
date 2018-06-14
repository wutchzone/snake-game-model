#include "SnakeGame.h"
#include <iostream>

SnakeGame::SnakeGame(int xSize, int ySize, float tickInterval)
{
    _xSize = xSize;
    _ySize = ySize;
    
    _map.push_back(new SnakePart(xSize/2,ySize/2, SnakePart::Head));
}
SnakeGame::~SnakeGame()
{
    _map.clear();
}
SnakeGame::Direction SnakeGame::GetDirection()
{
    return _direction;
}
bool SnakeGame::SetDirection(Direction direction)
{
    if (_direction == direction)
    {
        return false;
    }
    else
    {
        _direction = direction;
        return true;
    }
}

/* Private members */
void SnakeGame::_moveSnake()
{
}
