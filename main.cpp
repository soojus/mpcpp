#include <iostream>
using namespace std;

class Circle
{
private:
    int radius;
public:
    Circle(){

    }
    Circle(int r)
    {
        radius = r;
    }
    int getRadius()
    {
        return radius;
    }
    double getArea()
    {
        return 3.14 * radius * radius;
    }
};

int main(int argc, char const *argv[])
{
    Circle donut;
    Circle pizza(30);

    cout << "donut의 면적 = " << donut.getArea() << endl;
    cout << "pizza의 면적 = " << pizza.getArea() << endl;

    return 1;
}
