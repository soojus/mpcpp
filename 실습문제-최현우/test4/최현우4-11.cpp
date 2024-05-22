#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class CoffeeVendingMachine{
    Container tong[3];
    void fill();
    void selectEspresso();
    void selectAmericano();
    void selectCafeLatte();
    void show();
    public:
    void run();
};

class Container{
    int size;
    public:
    Container() {this->size = 10;}
    void fill();
    void consume();
    int getSize();
};

int main ()
{

    return 0;
}