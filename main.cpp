#include <iostream>
using namespace std;

class Circle
{
private:
    int radius;
public:
    Circle();
    Circle(int r);
    int getRadius();
    double getArea();
};

Circle::Circle() { radius = 1; }
Circle::Circle(int r) { radius = r; }
int Circle::getRadius() { return radius; }
double Circle::getArea() { return 3.14 * radius * radius; }

int main(int argc, char const *argv[])
{
    Circle donut;
    Circle pizza(30);
    cout << "pizza의 면적 = " << pizza.getArea() << endl;
    cout << "donut의 면적 = " << donut.getArea() << endl;

    return 1;
}
