#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Circle donut;
    Circle pizza(30);
    cout << "pizza의 면적 = " << pizza.getArea() << endl;
    cout << "donut의 면적 = " << donut.getArea() << endl;

    Rectangle box(4, 40);
    Rectangle phone(10, 20);
    cout << "box의 면적 = " << box.getArea() << endl;
    cout << "phone의 면적 = " << phone.getArea() << endl;

    return 0;
}
