#include <iostream>
#include "Circle.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Circle donut;
    Circle pizza(30);
    cout << "pizza의 면적 = " << pizza.getArea() << endl;
    cout << "donut의 면적 = " << donut.getArea() << endl;

    return 1;
}
