#include "Circle.h"
#include <iostream>
#include "Rectangle.h"

Circle::Circle() {
    radius=1;
    Rectangle *rect = new Rectangle(10,10);
}
Circle::~Circle()
{
    std::cout<<"Destroying Circle"<<std::endl;
    delete rect;
}
Circle::Circle(int r) { radius = r; }
int Circle::getRadius() { return radius; }
double Circle::getArea() { return 3.14 * radius * radius; }

void Circle::setRadius(int r)
{
    radius = r;
}

Ecllipse::Ecllipse(int r, int w){
        setRadius(r);
        setWidth(w);
    
}
double Ecllipse::getArea()
{
    return getRadius() * getRadius() * 3.14;    
    return 0.0;
}
void Ecllipse::setWidth(int w)
{
    width = w;
}
Ecllipse::~Ecllipse()
{}