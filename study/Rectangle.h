#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


class Rectangle {
private:
    int width;
    int height;
public:
    Rectangle();
    ~Rectangle();
    int getWidth(int w);
    int getHeight(int h);
    int getArea();
};