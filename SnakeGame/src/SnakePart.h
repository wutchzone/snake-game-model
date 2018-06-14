#include <vector>
#include "SnakeGameItem.h"

#ifndef _SnakePart_
#define _SnakePart_

class SnakePart : public SnakeGameItem
{
public:
    enum PartType
    {
        Head,
        Body,
        Tail
    };
    SnakePart(int x, int y,PartType type);
private:
    PartType snakeType;
};
#endif
