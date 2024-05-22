#include "Rectangle.h"

Rectangle::Rectangle()
{
    width = 1;
    height = 1;
}
Rectangle::Rectangle(int w, int h)
{
    width = w;
    height = h;
}
int Rectangle::getArea()
{
    return width * height;
}