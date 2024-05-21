#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Circle donut;
    Circle pizza(30);
    cout << pizza.getArea() << endl;
    cout << donut.getArea() << endl;

    Rectangle box(4, 40);
    Rectangle phone(10, 20);
    cout << box.getArea() << endl;
    cout << phone.getArea() << endl;

    return 0; 
}
