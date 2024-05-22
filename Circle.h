#pragma once
#include "Rectangle.h"
class Circle
{
public:
    Circle();
    ~Circle();
    Circle(int r);
    int getRadius();
    double getArea();
    void setRadius(int r);
private:
    Rectangle* rect;
    int radius=0;
protected:
    
};

class Ecllipse : public Circle{
private:
    int width=0;
public:
    Ecllipse(int r, int w);
    double getArea();
    void setWidth(int w);
    ~Ecllipse();
};