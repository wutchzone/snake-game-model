#include "SnakeGameItem.h"

SnakeGameItem::SnakeGameItem(int xLocation, int yLocation, Type type)
{
    this->xLocation = xLocation;
    this->yLocation = yLocation;
    this->gameType = type;
}
int SnakeGameItem::GetXLocation()
{
    return this->xLocation;
}
int SnakeGameItem::GetYLocation()
{
    return this->yLocation;
}
