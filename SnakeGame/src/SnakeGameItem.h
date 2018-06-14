
#ifndef _SnakeGameItem_
#define _SnakeGameItem_
class SnakeGameItem
{
  public:
    enum Type
    {
        None,
        Snake,
        Apple
    };
    SnakeGameItem(int xLocation, int yLocation, Type type);
    int GetXLocation();
    int GetYLocation();

  protected:
    int xLocation {-1};
    int yLocation {-1};
    Type gameType;

};
#endif
