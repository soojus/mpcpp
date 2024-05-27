#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point(int x, int y){this->x; this->y;}
    int getX(){return x;}
    int getY(){return y;}
protected:
    void move(int x, int y){
        this->x = x;
        this->y = y;
    }
};

class ColorPoint : public Point {
    string color;
public:
    ColorPoint() : Point(0,0){
        move(0,0);
        this->color = "BLACK";
    }
    ColorPoint(int x, int y) : Point(x,y){
        this->color = "BLACK";
    }
    ColorPoint(int x, int y, string color) : Point(x,y){
        this->color = color;
    }
    void setColor(string color){
        this->color = color;
    }
    string getColor(){
        return color;
    }
    void setPoint(int x, int y){
        move(x,y);
    }
    void show(){
        cout << color << "색으로 (" << getX() << ", " << getY() << ")에 위치한 점입니다." << endl;
    }
};

int main()
{
    ColorPoint cp(5,5,"RED");
    cp.setPoint(10,20);
    cp.setColor("BLUE");
    cp.show();

    ColorPoint zeroPoint;
    zeroPoint.show();

    ColorPoint cp2(5,5);
    cp2.setPoint(10,20);
    cp2.setColor("BLUE");
    cp2.show();


    return 0;
}