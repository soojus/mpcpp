#include <iostream>
#include <string>
#include "Circle.h"
using namespace std;
Circle::Circle()
{
    radius = 1;
}
Circle::~Circle()
{
    std::cout << "Destroying Circle" << std::endl;
}
Circle::Circle(int radius) { this->radius = radius; }
Circle::Circle(const Circle *circle)
{
    this->radius = circle->radius;
    this->name = circle->name;
}
int Circle::getRadius() { return radius; }
double Circle::getArea() { return 3.14 * radius * radius; }



void Circle::setRadius(int r)
{
    radius = r;
}

void Circle::setName(string name)
{
    this->name = name;
}

string Circle::getName()
{
    return this->name;
}

Ecllipse::Ecllipse(int r, int w)
{
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
{
}
