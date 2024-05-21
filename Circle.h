class Circle
{
private:
    int radius=0;
public:
    Circle();
    ~Circle();
    Circle(int r);
    int getRadius();
    double getArea();
protected:
    void setRadius(int r);
};

class Ecllipse : public Circle{
private:
    int radius=0;
public:
    Ecllipse(int r, int w);
    double getArea();
    void setWidth(int w);
    ~Ecllipse();
};