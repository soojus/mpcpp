#include <iostream>
using namespace std;

class Circle
{
private:
    int radius;
public:
    Circle(){
        radius = 1;
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
    cout << pizza.getArea() << endl;
    cout << donut.getArea() << endl;

    return 0; 
}
