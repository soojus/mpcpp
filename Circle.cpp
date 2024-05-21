#include <iostream>
#include "Circle.h"


Circle::Circle() {radius=1;}
Circle::~Circle()
{
    std::cout<<"Destroying Circle"<<std::endl;
}
Circle::Circle(int r) { radius = r; }
int Circle::getRadius() { return radius; }
double Circle::getArea() { return 3.14 * radius * radius; }