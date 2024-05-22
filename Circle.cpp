#include <iostream>
#include "Circle.h"
#include "Rectangle.h"


Circle::Circle() {
    radius=1;
    rect=new Rectangle(10,10);
    }
Circle::~Circle()
{
    delete rect;
    std::cout<<"Destroying Circle"<<std::endl;
}
Circle::Circle(int radius) { this->radius = radius; }
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
