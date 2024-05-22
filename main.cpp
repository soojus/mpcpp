#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main(int argc, char const *argv[])
{
    {
        Circle *donut = new Circle();
        Circle *pizza = new Circle(30);
        Ecllipse e(10, 20);
        cout << "pizza의 면적 = " << pizza->getArea() << endl;
        cout << "donut의 면적 = " << donut->getArea() << endl;
        cout << e.getArea() << endl;
        delete donut;
        delete pizza;
    }

    Rectangle *box = new Rectangle(4, 40);
    Rectangle *phone = new Rectangle(10, 20);
    cout << "box의 면적 = " << box->getArea() << endl;
    cout << "phone의 면적 = " << phone->getArea() << endl;

    delete box;
    delete phone;

    return 0;
}
