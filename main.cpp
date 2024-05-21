#include <iostream>
#include "Circle.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Circle donut;
    Circle pizza(30);
    cout << pizza.getArea() << endl;
    cout << donut.getArea() << endl;

    return 0; 
}
