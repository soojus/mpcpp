#include "Rectangle.h"

Rectangle::Rectangle() : width(1), height(1) {}
Rectangle::~Rectangle() {
    cout << "Destroy Rectangle" << endl;
}
int Rectangle::getWidth(int w)
{
    width = w;
    return width;
}
int Rectangle::getHeight(int h)
{
    height = h;
    return height;
}
int Rectangle::getArea()
{
    return width * height;
}