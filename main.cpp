#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main(int argc, char const *argv[])
{
    {
        Circle *donut = new Circle();
        Circle *pizza = new Circle(30);


        Circle* circleArray=new Circle[2];
        

        Ecllipse e(10, 20);
        cout << pizza->getArea() << endl;
        cout << donut->getArea() << endl;
        cout << e.getArea() << endl;
        delete donut;
        delete pizza;
        delete[] circleArray;
    }
    Rectangle *box = new Rectangle(4, 40);
    Rectangle *phone = new Rectangle(10, 20);
    cout << box->getArea() << endl;
    cout << phone->getArea() << endl;

    delete box;
    delete phone;
    return 0;
}
