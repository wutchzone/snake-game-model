#include "SnakePart.h"

SnakePart::SnakePart(int x, int y, SnakePart::PartType type) : SnakeGameItem(x,y,SnakeGameItem::Snake)
{
    this->snakeType = type;
}
