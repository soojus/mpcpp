class  Circle {
private:
    int radius;
public:
    Circle();
    Circle(int r);
    int getRadius(int r);
    double getArea();
protected:                  //상속될때 사용가능
    void setRadius(int r);
};

class Ecliipse : public Circle {
public:
    Ecliipse(int r) : Circle(r) {};
    double getArea();
private:
    int radius;
};