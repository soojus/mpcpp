#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;
void increase(Circle& c)
{
    int r = c.getRadius();
    c.setRadius(r + 1);
}
Circle* getCircle()
{
    Circle* temp =new Circle(30);
    return temp;
}
int main(int argc, char const *argv[])
{

    Circle waffle(30);
    waffle.setName("waffle");
    increase(waffle);
    cout << waffle.getRadius() << endl;

    Circle pizza(waffle);
    pizza.setName("pizza");

    cout << waffle.getName()<< endl;
    cout << pizza.getName()<< endl;

    Circle c;
    cout<<c.getRadius()<<endl;
    Circle* c2;
    c2=getCircle();
    cout<<c.getRadius()<<endl;

    delete c2;
    return 0;
}
