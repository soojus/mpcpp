#include <iostream>
using namespace std;

class Oval
{
private:
    int width;
    int height;
public:
    Oval();
    ~Oval();
    Oval(int width, int height);
    int getWidth();
    int getHeight();
    void set(int width, int height);
    void show();
};

Oval::Oval()
{
    width = 1;
    height = 1;
}

Oval::~Oval()
{
    cout << "Oval 소멸 : width = " << width << ", height = " << height << endl;
}

Oval::Oval(int width, int height)
{
    this->width = width;
    this->height = height;
}

int Oval::getWidth(){ return width; }

int Oval::getHeight(){ return height; }

void Oval::set(int width, int height)
{
    this->width = width;
    this->height = height;
}

void Oval::show()
{
    cout << "width = " << width << ", height = " << height << endl;
}

int main(int argc, char const *argv[])
{
    Oval a, b(3, 4);
    a.set(10, 20);
    a.show();
    cout << b.getWidth() << ", " << b.getHeight() << endl;

    return 0;
}