#pragma once
#include <string>
using namespace std;
class Circle
{
public:
    Circle();
    ~Circle();
    Circle(int r);
    Circle(const Circle* circle);
    
    int getRadius();
    double getArea();
    void setRadius(int r);
    void setName(string name);
    string getName();

private:
    string name;
    int radius=0;
protected:
    
};

class Ecllipse : public Circle{
private:
    int width=0;
public:
    Ecllipse(int r, int w);
    double getArea();
    void setWidth(int w);
    ~Ecllipse();
};